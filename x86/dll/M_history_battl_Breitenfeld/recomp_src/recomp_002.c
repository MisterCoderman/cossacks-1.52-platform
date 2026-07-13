#include "recomp.h"

/* __close_lk @ 0x1282f740 (170 bytes, 59 insns) */
void f_1282f740(void) {
  FTRACE(0x1282f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f740 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f741 mov ebp, esp */
  EBP = (ESP);
  /* 1282f743 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f744 push esi */
  push32((uint32_t)(ESI));
  /* 1282f745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f748 push eax */
  push32((uint32_t)(EAX));
  /* 1282f749 call 0x1282c0b0 */
  push32(0x1282f74eu); f_1282c0b0();
  /* 1282f74e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f751 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f754 je 0x1282f793 */
  if (C.zf) goto L_1282f793;
  /* 1282f756 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f75a je 0x1282f762 */
  if (C.zf) goto L_1282f762;
  /* 1282f75c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f760 jne 0x1282f77c */
  if (!C.zf) goto L_1282f77c;
L_1282f762:;
  /* 1282f762 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282f764 call 0x1282c0b0 */
  push32(0x1282f769u); f_1282c0b0();
  /* 1282f769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f76c mov esi, eax */
  ESI = (EAX);
  /* 1282f76e push 2 */
  push32((uint32_t)(0x2u));
  /* 1282f770 call 0x1282c0b0 */
  push32(0x1282f775u); f_1282c0b0();
  /* 1282f775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f778 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f77a je 0x1282f793 */
  if (C.zf) goto L_1282f793;
L_1282f77c:;
  /* 1282f77c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f77f push ecx */
  push32((uint32_t)(ECX));
  /* 1282f780 call 0x1282c0b0 */
  push32(0x1282f785u); f_1282c0b0();
  /* 1282f785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f788 push eax */
  push32((uint32_t)(EAX));
  /* 1282f789 call dword ptr [0x12850240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850240))), 0x1282f78fu);
  /* 1282f78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f791 je 0x1282f79c */
  if (C.zf) goto L_1282f79c;
L_1282f793:;
  /* 1282f793 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282f79a jmp 0x1282f7a5 */
  goto L_1282f7a5;
L_1282f79c:;
  /* 1282f79c call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282f7a2u);
  /* 1282f7a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282f7a5:;
  /* 1282f7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f7a8 push edx */
  push32((uint32_t)(EDX));
  /* 1282f7a9 call 0x1282bfd0 */
  push32(0x1282f7aeu); f_1282bfd0();
  /* 1282f7ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f7b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f7b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282f7b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f7ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282f7bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f7c0 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282f7c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1282f7cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f7d0 je 0x1282f7e3 */
  if (C.zf) goto L_1282f7e3;
  /* 1282f7d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f7d5 push eax */
  push32((uint32_t)(EAX));
  /* 1282f7d6 call 0x1282a970 */
  push32(0x1282f7dbu); f_1282a970();
  /* 1282f7db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f7de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f7e1 jmp 0x1282f7e5 */
  goto L_1282f7e5;
L_1282f7e3:;
  /* 1282f7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282f7e5:;
  /* 1282f7e5 pop esi */
  ESI = (pop32());
  /* 1282f7e6 mov esp, ebp */
  ESP = (EBP);
  /* 1282f7e8 pop ebp */
  EBP = (pop32());
  /* 1282f7e9 ret  */
  ESPCHK(0x1282f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x1282f7f0 (146 bytes, 52 insns) */
void f_1282f7f0(void) {
  FTRACE(0x1282f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282f7f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1282f7f4 push esi */
  push32((uint32_t)(ESI));
  /* 1282f7f5 push edi */
  push32((uint32_t)(EDI));
L_1282f7f6:;
  /* 1282f7f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f7fa jne 0x1282f81a */
  if (!C.zf) goto L_1282f81a;
  /* 1282f7fc push 0x12849fe0 */
  push32((uint32_t)(0x12849fe0u));
  /* 1282f801 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282f803 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1282f805 push 0x1284a6a8 */
  push32((uint32_t)(0x1284a6a8u));
  /* 1282f80a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282f80c call 0x12821c00 */
  push32(0x1282f811u); f_12821c00();
  /* 1282f811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f814 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f817 jne 0x1282f81a */
  if (!C.zf) goto L_1282f81a;
  /* 1282f819 int3  */
  x86_unimpl("int3 @ 0x1282f819");
L_1282f81a:;
  /* 1282f81a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f81c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f81e jne 0x1282f7f6 */
  if (!C.zf) goto L_1282f7f6;
  /* 1282f820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f823 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282f826 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1282f82c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282f82e je 0x1282f87d */
  if (C.zf) goto L_1282f87d;
  /* 1282f830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f833 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282f836 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1282f839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282f83b je 0x1282f87d */
  if (C.zf) goto L_1282f87d;
  /* 1282f83d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282f83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f842 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1282f845 push eax */
  push32((uint32_t)(EAX));
  /* 1282f846 call 0x128235d0 */
  push32(0x1282f84bu); f_128235d0();
  /* 1282f84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f84e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f851 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282f854 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1282f85a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f85d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1282f860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f863 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1282f869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f86c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1282f873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f876 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1282f87d:;
  /* 1282f87d pop edi */
  EDI = (pop32());
  /* 1282f87e pop esi */
  ESI = (pop32());
  /* 1282f87f pop ebx */
  EBX = (pop32());
  /* 1282f880 pop ebp */
  EBP = (pop32());
  /* 1282f881 ret  */
  ESPCHK(0x1282f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1282f890 (289 bytes, 97 insns) */
void f_1282f890(void) {
  FTRACE(0x1282f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f891 mov ebp, esp */
  EBP = (ESP);
  /* 1282f893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f896 push esi */
  push32((uint32_t)(ESI));
  /* 1282f897 mov eax, dword ptr [0x1284dc98] */
  EAX = (r32((uint32_t)(0x1284dc98)));
  /* 1282f89c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282f89f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282f8a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282f8ad jmp 0x1282f8b8 */
  goto L_1282f8b8;
L_1282f8af:;
  /* 1282f8af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f8b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f8b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1282f8b8:;
  /* 1282f8b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f8bc jae 0x1282f8f1 */
  if (!C.cf) goto L_1282f8f1;
  /* 1282f8be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f8c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f8c8 call 0x12825970 */
  push32(0x1282f8cdu); f_12825970();
  /* 1282f8cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f8d0 mov esi, eax */
  ESI = (EAX);
  /* 1282f8d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f8d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f8d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1282f8dc push ecx */
  push32((uint32_t)(ECX));
  /* 1282f8dd call 0x12825970 */
  push32(0x1282f8e2u); f_12825970();
  /* 1282f8e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f8e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f8e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1282f8ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282f8ef jmp 0x1282f8af */
  goto L_1282f8af;
L_1282f8f1:;
  /* 1282f8f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f8f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f8f7 push eax */
  push32((uint32_t)(EAX));
  /* 1282f8f8 call 0x12822b20 */
  push32(0x1282f8fdu); f_12822b20();
  /* 1282f8fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f900 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282f903 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f907 je 0x1282f9a9 */
  if (C.zf) goto L_1282f9a9;
  /* 1282f90d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f910 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282f913 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282f91a jmp 0x1282f925 */
  goto L_1282f925;
L_1282f91c:;
  /* 1282f91c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f91f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f922 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1282f925:;
  /* 1282f925 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f929 jae 0x1282f99a */
  if (!C.cf) goto L_1282f99a;
  /* 1282f92b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f92e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1282f931 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f934 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f937 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282f93a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f93d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f940 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282f943 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f944 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f947 push edx */
  push32((uint32_t)(EDX));
  /* 1282f948 call 0x12825af0 */
  push32(0x1282f94du); f_12825af0();
  /* 1282f94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f950 push eax */
  push32((uint32_t)(EAX));
  /* 1282f951 call 0x12825970 */
  push32(0x1282f956u); f_12825970();
  /* 1282f956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f959 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f95c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f95e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282f961 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f964 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1282f967 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f96a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f96d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282f970 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f973 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f976 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1282f97a push eax */
  push32((uint32_t)(EAX));
  /* 1282f97b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f97e push ecx */
  push32((uint32_t)(ECX));
  /* 1282f97f call 0x12825af0 */
  push32(0x1282f984u); f_12825af0();
  /* 1282f984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f987 push eax */
  push32((uint32_t)(EAX));
  /* 1282f988 call 0x12825970 */
  push32(0x1282f98du); f_12825970();
  /* 1282f98d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f990 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f993 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f995 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282f998 jmp 0x1282f91c */
  goto L_1282f91c;
L_1282f99a:;
  /* 1282f99a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f99d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1282f9a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282f9a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f9a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1282f9a9:;
  /* 1282f9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f9ac pop esi */
  ESI = (pop32());
  /* 1282f9ad mov esp, ebp */
  ESP = (EBP);
  /* 1282f9af pop ebp */
  EBP = (pop32());
  /* 1282f9b0 ret  */
  ESPCHK(0x1282f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9c0 @ 0x1282f9c0 (291 bytes, 97 insns) */
void f_1282f9c0(void) {
  FTRACE(0x1282f9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282f9c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f9c6 push esi */
  push32((uint32_t)(ESI));
  /* 1282f9c7 mov eax, dword ptr [0x1284dc98] */
  EAX = (r32((uint32_t)(0x1284dc98)));
  /* 1282f9cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282f9cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282f9d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282f9dd jmp 0x1282f9e8 */
  goto L_1282f9e8;
L_1282f9df:;
  /* 1282f9df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f9e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f9e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1282f9e8:;
  /* 1282f9e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f9ec jae 0x1282fa22 */
  if (!C.cf) goto L_1282fa22;
  /* 1282f9ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f9f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f9f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1282f9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f9f9 call 0x12825970 */
  push32(0x1282f9feu); f_12825970();
  /* 1282f9fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa01 mov esi, eax */
  ESI = (EAX);
  /* 1282fa03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fa06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fa09 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1282fa0d push ecx */
  push32((uint32_t)(ECX));
  /* 1282fa0e call 0x12825970 */
  push32(0x1282fa13u); f_12825970();
  /* 1282fa13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa16 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa19 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1282fa1d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282fa20 jmp 0x1282f9df */
  goto L_1282f9df;
L_1282fa22:;
  /* 1282fa22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282fa25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa28 push eax */
  push32((uint32_t)(EAX));
  /* 1282fa29 call 0x12822b20 */
  push32(0x1282fa2eu); f_12822b20();
  /* 1282fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282fa34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fa38 je 0x1282fadb */
  if (C.zf) goto L_1282fadb;
  /* 1282fa3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fa41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282fa44 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282fa4b jmp 0x1282fa56 */
  goto L_1282fa56;
L_1282fa4d:;
  /* 1282fa4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fa50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1282fa56:;
  /* 1282fa56 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fa5a jae 0x1282facc */
  if (!C.cf) goto L_1282facc;
  /* 1282fa5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa5f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1282fa62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282fa6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fa6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fa71 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1282fa75 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fa76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa79 push edx */
  push32((uint32_t)(EDX));
  /* 1282fa7a call 0x12825af0 */
  push32(0x1282fa7fu); f_12825af0();
  /* 1282fa7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa82 push eax */
  push32((uint32_t)(EAX));
  /* 1282fa83 call 0x12825970 */
  push32(0x1282fa88u); f_12825970();
  /* 1282fa88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282fa93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa96 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1282fa99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fa9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fa9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282faa2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282faa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282faa8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1282faac push eax */
  push32((uint32_t)(EAX));
  /* 1282faad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fab0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fab1 call 0x12825af0 */
  push32(0x1282fab6u); f_12825af0();
  /* 1282fab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fab9 push eax */
  push32((uint32_t)(EAX));
  /* 1282faba call 0x12825970 */
  push32(0x1282fabfu); f_12825970();
  /* 1282fabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fac2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fac5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fac7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282faca jmp 0x1282fa4d */
  goto L_1282fa4d;
L_1282facc:;
  /* 1282facc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282facf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1282fad2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fad8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1282fadb:;
  /* 1282fadb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fade pop esi */
  ESI = (pop32());
  /* 1282fadf mov esp, ebp */
  ESP = (EBP);
  /* 1282fae1 pop ebp */
  EBP = (pop32());
  /* 1282fae2 ret  */
  ESPCHK(0x1282f9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1282faf0 (878 bytes, 273 insns) */
void f_1282faf0(void) {
  FTRACE(0x1282faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1282faf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282faf6 push esi */
  push32((uint32_t)(ESI));
  /* 1282faf7 mov eax, dword ptr [0x1284dc98] */
  EAX = (r32((uint32_t)(0x1284dc98)));
  /* 1282fafc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282faff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282fb06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282fb0d jmp 0x1282fb18 */
  goto L_1282fb18;
L_1282fb0f:;
  /* 1282fb0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1282fb18:;
  /* 1282fb18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fb1c jae 0x1282fb51 */
  if (!C.cf) goto L_1282fb51;
  /* 1282fb1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fb24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282fb27 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fb28 call 0x12825970 */
  push32(0x1282fb2du); f_12825970();
  /* 1282fb2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb30 mov esi, eax */
  ESI = (EAX);
  /* 1282fb32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fb38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1282fb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1282fb3d call 0x12825970 */
  push32(0x1282fb42u); f_12825970();
  /* 1282fb42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1282fb4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282fb4f jmp 0x1282fb0f */
  goto L_1282fb0f;
L_1282fb51:;
  /* 1282fb51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282fb58 jmp 0x1282fb63 */
  goto L_1282fb63;
L_1282fb5a:;
  /* 1282fb5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1282fb63:;
  /* 1282fb63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fb67 jae 0x1282fb9d */
  if (!C.cf) goto L_1282fb9d;
  /* 1282fb69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fb6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1282fb73 push eax */
  push32((uint32_t)(EAX));
  /* 1282fb74 call 0x12825970 */
  push32(0x1282fb79u); f_12825970();
  /* 1282fb79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb7c mov esi, eax */
  ESI = (EAX);
  /* 1282fb7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fb81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fb84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1282fb88 push eax */
  push32((uint32_t)(EAX));
  /* 1282fb89 call 0x12825970 */
  push32(0x1282fb8eu); f_12825970();
  /* 1282fb8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fb94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1282fb98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282fb9b jmp 0x1282fb5a */
  goto L_1282fb5a;
L_1282fb9d:;
  /* 1282fb9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fba0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1282fba6 push eax */
  push32((uint32_t)(EAX));
  /* 1282fba7 call 0x12825970 */
  push32(0x1282fbacu); f_12825970();
  /* 1282fbac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fbaf mov esi, eax */
  ESI = (EAX);
  /* 1282fbb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fbb4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1282fbba push edx */
  push32((uint32_t)(EDX));
  /* 1282fbbb call 0x12825970 */
  push32(0x1282fbc0u); f_12825970();
  /* 1282fbc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fbc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fbc6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1282fbca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282fbcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fbd0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1282fbd6 push edx */
  push32((uint32_t)(EDX));
  /* 1282fbd7 call 0x12825970 */
  push32(0x1282fbdcu); f_12825970();
  /* 1282fbdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fbdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282fbe2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fbe6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282fbe9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fbec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1282fbf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fbf3 call 0x12825970 */
  push32(0x1282fbf8u); f_12825970();
  /* 1282fbf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fbfb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282fbfe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1282fc02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282fc05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fc08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1282fc0e push edx */
  push32((uint32_t)(EDX));
  /* 1282fc0f call 0x12825970 */
  push32(0x1282fc14u); f_12825970();
  /* 1282fc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282fc1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fc1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282fc21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282fc24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc29 push eax */
  push32((uint32_t)(EAX));
  /* 1282fc2a call 0x12822b20 */
  push32(0x1282fc2fu); f_12822b20();
  /* 1282fc2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282fc35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fc39 je 0x1282fe56 */
  if (C.zf) goto L_1282fe56;
  /* 1282fc3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fc42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1282fc45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fc48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282fc51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1282fc56 mov eax, dword ptr [0x1284dc98] */
  EAX = (r32((uint32_t)(0x1284dc98)));
  /* 1282fc5b push eax */
  push32((uint32_t)(EAX));
  /* 1282fc5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fc5f push ecx */
  push32((uint32_t)(ECX));
  /* 1282fc60 call 0x12829420 */
  push32(0x1282fc65u); f_12829420();
  /* 1282fc65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282fc6f jmp 0x1282fc7a */
  goto L_1282fc7a;
L_1282fc71:;
  /* 1282fc71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fc74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fc77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1282fc7a:;
  /* 1282fc7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fc7e jae 0x1282fcee */
  if (!C.cf) goto L_1282fcee;
  /* 1282fc80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fc83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fc86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fc89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1282fc8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fc8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fc92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282fc95 push edx */
  push32((uint32_t)(EDX));
  /* 1282fc96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fc99 push eax */
  push32((uint32_t)(EAX));
  /* 1282fc9a call 0x12825af0 */
  push32(0x1282fc9fu); f_12825af0();
  /* 1282fc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fca2 push eax */
  push32((uint32_t)(EAX));
  /* 1282fca3 call 0x12825970 */
  push32(0x1282fca8u); f_12825970();
  /* 1282fca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fcab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fcae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fcb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282fcb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fcb8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fcbb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fcbe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1282fcc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fcc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fcc8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1282fccc push edx */
  push32((uint32_t)(EDX));
  /* 1282fccd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fcd0 push eax */
  push32((uint32_t)(EAX));
  /* 1282fcd1 call 0x12825af0 */
  push32(0x1282fcd6u); f_12825af0();
  /* 1282fcd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fcd9 push eax */
  push32((uint32_t)(EAX));
  /* 1282fcda call 0x12825970 */
  push32(0x1282fcdfu); f_12825970();
  /* 1282fcdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fce2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fce5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fce9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282fcec jmp 0x1282fc71 */
  goto L_1282fc71;
L_1282fcee:;
  /* 1282fcee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282fcf5 jmp 0x1282fd00 */
  goto L_1282fd00;
L_1282fcf7:;
  /* 1282fcf7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fcfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fcfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1282fd00:;
  /* 1282fd00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fd04 jae 0x1282fd76 */
  if (!C.cf) goto L_1282fd76;
  /* 1282fd06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fd09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fd0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1282fd13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fd16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fd19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1282fd1d push eax */
  push32((uint32_t)(EAX));
  /* 1282fd1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd21 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fd22 call 0x12825af0 */
  push32(0x1282fd27u); f_12825af0();
  /* 1282fd27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fd2a push eax */
  push32((uint32_t)(EAX));
  /* 1282fd2b call 0x12825970 */
  push32(0x1282fd30u); f_12825970();
  /* 1282fd30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fd33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1282fd3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282fd3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fd40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fd43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1282fd4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fd4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fd50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1282fd54 push eax */
  push32((uint32_t)(EAX));
  /* 1282fd55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd58 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fd59 call 0x12825af0 */
  push32(0x1282fd5eu); f_12825af0();
  /* 1282fd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fd61 push eax */
  push32((uint32_t)(EAX));
  /* 1282fd62 call 0x12825970 */
  push32(0x1282fd67u); f_12825970();
  /* 1282fd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fd6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1282fd71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282fd74 jmp 0x1282fcf7 */
  goto L_1282fcf7;
L_1282fd76:;
  /* 1282fd76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fd79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1282fd82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fd85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1282fd8b push ecx */
  push32((uint32_t)(ECX));
  /* 1282fd8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fd8f push edx */
  push32((uint32_t)(EDX));
  /* 1282fd90 call 0x12825af0 */
  push32(0x1282fd95u); f_12825af0();
  /* 1282fd95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fd98 push eax */
  push32((uint32_t)(EAX));
  /* 1282fd99 call 0x12825970 */
  push32(0x1282fd9eu); f_12825970();
  /* 1282fd9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fda1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fda4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fda8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282fdab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fdae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fdb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1282fdb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fdba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1282fdc0 push eax */
  push32((uint32_t)(EAX));
  /* 1282fdc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fdc5 call 0x12825af0 */
  push32(0x1282fdcau); f_12825af0();
  /* 1282fdca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fdcd push eax */
  push32((uint32_t)(EAX));
  /* 1282fdce call 0x12825970 */
  push32(0x1282fdd3u); f_12825970();
  /* 1282fdd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fdd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fdd9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1282fddd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282fde0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fde3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fde6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1282fdec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fdef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1282fdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282fdf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fdf9 push edx */
  push32((uint32_t)(EDX));
  /* 1282fdfa call 0x12825af0 */
  push32(0x1282fdffu); f_12825af0();
  /* 1282fdff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fe02 push eax */
  push32((uint32_t)(EAX));
  /* 1282fe03 call 0x12825970 */
  push32(0x1282fe08u); f_12825970();
  /* 1282fe08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fe0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fe0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1282fe12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1282fe15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fe18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fe1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1282fe21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282fe24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1282fe2a push eax */
  push32((uint32_t)(EAX));
  /* 1282fe2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fe2e push ecx */
  push32((uint32_t)(ECX));
  /* 1282fe2f call 0x12825af0 */
  push32(0x1282fe34u); f_12825af0();
  /* 1282fe34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fe37 push eax */
  push32((uint32_t)(EAX));
  /* 1282fe38 call 0x12825970 */
  push32(0x1282fe3du); f_12825970();
  /* 1282fe3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fe40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fe43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1282fe47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282fe4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282fe4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282fe50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1282fe56:;
  /* 1282fe56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282fe59 pop esi */
  ESI = (pop32());
  /* 1282fe5a mov esp, ebp */
  ESP = (EBP);
  /* 1282fe5c pop ebp */
  EBP = (pop32());
  /* 1282fe5d ret  */
  ESPCHK(0x1282faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe60 @ 0x1282fe60 (31 bytes, 15 insns) */
void f_1282fe60(void) {
  FTRACE(0x1282fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 1282fe61 mov ebp, esp */
  EBP = (ESP);
  /* 1282fe63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282fe65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282fe68 push eax */
  push32((uint32_t)(EAX));
  /* 1282fe69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 1282fe6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282fe70 push edx */
  push32((uint32_t)(EDX));
  /* 1282fe71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282fe74 push eax */
  push32((uint32_t)(EAX));
  /* 1282fe75 call 0x1282fe80 */
  push32(0x1282fe7au); f_1282fe80();
  /* 1282fe7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fe7d pop ebp */
  EBP = (pop32());
  /* 1282fe7e ret  */
  ESPCHK(0x1282fe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x1282fe80 (393 bytes, 123 insns) */
void f_1282fe80(void) {
  FTRACE(0x1282fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282fe80 push ebp */
  push32((uint32_t)(EBP));
  /* 1282fe81 mov ebp, esp */
  EBP = (ESP);
  /* 1282fe83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282fe86 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fe8a jne 0x1282fe96 */
  if (!C.zf) goto L_1282fe96;
  /* 1282fe8c mov eax, dword ptr [0x1284dc98] */
  EAX = (r32((uint32_t)(0x1284dc98)));
  /* 1282fe91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1282fe94 jmp 0x1282fe9c */
  goto L_1282fe9c;
L_1282fe96:;
  /* 1282fe96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282fe99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1282fe9c:;
  /* 1282fe9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282fe9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282fea2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282fea5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282fea8 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282fead call dword ptr [0x12850278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850278))), 0x1282feb3u);
  /* 1282feb3 cmp dword ptr [0x1284e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282feba je 0x1282feda */
  if (C.zf) goto L_1282feda;
  /* 1282febc push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282fec1 call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x1282fec7u);
  /* 1282fec7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282fec9 call 0x12826540 */
  push32(0x1282feceu); f_12826540();
  /* 1282fece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282fed1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1282fed8 jmp 0x1282fee1 */
  goto L_1282fee1;
L_1282feda:;
  /* 1282feda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1282fee1:;
  /* 1282fee1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fee5 jbe 0x1282ffd2 */
  if ((C.cf||C.zf)) goto L_1282ffd2;
  /* 1282feeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282feee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282fef0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1282fef3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282fef7 je 0x1282ff01 */
  if (C.zf) goto L_1282ff01;
  /* 1282fef9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282fefd je 0x1282ff06 */
  if (C.zf) goto L_1282ff06;
  /* 1282feff jmp 0x1282ff60 */
  goto L_1282ff60;
L_1282ff01:;
  /* 1282ff01 jmp 0x1282ffd2 */
  goto L_1282ffd2;
L_1282ff06:;
  /* 1282ff06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff0c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1282ff0f mov dword ptr [0x1284e7f0], 0 */
  w32((uint32_t)(0x1284e7f0), (0x0u));
  /* 1282ff19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282ff1f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ff22 jne 0x1282ff37 */
  if (!C.zf) goto L_1282ff37;
  /* 1282ff24 mov dword ptr [0x1284e7f0], 1 */
  w32((uint32_t)(0x1284e7f0), (0x1u));
  /* 1282ff2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff34 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1282ff37:;
  /* 1282ff37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282ff3a push ecx */
  push32((uint32_t)(ECX));
  /* 1282ff3b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1282ff3e push edx */
  push32((uint32_t)(EDX));
  /* 1282ff3f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1282ff42 push eax */
  push32((uint32_t)(EAX));
  /* 1282ff43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282ff46 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ff47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282ff4c push eax */
  push32((uint32_t)(EAX));
  /* 1282ff4d call 0x12830010 */
  push32(0x1282ff52u); f_12830010();
  /* 1282ff52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1282ff5e jmp 0x1282ffcd */
  goto L_1282ffcd;
L_1282ff60:;
  /* 1282ff60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ff65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282ff67 mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 1282ff6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282ff6f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1282ff73 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ff79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282ff7b je 0x1282ffa8 */
  if (C.zf) goto L_1282ffa8;
  /* 1282ff7d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ff81 jbe 0x1282ffa8 */
  if ((C.cf||C.zf)) goto L_1282ffa8;
  /* 1282ff83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ff86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff89 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282ff8b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1282ff8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ff90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff93 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1282ff96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ff99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ff9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1282ff9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282ffa2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ffa5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1282ffa8:;
  /* 1282ffa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ffab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ffae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282ffb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1282ffb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ffb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ffb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1282ffbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ffbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ffc1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1282ffc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282ffc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ffca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1282ffcd:;
  /* 1282ffcd jmp 0x1282fee1 */
  goto L_1282fee1;
L_1282ffd2:;
  /* 1282ffd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ffd6 je 0x1282ffe4 */
  if (C.zf) goto L_1282ffe4;
  /* 1282ffd8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282ffda call 0x128265e0 */
  push32(0x1282ffdfu); f_128265e0();
  /* 1282ffdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ffe2 jmp 0x1282ffef */
  goto L_1282ffef;
L_1282ffe4:;
  /* 1282ffe4 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282ffe9 call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x1282ffefu);
L_1282ffef:;
  /* 1282ffef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282fff3 jbe 0x12830003 */
  if ((C.cf||C.zf)) goto L_12830003;
  /* 1282fff5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282fff8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1282fffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282fffe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830001 jmp 0x12830005 */
  goto L_12830005;
L_12830003:;
  /* 12830003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12830005:;
  /* 12830005 mov esp, ebp */
  ESP = (EBP);
  /* 12830007 pop ebp */
  EBP = (pop32());
  /* 12830008 ret  */
  ESPCHK(0x1282fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x12830010 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12830010(void) {
  FTRACE(0x12830010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830010 push ebp */
  push32((uint32_t)(EBP));
  /* 12830011 mov ebp, esp */
  EBP = (ESP);
  /* 12830013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830016 push esi */
  push32((uint32_t)(ESI));
  /* 12830017 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1283001b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1283001e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830021 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830024 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12830027 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283002b ja 0x12830578 */
  if ((!C.cf&&!C.zf)) goto L_12830578;
  /* 12830031 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12830036 mov dl, byte ptr [eax + 0x128305d9] */
  DL = (r8((uint32_t)(EAX + 0x128305d9)));
  /* 1283003c jmp dword ptr [edx*4 + 0x1283057d] */
  switch (EDX) {
    case 0: goto L_12830556;
    case 1: goto L_12830065;
    case 2: goto L_128300ab;
    case 3: goto L_128301f8;
    case 4: goto L_12830220;
    case 5: goto L_128302bf;
    case 6: goto L_1283032b;
    case 7: goto L_12830354;
    case 8: goto L_12830395;
    case 9: goto L_12830477;
    case 10: goto L_128304de;
    case 11: goto L_1283052b;
    case 12: goto L_12830043;
    case 13: goto L_12830088;
    case 14: goto L_128300ce;
    case 15: goto L_128301ce;
    case 16: goto L_12830265;
    case 17: goto L_12830292;
    case 18: goto L_128302e7;
    case 19: goto L_1283036b;
    case 20: goto L_12830419;
    case 21: goto L_128304a8;
    case 22: goto L_12830578;
    default: x86_unimpl("switch@0x1283003c out of table"); return;
  }
L_12830043:;
  /* 12830043 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830046 push ecx */
  push32((uint32_t)(ECX));
  /* 12830047 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283004a push edx */
  push32((uint32_t)(EDX));
  /* 1283004b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283004e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12830051 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830054 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12830057 push eax */
  push32((uint32_t)(EAX));
  /* 12830058 call 0x12830630 */
  push32(0x1283005du); f_12830630();
  /* 1283005d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830060 jmp 0x12830578 */
  goto L_12830578;
L_12830065:;
  /* 12830065 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830068 push ecx */
  push32((uint32_t)(ECX));
  /* 12830069 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283006c push edx */
  push32((uint32_t)(EDX));
  /* 1283006d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830070 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12830073 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830076 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1283007a push eax */
  push32((uint32_t)(EAX));
  /* 1283007b call 0x12830630 */
  push32(0x12830080u); f_12830630();
  /* 12830080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830083 jmp 0x12830578 */
  goto L_12830578;
L_12830088:;
  /* 12830088 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283008b push ecx */
  push32((uint32_t)(ECX));
  /* 1283008c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283008f push edx */
  push32((uint32_t)(EDX));
  /* 12830090 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830093 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12830096 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830099 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1283009d push eax */
  push32((uint32_t)(EAX));
  /* 1283009e call 0x12830630 */
  push32(0x128300a3u); f_12830630();
  /* 128300a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128300a6 jmp 0x12830578 */
  goto L_12830578;
L_128300ab:;
  /* 128300ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128300ae push ecx */
  push32((uint32_t)(ECX));
  /* 128300af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128300b2 push edx */
  push32((uint32_t)(EDX));
  /* 128300b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128300b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128300b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128300bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 128300c0 push eax */
  push32((uint32_t)(EAX));
  /* 128300c1 call 0x12830630 */
  push32(0x128300c6u); f_12830630();
  /* 128300c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128300c9 jmp 0x12830578 */
  goto L_12830578;
L_128300ce:;
  /* 128300ce cmp dword ptr [0x1284e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128300d5 je 0x12830156 */
  if (C.zf) goto L_12830156;
  /* 128300d7 mov dword ptr [0x1284e7f0], 0 */
  w32((uint32_t)(0x1284e7f0), (0x0u));
  /* 128300e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128300e4 push ecx */
  push32((uint32_t)(ECX));
  /* 128300e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128300e8 push edx */
  push32((uint32_t)(EDX));
  /* 128300e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128300ec push eax */
  push32((uint32_t)(EAX));
  /* 128300ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128300f0 push ecx */
  push32((uint32_t)(ECX));
  /* 128300f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128300f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 128300fa push eax */
  push32((uint32_t)(EAX));
  /* 128300fb call 0x128307e0 */
  push32(0x12830100u); f_128307e0();
  /* 12830100 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830103 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830106 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830109 jne 0x12830110 */
  if (!C.zf) goto L_12830110;
  /* 1283010b jmp 0x12830578 */
  goto L_12830578;
L_12830110:;
  /* 12830110 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830113 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830115 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12830118 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283011b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1283011d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830120 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830123 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12830125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830128 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1283012a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1283012d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830130 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12830132 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830135 push ecx */
  push32((uint32_t)(ECX));
  /* 12830136 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830139 push edx */
  push32((uint32_t)(EDX));
  /* 1283013a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283013d push eax */
  push32((uint32_t)(EAX));
  /* 1283013e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830141 push ecx */
  push32((uint32_t)(ECX));
  /* 12830142 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830145 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1283014b push eax */
  push32((uint32_t)(EAX));
  /* 1283014c call 0x128307e0 */
  push32(0x12830151u); f_128307e0();
  /* 12830151 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830154 jmp 0x128301c9 */
  goto L_128301c9;
L_12830156:;
  /* 12830156 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830159 push ecx */
  push32((uint32_t)(ECX));
  /* 1283015a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283015d push edx */
  push32((uint32_t)(EDX));
  /* 1283015e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830161 push eax */
  push32((uint32_t)(EAX));
  /* 12830162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830165 push ecx */
  push32((uint32_t)(ECX));
  /* 12830166 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830169 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1283016f push eax */
  push32((uint32_t)(EAX));
  /* 12830170 call 0x128307e0 */
  push32(0x12830175u); f_128307e0();
  /* 12830175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830178 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283017b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283017e jne 0x12830185 */
  if (!C.zf) goto L_12830185;
  /* 12830180 jmp 0x12830578 */
  goto L_12830578;
L_12830185:;
  /* 12830185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830188 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1283018a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1283018d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830190 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830192 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830195 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830198 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1283019a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283019d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1283019f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128301a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128301a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128301a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128301aa push ecx */
  push32((uint32_t)(ECX));
  /* 128301ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128301ae push edx */
  push32((uint32_t)(EDX));
  /* 128301af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128301b2 push eax */
  push32((uint32_t)(EAX));
  /* 128301b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128301b6 push ecx */
  push32((uint32_t)(ECX));
  /* 128301b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128301ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 128301c0 push eax */
  push32((uint32_t)(EAX));
  /* 128301c1 call 0x128307e0 */
  push32(0x128301c6u); f_128307e0();
  /* 128301c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128301c9:;
  /* 128301c9 jmp 0x12830578 */
  goto L_12830578;
L_128301ce:;
  /* 128301ce mov ecx, dword ptr [0x1284e7f0] */
  ECX = (r32((uint32_t)(0x1284e7f0)));
  /* 128301d4 mov dword ptr [0x1284e800], ecx */
  w32((uint32_t)(0x1284e800), (ECX));
  /* 128301da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128301dd push edx */
  push32((uint32_t)(EDX));
  /* 128301de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128301e1 push eax */
  push32((uint32_t)(EAX));
  /* 128301e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 128301e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128301e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128301ea push edx */
  push32((uint32_t)(EDX));
  /* 128301eb call 0x12830680 */
  push32(0x128301f0u); f_12830680();
  /* 128301f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128301f3 jmp 0x12830578 */
  goto L_12830578;
L_128301f8:;
  /* 128301f8 mov eax, dword ptr [0x1284e7f0] */
  EAX = (r32((uint32_t)(0x1284e7f0)));
  /* 128301fd mov dword ptr [0x1284e800], eax */
  w32((uint32_t)(0x1284e800), (EAX));
  /* 12830202 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830205 push ecx */
  push32((uint32_t)(ECX));
  /* 12830206 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830209 push edx */
  push32((uint32_t)(EDX));
  /* 1283020a push 2 */
  push32((uint32_t)(0x2u));
  /* 1283020c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283020f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12830212 push ecx */
  push32((uint32_t)(ECX));
  /* 12830213 call 0x12830680 */
  push32(0x12830218u); f_12830680();
  /* 12830218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283021b jmp 0x12830578 */
  goto L_12830578;
L_12830220:;
  /* 12830220 mov edx, dword ptr [0x1284e7f0] */
  EDX = (r32((uint32_t)(0x1284e7f0)));
  /* 12830226 mov dword ptr [0x1284e800], edx */
  w32((uint32_t)(0x1284e800), (EDX));
  /* 1283022c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283022f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12830232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12830233 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12830238 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1283023a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1283023d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830241 jne 0x1283024a */
  if (!C.zf) goto L_1283024a;
  /* 12830243 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1283024a:;
  /* 1283024a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283024d push edx */
  push32((uint32_t)(EDX));
  /* 1283024e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830251 push eax */
  push32((uint32_t)(EAX));
  /* 12830252 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830257 push ecx */
  push32((uint32_t)(ECX));
  /* 12830258 call 0x12830680 */
  push32(0x1283025du); f_12830680();
  /* 1283025d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830260 jmp 0x12830578 */
  goto L_12830578;
L_12830265:;
  /* 12830265 mov edx, dword ptr [0x1284e7f0] */
  EDX = (r32((uint32_t)(0x1284e7f0)));
  /* 1283026b mov dword ptr [0x1284e800], edx */
  w32((uint32_t)(0x1284e800), (EDX));
  /* 12830271 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830274 push eax */
  push32((uint32_t)(EAX));
  /* 12830275 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830278 push ecx */
  push32((uint32_t)(ECX));
  /* 12830279 push 3 */
  push32((uint32_t)(0x3u));
  /* 1283027b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283027e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12830281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830284 push eax */
  push32((uint32_t)(EAX));
  /* 12830285 call 0x12830680 */
  push32(0x1283028au); f_12830680();
  /* 1283028a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283028d jmp 0x12830578 */
  goto L_12830578;
L_12830292:;
  /* 12830292 mov ecx, dword ptr [0x1284e7f0] */
  ECX = (r32((uint32_t)(0x1284e7f0)));
  /* 12830298 mov dword ptr [0x1284e800], ecx */
  w32((uint32_t)(0x1284e800), (ECX));
  /* 1283029e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128302a1 push edx */
  push32((uint32_t)(EDX));
  /* 128302a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128302a5 push eax */
  push32((uint32_t)(EAX));
  /* 128302a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 128302a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128302ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 128302ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128302b1 push edx */
  push32((uint32_t)(EDX));
  /* 128302b2 call 0x12830680 */
  push32(0x128302b7u); f_12830680();
  /* 128302b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128302ba jmp 0x12830578 */
  goto L_12830578;
L_128302bf:;
  /* 128302bf mov eax, dword ptr [0x1284e7f0] */
  EAX = (r32((uint32_t)(0x1284e7f0)));
  /* 128302c4 mov dword ptr [0x1284e800], eax */
  w32((uint32_t)(0x1284e800), (EAX));
  /* 128302c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128302cc push ecx */
  push32((uint32_t)(ECX));
  /* 128302cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128302d0 push edx */
  push32((uint32_t)(EDX));
  /* 128302d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 128302d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128302d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128302d9 push ecx */
  push32((uint32_t)(ECX));
  /* 128302da call 0x12830680 */
  push32(0x128302dfu); f_12830680();
  /* 128302df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128302e2 jmp 0x12830578 */
  goto L_12830578;
L_128302e7:;
  /* 128302e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128302ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128302ee jg 0x1283030c */
  if ((!C.zf&&C.sf==C.of)) goto L_1283030c;
  /* 128302f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128302f3 push eax */
  push32((uint32_t)(EAX));
  /* 128302f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128302f7 push ecx */
  push32((uint32_t)(ECX));
  /* 128302f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128302fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12830301 push eax */
  push32((uint32_t)(EAX));
  /* 12830302 call 0x12830630 */
  push32(0x12830307u); f_12830630();
  /* 12830307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283030a jmp 0x12830326 */
  goto L_12830326;
L_1283030c:;
  /* 1283030c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283030f push ecx */
  push32((uint32_t)(ECX));
  /* 12830310 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830313 push edx */
  push32((uint32_t)(EDX));
  /* 12830314 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830317 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1283031d push ecx */
  push32((uint32_t)(ECX));
  /* 1283031e call 0x12830630 */
  push32(0x12830323u); f_12830630();
  /* 12830323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12830326:;
  /* 12830326 jmp 0x12830578 */
  goto L_12830578;
L_1283032b:;
  /* 1283032b mov edx, dword ptr [0x1284e7f0] */
  EDX = (r32((uint32_t)(0x1284e7f0)));
  /* 12830331 mov dword ptr [0x1284e800], edx */
  w32((uint32_t)(0x1284e800), (EDX));
  /* 12830337 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283033a push eax */
  push32((uint32_t)(EAX));
  /* 1283033b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283033e push ecx */
  push32((uint32_t)(ECX));
  /* 1283033f push 2 */
  push32((uint32_t)(0x2u));
  /* 12830341 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830344 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830346 push eax */
  push32((uint32_t)(EAX));
  /* 12830347 call 0x12830680 */
  push32(0x1283034cu); f_12830680();
  /* 1283034c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283034f jmp 0x12830578 */
  goto L_12830578;
L_12830354:;
  /* 12830354 mov ecx, dword ptr [0x1284e7f0] */
  ECX = (r32((uint32_t)(0x1284e7f0)));
  /* 1283035a mov dword ptr [0x1284e800], ecx */
  w32((uint32_t)(0x1284e800), (ECX));
  /* 12830360 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830363 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12830366 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12830369 jmp 0x128303bd */
  goto L_128303bd;
L_1283036b:;
  /* 1283036b mov ecx, dword ptr [0x1284e7f0] */
  ECX = (r32((uint32_t)(0x1284e7f0)));
  /* 12830371 mov dword ptr [0x1284e800], ecx */
  w32((uint32_t)(0x1284e800), (ECX));
  /* 12830377 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283037a push edx */
  push32((uint32_t)(EDX));
  /* 1283037b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283037e push eax */
  push32((uint32_t)(EAX));
  /* 1283037f push 1 */
  push32((uint32_t)(0x1u));
  /* 12830381 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830384 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12830387 push edx */
  push32((uint32_t)(EDX));
  /* 12830388 call 0x12830680 */
  push32(0x1283038du); f_12830680();
  /* 1283038d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830390 jmp 0x12830578 */
  goto L_12830578;
L_12830395:;
  /* 12830395 mov eax, dword ptr [0x1284e7f0] */
  EAX = (r32((uint32_t)(0x1284e7f0)));
  /* 1283039a mov dword ptr [0x1284e800], eax */
  w32((uint32_t)(0x1284e800), (EAX));
  /* 1283039f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128303a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128303a6 jne 0x128303b1 */
  if (!C.zf) goto L_128303b1;
  /* 128303a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 128303af jmp 0x128303bd */
  goto L_128303bd;
L_128303b1:;
  /* 128303b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128303b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 128303b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128303ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128303bd:;
  /* 128303bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128303c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128303c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128303c6 jge 0x128303d1 */
  if ((C.sf==C.of)) goto L_128303d1;
  /* 128303c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128303cf jmp 0x128303fe */
  goto L_128303fe;
L_128303d1:;
  /* 128303d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128303d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 128303d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128303d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 128303dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128303df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128303e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128303e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128303e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128303e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 128303ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128303f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128303f3 jl 0x128303fe */
  if ((C.sf!=C.of)) goto L_128303fe;
  /* 128303f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128303f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128303fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128303fe:;
  /* 128303fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830401 push eax */
  push32((uint32_t)(EAX));
  /* 12830402 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830405 push ecx */
  push32((uint32_t)(ECX));
  /* 12830406 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283040b push edx */
  push32((uint32_t)(EDX));
  /* 1283040c call 0x12830680 */
  push32(0x12830411u); f_12830680();
  /* 12830411 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830414 jmp 0x12830578 */
  goto L_12830578;
L_12830419:;
  /* 12830419 cmp dword ptr [0x1284e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830420 je 0x12830450 */
  if (C.zf) goto L_12830450;
  /* 12830422 mov dword ptr [0x1284e7f0], 0 */
  w32((uint32_t)(0x1284e7f0), (0x0u));
  /* 1283042c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1283042f push eax */
  push32((uint32_t)(EAX));
  /* 12830430 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830433 push ecx */
  push32((uint32_t)(ECX));
  /* 12830434 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830437 push edx */
  push32((uint32_t)(EDX));
  /* 12830438 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283043b push eax */
  push32((uint32_t)(EAX));
  /* 1283043c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1283043f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12830445 push edx */
  push32((uint32_t)(EDX));
  /* 12830446 call 0x128307e0 */
  push32(0x1283044bu); f_128307e0();
  /* 1283044b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283044e jmp 0x12830472 */
  goto L_12830472;
L_12830450:;
  /* 12830450 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830453 push eax */
  push32((uint32_t)(EAX));
  /* 12830454 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830457 push ecx */
  push32((uint32_t)(ECX));
  /* 12830458 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283045b push edx */
  push32((uint32_t)(EDX));
  /* 1283045c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283045f push eax */
  push32((uint32_t)(EAX));
  /* 12830460 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830463 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12830469 push edx */
  push32((uint32_t)(EDX));
  /* 1283046a call 0x128307e0 */
  push32(0x1283046fu); f_128307e0();
  /* 1283046f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12830472:;
  /* 12830472 jmp 0x12830578 */
  goto L_12830578;
L_12830477:;
  /* 12830477 mov dword ptr [0x1284e7f0], 0 */
  w32((uint32_t)(0x1284e7f0), (0x0u));
  /* 12830481 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830484 push eax */
  push32((uint32_t)(EAX));
  /* 12830485 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830488 push ecx */
  push32((uint32_t)(ECX));
  /* 12830489 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283048c push edx */
  push32((uint32_t)(EDX));
  /* 1283048d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830490 push eax */
  push32((uint32_t)(EAX));
  /* 12830491 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830494 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1283049a push edx */
  push32((uint32_t)(EDX));
  /* 1283049b call 0x128307e0 */
  push32(0x128304a0u); f_128307e0();
  /* 128304a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128304a3 jmp 0x12830578 */
  goto L_12830578;
L_128304a8:;
  /* 128304a8 mov eax, dword ptr [0x1284e7f0] */
  EAX = (r32((uint32_t)(0x1284e7f0)));
  /* 128304ad mov dword ptr [0x1284e800], eax */
  w32((uint32_t)(0x1284e800), (EAX));
  /* 128304b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128304b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 128304b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128304b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 128304be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128304c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128304c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128304c6 push edx */
  push32((uint32_t)(EDX));
  /* 128304c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128304ca push eax */
  push32((uint32_t)(EAX));
  /* 128304cb push 2 */
  push32((uint32_t)(0x2u));
  /* 128304cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128304d0 push ecx */
  push32((uint32_t)(ECX));
  /* 128304d1 call 0x12830680 */
  push32(0x128304d6u); f_12830680();
  /* 128304d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128304d9 jmp 0x12830578 */
  goto L_12830578;
L_128304de:;
  /* 128304de mov edx, dword ptr [0x1284e7f0] */
  EDX = (r32((uint32_t)(0x1284e7f0)));
  /* 128304e4 mov dword ptr [0x1284e800], edx */
  w32((uint32_t)(0x1284e800), (EDX));
  /* 128304ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128304ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 128304f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128304f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 128304f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128304f8 mov ecx, eax */
  ECX = (EAX);
  /* 128304fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128304fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12830500 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830503 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12830506 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12830507 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1283050c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1283050e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830510 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12830513 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830516 push eax */
  push32((uint32_t)(EAX));
  /* 12830517 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283051a push ecx */
  push32((uint32_t)(ECX));
  /* 1283051b push 4 */
  push32((uint32_t)(0x4u));
  /* 1283051d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830520 push edx */
  push32((uint32_t)(EDX));
  /* 12830521 call 0x12830680 */
  push32(0x12830526u); f_12830680();
  /* 12830526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830529 jmp 0x12830578 */
  goto L_12830578;
L_1283052b:;
  /* 1283052b call 0x12831640 */
  push32(0x12830530u); f_12831640();
  /* 12830530 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830533 push eax */
  push32((uint32_t)(EAX));
  /* 12830534 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830537 push ecx */
  push32((uint32_t)(ECX));
  /* 12830538 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283053b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283053d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830541 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12830544 mov ecx, dword ptr [eax*4 + 0x1284de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284de1c)));
  /* 1283054b push ecx */
  push32((uint32_t)(ECX));
  /* 1283054c call 0x12830630 */
  push32(0x12830551u); f_12830630();
  /* 12830551 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830554 jmp 0x12830578 */
  goto L_12830578;
L_12830556:;
  /* 12830556 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830559 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1283055b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1283055e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830561 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830563 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830566 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830569 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1283056b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283056e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830570 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830573 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830576 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12830578:;
  /* 12830578 pop esi */
  ESI = (pop32());
  /* 12830579 mov esp, ebp */
  ESP = (EBP);
  /* 1283057b pop ebp */
  EBP = (pop32());
  /* 1283057c ret  */
  ESPCHK(0x12830010u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12830630 (72 bytes, 30 insns) */
void f_12830630(void) {
  FTRACE(0x12830630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830630 push ebp */
  push32((uint32_t)(EBP));
  /* 12830631 mov ebp, esp */
  EBP = (ESP);
L_12830633:;
  /* 12830633 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830636 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830639 je 0x12830676 */
  if (C.zf) goto L_12830676;
  /* 1283063b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283063e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12830641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12830643 je 0x12830676 */
  if (C.zf) goto L_12830676;
  /* 12830645 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830648 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1283064a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283064d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283064f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12830651 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830654 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283065c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1283065e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830664 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12830667 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283066a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1283066c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1283066f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830672 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12830674 jmp 0x12830633 */
  goto L_12830633;
L_12830676:;
  /* 12830676 pop ebp */
  EBP = (pop32());
  /* 12830677 ret  */
  ESPCHK(0x12830630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x12830680 (173 bytes, 64 insns) */
void f_12830680(void) {
  FTRACE(0x12830680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830680 push ebp */
  push32((uint32_t)(EBP));
  /* 12830681 mov ebp, esp */
  EBP = (ESP);
  /* 12830683 push ecx */
  push32((uint32_t)(ECX));
  /* 12830684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1283068b cmp dword ptr [0x1284e800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830692 je 0x128306aa */
  if (C.zf) goto L_128306aa;
  /* 12830694 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830697 push eax */
  push32((uint32_t)(EAX));
  /* 12830698 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283069b push ecx */
  push32((uint32_t)(ECX));
  /* 1283069c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283069f push edx */
  push32((uint32_t)(EDX));
  /* 128306a0 call 0x12830730 */
  push32(0x128306a5u); f_12830730();
  /* 128306a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128306a8 jmp 0x12830729 */
  goto L_12830729;
L_128306aa:;
  /* 128306aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128306ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128306b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128306b2 jae 0x12830720 */
  if (!C.cf) goto L_12830720;
  /* 128306b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128306b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128306ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 128306bd jmp 0x128306c8 */
  goto L_128306c8;
L_128306bf:;
  /* 128306bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128306c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128306c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_128306c8:;
  /* 128306c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128306cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128306ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128306d0 je 0x12830704 */
  if (C.zf) goto L_12830704;
  /* 128306d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128306d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128306d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 128306db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128306dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128306e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128306e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128306e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128306e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 128306eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128306ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128306ef mov ecx, 0xa */
  ECX = (0xau);
  /* 128306f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128306f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128306f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128306fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128306ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12830702 jmp 0x128306bf */
  goto L_128306bf;
L_12830704:;
  /* 12830704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830707 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830709 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283070c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283070f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12830711 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830714 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830716 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830719 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283071c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1283071e jmp 0x12830729 */
  goto L_12830729;
L_12830720:;
  /* 12830720 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830723 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12830729:;
  /* 12830729 mov esp, ebp */
  ESP = (EBP);
  /* 1283072b pop ebp */
  EBP = (pop32());
  /* 1283072c ret  */
  ESPCHK(0x12830680u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12830730 (172 bytes, 65 insns) */
void f_12830730(void) {
  FTRACE(0x12830730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830730 push ebp */
  push32((uint32_t)(EBP));
  /* 12830731 mov ebp, esp */
  EBP = (ESP);
  /* 12830733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830739 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1283073b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1283073e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830741 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830744 jbe 0x1283078b */
  if ((C.cf||C.zf)) goto L_1283078b;
L_12830746:;
  /* 12830746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830749 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1283074a mov ecx, 0xa */
  ECX = (0xau);
  /* 1283074f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12830751 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830757 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12830759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283075c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283075f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12830762 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830765 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830767 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1283076a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283076d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1283076f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830772 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12830773 mov ecx, 0xa */
  ECX = (0xau);
  /* 12830778 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1283077a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1283077d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830781 jle 0x1283078b */
  if ((C.zf||C.sf!=C.of)) goto L_1283078b;
  /* 12830783 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830786 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830789 ja 0x12830746 */
  if ((!C.cf&&!C.zf)) goto L_12830746;
L_1283078b:;
  /* 1283078b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283078e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830790 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12830793 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830799 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1283079b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283079e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128307a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128307a4:;
  /* 128307a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128307a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128307a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 128307ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128307af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128307b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128307b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128307b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128307b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128307bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128307bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128307c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 128307c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 128307c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128307ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128307cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128307d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128307d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128307d6 jb 0x128307a4 */
  if (C.cf) goto L_128307a4;
  /* 128307d8 mov esp, ebp */
  ESP = (EBP);
  /* 128307da pop ebp */
  EBP = (pop32());
  /* 128307db ret  */
  ESPCHK(0x12830730u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x128307e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_128307e0(void) {
  FTRACE(0x128307e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128307e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128307e1 mov ebp, esp */
  EBP = (ESP);
  /* 128307e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_128307e6:;
  /* 128307e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128307e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128307ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128307ee je 0x12830c5c */
  if (C.zf) goto L_12830c5c;
  /* 128307f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128307f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128307fa je 0x12830c5c */
  if (C.zf) goto L_12830c5c;
  /* 12830800 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12830804 mov dword ptr [0x1284e800], 0 */
  w32((uint32_t)(0x1284e800), (0x0u));
  /* 1283080e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12830815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830818 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1283081b jmp 0x12830826 */
  goto L_12830826;
L_1283081d:;
  /* 1283081d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830820 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830823 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12830826:;
  /* 12830826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830829 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1283082c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283082f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12830832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1283083b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283083d jne 0x12830841 */
  if (!C.zf) goto L_12830841;
  /* 1283083f jmp 0x1283081d */
  goto L_1283081d;
L_12830841:;
  /* 12830841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830844 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830847 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1283084a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283084d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12830850 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12830853 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12830856 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830859 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1283085c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830860 ja 0x12830bb0 */
  if ((!C.cf&&!C.zf)) goto L_12830bb0;
  /* 12830866 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12830869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283086b mov al, byte ptr [ecx + 0x12830c8c] */
  AL = (r8((uint32_t)(ECX + 0x12830c8c)));
  /* 12830871 jmp dword ptr [eax*4 + 0x12830c60] */
  switch (EAX) {
    case 0: goto L_12830acf;
    case 1: goto L_128309b3;
    case 2: goto L_1283093e;
    case 3: goto L_12830878;
    case 4: goto L_128308b6;
    case 5: goto L_12830917;
    case 6: goto L_12830965;
    case 7: goto L_1283098c;
    case 8: goto L_128309fa;
    case 9: goto L_128308f4;
    case 10: goto L_12830bb0;
    default: x86_unimpl("switch@0x12830871 out of table"); return;
  }
L_12830878:;
  /* 12830878 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283087b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1283087e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12830881 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12830887 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283088b ja 0x128308b1 */
  if ((!C.cf&&!C.zf)) goto L_128308b1;
  /* 1283088d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12830890 jmp dword ptr [ecx*4 + 0x12830cdf] */
  switch (ECX) {
    case 0: goto L_12830897;
    case 1: goto L_128308a1;
    case 2: goto L_128308a7;
    case 3: goto L_128308ad;
    case 4: goto L_128308d5;
    case 5: goto L_128308df;
    case 6: goto L_128308e5;
    case 7: goto L_128308eb;
    default: x86_unimpl("switch@0x12830890 out of table"); return;
  }
L_12830897:;
  /* 12830897 mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_128308a1:;
  /* 128308a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 128308a5 jmp 0x128308b1 */
  goto L_128308b1;
L_128308a7:;
  /* 128308a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 128308ab jmp 0x128308b1 */
  goto L_128308b1;
L_128308ad:;
  /* 128308ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_128308b1:;
  /* 128308b1 jmp 0x12830bb0 */
  goto L_12830bb0;
L_128308b6:;
  /* 128308b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128308b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 128308bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128308bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128308c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128308c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128308c9 ja 0x128308ef */
  if ((!C.cf&&!C.zf)) goto L_128308ef;
  /* 128308cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128308ce jmp dword ptr [ecx*4 + 0x12830cef] */
  switch (ECX) {
    case 0: goto L_128308d5;
    case 1: goto L_128308df;
    case 2: goto L_128308e5;
    case 3: goto L_128308eb;
    default: x86_unimpl("switch@0x128308ce out of table"); return;
  }
L_128308d5:;
  /* 128308d5 mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_128308df:;
  /* 128308df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 128308e3 jmp 0x128308ef */
  goto L_128308ef;
L_128308e5:;
  /* 128308e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 128308e9 jmp 0x128308ef */
  goto L_128308ef;
L_128308eb:;
  /* 128308eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_128308ef:;
  /* 128308ef jmp 0x12830bb0 */
  goto L_12830bb0;
L_128308f4:;
  /* 128308f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128308f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 128308fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128308fe je 0x12830908 */
  if (C.zf) goto L_12830908;
  /* 12830900 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830904 je 0x1283090e */
  if (C.zf) goto L_1283090e;
  /* 12830906 jmp 0x12830912 */
  goto L_12830912;
L_12830908:;
  /* 12830908 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1283090c jmp 0x12830912 */
  goto L_12830912;
L_1283090e:;
  /* 1283090e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12830912:;
  /* 12830912 jmp 0x12830bb0 */
  goto L_12830bb0;
L_12830917:;
  /* 12830917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283091a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1283091d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830921 je 0x1283092b */
  if (C.zf) goto L_1283092b;
  /* 12830923 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830927 je 0x12830935 */
  if (C.zf) goto L_12830935;
  /* 12830929 jmp 0x12830939 */
  goto L_12830939;
L_1283092b:;
  /* 1283092b mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_12830935:;
  /* 12830935 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12830939:;
  /* 12830939 jmp 0x12830bb0 */
  goto L_12830bb0;
L_1283093e:;
  /* 1283093e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830941 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12830944 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830948 je 0x12830952 */
  if (C.zf) goto L_12830952;
  /* 1283094a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283094e je 0x1283095c */
  if (C.zf) goto L_1283095c;
  /* 12830950 jmp 0x12830960 */
  goto L_12830960;
L_12830952:;
  /* 12830952 mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_1283095c:;
  /* 1283095c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12830960:;
  /* 12830960 jmp 0x12830bb0 */
  goto L_12830bb0;
L_12830965:;
  /* 12830965 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830968 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1283096b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283096f je 0x12830979 */
  if (C.zf) goto L_12830979;
  /* 12830971 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830975 je 0x12830983 */
  if (C.zf) goto L_12830983;
  /* 12830977 jmp 0x12830987 */
  goto L_12830987;
L_12830979:;
  /* 12830979 mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_12830983:;
  /* 12830983 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12830987:;
  /* 12830987 jmp 0x12830bb0 */
  goto L_12830bb0;
L_1283098c:;
  /* 1283098c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283098f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12830992 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830996 je 0x128309a0 */
  if (C.zf) goto L_128309a0;
  /* 12830998 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283099c je 0x128309aa */
  if (C.zf) goto L_128309aa;
  /* 1283099e jmp 0x128309ae */
  goto L_128309ae;
L_128309a0:;
  /* 128309a0 mov dword ptr [0x1284e800], 1 */
  w32((uint32_t)(0x1284e800), (0x1u));
L_128309aa:;
  /* 128309aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_128309ae:;
  /* 128309ae jmp 0x12830bb0 */
  goto L_12830bb0;
L_128309b3:;
  /* 128309b3 push 0x1284a7dc */
  push32((uint32_t)(0x1284a7dcu));
  /* 128309b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128309bb push ecx */
  push32((uint32_t)(ECX));
  /* 128309bc call 0x12831210 */
  push32(0x128309c1u); f_12831210();
  /* 128309c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128309c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128309c6 jne 0x128309d3 */
  if (!C.zf) goto L_128309d3;
  /* 128309c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128309cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128309ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128309d1 jmp 0x128309f1 */
  goto L_128309f1;
L_128309d3:;
  /* 128309d3 push 0x1284a7d8 */
  push32((uint32_t)(0x1284a7d8u));
  /* 128309d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128309db push eax */
  push32((uint32_t)(EAX));
  /* 128309dc call 0x12831210 */
  push32(0x128309e1u); f_12831210();
  /* 128309e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128309e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128309e6 jne 0x128309f1 */
  if (!C.zf) goto L_128309f1;
  /* 128309e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128309eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128309ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128309f1:;
  /* 128309f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 128309f5 jmp 0x12830bb0 */
  goto L_12830bb0;
L_128309fa:;
  /* 128309fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128309fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830a01 jg 0x12830a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_12830a11;
  /* 12830a03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830a06 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12830a0c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12830a0f jmp 0x12830a1d */
  goto L_12830a1d;
L_12830a11:;
  /* 12830a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830a14 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12830a1a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12830a1d:;
  /* 12830a1d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830a21 jle 0x12830ac4 */
  if ((C.zf||C.sf!=C.of)) goto L_12830ac4;
  /* 12830a27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830a2a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830a2d jbe 0x12830ac4 */
  if ((C.cf||C.zf)) goto L_12830ac4;
  /* 12830a33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12830a36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12830a38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12830a3a mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 12830a40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12830a42 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12830a46 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12830a4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12830a4e je 0x12830a87 */
  if (C.zf) goto L_12830a87;
  /* 12830a50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830a53 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830a56 jbe 0x12830a87 */
  if ((C.cf||C.zf)) goto L_12830a87;
  /* 12830a58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830a5d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12830a60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12830a62 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12830a64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830a6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12830a71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12830a74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830a77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12830a7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830a7d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830a7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830a82 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830a85 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12830a87:;
  /* 12830a87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830a8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12830a8f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12830a91 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12830a93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830a98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830a9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830a9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12830aa0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12830aa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830aa6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12830aa9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830aac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830aae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830ab1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830ab4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12830ab6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830ab9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830abc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12830abf jmp 0x12830a1d */
  goto L_12830a1d;
L_12830ac4:;
  /* 12830ac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830ac7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12830aca jmp 0x128307e6 */
  goto L_128307e6;
L_12830acf:;
  /* 12830acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830ad2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12830ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12830ad7 je 0x12830ba2 */
  if (C.zf) goto L_12830ba2;
  /* 12830add mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830ae0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830ae3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12830ae6:;
  /* 12830ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830ae9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12830aec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12830aee je 0x12830ba0 */
  if (C.zf) goto L_12830ba0;
  /* 12830af4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830af7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830afa je 0x12830ba0 */
  if (C.zf) goto L_12830ba0;
  /* 12830b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12830b06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830b09 jne 0x12830b19 */
  if (!C.zf) goto L_12830b19;
  /* 12830b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830b11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12830b14 jmp 0x12830ba0 */
  goto L_12830ba0;
L_12830b19:;
  /* 12830b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12830b1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12830b20 mov edx, dword ptr [0x1284cc98] */
  EDX = (r32((uint32_t)(0x1284cc98)));
  /* 12830b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12830b28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12830b2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12830b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12830b33 je 0x12830b6c */
  if (C.zf) goto L_12830b6c;
  /* 12830b35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830b38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830b3b jbe 0x12830b6c */
  if ((C.cf||C.zf)) goto L_12830b6c;
  /* 12830b3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830b42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12830b47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12830b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830b51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12830b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830b5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12830b5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830b62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830b64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830b67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830b6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12830b6c:;
  /* 12830b6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830b71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12830b76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12830b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830b83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12830b85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830b88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830b8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12830b8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830b91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830b93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830b96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830b99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12830b9b jmp 0x12830ae6 */
  goto L_12830ae6;
L_12830ba0:;
  /* 12830ba0 jmp 0x12830bab */
  goto L_12830bab;
L_12830ba2:;
  /* 12830ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830ba5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12830bab:;
  /* 12830bab jmp 0x128307e6 */
  goto L_128307e6;
L_12830bb0:;
  /* 12830bb0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12830bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12830bb6 je 0x12830bdc */
  if (C.zf) goto L_12830bdc;
  /* 12830bb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12830bbb push edx */
  push32((uint32_t)(EDX));
  /* 12830bbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830bbf push eax */
  push32((uint32_t)(EAX));
  /* 12830bc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12830bc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830bc7 push edx */
  push32((uint32_t)(EDX));
  /* 12830bc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12830bcb push eax */
  push32((uint32_t)(EAX));
  /* 12830bcc call 0x12830010 */
  push32(0x12830bd1u); f_12830010();
  /* 12830bd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12830bd7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12830bda jmp 0x12830c57 */
  goto L_12830c57;
L_12830bdc:;
  /* 12830bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12830be1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12830be3 mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 12830be9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12830beb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12830bef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12830bf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12830bf7 je 0x12830c28 */
  if (C.zf) goto L_12830c28;
  /* 12830bf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830bfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830c01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12830c03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12830c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830c08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830c0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830c0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830c10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12830c12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830c18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12830c1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830c1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830c20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830c23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830c26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12830c28:;
  /* 12830c28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830c2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12830c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830c30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12830c32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12830c34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830c37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830c39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830c3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830c3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12830c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12830c44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830c47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12830c4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830c4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12830c4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830c52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830c55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12830c57:;
  /* 12830c57 jmp 0x128307e6 */
  goto L_128307e6;
L_12830c5c:;
  /* 12830c5c mov esp, ebp */
  ESP = (EBP);
  /* 12830c5e pop ebp */
  EBP = (pop32());
  /* 12830c5f ret  */
  ESPCHK(0x128307e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x12830d00 (650 bytes, 178 insns) */
void f_12830d00(void) {
  FTRACE(0x12830d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12830d01 mov ebp, esp */
  EBP = (ESP);
  /* 12830d03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12830d09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830d0d jne 0x12830e69 */
  if (!C.zf) goto L_12830e69;
  /* 12830d13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830d16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12830d1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12830d22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12830d25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12830d2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12830d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830d38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12830d3e push edx */
  push32((uint32_t)(EDX));
  /* 12830d3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830d42 push eax */
  push32((uint32_t)(EAX));
  /* 12830d43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830d46 push ecx */
  push32((uint32_t)(ECX));
  /* 12830d47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830d4a push edx */
  push32((uint32_t)(EDX));
  /* 12830d4b call 0x12832120 */
  push32(0x12830d50u); f_12832120();
  /* 12830d50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830d53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12830d56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830d5a jne 0x12830def */
  if (!C.zf) goto L_12830def;
  /* 12830d60 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x12830d66u);
  /* 12830d66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830d69 je 0x12830d70 */
  if (C.zf) goto L_12830d70;
  /* 12830d6b jmp 0x12830e4d */
  goto L_12830e4d;
L_12830d70:;
  /* 12830d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830d76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830d79 push eax */
  push32((uint32_t)(EAX));
  /* 12830d7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830d7d push ecx */
  push32((uint32_t)(ECX));
  /* 12830d7e call 0x12832120 */
  push32(0x12830d83u); f_12832120();
  /* 12830d83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830d86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12830d8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830d93 jne 0x12830d9a */
  if (!C.zf) goto L_12830d9a;
  /* 12830d95 jmp 0x12830e4d */
  goto L_12830e4d;
L_12830d9a:;
  /* 12830d9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12830d9c push 0x1284a7e4 */
  push32((uint32_t)(0x1284a7e4u));
  /* 12830da1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830da3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12830da9 push edx */
  push32((uint32_t)(EDX));
  /* 12830daa call 0x12822b40 */
  push32(0x12830dafu); f_12822b40();
  /* 12830daf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830db2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12830db5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830db9 jne 0x12830dc0 */
  if (!C.zf) goto L_12830dc0;
  /* 12830dbb jmp 0x12830e4d */
  goto L_12830e4d;
L_12830dc0:;
  /* 12830dc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12830dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830dc9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12830dcf push eax */
  push32((uint32_t)(EAX));
  /* 12830dd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12830dd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12830dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830ddb push eax */
  push32((uint32_t)(EAX));
  /* 12830ddc call 0x12832120 */
  push32(0x12830de1u); f_12832120();
  /* 12830de1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830de4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12830de7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830deb jne 0x12830def */
  if (!C.zf) goto L_12830def;
  /* 12830ded jmp 0x12830e4d */
  goto L_12830e4d;
L_12830def:;
  /* 12830def push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12830df1 push 0x1284a7e4 */
  push32((uint32_t)(0x1284a7e4u));
  /* 12830df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830df8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12830dfb push ecx */
  push32((uint32_t)(ECX));
  /* 12830dfc call 0x12822b40 */
  push32(0x12830e01u); f_12822b40();
  /* 12830e01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830e04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12830e0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12830e0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12830e12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830e15 jne 0x12830e19 */
  if (!C.zf) goto L_12830e19;
  /* 12830e17 jmp 0x12830e4d */
  goto L_12830e4d;
L_12830e19:;
  /* 12830e19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12830e1c push ecx */
  push32((uint32_t)(ECX));
  /* 12830e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830e20 push edx */
  push32((uint32_t)(EDX));
  /* 12830e21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12830e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12830e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12830e2a call 0x12826360 */
  push32(0x12830e2fu); f_12826360();
  /* 12830e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830e32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830e36 je 0x12830e46 */
  if (C.zf) goto L_12830e46;
  /* 12830e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830e3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830e3d push edx */
  push32((uint32_t)(EDX));
  /* 12830e3e call 0x128235d0 */
  push32(0x12830e43u); f_128235d0();
  /* 12830e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12830e46:;
  /* 12830e46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12830e48 jmp 0x12830f86 */
  goto L_12830f86;
L_12830e4d:;
  /* 12830e4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830e51 je 0x12830e61 */
  if (C.zf) goto L_12830e61;
  /* 12830e53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12830e55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12830e58 push eax */
  push32((uint32_t)(EAX));
  /* 12830e59 call 0x128235d0 */
  push32(0x12830e5eu); f_128235d0();
  /* 12830e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12830e61:;
  /* 12830e61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12830e64 jmp 0x12830f86 */
  goto L_12830f86;
L_12830e69:;
  /* 12830e69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830e6d jne 0x12830f83 */
  if (!C.zf) goto L_12830f83;
  /* 12830e73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12830e7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12830e80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12830e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12830e88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12830e8e push edx */
  push32((uint32_t)(EDX));
  /* 12830e8f push 0x1284e718 */
  push32((uint32_t)(0x1284e718u));
  /* 12830e94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12830e97 push eax */
  push32((uint32_t)(EAX));
  /* 12830e98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12830e9b push ecx */
  push32((uint32_t)(ECX));
  /* 12830e9c call 0x12831f80 */
  push32(0x12830ea1u); f_12831f80();
  /* 12830ea1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12830ea6 jne 0x12830eb0 */
  if (!C.zf) goto L_12830eb0;
  /* 12830ea8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12830eab jmp 0x12830f86 */
  goto L_12830f86;
L_12830eb0:;
  /* 12830eb0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12830eb6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12830eb9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12830ec3 jmp 0x12830ed4 */
  goto L_12830ed4;
L_12830ec5:;
  /* 12830ec5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12830ecb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12830ece mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12830ed4:;
  /* 12830ed4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830edb jge 0x12830f7f */
  if ((C.sf==C.of)) goto L_12830f7f;
  /* 12830ee1 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830ee8 jle 0x12830f1b */
  if ((C.zf||C.sf!=C.of)) goto L_12830f1b;
  /* 12830eea push 4 */
  push32((uint32_t)(0x4u));
  /* 12830eec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12830ef2 mov dl, byte ptr [ecx*2 + 0x1284e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1284e718)));
  /* 12830ef9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12830eff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12830f05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12830f0a push eax */
  push32((uint32_t)(EAX));
  /* 12830f0b call 0x12828b50 */
  push32(0x12830f10u); f_12828b50();
  /* 12830f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830f13 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12830f19 jmp 0x12830f4e */
  goto L_12830f4e;
L_12830f1b:;
  /* 12830f1b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12830f21 mov dl, byte ptr [ecx*2 + 0x1284e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1284e718)));
  /* 12830f28 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12830f2e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12830f34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12830f39 mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 12830f3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12830f41 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12830f45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12830f48 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12830f4e:;
  /* 12830f4e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830f55 je 0x12830f78 */
  if (C.zf) goto L_12830f78;
  /* 12830f57 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12830f5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12830f60 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12830f63 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12830f6a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12830f6e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12830f74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12830f76 jmp 0x12830f7a */
  goto L_12830f7a;
L_12830f78:;
  /* 12830f78 jmp 0x12830f7f */
  goto L_12830f7f;
L_12830f7a:;
  /* 12830f7a jmp 0x12830ec5 */
  goto L_12830ec5;
L_12830f7f:;
  /* 12830f7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12830f81 jmp 0x12830f86 */
  goto L_12830f86;
L_12830f83:;
  /* 12830f83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12830f86:;
  /* 12830f86 mov esp, ebp */
  ESP = (EBP);
  /* 12830f88 pop ebp */
  EBP = (pop32());
  /* 12830f89 ret  */
  ESPCHK(0x12830d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x12830f90 (10 bytes, 5 insns) */
void f_12830f90(void) {
  FTRACE(0x12830f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12830f91 mov ebp, esp */
  EBP = (ESP);
  /* 12830f93 mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 12830f98 pop ebp */
  EBP = (pop32());
  /* 12830f99 ret  */
  ESPCHK(0x12830f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x12830fa0 (575 bytes, 196 insns) */
void f_12830fa0(void) {
  FTRACE(0x12830fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12830fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12830fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12830fa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12830fa5 push 0x1284a7f0 */
  push32((uint32_t)(0x1284a7f0u));
  /* 12830faa push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 12830faf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12830fb5 push eax */
  push32((uint32_t)(EAX));
  /* 12830fb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12830fbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12830fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 12830fc1 push esi */
  push32((uint32_t)(ESI));
  /* 12830fc2 push edi */
  push32((uint32_t)(EDI));
  /* 12830fc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12830fc6 cmp dword ptr [0x1284e724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12830fcd jne 0x1283101e */
  if (!C.zf) goto L_1283101e;
  /* 12830fcf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12830fd2 push eax */
  push32((uint32_t)(EAX));
  /* 12830fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12830fd5 push 0x12849f24 */
  push32((uint32_t)(0x12849f24u));
  /* 12830fda push 1 */
  push32((uint32_t)(0x1u));
  /* 12830fdc call dword ptr [0x12850324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850324))), 0x12830fe2u);
  /* 12830fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12830fe4 je 0x12830ff2 */
  if (C.zf) goto L_12830ff2;
  /* 12830fe6 mov dword ptr [0x1284e724], 1 */
  w32((uint32_t)(0x1284e724), (0x1u));
  /* 12830ff0 jmp 0x1283101e */
  goto L_1283101e;
L_12830ff2:;
  /* 12830ff2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12830ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 12830ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12830ff8 push 0x12849f20 */
  push32((uint32_t)(0x12849f20u));
  /* 12830ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 12830fff push 0 */
  push32((uint32_t)(0x0u));
  /* 12831001 call dword ptr [0x12850320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850320))), 0x12831007u);
  /* 12831007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831009 je 0x12831017 */
  if (C.zf) goto L_12831017;
  /* 1283100b mov dword ptr [0x1284e724], 2 */
  w32((uint32_t)(0x1284e724), (0x2u));
  /* 12831015 jmp 0x1283101e */
  goto L_1283101e;
L_12831017:;
  /* 12831017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831019 jmp 0x128311f9 */
  goto L_128311f9;
L_1283101e:;
  /* 1283101e cmp dword ptr [0x1284e724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831025 jne 0x12831042 */
  if (!C.zf) goto L_12831042;
  /* 12831027 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283102a push edx */
  push32((uint32_t)(EDX));
  /* 1283102b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283102e push eax */
  push32((uint32_t)(EAX));
  /* 1283102f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12831032 push ecx */
  push32((uint32_t)(ECX));
  /* 12831033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831036 push edx */
  push32((uint32_t)(EDX));
  /* 12831037 call dword ptr [0x12850324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850324))), 0x1283103du);
  /* 1283103d jmp 0x128311f9 */
  goto L_128311f9;
L_12831042:;
  /* 12831042 cmp dword ptr [0x1284e724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831049 jne 0x128311f7 */
  if (!C.zf) goto L_128311f7;
  /* 1283104f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831053 jne 0x1283105d */
  if (!C.zf) goto L_1283105d;
  /* 12831055 mov eax, dword ptr [0x1284e698] */
  EAX = (r32((uint32_t)(0x1284e698)));
  /* 1283105a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1283105d:;
  /* 1283105d push 0 */
  push32((uint32_t)(0x0u));
  /* 1283105f push 0 */
  push32((uint32_t)(0x0u));
  /* 12831061 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831065 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831068 push ecx */
  push32((uint32_t)(ECX));
  /* 12831069 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283106c push edx */
  push32((uint32_t)(EDX));
  /* 1283106d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12831072 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12831075 push eax */
  push32((uint32_t)(EAX));
  /* 12831076 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x1283107cu);
  /* 1283107c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1283107f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831083 jne 0x1283108c */
  if (!C.zf) goto L_1283108c;
  /* 12831085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831087 jmp 0x128311f9 */
  goto L_128311f9;
L_1283108c:;
  /* 1283108c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12831093 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12831096 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831099 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1283109b call 0x12825ce0 */
  push32(0x128310a0u); f_12825ce0();
  /* 128310a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 128310a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128310a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128310a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 128310ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128310af push edx */
  push32((uint32_t)(EDX));
  /* 128310b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128310b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128310b5 push eax */
  push32((uint32_t)(EAX));
  /* 128310b6 call 0x128268b0 */
  push32(0x128310bbu); f_128268b0();
  /* 128310bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128310be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128310c5 jmp 0x128310de */
  goto L_128310de;
  /* 128310c7 mov eax, 1 */
  EAX = (0x1u);
  /* 128310cc ret  */
  ESPCHK(0x12830fa0u, _esp0);
  ESP += 4; return;
  /* 128310cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128310d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 128310d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128310de:;
  /* 128310de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128310e2 jne 0x128310eb */
  if (!C.zf) goto L_128310eb;
  /* 128310e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128310e6 jmp 0x128311f9 */
  goto L_128311f9;
L_128310eb:;
  /* 128310eb push 0 */
  push32((uint32_t)(0x0u));
  /* 128310ed push 0 */
  push32((uint32_t)(0x0u));
  /* 128310ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128310f2 push ecx */
  push32((uint32_t)(ECX));
  /* 128310f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128310f6 push edx */
  push32((uint32_t)(EDX));
  /* 128310f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128310fa push eax */
  push32((uint32_t)(EAX));
  /* 128310fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128310fe push ecx */
  push32((uint32_t)(ECX));
  /* 128310ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12831104 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12831107 push edx */
  push32((uint32_t)(EDX));
  /* 12831108 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x1283110eu);
  /* 1283110e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831110 jne 0x12831119 */
  if (!C.zf) goto L_12831119;
  /* 12831112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831114 jmp 0x128311f9 */
  goto L_128311f9;
L_12831119:;
  /* 12831119 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12831120 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12831123 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12831127 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283112a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1283112c call 0x12825ce0 */
  push32(0x12831131u); f_12825ce0();
  /* 12831131 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12831134 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12831137 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1283113a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1283113d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12831144 jmp 0x1283115d */
  goto L_1283115d;
  /* 12831146 mov eax, 1 */
  EAX = (0x1u);
  /* 1283114b ret  */
  ESPCHK(0x12830fa0u, _esp0);
  ESP += 4; return;
  /* 1283114c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1283114f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12831156 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1283115d:;
  /* 1283115d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831161 jne 0x1283116a */
  if (!C.zf) goto L_1283116a;
  /* 12831163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831165 jmp 0x128311f9 */
  goto L_128311f9;
L_1283116a:;
  /* 1283116a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283116e jne 0x12831179 */
  if (!C.zf) goto L_12831179;
  /* 12831170 mov edx, dword ptr [0x1284e688] */
  EDX = (r32((uint32_t)(0x1284e688)));
  /* 12831176 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12831179:;
  /* 12831179 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283117c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1283117f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12831185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831188 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1283118b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12831192 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12831195 push ecx */
  push32((uint32_t)(ECX));
  /* 12831196 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12831199 push edx */
  push32((uint32_t)(EDX));
  /* 1283119a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1283119d push eax */
  push32((uint32_t)(EAX));
  /* 1283119e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128311a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128311a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128311a5 push edx */
  push32((uint32_t)(EDX));
  /* 128311a6 call dword ptr [0x12850320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850320))), 0x128311acu);
  /* 128311ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 128311af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128311b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128311b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128311b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 128311bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128311c2 je 0x128311d8 */
  if (C.zf) goto L_128311d8;
  /* 128311c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128311c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128311ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128311cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128311d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128311d6 je 0x128311dc */
  if (C.zf) goto L_128311dc;
L_128311d8:;
  /* 128311d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128311da jmp 0x128311f9 */
  goto L_128311f9;
L_128311dc:;
  /* 128311dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128311df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128311e1 push eax */
  push32((uint32_t)(EAX));
  /* 128311e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128311e5 push ecx */
  push32((uint32_t)(ECX));
  /* 128311e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128311e9 push edx */
  push32((uint32_t)(EDX));
  /* 128311ea call 0x1282aa30 */
  push32(0x128311efu); f_1282aa30();
  /* 128311ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128311f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128311f5 jmp 0x128311f9 */
  goto L_128311f9;
L_128311f7:;
  /* 128311f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128311f9:;
  /* 128311f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 128311fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128311ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12831206 pop edi */
  EDI = (pop32());
  /* 12831207 pop esi */
  ESI = (pop32());
  /* 12831208 pop ebx */
  EBX = (pop32());
  /* 12831209 mov esp, ebp */
  ESP = (EBP);
  /* 1283120b pop ebp */
  EBP = (pop32());
  /* 1283120c ret  */
  ESPCHK(0x12830fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x12831210 (208 bytes, 85 insns) */
void f_12831210(void) {
  FTRACE(0x12831210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831210 push ebp */
  push32((uint32_t)(EBP));
  /* 12831211 mov ebp, esp */
  EBP = (ESP);
  /* 12831213 push edi */
  push32((uint32_t)(EDI));
  /* 12831214 push esi */
  push32((uint32_t)(ESI));
  /* 12831215 push ebx */
  push32((uint32_t)(EBX));
  /* 12831216 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12831219 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1283121c lea eax, [0x1284e680] */
  EAX = ((uint32_t)(0x1284e680));
  /* 12831222 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831226 jne 0x12831263 */
  if (!C.zf) goto L_12831263;
  /* 12831228 mov al, 0xff */
  AL = (0xffu);
  /* 1283122a mov edi, edi */
  EDI = (EDI);
L_1283122c:;
  /* 1283122c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1283122e je 0x1283125e */
  if (C.zf) goto L_1283125e;
  /* 12831230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12831232 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12831233 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12831235 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12831236 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831238 je 0x1283122c */
  if (C.zf) goto L_1283122c;
  /* 1283123a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1283123c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1283123e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12831240 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12831243 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12831245 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12831247 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12831249 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1283124b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1283124d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1283124f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12831252 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12831254 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12831256 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831258 je 0x1283122c */
  if (C.zf) goto L_1283122c;
  /* 1283125a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1283125c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1283125e:;
  /* 1283125e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12831261 jmp 0x128312db */
  goto L_128312db;
L_12831263:;
  /* 12831263 lock inc dword ptr [0x1284e814] */
  x86_unimpl("lock inc @ 0x12831263");
  /* 1283126a cmp dword ptr [0x1284e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831271 jg 0x12831277 */
  if ((!C.zf&&C.sf==C.of)) goto L_12831277;
  /* 12831273 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831275 jmp 0x1283128c */
  goto L_1283128c;
L_12831277:;
  /* 12831277 lock dec dword ptr [0x1284e814] */
  x86_unimpl("lock dec @ 0x12831277");
  /* 1283127e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12831280 call 0x12826540 */
  push32(0x12831285u); f_12826540();
  /* 12831285 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1283128c:;
  /* 1283128c mov eax, 0xff */
  EAX = (0xffu);
  /* 12831291 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12831293 nop  */
  /* nop */
L_12831294:;
  /* 12831294 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12831296 je 0x128312bf */
  if (C.zf) goto L_128312bf;
  /* 12831298 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1283129a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1283129b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1283129d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1283129e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128312a0 je 0x12831294 */
  if (C.zf) goto L_12831294;
  /* 128312a2 push eax */
  push32((uint32_t)(EAX));
  /* 128312a3 push ebx */
  push32((uint32_t)(EBX));
  /* 128312a4 call 0x12832380 */
  push32(0x128312a9u); f_12832380();
  /* 128312a9 mov ebx, eax */
  EBX = (EAX);
  /* 128312ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128312ae call 0x12832380 */
  push32(0x128312b3u); f_12832380();
  /* 128312b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128312b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128312b8 je 0x12831294 */
  if (C.zf) goto L_12831294;
  /* 128312ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128312bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_128312bf:;
  /* 128312bf mov ebx, eax */
  EBX = (EAX);
  /* 128312c1 pop eax */
  EAX = (pop32());
  /* 128312c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128312c4 jne 0x128312cf */
  if (!C.zf) goto L_128312cf;
  /* 128312c6 lock dec dword ptr [0x1284e814] */
  x86_unimpl("lock dec @ 0x128312c6");
  /* 128312cd jmp 0x128312d9 */
  goto L_128312d9;
L_128312cf:;
  /* 128312cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128312d1 call 0x128265e0 */
  push32(0x128312d6u); f_128265e0();
  /* 128312d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128312d9:;
  /* 128312d9 mov eax, ebx */
  EAX = (EBX);
L_128312db:;
  /* 128312db pop ebx */
  EBX = (pop32());
  /* 128312dc pop esi */
  ESI = (pop32());
  /* 128312dd pop edi */
  EDI = (pop32());
  /* 128312de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 128312df ret  */
  ESPCHK(0x12831210u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x128312e0 (257 bytes, 103 insns) */
void f_128312e0(void) {
  FTRACE(0x128312e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128312e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128312e1 mov ebp, esp */
  EBP = (ESP);
  /* 128312e3 push edi */
  push32((uint32_t)(EDI));
  /* 128312e4 push esi */
  push32((uint32_t)(ESI));
  /* 128312e5 push ebx */
  push32((uint32_t)(EBX));
  /* 128312e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128312e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128312eb je 0x128313da */
  if (C.zf) goto L_128313da;
  /* 128312f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 128312f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 128312f7 lea eax, [0x1284e680] */
  EAX = ((uint32_t)(0x1284e680));
  /* 128312fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831301 jne 0x12831351 */
  if (!C.zf) goto L_12831351;
  /* 12831303 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12831305 mov bl, 0x5a */
  BL = (0x5au);
  /* 12831307 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12831309 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1283130c:;
  /* 1283130c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1283130e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12831310 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12831312 je 0x12831335 */
  if (C.zf) goto L_12831335;
  /* 12831314 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12831316 je 0x12831335 */
  if (C.zf) goto L_12831335;
  /* 12831318 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12831319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1283131a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1283131c jb 0x12831324 */
  if (C.cf) goto L_12831324;
  /* 1283131e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831320 ja 0x12831324 */
  if ((!C.cf&&!C.zf)) goto L_12831324;
  /* 12831322 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12831324:;
  /* 12831324 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831326 jb 0x1283132e */
  if (C.cf) goto L_1283132e;
  /* 12831328 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1283132a ja 0x1283132e */
  if ((!C.cf&&!C.zf)) goto L_1283132e;
  /* 1283132c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1283132e:;
  /* 1283132e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831330 jne 0x1283133f */
  if (!C.zf) goto L_1283133f;
  /* 12831332 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12831333 jne 0x1283130c */
  if (!C.zf) goto L_1283130c;
L_12831335:;
  /* 12831335 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831337 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12831339 je 0x128313da */
  if (C.zf) goto L_128313da;
L_1283133f:;
  /* 1283133f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12831344 jb 0x128313da */
  if (C.cf) goto L_128313da;
  /* 1283134a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1283134c jmp 0x128313da */
  goto L_128313da;
L_12831351:;
  /* 12831351 lock inc dword ptr [0x1284e814] */
  x86_unimpl("lock inc @ 0x12831351");
  /* 12831358 cmp dword ptr [0x1284e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283135f jg 0x12831365 */
  if ((!C.zf&&C.sf==C.of)) goto L_12831365;
  /* 12831361 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831363 jmp 0x1283137e */
  goto L_1283137e;
L_12831365:;
  /* 12831365 lock dec dword ptr [0x1284e814] */
  x86_unimpl("lock dec @ 0x12831365");
  /* 1283136c mov ebx, ecx */
  EBX = (ECX);
  /* 1283136e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12831370 call 0x12826540 */
  push32(0x12831375u); f_12826540();
  /* 12831375 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1283137c mov ecx, ebx */
  ECX = (EBX);
L_1283137e:;
  /* 1283137e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831380 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12831382 mov edi, edi */
  EDI = (EDI);
L_12831384:;
  /* 12831384 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12831386 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831388 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1283138a je 0x128313af */
  if (C.zf) goto L_128313af;
  /* 1283138c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1283138e je 0x128313af */
  if (C.zf) goto L_128313af;
  /* 12831390 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12831391 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12831392 push ecx */
  push32((uint32_t)(ECX));
  /* 12831393 push eax */
  push32((uint32_t)(EAX));
  /* 12831394 push ebx */
  push32((uint32_t)(EBX));
  /* 12831395 call 0x12832380 */
  push32(0x1283139au); f_12832380();
  /* 1283139a mov ebx, eax */
  EBX = (EAX);
  /* 1283139c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283139f call 0x12832380 */
  push32(0x128313a4u); f_12832380();
  /* 128313a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128313a7 pop ecx */
  ECX = (pop32());
  /* 128313a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128313aa jne 0x128313b5 */
  if (!C.zf) goto L_128313b5;
  /* 128313ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128313ad jne 0x12831384 */
  if (!C.zf) goto L_12831384;
L_128313af:;
  /* 128313af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128313b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128313b3 je 0x128313be */
  if (C.zf) goto L_128313be;
L_128313b5:;
  /* 128313b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 128313ba jb 0x128313be */
  if (C.cf) goto L_128313be;
  /* 128313bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_128313be:;
  /* 128313be pop eax */
  EAX = (pop32());
  /* 128313bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128313c1 jne 0x128313cc */
  if (!C.zf) goto L_128313cc;
  /* 128313c3 lock dec dword ptr [0x1284e814] */
  x86_unimpl("lock dec @ 0x128313c3");
  /* 128313ca jmp 0x128313da */
  goto L_128313da;
L_128313cc:;
  /* 128313cc mov ebx, ecx */
  EBX = (ECX);
  /* 128313ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128313d0 call 0x128265e0 */
  push32(0x128313d5u); f_128265e0();
  /* 128313d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128313d8 mov ecx, ebx */
  ECX = (EBX);
L_128313da:;
  /* 128313da mov eax, ecx */
  EAX = (ECX);
  /* 128313dc pop ebx */
  EBX = (pop32());
  /* 128313dd pop esi */
  ESI = (pop32());
  /* 128313de pop edi */
  EDI = (pop32());
  /* 128313df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 128313e0 ret  */
  ESPCHK(0x128312e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x128313f0 (255 bytes, 88 insns) */
void f_128313f0(void) {
  FTRACE(0x128313f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128313f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128313f1 mov ebp, esp */
  EBP = (ESP);
  /* 128313f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_128313f6:;
  /* 128313f6 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128313fd jle 0x12831416 */
  if ((C.zf||C.sf!=C.of)) goto L_12831416;
  /* 128313ff push 8 */
  push32((uint32_t)(0x8u));
  /* 12831401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831404 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831406 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12831408 push ecx */
  push32((uint32_t)(ECX));
  /* 12831409 call 0x12828b50 */
  push32(0x1283140eu); f_12828b50();
  /* 1283140e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831411 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12831414 jmp 0x1283142f */
  goto L_1283142f;
L_12831416:;
  /* 12831416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283141b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283141d mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 12831423 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831425 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12831429 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1283142c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1283142f:;
  /* 1283142f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831433 je 0x12831440 */
  if (C.zf) goto L_12831440;
  /* 12831435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831438 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283143b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1283143e jmp 0x128313f6 */
  goto L_128313f6;
L_12831440:;
  /* 12831440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831443 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831445 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12831447 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1283144a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283144d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831450 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12831453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831456 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12831459 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283145d je 0x12831465 */
  if (C.zf) goto L_12831465;
  /* 1283145f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831463 jne 0x12831478 */
  if (!C.zf) goto L_12831478;
L_12831465:;
  /* 12831465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283146a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283146c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1283146f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831472 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831475 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12831478:;
  /* 12831478 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1283147f:;
  /* 1283147f cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831486 jle 0x1283149b */
  if ((C.zf||C.sf!=C.of)) goto L_1283149b;
  /* 12831488 push 4 */
  push32((uint32_t)(0x4u));
  /* 1283148a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283148d push edx */
  push32((uint32_t)(EDX));
  /* 1283148e call 0x12828b50 */
  push32(0x12831493u); f_12828b50();
  /* 12831493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831496 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12831499 jmp 0x128314b0 */
  goto L_128314b0;
L_1283149b:;
  /* 1283149b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283149e mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 128314a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128314a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128314aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128314ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_128314b0:;
  /* 128314b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128314b4 je 0x128314db */
  if (C.zf) goto L_128314db;
  /* 128314b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128314b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128314bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128314bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 128314c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128314c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128314c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128314cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128314cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128314d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128314d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128314d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128314d9 jmp 0x1283147f */
  goto L_1283147f;
L_128314db:;
  /* 128314db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128314df jne 0x128314e8 */
  if (!C.zf) goto L_128314e8;
  /* 128314e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128314e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128314e6 jmp 0x128314eb */
  goto L_128314eb;
L_128314e8:;
  /* 128314e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_128314eb:;
  /* 128314eb mov esp, ebp */
  ESP = (EBP);
  /* 128314ed pop ebp */
  EBP = (pop32());
  /* 128314ee ret  */
  ESPCHK(0x128313f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x128314f0 (17 bytes, 8 insns) */
void f_128314f0(void) {
  FTRACE(0x128314f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128314f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128314f1 mov ebp, esp */
  EBP = (ESP);
  /* 128314f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128314f6 push eax */
  push32((uint32_t)(EAX));
  /* 128314f7 call 0x128313f0 */
  push32(0x128314fcu); f_128313f0();
  /* 128314fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128314ff pop ebp */
  EBP = (pop32());
  /* 12831500 ret  */
  ESPCHK(0x128314f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x12831510 (297 bytes, 106 insns) */
void f_12831510(void) {
  FTRACE(0x12831510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831510 push ebp */
  push32((uint32_t)(EBP));
  /* 12831511 mov ebp, esp */
  EBP = (ESP);
  /* 12831513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831516 push esi */
  push32((uint32_t)(ESI));
L_12831517:;
  /* 12831517 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283151e jle 0x12831537 */
  if ((C.zf||C.sf!=C.of)) goto L_12831537;
  /* 12831520 push 8 */
  push32((uint32_t)(0x8u));
  /* 12831522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831527 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12831529 push ecx */
  push32((uint32_t)(ECX));
  /* 1283152a call 0x12828b50 */
  push32(0x1283152fu); f_12828b50();
  /* 1283152f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831532 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12831535 jmp 0x12831550 */
  goto L_12831550;
L_12831537:;
  /* 12831537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283153a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283153c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283153e mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 12831544 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831546 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1283154a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1283154d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12831550:;
  /* 12831550 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831554 je 0x12831561 */
  if (C.zf) goto L_12831561;
  /* 12831556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283155c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1283155f jmp 0x12831517 */
  goto L_12831517;
L_12831561:;
  /* 12831561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831566 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12831568 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1283156b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283156e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831571 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12831574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831577 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1283157a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283157e je 0x12831586 */
  if (C.zf) goto L_12831586;
  /* 12831580 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831584 jne 0x12831599 */
  if (!C.zf) goto L_12831599;
L_12831586:;
  /* 12831586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283158b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283158d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12831590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831593 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831596 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12831599:;
  /* 12831599 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 128315a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128315a7:;
  /* 128315a7 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128315ae jle 0x128315c3 */
  if ((C.zf||C.sf!=C.of)) goto L_128315c3;
  /* 128315b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 128315b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128315b5 push edx */
  push32((uint32_t)(EDX));
  /* 128315b6 call 0x12828b50 */
  push32(0x128315bbu); f_12828b50();
  /* 128315bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128315be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128315c1 jmp 0x128315d8 */
  goto L_128315d8;
L_128315c3:;
  /* 128315c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128315c6 mov ecx, dword ptr [0x1284cc98] */
  ECX = (r32((uint32_t)(0x1284cc98)));
  /* 128315cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128315ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128315d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128315d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_128315d8:;
  /* 128315d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128315dc je 0x12831619 */
  if (C.zf) goto L_12831619;
  /* 128315de push 0 */
  push32((uint32_t)(0x0u));
  /* 128315e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 128315e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128315e5 push eax */
  push32((uint32_t)(EAX));
  /* 128315e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128315e9 push ecx */
  push32((uint32_t)(ECX));
  /* 128315ea call 0x128324b0 */
  push32(0x128315efu); f_128324b0();
  /* 128315ef mov ecx, eax */
  ECX = (EAX);
  /* 128315f1 mov esi, edx */
  ESI = (EDX);
  /* 128315f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128315f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128315f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128315fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128315fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128315fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12831601 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12831604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831609 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1283160b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1283160e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831614 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12831617 jmp 0x128315a7 */
  goto L_128315a7;
L_12831619:;
  /* 12831619 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283161d jne 0x1283162e */
  if (!C.zf) goto L_1283162e;
  /* 1283161f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831622 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12831624 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831627 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283162a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1283162c jmp 0x12831634 */
  goto L_12831634;
L_1283162e:;
  /* 1283162e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831631 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12831634:;
  /* 12831634 pop esi */
  ESI = (pop32());
  /* 12831635 mov esp, ebp */
  ESP = (EBP);
  /* 12831637 pop ebp */
  EBP = (pop32());
  /* 12831638 ret  */
  ESPCHK(0x12831510u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x12831640 (61 bytes, 18 insns) */
void f_12831640(void) {
  FTRACE(0x12831640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831640 push ebp */
  push32((uint32_t)(EBP));
  /* 12831641 mov ebp, esp */
  EBP = (ESP);
  /* 12831643 cmp dword ptr [0x1284e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283164a jne 0x1283167b */
  if (!C.zf) goto L_1283167b;
  /* 1283164c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1283164e call 0x12826540 */
  push32(0x12831653u); f_12826540();
  /* 12831653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831656 cmp dword ptr [0x1284e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283165d jne 0x12831671 */
  if (!C.zf) goto L_12831671;
  /* 1283165f call 0x128316a0 */
  push32(0x12831664u); f_128316a0();
  /* 12831664 mov eax, dword ptr [0x1284e7e0] */
  EAX = (r32((uint32_t)(0x1284e7e0)));
  /* 12831669 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283166c mov dword ptr [0x1284e7e0], eax */
  w32((uint32_t)(0x1284e7e0), (EAX));
L_12831671:;
  /* 12831671 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12831673 call 0x128265e0 */
  push32(0x12831678u); f_128265e0();
  /* 12831678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1283167b:;
  /* 1283167b pop ebp */
  EBP = (pop32());
  /* 1283167c ret  */
  ESPCHK(0x12831640u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x12831680 (30 bytes, 11 insns) */
void f_12831680(void) {
  FTRACE(0x12831680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831680 push ebp */
  push32((uint32_t)(EBP));
  /* 12831681 mov ebp, esp */
  EBP = (ESP);
  /* 12831683 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12831685 call 0x12826540 */
  push32(0x1283168au); f_12826540();
  /* 1283168a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283168d call 0x128316a0 */
  push32(0x12831692u); f_128316a0();
  /* 12831692 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12831694 call 0x128265e0 */
  push32(0x12831699u); f_128265e0();
  /* 12831699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283169c pop ebp */
  EBP = (pop32());
  /* 1283169d ret  */
  ESPCHK(0x12831680u, _esp0);
  ESP += 4; return;
}

/* FUN_100116a0 @ 0x128316a0 (939 bytes, 266 insns) */
void f_128316a0(void) {
  FTRACE(0x128316a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128316a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128316a1 mov ebp, esp */
  EBP = (ESP);
  /* 128316a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128316a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128316ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 128316af call 0x12826540 */
  push32(0x128316b4u); f_12826540();
  /* 128316b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128316b7 mov dword ptr [0x1284e728], 0 */
  w32((uint32_t)(0x1284e728), (0x0u));
  /* 128316c1 mov dword ptr [0x1284de38], 0xffffffff */
  w32((uint32_t)(0x1284de38), (0xffffffffu));
  /* 128316cb mov eax, dword ptr [0x1284de38] */
  EAX = (r32((uint32_t)(0x1284de38)));
  /* 128316d0 mov dword ptr [0x1284de28], eax */
  w32((uint32_t)(0x1284de28), (EAX));
  /* 128316d5 push 0x1284a850 */
  push32((uint32_t)(0x1284a850u));
  /* 128316da call 0x12832520 */
  push32(0x128316dfu); f_12832520();
  /* 128316df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128316e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128316e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128316e9 jne 0x12831823 */
  if (!C.zf) goto L_12831823;
  /* 128316ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 128316f1 call 0x128265e0 */
  push32(0x128316f6u); f_128265e0();
  /* 128316f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128316f9 push 0x1284e730 */
  push32((uint32_t)(0x1284e730u));
  /* 128316fe call dword ptr [0x1285023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285023c))), 0x12831704u);
  /* 12831704 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831707 je 0x1283181e */
  if (C.zf) goto L_1283181e;
  /* 1283170d mov dword ptr [0x1284e728], 1 */
  w32((uint32_t)(0x1284e728), (0x1u));
  /* 12831717 mov ecx, dword ptr [0x1284e730] */
  ECX = (r32((uint32_t)(0x1284e730)));
  /* 1283171d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831720 mov dword ptr [0x1284dd90], ecx */
  w32((uint32_t)(0x1284dd90), (ECX));
  /* 12831726 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831728 mov dx, word ptr [0x1284e776] */
  DX = (r16((uint32_t)(0x1284e776)));
  /* 1283172f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12831731 je 0x12831749 */
  if (C.zf) goto L_12831749;
  /* 12831733 mov eax, dword ptr [0x1284e784] */
  EAX = (r32((uint32_t)(0x1284e784)));
  /* 12831738 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1283173b mov ecx, dword ptr [0x1284dd90] */
  ECX = (r32((uint32_t)(0x1284dd90)));
  /* 12831741 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831743 mov dword ptr [0x1284dd90], ecx */
  w32((uint32_t)(0x1284dd90), (ECX));
L_12831749:;
  /* 12831749 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1283174b mov dx, word ptr [0x1284e7ca] */
  DX = (r16((uint32_t)(0x1284e7ca)));
  /* 12831752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12831754 je 0x1283177e */
  if (C.zf) goto L_1283177e;
  /* 12831756 cmp dword ptr [0x1284e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283175d je 0x1283177e */
  if (C.zf) goto L_1283177e;
  /* 1283175f mov dword ptr [0x1284dd94], 1 */
  w32((uint32_t)(0x1284dd94), (0x1u));
  /* 12831769 mov eax, dword ptr [0x1284e7d8] */
  EAX = (r32((uint32_t)(0x1284e7d8)));
  /* 1283176e sub eax, dword ptr [0x1284e784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284e784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831774 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831777 mov dword ptr [0x1284dd98], eax */
  w32((uint32_t)(0x1284dd98), (EAX));
  /* 1283177c jmp 0x12831792 */
  goto L_12831792;
L_1283177e:;
  /* 1283177e mov dword ptr [0x1284dd94], 0 */
  w32((uint32_t)(0x1284dd94), (0x0u));
  /* 12831788 mov dword ptr [0x1284dd98], 0 */
  w32((uint32_t)(0x1284dd98), (0x0u));
L_12831792:;
  /* 12831792 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12831795 push ecx */
  push32((uint32_t)(ECX));
  /* 12831796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831798 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1283179a mov edx, dword ptr [0x1284de1c] */
  EDX = (r32((uint32_t)(0x1284de1c)));
  /* 128317a0 push edx */
  push32((uint32_t)(EDX));
  /* 128317a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128317a3 push 0x1284e734 */
  push32((uint32_t)(0x1284e734u));
  /* 128317a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128317ad mov eax, dword ptr [0x1284e698] */
  EAX = (r32((uint32_t)(0x1284e698)));
  /* 128317b2 push eax */
  push32((uint32_t)(EAX));
  /* 128317b3 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x128317b9u);
  /* 128317b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128317bb je 0x128317cf */
  if (C.zf) goto L_128317cf;
  /* 128317bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128317c1 jne 0x128317cf */
  if (!C.zf) goto L_128317cf;
  /* 128317c3 mov ecx, dword ptr [0x1284de1c] */
  ECX = (r32((uint32_t)(0x1284de1c)));
  /* 128317c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 128317cd jmp 0x128317d8 */
  goto L_128317d8;
L_128317cf:;
  /* 128317cf mov edx, dword ptr [0x1284de1c] */
  EDX = (r32((uint32_t)(0x1284de1c)));
  /* 128317d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_128317d8:;
  /* 128317d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 128317db push eax */
  push32((uint32_t)(EAX));
  /* 128317dc push 0 */
  push32((uint32_t)(0x0u));
  /* 128317de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 128317e0 mov ecx, dword ptr [0x1284de20] */
  ECX = (r32((uint32_t)(0x1284de20)));
  /* 128317e6 push ecx */
  push32((uint32_t)(ECX));
  /* 128317e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128317e9 push 0x1284e788 */
  push32((uint32_t)(0x1284e788u));
  /* 128317ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128317f3 mov edx, dword ptr [0x1284e698] */
  EDX = (r32((uint32_t)(0x1284e698)));
  /* 128317f9 push edx */
  push32((uint32_t)(EDX));
  /* 128317fa call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x12831800u);
  /* 12831800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831802 je 0x12831815 */
  if (C.zf) goto L_12831815;
  /* 12831804 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831808 jne 0x12831815 */
  if (!C.zf) goto L_12831815;
  /* 1283180a mov eax, dword ptr [0x1284de20] */
  EAX = (r32((uint32_t)(0x1284de20)));
  /* 1283180f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12831813 jmp 0x1283181e */
  goto L_1283181e;
L_12831815:;
  /* 12831815 mov ecx, dword ptr [0x1284de20] */
  ECX = (r32((uint32_t)(0x1284de20)));
  /* 1283181b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1283181e:;
  /* 1283181e jmp 0x12831a47 */
  goto L_12831a47;
L_12831823:;
  /* 12831823 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831826 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12831829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1283182b je 0x1283184d */
  if (C.zf) goto L_1283184d;
  /* 1283182d cmp dword ptr [0x1284e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831834 je 0x1283185c */
  if (C.zf) goto L_1283185c;
  /* 12831836 mov ecx, dword ptr [0x1284e7dc] */
  ECX = (r32((uint32_t)(0x1284e7dc)));
  /* 1283183c push ecx */
  push32((uint32_t)(ECX));
  /* 1283183d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831840 push edx */
  push32((uint32_t)(EDX));
  /* 12831841 call 0x1282e7d0 */
  push32(0x12831846u); f_1282e7d0();
  /* 12831846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1283184b jne 0x1283185c */
  if (!C.zf) goto L_1283185c;
L_1283184d:;
  /* 1283184d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1283184f call 0x128265e0 */
  push32(0x12831854u); f_128265e0();
  /* 12831854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831857 jmp 0x12831a47 */
  goto L_12831a47;
L_1283185c:;
  /* 1283185c push 2 */
  push32((uint32_t)(0x2u));
  /* 1283185e mov eax, dword ptr [0x1284e7dc] */
  EAX = (r32((uint32_t)(0x1284e7dc)));
  /* 12831863 push eax */
  push32((uint32_t)(EAX));
  /* 12831864 call 0x128235d0 */
  push32(0x12831869u); f_128235d0();
  /* 12831869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283186c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12831871 push 0x1284a848 */
  push32((uint32_t)(0x1284a848u));
  /* 12831876 push 2 */
  push32((uint32_t)(0x2u));
  /* 12831878 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283187b push ecx */
  push32((uint32_t)(ECX));
  /* 1283187c call 0x12825970 */
  push32(0x12831881u); f_12825970();
  /* 12831881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831887 push eax */
  push32((uint32_t)(EAX));
  /* 12831888 call 0x12822b40 */
  push32(0x1283188du); f_12822b40();
  /* 1283188d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831890 mov dword ptr [0x1284e7dc], eax */
  w32((uint32_t)(0x1284e7dc), (EAX));
  /* 12831895 cmp dword ptr [0x1284e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283189c jne 0x128318ad */
  if (!C.zf) goto L_128318ad;
  /* 1283189e push 0xc */
  push32((uint32_t)(0xcu));
  /* 128318a0 call 0x128265e0 */
  push32(0x128318a5u); f_128265e0();
  /* 128318a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128318a8 jmp 0x12831a47 */
  goto L_12831a47;
L_128318ad:;
  /* 128318ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128318b0 push edx */
  push32((uint32_t)(EDX));
  /* 128318b1 mov eax, dword ptr [0x1284e7dc] */
  EAX = (r32((uint32_t)(0x1284e7dc)));
  /* 128318b6 push eax */
  push32((uint32_t)(EAX));
  /* 128318b7 call 0x12825af0 */
  push32(0x128318bcu); f_12825af0();
  /* 128318bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128318bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 128318c1 call 0x128265e0 */
  push32(0x128318c6u); f_128265e0();
  /* 128318c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128318c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 128318cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128318ce push ecx */
  push32((uint32_t)(ECX));
  /* 128318cf mov edx, dword ptr [0x1284de1c] */
  EDX = (r32((uint32_t)(0x1284de1c)));
  /* 128318d5 push edx */
  push32((uint32_t)(EDX));
  /* 128318d6 call 0x12826360 */
  push32(0x128318dbu); f_12826360();
  /* 128318db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128318de mov eax, dword ptr [0x1284de1c] */
  EAX = (r32((uint32_t)(0x1284de1c)));
  /* 128318e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 128318e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128318ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128318ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128318f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128318f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128318f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128318f9 jne 0x1283190d */
  if (!C.zf) goto L_1283190d;
  /* 128318fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128318fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831901 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12831904 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283190a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1283190d:;
  /* 1283190d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831910 push eax */
  push32((uint32_t)(EAX));
  /* 12831911 call 0x128313f0 */
  push32(0x12831916u); f_128313f0();
  /* 12831916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831919 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1283191f mov dword ptr [0x1284dd90], eax */
  w32((uint32_t)(0x1284dd90), (EAX));
L_12831924:;
  /* 12831924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831927 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1283192a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283192d je 0x12831945 */
  if (C.zf) goto L_12831945;
  /* 1283192f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831932 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12831935 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831938 jl 0x12831950 */
  if ((C.sf!=C.of)) goto L_12831950;
  /* 1283193a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283193d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12831940 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831943 jg 0x12831950 */
  if ((!C.zf&&C.sf==C.of)) goto L_12831950;
L_12831945:;
  /* 12831945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831948 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283194b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1283194e jmp 0x12831924 */
  goto L_12831924;
L_12831950:;
  /* 12831950 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831953 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12831956 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831959 jne 0x128319f5 */
  if (!C.zf) goto L_128319f5;
  /* 1283195f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831965 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12831968 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283196b push edx */
  push32((uint32_t)(EDX));
  /* 1283196c call 0x128313f0 */
  push32(0x12831971u); f_128313f0();
  /* 12831971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831974 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831977 mov ecx, dword ptr [0x1284dd90] */
  ECX = (r32((uint32_t)(0x1284dd90)));
  /* 1283197d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1283197f mov dword ptr [0x1284dd90], ecx */
  w32((uint32_t)(0x1284dd90), (ECX));
L_12831985:;
  /* 12831985 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831988 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1283198b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283198e jl 0x128319a6 */
  if ((C.sf!=C.of)) goto L_128319a6;
  /* 12831990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831993 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12831996 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831999 jg 0x128319a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_128319a6;
  /* 1283199b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283199e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128319a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128319a4 jmp 0x12831985 */
  goto L_12831985;
L_128319a6:;
  /* 128319a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128319ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128319af jne 0x128319f5 */
  if (!C.zf) goto L_128319f5;
  /* 128319b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128319b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128319ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319bd push ecx */
  push32((uint32_t)(ECX));
  /* 128319be call 0x128313f0 */
  push32(0x128319c3u); f_128313f0();
  /* 128319c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128319c6 mov edx, dword ptr [0x1284dd90] */
  EDX = (r32((uint32_t)(0x1284dd90)));
  /* 128319cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128319ce mov dword ptr [0x1284dd90], edx */
  w32((uint32_t)(0x1284dd90), (EDX));
L_128319d4:;
  /* 128319d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128319da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128319dd jl 0x128319f5 */
  if ((C.sf!=C.of)) goto L_128319f5;
  /* 128319df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128319e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128319e8 jg 0x128319f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_128319f5;
  /* 128319ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128319ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128319f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128319f3 jmp 0x128319d4 */
  goto L_128319d4;
L_128319f5:;
  /* 128319f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128319f9 je 0x12831a09 */
  if (C.zf) goto L_12831a09;
  /* 128319fb mov edx, dword ptr [0x1284dd90] */
  EDX = (r32((uint32_t)(0x1284dd90)));
  /* 12831a01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12831a03 mov dword ptr [0x1284dd90], edx */
  w32((uint32_t)(0x1284dd90), (EDX));
L_12831a09:;
  /* 12831a09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831a0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12831a0f mov dword ptr [0x1284dd94], ecx */
  w32((uint32_t)(0x1284dd94), (ECX));
  /* 12831a15 cmp dword ptr [0x1284dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831a1c je 0x12831a3e */
  if (C.zf) goto L_12831a3e;
  /* 12831a1e push 3 */
  push32((uint32_t)(0x3u));
  /* 12831a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831a23 push edx */
  push32((uint32_t)(EDX));
  /* 12831a24 mov eax, dword ptr [0x1284de20] */
  EAX = (r32((uint32_t)(0x1284de20)));
  /* 12831a29 push eax */
  push32((uint32_t)(EAX));
  /* 12831a2a call 0x12826360 */
  push32(0x12831a2fu); f_12826360();
  /* 12831a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831a32 mov ecx, dword ptr [0x1284de20] */
  ECX = (r32((uint32_t)(0x1284de20)));
  /* 12831a38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12831a3c jmp 0x12831a47 */
  goto L_12831a47;
L_12831a3e:;
  /* 12831a3e mov edx, dword ptr [0x1284de20] */
  EDX = (r32((uint32_t)(0x1284de20)));
  /* 12831a44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12831a47:;
  /* 12831a47 mov esp, ebp */
  ESP = (EBP);
  /* 12831a49 pop ebp */
  EBP = (pop32());
  /* 12831a4a ret  */
  ESPCHK(0x128316a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x12831a50 (46 bytes, 18 insns) */
void f_12831a50(void) {
  FTRACE(0x12831a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12831a51 mov ebp, esp */
  EBP = (ESP);
  /* 12831a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12831a54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12831a56 call 0x12826540 */
  push32(0x12831a5bu); f_12826540();
  /* 12831a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831a61 push eax */
  push32((uint32_t)(EAX));
  /* 12831a62 call 0x12831a80 */
  push32(0x12831a67u); f_12831a80();
  /* 12831a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831a6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12831a6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12831a6f call 0x128265e0 */
  push32(0x12831a74u); f_128265e0();
  /* 12831a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831a7a mov esp, ebp */
  ESP = (EBP);
  /* 12831a7c pop ebp */
  EBP = (pop32());
  /* 12831a7d ret  */
  ESPCHK(0x12831a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x12831a80 (762 bytes, 246 insns) */
void f_12831a80(void) {
  FTRACE(0x12831a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12831a81 mov ebp, esp */
  EBP = (ESP);
  /* 12831a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12831a84 cmp dword ptr [0x1284dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831a8b jne 0x12831a94 */
  if (!C.zf) goto L_12831a94;
  /* 12831a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831a8f jmp 0x12831d76 */
  goto L_12831d76;
L_12831a94:;
  /* 12831a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831a97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12831a9a cmp ecx, dword ptr [0x1284de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831aa0 jne 0x12831ab4 */
  if (!C.zf) goto L_12831ab4;
  /* 12831aa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831aa5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12831aa8 cmp eax, dword ptr [0x1284de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831aae je 0x12831c7b */
  if (C.zf) goto L_12831c7b;
L_12831ab4:;
  /* 12831ab4 cmp dword ptr [0x1284e728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831abb je 0x12831c35 */
  if (C.zf) goto L_12831c35;
  /* 12831ac1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831ac3 mov cx, word ptr [0x1284e7c8] */
  CX = (r16((uint32_t)(0x1284e7c8)));
  /* 12831aca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12831acc jne 0x12831b29 */
  if (!C.zf) goto L_12831b29;
  /* 12831ace xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831ad0 mov dx, word ptr [0x1284e7d6] */
  DX = (r16((uint32_t)(0x1284e7d6)));
  /* 12831ad7 push edx */
  push32((uint32_t)(EDX));
  /* 12831ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831ada mov ax, word ptr [0x1284e7d4] */
  AX = (r16((uint32_t)(0x1284e7d4)));
  /* 12831ae0 push eax */
  push32((uint32_t)(EAX));
  /* 12831ae1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831ae3 mov cx, word ptr [0x1284e7d2] */
  CX = (r16((uint32_t)(0x1284e7d2)));
  /* 12831aea push ecx */
  push32((uint32_t)(ECX));
  /* 12831aeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831aed mov dx, word ptr [0x1284e7d0] */
  DX = (r16((uint32_t)(0x1284e7d0)));
  /* 12831af4 push edx */
  push32((uint32_t)(EDX));
  /* 12831af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831af9 mov ax, word ptr [0x1284e7cc] */
  AX = (r16((uint32_t)(0x1284e7cc)));
  /* 12831aff push eax */
  push32((uint32_t)(EAX));
  /* 12831b00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831b02 mov cx, word ptr [0x1284e7ce] */
  CX = (r16((uint32_t)(0x1284e7ce)));
  /* 12831b09 push ecx */
  push32((uint32_t)(ECX));
  /* 12831b0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831b0c mov dx, word ptr [0x1284e7ca] */
  DX = (r16((uint32_t)(0x1284e7ca)));
  /* 12831b13 push edx */
  push32((uint32_t)(EDX));
  /* 12831b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831b17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12831b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12831b1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12831b1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12831b1f call 0x12831d80 */
  push32(0x12831b24u); f_12831d80();
  /* 12831b24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831b27 jmp 0x12831b7a */
  goto L_12831b7a;
L_12831b29:;
  /* 12831b29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831b2b mov dx, word ptr [0x1284e7d6] */
  DX = (r16((uint32_t)(0x1284e7d6)));
  /* 12831b32 push edx */
  push32((uint32_t)(EDX));
  /* 12831b33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831b35 mov ax, word ptr [0x1284e7d4] */
  AX = (r16((uint32_t)(0x1284e7d4)));
  /* 12831b3b push eax */
  push32((uint32_t)(EAX));
  /* 12831b3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831b3e mov cx, word ptr [0x1284e7d2] */
  CX = (r16((uint32_t)(0x1284e7d2)));
  /* 12831b45 push ecx */
  push32((uint32_t)(ECX));
  /* 12831b46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831b48 mov dx, word ptr [0x1284e7d0] */
  DX = (r16((uint32_t)(0x1284e7d0)));
  /* 12831b4f push edx */
  push32((uint32_t)(EDX));
  /* 12831b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831b52 mov ax, word ptr [0x1284e7ce] */
  AX = (r16((uint32_t)(0x1284e7ce)));
  /* 12831b58 push eax */
  push32((uint32_t)(EAX));
  /* 12831b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12831b5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831b5f mov cx, word ptr [0x1284e7ca] */
  CX = (r16((uint32_t)(0x1284e7ca)));
  /* 12831b66 push ecx */
  push32((uint32_t)(ECX));
  /* 12831b67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831b6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12831b6d push eax */
  push32((uint32_t)(EAX));
  /* 12831b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12831b70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12831b72 call 0x12831d80 */
  push32(0x12831b77u); f_12831d80();
  /* 12831b77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12831b7a:;
  /* 12831b7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831b7c mov cx, word ptr [0x1284e774] */
  CX = (r16((uint32_t)(0x1284e774)));
  /* 12831b83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12831b85 jne 0x12831be2 */
  if (!C.zf) goto L_12831be2;
  /* 12831b87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831b89 mov dx, word ptr [0x1284e782] */
  DX = (r16((uint32_t)(0x1284e782)));
  /* 12831b90 push edx */
  push32((uint32_t)(EDX));
  /* 12831b91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831b93 mov ax, word ptr [0x1284e780] */
  AX = (r16((uint32_t)(0x1284e780)));
  /* 12831b99 push eax */
  push32((uint32_t)(EAX));
  /* 12831b9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831b9c mov cx, word ptr [0x1284e77e] */
  CX = (r16((uint32_t)(0x1284e77e)));
  /* 12831ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12831ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831ba6 mov dx, word ptr [0x1284e77c] */
  DX = (r16((uint32_t)(0x1284e77c)));
  /* 12831bad push edx */
  push32((uint32_t)(EDX));
  /* 12831bae push 0 */
  push32((uint32_t)(0x0u));
  /* 12831bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831bb2 mov ax, word ptr [0x1284e778] */
  AX = (r16((uint32_t)(0x1284e778)));
  /* 12831bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12831bb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831bbb mov cx, word ptr [0x1284e77a] */
  CX = (r16((uint32_t)(0x1284e77a)));
  /* 12831bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12831bc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831bc5 mov dx, word ptr [0x1284e776] */
  DX = (r16((uint32_t)(0x1284e776)));
  /* 12831bcc push edx */
  push32((uint32_t)(EDX));
  /* 12831bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831bd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12831bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12831bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12831bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831bd8 call 0x12831d80 */
  push32(0x12831bddu); f_12831d80();
  /* 12831bdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831be0 jmp 0x12831c33 */
  goto L_12831c33;
L_12831be2:;
  /* 12831be2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831be4 mov dx, word ptr [0x1284e782] */
  DX = (r16((uint32_t)(0x1284e782)));
  /* 12831beb push edx */
  push32((uint32_t)(EDX));
  /* 12831bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831bee mov ax, word ptr [0x1284e780] */
  AX = (r16((uint32_t)(0x1284e780)));
  /* 12831bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12831bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831bf7 mov cx, word ptr [0x1284e77e] */
  CX = (r16((uint32_t)(0x1284e77e)));
  /* 12831bfe push ecx */
  push32((uint32_t)(ECX));
  /* 12831bff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12831c01 mov dx, word ptr [0x1284e77c] */
  DX = (r16((uint32_t)(0x1284e77c)));
  /* 12831c08 push edx */
  push32((uint32_t)(EDX));
  /* 12831c09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831c0b mov ax, word ptr [0x1284e77a] */
  AX = (r16((uint32_t)(0x1284e77a)));
  /* 12831c11 push eax */
  push32((uint32_t)(EAX));
  /* 12831c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12831c18 mov cx, word ptr [0x1284e776] */
  CX = (r16((uint32_t)(0x1284e776)));
  /* 12831c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12831c20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831c23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12831c26 push eax */
  push32((uint32_t)(EAX));
  /* 12831c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c2b call 0x12831d80 */
  push32(0x12831c30u); f_12831d80();
  /* 12831c30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12831c33:;
  /* 12831c33 jmp 0x12831c7b */
  goto L_12831c7b;
L_12831c35:;
  /* 12831c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12831c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12831c43 push 4 */
  push32((uint32_t)(0x4u));
  /* 12831c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831c48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12831c4b push edx */
  push32((uint32_t)(EDX));
  /* 12831c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12831c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12831c50 call 0x12831d80 */
  push32(0x12831c55u); f_12831d80();
  /* 12831c55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12831c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c64 push 5 */
  push32((uint32_t)(0x5u));
  /* 12831c66 push 0xa */
  push32((uint32_t)(0xau));
  /* 12831c68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831c6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12831c6e push ecx */
  push32((uint32_t)(ECX));
  /* 12831c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12831c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831c73 call 0x12831d80 */
  push32(0x12831c78u); f_12831d80();
  /* 12831c78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12831c7b:;
  /* 12831c7b mov edx, dword ptr [0x1284de2c] */
  EDX = (r32((uint32_t)(0x1284de2c)));
  /* 12831c81 cmp edx, dword ptr [0x1284de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831c87 jge 0x12831cd4 */
  if ((C.sf==C.of)) goto L_12831cd4;
  /* 12831c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831c8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12831c8f cmp ecx, dword ptr [0x1284de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831c95 jl 0x12831ca5 */
  if ((C.sf!=C.of)) goto L_12831ca5;
  /* 12831c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831c9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12831c9d cmp eax, dword ptr [0x1284de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831ca3 jle 0x12831cac */
  if ((C.zf||C.sf!=C.of)) goto L_12831cac;
L_12831ca5:;
  /* 12831ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831ca7 jmp 0x12831d76 */
  goto L_12831d76;
L_12831cac:;
  /* 12831cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831caf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12831cb2 cmp edx, dword ptr [0x1284de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831cb8 jle 0x12831cd2 */
  if ((C.zf||C.sf!=C.of)) goto L_12831cd2;
  /* 12831cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831cbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12831cc0 cmp ecx, dword ptr [0x1284de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831cc6 jge 0x12831cd2 */
  if ((C.sf==C.of)) goto L_12831cd2;
  /* 12831cc8 mov eax, 1 */
  EAX = (0x1u);
  /* 12831ccd jmp 0x12831d76 */
  goto L_12831d76;
L_12831cd2:;
  /* 12831cd2 jmp 0x12831d17 */
  goto L_12831d17;
L_12831cd4:;
  /* 12831cd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831cd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12831cda cmp eax, dword ptr [0x1284de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831ce0 jl 0x12831cf0 */
  if ((C.sf!=C.of)) goto L_12831cf0;
  /* 12831ce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831ce5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12831ce8 cmp edx, dword ptr [0x1284de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831cee jle 0x12831cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_12831cf7;
L_12831cf0:;
  /* 12831cf0 mov eax, 1 */
  EAX = (0x1u);
  /* 12831cf5 jmp 0x12831d76 */
  goto L_12831d76;
L_12831cf7:;
  /* 12831cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831cfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12831cfd cmp ecx, dword ptr [0x1284de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d03 jle 0x12831d17 */
  if ((C.zf||C.sf!=C.of)) goto L_12831d17;
  /* 12831d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831d08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12831d0b cmp eax, dword ptr [0x1284de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d11 jge 0x12831d17 */
  if ((C.sf==C.of)) goto L_12831d17;
  /* 12831d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831d15 jmp 0x12831d76 */
  goto L_12831d76;
L_12831d17:;
  /* 12831d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831d1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12831d1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831d23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12831d25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831d27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831d2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12831d2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831d33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831d35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831d3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12831d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12831d41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12831d44 cmp edx, dword ptr [0x1284de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d4a jne 0x12831d62 */
  if (!C.zf) goto L_12831d62;
  /* 12831d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831d4f cmp eax, dword ptr [0x1284de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d55 jl 0x12831d5e */
  if ((C.sf!=C.of)) goto L_12831d5e;
  /* 12831d57 mov eax, 1 */
  EAX = (0x1u);
  /* 12831d5c jmp 0x12831d76 */
  goto L_12831d76;
L_12831d5e:;
  /* 12831d5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831d60 jmp 0x12831d76 */
  goto L_12831d76;
L_12831d62:;
  /* 12831d62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831d65 cmp ecx, dword ptr [0x1284de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d6b jge 0x12831d74 */
  if ((C.sf==C.of)) goto L_12831d74;
  /* 12831d6d mov eax, 1 */
  EAX = (0x1u);
  /* 12831d72 jmp 0x12831d76 */
  goto L_12831d76;
L_12831d74:;
  /* 12831d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12831d76:;
  /* 12831d76 mov esp, ebp */
  ESP = (EBP);
  /* 12831d78 pop ebp */
  EBP = (pop32());
  /* 12831d79 ret  */
  ESPCHK(0x12831a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x12831d80 (504 bytes, 145 insns) */
void f_12831d80(void) {
  FTRACE(0x12831d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12831d81 mov ebp, esp */
  EBP = (ESP);
  /* 12831d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831d86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831d8a jne 0x12831e5c */
  if (!C.zf) goto L_12831e5c;
  /* 12831d90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831d93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12831d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831d98 jne 0x12831da9 */
  if (!C.zf) goto L_12831da9;
  /* 12831d9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831d9d mov edx, dword ptr [ecx*4 + 0x1284de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284de4c)));
  /* 12831da4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12831da7 jmp 0x12831db6 */
  goto L_12831db6;
L_12831da9:;
  /* 12831da9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831dac mov ecx, dword ptr [eax*4 + 0x1284de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284de80)));
  /* 12831db3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12831db6:;
  /* 12831db6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12831db9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831dbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12831dbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831dc2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831dc5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831dce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831dd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831dd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831dd6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12831dd9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12831ddd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12831dde mov ecx, 7 */
  ECX = (0x7u);
  /* 12831de3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12831de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12831de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12831deb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831dee jge 0x12831e09 */
  if ((C.sf==C.of)) goto L_12831e09;
  /* 12831df0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12831df3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831df6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12831df9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831dfc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831dff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831e02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831e04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12831e07 jmp 0x12831e1d */
  goto L_12831e1d;
L_12831e09:;
  /* 12831e09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12831e0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831e0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12831e12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831e15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831e18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831e1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12831e1d:;
  /* 12831e1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831e21 jne 0x12831e5a */
  if (!C.zf) goto L_12831e5a;
  /* 12831e23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831e26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12831e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12831e2b jne 0x12831e3c */
  if (!C.zf) goto L_12831e3c;
  /* 12831e2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831e30 mov eax, dword ptr [edx*4 + 0x1284de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284de50)));
  /* 12831e37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12831e3a jmp 0x12831e49 */
  goto L_12831e49;
L_12831e3c:;
  /* 12831e3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831e3f mov edx, dword ptr [ecx*4 + 0x1284de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284de84)));
  /* 12831e46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12831e49:;
  /* 12831e49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831e4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831e4f jle 0x12831e5a */
  if ((C.zf||C.sf!=C.of)) goto L_12831e5a;
  /* 12831e51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831e54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831e57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12831e5a:;
  /* 12831e5a jmp 0x12831e91 */
  goto L_12831e91;
L_12831e5c:;
  /* 12831e5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831e5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12831e62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12831e64 jne 0x12831e75 */
  if (!C.zf) goto L_12831e75;
  /* 12831e66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831e69 mov ecx, dword ptr [eax*4 + 0x1284de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284de4c)));
  /* 12831e70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12831e73 jmp 0x12831e82 */
  goto L_12831e82;
L_12831e75:;
  /* 12831e75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831e78 mov eax, dword ptr [edx*4 + 0x1284de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284de80)));
  /* 12831e7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12831e82:;
  /* 12831e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12831e85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12831e88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831e8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831e8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12831e91:;
  /* 12831e91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831e95 jne 0x12831ed1 */
  if (!C.zf) goto L_12831ed1;
  /* 12831e97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831e9a mov dword ptr [0x1284de2c], eax */
  w32((uint32_t)(0x1284de2c), (EAX));
  /* 12831e9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12831ea2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831ea5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12831ea8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831eaa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831ead mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12831eb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831eb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831eb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12831ebb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831ebd mov dword ptr [0x1284de30], ecx */
  w32((uint32_t)(0x1284de30), (ECX));
  /* 12831ec3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831ec6 mov dword ptr [0x1284de28], edx */
  w32((uint32_t)(0x1284de28), (EDX));
  /* 12831ecc jmp 0x12831f74 */
  goto L_12831f74;
L_12831ed1:;
  /* 12831ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12831ed4 mov dword ptr [0x1284de3c], eax */
  w32((uint32_t)(0x1284de3c), (EAX));
  /* 12831ed9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12831edc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831edf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12831ee2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831ee4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831ee7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12831eea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831eec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831ef2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12831ef5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831ef7 mov dword ptr [0x1284de40], ecx */
  w32((uint32_t)(0x1284de40), (ECX));
  /* 12831efd mov edx, dword ptr [0x1284dd98] */
  EDX = (r32((uint32_t)(0x1284dd98)));
  /* 12831f03 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12831f09 mov eax, dword ptr [0x1284de40] */
  EAX = (r32((uint32_t)(0x1284de40)));
  /* 12831f0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831f10 mov dword ptr [0x1284de40], eax */
  w32((uint32_t)(0x1284de40), (EAX));
  /* 12831f15 cmp dword ptr [0x1284de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831f1c jge 0x12831f41 */
  if ((C.sf==C.of)) goto L_12831f41;
  /* 12831f1e mov ecx, dword ptr [0x1284de40] */
  ECX = (r32((uint32_t)(0x1284de40)));
  /* 12831f24 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831f2a mov dword ptr [0x1284de40], ecx */
  w32((uint32_t)(0x1284de40), (ECX));
  /* 12831f30 mov edx, dword ptr [0x1284de3c] */
  EDX = (r32((uint32_t)(0x1284de3c)));
  /* 12831f36 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831f39 mov dword ptr [0x1284de3c], edx */
  w32((uint32_t)(0x1284de3c), (EDX));
  /* 12831f3f jmp 0x12831f6b */
  goto L_12831f6b;
L_12831f41:;
  /* 12831f41 cmp dword ptr [0x1284de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1284de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831f4b jl 0x12831f6b */
  if ((C.sf!=C.of)) goto L_12831f6b;
  /* 12831f4d mov eax, dword ptr [0x1284de40] */
  EAX = (r32((uint32_t)(0x1284de40)));
  /* 12831f52 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12831f57 mov dword ptr [0x1284de40], eax */
  w32((uint32_t)(0x1284de40), (EAX));
  /* 12831f5c mov ecx, dword ptr [0x1284de3c] */
  ECX = (r32((uint32_t)(0x1284de3c)));
  /* 12831f62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12831f65 mov dword ptr [0x1284de3c], ecx */
  w32((uint32_t)(0x1284de3c), (ECX));
L_12831f6b:;
  /* 12831f6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12831f6e mov dword ptr [0x1284de38], edx */
  w32((uint32_t)(0x1284de38), (EDX));
L_12831f74:;
  /* 12831f74 mov esp, ebp */
  ESP = (EBP);
  /* 12831f76 pop ebp */
  EBP = (pop32());
  /* 12831f77 ret  */
  ESPCHK(0x12831d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x12831f80 (382 bytes, 135 insns) */
void f_12831f80(void) {
  FTRACE(0x12831f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12831f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12831f81 mov ebp, esp */
  EBP = (ESP);
  /* 12831f83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12831f85 push 0x1284a858 */
  push32((uint32_t)(0x1284a858u));
  /* 12831f8a push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 12831f8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12831f95 push eax */
  push32((uint32_t)(EAX));
  /* 12831f96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12831f9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12831fa0 push ebx */
  push32((uint32_t)(EBX));
  /* 12831fa1 push esi */
  push32((uint32_t)(ESI));
  /* 12831fa2 push edi */
  push32((uint32_t)(EDI));
  /* 12831fa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12831fa6 cmp dword ptr [0x1284e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831fad jne 0x12831ff2 */
  if (!C.zf) goto L_12831ff2;
  /* 12831faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12831fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fb7 call dword ptr [0x12850238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850238))), 0x12831fbdu);
  /* 12831fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831fbf je 0x12831fcd */
  if (C.zf) goto L_12831fcd;
  /* 12831fc1 mov dword ptr [0x1284e7e4], 1 */
  w32((uint32_t)(0x1284e7e4), (0x1u));
  /* 12831fcb jmp 0x12831ff2 */
  goto L_12831ff2;
L_12831fcd:;
  /* 12831fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12831fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12831fd5 call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x12831fdbu);
  /* 12831fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12831fdd je 0x12831feb */
  if (C.zf) goto L_12831feb;
  /* 12831fdf mov dword ptr [0x1284e7e4], 2 */
  w32((uint32_t)(0x1284e7e4), (0x2u));
  /* 12831fe9 jmp 0x12831ff2 */
  goto L_12831ff2;
L_12831feb:;
  /* 12831feb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12831fed jmp 0x12832101 */
  goto L_12832101;
L_12831ff2:;
  /* 12831ff2 cmp dword ptr [0x1284e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12831ff9 jne 0x12832016 */
  if (!C.zf) goto L_12832016;
  /* 12831ffb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12831ffe push eax */
  push32((uint32_t)(EAX));
  /* 12831fff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832002 push ecx */
  push32((uint32_t)(ECX));
  /* 12832003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832006 push edx */
  push32((uint32_t)(EDX));
  /* 12832007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283200a push eax */
  push32((uint32_t)(EAX));
  /* 1283200b call dword ptr [0x12850238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850238))), 0x12832011u);
  /* 12832011 jmp 0x12832101 */
  goto L_12832101;
L_12832016:;
  /* 12832016 cmp dword ptr [0x1284e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283201d jne 0x128320ff */
  if (!C.zf) goto L_128320ff;
  /* 12832023 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832027 jne 0x12832032 */
  if (!C.zf) goto L_12832032;
  /* 12832029 mov ecx, dword ptr [0x1284e698] */
  ECX = (r32((uint32_t)(0x1284e698)));
  /* 1283202f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12832032:;
  /* 12832032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832036 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832039 push edx */
  push32((uint32_t)(EDX));
  /* 1283203a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283203d push eax */
  push32((uint32_t)(EAX));
  /* 1283203e call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x12832044u);
  /* 12832044 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12832047 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283204b jne 0x12832054 */
  if (!C.zf) goto L_12832054;
  /* 1283204d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283204f jmp 0x12832101 */
  goto L_12832101;
L_12832054:;
  /* 12832054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1283205b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1283205e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832061 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12832063 call 0x12825ce0 */
  push32(0x12832068u); f_12825ce0();
  /* 12832068 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1283206b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1283206e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12832071 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12832074 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1283207b jmp 0x12832094 */
  goto L_12832094;
  /* 1283207d mov eax, 1 */
  EAX = (0x1u);
  /* 12832082 ret  */
  ESPCHK(0x12831f80u, _esp0);
  ESP += 4; return;
  /* 12832083 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12832086 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1283208d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12832094:;
  /* 12832094 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832098 jne 0x1283209e */
  if (!C.zf) goto L_1283209e;
  /* 1283209a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283209c jmp 0x12832101 */
  goto L_12832101;
L_1283209e:;
  /* 1283209e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128320a1 push edx */
  push32((uint32_t)(EDX));
  /* 128320a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128320a5 push eax */
  push32((uint32_t)(EAX));
  /* 128320a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128320a9 push ecx */
  push32((uint32_t)(ECX));
  /* 128320aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128320ad push edx */
  push32((uint32_t)(EDX));
  /* 128320ae call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x128320b4u);
  /* 128320b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128320b6 jne 0x128320bc */
  if (!C.zf) goto L_128320bc;
  /* 128320b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128320ba jmp 0x12832101 */
  goto L_12832101;
L_128320bc:;
  /* 128320bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128320c0 jne 0x128320dd */
  if (!C.zf) goto L_128320dd;
  /* 128320c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128320c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128320c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128320c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128320cb push eax */
  push32((uint32_t)(EAX));
  /* 128320cc push 1 */
  push32((uint32_t)(0x1u));
  /* 128320ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128320d1 push ecx */
  push32((uint32_t)(ECX));
  /* 128320d2 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x128320d8u);
  /* 128320d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 128320db jmp 0x128320fa */
  goto L_128320fa;
L_128320dd:;
  /* 128320dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128320e0 push edx */
  push32((uint32_t)(EDX));
  /* 128320e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128320e4 push eax */
  push32((uint32_t)(EAX));
  /* 128320e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128320e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128320ea push ecx */
  push32((uint32_t)(ECX));
  /* 128320eb push 1 */
  push32((uint32_t)(0x1u));
  /* 128320ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128320f0 push edx */
  push32((uint32_t)(EDX));
  /* 128320f1 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x128320f7u);
  /* 128320f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_128320fa:;
  /* 128320fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128320fd jmp 0x12832101 */
  goto L_12832101;
L_128320ff:;
  /* 128320ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12832101:;
  /* 12832101 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12832104 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832107 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1283210e pop edi */
  EDI = (pop32());
  /* 1283210f pop esi */
  ESI = (pop32());
  /* 12832110 pop ebx */
  EBX = (pop32());
  /* 12832111 mov esp, ebp */
  ESP = (EBP);
  /* 12832113 pop ebp */
  EBP = (pop32());
  /* 12832114 ret  */
  ESPCHK(0x12831f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x12832120 (398 bytes, 140 insns) */
void f_12832120(void) {
  FTRACE(0x12832120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832120 push ebp */
  push32((uint32_t)(EBP));
  /* 12832121 mov ebp, esp */
  EBP = (ESP);
  /* 12832123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12832125 push 0x1284a868 */
  push32((uint32_t)(0x1284a868u));
  /* 1283212a push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 1283212f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12832135 push eax */
  push32((uint32_t)(EAX));
  /* 12832136 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1283213d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832140 push ebx */
  push32((uint32_t)(EBX));
  /* 12832141 push esi */
  push32((uint32_t)(ESI));
  /* 12832142 push edi */
  push32((uint32_t)(EDI));
  /* 12832143 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12832146 cmp dword ptr [0x1284e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283214d jne 0x12832192 */
  if (!C.zf) goto L_12832192;
  /* 1283214f push 0 */
  push32((uint32_t)(0x0u));
  /* 12832151 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832153 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832155 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832157 call dword ptr [0x12850238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850238))), 0x1283215du);
  /* 1283215d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1283215f je 0x1283216d */
  if (C.zf) goto L_1283216d;
  /* 12832161 mov dword ptr [0x1284e7e8], 1 */
  w32((uint32_t)(0x1284e7e8), (0x1u));
  /* 1283216b jmp 0x12832192 */
  goto L_12832192;
L_1283216d:;
  /* 1283216d push 0 */
  push32((uint32_t)(0x0u));
  /* 1283216f push 0 */
  push32((uint32_t)(0x0u));
  /* 12832171 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832175 call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x1283217bu);
  /* 1283217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1283217d je 0x1283218b */
  if (C.zf) goto L_1283218b;
  /* 1283217f mov dword ptr [0x1284e7e8], 2 */
  w32((uint32_t)(0x1284e7e8), (0x2u));
  /* 12832189 jmp 0x12832192 */
  goto L_12832192;
L_1283218b:;
  /* 1283218b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283218d jmp 0x128322b1 */
  goto L_128322b1;
L_12832192:;
  /* 12832192 cmp dword ptr [0x1284e7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832199 jne 0x128321b6 */
  if (!C.zf) goto L_128321b6;
  /* 1283219b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283219e push eax */
  push32((uint32_t)(EAX));
  /* 1283219f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128321a2 push ecx */
  push32((uint32_t)(ECX));
  /* 128321a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128321a6 push edx */
  push32((uint32_t)(EDX));
  /* 128321a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128321aa push eax */
  push32((uint32_t)(EAX));
  /* 128321ab call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x128321b1u);
  /* 128321b1 jmp 0x128322b1 */
  goto L_128322b1;
L_128321b6:;
  /* 128321b6 cmp dword ptr [0x1284e7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128321bd jne 0x128322af */
  if (!C.zf) goto L_128322af;
  /* 128321c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128321c7 jne 0x128321d2 */
  if (!C.zf) goto L_128321d2;
  /* 128321c9 mov ecx, dword ptr [0x1284e698] */
  ECX = (r32((uint32_t)(0x1284e698)));
  /* 128321cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_128321d2:;
  /* 128321d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128321d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128321d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128321d9 push edx */
  push32((uint32_t)(EDX));
  /* 128321da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128321dd push eax */
  push32((uint32_t)(EAX));
  /* 128321de call dword ptr [0x12850238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850238))), 0x128321e4u);
  /* 128321e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128321e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128321eb jne 0x128321f4 */
  if (!C.zf) goto L_128321f4;
  /* 128321ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128321ef jmp 0x128322b1 */
  goto L_128322b1;
L_128321f4:;
  /* 128321f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128321fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128321fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12832200 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832203 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12832205 call 0x12825ce0 */
  push32(0x1283220au); f_12825ce0();
  /* 1283220a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1283220d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12832210 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12832213 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12832216 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1283221d jmp 0x12832236 */
  goto L_12832236;
  /* 1283221f mov eax, 1 */
  EAX = (0x1u);
  /* 12832224 ret  */
  ESPCHK(0x12832120u, _esp0);
  ESP += 4; return;
  /* 12832225 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12832228 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1283222f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12832236:;
  /* 12832236 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283223a jne 0x12832240 */
  if (!C.zf) goto L_12832240;
  /* 1283223c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283223e jmp 0x128322b1 */
  goto L_128322b1;
L_12832240:;
  /* 12832240 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12832243 push edx */
  push32((uint32_t)(EDX));
  /* 12832244 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832247 push eax */
  push32((uint32_t)(EAX));
  /* 12832248 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283224b push ecx */
  push32((uint32_t)(ECX));
  /* 1283224c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283224f push edx */
  push32((uint32_t)(EDX));
  /* 12832250 call dword ptr [0x12850238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850238))), 0x12832256u);
  /* 12832256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832258 jne 0x1283225e */
  if (!C.zf) goto L_1283225e;
  /* 1283225a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283225c jmp 0x128322b1 */
  goto L_128322b1;
L_1283225e:;
  /* 1283225e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832262 jne 0x12832286 */
  if (!C.zf) goto L_12832286;
  /* 12832264 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832266 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1283226a push 0 */
  push32((uint32_t)(0x0u));
  /* 1283226c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1283226e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832271 push eax */
  push32((uint32_t)(EAX));
  /* 12832272 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12832277 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1283227a push ecx */
  push32((uint32_t)(ECX));
  /* 1283227b call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x12832281u);
  /* 12832281 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12832284 jmp 0x128322aa */
  goto L_128322aa;
L_12832286:;
  /* 12832286 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1283228a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283228d push edx */
  push32((uint32_t)(EDX));
  /* 1283228e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832291 push eax */
  push32((uint32_t)(EAX));
  /* 12832292 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12832294 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832297 push ecx */
  push32((uint32_t)(ECX));
  /* 12832298 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1283229d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128322a0 push edx */
  push32((uint32_t)(EDX));
  /* 128322a1 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x128322a7u);
  /* 128322a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_128322aa:;
  /* 128322aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128322ad jmp 0x128322b1 */
  goto L_128322b1;
L_128322af:;
  /* 128322af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128322b1:;
  /* 128322b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 128322b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128322b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 128322be pop edi */
  EDI = (pop32());
  /* 128322bf pop esi */
  ESI = (pop32());
  /* 128322c0 pop ebx */
  EBX = (pop32());
  /* 128322c1 mov esp, ebp */
  ESP = (EBP);
  /* 128322c3 pop ebp */
  EBP = (pop32());
  /* 128322c4 ret  */
  ESPCHK(0x12832120u, _esp0);
  ESP += 4; return;
}

/* FUN_100122d0 @ 0x128322d0 (11 bytes, 6 insns) */
void f_128322d0(void) {
  FTRACE(0x128322d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128322d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128322d1 mov ebp, esp */
  EBP = (ESP);
  /* 128322d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128322d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128322d9 pop ebp */
  EBP = (pop32());
  /* 128322da ret  */
  ESPCHK(0x128322d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x128322e0 (147 bytes, 43 insns) */
void f_128322e0(void) {
  FTRACE(0x128322e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128322e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128322e1 mov ebp, esp */
  EBP = (ESP);
  /* 128322e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128322e4 cmp dword ptr [0x1284e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128322eb jne 0x12832307 */
  if (!C.zf) goto L_12832307;
  /* 128322ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128322f1 jl 0x12832302 */
  if ((C.sf!=C.of)) goto L_12832302;
  /* 128322f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128322f7 jg 0x12832302 */
  if ((!C.zf&&C.sf==C.of)) goto L_12832302;
  /* 128322f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128322fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128322ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12832302:;
  /* 12832302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832305 jmp 0x1283236f */
  goto L_1283236f;
L_12832307:;
  /* 12832307 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1283230c call dword ptr [0x12850278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850278))), 0x12832312u);
  /* 12832312 cmp dword ptr [0x1284e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832319 je 0x12832339 */
  if (C.zf) goto L_12832339;
  /* 1283231b push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 12832320 call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x12832326u);
  /* 12832326 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12832328 call 0x12826540 */
  push32(0x1283232du); f_12826540();
  /* 1283232d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832330 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12832337 jmp 0x12832340 */
  goto L_12832340;
L_12832339:;
  /* 12832339 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12832340:;
  /* 12832340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832343 push ecx */
  push32((uint32_t)(ECX));
  /* 12832344 call 0x12832380 */
  push32(0x12832349u); f_12832380();
  /* 12832349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283234c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1283234f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832353 je 0x12832361 */
  if (C.zf) goto L_12832361;
  /* 12832355 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12832357 call 0x128265e0 */
  push32(0x1283235cu); f_128265e0();
  /* 1283235c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283235f jmp 0x1283236c */
  goto L_1283236c;
L_12832361:;
  /* 12832361 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 12832366 call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x1283236cu);
L_1283236c:;
  /* 1283236c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1283236f:;
  /* 1283236f mov esp, ebp */
  ESP = (EBP);
  /* 12832371 pop ebp */
  EBP = (pop32());
  /* 12832372 ret  */
  ESPCHK(0x128322e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x12832380 (299 bytes, 91 insns) */
void f_12832380(void) {
  FTRACE(0x12832380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832380 push ebp */
  push32((uint32_t)(EBP));
  /* 12832381 mov ebp, esp */
  EBP = (ESP);
  /* 12832383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832386 cmp dword ptr [0x1284e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283238d jne 0x128323ac */
  if (!C.zf) goto L_128323ac;
  /* 1283238f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832393 jl 0x128323a4 */
  if ((C.sf!=C.of)) goto L_128323a4;
  /* 12832395 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832399 jg 0x128323a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_128323a4;
  /* 1283239b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283239e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128323a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128323a4:;
  /* 128323a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128323a7 jmp 0x128324a7 */
  goto L_128324a7;
L_128323ac:;
  /* 128323ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128323b3 jge 0x128323f3 */
  if ((C.sf==C.of)) goto L_128323f3;
  /* 128323b5 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128323bc jle 0x128323d1 */
  if ((C.zf||C.sf!=C.of)) goto L_128323d1;
  /* 128323be push 1 */
  push32((uint32_t)(0x1u));
  /* 128323c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128323c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128323c4 call 0x12828b50 */
  push32(0x128323c9u); f_12828b50();
  /* 128323c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128323cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128323cf jmp 0x128323e5 */
  goto L_128323e5;
L_128323d1:;
  /* 128323d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128323d4 mov eax, dword ptr [0x1284cc98] */
  EAX = (r32((uint32_t)(0x1284cc98)));
  /* 128323d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128323db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 128323df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128323e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128323e5:;
  /* 128323e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128323e9 jne 0x128323f3 */
  if (!C.zf) goto L_128323f3;
  /* 128323eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128323ee jmp 0x128324a7 */
  goto L_128324a7;
L_128323f3:;
  /* 128323f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128323f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 128323f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128323ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12832405 mov eax, dword ptr [0x1284cc98] */
  EAX = (r32((uint32_t)(0x1284cc98)));
  /* 1283240a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1283240c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12832410 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12832416 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12832418 je 0x1283243c */
  if (C.zf) goto L_1283243c;
  /* 1283241a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283241d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12832420 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12832426 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12832429 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1283242c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1283242f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12832433 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1283243a jmp 0x1283244d */
  goto L_1283244d;
L_1283243c:;
  /* 1283243c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1283243f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12832442 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12832446 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1283244d:;
  /* 1283244d push 1 */
  push32((uint32_t)(0x1u));
  /* 1283244f push 0 */
  push32((uint32_t)(0x0u));
  /* 12832451 push 3 */
  push32((uint32_t)(0x3u));
  /* 12832453 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12832456 push edx */
  push32((uint32_t)(EDX));
  /* 12832457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283245a push eax */
  push32((uint32_t)(EAX));
  /* 1283245b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1283245e push ecx */
  push32((uint32_t)(ECX));
  /* 1283245f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12832464 mov edx, dword ptr [0x1284e688] */
  EDX = (r32((uint32_t)(0x1284e688)));
  /* 1283246a push edx */
  push32((uint32_t)(EDX));
  /* 1283246b call 0x1282af30 */
  push32(0x12832470u); f_1282af30();
  /* 12832470 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12832476 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283247a jne 0x12832481 */
  if (!C.zf) goto L_12832481;
  /* 1283247c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283247f jmp 0x128324a7 */
  goto L_128324a7;
L_12832481:;
  /* 12832481 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832485 jne 0x12832491 */
  if (!C.zf) goto L_12832491;
  /* 12832487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283248a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1283248f jmp 0x128324a7 */
  goto L_128324a7;
L_12832491:;
  /* 12832491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832494 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832499 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1283249c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 128324a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 128324a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_128324a7:;
  /* 128324a7 mov esp, ebp */
  ESP = (EBP);
  /* 128324a9 pop ebp */
  EBP = (pop32());
  /* 128324aa ret  */
  ESPCHK(0x12832380u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x128324b0 (52 bytes, 19 insns) */
void f_128324b0(void) {
  FTRACE(0x128324b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128324b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128324b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 128324b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 128324ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 128324be jne 0x128324c9 */
  if (!C.zf) goto L_128324c9;
  /* 128324c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 128324c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128324c6 ret 0x10 */
  ESPCHK(0x128324b0u, _esp0);
  ESP += 20; return;
L_128324c9:;
  /* 128324c9 push ebx */
  push32((uint32_t)(EBX));
  /* 128324ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128324cc mov ebx, eax */
  EBX = (EAX);
  /* 128324ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128324d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128324d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 128324d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128324dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128324de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128324e0 pop ebx */
  EBX = (pop32());
  /* 128324e1 ret 0x10 */
  ESPCHK(0x128324b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100124f0 @ 0x128324f0 (46 bytes, 18 insns) */
void f_128324f0(void) {
  FTRACE(0x128324f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128324f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128324f1 mov ebp, esp */
  EBP = (ESP);
  /* 128324f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128324f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 128324f6 call 0x12826540 */
  push32(0x128324fbu); f_12826540();
  /* 128324fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128324fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832501 push eax */
  push32((uint32_t)(EAX));
  /* 12832502 call 0x12832520 */
  push32(0x12832507u); f_12832520();
  /* 12832507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283250a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1283250d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1283250f call 0x128265e0 */
  push32(0x12832514u); f_128265e0();
  /* 12832514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283251a mov esp, ebp */
  ESP = (EBP);
  /* 1283251c pop ebp */
  EBP = (pop32());
  /* 1283251d ret  */
  ESPCHK(0x128324f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12832520 (198 bytes, 69 insns) */
void f_12832520(void) {
  FTRACE(0x12832520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832520 push ebp */
  push32((uint32_t)(EBP));
  /* 12832521 mov ebp, esp */
  EBP = (ESP);
  /* 12832523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832526 mov eax, dword ptr [0x1284e4a4] */
  EAX = (r32((uint32_t)(0x1284e4a4)));
  /* 1283252b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1283252e cmp dword ptr [0x1284ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832535 jne 0x1283253e */
  if (!C.zf) goto L_1283253e;
  /* 12832537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832539 jmp 0x128325e2 */
  goto L_128325e2;
L_1283253e:;
  /* 1283253e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832542 jne 0x12832566 */
  if (!C.zf) goto L_12832566;
  /* 12832544 cmp dword ptr [0x1284e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283254b je 0x12832566 */
  if (C.zf) goto L_12832566;
  /* 1283254d call 0x12832640 */
  push32(0x12832552u); f_12832640();
  /* 12832552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832554 je 0x1283255d */
  if (C.zf) goto L_1283255d;
  /* 12832556 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832558 jmp 0x128325e2 */
  goto L_128325e2;
L_1283255d:;
  /* 1283255d mov ecx, dword ptr [0x1284e4a4] */
  ECX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832563 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12832566:;
  /* 12832566 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283256a je 0x128325e0 */
  if (C.zf) goto L_128325e0;
  /* 1283256c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832570 je 0x128325e0 */
  if (C.zf) goto L_128325e0;
  /* 12832572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832575 push edx */
  push32((uint32_t)(EDX));
  /* 12832576 call 0x12825970 */
  push32(0x1283257bu); f_12825970();
  /* 1283257b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283257e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12832581:;
  /* 12832581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832584 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832587 je 0x128325e0 */
  if (C.zf) goto L_128325e0;
  /* 12832589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1283258c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1283258e push edx */
  push32((uint32_t)(EDX));
  /* 1283258f call 0x12825970 */
  push32(0x12832594u); f_12825970();
  /* 12832594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832597 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283259a jbe 0x128325d5 */
  if ((C.cf||C.zf)) goto L_128325d5;
  /* 1283259c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1283259f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128325a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128325a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 128325a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128325ab jne 0x128325d5 */
  if (!C.zf) goto L_128325d5;
  /* 128325ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128325b0 push ecx */
  push32((uint32_t)(ECX));
  /* 128325b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128325b4 push edx */
  push32((uint32_t)(EDX));
  /* 128325b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128325b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128325ba push ecx */
  push32((uint32_t)(ECX));
  /* 128325bb call 0x128325f0 */
  push32(0x128325c0u); f_128325f0();
  /* 128325c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128325c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128325c5 jne 0x128325d5 */
  if (!C.zf) goto L_128325d5;
  /* 128325c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128325ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128325cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128325cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 128325d3 jmp 0x128325e2 */
  goto L_128325e2;
L_128325d5:;
  /* 128325d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128325d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128325db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128325de jmp 0x12832581 */
  goto L_12832581;
L_128325e0:;
  /* 128325e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128325e2:;
  /* 128325e2 mov esp, ebp */
  ESP = (EBP);
  /* 128325e4 pop ebp */
  EBP = (pop32());
  /* 128325e5 ret  */
  ESPCHK(0x12832520u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x128325f0 (79 bytes, 32 insns) */
void f_128325f0(void) {
  FTRACE(0x128325f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128325f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128325f1 mov ebp, esp */
  EBP = (ESP);
  /* 128325f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128325f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128325f8 jne 0x128325fe */
  if (!C.zf) goto L_128325fe;
  /* 128325fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128325fc jmp 0x1283263b */
  goto L_1283263b;
L_128325fe:;
  /* 128325fe mov eax, dword ptr [0x1284fb64] */
  EAX = (r32((uint32_t)(0x1284fb64)));
  /* 12832603 push eax */
  push32((uint32_t)(EAX));
  /* 12832604 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832607 push ecx */
  push32((uint32_t)(ECX));
  /* 12832608 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1283260b push edx */
  push32((uint32_t)(EDX));
  /* 1283260c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1283260f push eax */
  push32((uint32_t)(EAX));
  /* 12832610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832613 push ecx */
  push32((uint32_t)(ECX));
  /* 12832614 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832616 mov edx, dword ptr [0x1284fe04] */
  EDX = (r32((uint32_t)(0x1284fe04)));
  /* 1283261c push edx */
  push32((uint32_t)(EDX));
  /* 1283261d call 0x128326f0 */
  push32(0x12832622u); f_128326f0();
  /* 12832622 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12832628 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283262c jne 0x12832635 */
  if (!C.zf) goto L_12832635;
  /* 1283262e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12832633 jmp 0x1283263b */
  goto L_1283263b;
L_12832635:;
  /* 12832635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832638 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1283263b:;
  /* 1283263b mov esp, ebp */
  ESP = (EBP);
  /* 1283263d pop ebp */
  EBP = (pop32());
  /* 1283263e ret  */
  ESPCHK(0x128325f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x12832640 (174 bytes, 66 insns) */
void f_12832640(void) {
  FTRACE(0x12832640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832640 push ebp */
  push32((uint32_t)(EBP));
  /* 12832641 mov ebp, esp */
  EBP = (ESP);
  /* 12832643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832646 mov eax, dword ptr [0x1284e4ac] */
  EAX = (r32((uint32_t)(0x1284e4ac)));
  /* 1283264b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1283264e:;
  /* 1283264e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832651 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832654 je 0x128326e8 */
  if (C.zf) goto L_128326e8;
  /* 1283265a push 0 */
  push32((uint32_t)(0x0u));
  /* 1283265c push 0 */
  push32((uint32_t)(0x0u));
  /* 1283265e push 0 */
  push32((uint32_t)(0x0u));
  /* 12832660 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832662 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12832664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832667 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12832669 push eax */
  push32((uint32_t)(EAX));
  /* 1283266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1283266c push 1 */
  push32((uint32_t)(0x1u));
  /* 1283266e call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x12832674u);
  /* 12832674 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12832677 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283267b jne 0x12832682 */
  if (!C.zf) goto L_12832682;
  /* 1283267d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832680 jmp 0x128326ea */
  goto L_128326ea;
L_12832682:;
  /* 12832682 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12832684 push 0x1284a874 */
  push32((uint32_t)(0x1284a874u));
  /* 12832689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1283268b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1283268e push ecx */
  push32((uint32_t)(ECX));
  /* 1283268f call 0x12822b40 */
  push32(0x12832694u); f_12822b40();
  /* 12832694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832697 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1283269a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283269e jne 0x128326a5 */
  if (!C.zf) goto L_128326a5;
  /* 128326a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128326a3 jmp 0x128326ea */
  goto L_128326ea;
L_128326a5:;
  /* 128326a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128326a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128326a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128326ac push edx */
  push32((uint32_t)(EDX));
  /* 128326ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128326b0 push eax */
  push32((uint32_t)(EAX));
  /* 128326b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128326b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128326b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128326b8 push edx */
  push32((uint32_t)(EDX));
  /* 128326b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128326bb push 1 */
  push32((uint32_t)(0x1u));
  /* 128326bd call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x128326c3u);
  /* 128326c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128326c5 jne 0x128326cc */
  if (!C.zf) goto L_128326cc;
  /* 128326c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128326ca jmp 0x128326ea */
  goto L_128326ea;
L_128326cc:;
  /* 128326cc push 0 */
  push32((uint32_t)(0x0u));
  /* 128326ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128326d1 push eax */
  push32((uint32_t)(EAX));
  /* 128326d2 call 0x12832b40 */
  push32(0x128326d7u); f_12832b40();
  /* 128326d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128326da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128326dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128326e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128326e3 jmp 0x1283264e */
  goto L_1283264e;
L_128326e8:;
  /* 128326e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128326ea:;
  /* 128326ea mov esp, ebp */
  ESP = (EBP);
  /* 128326ec pop ebp */
  EBP = (pop32());
  /* 128326ed ret  */
  ESPCHK(0x12832640u, _esp0);
  ESP += 4; return;
}

/* FUN_100126f0 @ 0x128326f0 (970 bytes, 340 insns) */
void f_128326f0(void) {
  FTRACE(0x128326f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128326f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128326f1 mov ebp, esp */
  EBP = (ESP);
  /* 128326f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128326f5 push 0x1284a8c8 */
  push32((uint32_t)(0x1284a8c8u));
  /* 128326fa push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 128326ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12832705 push eax */
  push32((uint32_t)(EAX));
  /* 12832706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1283270d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832710 push ebx */
  push32((uint32_t)(EBX));
  /* 12832711 push esi */
  push32((uint32_t)(ESI));
  /* 12832712 push edi */
  push32((uint32_t)(EDI));
  /* 12832713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12832716 cmp dword ptr [0x1284e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283271d jne 0x12832776 */
  if (!C.zf) goto L_12832776;
  /* 1283271f push 1 */
  push32((uint32_t)(0x1u));
  /* 12832721 push 0x12849f24 */
  push32((uint32_t)(0x12849f24u));
  /* 12832726 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832728 push 0x12849f24 */
  push32((uint32_t)(0x12849f24u));
  /* 1283272d push 0 */
  push32((uint32_t)(0x0u));
  /* 1283272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12832731 call dword ptr [0x12850230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850230))), 0x12832737u);
  /* 12832737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832739 je 0x12832747 */
  if (C.zf) goto L_12832747;
  /* 1283273b mov dword ptr [0x1284e7ec], 1 */
  w32((uint32_t)(0x1284e7ec), (0x1u));
  /* 12832745 jmp 0x12832776 */
  goto L_12832776;
L_12832747:;
  /* 12832747 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832749 push 0x12849f20 */
  push32((uint32_t)(0x12849f20u));
  /* 1283274e push 1 */
  push32((uint32_t)(0x1u));
  /* 12832750 push 0x12849f20 */
  push32((uint32_t)(0x12849f20u));
  /* 12832755 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12832759 call dword ptr [0x12850234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850234))), 0x1283275fu);
  /* 1283275f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832761 je 0x1283276f */
  if (C.zf) goto L_1283276f;
  /* 12832763 mov dword ptr [0x1284e7ec], 2 */
  w32((uint32_t)(0x1284e7ec), (0x2u));
  /* 1283276d jmp 0x12832776 */
  goto L_12832776;
L_1283276f:;
  /* 1283276f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832771 jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832776:;
  /* 12832776 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283277a jle 0x1283278f */
  if ((C.zf||C.sf!=C.of)) goto L_1283278f;
  /* 1283277c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1283277f push eax */
  push32((uint32_t)(EAX));
  /* 12832780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832783 push ecx */
  push32((uint32_t)(ECX));
  /* 12832784 call 0x12832af0 */
  push32(0x12832789u); f_12832af0();
  /* 12832789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283278c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1283278f:;
  /* 1283278f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832793 jle 0x128327a8 */
  if ((C.zf||C.sf!=C.of)) goto L_128327a8;
  /* 12832795 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12832798 push edx */
  push32((uint32_t)(EDX));
  /* 12832799 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1283279c push eax */
  push32((uint32_t)(EAX));
  /* 1283279d call 0x12832af0 */
  push32(0x128327a2u); f_12832af0();
  /* 128327a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128327a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_128327a8:;
  /* 128327a8 cmp dword ptr [0x1284e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128327af jne 0x128327d4 */
  if (!C.zf) goto L_128327d4;
  /* 128327b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128327b4 push ecx */
  push32((uint32_t)(ECX));
  /* 128327b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128327b8 push edx */
  push32((uint32_t)(EDX));
  /* 128327b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128327bc push eax */
  push32((uint32_t)(EAX));
  /* 128327bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128327c0 push ecx */
  push32((uint32_t)(ECX));
  /* 128327c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128327c4 push edx */
  push32((uint32_t)(EDX));
  /* 128327c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128327c8 push eax */
  push32((uint32_t)(EAX));
  /* 128327c9 call dword ptr [0x12850234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850234))), 0x128327cfu);
  /* 128327cf jmp 0x12832ad4 */
  goto L_12832ad4;
L_128327d4:;
  /* 128327d4 cmp dword ptr [0x1284e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128327db jne 0x12832ad2 */
  if (!C.zf) goto L_12832ad2;
  /* 128327e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128327e5 jne 0x128327f0 */
  if (!C.zf) goto L_128327f0;
  /* 128327e7 mov ecx, dword ptr [0x1284e698] */
  ECX = (r32((uint32_t)(0x1284e698)));
  /* 128327ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_128327f0:;
  /* 128327f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128327f4 je 0x12832800 */
  if (C.zf) goto L_12832800;
  /* 128327f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128327fa jne 0x1283297c */
  if (!C.zf) goto L_1283297c;
L_12832800:;
  /* 12832800 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12832803 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832806 jne 0x12832812 */
  if (!C.zf) goto L_12832812;
  /* 12832808 mov eax, 2 */
  EAX = (0x2u);
  /* 1283280d jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832812:;
  /* 12832812 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832816 jle 0x12832822 */
  if ((C.zf||C.sf!=C.of)) goto L_12832822;
  /* 12832818 mov eax, 1 */
  EAX = (0x1u);
  /* 1283281d jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832822:;
  /* 12832822 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832826 jle 0x12832832 */
  if ((C.zf||C.sf!=C.of)) goto L_12832832;
  /* 12832828 mov eax, 3 */
  EAX = (0x3u);
  /* 1283282d jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832832:;
  /* 12832832 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12832835 push eax */
  push32((uint32_t)(EAX));
  /* 12832836 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12832839 push ecx */
  push32((uint32_t)(ECX));
  /* 1283283a call dword ptr [0x12850310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850310))), 0x12832840u);
  /* 12832840 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832842 jne 0x1283284b */
  if (!C.zf) goto L_1283284b;
  /* 12832844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832846 jmp 0x12832ad4 */
  goto L_12832ad4;
L_1283284b:;
  /* 1283284b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283284f jne 0x12832857 */
  if (!C.zf) goto L_12832857;
  /* 12832851 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832855 je 0x12832884 */
  if (C.zf) goto L_12832884;
L_12832857:;
  /* 12832857 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283285b jne 0x12832863 */
  if (!C.zf) goto L_12832863;
  /* 1283285d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832861 je 0x12832884 */
  if (C.zf) goto L_12832884;
L_12832863:;
  /* 12832863 push 0x1284a888 */
  push32((uint32_t)(0x1284a888u));
  /* 12832868 push 0 */
  push32((uint32_t)(0x0u));
  /* 1283286a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1283286f push 0x1284a880 */
  push32((uint32_t)(0x1284a880u));
  /* 12832874 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832876 call 0x12821c00 */
  push32(0x1283287bu); f_12821c00();
  /* 1283287b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283287e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832881 jne 0x12832884 */
  if (!C.zf) goto L_12832884;
  /* 12832883 int3  */
  x86_unimpl("int3 @ 0x12832883");
L_12832884:;
  /* 12832884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12832886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832888 jne 0x1283284b */
  if (!C.zf) goto L_1283284b;
  /* 1283288a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283288e jle 0x12832903 */
  if ((C.zf||C.sf!=C.of)) goto L_12832903;
  /* 12832890 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832894 jae 0x128328a0 */
  if (!C.cf) goto L_128328a0;
  /* 12832896 mov eax, 3 */
  EAX = (0x3u);
  /* 1283289b jmp 0x12832ad4 */
  goto L_12832ad4;
L_128328a0:;
  /* 128328a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 128328a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 128328a6 jmp 0x128328b1 */
  goto L_128328b1;
L_128328a8:;
  /* 128328a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128328ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128328ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_128328b1:;
  /* 128328b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 128328b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128328b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128328b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128328ba je 0x128328f9 */
  if (C.zf) goto L_128328f9;
  /* 128328bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128328bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128328c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 128328c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128328c6 je 0x128328f9 */
  if (C.zf) goto L_128328f9;
  /* 128328c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128328cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128328cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128328cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 128328d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128328d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128328d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128328d8 jl 0x128328f7 */
  if ((C.sf!=C.of)) goto L_128328f7;
  /* 128328da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128328dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128328df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128328e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 128328e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128328e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 128328e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128328eb jg 0x128328f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_128328f7;
  /* 128328ed mov eax, 2 */
  EAX = (0x2u);
  /* 128328f2 jmp 0x12832ad4 */
  goto L_12832ad4;
L_128328f7:;
  /* 128328f7 jmp 0x128328a8 */
  goto L_128328a8;
L_128328f9:;
  /* 128328f9 mov eax, 3 */
  EAX = (0x3u);
  /* 128328fe jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832903:;
  /* 12832903 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832907 jle 0x1283297c */
  if ((C.zf||C.sf!=C.of)) goto L_1283297c;
  /* 12832909 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283290d jae 0x12832919 */
  if (!C.cf) goto L_12832919;
  /* 1283290f mov eax, 1 */
  EAX = (0x1u);
  /* 12832914 jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832919:;
  /* 12832919 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1283291c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1283291f jmp 0x1283292a */
  goto L_1283292a;
L_12832921:;
  /* 12832921 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12832924 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832927 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1283292a:;
  /* 1283292a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1283292d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1283292f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12832931 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832933 je 0x12832972 */
  if (C.zf) goto L_12832972;
  /* 12832935 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12832938 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1283293a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1283293d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1283293f je 0x12832972 */
  if (C.zf) goto L_12832972;
  /* 12832941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12832944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832946 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12832948 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1283294b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1283294d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1283294f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832951 jl 0x12832970 */
  if ((C.sf!=C.of)) goto L_12832970;
  /* 12832953 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12832956 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12832958 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1283295a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1283295d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283295f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12832962 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832964 jg 0x12832970 */
  if ((!C.zf&&C.sf==C.of)) goto L_12832970;
  /* 12832966 mov eax, 2 */
  EAX = (0x2u);
  /* 1283296b jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832970:;
  /* 12832970 jmp 0x12832921 */
  goto L_12832921;
L_12832972:;
  /* 12832972 mov eax, 1 */
  EAX = (0x1u);
  /* 12832977 jmp 0x12832ad4 */
  goto L_12832ad4;
L_1283297c:;
  /* 1283297c push 0 */
  push32((uint32_t)(0x0u));
  /* 1283297e push 0 */
  push32((uint32_t)(0x0u));
  /* 12832980 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12832983 push ecx */
  push32((uint32_t)(ECX));
  /* 12832984 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832987 push edx */
  push32((uint32_t)(EDX));
  /* 12832988 push 9 */
  push32((uint32_t)(0x9u));
  /* 1283298a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1283298d push eax */
  push32((uint32_t)(EAX));
  /* 1283298e call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x12832994u);
  /* 12832994 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12832997 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1283299b jne 0x128329a4 */
  if (!C.zf) goto L_128329a4;
  /* 1283299d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1283299f jmp 0x12832ad4 */
  goto L_12832ad4;
L_128329a4:;
  /* 128329a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128329ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128329ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128329b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128329b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128329b5 call 0x12825ce0 */
  push32(0x128329bau); f_12825ce0();
  /* 128329ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 128329bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128329c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 128329c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 128329c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128329cd jmp 0x128329e6 */
  goto L_128329e6;
  /* 128329cf mov eax, 1 */
  EAX = (0x1u);
  /* 128329d4 ret  */
  ESPCHK(0x128326f0u, _esp0);
  ESP += 4; return;
  /* 128329d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128329d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 128329df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128329e6:;
  /* 128329e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128329ea jne 0x128329f3 */
  if (!C.zf) goto L_128329f3;
  /* 128329ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128329ee jmp 0x12832ad4 */
  goto L_12832ad4;
L_128329f3:;
  /* 128329f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128329f6 push edx */
  push32((uint32_t)(EDX));
  /* 128329f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128329fa push eax */
  push32((uint32_t)(EAX));
  /* 128329fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128329fe push ecx */
  push32((uint32_t)(ECX));
  /* 128329ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12832a02 push edx */
  push32((uint32_t)(EDX));
  /* 12832a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12832a05 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12832a08 push eax */
  push32((uint32_t)(EAX));
  /* 12832a09 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x12832a0fu);
  /* 12832a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832a11 jne 0x12832a1a */
  if (!C.zf) goto L_12832a1a;
  /* 12832a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832a15 jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832a1a:;
  /* 12832a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12832a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12832a1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12832a21 push ecx */
  push32((uint32_t)(ECX));
  /* 12832a22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12832a25 push edx */
  push32((uint32_t)(EDX));
  /* 12832a26 push 9 */
  push32((uint32_t)(0x9u));
  /* 12832a28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12832a2b push eax */
  push32((uint32_t)(EAX));
  /* 12832a2c call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x12832a32u);
  /* 12832a32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12832a35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832a39 jne 0x12832a42 */
  if (!C.zf) goto L_12832a42;
  /* 12832a3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832a3d jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832a42:;
  /* 12832a42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12832a49 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832a4c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12832a4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832a51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12832a53 call 0x12825ce0 */
  push32(0x12832a58u); f_12825ce0();
  /* 12832a58 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12832a5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12832a5e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12832a61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12832a64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12832a6b jmp 0x12832a84 */
  goto L_12832a84;
  /* 12832a6d mov eax, 1 */
  EAX = (0x1u);
  /* 12832a72 ret  */
  ESPCHK(0x128326f0u, _esp0);
  ESP += 4; return;
  /* 12832a73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12832a76 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12832a7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12832a84:;
  /* 12832a84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832a88 jne 0x12832a8e */
  if (!C.zf) goto L_12832a8e;
  /* 12832a8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832a8c jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832a8e:;
  /* 12832a8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832a91 push edx */
  push32((uint32_t)(EDX));
  /* 12832a92 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12832a95 push eax */
  push32((uint32_t)(EAX));
  /* 12832a96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12832a99 push ecx */
  push32((uint32_t)(ECX));
  /* 12832a9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12832a9d push edx */
  push32((uint32_t)(EDX));
  /* 12832a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 12832aa0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12832aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12832aa4 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x12832aaau);
  /* 12832aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832aac jne 0x12832ab2 */
  if (!C.zf) goto L_12832ab2;
  /* 12832aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832ab0 jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832ab2:;
  /* 12832ab2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12832ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 12832ab6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12832ab9 push edx */
  push32((uint32_t)(EDX));
  /* 12832aba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12832abd push eax */
  push32((uint32_t)(EAX));
  /* 12832abe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12832ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 12832ac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832ac5 push edx */
  push32((uint32_t)(EDX));
  /* 12832ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832ac9 push eax */
  push32((uint32_t)(EAX));
  /* 12832aca call dword ptr [0x12850230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850230))), 0x12832ad0u);
  /* 12832ad0 jmp 0x12832ad4 */
  goto L_12832ad4;
L_12832ad2:;
  /* 12832ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12832ad4:;
  /* 12832ad4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12832ad7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832ada mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12832ae1 pop edi */
  EDI = (pop32());
  /* 12832ae2 pop esi */
  ESI = (pop32());
  /* 12832ae3 pop ebx */
  EBX = (pop32());
  /* 12832ae4 mov esp, ebp */
  ESP = (EBP);
  /* 12832ae6 pop ebp */
  EBP = (pop32());
  /* 12832ae7 ret  */
  ESPCHK(0x128326f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x12832af0 (80 bytes, 32 insns) */
void f_12832af0(void) {
  FTRACE(0x12832af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12832af1 mov ebp, esp */
  EBP = (ESP);
  /* 12832af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832af6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832af9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12832afc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832aff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12832b02:;
  /* 12832b02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832b05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832b08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832b0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12832b0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832b10 je 0x12832b27 */
  if (C.zf) goto L_12832b27;
  /* 12832b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832b15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12832b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832b1a je 0x12832b27 */
  if (C.zf) goto L_12832b27;
  /* 12832b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832b1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832b22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12832b25 jmp 0x12832b02 */
  goto L_12832b02;
L_12832b27:;
  /* 12832b27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832b2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12832b2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832b2f jne 0x12832b39 */
  if (!C.zf) goto L_12832b39;
  /* 12832b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832b34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832b37 jmp 0x12832b3c */
  goto L_12832b3c;
L_12832b39:;
  /* 12832b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12832b3c:;
  /* 12832b3c mov esp, ebp */
  ESP = (EBP);
  /* 12832b3e pop ebp */
  EBP = (pop32());
  /* 12832b3f ret  */
  ESPCHK(0x12832af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b40 @ 0x12832b40 (736 bytes, 224 insns) */
void f_12832b40(void) {
  FTRACE(0x12832b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12832b41 mov ebp, esp */
  EBP = (ESP);
  /* 12832b43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832b46 push esi */
  push32((uint32_t)(ESI));
  /* 12832b47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832b4b je 0x12832b6c */
  if (C.zf) goto L_12832b6c;
  /* 12832b4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12832b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832b52 push eax */
  push32((uint32_t)(EAX));
  /* 12832b53 call 0x12832f90 */
  push32(0x12832b58u); f_12832f90();
  /* 12832b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832b5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12832b5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832b62 je 0x12832b6c */
  if (C.zf) goto L_12832b6c;
  /* 12832b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832b67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832b6a jne 0x12832b74 */
  if (!C.zf) goto L_12832b74;
L_12832b6c:;
  /* 12832b6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832b6f jmp 0x12832e1b */
  goto L_12832e1b;
L_12832b74:;
  /* 12832b74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12832b77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12832b7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12832b7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832b7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12832b80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12832b83 mov ecx, dword ptr [0x1284e4a4] */
  ECX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832b89 cmp ecx, dword ptr [0x1284e4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284e4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832b8f jne 0x12832ba5 */
  if (!C.zf) goto L_12832ba5;
  /* 12832b91 mov edx, dword ptr [0x1284e4a4] */
  EDX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832b97 push edx */
  push32((uint32_t)(EDX));
  /* 12832b98 call 0x12832ea0 */
  push32(0x12832b9du); f_12832ea0();
  /* 12832b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832ba0 mov dword ptr [0x1284e4a4], eax */
  w32((uint32_t)(0x1284e4a4), (EAX));
L_12832ba5:;
  /* 12832ba5 cmp dword ptr [0x1284e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832bac jne 0x12832c65 */
  if (!C.zf) goto L_12832c65;
  /* 12832bb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832bb6 je 0x12832bd7 */
  if (C.zf) goto L_12832bd7;
  /* 12832bb8 cmp dword ptr [0x1284e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832bbf je 0x12832bd7 */
  if (C.zf) goto L_12832bd7;
  /* 12832bc1 call 0x12832640 */
  push32(0x12832bc6u); f_12832640();
  /* 12832bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832bc8 je 0x12832bd2 */
  if (C.zf) goto L_12832bd2;
  /* 12832bca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832bcd jmp 0x12832e1b */
  goto L_12832e1b;
L_12832bd2:;
  /* 12832bd2 jmp 0x12832c65 */
  goto L_12832c65;
L_12832bd7:;
  /* 12832bd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832bdb je 0x12832be4 */
  if (C.zf) goto L_12832be4;
  /* 12832bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832bdf jmp 0x12832e1b */
  goto L_12832e1b;
L_12832be4:;
  /* 12832be4 cmp dword ptr [0x1284e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832beb jne 0x12832c24 */
  if (!C.zf) goto L_12832c24;
  /* 12832bed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12832bf2 push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12832bfb call 0x12822b40 */
  push32(0x12832c00u); f_12822b40();
  /* 12832c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832c03 mov dword ptr [0x1284e4a4], eax */
  w32((uint32_t)(0x1284e4a4), (EAX));
  /* 12832c08 cmp dword ptr [0x1284e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c0f jne 0x12832c19 */
  if (!C.zf) goto L_12832c19;
  /* 12832c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832c14 jmp 0x12832e1b */
  goto L_12832e1b;
L_12832c19:;
  /* 12832c19 mov eax, dword ptr [0x1284e4a4] */
  EAX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832c1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12832c24:;
  /* 12832c24 cmp dword ptr [0x1284e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c2b jne 0x12832c65 */
  if (!C.zf) goto L_12832c65;
  /* 12832c2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12832c32 push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832c39 push 4 */
  push32((uint32_t)(0x4u));
  /* 12832c3b call 0x12822b40 */
  push32(0x12832c40u); f_12822b40();
  /* 12832c40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832c43 mov dword ptr [0x1284e4ac], eax */
  w32((uint32_t)(0x1284e4ac), (EAX));
  /* 12832c48 cmp dword ptr [0x1284e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c4f jne 0x12832c59 */
  if (!C.zf) goto L_12832c59;
  /* 12832c51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832c54 jmp 0x12832e1b */
  goto L_12832e1b;
L_12832c59:;
  /* 12832c59 mov ecx, dword ptr [0x1284e4ac] */
  ECX = (r32((uint32_t)(0x1284e4ac)));
  /* 12832c5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12832c65:;
  /* 12832c65 mov edx, dword ptr [0x1284e4a4] */
  EDX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832c6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12832c6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12832c71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832c74 push eax */
  push32((uint32_t)(EAX));
  /* 12832c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832c78 push ecx */
  push32((uint32_t)(ECX));
  /* 12832c79 call 0x12832e20 */
  push32(0x12832c7eu); f_12832e20();
  /* 12832c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832c81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12832c84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c88 jl 0x12832d21 */
  if ((C.sf!=C.of)) goto L_12832d21;
  /* 12832c8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832c91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c94 je 0x12832d21 */
  if (C.zf) goto L_12832d21;
  /* 12832c9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832c9e je 0x12832d13 */
  if (C.zf) goto L_12832d13;
  /* 12832ca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832ca2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832ca5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832ca8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12832cab push edx */
  push32((uint32_t)(EDX));
  /* 12832cac call 0x128235d0 */
  push32(0x12832cb1u); f_128235d0();
  /* 12832cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832cb4 jmp 0x12832cbf */
  goto L_12832cbf;
L_12832cb6:;
  /* 12832cb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832cb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832cbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12832cbf:;
  /* 12832cbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832cc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832cc5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832cc9 je 0x12832ce0 */
  if (C.zf) goto L_12832ce0;
  /* 12832ccb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832cce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832cd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832cd4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12832cd7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12832cdb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12832cde jmp 0x12832cb6 */
  goto L_12832cb6;
L_12832ce0:;
  /* 12832ce0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12832ce5 push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832cea push 2 */
  push32((uint32_t)(0x2u));
  /* 12832cec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832cef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12832cf2 push eax */
  push32((uint32_t)(EAX));
  /* 12832cf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12832cf7 call 0x12822fd0 */
  push32(0x12832cfcu); f_12822fd0();
  /* 12832cfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832cff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12832d02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832d06 je 0x12832d11 */
  if (C.zf) goto L_12832d11;
  /* 12832d08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d0b mov dword ptr [0x1284e4a4], edx */
  w32((uint32_t)(0x1284e4a4), (EDX));
L_12832d11:;
  /* 12832d11 jmp 0x12832d1f */
  goto L_12832d1f;
L_12832d13:;
  /* 12832d13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832d16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832d1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12832d1f:;
  /* 12832d1f jmp 0x12832d94 */
  goto L_12832d94;
L_12832d21:;
  /* 12832d21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832d25 jne 0x12832d8d */
  if (!C.zf) goto L_12832d8d;
  /* 12832d27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832d2b jge 0x12832d35 */
  if ((C.sf==C.of)) goto L_12832d35;
  /* 12832d2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832d30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12832d32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12832d35:;
  /* 12832d35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12832d3a push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12832d41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832d44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12832d4b push edx */
  push32((uint32_t)(EDX));
  /* 12832d4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d4f push eax */
  push32((uint32_t)(EAX));
  /* 12832d50 call 0x12822fd0 */
  push32(0x12832d55u); f_12822fd0();
  /* 12832d55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832d58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12832d5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832d5f jne 0x12832d69 */
  if (!C.zf) goto L_12832d69;
  /* 12832d61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832d64 jmp 0x12832e1b */
  goto L_12832e1b;
L_12832d69:;
  /* 12832d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832d6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832d72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12832d75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832d78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12832d83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832d86 mov dword ptr [0x1284e4a4], eax */
  w32((uint32_t)(0x1284e4a4), (EAX));
  /* 12832d8b jmp 0x12832d94 */
  goto L_12832d94;
L_12832d8d:;
  /* 12832d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832d8f jmp 0x12832e1b */
  goto L_12832e1b;
L_12832d94:;
  /* 12832d94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832d98 je 0x12832e19 */
  if (C.zf) goto L_12832e19;
  /* 12832d9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12832d9f push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832da4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832da9 push ecx */
  push32((uint32_t)(ECX));
  /* 12832daa call 0x12825970 */
  push32(0x12832dafu); f_12825970();
  /* 12832daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832db2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832db5 push eax */
  push32((uint32_t)(EAX));
  /* 12832db6 call 0x12822b40 */
  push32(0x12832dbbu); f_12822b40();
  /* 12832dbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832dbe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12832dc1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832dc5 je 0x12832e19 */
  if (C.zf) goto L_12832e19;
  /* 12832dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832dca push edx */
  push32((uint32_t)(EDX));
  /* 12832dcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832dce push eax */
  push32((uint32_t)(EAX));
  /* 12832dcf call 0x12825af0 */
  push32(0x12832dd4u); f_12825af0();
  /* 12832dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832dd7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12832dda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832ddd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832de0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832de2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12832de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832de8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12832deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832df1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12832df4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12832df7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12832df9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832dfb not edx */
  EDX = (~(EDX));
  /* 12832dfd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12832e00 push edx */
  push32((uint32_t)(EDX));
  /* 12832e01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832e04 push eax */
  push32((uint32_t)(EAX));
  /* 12832e05 call dword ptr [0x1285022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285022c))), 0x12832e0bu);
  /* 12832e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12832e0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832e10 push ecx */
  push32((uint32_t)(ECX));
  /* 12832e11 call 0x128235d0 */
  push32(0x12832e16u); f_128235d0();
  /* 12832e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12832e19:;
  /* 12832e19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12832e1b:;
  /* 12832e1b pop esi */
  ESI = (pop32());
  /* 12832e1c mov esp, ebp */
  ESP = (EBP);
  /* 12832e1e pop ebp */
  EBP = (pop32());
  /* 12832e1f ret  */
  ESPCHK(0x12832b40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12832e20 (124 bytes, 47 insns) */
void f_12832e20(void) {
  FTRACE(0x12832e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12832e21 mov ebp, esp */
  EBP = (ESP);
  /* 12832e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12832e24 mov eax, dword ptr [0x1284e4a4] */
  EAX = (r32((uint32_t)(0x1284e4a4)));
  /* 12832e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12832e2c jmp 0x12832e37 */
  goto L_12832e37;
L_12832e2e:;
  /* 12832e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12832e37:;
  /* 12832e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832e3d je 0x12832e8a */
  if (C.zf) goto L_12832e8a;
  /* 12832e3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832e42 push eax */
  push32((uint32_t)(EAX));
  /* 12832e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12832e48 push edx */
  push32((uint32_t)(EDX));
  /* 12832e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832e4c push eax */
  push32((uint32_t)(EAX));
  /* 12832e4d call 0x128325f0 */
  push32(0x12832e52u); f_128325f0();
  /* 12832e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12832e57 jne 0x12832e88 */
  if (!C.zf) goto L_12832e88;
  /* 12832e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12832e5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832e61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12832e65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832e68 je 0x12832e7a */
  if (C.zf) goto L_12832e7a;
  /* 12832e6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12832e6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832e72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12832e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832e78 jne 0x12832e88 */
  if (!C.zf) goto L_12832e88;
L_12832e7a:;
  /* 12832e7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e7d sub eax, dword ptr [0x1284e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832e83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12832e86 jmp 0x12832e98 */
  goto L_12832e98;
L_12832e88:;
  /* 12832e88 jmp 0x12832e2e */
  goto L_12832e2e;
L_12832e8a:;
  /* 12832e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832e8d sub eax, dword ptr [0x1284e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832e93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12832e96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12832e98:;
  /* 12832e98 mov esp, ebp */
  ESP = (EBP);
  /* 12832e9a pop ebp */
  EBP = (pop32());
  /* 12832e9b ret  */
  ESPCHK(0x12832e20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12832ea0 (238 bytes, 80 insns) */
void f_12832ea0(void) {
  FTRACE(0x12832ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12832ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12832ea3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12832ea6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12832ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832eb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12832eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832eb7 jne 0x12832ec0 */
  if (!C.zf) goto L_12832ec0;
  /* 12832eb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12832ebb jmp 0x12832f8a */
  goto L_12832f8a;
L_12832ec0:;
  /* 12832ec0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832ec3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12832ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832ec8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832ecb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12832ece test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832ed0 je 0x12832edd */
  if (C.zf) goto L_12832edd;
  /* 12832ed2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832ed8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12832edb jmp 0x12832ec0 */
  goto L_12832ec0;
L_12832edd:;
  /* 12832edd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12832ee2 push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832ee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12832ee9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12832eec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12832ef3 push eax */
  push32((uint32_t)(EAX));
  /* 12832ef4 call 0x12822b40 */
  push32(0x12832ef9u); f_12822b40();
  /* 12832ef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832efc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12832eff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12832f05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832f09 jne 0x12832f15 */
  if (!C.zf) goto L_12832f15;
  /* 12832f0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12832f0d call 0x12821ab0 */
  push32(0x12832f12u); f_12821ab0();
  /* 12832f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12832f15:;
  /* 12832f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832f18 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12832f1b:;
  /* 12832f1b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832f1e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832f21 je 0x12832f7e */
  if (C.zf) goto L_12832f7e;
  /* 12832f23 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12832f28 push 0x1284a8e0 */
  push32((uint32_t)(0x1284a8e0u));
  /* 12832f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12832f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832f32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12832f34 push edx */
  push32((uint32_t)(EDX));
  /* 12832f35 call 0x12825970 */
  push32(0x12832f3au); f_12825970();
  /* 12832f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832f3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832f40 push eax */
  push32((uint32_t)(EAX));
  /* 12832f41 call 0x12822b40 */
  push32(0x12832f46u); f_12822b40();
  /* 12832f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f4c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12832f4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832f54 je 0x12832f6a */
  if (C.zf) goto L_12832f6a;
  /* 12832f56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832f59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12832f5b push ecx */
  push32((uint32_t)(ECX));
  /* 12832f5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f5f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12832f61 push eax */
  push32((uint32_t)(EAX));
  /* 12832f62 call 0x12825af0 */
  push32(0x12832f67u); f_12825af0();
  /* 12832f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12832f6a:;
  /* 12832f6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12832f6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832f70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12832f73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f76 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832f79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12832f7c jmp 0x12832f1b */
  goto L_12832f1b;
L_12832f7e:;
  /* 12832f7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12832f81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12832f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12832f8a:;
  /* 12832f8a mov esp, ebp */
  ESP = (EBP);
  /* 12832f8c pop ebp */
  EBP = (pop32());
  /* 12832f8d ret  */
  ESPCHK(0x12832ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x12832f90 (237 bytes, 81 insns) */
void f_12832f90(void) {
  FTRACE(0x12832f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12832f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12832f91 mov ebp, esp */
  EBP = (ESP);
  /* 12832f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12832f94 cmp dword ptr [0x1284fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12832f9b jne 0x12832fb2 */
  if (!C.zf) goto L_12832fb2;
  /* 12832f9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12832fa0 push eax */
  push32((uint32_t)(EAX));
  /* 12832fa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12832fa5 call 0x12833090 */
  push32(0x12832faau); f_12833090();
  /* 12832faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832fad jmp 0x12833079 */
  goto L_12833079;
L_12832fb2:;
  /* 12832fb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12832fb4 call 0x12826540 */
  push32(0x12832fb9u); f_12826540();
  /* 12832fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12832fbc jmp 0x12832fc7 */
  goto L_12832fc7;
L_12832fbe:;
  /* 12832fbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832fc4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12832fc7:;
  /* 12832fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832fca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12832fce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12832fd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832fd5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12832fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12832fdd je 0x1283305b */
  if (C.zf) goto L_1283305b;
  /* 12832fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12832fe2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12832fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12832fe9 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 12832fef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12832ff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12832ff4 je 0x12833046 */
  if (C.zf) goto L_12833046;
  /* 12832ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12832ff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12832ffc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12832fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12833002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12833004 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12833006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12833008 jne 0x12833018 */
  if (!C.zf) goto L_12833018;
  /* 1283300a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1283300c call 0x128265e0 */
  push32(0x12833011u); f_128265e0();
  /* 12833011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12833014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12833016 jmp 0x12833079 */
  goto L_12833079;
L_12833018:;
  /* 12833018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1283301b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12833021 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12833024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12833027 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12833029 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1283302b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1283302d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12833030 jne 0x12833044 */
  if (!C.zf) goto L_12833044;
  /* 12833032 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12833034 call 0x128265e0 */
  push32(0x12833039u); f_128265e0();
  /* 12833039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1283303c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1283303f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12833042 jmp 0x12833079 */
  goto L_12833079;
L_12833044:;
  /* 12833044 jmp 0x12833056 */
  goto L_12833056;
L_12833046:;
  /* 12833046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12833049 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1283304f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12833052 jne 0x12833056 */
  if (!C.zf) goto L_12833056;
  /* 12833054 jmp 0x1283305b */
  goto L_1283305b;
L_12833056:;
  /* 12833056 jmp 0x12832fbe */
  goto L_12832fbe;
L_1283305b:;
  /* 1283305b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1283305d call 0x128265e0 */
  push32(0x12833062u); f_128265e0();
  /* 12833062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12833065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12833068 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1283306d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12833070 jne 0x12833077 */
  if (!C.zf) goto L_12833077;
  /* 12833072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12833075 jmp 0x12833079 */
  goto L_12833079;
L_12833077:;
  /* 12833077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12833079:;
  /* 12833079 mov esp, ebp */
  ESP = (EBP);
  /* 1283307b pop ebp */
  EBP = (pop32());
  /* 1283307c ret  */
  ESPCHK(0x12832f90u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12833090 (193 bytes, 87 insns) */
void f_12833090(void) {
  FTRACE(0x12833090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12833090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12833092 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12833096 push ebx */
  push32((uint32_t)(EBX));
  /* 12833097 mov ebx, eax */
  EBX = (EAX);
  /* 12833099 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1283309c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 128330a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 128330a6 je 0x128330bb */
  if (C.zf) goto L_128330bb;
L_128330a8:;
  /* 128330a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 128330aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 128330ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128330ad je 0x12833080 */
  if (C.zf) { jmp_ind(0x12833080u); return; }
  /* 128330af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 128330b1 je 0x12833104 */
  if (C.zf) goto L_12833104;
  /* 128330b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 128330b9 jne 0x128330a8 */
  if (!C.zf) goto L_128330a8;
L_128330bb:;
  /* 128330bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 128330bd push edi */
  push32((uint32_t)(EDI));
  /* 128330be mov eax, ebx */
  EAX = (EBX);
  /* 128330c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 128330c3 push esi */
  push32((uint32_t)(ESI));
  /* 128330c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_128330c6:;
  /* 128330c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 128330c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 128330cd mov eax, ecx */
  EAX = (ECX);
  /* 128330cf mov esi, edi */
  ESI = (EDI);
  /* 128330d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 128330d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128330d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 128330d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128330da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128330dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 128330df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 128330e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128330e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 128330ea jne 0x12833108 */
  if (!C.zf) goto L_12833108;
  /* 128330ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 128330f1 je 0x128330c6 */
  if (C.zf) goto L_128330c6;
  /* 128330f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 128330f8 jne 0x12833102 */
  if (!C.zf) goto L_12833102;
  /* 128330fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12833100 jne 0x128330c6 */
  if (!C.zf) goto L_128330c6;
L_12833102:;
  /* 12833102 pop esi */
  ESI = (pop32());
  /* 12833103 pop edi */
  EDI = (pop32());
L_12833104:;
  /* 12833104 pop ebx */
  EBX = (pop32());
  /* 12833105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12833107 ret  */
  ESPCHK(0x12833090u, _esp0);
  ESP += 4; return;
L_12833108:;
  /* 12833108 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1283310b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1283310d je 0x12833145 */
  if (C.zf) goto L_12833145;
  /* 1283310f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12833111 je 0x12833102 */
  if (C.zf) goto L_12833102;
  /* 12833113 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12833115 je 0x1283313e */
  if (C.zf) goto L_1283313e;
  /* 12833117 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12833119 je 0x12833102 */
  if (C.zf) goto L_12833102;
  /* 1283311b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1283311e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12833120 je 0x12833137 */
  if (C.zf) goto L_12833137;
  /* 12833122 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12833124 je 0x12833102 */
  if (C.zf) goto L_12833102;
  /* 12833126 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12833128 je 0x12833130 */
  if (C.zf) goto L_12833130;
  /* 1283312a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1283312c je 0x12833102 */
  if (C.zf) goto L_12833102;
  /* 1283312e jmp 0x128330c6 */
  goto L_128330c6;
L_12833130:;
  /* 12833130 pop esi */
  ESI = (pop32());
  /* 12833131 pop edi */
  EDI = (pop32());
  /* 12833132 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12833135 pop ebx */
  EBX = (pop32());
  /* 12833136 ret  */
  ESPCHK(0x12833090u, _esp0);
  ESP += 4; return;
L_12833137:;
  /* 12833137 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1283313a pop esi */
  ESI = (pop32());
  /* 1283313b pop edi */
  EDI = (pop32());
  /* 1283313c pop ebx */
  EBX = (pop32());
  /* 1283313d ret  */
  ESPCHK(0x12833090u, _esp0);
  ESP += 4; return;
L_1283313e:;
  /* 1283313e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12833141 pop esi */
  ESI = (pop32());
  /* 12833142 pop edi */
  EDI = (pop32());
  /* 12833143 pop ebx */
  EBX = (pop32());
  /* 12833144 ret  */
  ESPCHK(0x12833090u, _esp0);
  ESP += 4; return;
L_12833145:;
  /* 12833145 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12833148 pop esi */
  ESI = (pop32());
  /* 12833149 pop edi */
  EDI = (pop32());
  /* 1283314a pop ebx */
  EBX = (pop32());
  /* 1283314b ret  */
  ESPCHK(0x12833090u, _esp0);
  ESP += 4; return;
  /* 1283314c jmp dword ptr [0x12850254] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12850254)))); return;
}

/* RtlUnwind @ 0x1283329c (6 bytes, 1 insns) */
void f_1283329c(void) {
  FTRACE(0x1283329cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1283329c jmp dword ptr [0x12850330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12850330)))); return;
}

