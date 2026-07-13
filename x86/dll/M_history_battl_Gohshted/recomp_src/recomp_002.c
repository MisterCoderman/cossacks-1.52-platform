#include "recomp.h"

/* __close_lk @ 0x1290f740 (170 bytes, 59 insns) */
void f_1290f740(void) {
  FTRACE(0x1290f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f740 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f741 mov ebp, esp */
  EBP = (ESP);
  /* 1290f743 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f744 push esi */
  push32((uint32_t)(ESI));
  /* 1290f745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f748 push eax */
  push32((uint32_t)(EAX));
  /* 1290f749 call 0x1290c0b0 */
  push32(0x1290f74eu); f_1290c0b0();
  /* 1290f74e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f751 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f754 je 0x1290f793 */
  if (C.zf) goto L_1290f793;
  /* 1290f756 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f75a je 0x1290f762 */
  if (C.zf) goto L_1290f762;
  /* 1290f75c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f760 jne 0x1290f77c */
  if (!C.zf) goto L_1290f77c;
L_1290f762:;
  /* 1290f762 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290f764 call 0x1290c0b0 */
  push32(0x1290f769u); f_1290c0b0();
  /* 1290f769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f76c mov esi, eax */
  ESI = (EAX);
  /* 1290f76e push 2 */
  push32((uint32_t)(0x2u));
  /* 1290f770 call 0x1290c0b0 */
  push32(0x1290f775u); f_1290c0b0();
  /* 1290f775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f778 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f77a je 0x1290f793 */
  if (C.zf) goto L_1290f793;
L_1290f77c:;
  /* 1290f77c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f77f push ecx */
  push32((uint32_t)(ECX));
  /* 1290f780 call 0x1290c0b0 */
  push32(0x1290f785u); f_1290c0b0();
  /* 1290f785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f788 push eax */
  push32((uint32_t)(EAX));
  /* 1290f789 call dword ptr [0x12930240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930240))), 0x1290f78fu);
  /* 1290f78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f791 je 0x1290f79c */
  if (C.zf) goto L_1290f79c;
L_1290f793:;
  /* 1290f793 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290f79a jmp 0x1290f7a5 */
  goto L_1290f7a5;
L_1290f79c:;
  /* 1290f79c call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290f7a2u);
  /* 1290f7a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290f7a5:;
  /* 1290f7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f7a8 push edx */
  push32((uint32_t)(EDX));
  /* 1290f7a9 call 0x1290bfd0 */
  push32(0x1290f7aeu); f_1290bfd0();
  /* 1290f7ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f7b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f7b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290f7b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f7ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290f7bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f7c0 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290f7c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1290f7cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f7d0 je 0x1290f7e3 */
  if (C.zf) goto L_1290f7e3;
  /* 1290f7d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f7d5 push eax */
  push32((uint32_t)(EAX));
  /* 1290f7d6 call 0x1290a970 */
  push32(0x1290f7dbu); f_1290a970();
  /* 1290f7db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f7de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f7e1 jmp 0x1290f7e5 */
  goto L_1290f7e5;
L_1290f7e3:;
  /* 1290f7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290f7e5:;
  /* 1290f7e5 pop esi */
  ESI = (pop32());
  /* 1290f7e6 mov esp, ebp */
  ESP = (EBP);
  /* 1290f7e8 pop ebp */
  EBP = (pop32());
  /* 1290f7e9 ret  */
  ESPCHK(0x1290f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x1290f7f0 (146 bytes, 52 insns) */
void f_1290f7f0(void) {
  FTRACE(0x1290f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290f7f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1290f7f4 push esi */
  push32((uint32_t)(ESI));
  /* 1290f7f5 push edi */
  push32((uint32_t)(EDI));
L_1290f7f6:;
  /* 1290f7f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f7fa jne 0x1290f81a */
  if (!C.zf) goto L_1290f81a;
  /* 1290f7fc push 0x12929fe0 */
  push32((uint32_t)(0x12929fe0u));
  /* 1290f801 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290f803 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1290f805 push 0x1292a6a8 */
  push32((uint32_t)(0x1292a6a8u));
  /* 1290f80a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290f80c call 0x12901c00 */
  push32(0x1290f811u); f_12901c00();
  /* 1290f811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f814 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f817 jne 0x1290f81a */
  if (!C.zf) goto L_1290f81a;
  /* 1290f819 int3  */
  x86_unimpl("int3 @ 0x1290f819");
L_1290f81a:;
  /* 1290f81a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f81c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f81e jne 0x1290f7f6 */
  if (!C.zf) goto L_1290f7f6;
  /* 1290f820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f823 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290f826 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1290f82c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290f82e je 0x1290f87d */
  if (C.zf) goto L_1290f87d;
  /* 1290f830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f833 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290f836 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1290f839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290f83b je 0x1290f87d */
  if (C.zf) goto L_1290f87d;
  /* 1290f83d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290f83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f842 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1290f845 push eax */
  push32((uint32_t)(EAX));
  /* 1290f846 call 0x129035d0 */
  push32(0x1290f84bu); f_129035d0();
  /* 1290f84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f84e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f851 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290f854 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1290f85a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f85d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1290f860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f863 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1290f869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f86c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1290f873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f876 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1290f87d:;
  /* 1290f87d pop edi */
  EDI = (pop32());
  /* 1290f87e pop esi */
  ESI = (pop32());
  /* 1290f87f pop ebx */
  EBX = (pop32());
  /* 1290f880 pop ebp */
  EBP = (pop32());
  /* 1290f881 ret  */
  ESPCHK(0x1290f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1290f890 (289 bytes, 97 insns) */
void f_1290f890(void) {
  FTRACE(0x1290f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f891 mov ebp, esp */
  EBP = (ESP);
  /* 1290f893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f896 push esi */
  push32((uint32_t)(ESI));
  /* 1290f897 mov eax, dword ptr [0x1292dc98] */
  EAX = (r32((uint32_t)(0x1292dc98)));
  /* 1290f89c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290f89f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290f8a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290f8ad jmp 0x1290f8b8 */
  goto L_1290f8b8;
L_1290f8af:;
  /* 1290f8af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f8b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f8b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1290f8b8:;
  /* 1290f8b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f8bc jae 0x1290f8f1 */
  if (!C.cf) goto L_1290f8f1;
  /* 1290f8be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f8c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f8c8 call 0x12905970 */
  push32(0x1290f8cdu); f_12905970();
  /* 1290f8cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f8d0 mov esi, eax */
  ESI = (EAX);
  /* 1290f8d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f8d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f8d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1290f8dc push ecx */
  push32((uint32_t)(ECX));
  /* 1290f8dd call 0x12905970 */
  push32(0x1290f8e2u); f_12905970();
  /* 1290f8e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f8e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f8e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1290f8ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290f8ef jmp 0x1290f8af */
  goto L_1290f8af;
L_1290f8f1:;
  /* 1290f8f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f8f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f8f7 push eax */
  push32((uint32_t)(EAX));
  /* 1290f8f8 call 0x12902b20 */
  push32(0x1290f8fdu); f_12902b20();
  /* 1290f8fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f900 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290f903 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f907 je 0x1290f9a9 */
  if (C.zf) goto L_1290f9a9;
  /* 1290f90d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f910 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290f913 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290f91a jmp 0x1290f925 */
  goto L_1290f925;
L_1290f91c:;
  /* 1290f91c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f91f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f922 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1290f925:;
  /* 1290f925 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f929 jae 0x1290f99a */
  if (!C.cf) goto L_1290f99a;
  /* 1290f92b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f92e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1290f931 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f934 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f937 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290f93a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f93d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f940 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290f943 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f944 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f947 push edx */
  push32((uint32_t)(EDX));
  /* 1290f948 call 0x12905af0 */
  push32(0x1290f94du); f_12905af0();
  /* 1290f94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f950 push eax */
  push32((uint32_t)(EAX));
  /* 1290f951 call 0x12905970 */
  push32(0x1290f956u); f_12905970();
  /* 1290f956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f959 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f95c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f95e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290f961 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f964 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1290f967 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f96a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f96d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290f970 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f973 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f976 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1290f97a push eax */
  push32((uint32_t)(EAX));
  /* 1290f97b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f97e push ecx */
  push32((uint32_t)(ECX));
  /* 1290f97f call 0x12905af0 */
  push32(0x1290f984u); f_12905af0();
  /* 1290f984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f987 push eax */
  push32((uint32_t)(EAX));
  /* 1290f988 call 0x12905970 */
  push32(0x1290f98du); f_12905970();
  /* 1290f98d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f990 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f993 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f995 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290f998 jmp 0x1290f91c */
  goto L_1290f91c;
L_1290f99a:;
  /* 1290f99a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f99d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1290f9a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290f9a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f9a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1290f9a9:;
  /* 1290f9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f9ac pop esi */
  ESI = (pop32());
  /* 1290f9ad mov esp, ebp */
  ESP = (EBP);
  /* 1290f9af pop ebp */
  EBP = (pop32());
  /* 1290f9b0 ret  */
  ESPCHK(0x1290f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9c0 @ 0x1290f9c0 (291 bytes, 97 insns) */
void f_1290f9c0(void) {
  FTRACE(0x1290f9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290f9c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f9c6 push esi */
  push32((uint32_t)(ESI));
  /* 1290f9c7 mov eax, dword ptr [0x1292dc98] */
  EAX = (r32((uint32_t)(0x1292dc98)));
  /* 1290f9cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290f9cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290f9d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290f9dd jmp 0x1290f9e8 */
  goto L_1290f9e8;
L_1290f9df:;
  /* 1290f9df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f9e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f9e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1290f9e8:;
  /* 1290f9e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f9ec jae 0x1290fa22 */
  if (!C.cf) goto L_1290fa22;
  /* 1290f9ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f9f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f9f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1290f9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f9f9 call 0x12905970 */
  push32(0x1290f9feu); f_12905970();
  /* 1290f9fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa01 mov esi, eax */
  ESI = (EAX);
  /* 1290fa03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fa06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fa09 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1290fa0d push ecx */
  push32((uint32_t)(ECX));
  /* 1290fa0e call 0x12905970 */
  push32(0x1290fa13u); f_12905970();
  /* 1290fa13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa16 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa19 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1290fa1d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290fa20 jmp 0x1290f9df */
  goto L_1290f9df;
L_1290fa22:;
  /* 1290fa22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290fa25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa28 push eax */
  push32((uint32_t)(EAX));
  /* 1290fa29 call 0x12902b20 */
  push32(0x1290fa2eu); f_12902b20();
  /* 1290fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290fa34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fa38 je 0x1290fadb */
  if (C.zf) goto L_1290fadb;
  /* 1290fa3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fa41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290fa44 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290fa4b jmp 0x1290fa56 */
  goto L_1290fa56;
L_1290fa4d:;
  /* 1290fa4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fa50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1290fa56:;
  /* 1290fa56 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fa5a jae 0x1290facc */
  if (!C.cf) goto L_1290facc;
  /* 1290fa5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa5f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1290fa62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290fa6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fa6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fa71 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1290fa75 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fa76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa79 push edx */
  push32((uint32_t)(EDX));
  /* 1290fa7a call 0x12905af0 */
  push32(0x1290fa7fu); f_12905af0();
  /* 1290fa7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa82 push eax */
  push32((uint32_t)(EAX));
  /* 1290fa83 call 0x12905970 */
  push32(0x1290fa88u); f_12905970();
  /* 1290fa88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290fa93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa96 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1290fa99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fa9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fa9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290faa2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290faa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290faa8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1290faac push eax */
  push32((uint32_t)(EAX));
  /* 1290faad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fab0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fab1 call 0x12905af0 */
  push32(0x1290fab6u); f_12905af0();
  /* 1290fab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fab9 push eax */
  push32((uint32_t)(EAX));
  /* 1290faba call 0x12905970 */
  push32(0x1290fabfu); f_12905970();
  /* 1290fabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fac2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fac5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fac7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290faca jmp 0x1290fa4d */
  goto L_1290fa4d;
L_1290facc:;
  /* 1290facc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290facf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1290fad2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fad8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1290fadb:;
  /* 1290fadb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fade pop esi */
  ESI = (pop32());
  /* 1290fadf mov esp, ebp */
  ESP = (EBP);
  /* 1290fae1 pop ebp */
  EBP = (pop32());
  /* 1290fae2 ret  */
  ESPCHK(0x1290f9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1290faf0 (878 bytes, 273 insns) */
void f_1290faf0(void) {
  FTRACE(0x1290faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1290faf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290faf6 push esi */
  push32((uint32_t)(ESI));
  /* 1290faf7 mov eax, dword ptr [0x1292dc98] */
  EAX = (r32((uint32_t)(0x1292dc98)));
  /* 1290fafc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290faff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290fb06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290fb0d jmp 0x1290fb18 */
  goto L_1290fb18;
L_1290fb0f:;
  /* 1290fb0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1290fb18:;
  /* 1290fb18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fb1c jae 0x1290fb51 */
  if (!C.cf) goto L_1290fb51;
  /* 1290fb1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fb24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290fb27 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fb28 call 0x12905970 */
  push32(0x1290fb2du); f_12905970();
  /* 1290fb2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb30 mov esi, eax */
  ESI = (EAX);
  /* 1290fb32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fb38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1290fb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1290fb3d call 0x12905970 */
  push32(0x1290fb42u); f_12905970();
  /* 1290fb42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1290fb4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290fb4f jmp 0x1290fb0f */
  goto L_1290fb0f;
L_1290fb51:;
  /* 1290fb51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290fb58 jmp 0x1290fb63 */
  goto L_1290fb63;
L_1290fb5a:;
  /* 1290fb5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1290fb63:;
  /* 1290fb63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fb67 jae 0x1290fb9d */
  if (!C.cf) goto L_1290fb9d;
  /* 1290fb69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fb6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1290fb73 push eax */
  push32((uint32_t)(EAX));
  /* 1290fb74 call 0x12905970 */
  push32(0x1290fb79u); f_12905970();
  /* 1290fb79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb7c mov esi, eax */
  ESI = (EAX);
  /* 1290fb7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fb81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fb84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1290fb88 push eax */
  push32((uint32_t)(EAX));
  /* 1290fb89 call 0x12905970 */
  push32(0x1290fb8eu); f_12905970();
  /* 1290fb8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fb94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1290fb98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290fb9b jmp 0x1290fb5a */
  goto L_1290fb5a;
L_1290fb9d:;
  /* 1290fb9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fba0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1290fba6 push eax */
  push32((uint32_t)(EAX));
  /* 1290fba7 call 0x12905970 */
  push32(0x1290fbacu); f_12905970();
  /* 1290fbac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fbaf mov esi, eax */
  ESI = (EAX);
  /* 1290fbb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fbb4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1290fbba push edx */
  push32((uint32_t)(EDX));
  /* 1290fbbb call 0x12905970 */
  push32(0x1290fbc0u); f_12905970();
  /* 1290fbc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fbc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fbc6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1290fbca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290fbcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fbd0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1290fbd6 push edx */
  push32((uint32_t)(EDX));
  /* 1290fbd7 call 0x12905970 */
  push32(0x1290fbdcu); f_12905970();
  /* 1290fbdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fbdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290fbe2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fbe6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290fbe9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fbec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1290fbf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fbf3 call 0x12905970 */
  push32(0x1290fbf8u); f_12905970();
  /* 1290fbf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fbfb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290fbfe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1290fc02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290fc05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fc08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1290fc0e push edx */
  push32((uint32_t)(EDX));
  /* 1290fc0f call 0x12905970 */
  push32(0x1290fc14u); f_12905970();
  /* 1290fc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290fc1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fc1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290fc21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290fc24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc29 push eax */
  push32((uint32_t)(EAX));
  /* 1290fc2a call 0x12902b20 */
  push32(0x1290fc2fu); f_12902b20();
  /* 1290fc2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290fc35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fc39 je 0x1290fe56 */
  if (C.zf) goto L_1290fe56;
  /* 1290fc3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fc42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1290fc45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fc48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290fc51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1290fc56 mov eax, dword ptr [0x1292dc98] */
  EAX = (r32((uint32_t)(0x1292dc98)));
  /* 1290fc5b push eax */
  push32((uint32_t)(EAX));
  /* 1290fc5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fc5f push ecx */
  push32((uint32_t)(ECX));
  /* 1290fc60 call 0x12909420 */
  push32(0x1290fc65u); f_12909420();
  /* 1290fc65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290fc6f jmp 0x1290fc7a */
  goto L_1290fc7a;
L_1290fc71:;
  /* 1290fc71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fc74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fc77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1290fc7a:;
  /* 1290fc7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fc7e jae 0x1290fcee */
  if (!C.cf) goto L_1290fcee;
  /* 1290fc80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fc83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fc86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fc89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1290fc8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fc8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fc92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290fc95 push edx */
  push32((uint32_t)(EDX));
  /* 1290fc96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fc99 push eax */
  push32((uint32_t)(EAX));
  /* 1290fc9a call 0x12905af0 */
  push32(0x1290fc9fu); f_12905af0();
  /* 1290fc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fca2 push eax */
  push32((uint32_t)(EAX));
  /* 1290fca3 call 0x12905970 */
  push32(0x1290fca8u); f_12905970();
  /* 1290fca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fcab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fcae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fcb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290fcb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fcb8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fcbb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fcbe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1290fcc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fcc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fcc8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1290fccc push edx */
  push32((uint32_t)(EDX));
  /* 1290fccd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fcd0 push eax */
  push32((uint32_t)(EAX));
  /* 1290fcd1 call 0x12905af0 */
  push32(0x1290fcd6u); f_12905af0();
  /* 1290fcd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fcd9 push eax */
  push32((uint32_t)(EAX));
  /* 1290fcda call 0x12905970 */
  push32(0x1290fcdfu); f_12905970();
  /* 1290fcdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fce2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fce5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fce9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290fcec jmp 0x1290fc71 */
  goto L_1290fc71;
L_1290fcee:;
  /* 1290fcee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290fcf5 jmp 0x1290fd00 */
  goto L_1290fd00;
L_1290fcf7:;
  /* 1290fcf7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fcfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fcfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1290fd00:;
  /* 1290fd00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fd04 jae 0x1290fd76 */
  if (!C.cf) goto L_1290fd76;
  /* 1290fd06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fd09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fd0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1290fd13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fd16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fd19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1290fd1d push eax */
  push32((uint32_t)(EAX));
  /* 1290fd1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd21 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fd22 call 0x12905af0 */
  push32(0x1290fd27u); f_12905af0();
  /* 1290fd27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fd2a push eax */
  push32((uint32_t)(EAX));
  /* 1290fd2b call 0x12905970 */
  push32(0x1290fd30u); f_12905970();
  /* 1290fd30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fd33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1290fd3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290fd3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fd40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fd43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1290fd4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fd4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fd50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1290fd54 push eax */
  push32((uint32_t)(EAX));
  /* 1290fd55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd58 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fd59 call 0x12905af0 */
  push32(0x1290fd5eu); f_12905af0();
  /* 1290fd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fd61 push eax */
  push32((uint32_t)(EAX));
  /* 1290fd62 call 0x12905970 */
  push32(0x1290fd67u); f_12905970();
  /* 1290fd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fd6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1290fd71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290fd74 jmp 0x1290fcf7 */
  goto L_1290fcf7;
L_1290fd76:;
  /* 1290fd76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fd79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1290fd82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fd85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1290fd8b push ecx */
  push32((uint32_t)(ECX));
  /* 1290fd8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fd8f push edx */
  push32((uint32_t)(EDX));
  /* 1290fd90 call 0x12905af0 */
  push32(0x1290fd95u); f_12905af0();
  /* 1290fd95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fd98 push eax */
  push32((uint32_t)(EAX));
  /* 1290fd99 call 0x12905970 */
  push32(0x1290fd9eu); f_12905970();
  /* 1290fd9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fda1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fda4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fda8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290fdab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fdae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fdb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1290fdb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fdba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1290fdc0 push eax */
  push32((uint32_t)(EAX));
  /* 1290fdc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fdc5 call 0x12905af0 */
  push32(0x1290fdcau); f_12905af0();
  /* 1290fdca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fdcd push eax */
  push32((uint32_t)(EAX));
  /* 1290fdce call 0x12905970 */
  push32(0x1290fdd3u); f_12905970();
  /* 1290fdd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fdd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fdd9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1290fddd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290fde0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fde3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fde6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1290fdec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fdef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1290fdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290fdf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fdf9 push edx */
  push32((uint32_t)(EDX));
  /* 1290fdfa call 0x12905af0 */
  push32(0x1290fdffu); f_12905af0();
  /* 1290fdff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fe02 push eax */
  push32((uint32_t)(EAX));
  /* 1290fe03 call 0x12905970 */
  push32(0x1290fe08u); f_12905970();
  /* 1290fe08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fe0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fe0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1290fe12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1290fe15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fe18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fe1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1290fe21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290fe24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1290fe2a push eax */
  push32((uint32_t)(EAX));
  /* 1290fe2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fe2e push ecx */
  push32((uint32_t)(ECX));
  /* 1290fe2f call 0x12905af0 */
  push32(0x1290fe34u); f_12905af0();
  /* 1290fe34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fe37 push eax */
  push32((uint32_t)(EAX));
  /* 1290fe38 call 0x12905970 */
  push32(0x1290fe3du); f_12905970();
  /* 1290fe3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fe40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fe43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1290fe47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290fe4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290fe4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290fe50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1290fe56:;
  /* 1290fe56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290fe59 pop esi */
  ESI = (pop32());
  /* 1290fe5a mov esp, ebp */
  ESP = (EBP);
  /* 1290fe5c pop ebp */
  EBP = (pop32());
  /* 1290fe5d ret  */
  ESPCHK(0x1290faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe60 @ 0x1290fe60 (31 bytes, 15 insns) */
void f_1290fe60(void) {
  FTRACE(0x1290fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 1290fe61 mov ebp, esp */
  EBP = (ESP);
  /* 1290fe63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290fe65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290fe68 push eax */
  push32((uint32_t)(EAX));
  /* 1290fe69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 1290fe6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290fe70 push edx */
  push32((uint32_t)(EDX));
  /* 1290fe71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290fe74 push eax */
  push32((uint32_t)(EAX));
  /* 1290fe75 call 0x1290fe80 */
  push32(0x1290fe7au); f_1290fe80();
  /* 1290fe7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fe7d pop ebp */
  EBP = (pop32());
  /* 1290fe7e ret  */
  ESPCHK(0x1290fe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x1290fe80 (393 bytes, 123 insns) */
void f_1290fe80(void) {
  FTRACE(0x1290fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290fe80 push ebp */
  push32((uint32_t)(EBP));
  /* 1290fe81 mov ebp, esp */
  EBP = (ESP);
  /* 1290fe83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290fe86 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fe8a jne 0x1290fe96 */
  if (!C.zf) goto L_1290fe96;
  /* 1290fe8c mov eax, dword ptr [0x1292dc98] */
  EAX = (r32((uint32_t)(0x1292dc98)));
  /* 1290fe91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1290fe94 jmp 0x1290fe9c */
  goto L_1290fe9c;
L_1290fe96:;
  /* 1290fe96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290fe99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1290fe9c:;
  /* 1290fe9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290fe9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290fea2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290fea5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290fea8 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290fead call dword ptr [0x12930278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930278))), 0x1290feb3u);
  /* 1290feb3 cmp dword ptr [0x1292e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290feba je 0x1290feda */
  if (C.zf) goto L_1290feda;
  /* 1290febc push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290fec1 call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x1290fec7u);
  /* 1290fec7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290fec9 call 0x12906540 */
  push32(0x1290feceu); f_12906540();
  /* 1290fece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290fed1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1290fed8 jmp 0x1290fee1 */
  goto L_1290fee1;
L_1290feda:;
  /* 1290feda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1290fee1:;
  /* 1290fee1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fee5 jbe 0x1290ffd2 */
  if ((C.cf||C.zf)) goto L_1290ffd2;
  /* 1290feeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290feee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290fef0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1290fef3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290fef7 je 0x1290ff01 */
  if (C.zf) goto L_1290ff01;
  /* 1290fef9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290fefd je 0x1290ff06 */
  if (C.zf) goto L_1290ff06;
  /* 1290feff jmp 0x1290ff60 */
  goto L_1290ff60;
L_1290ff01:;
  /* 1290ff01 jmp 0x1290ffd2 */
  goto L_1290ffd2;
L_1290ff06:;
  /* 1290ff06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff0c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1290ff0f mov dword ptr [0x1292e7f0], 0 */
  w32((uint32_t)(0x1292e7f0), (0x0u));
  /* 1290ff19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290ff1f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ff22 jne 0x1290ff37 */
  if (!C.zf) goto L_1290ff37;
  /* 1290ff24 mov dword ptr [0x1292e7f0], 1 */
  w32((uint32_t)(0x1292e7f0), (0x1u));
  /* 1290ff2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff34 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1290ff37:;
  /* 1290ff37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290ff3a push ecx */
  push32((uint32_t)(ECX));
  /* 1290ff3b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1290ff3e push edx */
  push32((uint32_t)(EDX));
  /* 1290ff3f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1290ff42 push eax */
  push32((uint32_t)(EAX));
  /* 1290ff43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290ff46 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ff47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290ff4c push eax */
  push32((uint32_t)(EAX));
  /* 1290ff4d call 0x12910010 */
  push32(0x1290ff52u); f_12910010();
  /* 1290ff52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1290ff5e jmp 0x1290ffcd */
  goto L_1290ffcd;
L_1290ff60:;
  /* 1290ff60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ff65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290ff67 mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 1290ff6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290ff6f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1290ff73 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ff79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290ff7b je 0x1290ffa8 */
  if (C.zf) goto L_1290ffa8;
  /* 1290ff7d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ff81 jbe 0x1290ffa8 */
  if ((C.cf||C.zf)) goto L_1290ffa8;
  /* 1290ff83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ff86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff89 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290ff8b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1290ff8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ff90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff93 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1290ff96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ff99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ff9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1290ff9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290ffa2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ffa5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1290ffa8:;
  /* 1290ffa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ffab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ffae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290ffb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1290ffb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ffb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ffb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1290ffbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ffbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ffc1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1290ffc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290ffc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ffca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1290ffcd:;
  /* 1290ffcd jmp 0x1290fee1 */
  goto L_1290fee1;
L_1290ffd2:;
  /* 1290ffd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ffd6 je 0x1290ffe4 */
  if (C.zf) goto L_1290ffe4;
  /* 1290ffd8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290ffda call 0x129065e0 */
  push32(0x1290ffdfu); f_129065e0();
  /* 1290ffdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ffe2 jmp 0x1290ffef */
  goto L_1290ffef;
L_1290ffe4:;
  /* 1290ffe4 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290ffe9 call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x1290ffefu);
L_1290ffef:;
  /* 1290ffef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290fff3 jbe 0x12910003 */
  if ((C.cf||C.zf)) goto L_12910003;
  /* 1290fff5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290fff8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1290fffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290fffe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910001 jmp 0x12910005 */
  goto L_12910005;
L_12910003:;
  /* 12910003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12910005:;
  /* 12910005 mov esp, ebp */
  ESP = (EBP);
  /* 12910007 pop ebp */
  EBP = (pop32());
  /* 12910008 ret  */
  ESPCHK(0x1290fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x12910010 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12910010(void) {
  FTRACE(0x12910010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910010 push ebp */
  push32((uint32_t)(EBP));
  /* 12910011 mov ebp, esp */
  EBP = (ESP);
  /* 12910013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910016 push esi */
  push32((uint32_t)(ESI));
  /* 12910017 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1291001b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1291001e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910021 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910024 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12910027 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291002b ja 0x12910578 */
  if ((!C.cf&&!C.zf)) goto L_12910578;
  /* 12910031 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12910036 mov dl, byte ptr [eax + 0x129105d9] */
  DL = (r8((uint32_t)(EAX + 0x129105d9)));
  /* 1291003c jmp dword ptr [edx*4 + 0x1291057d] */
  switch (EDX) {
    case 0: goto L_12910556;
    case 1: goto L_12910065;
    case 2: goto L_129100ab;
    case 3: goto L_129101f8;
    case 4: goto L_12910220;
    case 5: goto L_129102bf;
    case 6: goto L_1291032b;
    case 7: goto L_12910354;
    case 8: goto L_12910395;
    case 9: goto L_12910477;
    case 10: goto L_129104de;
    case 11: goto L_1291052b;
    case 12: goto L_12910043;
    case 13: goto L_12910088;
    case 14: goto L_129100ce;
    case 15: goto L_129101ce;
    case 16: goto L_12910265;
    case 17: goto L_12910292;
    case 18: goto L_129102e7;
    case 19: goto L_1291036b;
    case 20: goto L_12910419;
    case 21: goto L_129104a8;
    case 22: goto L_12910578;
    default: x86_unimpl("switch@0x1291003c out of table"); return;
  }
L_12910043:;
  /* 12910043 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910046 push ecx */
  push32((uint32_t)(ECX));
  /* 12910047 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291004a push edx */
  push32((uint32_t)(EDX));
  /* 1291004b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291004e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12910051 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910054 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12910057 push eax */
  push32((uint32_t)(EAX));
  /* 12910058 call 0x12910630 */
  push32(0x1291005du); f_12910630();
  /* 1291005d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910060 jmp 0x12910578 */
  goto L_12910578;
L_12910065:;
  /* 12910065 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910068 push ecx */
  push32((uint32_t)(ECX));
  /* 12910069 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291006c push edx */
  push32((uint32_t)(EDX));
  /* 1291006d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910070 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12910073 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910076 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1291007a push eax */
  push32((uint32_t)(EAX));
  /* 1291007b call 0x12910630 */
  push32(0x12910080u); f_12910630();
  /* 12910080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910083 jmp 0x12910578 */
  goto L_12910578;
L_12910088:;
  /* 12910088 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291008b push ecx */
  push32((uint32_t)(ECX));
  /* 1291008c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291008f push edx */
  push32((uint32_t)(EDX));
  /* 12910090 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910093 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12910096 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910099 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1291009d push eax */
  push32((uint32_t)(EAX));
  /* 1291009e call 0x12910630 */
  push32(0x129100a3u); f_12910630();
  /* 129100a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129100a6 jmp 0x12910578 */
  goto L_12910578;
L_129100ab:;
  /* 129100ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129100ae push ecx */
  push32((uint32_t)(ECX));
  /* 129100af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129100b2 push edx */
  push32((uint32_t)(EDX));
  /* 129100b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129100b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129100b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129100bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129100c0 push eax */
  push32((uint32_t)(EAX));
  /* 129100c1 call 0x12910630 */
  push32(0x129100c6u); f_12910630();
  /* 129100c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129100c9 jmp 0x12910578 */
  goto L_12910578;
L_129100ce:;
  /* 129100ce cmp dword ptr [0x1292e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129100d5 je 0x12910156 */
  if (C.zf) goto L_12910156;
  /* 129100d7 mov dword ptr [0x1292e7f0], 0 */
  w32((uint32_t)(0x1292e7f0), (0x0u));
  /* 129100e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129100e4 push ecx */
  push32((uint32_t)(ECX));
  /* 129100e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129100e8 push edx */
  push32((uint32_t)(EDX));
  /* 129100e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129100ec push eax */
  push32((uint32_t)(EAX));
  /* 129100ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129100f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129100f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129100f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 129100fa push eax */
  push32((uint32_t)(EAX));
  /* 129100fb call 0x129107e0 */
  push32(0x12910100u); f_129107e0();
  /* 12910100 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910103 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910106 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910109 jne 0x12910110 */
  if (!C.zf) goto L_12910110;
  /* 1291010b jmp 0x12910578 */
  goto L_12910578;
L_12910110:;
  /* 12910110 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910113 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910115 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12910118 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291011b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1291011d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910120 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910123 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12910125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910128 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1291012a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1291012d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910130 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12910132 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910135 push ecx */
  push32((uint32_t)(ECX));
  /* 12910136 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910139 push edx */
  push32((uint32_t)(EDX));
  /* 1291013a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291013d push eax */
  push32((uint32_t)(EAX));
  /* 1291013e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910141 push ecx */
  push32((uint32_t)(ECX));
  /* 12910142 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910145 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1291014b push eax */
  push32((uint32_t)(EAX));
  /* 1291014c call 0x129107e0 */
  push32(0x12910151u); f_129107e0();
  /* 12910151 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910154 jmp 0x129101c9 */
  goto L_129101c9;
L_12910156:;
  /* 12910156 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910159 push ecx */
  push32((uint32_t)(ECX));
  /* 1291015a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291015d push edx */
  push32((uint32_t)(EDX));
  /* 1291015e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910161 push eax */
  push32((uint32_t)(EAX));
  /* 12910162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910165 push ecx */
  push32((uint32_t)(ECX));
  /* 12910166 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910169 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1291016f push eax */
  push32((uint32_t)(EAX));
  /* 12910170 call 0x129107e0 */
  push32(0x12910175u); f_129107e0();
  /* 12910175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910178 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291017b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291017e jne 0x12910185 */
  if (!C.zf) goto L_12910185;
  /* 12910180 jmp 0x12910578 */
  goto L_12910578;
L_12910185:;
  /* 12910185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910188 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1291018a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1291018d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910190 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910192 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910195 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910198 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1291019a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291019d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1291019f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129101a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129101a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129101a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129101aa push ecx */
  push32((uint32_t)(ECX));
  /* 129101ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129101ae push edx */
  push32((uint32_t)(EDX));
  /* 129101af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129101b2 push eax */
  push32((uint32_t)(EAX));
  /* 129101b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129101b6 push ecx */
  push32((uint32_t)(ECX));
  /* 129101b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129101ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 129101c0 push eax */
  push32((uint32_t)(EAX));
  /* 129101c1 call 0x129107e0 */
  push32(0x129101c6u); f_129107e0();
  /* 129101c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129101c9:;
  /* 129101c9 jmp 0x12910578 */
  goto L_12910578;
L_129101ce:;
  /* 129101ce mov ecx, dword ptr [0x1292e7f0] */
  ECX = (r32((uint32_t)(0x1292e7f0)));
  /* 129101d4 mov dword ptr [0x1292e800], ecx */
  w32((uint32_t)(0x1292e800), (ECX));
  /* 129101da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129101dd push edx */
  push32((uint32_t)(EDX));
  /* 129101de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129101e1 push eax */
  push32((uint32_t)(EAX));
  /* 129101e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129101e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129101e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129101ea push edx */
  push32((uint32_t)(EDX));
  /* 129101eb call 0x12910680 */
  push32(0x129101f0u); f_12910680();
  /* 129101f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129101f3 jmp 0x12910578 */
  goto L_12910578;
L_129101f8:;
  /* 129101f8 mov eax, dword ptr [0x1292e7f0] */
  EAX = (r32((uint32_t)(0x1292e7f0)));
  /* 129101fd mov dword ptr [0x1292e800], eax */
  w32((uint32_t)(0x1292e800), (EAX));
  /* 12910202 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910205 push ecx */
  push32((uint32_t)(ECX));
  /* 12910206 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910209 push edx */
  push32((uint32_t)(EDX));
  /* 1291020a push 2 */
  push32((uint32_t)(0x2u));
  /* 1291020c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291020f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12910212 push ecx */
  push32((uint32_t)(ECX));
  /* 12910213 call 0x12910680 */
  push32(0x12910218u); f_12910680();
  /* 12910218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291021b jmp 0x12910578 */
  goto L_12910578;
L_12910220:;
  /* 12910220 mov edx, dword ptr [0x1292e7f0] */
  EDX = (r32((uint32_t)(0x1292e7f0)));
  /* 12910226 mov dword ptr [0x1292e800], edx */
  w32((uint32_t)(0x1292e800), (EDX));
  /* 1291022c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291022f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12910232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12910233 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12910238 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1291023a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1291023d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910241 jne 0x1291024a */
  if (!C.zf) goto L_1291024a;
  /* 12910243 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1291024a:;
  /* 1291024a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291024d push edx */
  push32((uint32_t)(EDX));
  /* 1291024e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910251 push eax */
  push32((uint32_t)(EAX));
  /* 12910252 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910257 push ecx */
  push32((uint32_t)(ECX));
  /* 12910258 call 0x12910680 */
  push32(0x1291025du); f_12910680();
  /* 1291025d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910260 jmp 0x12910578 */
  goto L_12910578;
L_12910265:;
  /* 12910265 mov edx, dword ptr [0x1292e7f0] */
  EDX = (r32((uint32_t)(0x1292e7f0)));
  /* 1291026b mov dword ptr [0x1292e800], edx */
  w32((uint32_t)(0x1292e800), (EDX));
  /* 12910271 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910274 push eax */
  push32((uint32_t)(EAX));
  /* 12910275 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910278 push ecx */
  push32((uint32_t)(ECX));
  /* 12910279 push 3 */
  push32((uint32_t)(0x3u));
  /* 1291027b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291027e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12910281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910284 push eax */
  push32((uint32_t)(EAX));
  /* 12910285 call 0x12910680 */
  push32(0x1291028au); f_12910680();
  /* 1291028a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291028d jmp 0x12910578 */
  goto L_12910578;
L_12910292:;
  /* 12910292 mov ecx, dword ptr [0x1292e7f0] */
  ECX = (r32((uint32_t)(0x1292e7f0)));
  /* 12910298 mov dword ptr [0x1292e800], ecx */
  w32((uint32_t)(0x1292e800), (ECX));
  /* 1291029e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129102a1 push edx */
  push32((uint32_t)(EDX));
  /* 129102a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129102a5 push eax */
  push32((uint32_t)(EAX));
  /* 129102a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129102a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129102ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129102ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129102b1 push edx */
  push32((uint32_t)(EDX));
  /* 129102b2 call 0x12910680 */
  push32(0x129102b7u); f_12910680();
  /* 129102b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129102ba jmp 0x12910578 */
  goto L_12910578;
L_129102bf:;
  /* 129102bf mov eax, dword ptr [0x1292e7f0] */
  EAX = (r32((uint32_t)(0x1292e7f0)));
  /* 129102c4 mov dword ptr [0x1292e800], eax */
  w32((uint32_t)(0x1292e800), (EAX));
  /* 129102c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129102cc push ecx */
  push32((uint32_t)(ECX));
  /* 129102cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129102d0 push edx */
  push32((uint32_t)(EDX));
  /* 129102d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129102d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129102d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129102d9 push ecx */
  push32((uint32_t)(ECX));
  /* 129102da call 0x12910680 */
  push32(0x129102dfu); f_12910680();
  /* 129102df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129102e2 jmp 0x12910578 */
  goto L_12910578;
L_129102e7:;
  /* 129102e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129102ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129102ee jg 0x1291030c */
  if ((!C.zf&&C.sf==C.of)) goto L_1291030c;
  /* 129102f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129102f3 push eax */
  push32((uint32_t)(EAX));
  /* 129102f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129102f7 push ecx */
  push32((uint32_t)(ECX));
  /* 129102f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129102fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12910301 push eax */
  push32((uint32_t)(EAX));
  /* 12910302 call 0x12910630 */
  push32(0x12910307u); f_12910630();
  /* 12910307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291030a jmp 0x12910326 */
  goto L_12910326;
L_1291030c:;
  /* 1291030c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291030f push ecx */
  push32((uint32_t)(ECX));
  /* 12910310 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910313 push edx */
  push32((uint32_t)(EDX));
  /* 12910314 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910317 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1291031d push ecx */
  push32((uint32_t)(ECX));
  /* 1291031e call 0x12910630 */
  push32(0x12910323u); f_12910630();
  /* 12910323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12910326:;
  /* 12910326 jmp 0x12910578 */
  goto L_12910578;
L_1291032b:;
  /* 1291032b mov edx, dword ptr [0x1292e7f0] */
  EDX = (r32((uint32_t)(0x1292e7f0)));
  /* 12910331 mov dword ptr [0x1292e800], edx */
  w32((uint32_t)(0x1292e800), (EDX));
  /* 12910337 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291033a push eax */
  push32((uint32_t)(EAX));
  /* 1291033b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291033e push ecx */
  push32((uint32_t)(ECX));
  /* 1291033f push 2 */
  push32((uint32_t)(0x2u));
  /* 12910341 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910344 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910346 push eax */
  push32((uint32_t)(EAX));
  /* 12910347 call 0x12910680 */
  push32(0x1291034cu); f_12910680();
  /* 1291034c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291034f jmp 0x12910578 */
  goto L_12910578;
L_12910354:;
  /* 12910354 mov ecx, dword ptr [0x1292e7f0] */
  ECX = (r32((uint32_t)(0x1292e7f0)));
  /* 1291035a mov dword ptr [0x1292e800], ecx */
  w32((uint32_t)(0x1292e800), (ECX));
  /* 12910360 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910363 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12910366 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12910369 jmp 0x129103bd */
  goto L_129103bd;
L_1291036b:;
  /* 1291036b mov ecx, dword ptr [0x1292e7f0] */
  ECX = (r32((uint32_t)(0x1292e7f0)));
  /* 12910371 mov dword ptr [0x1292e800], ecx */
  w32((uint32_t)(0x1292e800), (ECX));
  /* 12910377 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291037a push edx */
  push32((uint32_t)(EDX));
  /* 1291037b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291037e push eax */
  push32((uint32_t)(EAX));
  /* 1291037f push 1 */
  push32((uint32_t)(0x1u));
  /* 12910381 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910384 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12910387 push edx */
  push32((uint32_t)(EDX));
  /* 12910388 call 0x12910680 */
  push32(0x1291038du); f_12910680();
  /* 1291038d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910390 jmp 0x12910578 */
  goto L_12910578;
L_12910395:;
  /* 12910395 mov eax, dword ptr [0x1292e7f0] */
  EAX = (r32((uint32_t)(0x1292e7f0)));
  /* 1291039a mov dword ptr [0x1292e800], eax */
  w32((uint32_t)(0x1292e800), (EAX));
  /* 1291039f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129103a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129103a6 jne 0x129103b1 */
  if (!C.zf) goto L_129103b1;
  /* 129103a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 129103af jmp 0x129103bd */
  goto L_129103bd;
L_129103b1:;
  /* 129103b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129103b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 129103b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129103ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129103bd:;
  /* 129103bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129103c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129103c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129103c6 jge 0x129103d1 */
  if ((C.sf==C.of)) goto L_129103d1;
  /* 129103c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129103cf jmp 0x129103fe */
  goto L_129103fe;
L_129103d1:;
  /* 129103d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129103d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129103d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129103d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 129103dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129103df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129103e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129103e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129103e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129103e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 129103ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129103f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129103f3 jl 0x129103fe */
  if ((C.sf!=C.of)) goto L_129103fe;
  /* 129103f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129103f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129103fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129103fe:;
  /* 129103fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910401 push eax */
  push32((uint32_t)(EAX));
  /* 12910402 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910405 push ecx */
  push32((uint32_t)(ECX));
  /* 12910406 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291040b push edx */
  push32((uint32_t)(EDX));
  /* 1291040c call 0x12910680 */
  push32(0x12910411u); f_12910680();
  /* 12910411 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910414 jmp 0x12910578 */
  goto L_12910578;
L_12910419:;
  /* 12910419 cmp dword ptr [0x1292e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910420 je 0x12910450 */
  if (C.zf) goto L_12910450;
  /* 12910422 mov dword ptr [0x1292e7f0], 0 */
  w32((uint32_t)(0x1292e7f0), (0x0u));
  /* 1291042c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1291042f push eax */
  push32((uint32_t)(EAX));
  /* 12910430 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910433 push ecx */
  push32((uint32_t)(ECX));
  /* 12910434 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910437 push edx */
  push32((uint32_t)(EDX));
  /* 12910438 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291043b push eax */
  push32((uint32_t)(EAX));
  /* 1291043c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1291043f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12910445 push edx */
  push32((uint32_t)(EDX));
  /* 12910446 call 0x129107e0 */
  push32(0x1291044bu); f_129107e0();
  /* 1291044b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291044e jmp 0x12910472 */
  goto L_12910472;
L_12910450:;
  /* 12910450 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910453 push eax */
  push32((uint32_t)(EAX));
  /* 12910454 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910457 push ecx */
  push32((uint32_t)(ECX));
  /* 12910458 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291045b push edx */
  push32((uint32_t)(EDX));
  /* 1291045c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291045f push eax */
  push32((uint32_t)(EAX));
  /* 12910460 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910463 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12910469 push edx */
  push32((uint32_t)(EDX));
  /* 1291046a call 0x129107e0 */
  push32(0x1291046fu); f_129107e0();
  /* 1291046f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12910472:;
  /* 12910472 jmp 0x12910578 */
  goto L_12910578;
L_12910477:;
  /* 12910477 mov dword ptr [0x1292e7f0], 0 */
  w32((uint32_t)(0x1292e7f0), (0x0u));
  /* 12910481 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910484 push eax */
  push32((uint32_t)(EAX));
  /* 12910485 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910488 push ecx */
  push32((uint32_t)(ECX));
  /* 12910489 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291048c push edx */
  push32((uint32_t)(EDX));
  /* 1291048d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910490 push eax */
  push32((uint32_t)(EAX));
  /* 12910491 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910494 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1291049a push edx */
  push32((uint32_t)(EDX));
  /* 1291049b call 0x129107e0 */
  push32(0x129104a0u); f_129107e0();
  /* 129104a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129104a3 jmp 0x12910578 */
  goto L_12910578;
L_129104a8:;
  /* 129104a8 mov eax, dword ptr [0x1292e7f0] */
  EAX = (r32((uint32_t)(0x1292e7f0)));
  /* 129104ad mov dword ptr [0x1292e800], eax */
  w32((uint32_t)(0x1292e800), (EAX));
  /* 129104b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129104b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129104b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129104b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 129104be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129104c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129104c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129104c6 push edx */
  push32((uint32_t)(EDX));
  /* 129104c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129104ca push eax */
  push32((uint32_t)(EAX));
  /* 129104cb push 2 */
  push32((uint32_t)(0x2u));
  /* 129104cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129104d0 push ecx */
  push32((uint32_t)(ECX));
  /* 129104d1 call 0x12910680 */
  push32(0x129104d6u); f_12910680();
  /* 129104d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129104d9 jmp 0x12910578 */
  goto L_12910578;
L_129104de:;
  /* 129104de mov edx, dword ptr [0x1292e7f0] */
  EDX = (r32((uint32_t)(0x1292e7f0)));
  /* 129104e4 mov dword ptr [0x1292e800], edx */
  w32((uint32_t)(0x1292e800), (EDX));
  /* 129104ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129104ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 129104f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129104f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 129104f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129104f8 mov ecx, eax */
  ECX = (EAX);
  /* 129104fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129104fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12910500 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910503 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12910506 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12910507 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1291050c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1291050e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910510 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12910513 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910516 push eax */
  push32((uint32_t)(EAX));
  /* 12910517 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291051a push ecx */
  push32((uint32_t)(ECX));
  /* 1291051b push 4 */
  push32((uint32_t)(0x4u));
  /* 1291051d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910520 push edx */
  push32((uint32_t)(EDX));
  /* 12910521 call 0x12910680 */
  push32(0x12910526u); f_12910680();
  /* 12910526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910529 jmp 0x12910578 */
  goto L_12910578;
L_1291052b:;
  /* 1291052b call 0x12911640 */
  push32(0x12910530u); f_12911640();
  /* 12910530 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910533 push eax */
  push32((uint32_t)(EAX));
  /* 12910534 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910537 push ecx */
  push32((uint32_t)(ECX));
  /* 12910538 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291053b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291053d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910541 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12910544 mov ecx, dword ptr [eax*4 + 0x1292de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292de1c)));
  /* 1291054b push ecx */
  push32((uint32_t)(ECX));
  /* 1291054c call 0x12910630 */
  push32(0x12910551u); f_12910630();
  /* 12910551 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910554 jmp 0x12910578 */
  goto L_12910578;
L_12910556:;
  /* 12910556 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910559 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1291055b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1291055e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910561 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910563 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910566 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910569 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1291056b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291056e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910570 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910573 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910576 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12910578:;
  /* 12910578 pop esi */
  ESI = (pop32());
  /* 12910579 mov esp, ebp */
  ESP = (EBP);
  /* 1291057b pop ebp */
  EBP = (pop32());
  /* 1291057c ret  */
  ESPCHK(0x12910010u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12910630 (72 bytes, 30 insns) */
void f_12910630(void) {
  FTRACE(0x12910630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910630 push ebp */
  push32((uint32_t)(EBP));
  /* 12910631 mov ebp, esp */
  EBP = (ESP);
L_12910633:;
  /* 12910633 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910636 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910639 je 0x12910676 */
  if (C.zf) goto L_12910676;
  /* 1291063b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291063e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12910641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12910643 je 0x12910676 */
  if (C.zf) goto L_12910676;
  /* 12910645 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910648 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1291064a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291064d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291064f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12910651 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910654 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291065c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1291065e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910664 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12910667 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291066a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1291066c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1291066f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910672 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12910674 jmp 0x12910633 */
  goto L_12910633;
L_12910676:;
  /* 12910676 pop ebp */
  EBP = (pop32());
  /* 12910677 ret  */
  ESPCHK(0x12910630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x12910680 (173 bytes, 64 insns) */
void f_12910680(void) {
  FTRACE(0x12910680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910680 push ebp */
  push32((uint32_t)(EBP));
  /* 12910681 mov ebp, esp */
  EBP = (ESP);
  /* 12910683 push ecx */
  push32((uint32_t)(ECX));
  /* 12910684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1291068b cmp dword ptr [0x1292e800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910692 je 0x129106aa */
  if (C.zf) goto L_129106aa;
  /* 12910694 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910697 push eax */
  push32((uint32_t)(EAX));
  /* 12910698 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291069b push ecx */
  push32((uint32_t)(ECX));
  /* 1291069c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291069f push edx */
  push32((uint32_t)(EDX));
  /* 129106a0 call 0x12910730 */
  push32(0x129106a5u); f_12910730();
  /* 129106a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129106a8 jmp 0x12910729 */
  goto L_12910729;
L_129106aa:;
  /* 129106aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129106ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129106b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129106b2 jae 0x12910720 */
  if (!C.cf) goto L_12910720;
  /* 129106b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129106b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129106ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129106bd jmp 0x129106c8 */
  goto L_129106c8;
L_129106bf:;
  /* 129106bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129106c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129106c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_129106c8:;
  /* 129106c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129106cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129106ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129106d0 je 0x12910704 */
  if (C.zf) goto L_12910704;
  /* 129106d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129106d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129106d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 129106db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129106dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129106e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129106e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129106e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129106e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 129106eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129106ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129106ef mov ecx, 0xa */
  ECX = (0xau);
  /* 129106f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129106f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129106f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129106fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129106ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12910702 jmp 0x129106bf */
  goto L_129106bf;
L_12910704:;
  /* 12910704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910707 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910709 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291070c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291070f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12910711 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910714 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910716 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910719 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291071c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1291071e jmp 0x12910729 */
  goto L_12910729;
L_12910720:;
  /* 12910720 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910723 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12910729:;
  /* 12910729 mov esp, ebp */
  ESP = (EBP);
  /* 1291072b pop ebp */
  EBP = (pop32());
  /* 1291072c ret  */
  ESPCHK(0x12910680u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12910730 (172 bytes, 65 insns) */
void f_12910730(void) {
  FTRACE(0x12910730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910730 push ebp */
  push32((uint32_t)(EBP));
  /* 12910731 mov ebp, esp */
  EBP = (ESP);
  /* 12910733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910739 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1291073b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1291073e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910741 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910744 jbe 0x1291078b */
  if ((C.cf||C.zf)) goto L_1291078b;
L_12910746:;
  /* 12910746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910749 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1291074a mov ecx, 0xa */
  ECX = (0xau);
  /* 1291074f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12910751 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910757 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12910759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291075c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291075f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12910762 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910765 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910767 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1291076a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291076d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1291076f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910772 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12910773 mov ecx, 0xa */
  ECX = (0xau);
  /* 12910778 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1291077a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1291077d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910781 jle 0x1291078b */
  if ((C.zf||C.sf!=C.of)) goto L_1291078b;
  /* 12910783 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910786 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910789 ja 0x12910746 */
  if ((!C.cf&&!C.zf)) goto L_12910746;
L_1291078b:;
  /* 1291078b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291078e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910790 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12910793 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910799 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1291079b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291079e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129107a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129107a4:;
  /* 129107a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129107a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129107a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 129107ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129107af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129107b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129107b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129107b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129107b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129107bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129107bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129107c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 129107c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 129107c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129107ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129107cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129107d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129107d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129107d6 jb 0x129107a4 */
  if (C.cf) goto L_129107a4;
  /* 129107d8 mov esp, ebp */
  ESP = (EBP);
  /* 129107da pop ebp */
  EBP = (pop32());
  /* 129107db ret  */
  ESPCHK(0x12910730u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x129107e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_129107e0(void) {
  FTRACE(0x129107e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129107e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129107e1 mov ebp, esp */
  EBP = (ESP);
  /* 129107e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_129107e6:;
  /* 129107e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129107e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129107ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129107ee je 0x12910c5c */
  if (C.zf) goto L_12910c5c;
  /* 129107f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129107f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129107fa je 0x12910c5c */
  if (C.zf) goto L_12910c5c;
  /* 12910800 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12910804 mov dword ptr [0x1292e800], 0 */
  w32((uint32_t)(0x1292e800), (0x0u));
  /* 1291080e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12910815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910818 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1291081b jmp 0x12910826 */
  goto L_12910826;
L_1291081d:;
  /* 1291081d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910820 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910823 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12910826:;
  /* 12910826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910829 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1291082c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291082f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12910832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1291083b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291083d jne 0x12910841 */
  if (!C.zf) goto L_12910841;
  /* 1291083f jmp 0x1291081d */
  goto L_1291081d;
L_12910841:;
  /* 12910841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910844 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910847 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1291084a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291084d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12910850 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12910853 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12910856 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910859 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1291085c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910860 ja 0x12910bb0 */
  if ((!C.cf&&!C.zf)) goto L_12910bb0;
  /* 12910866 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12910869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291086b mov al, byte ptr [ecx + 0x12910c8c] */
  AL = (r8((uint32_t)(ECX + 0x12910c8c)));
  /* 12910871 jmp dword ptr [eax*4 + 0x12910c60] */
  switch (EAX) {
    case 0: goto L_12910acf;
    case 1: goto L_129109b3;
    case 2: goto L_1291093e;
    case 3: goto L_12910878;
    case 4: goto L_129108b6;
    case 5: goto L_12910917;
    case 6: goto L_12910965;
    case 7: goto L_1291098c;
    case 8: goto L_129109fa;
    case 9: goto L_129108f4;
    case 10: goto L_12910bb0;
    default: x86_unimpl("switch@0x12910871 out of table"); return;
  }
L_12910878:;
  /* 12910878 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291087b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1291087e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12910881 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12910887 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291088b ja 0x129108b1 */
  if ((!C.cf&&!C.zf)) goto L_129108b1;
  /* 1291088d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12910890 jmp dword ptr [ecx*4 + 0x12910cdf] */
  switch (ECX) {
    case 0: goto L_12910897;
    case 1: goto L_129108a1;
    case 2: goto L_129108a7;
    case 3: goto L_129108ad;
    case 4: goto L_129108d5;
    case 5: goto L_129108df;
    case 6: goto L_129108e5;
    case 7: goto L_129108eb;
    default: x86_unimpl("switch@0x12910890 out of table"); return;
  }
L_12910897:;
  /* 12910897 mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_129108a1:;
  /* 129108a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 129108a5 jmp 0x129108b1 */
  goto L_129108b1;
L_129108a7:;
  /* 129108a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 129108ab jmp 0x129108b1 */
  goto L_129108b1;
L_129108ad:;
  /* 129108ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_129108b1:;
  /* 129108b1 jmp 0x12910bb0 */
  goto L_12910bb0;
L_129108b6:;
  /* 129108b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129108b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129108bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129108bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129108c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129108c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129108c9 ja 0x129108ef */
  if ((!C.cf&&!C.zf)) goto L_129108ef;
  /* 129108cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129108ce jmp dword ptr [ecx*4 + 0x12910cef] */
  switch (ECX) {
    case 0: goto L_129108d5;
    case 1: goto L_129108df;
    case 2: goto L_129108e5;
    case 3: goto L_129108eb;
    default: x86_unimpl("switch@0x129108ce out of table"); return;
  }
L_129108d5:;
  /* 129108d5 mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_129108df:;
  /* 129108df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 129108e3 jmp 0x129108ef */
  goto L_129108ef;
L_129108e5:;
  /* 129108e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 129108e9 jmp 0x129108ef */
  goto L_129108ef;
L_129108eb:;
  /* 129108eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_129108ef:;
  /* 129108ef jmp 0x12910bb0 */
  goto L_12910bb0;
L_129108f4:;
  /* 129108f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129108f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129108fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129108fe je 0x12910908 */
  if (C.zf) goto L_12910908;
  /* 12910900 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910904 je 0x1291090e */
  if (C.zf) goto L_1291090e;
  /* 12910906 jmp 0x12910912 */
  goto L_12910912;
L_12910908:;
  /* 12910908 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1291090c jmp 0x12910912 */
  goto L_12910912;
L_1291090e:;
  /* 1291090e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12910912:;
  /* 12910912 jmp 0x12910bb0 */
  goto L_12910bb0;
L_12910917:;
  /* 12910917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291091a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1291091d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910921 je 0x1291092b */
  if (C.zf) goto L_1291092b;
  /* 12910923 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910927 je 0x12910935 */
  if (C.zf) goto L_12910935;
  /* 12910929 jmp 0x12910939 */
  goto L_12910939;
L_1291092b:;
  /* 1291092b mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_12910935:;
  /* 12910935 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12910939:;
  /* 12910939 jmp 0x12910bb0 */
  goto L_12910bb0;
L_1291093e:;
  /* 1291093e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910941 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12910944 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910948 je 0x12910952 */
  if (C.zf) goto L_12910952;
  /* 1291094a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291094e je 0x1291095c */
  if (C.zf) goto L_1291095c;
  /* 12910950 jmp 0x12910960 */
  goto L_12910960;
L_12910952:;
  /* 12910952 mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_1291095c:;
  /* 1291095c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12910960:;
  /* 12910960 jmp 0x12910bb0 */
  goto L_12910bb0;
L_12910965:;
  /* 12910965 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910968 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1291096b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291096f je 0x12910979 */
  if (C.zf) goto L_12910979;
  /* 12910971 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910975 je 0x12910983 */
  if (C.zf) goto L_12910983;
  /* 12910977 jmp 0x12910987 */
  goto L_12910987;
L_12910979:;
  /* 12910979 mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_12910983:;
  /* 12910983 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12910987:;
  /* 12910987 jmp 0x12910bb0 */
  goto L_12910bb0;
L_1291098c:;
  /* 1291098c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291098f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12910992 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910996 je 0x129109a0 */
  if (C.zf) goto L_129109a0;
  /* 12910998 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291099c je 0x129109aa */
  if (C.zf) goto L_129109aa;
  /* 1291099e jmp 0x129109ae */
  goto L_129109ae;
L_129109a0:;
  /* 129109a0 mov dword ptr [0x1292e800], 1 */
  w32((uint32_t)(0x1292e800), (0x1u));
L_129109aa:;
  /* 129109aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_129109ae:;
  /* 129109ae jmp 0x12910bb0 */
  goto L_12910bb0;
L_129109b3:;
  /* 129109b3 push 0x1292a7dc */
  push32((uint32_t)(0x1292a7dcu));
  /* 129109b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129109bb push ecx */
  push32((uint32_t)(ECX));
  /* 129109bc call 0x12911210 */
  push32(0x129109c1u); f_12911210();
  /* 129109c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129109c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129109c6 jne 0x129109d3 */
  if (!C.zf) goto L_129109d3;
  /* 129109c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129109cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129109ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129109d1 jmp 0x129109f1 */
  goto L_129109f1;
L_129109d3:;
  /* 129109d3 push 0x1292a7d8 */
  push32((uint32_t)(0x1292a7d8u));
  /* 129109d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129109db push eax */
  push32((uint32_t)(EAX));
  /* 129109dc call 0x12911210 */
  push32(0x129109e1u); f_12911210();
  /* 129109e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129109e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129109e6 jne 0x129109f1 */
  if (!C.zf) goto L_129109f1;
  /* 129109e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129109eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129109ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129109f1:;
  /* 129109f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 129109f5 jmp 0x12910bb0 */
  goto L_12910bb0;
L_129109fa:;
  /* 129109fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129109fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910a01 jg 0x12910a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_12910a11;
  /* 12910a03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910a06 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12910a0c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12910a0f jmp 0x12910a1d */
  goto L_12910a1d;
L_12910a11:;
  /* 12910a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910a14 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12910a1a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12910a1d:;
  /* 12910a1d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910a21 jle 0x12910ac4 */
  if ((C.zf||C.sf!=C.of)) goto L_12910ac4;
  /* 12910a27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910a2a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910a2d jbe 0x12910ac4 */
  if ((C.cf||C.zf)) goto L_12910ac4;
  /* 12910a33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12910a36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12910a38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12910a3a mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 12910a40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12910a42 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12910a46 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12910a4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12910a4e je 0x12910a87 */
  if (C.zf) goto L_12910a87;
  /* 12910a50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910a53 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910a56 jbe 0x12910a87 */
  if ((C.cf||C.zf)) goto L_12910a87;
  /* 12910a58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910a5d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12910a60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12910a62 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12910a64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910a6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12910a71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12910a74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910a77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12910a7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910a7d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910a7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910a82 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910a85 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12910a87:;
  /* 12910a87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910a8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12910a8f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12910a91 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12910a93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910a98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910a9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910a9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12910aa0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12910aa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910aa6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12910aa9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910aac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910aae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910ab1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910ab4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12910ab6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910ab9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910abc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12910abf jmp 0x12910a1d */
  goto L_12910a1d;
L_12910ac4:;
  /* 12910ac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910ac7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12910aca jmp 0x129107e6 */
  goto L_129107e6;
L_12910acf:;
  /* 12910acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910ad2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12910ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12910ad7 je 0x12910ba2 */
  if (C.zf) goto L_12910ba2;
  /* 12910add mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910ae0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910ae3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12910ae6:;
  /* 12910ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910ae9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12910aec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12910aee je 0x12910ba0 */
  if (C.zf) goto L_12910ba0;
  /* 12910af4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910af7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910afa je 0x12910ba0 */
  if (C.zf) goto L_12910ba0;
  /* 12910b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12910b06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910b09 jne 0x12910b19 */
  if (!C.zf) goto L_12910b19;
  /* 12910b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910b11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12910b14 jmp 0x12910ba0 */
  goto L_12910ba0;
L_12910b19:;
  /* 12910b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12910b1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12910b20 mov edx, dword ptr [0x1292cc98] */
  EDX = (r32((uint32_t)(0x1292cc98)));
  /* 12910b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12910b28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12910b2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12910b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12910b33 je 0x12910b6c */
  if (C.zf) goto L_12910b6c;
  /* 12910b35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910b38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910b3b jbe 0x12910b6c */
  if ((C.cf||C.zf)) goto L_12910b6c;
  /* 12910b3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910b42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12910b47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12910b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910b51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12910b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910b5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12910b5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910b62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910b64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910b67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910b6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12910b6c:;
  /* 12910b6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910b71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12910b76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12910b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910b83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12910b85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910b88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910b8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12910b8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910b91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910b93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910b96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910b99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12910b9b jmp 0x12910ae6 */
  goto L_12910ae6;
L_12910ba0:;
  /* 12910ba0 jmp 0x12910bab */
  goto L_12910bab;
L_12910ba2:;
  /* 12910ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910ba5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12910bab:;
  /* 12910bab jmp 0x129107e6 */
  goto L_129107e6;
L_12910bb0:;
  /* 12910bb0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12910bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12910bb6 je 0x12910bdc */
  if (C.zf) goto L_12910bdc;
  /* 12910bb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12910bbb push edx */
  push32((uint32_t)(EDX));
  /* 12910bbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910bbf push eax */
  push32((uint32_t)(EAX));
  /* 12910bc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12910bc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910bc7 push edx */
  push32((uint32_t)(EDX));
  /* 12910bc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12910bcb push eax */
  push32((uint32_t)(EAX));
  /* 12910bcc call 0x12910010 */
  push32(0x12910bd1u); f_12910010();
  /* 12910bd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12910bd7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12910bda jmp 0x12910c57 */
  goto L_12910c57;
L_12910bdc:;
  /* 12910bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12910be1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12910be3 mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 12910be9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12910beb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12910bef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12910bf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12910bf7 je 0x12910c28 */
  if (C.zf) goto L_12910c28;
  /* 12910bf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910bfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910c01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12910c03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12910c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910c08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910c0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910c0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910c10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12910c12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910c18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12910c1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910c1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910c20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910c23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910c26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12910c28:;
  /* 12910c28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910c2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12910c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910c30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12910c32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12910c34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910c37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910c39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910c3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910c3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12910c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12910c44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910c47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12910c4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910c4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12910c4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910c52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910c55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12910c57:;
  /* 12910c57 jmp 0x129107e6 */
  goto L_129107e6;
L_12910c5c:;
  /* 12910c5c mov esp, ebp */
  ESP = (EBP);
  /* 12910c5e pop ebp */
  EBP = (pop32());
  /* 12910c5f ret  */
  ESPCHK(0x129107e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x12910d00 (650 bytes, 178 insns) */
void f_12910d00(void) {
  FTRACE(0x12910d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12910d01 mov ebp, esp */
  EBP = (ESP);
  /* 12910d03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12910d09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910d0d jne 0x12910e69 */
  if (!C.zf) goto L_12910e69;
  /* 12910d13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910d16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12910d1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12910d22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12910d25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12910d2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12910d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910d38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12910d3e push edx */
  push32((uint32_t)(EDX));
  /* 12910d3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910d42 push eax */
  push32((uint32_t)(EAX));
  /* 12910d43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910d46 push ecx */
  push32((uint32_t)(ECX));
  /* 12910d47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910d4a push edx */
  push32((uint32_t)(EDX));
  /* 12910d4b call 0x12912120 */
  push32(0x12910d50u); f_12912120();
  /* 12910d50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910d53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12910d56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910d5a jne 0x12910def */
  if (!C.zf) goto L_12910def;
  /* 12910d60 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x12910d66u);
  /* 12910d66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910d69 je 0x12910d70 */
  if (C.zf) goto L_12910d70;
  /* 12910d6b jmp 0x12910e4d */
  goto L_12910e4d;
L_12910d70:;
  /* 12910d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910d76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910d79 push eax */
  push32((uint32_t)(EAX));
  /* 12910d7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910d7d push ecx */
  push32((uint32_t)(ECX));
  /* 12910d7e call 0x12912120 */
  push32(0x12910d83u); f_12912120();
  /* 12910d83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910d86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12910d8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910d93 jne 0x12910d9a */
  if (!C.zf) goto L_12910d9a;
  /* 12910d95 jmp 0x12910e4d */
  goto L_12910e4d;
L_12910d9a:;
  /* 12910d9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12910d9c push 0x1292a7e4 */
  push32((uint32_t)(0x1292a7e4u));
  /* 12910da1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910da3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12910da9 push edx */
  push32((uint32_t)(EDX));
  /* 12910daa call 0x12902b40 */
  push32(0x12910dafu); f_12902b40();
  /* 12910daf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910db2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12910db5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910db9 jne 0x12910dc0 */
  if (!C.zf) goto L_12910dc0;
  /* 12910dbb jmp 0x12910e4d */
  goto L_12910e4d;
L_12910dc0:;
  /* 12910dc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12910dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910dc9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12910dcf push eax */
  push32((uint32_t)(EAX));
  /* 12910dd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12910dd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12910dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910ddb push eax */
  push32((uint32_t)(EAX));
  /* 12910ddc call 0x12912120 */
  push32(0x12910de1u); f_12912120();
  /* 12910de1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910de4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12910de7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910deb jne 0x12910def */
  if (!C.zf) goto L_12910def;
  /* 12910ded jmp 0x12910e4d */
  goto L_12910e4d;
L_12910def:;
  /* 12910def push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12910df1 push 0x1292a7e4 */
  push32((uint32_t)(0x1292a7e4u));
  /* 12910df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910df8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12910dfb push ecx */
  push32((uint32_t)(ECX));
  /* 12910dfc call 0x12902b40 */
  push32(0x12910e01u); f_12902b40();
  /* 12910e01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910e04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12910e0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12910e0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12910e12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910e15 jne 0x12910e19 */
  if (!C.zf) goto L_12910e19;
  /* 12910e17 jmp 0x12910e4d */
  goto L_12910e4d;
L_12910e19:;
  /* 12910e19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12910e1c push ecx */
  push32((uint32_t)(ECX));
  /* 12910e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910e20 push edx */
  push32((uint32_t)(EDX));
  /* 12910e21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12910e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12910e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12910e2a call 0x12906360 */
  push32(0x12910e2fu); f_12906360();
  /* 12910e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910e32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910e36 je 0x12910e46 */
  if (C.zf) goto L_12910e46;
  /* 12910e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910e3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910e3d push edx */
  push32((uint32_t)(EDX));
  /* 12910e3e call 0x129035d0 */
  push32(0x12910e43u); f_129035d0();
  /* 12910e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12910e46:;
  /* 12910e46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12910e48 jmp 0x12910f86 */
  goto L_12910f86;
L_12910e4d:;
  /* 12910e4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910e51 je 0x12910e61 */
  if (C.zf) goto L_12910e61;
  /* 12910e53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12910e55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12910e58 push eax */
  push32((uint32_t)(EAX));
  /* 12910e59 call 0x129035d0 */
  push32(0x12910e5eu); f_129035d0();
  /* 12910e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12910e61:;
  /* 12910e61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12910e64 jmp 0x12910f86 */
  goto L_12910f86;
L_12910e69:;
  /* 12910e69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910e6d jne 0x12910f83 */
  if (!C.zf) goto L_12910f83;
  /* 12910e73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12910e7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12910e80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12910e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12910e88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12910e8e push edx */
  push32((uint32_t)(EDX));
  /* 12910e8f push 0x1292e718 */
  push32((uint32_t)(0x1292e718u));
  /* 12910e94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12910e97 push eax */
  push32((uint32_t)(EAX));
  /* 12910e98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12910e9b push ecx */
  push32((uint32_t)(ECX));
  /* 12910e9c call 0x12911f80 */
  push32(0x12910ea1u); f_12911f80();
  /* 12910ea1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12910ea6 jne 0x12910eb0 */
  if (!C.zf) goto L_12910eb0;
  /* 12910ea8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12910eab jmp 0x12910f86 */
  goto L_12910f86;
L_12910eb0:;
  /* 12910eb0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12910eb6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12910eb9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12910ec3 jmp 0x12910ed4 */
  goto L_12910ed4;
L_12910ec5:;
  /* 12910ec5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12910ecb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12910ece mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12910ed4:;
  /* 12910ed4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910edb jge 0x12910f7f */
  if ((C.sf==C.of)) goto L_12910f7f;
  /* 12910ee1 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910ee8 jle 0x12910f1b */
  if ((C.zf||C.sf!=C.of)) goto L_12910f1b;
  /* 12910eea push 4 */
  push32((uint32_t)(0x4u));
  /* 12910eec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12910ef2 mov dl, byte ptr [ecx*2 + 0x1292e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1292e718)));
  /* 12910ef9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12910eff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12910f05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12910f0a push eax */
  push32((uint32_t)(EAX));
  /* 12910f0b call 0x12908b50 */
  push32(0x12910f10u); f_12908b50();
  /* 12910f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910f13 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12910f19 jmp 0x12910f4e */
  goto L_12910f4e;
L_12910f1b:;
  /* 12910f1b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12910f21 mov dl, byte ptr [ecx*2 + 0x1292e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1292e718)));
  /* 12910f28 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12910f2e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12910f34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12910f39 mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 12910f3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12910f41 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12910f45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12910f48 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12910f4e:;
  /* 12910f4e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910f55 je 0x12910f78 */
  if (C.zf) goto L_12910f78;
  /* 12910f57 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12910f5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12910f60 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12910f63 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12910f6a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12910f6e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12910f74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12910f76 jmp 0x12910f7a */
  goto L_12910f7a;
L_12910f78:;
  /* 12910f78 jmp 0x12910f7f */
  goto L_12910f7f;
L_12910f7a:;
  /* 12910f7a jmp 0x12910ec5 */
  goto L_12910ec5;
L_12910f7f:;
  /* 12910f7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12910f81 jmp 0x12910f86 */
  goto L_12910f86;
L_12910f83:;
  /* 12910f83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12910f86:;
  /* 12910f86 mov esp, ebp */
  ESP = (EBP);
  /* 12910f88 pop ebp */
  EBP = (pop32());
  /* 12910f89 ret  */
  ESPCHK(0x12910d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x12910f90 (10 bytes, 5 insns) */
void f_12910f90(void) {
  FTRACE(0x12910f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12910f91 mov ebp, esp */
  EBP = (ESP);
  /* 12910f93 mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 12910f98 pop ebp */
  EBP = (pop32());
  /* 12910f99 ret  */
  ESPCHK(0x12910f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x12910fa0 (575 bytes, 196 insns) */
void f_12910fa0(void) {
  FTRACE(0x12910fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12910fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12910fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12910fa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12910fa5 push 0x1292a7f0 */
  push32((uint32_t)(0x1292a7f0u));
  /* 12910faa push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 12910faf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12910fb5 push eax */
  push32((uint32_t)(EAX));
  /* 12910fb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12910fbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12910fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 12910fc1 push esi */
  push32((uint32_t)(ESI));
  /* 12910fc2 push edi */
  push32((uint32_t)(EDI));
  /* 12910fc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12910fc6 cmp dword ptr [0x1292e724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12910fcd jne 0x1291101e */
  if (!C.zf) goto L_1291101e;
  /* 12910fcf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12910fd2 push eax */
  push32((uint32_t)(EAX));
  /* 12910fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12910fd5 push 0x12929f24 */
  push32((uint32_t)(0x12929f24u));
  /* 12910fda push 1 */
  push32((uint32_t)(0x1u));
  /* 12910fdc call dword ptr [0x12930324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930324))), 0x12910fe2u);
  /* 12910fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12910fe4 je 0x12910ff2 */
  if (C.zf) goto L_12910ff2;
  /* 12910fe6 mov dword ptr [0x1292e724], 1 */
  w32((uint32_t)(0x1292e724), (0x1u));
  /* 12910ff0 jmp 0x1291101e */
  goto L_1291101e;
L_12910ff2:;
  /* 12910ff2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12910ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 12910ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12910ff8 push 0x12929f20 */
  push32((uint32_t)(0x12929f20u));
  /* 12910ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 12910fff push 0 */
  push32((uint32_t)(0x0u));
  /* 12911001 call dword ptr [0x12930320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930320))), 0x12911007u);
  /* 12911007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911009 je 0x12911017 */
  if (C.zf) goto L_12911017;
  /* 1291100b mov dword ptr [0x1292e724], 2 */
  w32((uint32_t)(0x1292e724), (0x2u));
  /* 12911015 jmp 0x1291101e */
  goto L_1291101e;
L_12911017:;
  /* 12911017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911019 jmp 0x129111f9 */
  goto L_129111f9;
L_1291101e:;
  /* 1291101e cmp dword ptr [0x1292e724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911025 jne 0x12911042 */
  if (!C.zf) goto L_12911042;
  /* 12911027 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291102a push edx */
  push32((uint32_t)(EDX));
  /* 1291102b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291102e push eax */
  push32((uint32_t)(EAX));
  /* 1291102f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12911032 push ecx */
  push32((uint32_t)(ECX));
  /* 12911033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911036 push edx */
  push32((uint32_t)(EDX));
  /* 12911037 call dword ptr [0x12930324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930324))), 0x1291103du);
  /* 1291103d jmp 0x129111f9 */
  goto L_129111f9;
L_12911042:;
  /* 12911042 cmp dword ptr [0x1292e724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911049 jne 0x129111f7 */
  if (!C.zf) goto L_129111f7;
  /* 1291104f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911053 jne 0x1291105d */
  if (!C.zf) goto L_1291105d;
  /* 12911055 mov eax, dword ptr [0x1292e698] */
  EAX = (r32((uint32_t)(0x1292e698)));
  /* 1291105a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1291105d:;
  /* 1291105d push 0 */
  push32((uint32_t)(0x0u));
  /* 1291105f push 0 */
  push32((uint32_t)(0x0u));
  /* 12911061 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911065 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911068 push ecx */
  push32((uint32_t)(ECX));
  /* 12911069 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291106c push edx */
  push32((uint32_t)(EDX));
  /* 1291106d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12911072 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12911075 push eax */
  push32((uint32_t)(EAX));
  /* 12911076 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x1291107cu);
  /* 1291107c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1291107f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911083 jne 0x1291108c */
  if (!C.zf) goto L_1291108c;
  /* 12911085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911087 jmp 0x129111f9 */
  goto L_129111f9;
L_1291108c:;
  /* 1291108c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12911093 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12911096 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911099 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1291109b call 0x12905ce0 */
  push32(0x129110a0u); f_12905ce0();
  /* 129110a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 129110a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129110a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129110a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129110ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129110af push edx */
  push32((uint32_t)(EDX));
  /* 129110b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129110b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129110b5 push eax */
  push32((uint32_t)(EAX));
  /* 129110b6 call 0x129068b0 */
  push32(0x129110bbu); f_129068b0();
  /* 129110bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129110be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129110c5 jmp 0x129110de */
  goto L_129110de;
  /* 129110c7 mov eax, 1 */
  EAX = (0x1u);
  /* 129110cc ret  */
  ESPCHK(0x12910fa0u, _esp0);
  ESP += 4; return;
  /* 129110cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129110d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 129110d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129110de:;
  /* 129110de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129110e2 jne 0x129110eb */
  if (!C.zf) goto L_129110eb;
  /* 129110e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129110e6 jmp 0x129111f9 */
  goto L_129111f9;
L_129110eb:;
  /* 129110eb push 0 */
  push32((uint32_t)(0x0u));
  /* 129110ed push 0 */
  push32((uint32_t)(0x0u));
  /* 129110ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129110f2 push ecx */
  push32((uint32_t)(ECX));
  /* 129110f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129110f6 push edx */
  push32((uint32_t)(EDX));
  /* 129110f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129110fa push eax */
  push32((uint32_t)(EAX));
  /* 129110fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129110fe push ecx */
  push32((uint32_t)(ECX));
  /* 129110ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12911104 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12911107 push edx */
  push32((uint32_t)(EDX));
  /* 12911108 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x1291110eu);
  /* 1291110e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911110 jne 0x12911119 */
  if (!C.zf) goto L_12911119;
  /* 12911112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911114 jmp 0x129111f9 */
  goto L_129111f9;
L_12911119:;
  /* 12911119 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12911120 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12911123 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12911127 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291112a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1291112c call 0x12905ce0 */
  push32(0x12911131u); f_12905ce0();
  /* 12911131 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12911134 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12911137 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1291113a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1291113d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12911144 jmp 0x1291115d */
  goto L_1291115d;
  /* 12911146 mov eax, 1 */
  EAX = (0x1u);
  /* 1291114b ret  */
  ESPCHK(0x12910fa0u, _esp0);
  ESP += 4; return;
  /* 1291114c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1291114f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12911156 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1291115d:;
  /* 1291115d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911161 jne 0x1291116a */
  if (!C.zf) goto L_1291116a;
  /* 12911163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911165 jmp 0x129111f9 */
  goto L_129111f9;
L_1291116a:;
  /* 1291116a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291116e jne 0x12911179 */
  if (!C.zf) goto L_12911179;
  /* 12911170 mov edx, dword ptr [0x1292e688] */
  EDX = (r32((uint32_t)(0x1292e688)));
  /* 12911176 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12911179:;
  /* 12911179 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291117c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1291117f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12911185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911188 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1291118b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12911192 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12911195 push ecx */
  push32((uint32_t)(ECX));
  /* 12911196 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12911199 push edx */
  push32((uint32_t)(EDX));
  /* 1291119a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1291119d push eax */
  push32((uint32_t)(EAX));
  /* 1291119e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129111a1 push ecx */
  push32((uint32_t)(ECX));
  /* 129111a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129111a5 push edx */
  push32((uint32_t)(EDX));
  /* 129111a6 call dword ptr [0x12930320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930320))), 0x129111acu);
  /* 129111ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129111af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129111b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129111b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129111b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 129111bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129111c2 je 0x129111d8 */
  if (C.zf) goto L_129111d8;
  /* 129111c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129111c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129111ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129111cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129111d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129111d6 je 0x129111dc */
  if (C.zf) goto L_129111dc;
L_129111d8:;
  /* 129111d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129111da jmp 0x129111f9 */
  goto L_129111f9;
L_129111dc:;
  /* 129111dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129111df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129111e1 push eax */
  push32((uint32_t)(EAX));
  /* 129111e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129111e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129111e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129111e9 push edx */
  push32((uint32_t)(EDX));
  /* 129111ea call 0x1290aa30 */
  push32(0x129111efu); f_1290aa30();
  /* 129111ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129111f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129111f5 jmp 0x129111f9 */
  goto L_129111f9;
L_129111f7:;
  /* 129111f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129111f9:;
  /* 129111f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 129111fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129111ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12911206 pop edi */
  EDI = (pop32());
  /* 12911207 pop esi */
  ESI = (pop32());
  /* 12911208 pop ebx */
  EBX = (pop32());
  /* 12911209 mov esp, ebp */
  ESP = (EBP);
  /* 1291120b pop ebp */
  EBP = (pop32());
  /* 1291120c ret  */
  ESPCHK(0x12910fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x12911210 (208 bytes, 85 insns) */
void f_12911210(void) {
  FTRACE(0x12911210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911210 push ebp */
  push32((uint32_t)(EBP));
  /* 12911211 mov ebp, esp */
  EBP = (ESP);
  /* 12911213 push edi */
  push32((uint32_t)(EDI));
  /* 12911214 push esi */
  push32((uint32_t)(ESI));
  /* 12911215 push ebx */
  push32((uint32_t)(EBX));
  /* 12911216 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12911219 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1291121c lea eax, [0x1292e680] */
  EAX = ((uint32_t)(0x1292e680));
  /* 12911222 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911226 jne 0x12911263 */
  if (!C.zf) goto L_12911263;
  /* 12911228 mov al, 0xff */
  AL = (0xffu);
  /* 1291122a mov edi, edi */
  EDI = (EDI);
L_1291122c:;
  /* 1291122c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1291122e je 0x1291125e */
  if (C.zf) goto L_1291125e;
  /* 12911230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12911232 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12911233 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12911235 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12911236 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911238 je 0x1291122c */
  if (C.zf) goto L_1291122c;
  /* 1291123a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1291123c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1291123e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12911240 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12911243 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12911245 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12911247 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12911249 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1291124b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1291124d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1291124f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12911252 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12911254 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12911256 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911258 je 0x1291122c */
  if (C.zf) goto L_1291122c;
  /* 1291125a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1291125c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1291125e:;
  /* 1291125e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12911261 jmp 0x129112db */
  goto L_129112db;
L_12911263:;
  /* 12911263 lock inc dword ptr [0x1292e814] */
  x86_unimpl("lock inc @ 0x12911263");
  /* 1291126a cmp dword ptr [0x1292e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911271 jg 0x12911277 */
  if ((!C.zf&&C.sf==C.of)) goto L_12911277;
  /* 12911273 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911275 jmp 0x1291128c */
  goto L_1291128c;
L_12911277:;
  /* 12911277 lock dec dword ptr [0x1292e814] */
  x86_unimpl("lock dec @ 0x12911277");
  /* 1291127e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12911280 call 0x12906540 */
  push32(0x12911285u); f_12906540();
  /* 12911285 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1291128c:;
  /* 1291128c mov eax, 0xff */
  EAX = (0xffu);
  /* 12911291 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12911293 nop  */
  /* nop */
L_12911294:;
  /* 12911294 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12911296 je 0x129112bf */
  if (C.zf) goto L_129112bf;
  /* 12911298 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1291129a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1291129b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1291129d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1291129e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129112a0 je 0x12911294 */
  if (C.zf) goto L_12911294;
  /* 129112a2 push eax */
  push32((uint32_t)(EAX));
  /* 129112a3 push ebx */
  push32((uint32_t)(EBX));
  /* 129112a4 call 0x12912380 */
  push32(0x129112a9u); f_12912380();
  /* 129112a9 mov ebx, eax */
  EBX = (EAX);
  /* 129112ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129112ae call 0x12912380 */
  push32(0x129112b3u); f_12912380();
  /* 129112b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129112b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129112b8 je 0x12911294 */
  if (C.zf) goto L_12911294;
  /* 129112ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129112bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129112bf:;
  /* 129112bf mov ebx, eax */
  EBX = (EAX);
  /* 129112c1 pop eax */
  EAX = (pop32());
  /* 129112c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129112c4 jne 0x129112cf */
  if (!C.zf) goto L_129112cf;
  /* 129112c6 lock dec dword ptr [0x1292e814] */
  x86_unimpl("lock dec @ 0x129112c6");
  /* 129112cd jmp 0x129112d9 */
  goto L_129112d9;
L_129112cf:;
  /* 129112cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129112d1 call 0x129065e0 */
  push32(0x129112d6u); f_129065e0();
  /* 129112d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129112d9:;
  /* 129112d9 mov eax, ebx */
  EAX = (EBX);
L_129112db:;
  /* 129112db pop ebx */
  EBX = (pop32());
  /* 129112dc pop esi */
  ESI = (pop32());
  /* 129112dd pop edi */
  EDI = (pop32());
  /* 129112de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129112df ret  */
  ESPCHK(0x12911210u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x129112e0 (257 bytes, 103 insns) */
void f_129112e0(void) {
  FTRACE(0x129112e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129112e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129112e1 mov ebp, esp */
  EBP = (ESP);
  /* 129112e3 push edi */
  push32((uint32_t)(EDI));
  /* 129112e4 push esi */
  push32((uint32_t)(ESI));
  /* 129112e5 push ebx */
  push32((uint32_t)(EBX));
  /* 129112e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129112e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129112eb je 0x129113da */
  if (C.zf) goto L_129113da;
  /* 129112f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 129112f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 129112f7 lea eax, [0x1292e680] */
  EAX = ((uint32_t)(0x1292e680));
  /* 129112fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911301 jne 0x12911351 */
  if (!C.zf) goto L_12911351;
  /* 12911303 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12911305 mov bl, 0x5a */
  BL = (0x5au);
  /* 12911307 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12911309 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1291130c:;
  /* 1291130c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1291130e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12911310 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12911312 je 0x12911335 */
  if (C.zf) goto L_12911335;
  /* 12911314 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12911316 je 0x12911335 */
  if (C.zf) goto L_12911335;
  /* 12911318 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12911319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1291131a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1291131c jb 0x12911324 */
  if (C.cf) goto L_12911324;
  /* 1291131e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911320 ja 0x12911324 */
  if ((!C.cf&&!C.zf)) goto L_12911324;
  /* 12911322 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12911324:;
  /* 12911324 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911326 jb 0x1291132e */
  if (C.cf) goto L_1291132e;
  /* 12911328 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1291132a ja 0x1291132e */
  if ((!C.cf&&!C.zf)) goto L_1291132e;
  /* 1291132c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1291132e:;
  /* 1291132e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911330 jne 0x1291133f */
  if (!C.zf) goto L_1291133f;
  /* 12911332 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12911333 jne 0x1291130c */
  if (!C.zf) goto L_1291130c;
L_12911335:;
  /* 12911335 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911337 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12911339 je 0x129113da */
  if (C.zf) goto L_129113da;
L_1291133f:;
  /* 1291133f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12911344 jb 0x129113da */
  if (C.cf) goto L_129113da;
  /* 1291134a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1291134c jmp 0x129113da */
  goto L_129113da;
L_12911351:;
  /* 12911351 lock inc dword ptr [0x1292e814] */
  x86_unimpl("lock inc @ 0x12911351");
  /* 12911358 cmp dword ptr [0x1292e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291135f jg 0x12911365 */
  if ((!C.zf&&C.sf==C.of)) goto L_12911365;
  /* 12911361 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911363 jmp 0x1291137e */
  goto L_1291137e;
L_12911365:;
  /* 12911365 lock dec dword ptr [0x1292e814] */
  x86_unimpl("lock dec @ 0x12911365");
  /* 1291136c mov ebx, ecx */
  EBX = (ECX);
  /* 1291136e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12911370 call 0x12906540 */
  push32(0x12911375u); f_12906540();
  /* 12911375 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1291137c mov ecx, ebx */
  ECX = (EBX);
L_1291137e:;
  /* 1291137e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911380 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12911382 mov edi, edi */
  EDI = (EDI);
L_12911384:;
  /* 12911384 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12911386 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911388 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1291138a je 0x129113af */
  if (C.zf) goto L_129113af;
  /* 1291138c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1291138e je 0x129113af */
  if (C.zf) goto L_129113af;
  /* 12911390 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12911391 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12911392 push ecx */
  push32((uint32_t)(ECX));
  /* 12911393 push eax */
  push32((uint32_t)(EAX));
  /* 12911394 push ebx */
  push32((uint32_t)(EBX));
  /* 12911395 call 0x12912380 */
  push32(0x1291139au); f_12912380();
  /* 1291139a mov ebx, eax */
  EBX = (EAX);
  /* 1291139c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291139f call 0x12912380 */
  push32(0x129113a4u); f_12912380();
  /* 129113a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129113a7 pop ecx */
  ECX = (pop32());
  /* 129113a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129113aa jne 0x129113b5 */
  if (!C.zf) goto L_129113b5;
  /* 129113ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129113ad jne 0x12911384 */
  if (!C.zf) goto L_12911384;
L_129113af:;
  /* 129113af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129113b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129113b3 je 0x129113be */
  if (C.zf) goto L_129113be;
L_129113b5:;
  /* 129113b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 129113ba jb 0x129113be */
  if (C.cf) goto L_129113be;
  /* 129113bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_129113be:;
  /* 129113be pop eax */
  EAX = (pop32());
  /* 129113bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129113c1 jne 0x129113cc */
  if (!C.zf) goto L_129113cc;
  /* 129113c3 lock dec dword ptr [0x1292e814] */
  x86_unimpl("lock dec @ 0x129113c3");
  /* 129113ca jmp 0x129113da */
  goto L_129113da;
L_129113cc:;
  /* 129113cc mov ebx, ecx */
  EBX = (ECX);
  /* 129113ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129113d0 call 0x129065e0 */
  push32(0x129113d5u); f_129065e0();
  /* 129113d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129113d8 mov ecx, ebx */
  ECX = (EBX);
L_129113da:;
  /* 129113da mov eax, ecx */
  EAX = (ECX);
  /* 129113dc pop ebx */
  EBX = (pop32());
  /* 129113dd pop esi */
  ESI = (pop32());
  /* 129113de pop edi */
  EDI = (pop32());
  /* 129113df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129113e0 ret  */
  ESPCHK(0x129112e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x129113f0 (255 bytes, 88 insns) */
void f_129113f0(void) {
  FTRACE(0x129113f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129113f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129113f1 mov ebp, esp */
  EBP = (ESP);
  /* 129113f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_129113f6:;
  /* 129113f6 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129113fd jle 0x12911416 */
  if ((C.zf||C.sf!=C.of)) goto L_12911416;
  /* 129113ff push 8 */
  push32((uint32_t)(0x8u));
  /* 12911401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911404 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911406 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12911408 push ecx */
  push32((uint32_t)(ECX));
  /* 12911409 call 0x12908b50 */
  push32(0x1291140eu); f_12908b50();
  /* 1291140e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911411 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12911414 jmp 0x1291142f */
  goto L_1291142f;
L_12911416:;
  /* 12911416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291141b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291141d mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 12911423 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911425 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12911429 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1291142c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1291142f:;
  /* 1291142f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911433 je 0x12911440 */
  if (C.zf) goto L_12911440;
  /* 12911435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911438 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291143b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1291143e jmp 0x129113f6 */
  goto L_129113f6;
L_12911440:;
  /* 12911440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911443 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911445 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12911447 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1291144a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291144d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911450 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12911453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911456 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12911459 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291145d je 0x12911465 */
  if (C.zf) goto L_12911465;
  /* 1291145f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911463 jne 0x12911478 */
  if (!C.zf) goto L_12911478;
L_12911465:;
  /* 12911465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291146a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291146c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1291146f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911472 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911475 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12911478:;
  /* 12911478 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1291147f:;
  /* 1291147f cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911486 jle 0x1291149b */
  if ((C.zf||C.sf!=C.of)) goto L_1291149b;
  /* 12911488 push 4 */
  push32((uint32_t)(0x4u));
  /* 1291148a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291148d push edx */
  push32((uint32_t)(EDX));
  /* 1291148e call 0x12908b50 */
  push32(0x12911493u); f_12908b50();
  /* 12911493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911496 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12911499 jmp 0x129114b0 */
  goto L_129114b0;
L_1291149b:;
  /* 1291149b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291149e mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 129114a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129114a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129114aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129114ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129114b0:;
  /* 129114b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129114b4 je 0x129114db */
  if (C.zf) goto L_129114db;
  /* 129114b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129114b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129114bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129114bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 129114c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129114c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129114c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129114cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129114cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129114d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129114d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129114d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129114d9 jmp 0x1291147f */
  goto L_1291147f;
L_129114db:;
  /* 129114db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129114df jne 0x129114e8 */
  if (!C.zf) goto L_129114e8;
  /* 129114e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129114e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129114e6 jmp 0x129114eb */
  goto L_129114eb;
L_129114e8:;
  /* 129114e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129114eb:;
  /* 129114eb mov esp, ebp */
  ESP = (EBP);
  /* 129114ed pop ebp */
  EBP = (pop32());
  /* 129114ee ret  */
  ESPCHK(0x129113f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x129114f0 (17 bytes, 8 insns) */
void f_129114f0(void) {
  FTRACE(0x129114f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129114f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129114f1 mov ebp, esp */
  EBP = (ESP);
  /* 129114f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129114f6 push eax */
  push32((uint32_t)(EAX));
  /* 129114f7 call 0x129113f0 */
  push32(0x129114fcu); f_129113f0();
  /* 129114fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129114ff pop ebp */
  EBP = (pop32());
  /* 12911500 ret  */
  ESPCHK(0x129114f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x12911510 (297 bytes, 106 insns) */
void f_12911510(void) {
  FTRACE(0x12911510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911510 push ebp */
  push32((uint32_t)(EBP));
  /* 12911511 mov ebp, esp */
  EBP = (ESP);
  /* 12911513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911516 push esi */
  push32((uint32_t)(ESI));
L_12911517:;
  /* 12911517 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291151e jle 0x12911537 */
  if ((C.zf||C.sf!=C.of)) goto L_12911537;
  /* 12911520 push 8 */
  push32((uint32_t)(0x8u));
  /* 12911522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911527 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12911529 push ecx */
  push32((uint32_t)(ECX));
  /* 1291152a call 0x12908b50 */
  push32(0x1291152fu); f_12908b50();
  /* 1291152f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911532 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12911535 jmp 0x12911550 */
  goto L_12911550;
L_12911537:;
  /* 12911537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291153a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291153c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291153e mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 12911544 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911546 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1291154a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1291154d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12911550:;
  /* 12911550 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911554 je 0x12911561 */
  if (C.zf) goto L_12911561;
  /* 12911556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291155c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1291155f jmp 0x12911517 */
  goto L_12911517;
L_12911561:;
  /* 12911561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911566 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12911568 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1291156b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291156e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911571 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12911574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911577 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1291157a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291157e je 0x12911586 */
  if (C.zf) goto L_12911586;
  /* 12911580 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911584 jne 0x12911599 */
  if (!C.zf) goto L_12911599;
L_12911586:;
  /* 12911586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291158b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291158d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12911590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911593 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911596 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12911599:;
  /* 12911599 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129115a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129115a7:;
  /* 129115a7 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129115ae jle 0x129115c3 */
  if ((C.zf||C.sf!=C.of)) goto L_129115c3;
  /* 129115b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 129115b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129115b5 push edx */
  push32((uint32_t)(EDX));
  /* 129115b6 call 0x12908b50 */
  push32(0x129115bbu); f_12908b50();
  /* 129115bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129115be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129115c1 jmp 0x129115d8 */
  goto L_129115d8;
L_129115c3:;
  /* 129115c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129115c6 mov ecx, dword ptr [0x1292cc98] */
  ECX = (r32((uint32_t)(0x1292cc98)));
  /* 129115cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129115ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129115d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129115d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_129115d8:;
  /* 129115d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129115dc je 0x12911619 */
  if (C.zf) goto L_12911619;
  /* 129115de push 0 */
  push32((uint32_t)(0x0u));
  /* 129115e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 129115e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129115e5 push eax */
  push32((uint32_t)(EAX));
  /* 129115e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129115e9 push ecx */
  push32((uint32_t)(ECX));
  /* 129115ea call 0x129124b0 */
  push32(0x129115efu); f_129124b0();
  /* 129115ef mov ecx, eax */
  ECX = (EAX);
  /* 129115f1 mov esi, edx */
  ESI = (EDX);
  /* 129115f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129115f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129115f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129115fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129115fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129115fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12911601 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12911604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911609 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1291160b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1291160e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911614 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12911617 jmp 0x129115a7 */
  goto L_129115a7;
L_12911619:;
  /* 12911619 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291161d jne 0x1291162e */
  if (!C.zf) goto L_1291162e;
  /* 1291161f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911622 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12911624 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911627 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291162a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1291162c jmp 0x12911634 */
  goto L_12911634;
L_1291162e:;
  /* 1291162e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911631 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12911634:;
  /* 12911634 pop esi */
  ESI = (pop32());
  /* 12911635 mov esp, ebp */
  ESP = (EBP);
  /* 12911637 pop ebp */
  EBP = (pop32());
  /* 12911638 ret  */
  ESPCHK(0x12911510u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x12911640 (61 bytes, 18 insns) */
void f_12911640(void) {
  FTRACE(0x12911640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911640 push ebp */
  push32((uint32_t)(EBP));
  /* 12911641 mov ebp, esp */
  EBP = (ESP);
  /* 12911643 cmp dword ptr [0x1292e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291164a jne 0x1291167b */
  if (!C.zf) goto L_1291167b;
  /* 1291164c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1291164e call 0x12906540 */
  push32(0x12911653u); f_12906540();
  /* 12911653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911656 cmp dword ptr [0x1292e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291165d jne 0x12911671 */
  if (!C.zf) goto L_12911671;
  /* 1291165f call 0x129116a0 */
  push32(0x12911664u); f_129116a0();
  /* 12911664 mov eax, dword ptr [0x1292e7e0] */
  EAX = (r32((uint32_t)(0x1292e7e0)));
  /* 12911669 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291166c mov dword ptr [0x1292e7e0], eax */
  w32((uint32_t)(0x1292e7e0), (EAX));
L_12911671:;
  /* 12911671 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12911673 call 0x129065e0 */
  push32(0x12911678u); f_129065e0();
  /* 12911678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1291167b:;
  /* 1291167b pop ebp */
  EBP = (pop32());
  /* 1291167c ret  */
  ESPCHK(0x12911640u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x12911680 (30 bytes, 11 insns) */
void f_12911680(void) {
  FTRACE(0x12911680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911680 push ebp */
  push32((uint32_t)(EBP));
  /* 12911681 mov ebp, esp */
  EBP = (ESP);
  /* 12911683 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12911685 call 0x12906540 */
  push32(0x1291168au); f_12906540();
  /* 1291168a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291168d call 0x129116a0 */
  push32(0x12911692u); f_129116a0();
  /* 12911692 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12911694 call 0x129065e0 */
  push32(0x12911699u); f_129065e0();
  /* 12911699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291169c pop ebp */
  EBP = (pop32());
  /* 1291169d ret  */
  ESPCHK(0x12911680u, _esp0);
  ESP += 4; return;
}

/* FUN_100116a0 @ 0x129116a0 (939 bytes, 266 insns) */
void f_129116a0(void) {
  FTRACE(0x129116a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129116a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129116a1 mov ebp, esp */
  EBP = (ESP);
  /* 129116a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129116a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129116ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 129116af call 0x12906540 */
  push32(0x129116b4u); f_12906540();
  /* 129116b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129116b7 mov dword ptr [0x1292e728], 0 */
  w32((uint32_t)(0x1292e728), (0x0u));
  /* 129116c1 mov dword ptr [0x1292de38], 0xffffffff */
  w32((uint32_t)(0x1292de38), (0xffffffffu));
  /* 129116cb mov eax, dword ptr [0x1292de38] */
  EAX = (r32((uint32_t)(0x1292de38)));
  /* 129116d0 mov dword ptr [0x1292de28], eax */
  w32((uint32_t)(0x1292de28), (EAX));
  /* 129116d5 push 0x1292a850 */
  push32((uint32_t)(0x1292a850u));
  /* 129116da call 0x12912520 */
  push32(0x129116dfu); f_12912520();
  /* 129116df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129116e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129116e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129116e9 jne 0x12911823 */
  if (!C.zf) goto L_12911823;
  /* 129116ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 129116f1 call 0x129065e0 */
  push32(0x129116f6u); f_129065e0();
  /* 129116f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129116f9 push 0x1292e730 */
  push32((uint32_t)(0x1292e730u));
  /* 129116fe call dword ptr [0x1293023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293023c))), 0x12911704u);
  /* 12911704 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911707 je 0x1291181e */
  if (C.zf) goto L_1291181e;
  /* 1291170d mov dword ptr [0x1292e728], 1 */
  w32((uint32_t)(0x1292e728), (0x1u));
  /* 12911717 mov ecx, dword ptr [0x1292e730] */
  ECX = (r32((uint32_t)(0x1292e730)));
  /* 1291171d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911720 mov dword ptr [0x1292dd90], ecx */
  w32((uint32_t)(0x1292dd90), (ECX));
  /* 12911726 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911728 mov dx, word ptr [0x1292e776] */
  DX = (r16((uint32_t)(0x1292e776)));
  /* 1291172f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12911731 je 0x12911749 */
  if (C.zf) goto L_12911749;
  /* 12911733 mov eax, dword ptr [0x1292e784] */
  EAX = (r32((uint32_t)(0x1292e784)));
  /* 12911738 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1291173b mov ecx, dword ptr [0x1292dd90] */
  ECX = (r32((uint32_t)(0x1292dd90)));
  /* 12911741 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911743 mov dword ptr [0x1292dd90], ecx */
  w32((uint32_t)(0x1292dd90), (ECX));
L_12911749:;
  /* 12911749 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1291174b mov dx, word ptr [0x1292e7ca] */
  DX = (r16((uint32_t)(0x1292e7ca)));
  /* 12911752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12911754 je 0x1291177e */
  if (C.zf) goto L_1291177e;
  /* 12911756 cmp dword ptr [0x1292e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291175d je 0x1291177e */
  if (C.zf) goto L_1291177e;
  /* 1291175f mov dword ptr [0x1292dd94], 1 */
  w32((uint32_t)(0x1292dd94), (0x1u));
  /* 12911769 mov eax, dword ptr [0x1292e7d8] */
  EAX = (r32((uint32_t)(0x1292e7d8)));
  /* 1291176e sub eax, dword ptr [0x1292e784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292e784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911774 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911777 mov dword ptr [0x1292dd98], eax */
  w32((uint32_t)(0x1292dd98), (EAX));
  /* 1291177c jmp 0x12911792 */
  goto L_12911792;
L_1291177e:;
  /* 1291177e mov dword ptr [0x1292dd94], 0 */
  w32((uint32_t)(0x1292dd94), (0x0u));
  /* 12911788 mov dword ptr [0x1292dd98], 0 */
  w32((uint32_t)(0x1292dd98), (0x0u));
L_12911792:;
  /* 12911792 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12911795 push ecx */
  push32((uint32_t)(ECX));
  /* 12911796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911798 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1291179a mov edx, dword ptr [0x1292de1c] */
  EDX = (r32((uint32_t)(0x1292de1c)));
  /* 129117a0 push edx */
  push32((uint32_t)(EDX));
  /* 129117a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129117a3 push 0x1292e734 */
  push32((uint32_t)(0x1292e734u));
  /* 129117a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129117ad mov eax, dword ptr [0x1292e698] */
  EAX = (r32((uint32_t)(0x1292e698)));
  /* 129117b2 push eax */
  push32((uint32_t)(EAX));
  /* 129117b3 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x129117b9u);
  /* 129117b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129117bb je 0x129117cf */
  if (C.zf) goto L_129117cf;
  /* 129117bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129117c1 jne 0x129117cf */
  if (!C.zf) goto L_129117cf;
  /* 129117c3 mov ecx, dword ptr [0x1292de1c] */
  ECX = (r32((uint32_t)(0x1292de1c)));
  /* 129117c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 129117cd jmp 0x129117d8 */
  goto L_129117d8;
L_129117cf:;
  /* 129117cf mov edx, dword ptr [0x1292de1c] */
  EDX = (r32((uint32_t)(0x1292de1c)));
  /* 129117d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_129117d8:;
  /* 129117d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129117db push eax */
  push32((uint32_t)(EAX));
  /* 129117dc push 0 */
  push32((uint32_t)(0x0u));
  /* 129117de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129117e0 mov ecx, dword ptr [0x1292de20] */
  ECX = (r32((uint32_t)(0x1292de20)));
  /* 129117e6 push ecx */
  push32((uint32_t)(ECX));
  /* 129117e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129117e9 push 0x1292e788 */
  push32((uint32_t)(0x1292e788u));
  /* 129117ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129117f3 mov edx, dword ptr [0x1292e698] */
  EDX = (r32((uint32_t)(0x1292e698)));
  /* 129117f9 push edx */
  push32((uint32_t)(EDX));
  /* 129117fa call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x12911800u);
  /* 12911800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911802 je 0x12911815 */
  if (C.zf) goto L_12911815;
  /* 12911804 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911808 jne 0x12911815 */
  if (!C.zf) goto L_12911815;
  /* 1291180a mov eax, dword ptr [0x1292de20] */
  EAX = (r32((uint32_t)(0x1292de20)));
  /* 1291180f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12911813 jmp 0x1291181e */
  goto L_1291181e;
L_12911815:;
  /* 12911815 mov ecx, dword ptr [0x1292de20] */
  ECX = (r32((uint32_t)(0x1292de20)));
  /* 1291181b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1291181e:;
  /* 1291181e jmp 0x12911a47 */
  goto L_12911a47;
L_12911823:;
  /* 12911823 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911826 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12911829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1291182b je 0x1291184d */
  if (C.zf) goto L_1291184d;
  /* 1291182d cmp dword ptr [0x1292e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911834 je 0x1291185c */
  if (C.zf) goto L_1291185c;
  /* 12911836 mov ecx, dword ptr [0x1292e7dc] */
  ECX = (r32((uint32_t)(0x1292e7dc)));
  /* 1291183c push ecx */
  push32((uint32_t)(ECX));
  /* 1291183d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911840 push edx */
  push32((uint32_t)(EDX));
  /* 12911841 call 0x1290e7d0 */
  push32(0x12911846u); f_1290e7d0();
  /* 12911846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1291184b jne 0x1291185c */
  if (!C.zf) goto L_1291185c;
L_1291184d:;
  /* 1291184d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1291184f call 0x129065e0 */
  push32(0x12911854u); f_129065e0();
  /* 12911854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911857 jmp 0x12911a47 */
  goto L_12911a47;
L_1291185c:;
  /* 1291185c push 2 */
  push32((uint32_t)(0x2u));
  /* 1291185e mov eax, dword ptr [0x1292e7dc] */
  EAX = (r32((uint32_t)(0x1292e7dc)));
  /* 12911863 push eax */
  push32((uint32_t)(EAX));
  /* 12911864 call 0x129035d0 */
  push32(0x12911869u); f_129035d0();
  /* 12911869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291186c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12911871 push 0x1292a848 */
  push32((uint32_t)(0x1292a848u));
  /* 12911876 push 2 */
  push32((uint32_t)(0x2u));
  /* 12911878 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291187b push ecx */
  push32((uint32_t)(ECX));
  /* 1291187c call 0x12905970 */
  push32(0x12911881u); f_12905970();
  /* 12911881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911887 push eax */
  push32((uint32_t)(EAX));
  /* 12911888 call 0x12902b40 */
  push32(0x1291188du); f_12902b40();
  /* 1291188d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911890 mov dword ptr [0x1292e7dc], eax */
  w32((uint32_t)(0x1292e7dc), (EAX));
  /* 12911895 cmp dword ptr [0x1292e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291189c jne 0x129118ad */
  if (!C.zf) goto L_129118ad;
  /* 1291189e push 0xc */
  push32((uint32_t)(0xcu));
  /* 129118a0 call 0x129065e0 */
  push32(0x129118a5u); f_129065e0();
  /* 129118a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129118a8 jmp 0x12911a47 */
  goto L_12911a47;
L_129118ad:;
  /* 129118ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129118b0 push edx */
  push32((uint32_t)(EDX));
  /* 129118b1 mov eax, dword ptr [0x1292e7dc] */
  EAX = (r32((uint32_t)(0x1292e7dc)));
  /* 129118b6 push eax */
  push32((uint32_t)(EAX));
  /* 129118b7 call 0x12905af0 */
  push32(0x129118bcu); f_12905af0();
  /* 129118bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129118bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 129118c1 call 0x129065e0 */
  push32(0x129118c6u); f_129065e0();
  /* 129118c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129118c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 129118cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129118ce push ecx */
  push32((uint32_t)(ECX));
  /* 129118cf mov edx, dword ptr [0x1292de1c] */
  EDX = (r32((uint32_t)(0x1292de1c)));
  /* 129118d5 push edx */
  push32((uint32_t)(EDX));
  /* 129118d6 call 0x12906360 */
  push32(0x129118dbu); f_12906360();
  /* 129118db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129118de mov eax, dword ptr [0x1292de1c] */
  EAX = (r32((uint32_t)(0x1292de1c)));
  /* 129118e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 129118e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129118ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129118ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129118f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129118f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129118f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129118f9 jne 0x1291190d */
  if (!C.zf) goto L_1291190d;
  /* 129118fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129118fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911901 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12911904 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291190a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1291190d:;
  /* 1291190d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911910 push eax */
  push32((uint32_t)(EAX));
  /* 12911911 call 0x129113f0 */
  push32(0x12911916u); f_129113f0();
  /* 12911916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911919 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1291191f mov dword ptr [0x1292dd90], eax */
  w32((uint32_t)(0x1292dd90), (EAX));
L_12911924:;
  /* 12911924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911927 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1291192a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291192d je 0x12911945 */
  if (C.zf) goto L_12911945;
  /* 1291192f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911932 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12911935 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911938 jl 0x12911950 */
  if ((C.sf!=C.of)) goto L_12911950;
  /* 1291193a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291193d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12911940 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911943 jg 0x12911950 */
  if ((!C.zf&&C.sf==C.of)) goto L_12911950;
L_12911945:;
  /* 12911945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911948 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291194b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1291194e jmp 0x12911924 */
  goto L_12911924;
L_12911950:;
  /* 12911950 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911953 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12911956 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911959 jne 0x129119f5 */
  if (!C.zf) goto L_129119f5;
  /* 1291195f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911965 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12911968 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291196b push edx */
  push32((uint32_t)(EDX));
  /* 1291196c call 0x129113f0 */
  push32(0x12911971u); f_129113f0();
  /* 12911971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911974 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911977 mov ecx, dword ptr [0x1292dd90] */
  ECX = (r32((uint32_t)(0x1292dd90)));
  /* 1291197d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1291197f mov dword ptr [0x1292dd90], ecx */
  w32((uint32_t)(0x1292dd90), (ECX));
L_12911985:;
  /* 12911985 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911988 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1291198b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291198e jl 0x129119a6 */
  if ((C.sf!=C.of)) goto L_129119a6;
  /* 12911990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911993 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12911996 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911999 jg 0x129119a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_129119a6;
  /* 1291199b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291199e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129119a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129119a4 jmp 0x12911985 */
  goto L_12911985;
L_129119a6:;
  /* 129119a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129119ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129119af jne 0x129119f5 */
  if (!C.zf) goto L_129119f5;
  /* 129119b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129119b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129119ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119bd push ecx */
  push32((uint32_t)(ECX));
  /* 129119be call 0x129113f0 */
  push32(0x129119c3u); f_129113f0();
  /* 129119c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129119c6 mov edx, dword ptr [0x1292dd90] */
  EDX = (r32((uint32_t)(0x1292dd90)));
  /* 129119cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129119ce mov dword ptr [0x1292dd90], edx */
  w32((uint32_t)(0x1292dd90), (EDX));
L_129119d4:;
  /* 129119d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129119da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129119dd jl 0x129119f5 */
  if ((C.sf!=C.of)) goto L_129119f5;
  /* 129119df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129119e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129119e8 jg 0x129119f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_129119f5;
  /* 129119ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129119ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129119f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129119f3 jmp 0x129119d4 */
  goto L_129119d4;
L_129119f5:;
  /* 129119f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129119f9 je 0x12911a09 */
  if (C.zf) goto L_12911a09;
  /* 129119fb mov edx, dword ptr [0x1292dd90] */
  EDX = (r32((uint32_t)(0x1292dd90)));
  /* 12911a01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12911a03 mov dword ptr [0x1292dd90], edx */
  w32((uint32_t)(0x1292dd90), (EDX));
L_12911a09:;
  /* 12911a09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911a0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12911a0f mov dword ptr [0x1292dd94], ecx */
  w32((uint32_t)(0x1292dd94), (ECX));
  /* 12911a15 cmp dword ptr [0x1292dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911a1c je 0x12911a3e */
  if (C.zf) goto L_12911a3e;
  /* 12911a1e push 3 */
  push32((uint32_t)(0x3u));
  /* 12911a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911a23 push edx */
  push32((uint32_t)(EDX));
  /* 12911a24 mov eax, dword ptr [0x1292de20] */
  EAX = (r32((uint32_t)(0x1292de20)));
  /* 12911a29 push eax */
  push32((uint32_t)(EAX));
  /* 12911a2a call 0x12906360 */
  push32(0x12911a2fu); f_12906360();
  /* 12911a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911a32 mov ecx, dword ptr [0x1292de20] */
  ECX = (r32((uint32_t)(0x1292de20)));
  /* 12911a38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12911a3c jmp 0x12911a47 */
  goto L_12911a47;
L_12911a3e:;
  /* 12911a3e mov edx, dword ptr [0x1292de20] */
  EDX = (r32((uint32_t)(0x1292de20)));
  /* 12911a44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12911a47:;
  /* 12911a47 mov esp, ebp */
  ESP = (EBP);
  /* 12911a49 pop ebp */
  EBP = (pop32());
  /* 12911a4a ret  */
  ESPCHK(0x129116a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x12911a50 (46 bytes, 18 insns) */
void f_12911a50(void) {
  FTRACE(0x12911a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12911a51 mov ebp, esp */
  EBP = (ESP);
  /* 12911a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12911a54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12911a56 call 0x12906540 */
  push32(0x12911a5bu); f_12906540();
  /* 12911a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911a61 push eax */
  push32((uint32_t)(EAX));
  /* 12911a62 call 0x12911a80 */
  push32(0x12911a67u); f_12911a80();
  /* 12911a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911a6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12911a6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12911a6f call 0x129065e0 */
  push32(0x12911a74u); f_129065e0();
  /* 12911a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911a7a mov esp, ebp */
  ESP = (EBP);
  /* 12911a7c pop ebp */
  EBP = (pop32());
  /* 12911a7d ret  */
  ESPCHK(0x12911a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x12911a80 (762 bytes, 246 insns) */
void f_12911a80(void) {
  FTRACE(0x12911a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12911a81 mov ebp, esp */
  EBP = (ESP);
  /* 12911a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12911a84 cmp dword ptr [0x1292dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911a8b jne 0x12911a94 */
  if (!C.zf) goto L_12911a94;
  /* 12911a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911a8f jmp 0x12911d76 */
  goto L_12911d76;
L_12911a94:;
  /* 12911a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911a97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12911a9a cmp ecx, dword ptr [0x1292de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911aa0 jne 0x12911ab4 */
  if (!C.zf) goto L_12911ab4;
  /* 12911aa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911aa5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12911aa8 cmp eax, dword ptr [0x1292de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911aae je 0x12911c7b */
  if (C.zf) goto L_12911c7b;
L_12911ab4:;
  /* 12911ab4 cmp dword ptr [0x1292e728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911abb je 0x12911c35 */
  if (C.zf) goto L_12911c35;
  /* 12911ac1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911ac3 mov cx, word ptr [0x1292e7c8] */
  CX = (r16((uint32_t)(0x1292e7c8)));
  /* 12911aca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12911acc jne 0x12911b29 */
  if (!C.zf) goto L_12911b29;
  /* 12911ace xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911ad0 mov dx, word ptr [0x1292e7d6] */
  DX = (r16((uint32_t)(0x1292e7d6)));
  /* 12911ad7 push edx */
  push32((uint32_t)(EDX));
  /* 12911ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911ada mov ax, word ptr [0x1292e7d4] */
  AX = (r16((uint32_t)(0x1292e7d4)));
  /* 12911ae0 push eax */
  push32((uint32_t)(EAX));
  /* 12911ae1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911ae3 mov cx, word ptr [0x1292e7d2] */
  CX = (r16((uint32_t)(0x1292e7d2)));
  /* 12911aea push ecx */
  push32((uint32_t)(ECX));
  /* 12911aeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911aed mov dx, word ptr [0x1292e7d0] */
  DX = (r16((uint32_t)(0x1292e7d0)));
  /* 12911af4 push edx */
  push32((uint32_t)(EDX));
  /* 12911af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911af9 mov ax, word ptr [0x1292e7cc] */
  AX = (r16((uint32_t)(0x1292e7cc)));
  /* 12911aff push eax */
  push32((uint32_t)(EAX));
  /* 12911b00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911b02 mov cx, word ptr [0x1292e7ce] */
  CX = (r16((uint32_t)(0x1292e7ce)));
  /* 12911b09 push ecx */
  push32((uint32_t)(ECX));
  /* 12911b0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911b0c mov dx, word ptr [0x1292e7ca] */
  DX = (r16((uint32_t)(0x1292e7ca)));
  /* 12911b13 push edx */
  push32((uint32_t)(EDX));
  /* 12911b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911b17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12911b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12911b1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12911b1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12911b1f call 0x12911d80 */
  push32(0x12911b24u); f_12911d80();
  /* 12911b24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911b27 jmp 0x12911b7a */
  goto L_12911b7a;
L_12911b29:;
  /* 12911b29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911b2b mov dx, word ptr [0x1292e7d6] */
  DX = (r16((uint32_t)(0x1292e7d6)));
  /* 12911b32 push edx */
  push32((uint32_t)(EDX));
  /* 12911b33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911b35 mov ax, word ptr [0x1292e7d4] */
  AX = (r16((uint32_t)(0x1292e7d4)));
  /* 12911b3b push eax */
  push32((uint32_t)(EAX));
  /* 12911b3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911b3e mov cx, word ptr [0x1292e7d2] */
  CX = (r16((uint32_t)(0x1292e7d2)));
  /* 12911b45 push ecx */
  push32((uint32_t)(ECX));
  /* 12911b46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911b48 mov dx, word ptr [0x1292e7d0] */
  DX = (r16((uint32_t)(0x1292e7d0)));
  /* 12911b4f push edx */
  push32((uint32_t)(EDX));
  /* 12911b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911b52 mov ax, word ptr [0x1292e7ce] */
  AX = (r16((uint32_t)(0x1292e7ce)));
  /* 12911b58 push eax */
  push32((uint32_t)(EAX));
  /* 12911b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12911b5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911b5f mov cx, word ptr [0x1292e7ca] */
  CX = (r16((uint32_t)(0x1292e7ca)));
  /* 12911b66 push ecx */
  push32((uint32_t)(ECX));
  /* 12911b67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911b6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12911b6d push eax */
  push32((uint32_t)(EAX));
  /* 12911b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12911b70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12911b72 call 0x12911d80 */
  push32(0x12911b77u); f_12911d80();
  /* 12911b77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12911b7a:;
  /* 12911b7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911b7c mov cx, word ptr [0x1292e774] */
  CX = (r16((uint32_t)(0x1292e774)));
  /* 12911b83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12911b85 jne 0x12911be2 */
  if (!C.zf) goto L_12911be2;
  /* 12911b87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911b89 mov dx, word ptr [0x1292e782] */
  DX = (r16((uint32_t)(0x1292e782)));
  /* 12911b90 push edx */
  push32((uint32_t)(EDX));
  /* 12911b91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911b93 mov ax, word ptr [0x1292e780] */
  AX = (r16((uint32_t)(0x1292e780)));
  /* 12911b99 push eax */
  push32((uint32_t)(EAX));
  /* 12911b9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911b9c mov cx, word ptr [0x1292e77e] */
  CX = (r16((uint32_t)(0x1292e77e)));
  /* 12911ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12911ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911ba6 mov dx, word ptr [0x1292e77c] */
  DX = (r16((uint32_t)(0x1292e77c)));
  /* 12911bad push edx */
  push32((uint32_t)(EDX));
  /* 12911bae push 0 */
  push32((uint32_t)(0x0u));
  /* 12911bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911bb2 mov ax, word ptr [0x1292e778] */
  AX = (r16((uint32_t)(0x1292e778)));
  /* 12911bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12911bb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911bbb mov cx, word ptr [0x1292e77a] */
  CX = (r16((uint32_t)(0x1292e77a)));
  /* 12911bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12911bc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911bc5 mov dx, word ptr [0x1292e776] */
  DX = (r16((uint32_t)(0x1292e776)));
  /* 12911bcc push edx */
  push32((uint32_t)(EDX));
  /* 12911bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911bd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12911bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12911bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12911bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911bd8 call 0x12911d80 */
  push32(0x12911bddu); f_12911d80();
  /* 12911bdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911be0 jmp 0x12911c33 */
  goto L_12911c33;
L_12911be2:;
  /* 12911be2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911be4 mov dx, word ptr [0x1292e782] */
  DX = (r16((uint32_t)(0x1292e782)));
  /* 12911beb push edx */
  push32((uint32_t)(EDX));
  /* 12911bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911bee mov ax, word ptr [0x1292e780] */
  AX = (r16((uint32_t)(0x1292e780)));
  /* 12911bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12911bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911bf7 mov cx, word ptr [0x1292e77e] */
  CX = (r16((uint32_t)(0x1292e77e)));
  /* 12911bfe push ecx */
  push32((uint32_t)(ECX));
  /* 12911bff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12911c01 mov dx, word ptr [0x1292e77c] */
  DX = (r16((uint32_t)(0x1292e77c)));
  /* 12911c08 push edx */
  push32((uint32_t)(EDX));
  /* 12911c09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911c0b mov ax, word ptr [0x1292e77a] */
  AX = (r16((uint32_t)(0x1292e77a)));
  /* 12911c11 push eax */
  push32((uint32_t)(EAX));
  /* 12911c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12911c18 mov cx, word ptr [0x1292e776] */
  CX = (r16((uint32_t)(0x1292e776)));
  /* 12911c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12911c20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911c23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12911c26 push eax */
  push32((uint32_t)(EAX));
  /* 12911c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c2b call 0x12911d80 */
  push32(0x12911c30u); f_12911d80();
  /* 12911c30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12911c33:;
  /* 12911c33 jmp 0x12911c7b */
  goto L_12911c7b;
L_12911c35:;
  /* 12911c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12911c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12911c43 push 4 */
  push32((uint32_t)(0x4u));
  /* 12911c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911c48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12911c4b push edx */
  push32((uint32_t)(EDX));
  /* 12911c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12911c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12911c50 call 0x12911d80 */
  push32(0x12911c55u); f_12911d80();
  /* 12911c55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12911c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c64 push 5 */
  push32((uint32_t)(0x5u));
  /* 12911c66 push 0xa */
  push32((uint32_t)(0xau));
  /* 12911c68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911c6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12911c6e push ecx */
  push32((uint32_t)(ECX));
  /* 12911c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12911c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911c73 call 0x12911d80 */
  push32(0x12911c78u); f_12911d80();
  /* 12911c78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12911c7b:;
  /* 12911c7b mov edx, dword ptr [0x1292de2c] */
  EDX = (r32((uint32_t)(0x1292de2c)));
  /* 12911c81 cmp edx, dword ptr [0x1292de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911c87 jge 0x12911cd4 */
  if ((C.sf==C.of)) goto L_12911cd4;
  /* 12911c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911c8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12911c8f cmp ecx, dword ptr [0x1292de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911c95 jl 0x12911ca5 */
  if ((C.sf!=C.of)) goto L_12911ca5;
  /* 12911c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911c9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12911c9d cmp eax, dword ptr [0x1292de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911ca3 jle 0x12911cac */
  if ((C.zf||C.sf!=C.of)) goto L_12911cac;
L_12911ca5:;
  /* 12911ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911ca7 jmp 0x12911d76 */
  goto L_12911d76;
L_12911cac:;
  /* 12911cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911caf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12911cb2 cmp edx, dword ptr [0x1292de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911cb8 jle 0x12911cd2 */
  if ((C.zf||C.sf!=C.of)) goto L_12911cd2;
  /* 12911cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911cbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12911cc0 cmp ecx, dword ptr [0x1292de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911cc6 jge 0x12911cd2 */
  if ((C.sf==C.of)) goto L_12911cd2;
  /* 12911cc8 mov eax, 1 */
  EAX = (0x1u);
  /* 12911ccd jmp 0x12911d76 */
  goto L_12911d76;
L_12911cd2:;
  /* 12911cd2 jmp 0x12911d17 */
  goto L_12911d17;
L_12911cd4:;
  /* 12911cd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911cd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12911cda cmp eax, dword ptr [0x1292de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911ce0 jl 0x12911cf0 */
  if ((C.sf!=C.of)) goto L_12911cf0;
  /* 12911ce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911ce5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12911ce8 cmp edx, dword ptr [0x1292de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911cee jle 0x12911cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_12911cf7;
L_12911cf0:;
  /* 12911cf0 mov eax, 1 */
  EAX = (0x1u);
  /* 12911cf5 jmp 0x12911d76 */
  goto L_12911d76;
L_12911cf7:;
  /* 12911cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911cfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12911cfd cmp ecx, dword ptr [0x1292de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d03 jle 0x12911d17 */
  if ((C.zf||C.sf!=C.of)) goto L_12911d17;
  /* 12911d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911d08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12911d0b cmp eax, dword ptr [0x1292de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d11 jge 0x12911d17 */
  if ((C.sf==C.of)) goto L_12911d17;
  /* 12911d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911d15 jmp 0x12911d76 */
  goto L_12911d76;
L_12911d17:;
  /* 12911d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911d1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12911d1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911d23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12911d25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911d27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911d2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12911d2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911d33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911d35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911d3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12911d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12911d41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12911d44 cmp edx, dword ptr [0x1292de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d4a jne 0x12911d62 */
  if (!C.zf) goto L_12911d62;
  /* 12911d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911d4f cmp eax, dword ptr [0x1292de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d55 jl 0x12911d5e */
  if ((C.sf!=C.of)) goto L_12911d5e;
  /* 12911d57 mov eax, 1 */
  EAX = (0x1u);
  /* 12911d5c jmp 0x12911d76 */
  goto L_12911d76;
L_12911d5e:;
  /* 12911d5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911d60 jmp 0x12911d76 */
  goto L_12911d76;
L_12911d62:;
  /* 12911d62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911d65 cmp ecx, dword ptr [0x1292de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d6b jge 0x12911d74 */
  if ((C.sf==C.of)) goto L_12911d74;
  /* 12911d6d mov eax, 1 */
  EAX = (0x1u);
  /* 12911d72 jmp 0x12911d76 */
  goto L_12911d76;
L_12911d74:;
  /* 12911d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12911d76:;
  /* 12911d76 mov esp, ebp */
  ESP = (EBP);
  /* 12911d78 pop ebp */
  EBP = (pop32());
  /* 12911d79 ret  */
  ESPCHK(0x12911a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x12911d80 (504 bytes, 145 insns) */
void f_12911d80(void) {
  FTRACE(0x12911d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12911d81 mov ebp, esp */
  EBP = (ESP);
  /* 12911d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911d86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911d8a jne 0x12911e5c */
  if (!C.zf) goto L_12911e5c;
  /* 12911d90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911d93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12911d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911d98 jne 0x12911da9 */
  if (!C.zf) goto L_12911da9;
  /* 12911d9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911d9d mov edx, dword ptr [ecx*4 + 0x1292de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292de4c)));
  /* 12911da4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12911da7 jmp 0x12911db6 */
  goto L_12911db6;
L_12911da9:;
  /* 12911da9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911dac mov ecx, dword ptr [eax*4 + 0x1292de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292de80)));
  /* 12911db3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12911db6:;
  /* 12911db6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12911db9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911dbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12911dbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911dc2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911dc5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911dce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911dd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911dd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911dd6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12911dd9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12911ddd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12911dde mov ecx, 7 */
  ECX = (0x7u);
  /* 12911de3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12911de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12911de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12911deb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911dee jge 0x12911e09 */
  if ((C.sf==C.of)) goto L_12911e09;
  /* 12911df0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12911df3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911df6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12911df9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911dfc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911dff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911e02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911e04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12911e07 jmp 0x12911e1d */
  goto L_12911e1d;
L_12911e09:;
  /* 12911e09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12911e0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911e0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12911e12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911e15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911e18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911e1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12911e1d:;
  /* 12911e1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911e21 jne 0x12911e5a */
  if (!C.zf) goto L_12911e5a;
  /* 12911e23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911e26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12911e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12911e2b jne 0x12911e3c */
  if (!C.zf) goto L_12911e3c;
  /* 12911e2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911e30 mov eax, dword ptr [edx*4 + 0x1292de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292de50)));
  /* 12911e37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12911e3a jmp 0x12911e49 */
  goto L_12911e49;
L_12911e3c:;
  /* 12911e3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911e3f mov edx, dword ptr [ecx*4 + 0x1292de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292de84)));
  /* 12911e46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12911e49:;
  /* 12911e49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911e4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911e4f jle 0x12911e5a */
  if ((C.zf||C.sf!=C.of)) goto L_12911e5a;
  /* 12911e51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911e54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911e57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12911e5a:;
  /* 12911e5a jmp 0x12911e91 */
  goto L_12911e91;
L_12911e5c:;
  /* 12911e5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911e5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12911e62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12911e64 jne 0x12911e75 */
  if (!C.zf) goto L_12911e75;
  /* 12911e66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911e69 mov ecx, dword ptr [eax*4 + 0x1292de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292de4c)));
  /* 12911e70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12911e73 jmp 0x12911e82 */
  goto L_12911e82;
L_12911e75:;
  /* 12911e75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911e78 mov eax, dword ptr [edx*4 + 0x1292de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292de80)));
  /* 12911e7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12911e82:;
  /* 12911e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12911e85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12911e88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911e8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911e8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12911e91:;
  /* 12911e91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911e95 jne 0x12911ed1 */
  if (!C.zf) goto L_12911ed1;
  /* 12911e97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911e9a mov dword ptr [0x1292de2c], eax */
  w32((uint32_t)(0x1292de2c), (EAX));
  /* 12911e9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12911ea2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911ea5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12911ea8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911eaa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911ead mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12911eb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911eb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911eb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12911ebb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911ebd mov dword ptr [0x1292de30], ecx */
  w32((uint32_t)(0x1292de30), (ECX));
  /* 12911ec3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911ec6 mov dword ptr [0x1292de28], edx */
  w32((uint32_t)(0x1292de28), (EDX));
  /* 12911ecc jmp 0x12911f74 */
  goto L_12911f74;
L_12911ed1:;
  /* 12911ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12911ed4 mov dword ptr [0x1292de3c], eax */
  w32((uint32_t)(0x1292de3c), (EAX));
  /* 12911ed9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12911edc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911edf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12911ee2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911ee4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911ee7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12911eea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911eec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911ef2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12911ef5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911ef7 mov dword ptr [0x1292de40], ecx */
  w32((uint32_t)(0x1292de40), (ECX));
  /* 12911efd mov edx, dword ptr [0x1292dd98] */
  EDX = (r32((uint32_t)(0x1292dd98)));
  /* 12911f03 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12911f09 mov eax, dword ptr [0x1292de40] */
  EAX = (r32((uint32_t)(0x1292de40)));
  /* 12911f0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911f10 mov dword ptr [0x1292de40], eax */
  w32((uint32_t)(0x1292de40), (EAX));
  /* 12911f15 cmp dword ptr [0x1292de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911f1c jge 0x12911f41 */
  if ((C.sf==C.of)) goto L_12911f41;
  /* 12911f1e mov ecx, dword ptr [0x1292de40] */
  ECX = (r32((uint32_t)(0x1292de40)));
  /* 12911f24 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911f2a mov dword ptr [0x1292de40], ecx */
  w32((uint32_t)(0x1292de40), (ECX));
  /* 12911f30 mov edx, dword ptr [0x1292de3c] */
  EDX = (r32((uint32_t)(0x1292de3c)));
  /* 12911f36 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911f39 mov dword ptr [0x1292de3c], edx */
  w32((uint32_t)(0x1292de3c), (EDX));
  /* 12911f3f jmp 0x12911f6b */
  goto L_12911f6b;
L_12911f41:;
  /* 12911f41 cmp dword ptr [0x1292de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1292de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911f4b jl 0x12911f6b */
  if ((C.sf!=C.of)) goto L_12911f6b;
  /* 12911f4d mov eax, dword ptr [0x1292de40] */
  EAX = (r32((uint32_t)(0x1292de40)));
  /* 12911f52 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12911f57 mov dword ptr [0x1292de40], eax */
  w32((uint32_t)(0x1292de40), (EAX));
  /* 12911f5c mov ecx, dword ptr [0x1292de3c] */
  ECX = (r32((uint32_t)(0x1292de3c)));
  /* 12911f62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12911f65 mov dword ptr [0x1292de3c], ecx */
  w32((uint32_t)(0x1292de3c), (ECX));
L_12911f6b:;
  /* 12911f6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12911f6e mov dword ptr [0x1292de38], edx */
  w32((uint32_t)(0x1292de38), (EDX));
L_12911f74:;
  /* 12911f74 mov esp, ebp */
  ESP = (EBP);
  /* 12911f76 pop ebp */
  EBP = (pop32());
  /* 12911f77 ret  */
  ESPCHK(0x12911d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x12911f80 (382 bytes, 135 insns) */
void f_12911f80(void) {
  FTRACE(0x12911f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12911f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12911f81 mov ebp, esp */
  EBP = (ESP);
  /* 12911f83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12911f85 push 0x1292a858 */
  push32((uint32_t)(0x1292a858u));
  /* 12911f8a push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 12911f8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12911f95 push eax */
  push32((uint32_t)(EAX));
  /* 12911f96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12911f9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12911fa0 push ebx */
  push32((uint32_t)(EBX));
  /* 12911fa1 push esi */
  push32((uint32_t)(ESI));
  /* 12911fa2 push edi */
  push32((uint32_t)(EDI));
  /* 12911fa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12911fa6 cmp dword ptr [0x1292e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911fad jne 0x12911ff2 */
  if (!C.zf) goto L_12911ff2;
  /* 12911faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12911fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fb7 call dword ptr [0x12930238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930238))), 0x12911fbdu);
  /* 12911fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911fbf je 0x12911fcd */
  if (C.zf) goto L_12911fcd;
  /* 12911fc1 mov dword ptr [0x1292e7e4], 1 */
  w32((uint32_t)(0x1292e7e4), (0x1u));
  /* 12911fcb jmp 0x12911ff2 */
  goto L_12911ff2;
L_12911fcd:;
  /* 12911fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12911fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12911fd5 call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x12911fdbu);
  /* 12911fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12911fdd je 0x12911feb */
  if (C.zf) goto L_12911feb;
  /* 12911fdf mov dword ptr [0x1292e7e4], 2 */
  w32((uint32_t)(0x1292e7e4), (0x2u));
  /* 12911fe9 jmp 0x12911ff2 */
  goto L_12911ff2;
L_12911feb:;
  /* 12911feb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12911fed jmp 0x12912101 */
  goto L_12912101;
L_12911ff2:;
  /* 12911ff2 cmp dword ptr [0x1292e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12911ff9 jne 0x12912016 */
  if (!C.zf) goto L_12912016;
  /* 12911ffb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12911ffe push eax */
  push32((uint32_t)(EAX));
  /* 12911fff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912002 push ecx */
  push32((uint32_t)(ECX));
  /* 12912003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912006 push edx */
  push32((uint32_t)(EDX));
  /* 12912007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291200a push eax */
  push32((uint32_t)(EAX));
  /* 1291200b call dword ptr [0x12930238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930238))), 0x12912011u);
  /* 12912011 jmp 0x12912101 */
  goto L_12912101;
L_12912016:;
  /* 12912016 cmp dword ptr [0x1292e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291201d jne 0x129120ff */
  if (!C.zf) goto L_129120ff;
  /* 12912023 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912027 jne 0x12912032 */
  if (!C.zf) goto L_12912032;
  /* 12912029 mov ecx, dword ptr [0x1292e698] */
  ECX = (r32((uint32_t)(0x1292e698)));
  /* 1291202f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12912032:;
  /* 12912032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912036 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912039 push edx */
  push32((uint32_t)(EDX));
  /* 1291203a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291203d push eax */
  push32((uint32_t)(EAX));
  /* 1291203e call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x12912044u);
  /* 12912044 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12912047 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291204b jne 0x12912054 */
  if (!C.zf) goto L_12912054;
  /* 1291204d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291204f jmp 0x12912101 */
  goto L_12912101;
L_12912054:;
  /* 12912054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1291205b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1291205e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912061 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12912063 call 0x12905ce0 */
  push32(0x12912068u); f_12905ce0();
  /* 12912068 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1291206b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1291206e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12912071 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12912074 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1291207b jmp 0x12912094 */
  goto L_12912094;
  /* 1291207d mov eax, 1 */
  EAX = (0x1u);
  /* 12912082 ret  */
  ESPCHK(0x12911f80u, _esp0);
  ESP += 4; return;
  /* 12912083 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12912086 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1291208d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12912094:;
  /* 12912094 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912098 jne 0x1291209e */
  if (!C.zf) goto L_1291209e;
  /* 1291209a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291209c jmp 0x12912101 */
  goto L_12912101;
L_1291209e:;
  /* 1291209e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129120a1 push edx */
  push32((uint32_t)(EDX));
  /* 129120a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129120a5 push eax */
  push32((uint32_t)(EAX));
  /* 129120a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129120a9 push ecx */
  push32((uint32_t)(ECX));
  /* 129120aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129120ad push edx */
  push32((uint32_t)(EDX));
  /* 129120ae call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x129120b4u);
  /* 129120b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129120b6 jne 0x129120bc */
  if (!C.zf) goto L_129120bc;
  /* 129120b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129120ba jmp 0x12912101 */
  goto L_12912101;
L_129120bc:;
  /* 129120bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129120c0 jne 0x129120dd */
  if (!C.zf) goto L_129120dd;
  /* 129120c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129120c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129120c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129120c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129120cb push eax */
  push32((uint32_t)(EAX));
  /* 129120cc push 1 */
  push32((uint32_t)(0x1u));
  /* 129120ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129120d1 push ecx */
  push32((uint32_t)(ECX));
  /* 129120d2 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x129120d8u);
  /* 129120d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129120db jmp 0x129120fa */
  goto L_129120fa;
L_129120dd:;
  /* 129120dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129120e0 push edx */
  push32((uint32_t)(EDX));
  /* 129120e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129120e4 push eax */
  push32((uint32_t)(EAX));
  /* 129120e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129120e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129120ea push ecx */
  push32((uint32_t)(ECX));
  /* 129120eb push 1 */
  push32((uint32_t)(0x1u));
  /* 129120ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129120f0 push edx */
  push32((uint32_t)(EDX));
  /* 129120f1 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x129120f7u);
  /* 129120f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129120fa:;
  /* 129120fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129120fd jmp 0x12912101 */
  goto L_12912101;
L_129120ff:;
  /* 129120ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12912101:;
  /* 12912101 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12912104 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912107 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1291210e pop edi */
  EDI = (pop32());
  /* 1291210f pop esi */
  ESI = (pop32());
  /* 12912110 pop ebx */
  EBX = (pop32());
  /* 12912111 mov esp, ebp */
  ESP = (EBP);
  /* 12912113 pop ebp */
  EBP = (pop32());
  /* 12912114 ret  */
  ESPCHK(0x12911f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x12912120 (398 bytes, 140 insns) */
void f_12912120(void) {
  FTRACE(0x12912120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912120 push ebp */
  push32((uint32_t)(EBP));
  /* 12912121 mov ebp, esp */
  EBP = (ESP);
  /* 12912123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12912125 push 0x1292a868 */
  push32((uint32_t)(0x1292a868u));
  /* 1291212a push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 1291212f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12912135 push eax */
  push32((uint32_t)(EAX));
  /* 12912136 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1291213d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912140 push ebx */
  push32((uint32_t)(EBX));
  /* 12912141 push esi */
  push32((uint32_t)(ESI));
  /* 12912142 push edi */
  push32((uint32_t)(EDI));
  /* 12912143 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12912146 cmp dword ptr [0x1292e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291214d jne 0x12912192 */
  if (!C.zf) goto L_12912192;
  /* 1291214f push 0 */
  push32((uint32_t)(0x0u));
  /* 12912151 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912153 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912155 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912157 call dword ptr [0x12930238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930238))), 0x1291215du);
  /* 1291215d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1291215f je 0x1291216d */
  if (C.zf) goto L_1291216d;
  /* 12912161 mov dword ptr [0x1292e7e8], 1 */
  w32((uint32_t)(0x1292e7e8), (0x1u));
  /* 1291216b jmp 0x12912192 */
  goto L_12912192;
L_1291216d:;
  /* 1291216d push 0 */
  push32((uint32_t)(0x0u));
  /* 1291216f push 0 */
  push32((uint32_t)(0x0u));
  /* 12912171 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912175 call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x1291217bu);
  /* 1291217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1291217d je 0x1291218b */
  if (C.zf) goto L_1291218b;
  /* 1291217f mov dword ptr [0x1292e7e8], 2 */
  w32((uint32_t)(0x1292e7e8), (0x2u));
  /* 12912189 jmp 0x12912192 */
  goto L_12912192;
L_1291218b:;
  /* 1291218b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291218d jmp 0x129122b1 */
  goto L_129122b1;
L_12912192:;
  /* 12912192 cmp dword ptr [0x1292e7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912199 jne 0x129121b6 */
  if (!C.zf) goto L_129121b6;
  /* 1291219b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291219e push eax */
  push32((uint32_t)(EAX));
  /* 1291219f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129121a2 push ecx */
  push32((uint32_t)(ECX));
  /* 129121a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129121a6 push edx */
  push32((uint32_t)(EDX));
  /* 129121a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129121aa push eax */
  push32((uint32_t)(EAX));
  /* 129121ab call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x129121b1u);
  /* 129121b1 jmp 0x129122b1 */
  goto L_129122b1;
L_129121b6:;
  /* 129121b6 cmp dword ptr [0x1292e7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129121bd jne 0x129122af */
  if (!C.zf) goto L_129122af;
  /* 129121c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129121c7 jne 0x129121d2 */
  if (!C.zf) goto L_129121d2;
  /* 129121c9 mov ecx, dword ptr [0x1292e698] */
  ECX = (r32((uint32_t)(0x1292e698)));
  /* 129121cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_129121d2:;
  /* 129121d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129121d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129121d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129121d9 push edx */
  push32((uint32_t)(EDX));
  /* 129121da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129121dd push eax */
  push32((uint32_t)(EAX));
  /* 129121de call dword ptr [0x12930238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930238))), 0x129121e4u);
  /* 129121e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129121e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129121eb jne 0x129121f4 */
  if (!C.zf) goto L_129121f4;
  /* 129121ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129121ef jmp 0x129122b1 */
  goto L_129122b1;
L_129121f4:;
  /* 129121f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129121fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129121fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12912200 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912203 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12912205 call 0x12905ce0 */
  push32(0x1291220au); f_12905ce0();
  /* 1291220a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1291220d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12912210 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12912213 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12912216 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1291221d jmp 0x12912236 */
  goto L_12912236;
  /* 1291221f mov eax, 1 */
  EAX = (0x1u);
  /* 12912224 ret  */
  ESPCHK(0x12912120u, _esp0);
  ESP += 4; return;
  /* 12912225 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12912228 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1291222f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12912236:;
  /* 12912236 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291223a jne 0x12912240 */
  if (!C.zf) goto L_12912240;
  /* 1291223c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291223e jmp 0x129122b1 */
  goto L_129122b1;
L_12912240:;
  /* 12912240 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12912243 push edx */
  push32((uint32_t)(EDX));
  /* 12912244 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912247 push eax */
  push32((uint32_t)(EAX));
  /* 12912248 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291224b push ecx */
  push32((uint32_t)(ECX));
  /* 1291224c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291224f push edx */
  push32((uint32_t)(EDX));
  /* 12912250 call dword ptr [0x12930238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930238))), 0x12912256u);
  /* 12912256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912258 jne 0x1291225e */
  if (!C.zf) goto L_1291225e;
  /* 1291225a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291225c jmp 0x129122b1 */
  goto L_129122b1;
L_1291225e:;
  /* 1291225e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912262 jne 0x12912286 */
  if (!C.zf) goto L_12912286;
  /* 12912264 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912266 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1291226a push 0 */
  push32((uint32_t)(0x0u));
  /* 1291226c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1291226e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912271 push eax */
  push32((uint32_t)(EAX));
  /* 12912272 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12912277 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1291227a push ecx */
  push32((uint32_t)(ECX));
  /* 1291227b call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x12912281u);
  /* 12912281 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12912284 jmp 0x129122aa */
  goto L_129122aa;
L_12912286:;
  /* 12912286 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1291228a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291228d push edx */
  push32((uint32_t)(EDX));
  /* 1291228e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912291 push eax */
  push32((uint32_t)(EAX));
  /* 12912292 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12912294 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912297 push ecx */
  push32((uint32_t)(ECX));
  /* 12912298 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1291229d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129122a0 push edx */
  push32((uint32_t)(EDX));
  /* 129122a1 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x129122a7u);
  /* 129122a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129122aa:;
  /* 129122aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129122ad jmp 0x129122b1 */
  goto L_129122b1;
L_129122af:;
  /* 129122af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129122b1:;
  /* 129122b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 129122b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129122b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129122be pop edi */
  EDI = (pop32());
  /* 129122bf pop esi */
  ESI = (pop32());
  /* 129122c0 pop ebx */
  EBX = (pop32());
  /* 129122c1 mov esp, ebp */
  ESP = (EBP);
  /* 129122c3 pop ebp */
  EBP = (pop32());
  /* 129122c4 ret  */
  ESPCHK(0x12912120u, _esp0);
  ESP += 4; return;
}

/* FUN_100122d0 @ 0x129122d0 (11 bytes, 6 insns) */
void f_129122d0(void) {
  FTRACE(0x129122d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129122d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129122d1 mov ebp, esp */
  EBP = (ESP);
  /* 129122d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129122d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129122d9 pop ebp */
  EBP = (pop32());
  /* 129122da ret  */
  ESPCHK(0x129122d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x129122e0 (147 bytes, 43 insns) */
void f_129122e0(void) {
  FTRACE(0x129122e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129122e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129122e1 mov ebp, esp */
  EBP = (ESP);
  /* 129122e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129122e4 cmp dword ptr [0x1292e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129122eb jne 0x12912307 */
  if (!C.zf) goto L_12912307;
  /* 129122ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129122f1 jl 0x12912302 */
  if ((C.sf!=C.of)) goto L_12912302;
  /* 129122f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129122f7 jg 0x12912302 */
  if ((!C.zf&&C.sf==C.of)) goto L_12912302;
  /* 129122f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129122fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129122ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12912302:;
  /* 12912302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912305 jmp 0x1291236f */
  goto L_1291236f;
L_12912307:;
  /* 12912307 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1291230c call dword ptr [0x12930278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930278))), 0x12912312u);
  /* 12912312 cmp dword ptr [0x1292e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912319 je 0x12912339 */
  if (C.zf) goto L_12912339;
  /* 1291231b push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 12912320 call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x12912326u);
  /* 12912326 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12912328 call 0x12906540 */
  push32(0x1291232du); f_12906540();
  /* 1291232d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912330 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12912337 jmp 0x12912340 */
  goto L_12912340;
L_12912339:;
  /* 12912339 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12912340:;
  /* 12912340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912343 push ecx */
  push32((uint32_t)(ECX));
  /* 12912344 call 0x12912380 */
  push32(0x12912349u); f_12912380();
  /* 12912349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291234c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1291234f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912353 je 0x12912361 */
  if (C.zf) goto L_12912361;
  /* 12912355 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12912357 call 0x129065e0 */
  push32(0x1291235cu); f_129065e0();
  /* 1291235c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291235f jmp 0x1291236c */
  goto L_1291236c;
L_12912361:;
  /* 12912361 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 12912366 call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x1291236cu);
L_1291236c:;
  /* 1291236c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1291236f:;
  /* 1291236f mov esp, ebp */
  ESP = (EBP);
  /* 12912371 pop ebp */
  EBP = (pop32());
  /* 12912372 ret  */
  ESPCHK(0x129122e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x12912380 (299 bytes, 91 insns) */
void f_12912380(void) {
  FTRACE(0x12912380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912380 push ebp */
  push32((uint32_t)(EBP));
  /* 12912381 mov ebp, esp */
  EBP = (ESP);
  /* 12912383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912386 cmp dword ptr [0x1292e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291238d jne 0x129123ac */
  if (!C.zf) goto L_129123ac;
  /* 1291238f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912393 jl 0x129123a4 */
  if ((C.sf!=C.of)) goto L_129123a4;
  /* 12912395 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912399 jg 0x129123a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_129123a4;
  /* 1291239b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291239e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129123a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129123a4:;
  /* 129123a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129123a7 jmp 0x129124a7 */
  goto L_129124a7;
L_129123ac:;
  /* 129123ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129123b3 jge 0x129123f3 */
  if ((C.sf==C.of)) goto L_129123f3;
  /* 129123b5 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129123bc jle 0x129123d1 */
  if ((C.zf||C.sf!=C.of)) goto L_129123d1;
  /* 129123be push 1 */
  push32((uint32_t)(0x1u));
  /* 129123c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129123c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129123c4 call 0x12908b50 */
  push32(0x129123c9u); f_12908b50();
  /* 129123c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129123cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129123cf jmp 0x129123e5 */
  goto L_129123e5;
L_129123d1:;
  /* 129123d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129123d4 mov eax, dword ptr [0x1292cc98] */
  EAX = (r32((uint32_t)(0x1292cc98)));
  /* 129123d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129123db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129123df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129123e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129123e5:;
  /* 129123e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129123e9 jne 0x129123f3 */
  if (!C.zf) goto L_129123f3;
  /* 129123eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129123ee jmp 0x129124a7 */
  goto L_129124a7;
L_129123f3:;
  /* 129123f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129123f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129123f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129123ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12912405 mov eax, dword ptr [0x1292cc98] */
  EAX = (r32((uint32_t)(0x1292cc98)));
  /* 1291240a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1291240c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12912410 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12912416 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12912418 je 0x1291243c */
  if (C.zf) goto L_1291243c;
  /* 1291241a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291241d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12912420 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12912426 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12912429 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1291242c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1291242f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12912433 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1291243a jmp 0x1291244d */
  goto L_1291244d;
L_1291243c:;
  /* 1291243c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1291243f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12912442 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12912446 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1291244d:;
  /* 1291244d push 1 */
  push32((uint32_t)(0x1u));
  /* 1291244f push 0 */
  push32((uint32_t)(0x0u));
  /* 12912451 push 3 */
  push32((uint32_t)(0x3u));
  /* 12912453 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12912456 push edx */
  push32((uint32_t)(EDX));
  /* 12912457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291245a push eax */
  push32((uint32_t)(EAX));
  /* 1291245b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1291245e push ecx */
  push32((uint32_t)(ECX));
  /* 1291245f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12912464 mov edx, dword ptr [0x1292e688] */
  EDX = (r32((uint32_t)(0x1292e688)));
  /* 1291246a push edx */
  push32((uint32_t)(EDX));
  /* 1291246b call 0x1290af30 */
  push32(0x12912470u); f_1290af30();
  /* 12912470 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12912476 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291247a jne 0x12912481 */
  if (!C.zf) goto L_12912481;
  /* 1291247c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291247f jmp 0x129124a7 */
  goto L_129124a7;
L_12912481:;
  /* 12912481 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912485 jne 0x12912491 */
  if (!C.zf) goto L_12912491;
  /* 12912487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291248a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1291248f jmp 0x129124a7 */
  goto L_129124a7;
L_12912491:;
  /* 12912491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912494 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912499 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1291249c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129124a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129124a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_129124a7:;
  /* 129124a7 mov esp, ebp */
  ESP = (EBP);
  /* 129124a9 pop ebp */
  EBP = (pop32());
  /* 129124aa ret  */
  ESPCHK(0x12912380u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x129124b0 (52 bytes, 19 insns) */
void f_129124b0(void) {
  FTRACE(0x129124b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129124b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129124b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129124b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129124ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129124be jne 0x129124c9 */
  if (!C.zf) goto L_129124c9;
  /* 129124c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 129124c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129124c6 ret 0x10 */
  ESPCHK(0x129124b0u, _esp0);
  ESP += 20; return;
L_129124c9:;
  /* 129124c9 push ebx */
  push32((uint32_t)(EBX));
  /* 129124ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129124cc mov ebx, eax */
  EBX = (EAX);
  /* 129124ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129124d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129124d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 129124d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129124dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129124de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129124e0 pop ebx */
  EBX = (pop32());
  /* 129124e1 ret 0x10 */
  ESPCHK(0x129124b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100124f0 @ 0x129124f0 (46 bytes, 18 insns) */
void f_129124f0(void) {
  FTRACE(0x129124f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129124f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129124f1 mov ebp, esp */
  EBP = (ESP);
  /* 129124f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129124f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 129124f6 call 0x12906540 */
  push32(0x129124fbu); f_12906540();
  /* 129124fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129124fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912501 push eax */
  push32((uint32_t)(EAX));
  /* 12912502 call 0x12912520 */
  push32(0x12912507u); f_12912520();
  /* 12912507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291250a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1291250d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1291250f call 0x129065e0 */
  push32(0x12912514u); f_129065e0();
  /* 12912514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291251a mov esp, ebp */
  ESP = (EBP);
  /* 1291251c pop ebp */
  EBP = (pop32());
  /* 1291251d ret  */
  ESPCHK(0x129124f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12912520 (198 bytes, 69 insns) */
void f_12912520(void) {
  FTRACE(0x12912520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912520 push ebp */
  push32((uint32_t)(EBP));
  /* 12912521 mov ebp, esp */
  EBP = (ESP);
  /* 12912523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912526 mov eax, dword ptr [0x1292e4a4] */
  EAX = (r32((uint32_t)(0x1292e4a4)));
  /* 1291252b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1291252e cmp dword ptr [0x1292ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912535 jne 0x1291253e */
  if (!C.zf) goto L_1291253e;
  /* 12912537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912539 jmp 0x129125e2 */
  goto L_129125e2;
L_1291253e:;
  /* 1291253e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912542 jne 0x12912566 */
  if (!C.zf) goto L_12912566;
  /* 12912544 cmp dword ptr [0x1292e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291254b je 0x12912566 */
  if (C.zf) goto L_12912566;
  /* 1291254d call 0x12912640 */
  push32(0x12912552u); f_12912640();
  /* 12912552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912554 je 0x1291255d */
  if (C.zf) goto L_1291255d;
  /* 12912556 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912558 jmp 0x129125e2 */
  goto L_129125e2;
L_1291255d:;
  /* 1291255d mov ecx, dword ptr [0x1292e4a4] */
  ECX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912563 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12912566:;
  /* 12912566 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291256a je 0x129125e0 */
  if (C.zf) goto L_129125e0;
  /* 1291256c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912570 je 0x129125e0 */
  if (C.zf) goto L_129125e0;
  /* 12912572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912575 push edx */
  push32((uint32_t)(EDX));
  /* 12912576 call 0x12905970 */
  push32(0x1291257bu); f_12905970();
  /* 1291257b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291257e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12912581:;
  /* 12912581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912584 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912587 je 0x129125e0 */
  if (C.zf) goto L_129125e0;
  /* 12912589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1291258c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1291258e push edx */
  push32((uint32_t)(EDX));
  /* 1291258f call 0x12905970 */
  push32(0x12912594u); f_12905970();
  /* 12912594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912597 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291259a jbe 0x129125d5 */
  if ((C.cf||C.zf)) goto L_129125d5;
  /* 1291259c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1291259f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129125a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129125a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 129125a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129125ab jne 0x129125d5 */
  if (!C.zf) goto L_129125d5;
  /* 129125ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129125b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129125b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129125b4 push edx */
  push32((uint32_t)(EDX));
  /* 129125b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129125b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129125ba push ecx */
  push32((uint32_t)(ECX));
  /* 129125bb call 0x129125f0 */
  push32(0x129125c0u); f_129125f0();
  /* 129125c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129125c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129125c5 jne 0x129125d5 */
  if (!C.zf) goto L_129125d5;
  /* 129125c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129125ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129125cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129125cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 129125d3 jmp 0x129125e2 */
  goto L_129125e2;
L_129125d5:;
  /* 129125d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129125d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129125db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129125de jmp 0x12912581 */
  goto L_12912581;
L_129125e0:;
  /* 129125e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129125e2:;
  /* 129125e2 mov esp, ebp */
  ESP = (EBP);
  /* 129125e4 pop ebp */
  EBP = (pop32());
  /* 129125e5 ret  */
  ESPCHK(0x12912520u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x129125f0 (79 bytes, 32 insns) */
void f_129125f0(void) {
  FTRACE(0x129125f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129125f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129125f1 mov ebp, esp */
  EBP = (ESP);
  /* 129125f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129125f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129125f8 jne 0x129125fe */
  if (!C.zf) goto L_129125fe;
  /* 129125fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129125fc jmp 0x1291263b */
  goto L_1291263b;
L_129125fe:;
  /* 129125fe mov eax, dword ptr [0x1292fb64] */
  EAX = (r32((uint32_t)(0x1292fb64)));
  /* 12912603 push eax */
  push32((uint32_t)(EAX));
  /* 12912604 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912607 push ecx */
  push32((uint32_t)(ECX));
  /* 12912608 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1291260b push edx */
  push32((uint32_t)(EDX));
  /* 1291260c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1291260f push eax */
  push32((uint32_t)(EAX));
  /* 12912610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912613 push ecx */
  push32((uint32_t)(ECX));
  /* 12912614 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912616 mov edx, dword ptr [0x1292fe04] */
  EDX = (r32((uint32_t)(0x1292fe04)));
  /* 1291261c push edx */
  push32((uint32_t)(EDX));
  /* 1291261d call 0x129126f0 */
  push32(0x12912622u); f_129126f0();
  /* 12912622 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12912628 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291262c jne 0x12912635 */
  if (!C.zf) goto L_12912635;
  /* 1291262e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12912633 jmp 0x1291263b */
  goto L_1291263b;
L_12912635:;
  /* 12912635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912638 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1291263b:;
  /* 1291263b mov esp, ebp */
  ESP = (EBP);
  /* 1291263d pop ebp */
  EBP = (pop32());
  /* 1291263e ret  */
  ESPCHK(0x129125f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x12912640 (174 bytes, 66 insns) */
void f_12912640(void) {
  FTRACE(0x12912640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912640 push ebp */
  push32((uint32_t)(EBP));
  /* 12912641 mov ebp, esp */
  EBP = (ESP);
  /* 12912643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912646 mov eax, dword ptr [0x1292e4ac] */
  EAX = (r32((uint32_t)(0x1292e4ac)));
  /* 1291264b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1291264e:;
  /* 1291264e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912651 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912654 je 0x129126e8 */
  if (C.zf) goto L_129126e8;
  /* 1291265a push 0 */
  push32((uint32_t)(0x0u));
  /* 1291265c push 0 */
  push32((uint32_t)(0x0u));
  /* 1291265e push 0 */
  push32((uint32_t)(0x0u));
  /* 12912660 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912662 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12912664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912667 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12912669 push eax */
  push32((uint32_t)(EAX));
  /* 1291266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1291266c push 1 */
  push32((uint32_t)(0x1u));
  /* 1291266e call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x12912674u);
  /* 12912674 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12912677 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291267b jne 0x12912682 */
  if (!C.zf) goto L_12912682;
  /* 1291267d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912680 jmp 0x129126ea */
  goto L_129126ea;
L_12912682:;
  /* 12912682 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12912684 push 0x1292a874 */
  push32((uint32_t)(0x1292a874u));
  /* 12912689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1291268b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1291268e push ecx */
  push32((uint32_t)(ECX));
  /* 1291268f call 0x12902b40 */
  push32(0x12912694u); f_12902b40();
  /* 12912694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912697 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1291269a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291269e jne 0x129126a5 */
  if (!C.zf) goto L_129126a5;
  /* 129126a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129126a3 jmp 0x129126ea */
  goto L_129126ea;
L_129126a5:;
  /* 129126a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129126a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129126a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129126ac push edx */
  push32((uint32_t)(EDX));
  /* 129126ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129126b0 push eax */
  push32((uint32_t)(EAX));
  /* 129126b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129126b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129126b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129126b8 push edx */
  push32((uint32_t)(EDX));
  /* 129126b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129126bb push 1 */
  push32((uint32_t)(0x1u));
  /* 129126bd call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x129126c3u);
  /* 129126c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129126c5 jne 0x129126cc */
  if (!C.zf) goto L_129126cc;
  /* 129126c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129126ca jmp 0x129126ea */
  goto L_129126ea;
L_129126cc:;
  /* 129126cc push 0 */
  push32((uint32_t)(0x0u));
  /* 129126ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129126d1 push eax */
  push32((uint32_t)(EAX));
  /* 129126d2 call 0x12912b40 */
  push32(0x129126d7u); f_12912b40();
  /* 129126d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129126da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129126dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129126e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129126e3 jmp 0x1291264e */
  goto L_1291264e;
L_129126e8:;
  /* 129126e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129126ea:;
  /* 129126ea mov esp, ebp */
  ESP = (EBP);
  /* 129126ec pop ebp */
  EBP = (pop32());
  /* 129126ed ret  */
  ESPCHK(0x12912640u, _esp0);
  ESP += 4; return;
}

/* FUN_100126f0 @ 0x129126f0 (970 bytes, 340 insns) */
void f_129126f0(void) {
  FTRACE(0x129126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129126f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129126f1 mov ebp, esp */
  EBP = (ESP);
  /* 129126f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129126f5 push 0x1292a8c8 */
  push32((uint32_t)(0x1292a8c8u));
  /* 129126fa push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 129126ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12912705 push eax */
  push32((uint32_t)(EAX));
  /* 12912706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1291270d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912710 push ebx */
  push32((uint32_t)(EBX));
  /* 12912711 push esi */
  push32((uint32_t)(ESI));
  /* 12912712 push edi */
  push32((uint32_t)(EDI));
  /* 12912713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12912716 cmp dword ptr [0x1292e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291271d jne 0x12912776 */
  if (!C.zf) goto L_12912776;
  /* 1291271f push 1 */
  push32((uint32_t)(0x1u));
  /* 12912721 push 0x12929f24 */
  push32((uint32_t)(0x12929f24u));
  /* 12912726 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912728 push 0x12929f24 */
  push32((uint32_t)(0x12929f24u));
  /* 1291272d push 0 */
  push32((uint32_t)(0x0u));
  /* 1291272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12912731 call dword ptr [0x12930230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930230))), 0x12912737u);
  /* 12912737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912739 je 0x12912747 */
  if (C.zf) goto L_12912747;
  /* 1291273b mov dword ptr [0x1292e7ec], 1 */
  w32((uint32_t)(0x1292e7ec), (0x1u));
  /* 12912745 jmp 0x12912776 */
  goto L_12912776;
L_12912747:;
  /* 12912747 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912749 push 0x12929f20 */
  push32((uint32_t)(0x12929f20u));
  /* 1291274e push 1 */
  push32((uint32_t)(0x1u));
  /* 12912750 push 0x12929f20 */
  push32((uint32_t)(0x12929f20u));
  /* 12912755 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12912759 call dword ptr [0x12930234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930234))), 0x1291275fu);
  /* 1291275f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912761 je 0x1291276f */
  if (C.zf) goto L_1291276f;
  /* 12912763 mov dword ptr [0x1292e7ec], 2 */
  w32((uint32_t)(0x1292e7ec), (0x2u));
  /* 1291276d jmp 0x12912776 */
  goto L_12912776;
L_1291276f:;
  /* 1291276f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912771 jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912776:;
  /* 12912776 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291277a jle 0x1291278f */
  if ((C.zf||C.sf!=C.of)) goto L_1291278f;
  /* 1291277c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1291277f push eax */
  push32((uint32_t)(EAX));
  /* 12912780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912783 push ecx */
  push32((uint32_t)(ECX));
  /* 12912784 call 0x12912af0 */
  push32(0x12912789u); f_12912af0();
  /* 12912789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291278c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1291278f:;
  /* 1291278f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912793 jle 0x129127a8 */
  if ((C.zf||C.sf!=C.of)) goto L_129127a8;
  /* 12912795 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12912798 push edx */
  push32((uint32_t)(EDX));
  /* 12912799 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1291279c push eax */
  push32((uint32_t)(EAX));
  /* 1291279d call 0x12912af0 */
  push32(0x129127a2u); f_12912af0();
  /* 129127a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129127a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_129127a8:;
  /* 129127a8 cmp dword ptr [0x1292e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129127af jne 0x129127d4 */
  if (!C.zf) goto L_129127d4;
  /* 129127b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129127b4 push ecx */
  push32((uint32_t)(ECX));
  /* 129127b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129127b8 push edx */
  push32((uint32_t)(EDX));
  /* 129127b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129127bc push eax */
  push32((uint32_t)(EAX));
  /* 129127bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129127c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129127c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129127c4 push edx */
  push32((uint32_t)(EDX));
  /* 129127c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129127c8 push eax */
  push32((uint32_t)(EAX));
  /* 129127c9 call dword ptr [0x12930234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930234))), 0x129127cfu);
  /* 129127cf jmp 0x12912ad4 */
  goto L_12912ad4;
L_129127d4:;
  /* 129127d4 cmp dword ptr [0x1292e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129127db jne 0x12912ad2 */
  if (!C.zf) goto L_12912ad2;
  /* 129127e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129127e5 jne 0x129127f0 */
  if (!C.zf) goto L_129127f0;
  /* 129127e7 mov ecx, dword ptr [0x1292e698] */
  ECX = (r32((uint32_t)(0x1292e698)));
  /* 129127ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_129127f0:;
  /* 129127f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129127f4 je 0x12912800 */
  if (C.zf) goto L_12912800;
  /* 129127f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129127fa jne 0x1291297c */
  if (!C.zf) goto L_1291297c;
L_12912800:;
  /* 12912800 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12912803 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912806 jne 0x12912812 */
  if (!C.zf) goto L_12912812;
  /* 12912808 mov eax, 2 */
  EAX = (0x2u);
  /* 1291280d jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912812:;
  /* 12912812 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912816 jle 0x12912822 */
  if ((C.zf||C.sf!=C.of)) goto L_12912822;
  /* 12912818 mov eax, 1 */
  EAX = (0x1u);
  /* 1291281d jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912822:;
  /* 12912822 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912826 jle 0x12912832 */
  if ((C.zf||C.sf!=C.of)) goto L_12912832;
  /* 12912828 mov eax, 3 */
  EAX = (0x3u);
  /* 1291282d jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912832:;
  /* 12912832 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12912835 push eax */
  push32((uint32_t)(EAX));
  /* 12912836 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12912839 push ecx */
  push32((uint32_t)(ECX));
  /* 1291283a call dword ptr [0x12930310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930310))), 0x12912840u);
  /* 12912840 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912842 jne 0x1291284b */
  if (!C.zf) goto L_1291284b;
  /* 12912844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912846 jmp 0x12912ad4 */
  goto L_12912ad4;
L_1291284b:;
  /* 1291284b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291284f jne 0x12912857 */
  if (!C.zf) goto L_12912857;
  /* 12912851 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912855 je 0x12912884 */
  if (C.zf) goto L_12912884;
L_12912857:;
  /* 12912857 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291285b jne 0x12912863 */
  if (!C.zf) goto L_12912863;
  /* 1291285d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912861 je 0x12912884 */
  if (C.zf) goto L_12912884;
L_12912863:;
  /* 12912863 push 0x1292a888 */
  push32((uint32_t)(0x1292a888u));
  /* 12912868 push 0 */
  push32((uint32_t)(0x0u));
  /* 1291286a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1291286f push 0x1292a880 */
  push32((uint32_t)(0x1292a880u));
  /* 12912874 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912876 call 0x12901c00 */
  push32(0x1291287bu); f_12901c00();
  /* 1291287b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291287e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912881 jne 0x12912884 */
  if (!C.zf) goto L_12912884;
  /* 12912883 int3  */
  x86_unimpl("int3 @ 0x12912883");
L_12912884:;
  /* 12912884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12912886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912888 jne 0x1291284b */
  if (!C.zf) goto L_1291284b;
  /* 1291288a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291288e jle 0x12912903 */
  if ((C.zf||C.sf!=C.of)) goto L_12912903;
  /* 12912890 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912894 jae 0x129128a0 */
  if (!C.cf) goto L_129128a0;
  /* 12912896 mov eax, 3 */
  EAX = (0x3u);
  /* 1291289b jmp 0x12912ad4 */
  goto L_12912ad4;
L_129128a0:;
  /* 129128a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 129128a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 129128a6 jmp 0x129128b1 */
  goto L_129128b1;
L_129128a8:;
  /* 129128a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129128ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129128ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_129128b1:;
  /* 129128b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129128b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129128b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129128b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129128ba je 0x129128f9 */
  if (C.zf) goto L_129128f9;
  /* 129128bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129128bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129128c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129128c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129128c6 je 0x129128f9 */
  if (C.zf) goto L_129128f9;
  /* 129128c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129128cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129128cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129128cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129128d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129128d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129128d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129128d8 jl 0x129128f7 */
  if ((C.sf!=C.of)) goto L_129128f7;
  /* 129128da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129128dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129128df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129128e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129128e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129128e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129128e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129128eb jg 0x129128f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_129128f7;
  /* 129128ed mov eax, 2 */
  EAX = (0x2u);
  /* 129128f2 jmp 0x12912ad4 */
  goto L_12912ad4;
L_129128f7:;
  /* 129128f7 jmp 0x129128a8 */
  goto L_129128a8;
L_129128f9:;
  /* 129128f9 mov eax, 3 */
  EAX = (0x3u);
  /* 129128fe jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912903:;
  /* 12912903 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912907 jle 0x1291297c */
  if ((C.zf||C.sf!=C.of)) goto L_1291297c;
  /* 12912909 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291290d jae 0x12912919 */
  if (!C.cf) goto L_12912919;
  /* 1291290f mov eax, 1 */
  EAX = (0x1u);
  /* 12912914 jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912919:;
  /* 12912919 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1291291c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1291291f jmp 0x1291292a */
  goto L_1291292a;
L_12912921:;
  /* 12912921 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12912924 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912927 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1291292a:;
  /* 1291292a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1291292d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1291292f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12912931 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912933 je 0x12912972 */
  if (C.zf) goto L_12912972;
  /* 12912935 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12912938 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1291293a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1291293d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1291293f je 0x12912972 */
  if (C.zf) goto L_12912972;
  /* 12912941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12912944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912946 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12912948 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1291294b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1291294d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1291294f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912951 jl 0x12912970 */
  if ((C.sf!=C.of)) goto L_12912970;
  /* 12912953 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12912956 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12912958 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1291295a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1291295d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291295f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12912962 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912964 jg 0x12912970 */
  if ((!C.zf&&C.sf==C.of)) goto L_12912970;
  /* 12912966 mov eax, 2 */
  EAX = (0x2u);
  /* 1291296b jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912970:;
  /* 12912970 jmp 0x12912921 */
  goto L_12912921;
L_12912972:;
  /* 12912972 mov eax, 1 */
  EAX = (0x1u);
  /* 12912977 jmp 0x12912ad4 */
  goto L_12912ad4;
L_1291297c:;
  /* 1291297c push 0 */
  push32((uint32_t)(0x0u));
  /* 1291297e push 0 */
  push32((uint32_t)(0x0u));
  /* 12912980 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12912983 push ecx */
  push32((uint32_t)(ECX));
  /* 12912984 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912987 push edx */
  push32((uint32_t)(EDX));
  /* 12912988 push 9 */
  push32((uint32_t)(0x9u));
  /* 1291298a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1291298d push eax */
  push32((uint32_t)(EAX));
  /* 1291298e call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x12912994u);
  /* 12912994 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12912997 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1291299b jne 0x129129a4 */
  if (!C.zf) goto L_129129a4;
  /* 1291299d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1291299f jmp 0x12912ad4 */
  goto L_12912ad4;
L_129129a4:;
  /* 129129a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129129ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129129ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129129b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129129b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129129b5 call 0x12905ce0 */
  push32(0x129129bau); f_12905ce0();
  /* 129129ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 129129bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129129c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 129129c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129129c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129129cd jmp 0x129129e6 */
  goto L_129129e6;
  /* 129129cf mov eax, 1 */
  EAX = (0x1u);
  /* 129129d4 ret  */
  ESPCHK(0x129126f0u, _esp0);
  ESP += 4; return;
  /* 129129d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129129d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129129df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129129e6:;
  /* 129129e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129129ea jne 0x129129f3 */
  if (!C.zf) goto L_129129f3;
  /* 129129ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129129ee jmp 0x12912ad4 */
  goto L_12912ad4;
L_129129f3:;
  /* 129129f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129129f6 push edx */
  push32((uint32_t)(EDX));
  /* 129129f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129129fa push eax */
  push32((uint32_t)(EAX));
  /* 129129fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129129fe push ecx */
  push32((uint32_t)(ECX));
  /* 129129ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12912a02 push edx */
  push32((uint32_t)(EDX));
  /* 12912a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12912a05 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12912a08 push eax */
  push32((uint32_t)(EAX));
  /* 12912a09 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x12912a0fu);
  /* 12912a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912a11 jne 0x12912a1a */
  if (!C.zf) goto L_12912a1a;
  /* 12912a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912a15 jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912a1a:;
  /* 12912a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12912a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12912a1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12912a21 push ecx */
  push32((uint32_t)(ECX));
  /* 12912a22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12912a25 push edx */
  push32((uint32_t)(EDX));
  /* 12912a26 push 9 */
  push32((uint32_t)(0x9u));
  /* 12912a28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12912a2b push eax */
  push32((uint32_t)(EAX));
  /* 12912a2c call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x12912a32u);
  /* 12912a32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12912a35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912a39 jne 0x12912a42 */
  if (!C.zf) goto L_12912a42;
  /* 12912a3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912a3d jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912a42:;
  /* 12912a42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12912a49 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912a4c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12912a4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912a51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12912a53 call 0x12905ce0 */
  push32(0x12912a58u); f_12905ce0();
  /* 12912a58 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12912a5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12912a5e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12912a61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12912a64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12912a6b jmp 0x12912a84 */
  goto L_12912a84;
  /* 12912a6d mov eax, 1 */
  EAX = (0x1u);
  /* 12912a72 ret  */
  ESPCHK(0x129126f0u, _esp0);
  ESP += 4; return;
  /* 12912a73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12912a76 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12912a7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12912a84:;
  /* 12912a84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912a88 jne 0x12912a8e */
  if (!C.zf) goto L_12912a8e;
  /* 12912a8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912a8c jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912a8e:;
  /* 12912a8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912a91 push edx */
  push32((uint32_t)(EDX));
  /* 12912a92 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12912a95 push eax */
  push32((uint32_t)(EAX));
  /* 12912a96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12912a99 push ecx */
  push32((uint32_t)(ECX));
  /* 12912a9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12912a9d push edx */
  push32((uint32_t)(EDX));
  /* 12912a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 12912aa0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12912aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12912aa4 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x12912aaau);
  /* 12912aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912aac jne 0x12912ab2 */
  if (!C.zf) goto L_12912ab2;
  /* 12912aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912ab0 jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912ab2:;
  /* 12912ab2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12912ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 12912ab6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12912ab9 push edx */
  push32((uint32_t)(EDX));
  /* 12912aba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12912abd push eax */
  push32((uint32_t)(EAX));
  /* 12912abe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12912ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 12912ac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912ac5 push edx */
  push32((uint32_t)(EDX));
  /* 12912ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912ac9 push eax */
  push32((uint32_t)(EAX));
  /* 12912aca call dword ptr [0x12930230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930230))), 0x12912ad0u);
  /* 12912ad0 jmp 0x12912ad4 */
  goto L_12912ad4;
L_12912ad2:;
  /* 12912ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12912ad4:;
  /* 12912ad4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12912ad7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912ada mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12912ae1 pop edi */
  EDI = (pop32());
  /* 12912ae2 pop esi */
  ESI = (pop32());
  /* 12912ae3 pop ebx */
  EBX = (pop32());
  /* 12912ae4 mov esp, ebp */
  ESP = (EBP);
  /* 12912ae6 pop ebp */
  EBP = (pop32());
  /* 12912ae7 ret  */
  ESPCHK(0x129126f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x12912af0 (80 bytes, 32 insns) */
void f_12912af0(void) {
  FTRACE(0x12912af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12912af1 mov ebp, esp */
  EBP = (ESP);
  /* 12912af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912af6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912af9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12912afc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912aff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12912b02:;
  /* 12912b02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912b05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912b08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912b0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12912b0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912b10 je 0x12912b27 */
  if (C.zf) goto L_12912b27;
  /* 12912b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912b15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12912b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912b1a je 0x12912b27 */
  if (C.zf) goto L_12912b27;
  /* 12912b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912b1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912b22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12912b25 jmp 0x12912b02 */
  goto L_12912b02;
L_12912b27:;
  /* 12912b27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912b2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12912b2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912b2f jne 0x12912b39 */
  if (!C.zf) goto L_12912b39;
  /* 12912b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912b34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912b37 jmp 0x12912b3c */
  goto L_12912b3c;
L_12912b39:;
  /* 12912b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12912b3c:;
  /* 12912b3c mov esp, ebp */
  ESP = (EBP);
  /* 12912b3e pop ebp */
  EBP = (pop32());
  /* 12912b3f ret  */
  ESPCHK(0x12912af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b40 @ 0x12912b40 (736 bytes, 224 insns) */
void f_12912b40(void) {
  FTRACE(0x12912b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12912b41 mov ebp, esp */
  EBP = (ESP);
  /* 12912b43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912b46 push esi */
  push32((uint32_t)(ESI));
  /* 12912b47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912b4b je 0x12912b6c */
  if (C.zf) goto L_12912b6c;
  /* 12912b4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12912b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912b52 push eax */
  push32((uint32_t)(EAX));
  /* 12912b53 call 0x12912f90 */
  push32(0x12912b58u); f_12912f90();
  /* 12912b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912b5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12912b5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912b62 je 0x12912b6c */
  if (C.zf) goto L_12912b6c;
  /* 12912b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912b67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912b6a jne 0x12912b74 */
  if (!C.zf) goto L_12912b74;
L_12912b6c:;
  /* 12912b6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912b6f jmp 0x12912e1b */
  goto L_12912e1b;
L_12912b74:;
  /* 12912b74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12912b77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12912b7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12912b7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912b7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12912b80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12912b83 mov ecx, dword ptr [0x1292e4a4] */
  ECX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912b89 cmp ecx, dword ptr [0x1292e4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292e4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912b8f jne 0x12912ba5 */
  if (!C.zf) goto L_12912ba5;
  /* 12912b91 mov edx, dword ptr [0x1292e4a4] */
  EDX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912b97 push edx */
  push32((uint32_t)(EDX));
  /* 12912b98 call 0x12912ea0 */
  push32(0x12912b9du); f_12912ea0();
  /* 12912b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912ba0 mov dword ptr [0x1292e4a4], eax */
  w32((uint32_t)(0x1292e4a4), (EAX));
L_12912ba5:;
  /* 12912ba5 cmp dword ptr [0x1292e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912bac jne 0x12912c65 */
  if (!C.zf) goto L_12912c65;
  /* 12912bb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912bb6 je 0x12912bd7 */
  if (C.zf) goto L_12912bd7;
  /* 12912bb8 cmp dword ptr [0x1292e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912bbf je 0x12912bd7 */
  if (C.zf) goto L_12912bd7;
  /* 12912bc1 call 0x12912640 */
  push32(0x12912bc6u); f_12912640();
  /* 12912bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912bc8 je 0x12912bd2 */
  if (C.zf) goto L_12912bd2;
  /* 12912bca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912bcd jmp 0x12912e1b */
  goto L_12912e1b;
L_12912bd2:;
  /* 12912bd2 jmp 0x12912c65 */
  goto L_12912c65;
L_12912bd7:;
  /* 12912bd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912bdb je 0x12912be4 */
  if (C.zf) goto L_12912be4;
  /* 12912bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912bdf jmp 0x12912e1b */
  goto L_12912e1b;
L_12912be4:;
  /* 12912be4 cmp dword ptr [0x1292e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912beb jne 0x12912c24 */
  if (!C.zf) goto L_12912c24;
  /* 12912bed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12912bf2 push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12912bfb call 0x12902b40 */
  push32(0x12912c00u); f_12902b40();
  /* 12912c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912c03 mov dword ptr [0x1292e4a4], eax */
  w32((uint32_t)(0x1292e4a4), (EAX));
  /* 12912c08 cmp dword ptr [0x1292e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c0f jne 0x12912c19 */
  if (!C.zf) goto L_12912c19;
  /* 12912c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912c14 jmp 0x12912e1b */
  goto L_12912e1b;
L_12912c19:;
  /* 12912c19 mov eax, dword ptr [0x1292e4a4] */
  EAX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912c1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12912c24:;
  /* 12912c24 cmp dword ptr [0x1292e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c2b jne 0x12912c65 */
  if (!C.zf) goto L_12912c65;
  /* 12912c2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12912c32 push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912c39 push 4 */
  push32((uint32_t)(0x4u));
  /* 12912c3b call 0x12902b40 */
  push32(0x12912c40u); f_12902b40();
  /* 12912c40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912c43 mov dword ptr [0x1292e4ac], eax */
  w32((uint32_t)(0x1292e4ac), (EAX));
  /* 12912c48 cmp dword ptr [0x1292e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c4f jne 0x12912c59 */
  if (!C.zf) goto L_12912c59;
  /* 12912c51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912c54 jmp 0x12912e1b */
  goto L_12912e1b;
L_12912c59:;
  /* 12912c59 mov ecx, dword ptr [0x1292e4ac] */
  ECX = (r32((uint32_t)(0x1292e4ac)));
  /* 12912c5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12912c65:;
  /* 12912c65 mov edx, dword ptr [0x1292e4a4] */
  EDX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912c6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12912c6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12912c71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912c74 push eax */
  push32((uint32_t)(EAX));
  /* 12912c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912c78 push ecx */
  push32((uint32_t)(ECX));
  /* 12912c79 call 0x12912e20 */
  push32(0x12912c7eu); f_12912e20();
  /* 12912c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912c81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12912c84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c88 jl 0x12912d21 */
  if ((C.sf!=C.of)) goto L_12912d21;
  /* 12912c8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912c91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c94 je 0x12912d21 */
  if (C.zf) goto L_12912d21;
  /* 12912c9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912c9e je 0x12912d13 */
  if (C.zf) goto L_12912d13;
  /* 12912ca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912ca2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912ca5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912ca8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12912cab push edx */
  push32((uint32_t)(EDX));
  /* 12912cac call 0x129035d0 */
  push32(0x12912cb1u); f_129035d0();
  /* 12912cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912cb4 jmp 0x12912cbf */
  goto L_12912cbf;
L_12912cb6:;
  /* 12912cb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912cb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912cbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12912cbf:;
  /* 12912cbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912cc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912cc5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912cc9 je 0x12912ce0 */
  if (C.zf) goto L_12912ce0;
  /* 12912ccb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912cce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912cd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912cd4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12912cd7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12912cdb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12912cde jmp 0x12912cb6 */
  goto L_12912cb6;
L_12912ce0:;
  /* 12912ce0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12912ce5 push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912cea push 2 */
  push32((uint32_t)(0x2u));
  /* 12912cec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912cef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12912cf2 push eax */
  push32((uint32_t)(EAX));
  /* 12912cf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12912cf7 call 0x12902fd0 */
  push32(0x12912cfcu); f_12902fd0();
  /* 12912cfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912cff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12912d02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912d06 je 0x12912d11 */
  if (C.zf) goto L_12912d11;
  /* 12912d08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d0b mov dword ptr [0x1292e4a4], edx */
  w32((uint32_t)(0x1292e4a4), (EDX));
L_12912d11:;
  /* 12912d11 jmp 0x12912d1f */
  goto L_12912d1f;
L_12912d13:;
  /* 12912d13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912d16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912d1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12912d1f:;
  /* 12912d1f jmp 0x12912d94 */
  goto L_12912d94;
L_12912d21:;
  /* 12912d21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912d25 jne 0x12912d8d */
  if (!C.zf) goto L_12912d8d;
  /* 12912d27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912d2b jge 0x12912d35 */
  if ((C.sf==C.of)) goto L_12912d35;
  /* 12912d2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912d30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12912d32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12912d35:;
  /* 12912d35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12912d3a push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12912d41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912d44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12912d4b push edx */
  push32((uint32_t)(EDX));
  /* 12912d4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d4f push eax */
  push32((uint32_t)(EAX));
  /* 12912d50 call 0x12902fd0 */
  push32(0x12912d55u); f_12902fd0();
  /* 12912d55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912d58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12912d5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912d5f jne 0x12912d69 */
  if (!C.zf) goto L_12912d69;
  /* 12912d61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912d64 jmp 0x12912e1b */
  goto L_12912e1b;
L_12912d69:;
  /* 12912d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912d6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912d72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12912d75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912d78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12912d83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912d86 mov dword ptr [0x1292e4a4], eax */
  w32((uint32_t)(0x1292e4a4), (EAX));
  /* 12912d8b jmp 0x12912d94 */
  goto L_12912d94;
L_12912d8d:;
  /* 12912d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912d8f jmp 0x12912e1b */
  goto L_12912e1b;
L_12912d94:;
  /* 12912d94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912d98 je 0x12912e19 */
  if (C.zf) goto L_12912e19;
  /* 12912d9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12912d9f push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912da4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912da9 push ecx */
  push32((uint32_t)(ECX));
  /* 12912daa call 0x12905970 */
  push32(0x12912dafu); f_12905970();
  /* 12912daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912db2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912db5 push eax */
  push32((uint32_t)(EAX));
  /* 12912db6 call 0x12902b40 */
  push32(0x12912dbbu); f_12902b40();
  /* 12912dbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912dbe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12912dc1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912dc5 je 0x12912e19 */
  if (C.zf) goto L_12912e19;
  /* 12912dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912dca push edx */
  push32((uint32_t)(EDX));
  /* 12912dcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912dce push eax */
  push32((uint32_t)(EAX));
  /* 12912dcf call 0x12905af0 */
  push32(0x12912dd4u); f_12905af0();
  /* 12912dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912dd7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12912dda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912ddd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912de0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912de2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12912de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912de8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12912deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912df1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12912df4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12912df7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12912df9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912dfb not edx */
  EDX = (~(EDX));
  /* 12912dfd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12912e00 push edx */
  push32((uint32_t)(EDX));
  /* 12912e01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912e04 push eax */
  push32((uint32_t)(EAX));
  /* 12912e05 call dword ptr [0x1293022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293022c))), 0x12912e0bu);
  /* 12912e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12912e0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912e10 push ecx */
  push32((uint32_t)(ECX));
  /* 12912e11 call 0x129035d0 */
  push32(0x12912e16u); f_129035d0();
  /* 12912e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12912e19:;
  /* 12912e19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12912e1b:;
  /* 12912e1b pop esi */
  ESI = (pop32());
  /* 12912e1c mov esp, ebp */
  ESP = (EBP);
  /* 12912e1e pop ebp */
  EBP = (pop32());
  /* 12912e1f ret  */
  ESPCHK(0x12912b40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12912e20 (124 bytes, 47 insns) */
void f_12912e20(void) {
  FTRACE(0x12912e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12912e21 mov ebp, esp */
  EBP = (ESP);
  /* 12912e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12912e24 mov eax, dword ptr [0x1292e4a4] */
  EAX = (r32((uint32_t)(0x1292e4a4)));
  /* 12912e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12912e2c jmp 0x12912e37 */
  goto L_12912e37;
L_12912e2e:;
  /* 12912e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12912e37:;
  /* 12912e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912e3d je 0x12912e8a */
  if (C.zf) goto L_12912e8a;
  /* 12912e3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912e42 push eax */
  push32((uint32_t)(EAX));
  /* 12912e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12912e48 push edx */
  push32((uint32_t)(EDX));
  /* 12912e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912e4c push eax */
  push32((uint32_t)(EAX));
  /* 12912e4d call 0x129125f0 */
  push32(0x12912e52u); f_129125f0();
  /* 12912e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12912e57 jne 0x12912e88 */
  if (!C.zf) goto L_12912e88;
  /* 12912e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12912e5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912e61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12912e65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912e68 je 0x12912e7a */
  if (C.zf) goto L_12912e7a;
  /* 12912e6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12912e6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912e72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12912e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912e78 jne 0x12912e88 */
  if (!C.zf) goto L_12912e88;
L_12912e7a:;
  /* 12912e7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e7d sub eax, dword ptr [0x1292e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912e83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12912e86 jmp 0x12912e98 */
  goto L_12912e98;
L_12912e88:;
  /* 12912e88 jmp 0x12912e2e */
  goto L_12912e2e;
L_12912e8a:;
  /* 12912e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912e8d sub eax, dword ptr [0x1292e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912e93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12912e96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12912e98:;
  /* 12912e98 mov esp, ebp */
  ESP = (EBP);
  /* 12912e9a pop ebp */
  EBP = (pop32());
  /* 12912e9b ret  */
  ESPCHK(0x12912e20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12912ea0 (238 bytes, 80 insns) */
void f_12912ea0(void) {
  FTRACE(0x12912ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12912ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12912ea3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12912ea6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12912ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912eb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12912eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912eb7 jne 0x12912ec0 */
  if (!C.zf) goto L_12912ec0;
  /* 12912eb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12912ebb jmp 0x12912f8a */
  goto L_12912f8a;
L_12912ec0:;
  /* 12912ec0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912ec3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12912ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912ec8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912ecb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12912ece test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912ed0 je 0x12912edd */
  if (C.zf) goto L_12912edd;
  /* 12912ed2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912ed8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12912edb jmp 0x12912ec0 */
  goto L_12912ec0;
L_12912edd:;
  /* 12912edd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12912ee2 push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912ee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12912ee9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12912eec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12912ef3 push eax */
  push32((uint32_t)(EAX));
  /* 12912ef4 call 0x12902b40 */
  push32(0x12912ef9u); f_12902b40();
  /* 12912ef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912efc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12912eff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12912f05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912f09 jne 0x12912f15 */
  if (!C.zf) goto L_12912f15;
  /* 12912f0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12912f0d call 0x12901ab0 */
  push32(0x12912f12u); f_12901ab0();
  /* 12912f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12912f15:;
  /* 12912f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912f18 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12912f1b:;
  /* 12912f1b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912f1e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912f21 je 0x12912f7e */
  if (C.zf) goto L_12912f7e;
  /* 12912f23 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12912f28 push 0x1292a8e0 */
  push32((uint32_t)(0x1292a8e0u));
  /* 12912f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12912f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912f32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12912f34 push edx */
  push32((uint32_t)(EDX));
  /* 12912f35 call 0x12905970 */
  push32(0x12912f3au); f_12905970();
  /* 12912f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912f3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912f40 push eax */
  push32((uint32_t)(EAX));
  /* 12912f41 call 0x12902b40 */
  push32(0x12912f46u); f_12902b40();
  /* 12912f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f4c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12912f4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912f54 je 0x12912f6a */
  if (C.zf) goto L_12912f6a;
  /* 12912f56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912f59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12912f5b push ecx */
  push32((uint32_t)(ECX));
  /* 12912f5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f5f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12912f61 push eax */
  push32((uint32_t)(EAX));
  /* 12912f62 call 0x12905af0 */
  push32(0x12912f67u); f_12905af0();
  /* 12912f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12912f6a:;
  /* 12912f6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12912f6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912f70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12912f73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f76 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912f79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12912f7c jmp 0x12912f1b */
  goto L_12912f1b;
L_12912f7e:;
  /* 12912f7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12912f81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12912f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12912f8a:;
  /* 12912f8a mov esp, ebp */
  ESP = (EBP);
  /* 12912f8c pop ebp */
  EBP = (pop32());
  /* 12912f8d ret  */
  ESPCHK(0x12912ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x12912f90 (237 bytes, 81 insns) */
void f_12912f90(void) {
  FTRACE(0x12912f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12912f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12912f91 mov ebp, esp */
  EBP = (ESP);
  /* 12912f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12912f94 cmp dword ptr [0x1292fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12912f9b jne 0x12912fb2 */
  if (!C.zf) goto L_12912fb2;
  /* 12912f9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12912fa0 push eax */
  push32((uint32_t)(EAX));
  /* 12912fa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12912fa5 call 0x12913090 */
  push32(0x12912faau); f_12913090();
  /* 12912faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912fad jmp 0x12913079 */
  goto L_12913079;
L_12912fb2:;
  /* 12912fb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12912fb4 call 0x12906540 */
  push32(0x12912fb9u); f_12906540();
  /* 12912fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12912fbc jmp 0x12912fc7 */
  goto L_12912fc7;
L_12912fbe:;
  /* 12912fbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912fc4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12912fc7:;
  /* 12912fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912fca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12912fce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12912fd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912fd5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12912fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12912fdd je 0x1291305b */
  if (C.zf) goto L_1291305b;
  /* 12912fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12912fe2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12912fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12912fe9 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 12912fef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12912ff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12912ff4 je 0x12913046 */
  if (C.zf) goto L_12913046;
  /* 12912ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12912ff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12912ffc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12912fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12913002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12913004 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12913006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12913008 jne 0x12913018 */
  if (!C.zf) goto L_12913018;
  /* 1291300a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1291300c call 0x129065e0 */
  push32(0x12913011u); f_129065e0();
  /* 12913011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12913014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12913016 jmp 0x12913079 */
  goto L_12913079;
L_12913018:;
  /* 12913018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1291301b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12913021 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12913024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12913027 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12913029 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1291302b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1291302d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12913030 jne 0x12913044 */
  if (!C.zf) goto L_12913044;
  /* 12913032 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12913034 call 0x129065e0 */
  push32(0x12913039u); f_129065e0();
  /* 12913039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1291303c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1291303f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12913042 jmp 0x12913079 */
  goto L_12913079;
L_12913044:;
  /* 12913044 jmp 0x12913056 */
  goto L_12913056;
L_12913046:;
  /* 12913046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12913049 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1291304f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12913052 jne 0x12913056 */
  if (!C.zf) goto L_12913056;
  /* 12913054 jmp 0x1291305b */
  goto L_1291305b;
L_12913056:;
  /* 12913056 jmp 0x12912fbe */
  goto L_12912fbe;
L_1291305b:;
  /* 1291305b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1291305d call 0x129065e0 */
  push32(0x12913062u); f_129065e0();
  /* 12913062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12913065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12913068 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1291306d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12913070 jne 0x12913077 */
  if (!C.zf) goto L_12913077;
  /* 12913072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12913075 jmp 0x12913079 */
  goto L_12913079;
L_12913077:;
  /* 12913077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12913079:;
  /* 12913079 mov esp, ebp */
  ESP = (EBP);
  /* 1291307b pop ebp */
  EBP = (pop32());
  /* 1291307c ret  */
  ESPCHK(0x12912f90u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12913090 (193 bytes, 87 insns) */
void f_12913090(void) {
  FTRACE(0x12913090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12913090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12913092 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12913096 push ebx */
  push32((uint32_t)(EBX));
  /* 12913097 mov ebx, eax */
  EBX = (EAX);
  /* 12913099 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1291309c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 129130a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129130a6 je 0x129130bb */
  if (C.zf) goto L_129130bb;
L_129130a8:;
  /* 129130a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 129130aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129130ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129130ad je 0x12913080 */
  if (C.zf) { jmp_ind(0x12913080u); return; }
  /* 129130af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 129130b1 je 0x12913104 */
  if (C.zf) goto L_12913104;
  /* 129130b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129130b9 jne 0x129130a8 */
  if (!C.zf) goto L_129130a8;
L_129130bb:;
  /* 129130bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 129130bd push edi */
  push32((uint32_t)(EDI));
  /* 129130be mov eax, ebx */
  EAX = (EBX);
  /* 129130c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 129130c3 push esi */
  push32((uint32_t)(ESI));
  /* 129130c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_129130c6:;
  /* 129130c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 129130c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 129130cd mov eax, ecx */
  EAX = (ECX);
  /* 129130cf mov esi, edi */
  ESI = (EDI);
  /* 129130d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 129130d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129130d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129130d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129130da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129130dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 129130df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 129130e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129130e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 129130ea jne 0x12913108 */
  if (!C.zf) goto L_12913108;
  /* 129130ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 129130f1 je 0x129130c6 */
  if (C.zf) goto L_129130c6;
  /* 129130f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 129130f8 jne 0x12913102 */
  if (!C.zf) goto L_12913102;
  /* 129130fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12913100 jne 0x129130c6 */
  if (!C.zf) goto L_129130c6;
L_12913102:;
  /* 12913102 pop esi */
  ESI = (pop32());
  /* 12913103 pop edi */
  EDI = (pop32());
L_12913104:;
  /* 12913104 pop ebx */
  EBX = (pop32());
  /* 12913105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12913107 ret  */
  ESPCHK(0x12913090u, _esp0);
  ESP += 4; return;
L_12913108:;
  /* 12913108 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1291310b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1291310d je 0x12913145 */
  if (C.zf) goto L_12913145;
  /* 1291310f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12913111 je 0x12913102 */
  if (C.zf) goto L_12913102;
  /* 12913113 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12913115 je 0x1291313e */
  if (C.zf) goto L_1291313e;
  /* 12913117 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12913119 je 0x12913102 */
  if (C.zf) goto L_12913102;
  /* 1291311b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1291311e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12913120 je 0x12913137 */
  if (C.zf) goto L_12913137;
  /* 12913122 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12913124 je 0x12913102 */
  if (C.zf) goto L_12913102;
  /* 12913126 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12913128 je 0x12913130 */
  if (C.zf) goto L_12913130;
  /* 1291312a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1291312c je 0x12913102 */
  if (C.zf) goto L_12913102;
  /* 1291312e jmp 0x129130c6 */
  goto L_129130c6;
L_12913130:;
  /* 12913130 pop esi */
  ESI = (pop32());
  /* 12913131 pop edi */
  EDI = (pop32());
  /* 12913132 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12913135 pop ebx */
  EBX = (pop32());
  /* 12913136 ret  */
  ESPCHK(0x12913090u, _esp0);
  ESP += 4; return;
L_12913137:;
  /* 12913137 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1291313a pop esi */
  ESI = (pop32());
  /* 1291313b pop edi */
  EDI = (pop32());
  /* 1291313c pop ebx */
  EBX = (pop32());
  /* 1291313d ret  */
  ESPCHK(0x12913090u, _esp0);
  ESP += 4; return;
L_1291313e:;
  /* 1291313e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12913141 pop esi */
  ESI = (pop32());
  /* 12913142 pop edi */
  EDI = (pop32());
  /* 12913143 pop ebx */
  EBX = (pop32());
  /* 12913144 ret  */
  ESPCHK(0x12913090u, _esp0);
  ESP += 4; return;
L_12913145:;
  /* 12913145 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12913148 pop esi */
  ESI = (pop32());
  /* 12913149 pop edi */
  EDI = (pop32());
  /* 1291314a pop ebx */
  EBX = (pop32());
  /* 1291314b ret  */
  ESPCHK(0x12913090u, _esp0);
  ESP += 4; return;
  /* 1291314c jmp dword ptr [0x12930254] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12930254)))); return;
}

/* RtlUnwind @ 0x1291329c (6 bytes, 1 insns) */
void f_1291329c(void) {
  FTRACE(0x1291329cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1291329c jmp dword ptr [0x12930330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12930330)))); return;
}

