#include "recomp.h"

/* __close_lk @ 0x1294f750 (170 bytes, 59 insns) */
void f_1294f750(void) {
  FTRACE(0x1294f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f750 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f751 mov ebp, esp */
  EBP = (ESP);
  /* 1294f753 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f754 push esi */
  push32((uint32_t)(ESI));
  /* 1294f755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f758 push eax */
  push32((uint32_t)(EAX));
  /* 1294f759 call 0x1294c0c0 */
  push32(0x1294f75eu); f_1294c0c0();
  /* 1294f75e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f761 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f764 je 0x1294f7a3 */
  if (C.zf) goto L_1294f7a3;
  /* 1294f766 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f76a je 0x1294f772 */
  if (C.zf) goto L_1294f772;
  /* 1294f76c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f770 jne 0x1294f78c */
  if (!C.zf) goto L_1294f78c;
L_1294f772:;
  /* 1294f772 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294f774 call 0x1294c0c0 */
  push32(0x1294f779u); f_1294c0c0();
  /* 1294f779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f77c mov esi, eax */
  ESI = (EAX);
  /* 1294f77e push 2 */
  push32((uint32_t)(0x2u));
  /* 1294f780 call 0x1294c0c0 */
  push32(0x1294f785u); f_1294c0c0();
  /* 1294f785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f788 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f78a je 0x1294f7a3 */
  if (C.zf) goto L_1294f7a3;
L_1294f78c:;
  /* 1294f78c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f78f push ecx */
  push32((uint32_t)(ECX));
  /* 1294f790 call 0x1294c0c0 */
  push32(0x1294f795u); f_1294c0c0();
  /* 1294f795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f798 push eax */
  push32((uint32_t)(EAX));
  /* 1294f799 call dword ptr [0x12970240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970240))), 0x1294f79fu);
  /* 1294f79f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f7a1 je 0x1294f7ac */
  if (C.zf) goto L_1294f7ac;
L_1294f7a3:;
  /* 1294f7a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294f7aa jmp 0x1294f7b5 */
  goto L_1294f7b5;
L_1294f7ac:;
  /* 1294f7ac call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294f7b2u);
  /* 1294f7b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294f7b5:;
  /* 1294f7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1294f7b9 call 0x1294bfe0 */
  push32(0x1294f7beu); f_1294bfe0();
  /* 1294f7be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f7c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f7c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294f7c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f7ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294f7cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f7d0 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294f7d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1294f7dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f7e0 je 0x1294f7f3 */
  if (C.zf) goto L_1294f7f3;
  /* 1294f7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f7e5 push eax */
  push32((uint32_t)(EAX));
  /* 1294f7e6 call 0x1294a980 */
  push32(0x1294f7ebu); f_1294a980();
  /* 1294f7eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f7ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f7f1 jmp 0x1294f7f5 */
  goto L_1294f7f5;
L_1294f7f3:;
  /* 1294f7f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294f7f5:;
  /* 1294f7f5 pop esi */
  ESI = (pop32());
  /* 1294f7f6 mov esp, ebp */
  ESP = (EBP);
  /* 1294f7f8 pop ebp */
  EBP = (pop32());
  /* 1294f7f9 ret  */
  ESPCHK(0x1294f750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x1294f800 (146 bytes, 52 insns) */
void f_1294f800(void) {
  FTRACE(0x1294f800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f800 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f801 mov ebp, esp */
  EBP = (ESP);
  /* 1294f803 push ebx */
  push32((uint32_t)(EBX));
  /* 1294f804 push esi */
  push32((uint32_t)(ESI));
  /* 1294f805 push edi */
  push32((uint32_t)(EDI));
L_1294f806:;
  /* 1294f806 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f80a jne 0x1294f82a */
  if (!C.zf) goto L_1294f82a;
  /* 1294f80c push 0x12969fe0 */
  push32((uint32_t)(0x12969fe0u));
  /* 1294f811 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294f813 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1294f815 push 0x1296a6a8 */
  push32((uint32_t)(0x1296a6a8u));
  /* 1294f81a push 2 */
  push32((uint32_t)(0x2u));
  /* 1294f81c call 0x12941c10 */
  push32(0x1294f821u); f_12941c10();
  /* 1294f821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f824 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f827 jne 0x1294f82a */
  if (!C.zf) goto L_1294f82a;
  /* 1294f829 int3  */
  x86_unimpl("int3 @ 0x1294f829");
L_1294f82a:;
  /* 1294f82a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f82c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f82e jne 0x1294f806 */
  if (!C.zf) goto L_1294f806;
  /* 1294f830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f833 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294f836 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1294f83c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294f83e je 0x1294f88d */
  if (C.zf) goto L_1294f88d;
  /* 1294f840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f843 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294f846 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1294f849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294f84b je 0x1294f88d */
  if (C.zf) goto L_1294f88d;
  /* 1294f84d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294f84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f852 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1294f855 push eax */
  push32((uint32_t)(EAX));
  /* 1294f856 call 0x129435e0 */
  push32(0x1294f85bu); f_129435e0();
  /* 1294f85b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f861 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294f864 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1294f86a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f86d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1294f870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f873 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1294f879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f87c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1294f883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f886 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1294f88d:;
  /* 1294f88d pop edi */
  EDI = (pop32());
  /* 1294f88e pop esi */
  ESI = (pop32());
  /* 1294f88f pop ebx */
  EBX = (pop32());
  /* 1294f890 pop ebp */
  EBP = (pop32());
  /* 1294f891 ret  */
  ESPCHK(0x1294f800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x1294f8a0 (289 bytes, 97 insns) */
void f_1294f8a0(void) {
  FTRACE(0x1294f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1294f8a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f8a6 push esi */
  push32((uint32_t)(ESI));
  /* 1294f8a7 mov eax, dword ptr [0x1296dc98] */
  EAX = (r32((uint32_t)(0x1296dc98)));
  /* 1294f8ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294f8af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294f8b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294f8bd jmp 0x1294f8c8 */
  goto L_1294f8c8;
L_1294f8bf:;
  /* 1294f8bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f8c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f8c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1294f8c8:;
  /* 1294f8c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f8cc jae 0x1294f901 */
  if (!C.cf) goto L_1294f901;
  /* 1294f8ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f8d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f8d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294f8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f8d8 call 0x12945980 */
  push32(0x1294f8ddu); f_12945980();
  /* 1294f8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f8e0 mov esi, eax */
  ESI = (EAX);
  /* 1294f8e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f8e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f8e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1294f8ec push ecx */
  push32((uint32_t)(ECX));
  /* 1294f8ed call 0x12945980 */
  push32(0x1294f8f2u); f_12945980();
  /* 1294f8f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f8f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f8f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1294f8fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294f8ff jmp 0x1294f8bf */
  goto L_1294f8bf;
L_1294f901:;
  /* 1294f901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f907 push eax */
  push32((uint32_t)(EAX));
  /* 1294f908 call 0x12942b30 */
  push32(0x1294f90du); f_12942b30();
  /* 1294f90d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294f913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f917 je 0x1294f9b9 */
  if (C.zf) goto L_1294f9b9;
  /* 1294f91d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f920 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294f923 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294f92a jmp 0x1294f935 */
  goto L_1294f935;
L_1294f92c:;
  /* 1294f92c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f92f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f932 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1294f935:;
  /* 1294f935 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f939 jae 0x1294f9aa */
  if (!C.cf) goto L_1294f9aa;
  /* 1294f93b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f93e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1294f941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f944 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f947 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294f94a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f94d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f950 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294f953 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f954 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f957 push edx */
  push32((uint32_t)(EDX));
  /* 1294f958 call 0x12945b00 */
  push32(0x1294f95du); f_12945b00();
  /* 1294f95d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f960 push eax */
  push32((uint32_t)(EAX));
  /* 1294f961 call 0x12945980 */
  push32(0x1294f966u); f_12945980();
  /* 1294f966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f969 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f96c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f96e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294f971 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f974 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1294f977 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f97a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f97d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294f980 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f983 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f986 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1294f98a push eax */
  push32((uint32_t)(EAX));
  /* 1294f98b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f98e push ecx */
  push32((uint32_t)(ECX));
  /* 1294f98f call 0x12945b00 */
  push32(0x1294f994u); f_12945b00();
  /* 1294f994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f997 push eax */
  push32((uint32_t)(EAX));
  /* 1294f998 call 0x12945980 */
  push32(0x1294f99du); f_12945980();
  /* 1294f99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f9a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f9a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f9a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294f9a8 jmp 0x1294f92c */
  goto L_1294f92c;
L_1294f9aa:;
  /* 1294f9aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f9ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1294f9b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294f9b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f9b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1294f9b9:;
  /* 1294f9b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f9bc pop esi */
  ESI = (pop32());
  /* 1294f9bd mov esp, ebp */
  ESP = (EBP);
  /* 1294f9bf pop ebp */
  EBP = (pop32());
  /* 1294f9c0 ret  */
  ESPCHK(0x1294f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9d0 @ 0x1294f9d0 (291 bytes, 97 insns) */
void f_1294f9d0(void) {
  FTRACE(0x1294f9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294f9d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f9d6 push esi */
  push32((uint32_t)(ESI));
  /* 1294f9d7 mov eax, dword ptr [0x1296dc98] */
  EAX = (r32((uint32_t)(0x1296dc98)));
  /* 1294f9dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294f9df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294f9e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294f9ed jmp 0x1294f9f8 */
  goto L_1294f9f8;
L_1294f9ef:;
  /* 1294f9ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f9f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f9f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1294f9f8:;
  /* 1294f9f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f9fc jae 0x1294fa32 */
  if (!C.cf) goto L_1294fa32;
  /* 1294f9fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fa01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fa04 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1294fa08 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fa09 call 0x12945980 */
  push32(0x1294fa0eu); f_12945980();
  /* 1294fa0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa11 mov esi, eax */
  ESI = (EAX);
  /* 1294fa13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fa16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fa19 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1294fa1d push ecx */
  push32((uint32_t)(ECX));
  /* 1294fa1e call 0x12945980 */
  push32(0x1294fa23u); f_12945980();
  /* 1294fa23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa26 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa29 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1294fa2d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294fa30 jmp 0x1294f9ef */
  goto L_1294f9ef;
L_1294fa32:;
  /* 1294fa32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294fa35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa38 push eax */
  push32((uint32_t)(EAX));
  /* 1294fa39 call 0x12942b30 */
  push32(0x1294fa3eu); f_12942b30();
  /* 1294fa3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294fa44 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fa48 je 0x1294faeb */
  if (C.zf) goto L_1294faeb;
  /* 1294fa4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294fa51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294fa54 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294fa5b jmp 0x1294fa66 */
  goto L_1294fa66;
L_1294fa5d:;
  /* 1294fa5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fa60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1294fa66:;
  /* 1294fa66 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fa6a jae 0x1294fadc */
  if (!C.cf) goto L_1294fadc;
  /* 1294fa6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fa6f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1294fa72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fa75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294fa7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fa7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fa81 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1294fa85 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fa86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fa89 push edx */
  push32((uint32_t)(EDX));
  /* 1294fa8a call 0x12945b00 */
  push32(0x1294fa8fu); f_12945b00();
  /* 1294fa8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa92 push eax */
  push32((uint32_t)(EAX));
  /* 1294fa93 call 0x12945980 */
  push32(0x1294fa98u); f_12945980();
  /* 1294fa98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fa9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fa9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294faa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294faa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294faa6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1294faa9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294faac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294faaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294fab2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fab8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1294fabc push eax */
  push32((uint32_t)(EAX));
  /* 1294fabd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fac0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fac1 call 0x12945b00 */
  push32(0x1294fac6u); f_12945b00();
  /* 1294fac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fac9 push eax */
  push32((uint32_t)(EAX));
  /* 1294faca call 0x12945980 */
  push32(0x1294facfu); f_12945980();
  /* 1294facf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fad2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fad5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fad7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fada jmp 0x1294fa5d */
  goto L_1294fa5d;
L_1294fadc:;
  /* 1294fadc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fadf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1294fae2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fae8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1294faeb:;
  /* 1294faeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294faee pop esi */
  ESI = (pop32());
  /* 1294faef mov esp, ebp */
  ESP = (EBP);
  /* 1294faf1 pop ebp */
  EBP = (pop32());
  /* 1294faf2 ret  */
  ESPCHK(0x1294f9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x1294fb00 (878 bytes, 273 insns) */
void f_1294fb00(void) {
  FTRACE(0x1294fb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294fb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1294fb01 mov ebp, esp */
  EBP = (ESP);
  /* 1294fb03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294fb06 push esi */
  push32((uint32_t)(ESI));
  /* 1294fb07 mov eax, dword ptr [0x1296dc98] */
  EAX = (r32((uint32_t)(0x1296dc98)));
  /* 1294fb0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294fb0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294fb16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294fb1d jmp 0x1294fb28 */
  goto L_1294fb28;
L_1294fb1f:;
  /* 1294fb1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1294fb28:;
  /* 1294fb28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fb2c jae 0x1294fb61 */
  if (!C.cf) goto L_1294fb61;
  /* 1294fb2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fb34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294fb37 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fb38 call 0x12945980 */
  push32(0x1294fb3du); f_12945980();
  /* 1294fb3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb40 mov esi, eax */
  ESI = (EAX);
  /* 1294fb42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fb48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1294fb4c push ecx */
  push32((uint32_t)(ECX));
  /* 1294fb4d call 0x12945980 */
  push32(0x1294fb52u); f_12945980();
  /* 1294fb52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1294fb5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294fb5f jmp 0x1294fb1f */
  goto L_1294fb1f;
L_1294fb61:;
  /* 1294fb61 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294fb68 jmp 0x1294fb73 */
  goto L_1294fb73;
L_1294fb6a:;
  /* 1294fb6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1294fb73:;
  /* 1294fb73 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fb77 jae 0x1294fbad */
  if (!C.cf) goto L_1294fbad;
  /* 1294fb79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fb7f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1294fb83 push eax */
  push32((uint32_t)(EAX));
  /* 1294fb84 call 0x12945980 */
  push32(0x1294fb89u); f_12945980();
  /* 1294fb89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fb8c mov esi, eax */
  ESI = (EAX);
  /* 1294fb8e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fb91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fb94 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1294fb98 push eax */
  push32((uint32_t)(EAX));
  /* 1294fb99 call 0x12945980 */
  push32(0x1294fb9eu); f_12945980();
  /* 1294fb9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fba1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fba4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1294fba8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294fbab jmp 0x1294fb6a */
  goto L_1294fb6a;
L_1294fbad:;
  /* 1294fbad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fbb0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1294fbb6 push eax */
  push32((uint32_t)(EAX));
  /* 1294fbb7 call 0x12945980 */
  push32(0x1294fbbcu); f_12945980();
  /* 1294fbbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fbbf mov esi, eax */
  ESI = (EAX);
  /* 1294fbc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fbc4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1294fbca push edx */
  push32((uint32_t)(EDX));
  /* 1294fbcb call 0x12945980 */
  push32(0x1294fbd0u); f_12945980();
  /* 1294fbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fbd3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fbd6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1294fbda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294fbdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fbe0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1294fbe6 push edx */
  push32((uint32_t)(EDX));
  /* 1294fbe7 call 0x12945980 */
  push32(0x1294fbecu); f_12945980();
  /* 1294fbec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fbef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294fbf2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fbf6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294fbf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fbfc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1294fc02 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fc03 call 0x12945980 */
  push32(0x1294fc08u); f_12945980();
  /* 1294fc08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294fc0e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1294fc12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294fc15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fc18 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1294fc1e push edx */
  push32((uint32_t)(EDX));
  /* 1294fc1f call 0x12945980 */
  push32(0x1294fc24u); f_12945980();
  /* 1294fc24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294fc2a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fc2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294fc31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294fc34 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc39 push eax */
  push32((uint32_t)(EAX));
  /* 1294fc3a call 0x12942b30 */
  push32(0x1294fc3fu); f_12942b30();
  /* 1294fc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294fc45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fc49 je 0x1294fe66 */
  if (C.zf) goto L_1294fe66;
  /* 1294fc4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294fc52 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1294fc55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294fc58 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc5e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fc61 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1294fc66 mov eax, dword ptr [0x1296dc98] */
  EAX = (r32((uint32_t)(0x1296dc98)));
  /* 1294fc6b push eax */
  push32((uint32_t)(EAX));
  /* 1294fc6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294fc6f push ecx */
  push32((uint32_t)(ECX));
  /* 1294fc70 call 0x12949430 */
  push32(0x1294fc75u); f_12949430();
  /* 1294fc75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294fc7f jmp 0x1294fc8a */
  goto L_1294fc8a;
L_1294fc81:;
  /* 1294fc81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fc84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fc87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1294fc8a:;
  /* 1294fc8a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fc8e jae 0x1294fcfe */
  if (!C.cf) goto L_1294fcfe;
  /* 1294fc90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fc93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fc96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fc99 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1294fc9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fc9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fca2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294fca5 push edx */
  push32((uint32_t)(EDX));
  /* 1294fca6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fca9 push eax */
  push32((uint32_t)(EAX));
  /* 1294fcaa call 0x12945b00 */
  push32(0x1294fcafu); f_12945b00();
  /* 1294fcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fcb2 push eax */
  push32((uint32_t)(EAX));
  /* 1294fcb3 call 0x12945980 */
  push32(0x1294fcb8u); f_12945980();
  /* 1294fcb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fcbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fcbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fcc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fcc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fcc8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fccb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fcce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1294fcd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fcd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fcd8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1294fcdc push edx */
  push32((uint32_t)(EDX));
  /* 1294fcdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fce0 push eax */
  push32((uint32_t)(EAX));
  /* 1294fce1 call 0x12945b00 */
  push32(0x1294fce6u); f_12945b00();
  /* 1294fce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fce9 push eax */
  push32((uint32_t)(EAX));
  /* 1294fcea call 0x12945980 */
  push32(0x1294fcefu); f_12945980();
  /* 1294fcef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fcf2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fcf5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fcf9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fcfc jmp 0x1294fc81 */
  goto L_1294fc81;
L_1294fcfe:;
  /* 1294fcfe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294fd05 jmp 0x1294fd10 */
  goto L_1294fd10;
L_1294fd07:;
  /* 1294fd07 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fd0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fd0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1294fd10:;
  /* 1294fd10 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fd14 jae 0x1294fd86 */
  if (!C.cf) goto L_1294fd86;
  /* 1294fd16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fd19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fd1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd1f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1294fd23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fd26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fd29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1294fd2d push eax */
  push32((uint32_t)(EAX));
  /* 1294fd2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd31 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fd32 call 0x12945b00 */
  push32(0x1294fd37u); f_12945b00();
  /* 1294fd37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fd3a push eax */
  push32((uint32_t)(EAX));
  /* 1294fd3b call 0x12945980 */
  push32(0x1294fd40u); f_12945980();
  /* 1294fd40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fd43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd46 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1294fd4a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294fd4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fd50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fd53 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd56 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1294fd5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294fd5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fd60 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1294fd64 push eax */
  push32((uint32_t)(EAX));
  /* 1294fd65 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd68 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fd69 call 0x12945b00 */
  push32(0x1294fd6eu); f_12945b00();
  /* 1294fd6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fd71 push eax */
  push32((uint32_t)(EAX));
  /* 1294fd72 call 0x12945980 */
  push32(0x1294fd77u); f_12945980();
  /* 1294fd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fd7a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd7d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1294fd81 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294fd84 jmp 0x1294fd07 */
  goto L_1294fd07;
L_1294fd86:;
  /* 1294fd86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fd89 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd8c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1294fd92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fd95 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1294fd9b push ecx */
  push32((uint32_t)(ECX));
  /* 1294fd9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fd9f push edx */
  push32((uint32_t)(EDX));
  /* 1294fda0 call 0x12945b00 */
  push32(0x1294fda5u); f_12945b00();
  /* 1294fda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fda8 push eax */
  push32((uint32_t)(EAX));
  /* 1294fda9 call 0x12945980 */
  push32(0x1294fdaeu); f_12945980();
  /* 1294fdae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fdb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fdb4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fdb8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fdbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fdbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fdc1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1294fdc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fdca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1294fdd0 push eax */
  push32((uint32_t)(EAX));
  /* 1294fdd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fdd5 call 0x12945b00 */
  push32(0x1294fddau); f_12945b00();
  /* 1294fdda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fddd push eax */
  push32((uint32_t)(EAX));
  /* 1294fdde call 0x12945980 */
  push32(0x1294fde3u); f_12945980();
  /* 1294fde3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fde6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fde9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1294fded mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294fdf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fdf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fdf6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1294fdfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fdff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1294fe05 push ecx */
  push32((uint32_t)(ECX));
  /* 1294fe06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe09 push edx */
  push32((uint32_t)(EDX));
  /* 1294fe0a call 0x12945b00 */
  push32(0x1294fe0fu); f_12945b00();
  /* 1294fe0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fe12 push eax */
  push32((uint32_t)(EAX));
  /* 1294fe13 call 0x12945980 */
  push32(0x1294fe18u); f_12945980();
  /* 1294fe18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fe1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1294fe22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1294fe25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fe28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe2b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1294fe31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294fe34 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1294fe3a push eax */
  push32((uint32_t)(EAX));
  /* 1294fe3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe3e push ecx */
  push32((uint32_t)(ECX));
  /* 1294fe3f call 0x12945b00 */
  push32(0x1294fe44u); f_12945b00();
  /* 1294fe44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fe47 push eax */
  push32((uint32_t)(EAX));
  /* 1294fe48 call 0x12945980 */
  push32(0x1294fe4du); f_12945980();
  /* 1294fe4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fe50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe53 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1294fe57 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294fe5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294fe5d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294fe60 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1294fe66:;
  /* 1294fe66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294fe69 pop esi */
  ESI = (pop32());
  /* 1294fe6a mov esp, ebp */
  ESP = (EBP);
  /* 1294fe6c pop ebp */
  EBP = (pop32());
  /* 1294fe6d ret  */
  ESPCHK(0x1294fb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe70 @ 0x1294fe70 (31 bytes, 15 insns) */
void f_1294fe70(void) {
  FTRACE(0x1294fe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294fe70 push ebp */
  push32((uint32_t)(EBP));
  /* 1294fe71 mov ebp, esp */
  EBP = (ESP);
  /* 1294fe73 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294fe75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294fe78 push eax */
  push32((uint32_t)(EAX));
  /* 1294fe79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294fe7c push ecx */
  push32((uint32_t)(ECX));
  /* 1294fe7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294fe80 push edx */
  push32((uint32_t)(EDX));
  /* 1294fe81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294fe84 push eax */
  push32((uint32_t)(EAX));
  /* 1294fe85 call 0x1294fe90 */
  push32(0x1294fe8au); f_1294fe90();
  /* 1294fe8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fe8d pop ebp */
  EBP = (pop32());
  /* 1294fe8e ret  */
  ESPCHK(0x1294fe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x1294fe90 (393 bytes, 123 insns) */
void f_1294fe90(void) {
  FTRACE(0x1294fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1294fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1294fe93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294fe96 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fe9a jne 0x1294fea6 */
  if (!C.zf) goto L_1294fea6;
  /* 1294fe9c mov eax, dword ptr [0x1296dc98] */
  EAX = (r32((uint32_t)(0x1296dc98)));
  /* 1294fea1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1294fea4 jmp 0x1294feac */
  goto L_1294feac;
L_1294fea6:;
  /* 1294fea6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294fea9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1294feac:;
  /* 1294feac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294feaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294feb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294feb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294feb8 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294febd call dword ptr [0x12970278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970278))), 0x1294fec3u);
  /* 1294fec3 cmp dword ptr [0x1296e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294feca je 0x1294feea */
  if (C.zf) goto L_1294feea;
  /* 1294fecc push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294fed1 call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x1294fed7u);
  /* 1294fed7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294fed9 call 0x12946550 */
  push32(0x1294fedeu); f_12946550();
  /* 1294fede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1294fee8 jmp 0x1294fef1 */
  goto L_1294fef1;
L_1294feea:;
  /* 1294feea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1294fef1:;
  /* 1294fef1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294fef5 jbe 0x1294ffe2 */
  if ((C.cf||C.zf)) goto L_1294ffe2;
  /* 1294fefb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294fefe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294ff00 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1294ff03 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294ff07 je 0x1294ff11 */
  if (C.zf) goto L_1294ff11;
  /* 1294ff09 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294ff0d je 0x1294ff16 */
  if (C.zf) goto L_1294ff16;
  /* 1294ff0f jmp 0x1294ff70 */
  goto L_1294ff70;
L_1294ff11:;
  /* 1294ff11 jmp 0x1294ffe2 */
  goto L_1294ffe2;
L_1294ff16:;
  /* 1294ff16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ff1c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1294ff1f mov dword ptr [0x1296e7f0], 0 */
  w32((uint32_t)(0x1296e7f0), (0x0u));
  /* 1294ff29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294ff2f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ff32 jne 0x1294ff47 */
  if (!C.zf) goto L_1294ff47;
  /* 1294ff34 mov dword ptr [0x1296e7f0], 1 */
  w32((uint32_t)(0x1296e7f0), (0x1u));
  /* 1294ff3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ff44 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1294ff47:;
  /* 1294ff47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294ff4a push ecx */
  push32((uint32_t)(ECX));
  /* 1294ff4b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1294ff4e push edx */
  push32((uint32_t)(EDX));
  /* 1294ff4f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1294ff52 push eax */
  push32((uint32_t)(EAX));
  /* 1294ff53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294ff56 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ff57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294ff5c push eax */
  push32((uint32_t)(EAX));
  /* 1294ff5d call 0x12950020 */
  push32(0x1294ff62u); f_12950020();
  /* 1294ff62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ff65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ff6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1294ff6e jmp 0x1294ffdd */
  goto L_1294ffdd;
L_1294ff70:;
  /* 1294ff70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ff75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294ff77 mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 1294ff7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294ff7f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1294ff83 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ff89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294ff8b je 0x1294ffb8 */
  if (C.zf) goto L_1294ffb8;
  /* 1294ff8d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ff91 jbe 0x1294ffb8 */
  if ((C.cf||C.zf)) goto L_1294ffb8;
  /* 1294ff93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ff96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ff99 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294ff9b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1294ff9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ffa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ffa3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1294ffa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ffa9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ffac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1294ffaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294ffb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ffb5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1294ffb8:;
  /* 1294ffb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ffbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ffbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294ffc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1294ffc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ffc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ffc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1294ffcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ffce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ffd1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1294ffd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294ffd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ffda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1294ffdd:;
  /* 1294ffdd jmp 0x1294fef1 */
  goto L_1294fef1;
L_1294ffe2:;
  /* 1294ffe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ffe6 je 0x1294fff4 */
  if (C.zf) goto L_1294fff4;
  /* 1294ffe8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294ffea call 0x129465f0 */
  push32(0x1294ffefu); f_129465f0();
  /* 1294ffef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294fff2 jmp 0x1294ffff */
  goto L_1294ffff;
L_1294fff4:;
  /* 1294fff4 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294fff9 call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x1294ffffu);
L_1294ffff:;
  /* 1294ffff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950003 jbe 0x12950013 */
  if ((C.cf||C.zf)) goto L_12950013;
  /* 12950005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950008 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1295000b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295000e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950011 jmp 0x12950015 */
  goto L_12950015;
L_12950013:;
  /* 12950013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12950015:;
  /* 12950015 mov esp, ebp */
  ESP = (EBP);
  /* 12950017 pop ebp */
  EBP = (pop32());
  /* 12950018 ret  */
  ESPCHK(0x1294fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x12950020 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12950020(void) {
  FTRACE(0x12950020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950020 push ebp */
  push32((uint32_t)(EBP));
  /* 12950021 mov ebp, esp */
  EBP = (ESP);
  /* 12950023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950026 push esi */
  push32((uint32_t)(ESI));
  /* 12950027 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1295002b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1295002e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950031 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950034 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12950037 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295003b ja 0x12950588 */
  if ((!C.cf&&!C.zf)) goto L_12950588;
  /* 12950041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12950046 mov dl, byte ptr [eax + 0x129505e9] */
  DL = (r8((uint32_t)(EAX + 0x129505e9)));
  /* 1295004c jmp dword ptr [edx*4 + 0x1295058d] */
  switch (EDX) {
    case 0: goto L_12950566;
    case 1: goto L_12950075;
    case 2: goto L_129500bb;
    case 3: goto L_12950208;
    case 4: goto L_12950230;
    case 5: goto L_129502cf;
    case 6: goto L_1295033b;
    case 7: goto L_12950364;
    case 8: goto L_129503a5;
    case 9: goto L_12950487;
    case 10: goto L_129504ee;
    case 11: goto L_1295053b;
    case 12: goto L_12950053;
    case 13: goto L_12950098;
    case 14: goto L_129500de;
    case 15: goto L_129501de;
    case 16: goto L_12950275;
    case 17: goto L_129502a2;
    case 18: goto L_129502f7;
    case 19: goto L_1295037b;
    case 20: goto L_12950429;
    case 21: goto L_129504b8;
    case 22: goto L_12950588;
    default: x86_unimpl("switch@0x1295004c out of table"); return;
  }
L_12950053:;
  /* 12950053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950056 push ecx */
  push32((uint32_t)(ECX));
  /* 12950057 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295005a push edx */
  push32((uint32_t)(EDX));
  /* 1295005b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295005e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12950061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950064 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12950067 push eax */
  push32((uint32_t)(EAX));
  /* 12950068 call 0x12950640 */
  push32(0x1295006du); f_12950640();
  /* 1295006d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950070 jmp 0x12950588 */
  goto L_12950588;
L_12950075:;
  /* 12950075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950078 push ecx */
  push32((uint32_t)(ECX));
  /* 12950079 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295007c push edx */
  push32((uint32_t)(EDX));
  /* 1295007d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950080 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12950083 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950086 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1295008a push eax */
  push32((uint32_t)(EAX));
  /* 1295008b call 0x12950640 */
  push32(0x12950090u); f_12950640();
  /* 12950090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950093 jmp 0x12950588 */
  goto L_12950588;
L_12950098:;
  /* 12950098 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295009b push ecx */
  push32((uint32_t)(ECX));
  /* 1295009c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295009f push edx */
  push32((uint32_t)(EDX));
  /* 129500a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129500a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129500a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129500a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 129500ad push eax */
  push32((uint32_t)(EAX));
  /* 129500ae call 0x12950640 */
  push32(0x129500b3u); f_12950640();
  /* 129500b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129500b6 jmp 0x12950588 */
  goto L_12950588;
L_129500bb:;
  /* 129500bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129500be push ecx */
  push32((uint32_t)(ECX));
  /* 129500bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129500c2 push edx */
  push32((uint32_t)(EDX));
  /* 129500c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129500c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129500c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129500cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129500d0 push eax */
  push32((uint32_t)(EAX));
  /* 129500d1 call 0x12950640 */
  push32(0x129500d6u); f_12950640();
  /* 129500d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129500d9 jmp 0x12950588 */
  goto L_12950588;
L_129500de:;
  /* 129500de cmp dword ptr [0x1296e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129500e5 je 0x12950166 */
  if (C.zf) goto L_12950166;
  /* 129500e7 mov dword ptr [0x1296e7f0], 0 */
  w32((uint32_t)(0x1296e7f0), (0x0u));
  /* 129500f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129500f4 push ecx */
  push32((uint32_t)(ECX));
  /* 129500f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129500f8 push edx */
  push32((uint32_t)(EDX));
  /* 129500f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129500fc push eax */
  push32((uint32_t)(EAX));
  /* 129500fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950100 push ecx */
  push32((uint32_t)(ECX));
  /* 12950101 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1295010a push eax */
  push32((uint32_t)(EAX));
  /* 1295010b call 0x129507f0 */
  push32(0x12950110u); f_129507f0();
  /* 12950110 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950116 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950119 jne 0x12950120 */
  if (!C.zf) goto L_12950120;
  /* 1295011b jmp 0x12950588 */
  goto L_12950588;
L_12950120:;
  /* 12950120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950123 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950125 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12950128 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295012b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1295012d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950130 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12950135 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950138 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1295013a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1295013d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950140 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12950142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950145 push ecx */
  push32((uint32_t)(ECX));
  /* 12950146 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950149 push edx */
  push32((uint32_t)(EDX));
  /* 1295014a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295014d push eax */
  push32((uint32_t)(EAX));
  /* 1295014e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950151 push ecx */
  push32((uint32_t)(ECX));
  /* 12950152 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950155 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1295015b push eax */
  push32((uint32_t)(EAX));
  /* 1295015c call 0x129507f0 */
  push32(0x12950161u); f_129507f0();
  /* 12950161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950164 jmp 0x129501d9 */
  goto L_129501d9;
L_12950166:;
  /* 12950166 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950169 push ecx */
  push32((uint32_t)(ECX));
  /* 1295016a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295016d push edx */
  push32((uint32_t)(EDX));
  /* 1295016e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950171 push eax */
  push32((uint32_t)(EAX));
  /* 12950172 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950175 push ecx */
  push32((uint32_t)(ECX));
  /* 12950176 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950179 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1295017f push eax */
  push32((uint32_t)(EAX));
  /* 12950180 call 0x129507f0 */
  push32(0x12950185u); f_129507f0();
  /* 12950185 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950188 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295018b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295018e jne 0x12950195 */
  if (!C.zf) goto L_12950195;
  /* 12950190 jmp 0x12950588 */
  goto L_12950588;
L_12950195:;
  /* 12950195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950198 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1295019a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1295019d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129501a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129501a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129501a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129501a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129501aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129501ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129501af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129501b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129501b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129501b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129501ba push ecx */
  push32((uint32_t)(ECX));
  /* 129501bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129501be push edx */
  push32((uint32_t)(EDX));
  /* 129501bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129501c2 push eax */
  push32((uint32_t)(EAX));
  /* 129501c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129501c6 push ecx */
  push32((uint32_t)(ECX));
  /* 129501c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129501ca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 129501d0 push eax */
  push32((uint32_t)(EAX));
  /* 129501d1 call 0x129507f0 */
  push32(0x129501d6u); f_129507f0();
  /* 129501d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129501d9:;
  /* 129501d9 jmp 0x12950588 */
  goto L_12950588;
L_129501de:;
  /* 129501de mov ecx, dword ptr [0x1296e7f0] */
  ECX = (r32((uint32_t)(0x1296e7f0)));
  /* 129501e4 mov dword ptr [0x1296e800], ecx */
  w32((uint32_t)(0x1296e800), (ECX));
  /* 129501ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129501ed push edx */
  push32((uint32_t)(EDX));
  /* 129501ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129501f1 push eax */
  push32((uint32_t)(EAX));
  /* 129501f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129501f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129501f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129501fa push edx */
  push32((uint32_t)(EDX));
  /* 129501fb call 0x12950690 */
  push32(0x12950200u); f_12950690();
  /* 12950200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950203 jmp 0x12950588 */
  goto L_12950588;
L_12950208:;
  /* 12950208 mov eax, dword ptr [0x1296e7f0] */
  EAX = (r32((uint32_t)(0x1296e7f0)));
  /* 1295020d mov dword ptr [0x1296e800], eax */
  w32((uint32_t)(0x1296e800), (EAX));
  /* 12950212 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950215 push ecx */
  push32((uint32_t)(ECX));
  /* 12950216 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950219 push edx */
  push32((uint32_t)(EDX));
  /* 1295021a push 2 */
  push32((uint32_t)(0x2u));
  /* 1295021c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295021f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12950222 push ecx */
  push32((uint32_t)(ECX));
  /* 12950223 call 0x12950690 */
  push32(0x12950228u); f_12950690();
  /* 12950228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295022b jmp 0x12950588 */
  goto L_12950588;
L_12950230:;
  /* 12950230 mov edx, dword ptr [0x1296e7f0] */
  EDX = (r32((uint32_t)(0x1296e7f0)));
  /* 12950236 mov dword ptr [0x1296e800], edx */
  w32((uint32_t)(0x1296e800), (EDX));
  /* 1295023c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295023f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12950242 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12950243 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12950248 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1295024a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1295024d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950251 jne 0x1295025a */
  if (!C.zf) goto L_1295025a;
  /* 12950253 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1295025a:;
  /* 1295025a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295025d push edx */
  push32((uint32_t)(EDX));
  /* 1295025e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950261 push eax */
  push32((uint32_t)(EAX));
  /* 12950262 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950267 push ecx */
  push32((uint32_t)(ECX));
  /* 12950268 call 0x12950690 */
  push32(0x1295026du); f_12950690();
  /* 1295026d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950270 jmp 0x12950588 */
  goto L_12950588;
L_12950275:;
  /* 12950275 mov edx, dword ptr [0x1296e7f0] */
  EDX = (r32((uint32_t)(0x1296e7f0)));
  /* 1295027b mov dword ptr [0x1296e800], edx */
  w32((uint32_t)(0x1296e800), (EDX));
  /* 12950281 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950284 push eax */
  push32((uint32_t)(EAX));
  /* 12950285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950288 push ecx */
  push32((uint32_t)(ECX));
  /* 12950289 push 3 */
  push32((uint32_t)(0x3u));
  /* 1295028b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295028e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12950291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950294 push eax */
  push32((uint32_t)(EAX));
  /* 12950295 call 0x12950690 */
  push32(0x1295029au); f_12950690();
  /* 1295029a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295029d jmp 0x12950588 */
  goto L_12950588;
L_129502a2:;
  /* 129502a2 mov ecx, dword ptr [0x1296e7f0] */
  ECX = (r32((uint32_t)(0x1296e7f0)));
  /* 129502a8 mov dword ptr [0x1296e800], ecx */
  w32((uint32_t)(0x1296e800), (ECX));
  /* 129502ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129502b1 push edx */
  push32((uint32_t)(EDX));
  /* 129502b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129502b5 push eax */
  push32((uint32_t)(EAX));
  /* 129502b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129502b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129502bb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129502be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129502c1 push edx */
  push32((uint32_t)(EDX));
  /* 129502c2 call 0x12950690 */
  push32(0x129502c7u); f_12950690();
  /* 129502c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129502ca jmp 0x12950588 */
  goto L_12950588;
L_129502cf:;
  /* 129502cf mov eax, dword ptr [0x1296e7f0] */
  EAX = (r32((uint32_t)(0x1296e7f0)));
  /* 129502d4 mov dword ptr [0x1296e800], eax */
  w32((uint32_t)(0x1296e800), (EAX));
  /* 129502d9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129502dc push ecx */
  push32((uint32_t)(ECX));
  /* 129502dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129502e0 push edx */
  push32((uint32_t)(EDX));
  /* 129502e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129502e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129502e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129502e9 push ecx */
  push32((uint32_t)(ECX));
  /* 129502ea call 0x12950690 */
  push32(0x129502efu); f_12950690();
  /* 129502ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129502f2 jmp 0x12950588 */
  goto L_12950588;
L_129502f7:;
  /* 129502f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129502fa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129502fe jg 0x1295031c */
  if ((!C.zf&&C.sf==C.of)) goto L_1295031c;
  /* 12950300 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950303 push eax */
  push32((uint32_t)(EAX));
  /* 12950304 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950307 push ecx */
  push32((uint32_t)(ECX));
  /* 12950308 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1295030b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12950311 push eax */
  push32((uint32_t)(EAX));
  /* 12950312 call 0x12950640 */
  push32(0x12950317u); f_12950640();
  /* 12950317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295031a jmp 0x12950336 */
  goto L_12950336;
L_1295031c:;
  /* 1295031c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295031f push ecx */
  push32((uint32_t)(ECX));
  /* 12950320 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950323 push edx */
  push32((uint32_t)(EDX));
  /* 12950324 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950327 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1295032d push ecx */
  push32((uint32_t)(ECX));
  /* 1295032e call 0x12950640 */
  push32(0x12950333u); f_12950640();
  /* 12950333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12950336:;
  /* 12950336 jmp 0x12950588 */
  goto L_12950588;
L_1295033b:;
  /* 1295033b mov edx, dword ptr [0x1296e7f0] */
  EDX = (r32((uint32_t)(0x1296e7f0)));
  /* 12950341 mov dword ptr [0x1296e800], edx */
  w32((uint32_t)(0x1296e800), (EDX));
  /* 12950347 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295034a push eax */
  push32((uint32_t)(EAX));
  /* 1295034b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295034e push ecx */
  push32((uint32_t)(ECX));
  /* 1295034f push 2 */
  push32((uint32_t)(0x2u));
  /* 12950351 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950354 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950356 push eax */
  push32((uint32_t)(EAX));
  /* 12950357 call 0x12950690 */
  push32(0x1295035cu); f_12950690();
  /* 1295035c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295035f jmp 0x12950588 */
  goto L_12950588;
L_12950364:;
  /* 12950364 mov ecx, dword ptr [0x1296e7f0] */
  ECX = (r32((uint32_t)(0x1296e7f0)));
  /* 1295036a mov dword ptr [0x1296e800], ecx */
  w32((uint32_t)(0x1296e800), (ECX));
  /* 12950370 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950373 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12950376 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12950379 jmp 0x129503cd */
  goto L_129503cd;
L_1295037b:;
  /* 1295037b mov ecx, dword ptr [0x1296e7f0] */
  ECX = (r32((uint32_t)(0x1296e7f0)));
  /* 12950381 mov dword ptr [0x1296e800], ecx */
  w32((uint32_t)(0x1296e800), (ECX));
  /* 12950387 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295038a push edx */
  push32((uint32_t)(EDX));
  /* 1295038b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295038e push eax */
  push32((uint32_t)(EAX));
  /* 1295038f push 1 */
  push32((uint32_t)(0x1u));
  /* 12950391 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950394 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12950397 push edx */
  push32((uint32_t)(EDX));
  /* 12950398 call 0x12950690 */
  push32(0x1295039du); f_12950690();
  /* 1295039d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129503a0 jmp 0x12950588 */
  goto L_12950588;
L_129503a5:;
  /* 129503a5 mov eax, dword ptr [0x1296e7f0] */
  EAX = (r32((uint32_t)(0x1296e7f0)));
  /* 129503aa mov dword ptr [0x1296e800], eax */
  w32((uint32_t)(0x1296e800), (EAX));
  /* 129503af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129503b2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129503b6 jne 0x129503c1 */
  if (!C.zf) goto L_129503c1;
  /* 129503b8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 129503bf jmp 0x129503cd */
  goto L_129503cd;
L_129503c1:;
  /* 129503c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129503c4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 129503c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129503ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129503cd:;
  /* 129503cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129503d0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129503d3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129503d6 jge 0x129503e1 */
  if ((C.sf==C.of)) goto L_129503e1;
  /* 129503d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129503df jmp 0x1295040e */
  goto L_1295040e;
L_129503e1:;
  /* 129503e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129503e4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129503e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129503e8 mov ecx, 7 */
  ECX = (0x7u);
  /* 129503ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129503ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129503f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129503f5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129503f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129503f9 mov ecx, 7 */
  ECX = (0x7u);
  /* 129503fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12950400 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950403 jl 0x1295040e */
  if ((C.sf!=C.of)) goto L_1295040e;
  /* 12950405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295040b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1295040e:;
  /* 1295040e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950411 push eax */
  push32((uint32_t)(EAX));
  /* 12950412 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950415 push ecx */
  push32((uint32_t)(ECX));
  /* 12950416 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295041b push edx */
  push32((uint32_t)(EDX));
  /* 1295041c call 0x12950690 */
  push32(0x12950421u); f_12950690();
  /* 12950421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950424 jmp 0x12950588 */
  goto L_12950588;
L_12950429:;
  /* 12950429 cmp dword ptr [0x1296e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950430 je 0x12950460 */
  if (C.zf) goto L_12950460;
  /* 12950432 mov dword ptr [0x1296e7f0], 0 */
  w32((uint32_t)(0x1296e7f0), (0x0u));
  /* 1295043c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1295043f push eax */
  push32((uint32_t)(EAX));
  /* 12950440 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950443 push ecx */
  push32((uint32_t)(ECX));
  /* 12950444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950447 push edx */
  push32((uint32_t)(EDX));
  /* 12950448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295044b push eax */
  push32((uint32_t)(EAX));
  /* 1295044c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1295044f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12950455 push edx */
  push32((uint32_t)(EDX));
  /* 12950456 call 0x129507f0 */
  push32(0x1295045bu); f_129507f0();
  /* 1295045b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295045e jmp 0x12950482 */
  goto L_12950482;
L_12950460:;
  /* 12950460 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950463 push eax */
  push32((uint32_t)(EAX));
  /* 12950464 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950467 push ecx */
  push32((uint32_t)(ECX));
  /* 12950468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295046b push edx */
  push32((uint32_t)(EDX));
  /* 1295046c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295046f push eax */
  push32((uint32_t)(EAX));
  /* 12950470 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950473 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12950479 push edx */
  push32((uint32_t)(EDX));
  /* 1295047a call 0x129507f0 */
  push32(0x1295047fu); f_129507f0();
  /* 1295047f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12950482:;
  /* 12950482 jmp 0x12950588 */
  goto L_12950588;
L_12950487:;
  /* 12950487 mov dword ptr [0x1296e7f0], 0 */
  w32((uint32_t)(0x1296e7f0), (0x0u));
  /* 12950491 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950494 push eax */
  push32((uint32_t)(EAX));
  /* 12950495 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950498 push ecx */
  push32((uint32_t)(ECX));
  /* 12950499 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295049c push edx */
  push32((uint32_t)(EDX));
  /* 1295049d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129504a0 push eax */
  push32((uint32_t)(EAX));
  /* 129504a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129504a4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 129504aa push edx */
  push32((uint32_t)(EDX));
  /* 129504ab call 0x129507f0 */
  push32(0x129504b0u); f_129507f0();
  /* 129504b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129504b3 jmp 0x12950588 */
  goto L_12950588;
L_129504b8:;
  /* 129504b8 mov eax, dword ptr [0x1296e7f0] */
  EAX = (r32((uint32_t)(0x1296e7f0)));
  /* 129504bd mov dword ptr [0x1296e800], eax */
  w32((uint32_t)(0x1296e800), (EAX));
  /* 129504c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129504c5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129504c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129504c9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 129504ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129504d0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129504d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129504d6 push edx */
  push32((uint32_t)(EDX));
  /* 129504d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129504da push eax */
  push32((uint32_t)(EAX));
  /* 129504db push 2 */
  push32((uint32_t)(0x2u));
  /* 129504dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129504e0 push ecx */
  push32((uint32_t)(ECX));
  /* 129504e1 call 0x12950690 */
  push32(0x129504e6u); f_12950690();
  /* 129504e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129504e9 jmp 0x12950588 */
  goto L_12950588;
L_129504ee:;
  /* 129504ee mov edx, dword ptr [0x1296e7f0] */
  EDX = (r32((uint32_t)(0x1296e7f0)));
  /* 129504f4 mov dword ptr [0x1296e800], edx */
  w32((uint32_t)(0x1296e800), (EDX));
  /* 129504fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129504fd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12950500 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12950501 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12950506 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12950508 mov ecx, eax */
  ECX = (EAX);
  /* 1295050a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295050d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12950510 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950513 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12950516 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12950517 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1295051c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1295051e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12950523 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950526 push eax */
  push32((uint32_t)(EAX));
  /* 12950527 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295052a push ecx */
  push32((uint32_t)(ECX));
  /* 1295052b push 4 */
  push32((uint32_t)(0x4u));
  /* 1295052d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950530 push edx */
  push32((uint32_t)(EDX));
  /* 12950531 call 0x12950690 */
  push32(0x12950536u); f_12950690();
  /* 12950536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950539 jmp 0x12950588 */
  goto L_12950588;
L_1295053b:;
  /* 1295053b call 0x12951650 */
  push32(0x12950540u); f_12951650();
  /* 12950540 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950543 push eax */
  push32((uint32_t)(EAX));
  /* 12950544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950547 push ecx */
  push32((uint32_t)(ECX));
  /* 12950548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295054b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295054d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950551 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12950554 mov ecx, dword ptr [eax*4 + 0x1296de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296de1c)));
  /* 1295055b push ecx */
  push32((uint32_t)(ECX));
  /* 1295055c call 0x12950640 */
  push32(0x12950561u); f_12950640();
  /* 12950561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950564 jmp 0x12950588 */
  goto L_12950588;
L_12950566:;
  /* 12950566 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950569 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1295056b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1295056e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950573 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950579 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1295057b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295057e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950580 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950586 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12950588:;
  /* 12950588 pop esi */
  ESI = (pop32());
  /* 12950589 mov esp, ebp */
  ESP = (EBP);
  /* 1295058b pop ebp */
  EBP = (pop32());
  /* 1295058c ret  */
  ESPCHK(0x12950020u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12950640 (72 bytes, 30 insns) */
void f_12950640(void) {
  FTRACE(0x12950640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950640 push ebp */
  push32((uint32_t)(EBP));
  /* 12950641 mov ebp, esp */
  EBP = (ESP);
L_12950643:;
  /* 12950643 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950646 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950649 je 0x12950686 */
  if (C.zf) goto L_12950686;
  /* 1295064b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295064e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12950651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12950653 je 0x12950686 */
  if (C.zf) goto L_12950686;
  /* 12950655 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950658 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1295065a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295065d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295065f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12950661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950664 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950666 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950669 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295066c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1295066e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950674 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12950677 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295067a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1295067c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1295067f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950682 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12950684 jmp 0x12950643 */
  goto L_12950643;
L_12950686:;
  /* 12950686 pop ebp */
  EBP = (pop32());
  /* 12950687 ret  */
  ESPCHK(0x12950640u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x12950690 (173 bytes, 64 insns) */
void f_12950690(void) {
  FTRACE(0x12950690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950690 push ebp */
  push32((uint32_t)(EBP));
  /* 12950691 mov ebp, esp */
  EBP = (ESP);
  /* 12950693 push ecx */
  push32((uint32_t)(ECX));
  /* 12950694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1295069b cmp dword ptr [0x1296e800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129506a2 je 0x129506ba */
  if (C.zf) goto L_129506ba;
  /* 129506a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129506a7 push eax */
  push32((uint32_t)(EAX));
  /* 129506a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129506ab push ecx */
  push32((uint32_t)(ECX));
  /* 129506ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129506af push edx */
  push32((uint32_t)(EDX));
  /* 129506b0 call 0x12950740 */
  push32(0x129506b5u); f_12950740();
  /* 129506b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129506b8 jmp 0x12950739 */
  goto L_12950739;
L_129506ba:;
  /* 129506ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129506bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129506c0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129506c2 jae 0x12950730 */
  if (!C.cf) goto L_12950730;
  /* 129506c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129506c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129506ca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129506cd jmp 0x129506d8 */
  goto L_129506d8;
L_129506cf:;
  /* 129506cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129506d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129506d5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_129506d8:;
  /* 129506d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129506db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129506de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129506e0 je 0x12950714 */
  if (C.zf) goto L_12950714;
  /* 129506e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129506e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129506e6 mov ecx, 0xa */
  ECX = (0xau);
  /* 129506eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129506ed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129506f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129506f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129506f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129506f8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 129506fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129506fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129506ff mov ecx, 0xa */
  ECX = (0xau);
  /* 12950704 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12950706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12950709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295070c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295070f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12950712 jmp 0x129506cf */
  goto L_129506cf;
L_12950714:;
  /* 12950714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950719 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295071c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295071f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12950721 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950724 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950726 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950729 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295072c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1295072e jmp 0x12950739 */
  goto L_12950739;
L_12950730:;
  /* 12950730 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950733 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12950739:;
  /* 12950739 mov esp, ebp */
  ESP = (EBP);
  /* 1295073b pop ebp */
  EBP = (pop32());
  /* 1295073c ret  */
  ESPCHK(0x12950690u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12950740 (172 bytes, 65 insns) */
void f_12950740(void) {
  FTRACE(0x12950740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950740 push ebp */
  push32((uint32_t)(EBP));
  /* 12950741 mov ebp, esp */
  EBP = (ESP);
  /* 12950743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950749 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1295074b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1295074e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950751 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950754 jbe 0x1295079b */
  if ((C.cf||C.zf)) goto L_1295079b;
L_12950756:;
  /* 12950756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950759 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1295075a mov ecx, 0xa */
  ECX = (0xau);
  /* 1295075f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12950761 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950767 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12950769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295076c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295076f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12950772 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950775 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950777 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1295077a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295077d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1295077f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950782 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12950783 mov ecx, 0xa */
  ECX = (0xau);
  /* 12950788 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1295078a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1295078d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950791 jle 0x1295079b */
  if ((C.zf||C.sf!=C.of)) goto L_1295079b;
  /* 12950793 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950796 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950799 ja 0x12950756 */
  if ((!C.cf&&!C.zf)) goto L_12950756;
L_1295079b:;
  /* 1295079b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295079e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129507a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129507a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129507a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129507a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129507ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129507ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129507b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129507b4:;
  /* 129507b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129507b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129507b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 129507bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129507bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129507c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129507c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129507c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129507c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129507cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129507cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129507d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 129507d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 129507d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129507da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129507dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129507e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129507e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129507e6 jb 0x129507b4 */
  if (C.cf) goto L_129507b4;
  /* 129507e8 mov esp, ebp */
  ESP = (EBP);
  /* 129507ea pop ebp */
  EBP = (pop32());
  /* 129507eb ret  */
  ESPCHK(0x12950740u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x129507f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_129507f0(void) {
  FTRACE(0x129507f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129507f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129507f1 mov ebp, esp */
  EBP = (ESP);
  /* 129507f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_129507f6:;
  /* 129507f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129507f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129507fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129507fe je 0x12950c6c */
  if (C.zf) goto L_12950c6c;
  /* 12950804 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950807 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295080a je 0x12950c6c */
  if (C.zf) goto L_12950c6c;
  /* 12950810 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12950814 mov dword ptr [0x1296e800], 0 */
  w32((uint32_t)(0x1296e800), (0x0u));
  /* 1295081e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12950825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950828 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1295082b jmp 0x12950836 */
  goto L_12950836;
L_1295082d:;
  /* 1295082d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950830 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950833 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12950836:;
  /* 12950836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950839 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1295083c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295083f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12950842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950848 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1295084b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295084d jne 0x12950851 */
  if (!C.zf) goto L_12950851;
  /* 1295084f jmp 0x1295082d */
  goto L_1295082d;
L_12950851:;
  /* 12950851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950854 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950857 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1295085a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295085d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12950860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12950863 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12950866 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950869 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1295086c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950870 ja 0x12950bc0 */
  if ((!C.cf&&!C.zf)) goto L_12950bc0;
  /* 12950876 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12950879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295087b mov al, byte ptr [ecx + 0x12950c9c] */
  AL = (r8((uint32_t)(ECX + 0x12950c9c)));
  /* 12950881 jmp dword ptr [eax*4 + 0x12950c70] */
  switch (EAX) {
    case 0: goto L_12950adf;
    case 1: goto L_129509c3;
    case 2: goto L_1295094e;
    case 3: goto L_12950888;
    case 4: goto L_129508c6;
    case 5: goto L_12950927;
    case 6: goto L_12950975;
    case 7: goto L_1295099c;
    case 8: goto L_12950a0a;
    case 9: goto L_12950904;
    case 10: goto L_12950bc0;
    default: x86_unimpl("switch@0x12950881 out of table"); return;
  }
L_12950888:;
  /* 12950888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295088b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1295088e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12950891 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950894 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12950897 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295089b ja 0x129508c1 */
  if ((!C.cf&&!C.zf)) goto L_129508c1;
  /* 1295089d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129508a0 jmp dword ptr [ecx*4 + 0x12950cef] */
  switch (ECX) {
    case 0: goto L_129508a7;
    case 1: goto L_129508b1;
    case 2: goto L_129508b7;
    case 3: goto L_129508bd;
    case 4: goto L_129508e5;
    case 5: goto L_129508ef;
    case 6: goto L_129508f5;
    case 7: goto L_129508fb;
    default: x86_unimpl("switch@0x129508a0 out of table"); return;
  }
L_129508a7:;
  /* 129508a7 mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_129508b1:;
  /* 129508b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 129508b5 jmp 0x129508c1 */
  goto L_129508c1;
L_129508b7:;
  /* 129508b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 129508bb jmp 0x129508c1 */
  goto L_129508c1;
L_129508bd:;
  /* 129508bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_129508c1:;
  /* 129508c1 jmp 0x12950bc0 */
  goto L_12950bc0;
L_129508c6:;
  /* 129508c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129508c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129508cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129508cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129508d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129508d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129508d9 ja 0x129508ff */
  if ((!C.cf&&!C.zf)) goto L_129508ff;
  /* 129508db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129508de jmp dword ptr [ecx*4 + 0x12950cff] */
  switch (ECX) {
    case 0: goto L_129508e5;
    case 1: goto L_129508ef;
    case 2: goto L_129508f5;
    case 3: goto L_129508fb;
    default: x86_unimpl("switch@0x129508de out of table"); return;
  }
L_129508e5:;
  /* 129508e5 mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_129508ef:;
  /* 129508ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 129508f3 jmp 0x129508ff */
  goto L_129508ff;
L_129508f5:;
  /* 129508f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 129508f9 jmp 0x129508ff */
  goto L_129508ff;
L_129508fb:;
  /* 129508fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_129508ff:;
  /* 129508ff jmp 0x12950bc0 */
  goto L_12950bc0;
L_12950904:;
  /* 12950904 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950907 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1295090a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295090e je 0x12950918 */
  if (C.zf) goto L_12950918;
  /* 12950910 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950914 je 0x1295091e */
  if (C.zf) goto L_1295091e;
  /* 12950916 jmp 0x12950922 */
  goto L_12950922;
L_12950918:;
  /* 12950918 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1295091c jmp 0x12950922 */
  goto L_12950922;
L_1295091e:;
  /* 1295091e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12950922:;
  /* 12950922 jmp 0x12950bc0 */
  goto L_12950bc0;
L_12950927:;
  /* 12950927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295092a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1295092d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950931 je 0x1295093b */
  if (C.zf) goto L_1295093b;
  /* 12950933 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950937 je 0x12950945 */
  if (C.zf) goto L_12950945;
  /* 12950939 jmp 0x12950949 */
  goto L_12950949;
L_1295093b:;
  /* 1295093b mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_12950945:;
  /* 12950945 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12950949:;
  /* 12950949 jmp 0x12950bc0 */
  goto L_12950bc0;
L_1295094e:;
  /* 1295094e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950951 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12950954 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950958 je 0x12950962 */
  if (C.zf) goto L_12950962;
  /* 1295095a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295095e je 0x1295096c */
  if (C.zf) goto L_1295096c;
  /* 12950960 jmp 0x12950970 */
  goto L_12950970;
L_12950962:;
  /* 12950962 mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_1295096c:;
  /* 1295096c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12950970:;
  /* 12950970 jmp 0x12950bc0 */
  goto L_12950bc0;
L_12950975:;
  /* 12950975 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950978 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1295097b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295097f je 0x12950989 */
  if (C.zf) goto L_12950989;
  /* 12950981 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950985 je 0x12950993 */
  if (C.zf) goto L_12950993;
  /* 12950987 jmp 0x12950997 */
  goto L_12950997;
L_12950989:;
  /* 12950989 mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_12950993:;
  /* 12950993 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12950997:;
  /* 12950997 jmp 0x12950bc0 */
  goto L_12950bc0;
L_1295099c:;
  /* 1295099c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295099f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 129509a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129509a6 je 0x129509b0 */
  if (C.zf) goto L_129509b0;
  /* 129509a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129509ac je 0x129509ba */
  if (C.zf) goto L_129509ba;
  /* 129509ae jmp 0x129509be */
  goto L_129509be;
L_129509b0:;
  /* 129509b0 mov dword ptr [0x1296e800], 1 */
  w32((uint32_t)(0x1296e800), (0x1u));
L_129509ba:;
  /* 129509ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_129509be:;
  /* 129509be jmp 0x12950bc0 */
  goto L_12950bc0;
L_129509c3:;
  /* 129509c3 push 0x1296a7dc */
  push32((uint32_t)(0x1296a7dcu));
  /* 129509c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129509cb push ecx */
  push32((uint32_t)(ECX));
  /* 129509cc call 0x12951220 */
  push32(0x129509d1u); f_12951220();
  /* 129509d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129509d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129509d6 jne 0x129509e3 */
  if (!C.zf) goto L_129509e3;
  /* 129509d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129509db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129509de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129509e1 jmp 0x12950a01 */
  goto L_12950a01;
L_129509e3:;
  /* 129509e3 push 0x1296a7d8 */
  push32((uint32_t)(0x1296a7d8u));
  /* 129509e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129509eb push eax */
  push32((uint32_t)(EAX));
  /* 129509ec call 0x12951220 */
  push32(0x129509f1u); f_12951220();
  /* 129509f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129509f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129509f6 jne 0x12950a01 */
  if (!C.zf) goto L_12950a01;
  /* 129509f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129509fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129509fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12950a01:;
  /* 12950a01 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12950a05 jmp 0x12950bc0 */
  goto L_12950bc0;
L_12950a0a:;
  /* 12950a0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950a0d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950a11 jg 0x12950a21 */
  if ((!C.zf&&C.sf==C.of)) goto L_12950a21;
  /* 12950a13 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950a16 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12950a1c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12950a1f jmp 0x12950a2d */
  goto L_12950a2d;
L_12950a21:;
  /* 12950a21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950a24 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12950a2a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12950a2d:;
  /* 12950a2d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950a31 jle 0x12950ad4 */
  if ((C.zf||C.sf!=C.of)) goto L_12950ad4;
  /* 12950a37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950a3a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950a3d jbe 0x12950ad4 */
  if ((C.cf||C.zf)) goto L_12950ad4;
  /* 12950a43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12950a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12950a48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12950a4a mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 12950a50 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12950a52 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12950a56 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12950a5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12950a5e je 0x12950a97 */
  if (C.zf) goto L_12950a97;
  /* 12950a60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950a63 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950a66 jbe 0x12950a97 */
  if ((C.cf||C.zf)) goto L_12950a97;
  /* 12950a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950a6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950a6d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12950a70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12950a72 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12950a74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950a77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950a79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950a7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950a7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12950a81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12950a84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950a87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12950a8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950a8d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950a8f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950a92 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950a95 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12950a97:;
  /* 12950a97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950a9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950a9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12950a9f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12950aa1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12950aa3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950aa6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950aa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950aab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950aae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12950ab0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12950ab3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950ab6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12950ab9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950abc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950abe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950ac1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950ac4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12950ac6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950ac9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950acc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12950acf jmp 0x12950a2d */
  goto L_12950a2d;
L_12950ad4:;
  /* 12950ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950ad7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12950ada jmp 0x129507f6 */
  goto L_129507f6;
L_12950adf:;
  /* 12950adf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950ae2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12950ae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12950ae7 je 0x12950bb2 */
  if (C.zf) goto L_12950bb2;
  /* 12950aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950af0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950af3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12950af6:;
  /* 12950af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950af9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12950afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12950afe je 0x12950bb0 */
  if (C.zf) goto L_12950bb0;
  /* 12950b04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950b07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950b0a je 0x12950bb0 */
  if (C.zf) goto L_12950bb0;
  /* 12950b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b13 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12950b16 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950b19 jne 0x12950b29 */
  if (!C.zf) goto L_12950b29;
  /* 12950b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950b21 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12950b24 jmp 0x12950bb0 */
  goto L_12950bb0;
L_12950b29:;
  /* 12950b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12950b2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12950b30 mov edx, dword ptr [0x1296cc98] */
  EDX = (r32((uint32_t)(0x1296cc98)));
  /* 12950b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12950b38 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12950b3c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12950b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12950b43 je 0x12950b7c */
  if (C.zf) goto L_12950b7c;
  /* 12950b45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950b48 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950b4b jbe 0x12950b7c */
  if ((C.cf||C.zf)) goto L_12950b7c;
  /* 12950b4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12950b57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12950b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950b61 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12950b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950b6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12950b6f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950b72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950b74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950b77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950b7a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12950b7c:;
  /* 12950b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950b81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12950b86 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12950b88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950b8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950b93 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12950b95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950b9b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12950b9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950ba1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950ba3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950ba6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950ba9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12950bab jmp 0x12950af6 */
  goto L_12950af6;
L_12950bb0:;
  /* 12950bb0 jmp 0x12950bbb */
  goto L_12950bbb;
L_12950bb2:;
  /* 12950bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950bb5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950bb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12950bbb:;
  /* 12950bbb jmp 0x129507f6 */
  goto L_129507f6;
L_12950bc0:;
  /* 12950bc0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12950bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12950bc6 je 0x12950bec */
  if (C.zf) goto L_12950bec;
  /* 12950bc8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12950bcb push edx */
  push32((uint32_t)(EDX));
  /* 12950bcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950bcf push eax */
  push32((uint32_t)(EAX));
  /* 12950bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12950bd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12950bd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12950bdb push eax */
  push32((uint32_t)(EAX));
  /* 12950bdc call 0x12950020 */
  push32(0x12950be1u); f_12950020();
  /* 12950be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950be4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12950be7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12950bea jmp 0x12950c67 */
  goto L_12950c67;
L_12950bec:;
  /* 12950bec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12950bf1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12950bf3 mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 12950bf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12950bfb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12950bff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12950c05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12950c07 je 0x12950c38 */
  if (C.zf) goto L_12950c38;
  /* 12950c09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950c11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12950c13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12950c15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950c1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950c1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12950c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950c25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950c28 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12950c2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950c2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950c30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950c36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12950c38:;
  /* 12950c38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12950c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950c40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12950c42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12950c44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950c49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950c4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950c4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12950c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12950c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950c57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12950c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12950c5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950c62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950c65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12950c67:;
  /* 12950c67 jmp 0x129507f6 */
  goto L_129507f6;
L_12950c6c:;
  /* 12950c6c mov esp, ebp */
  ESP = (EBP);
  /* 12950c6e pop ebp */
  EBP = (pop32());
  /* 12950c6f ret  */
  ESPCHK(0x129507f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x12950d10 (650 bytes, 178 insns) */
void f_12950d10(void) {
  FTRACE(0x12950d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12950d11 mov ebp, esp */
  EBP = (ESP);
  /* 12950d13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12950d19 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950d1d jne 0x12950e79 */
  if (!C.zf) goto L_12950e79;
  /* 12950d23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950d26 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12950d2c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12950d32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12950d35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12950d3c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12950d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950d48 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12950d4e push edx */
  push32((uint32_t)(EDX));
  /* 12950d4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950d52 push eax */
  push32((uint32_t)(EAX));
  /* 12950d53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950d56 push ecx */
  push32((uint32_t)(ECX));
  /* 12950d57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950d5a push edx */
  push32((uint32_t)(EDX));
  /* 12950d5b call 0x12952130 */
  push32(0x12950d60u); f_12952130();
  /* 12950d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950d63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12950d66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950d6a jne 0x12950dff */
  if (!C.zf) goto L_12950dff;
  /* 12950d70 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x12950d76u);
  /* 12950d76 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950d79 je 0x12950d80 */
  if (C.zf) goto L_12950d80;
  /* 12950d7b jmp 0x12950e5d */
  goto L_12950e5d;
L_12950d80:;
  /* 12950d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950d86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950d89 push eax */
  push32((uint32_t)(EAX));
  /* 12950d8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950d8d push ecx */
  push32((uint32_t)(ECX));
  /* 12950d8e call 0x12952130 */
  push32(0x12950d93u); f_12952130();
  /* 12950d93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950d96 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12950d9c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950da3 jne 0x12950daa */
  if (!C.zf) goto L_12950daa;
  /* 12950da5 jmp 0x12950e5d */
  goto L_12950e5d;
L_12950daa:;
  /* 12950daa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12950dac push 0x1296a7e4 */
  push32((uint32_t)(0x1296a7e4u));
  /* 12950db1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950db3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12950db9 push edx */
  push32((uint32_t)(EDX));
  /* 12950dba call 0x12942b50 */
  push32(0x12950dbfu); f_12942b50();
  /* 12950dbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950dc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12950dc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950dc9 jne 0x12950dd0 */
  if (!C.zf) goto L_12950dd0;
  /* 12950dcb jmp 0x12950e5d */
  goto L_12950e5d;
L_12950dd0:;
  /* 12950dd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12950dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950dd9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12950ddf push eax */
  push32((uint32_t)(EAX));
  /* 12950de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12950de4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950de7 push edx */
  push32((uint32_t)(EDX));
  /* 12950de8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950deb push eax */
  push32((uint32_t)(EAX));
  /* 12950dec call 0x12952130 */
  push32(0x12950df1u); f_12952130();
  /* 12950df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950df4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12950df7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950dfb jne 0x12950dff */
  if (!C.zf) goto L_12950dff;
  /* 12950dfd jmp 0x12950e5d */
  goto L_12950e5d;
L_12950dff:;
  /* 12950dff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12950e01 push 0x1296a7e4 */
  push32((uint32_t)(0x1296a7e4u));
  /* 12950e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950e08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12950e0b push ecx */
  push32((uint32_t)(ECX));
  /* 12950e0c call 0x12942b50 */
  push32(0x12950e11u); f_12942b50();
  /* 12950e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950e14 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12950e1a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12950e1c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12950e22 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950e25 jne 0x12950e29 */
  if (!C.zf) goto L_12950e29;
  /* 12950e27 jmp 0x12950e5d */
  goto L_12950e5d;
L_12950e29:;
  /* 12950e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12950e2c push ecx */
  push32((uint32_t)(ECX));
  /* 12950e2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950e30 push edx */
  push32((uint32_t)(EDX));
  /* 12950e31 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12950e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12950e39 push ecx */
  push32((uint32_t)(ECX));
  /* 12950e3a call 0x12946370 */
  push32(0x12950e3fu); f_12946370();
  /* 12950e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950e42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950e46 je 0x12950e56 */
  if (C.zf) goto L_12950e56;
  /* 12950e48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950e4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950e4d push edx */
  push32((uint32_t)(EDX));
  /* 12950e4e call 0x129435e0 */
  push32(0x12950e53u); f_129435e0();
  /* 12950e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12950e56:;
  /* 12950e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12950e58 jmp 0x12950f96 */
  goto L_12950f96;
L_12950e5d:;
  /* 12950e5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950e61 je 0x12950e71 */
  if (C.zf) goto L_12950e71;
  /* 12950e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12950e65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12950e68 push eax */
  push32((uint32_t)(EAX));
  /* 12950e69 call 0x129435e0 */
  push32(0x12950e6eu); f_129435e0();
  /* 12950e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12950e71:;
  /* 12950e71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12950e74 jmp 0x12950f96 */
  goto L_12950f96;
L_12950e79:;
  /* 12950e79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950e7d jne 0x12950f93 */
  if (!C.zf) goto L_12950f93;
  /* 12950e83 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12950e8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12950e90 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12950e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12950e98 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12950e9e push edx */
  push32((uint32_t)(EDX));
  /* 12950e9f push 0x1296e718 */
  push32((uint32_t)(0x1296e718u));
  /* 12950ea4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12950ea7 push eax */
  push32((uint32_t)(EAX));
  /* 12950ea8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12950eab push ecx */
  push32((uint32_t)(ECX));
  /* 12950eac call 0x12951f90 */
  push32(0x12950eb1u); f_12951f90();
  /* 12950eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12950eb6 jne 0x12950ec0 */
  if (!C.zf) goto L_12950ec0;
  /* 12950eb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12950ebb jmp 0x12950f96 */
  goto L_12950f96;
L_12950ec0:;
  /* 12950ec0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12950ec6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12950ec9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12950ed3 jmp 0x12950ee4 */
  goto L_12950ee4;
L_12950ed5:;
  /* 12950ed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12950edb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12950ede mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12950ee4:;
  /* 12950ee4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950eeb jge 0x12950f8f */
  if ((C.sf==C.of)) goto L_12950f8f;
  /* 12950ef1 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950ef8 jle 0x12950f2b */
  if ((C.zf||C.sf!=C.of)) goto L_12950f2b;
  /* 12950efa push 4 */
  push32((uint32_t)(0x4u));
  /* 12950efc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12950f02 mov dl, byte ptr [ecx*2 + 0x1296e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1296e718)));
  /* 12950f09 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12950f0f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12950f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12950f1a push eax */
  push32((uint32_t)(EAX));
  /* 12950f1b call 0x12948b60 */
  push32(0x12950f20u); f_12948b60();
  /* 12950f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950f23 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12950f29 jmp 0x12950f5e */
  goto L_12950f5e;
L_12950f2b:;
  /* 12950f2b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12950f31 mov dl, byte ptr [ecx*2 + 0x1296e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x1296e718)));
  /* 12950f38 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12950f3e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12950f44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12950f49 mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 12950f4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12950f51 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12950f55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12950f58 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12950f5e:;
  /* 12950f5e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950f65 je 0x12950f88 */
  if (C.zf) goto L_12950f88;
  /* 12950f67 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12950f6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12950f70 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12950f73 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12950f7a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12950f7e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12950f84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12950f86 jmp 0x12950f8a */
  goto L_12950f8a;
L_12950f88:;
  /* 12950f88 jmp 0x12950f8f */
  goto L_12950f8f;
L_12950f8a:;
  /* 12950f8a jmp 0x12950ed5 */
  goto L_12950ed5;
L_12950f8f:;
  /* 12950f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12950f91 jmp 0x12950f96 */
  goto L_12950f96;
L_12950f93:;
  /* 12950f93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12950f96:;
  /* 12950f96 mov esp, ebp */
  ESP = (EBP);
  /* 12950f98 pop ebp */
  EBP = (pop32());
  /* 12950f99 ret  */
  ESPCHK(0x12950d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x12950fa0 (10 bytes, 5 insns) */
void f_12950fa0(void) {
  FTRACE(0x12950fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12950fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12950fa3 mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 12950fa8 pop ebp */
  EBP = (pop32());
  /* 12950fa9 ret  */
  ESPCHK(0x12950fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x12950fb0 (575 bytes, 196 insns) */
void f_12950fb0(void) {
  FTRACE(0x12950fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12950fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12950fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12950fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12950fb5 push 0x1296a7f0 */
  push32((uint32_t)(0x1296a7f0u));
  /* 12950fba push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 12950fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12950fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12950fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12950fcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12950fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12950fd1 push esi */
  push32((uint32_t)(ESI));
  /* 12950fd2 push edi */
  push32((uint32_t)(EDI));
  /* 12950fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12950fd6 cmp dword ptr [0x1296e724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12950fdd jne 0x1295102e */
  if (!C.zf) goto L_1295102e;
  /* 12950fdf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12950fe2 push eax */
  push32((uint32_t)(EAX));
  /* 12950fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12950fe5 push 0x12969f24 */
  push32((uint32_t)(0x12969f24u));
  /* 12950fea push 1 */
  push32((uint32_t)(0x1u));
  /* 12950fec call dword ptr [0x12970324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970324))), 0x12950ff2u);
  /* 12950ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12950ff4 je 0x12951002 */
  if (C.zf) goto L_12951002;
  /* 12950ff6 mov dword ptr [0x1296e724], 1 */
  w32((uint32_t)(0x1296e724), (0x1u));
  /* 12951000 jmp 0x1295102e */
  goto L_1295102e;
L_12951002:;
  /* 12951002 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12951005 push ecx */
  push32((uint32_t)(ECX));
  /* 12951006 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951008 push 0x12969f20 */
  push32((uint32_t)(0x12969f20u));
  /* 1295100d push 1 */
  push32((uint32_t)(0x1u));
  /* 1295100f push 0 */
  push32((uint32_t)(0x0u));
  /* 12951011 call dword ptr [0x12970320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970320))), 0x12951017u);
  /* 12951017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951019 je 0x12951027 */
  if (C.zf) goto L_12951027;
  /* 1295101b mov dword ptr [0x1296e724], 2 */
  w32((uint32_t)(0x1296e724), (0x2u));
  /* 12951025 jmp 0x1295102e */
  goto L_1295102e;
L_12951027:;
  /* 12951027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951029 jmp 0x12951209 */
  goto L_12951209;
L_1295102e:;
  /* 1295102e cmp dword ptr [0x1296e724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951035 jne 0x12951052 */
  if (!C.zf) goto L_12951052;
  /* 12951037 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295103a push edx */
  push32((uint32_t)(EDX));
  /* 1295103b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295103e push eax */
  push32((uint32_t)(EAX));
  /* 1295103f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12951042 push ecx */
  push32((uint32_t)(ECX));
  /* 12951043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951046 push edx */
  push32((uint32_t)(EDX));
  /* 12951047 call dword ptr [0x12970324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970324))), 0x1295104du);
  /* 1295104d jmp 0x12951209 */
  goto L_12951209;
L_12951052:;
  /* 12951052 cmp dword ptr [0x1296e724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951059 jne 0x12951207 */
  if (!C.zf) goto L_12951207;
  /* 1295105f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951063 jne 0x1295106d */
  if (!C.zf) goto L_1295106d;
  /* 12951065 mov eax, dword ptr [0x1296e698] */
  EAX = (r32((uint32_t)(0x1296e698)));
  /* 1295106a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1295106d:;
  /* 1295106d push 0 */
  push32((uint32_t)(0x0u));
  /* 1295106f push 0 */
  push32((uint32_t)(0x0u));
  /* 12951071 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951078 push ecx */
  push32((uint32_t)(ECX));
  /* 12951079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295107c push edx */
  push32((uint32_t)(EDX));
  /* 1295107d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12951082 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12951085 push eax */
  push32((uint32_t)(EAX));
  /* 12951086 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x1295108cu);
  /* 1295108c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1295108f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951093 jne 0x1295109c */
  if (!C.zf) goto L_1295109c;
  /* 12951095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951097 jmp 0x12951209 */
  goto L_12951209;
L_1295109c:;
  /* 1295109c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129510a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129510a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129510a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129510ab call 0x12945cf0 */
  push32(0x129510b0u); f_12945cf0();
  /* 129510b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 129510b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129510b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129510b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129510bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129510bf push edx */
  push32((uint32_t)(EDX));
  /* 129510c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129510c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129510c5 push eax */
  push32((uint32_t)(EAX));
  /* 129510c6 call 0x129468c0 */
  push32(0x129510cbu); f_129468c0();
  /* 129510cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129510ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129510d5 jmp 0x129510ee */
  goto L_129510ee;
  /* 129510d7 mov eax, 1 */
  EAX = (0x1u);
  /* 129510dc ret  */
  ESPCHK(0x12950fb0u, _esp0);
  ESP += 4; return;
  /* 129510dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129510e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 129510e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129510ee:;
  /* 129510ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129510f2 jne 0x129510fb */
  if (!C.zf) goto L_129510fb;
  /* 129510f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129510f6 jmp 0x12951209 */
  goto L_12951209;
L_129510fb:;
  /* 129510fb push 0 */
  push32((uint32_t)(0x0u));
  /* 129510fd push 0 */
  push32((uint32_t)(0x0u));
  /* 129510ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12951102 push ecx */
  push32((uint32_t)(ECX));
  /* 12951103 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12951106 push edx */
  push32((uint32_t)(EDX));
  /* 12951107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295110a push eax */
  push32((uint32_t)(EAX));
  /* 1295110b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295110e push ecx */
  push32((uint32_t)(ECX));
  /* 1295110f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12951114 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12951117 push edx */
  push32((uint32_t)(EDX));
  /* 12951118 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x1295111eu);
  /* 1295111e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951120 jne 0x12951129 */
  if (!C.zf) goto L_12951129;
  /* 12951122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951124 jmp 0x12951209 */
  goto L_12951209;
L_12951129:;
  /* 12951129 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12951130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12951133 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12951137 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295113a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1295113c call 0x12945cf0 */
  push32(0x12951141u); f_12945cf0();
  /* 12951141 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12951144 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12951147 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1295114a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1295114d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12951154 jmp 0x1295116d */
  goto L_1295116d;
  /* 12951156 mov eax, 1 */
  EAX = (0x1u);
  /* 1295115b ret  */
  ESPCHK(0x12950fb0u, _esp0);
  ESP += 4; return;
  /* 1295115c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1295115f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12951166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1295116d:;
  /* 1295116d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951171 jne 0x1295117a */
  if (!C.zf) goto L_1295117a;
  /* 12951173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951175 jmp 0x12951209 */
  goto L_12951209;
L_1295117a:;
  /* 1295117a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295117e jne 0x12951189 */
  if (!C.zf) goto L_12951189;
  /* 12951180 mov edx, dword ptr [0x1296e688] */
  EDX = (r32((uint32_t)(0x1296e688)));
  /* 12951186 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12951189:;
  /* 12951189 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295118c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1295118f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12951195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951198 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1295119b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 129511a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129511a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129511a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129511a9 push edx */
  push32((uint32_t)(EDX));
  /* 129511aa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129511ad push eax */
  push32((uint32_t)(EAX));
  /* 129511ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129511b1 push ecx */
  push32((uint32_t)(ECX));
  /* 129511b2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129511b5 push edx */
  push32((uint32_t)(EDX));
  /* 129511b6 call dword ptr [0x12970320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970320))), 0x129511bcu);
  /* 129511bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129511bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129511c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129511c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129511c7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 129511cc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129511d2 je 0x129511e8 */
  if (C.zf) goto L_129511e8;
  /* 129511d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129511d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129511da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129511dc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129511e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129511e6 je 0x129511ec */
  if (C.zf) goto L_129511ec;
L_129511e8:;
  /* 129511e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129511ea jmp 0x12951209 */
  goto L_12951209;
L_129511ec:;
  /* 129511ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129511ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129511f1 push eax */
  push32((uint32_t)(EAX));
  /* 129511f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129511f5 push ecx */
  push32((uint32_t)(ECX));
  /* 129511f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129511f9 push edx */
  push32((uint32_t)(EDX));
  /* 129511fa call 0x1294aa40 */
  push32(0x129511ffu); f_1294aa40();
  /* 129511ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951202 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12951205 jmp 0x12951209 */
  goto L_12951209;
L_12951207:;
  /* 12951207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12951209:;
  /* 12951209 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1295120c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1295120f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12951216 pop edi */
  EDI = (pop32());
  /* 12951217 pop esi */
  ESI = (pop32());
  /* 12951218 pop ebx */
  EBX = (pop32());
  /* 12951219 mov esp, ebp */
  ESP = (EBP);
  /* 1295121b pop ebp */
  EBP = (pop32());
  /* 1295121c ret  */
  ESPCHK(0x12950fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x12951220 (208 bytes, 85 insns) */
void f_12951220(void) {
  FTRACE(0x12951220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951220 push ebp */
  push32((uint32_t)(EBP));
  /* 12951221 mov ebp, esp */
  EBP = (ESP);
  /* 12951223 push edi */
  push32((uint32_t)(EDI));
  /* 12951224 push esi */
  push32((uint32_t)(ESI));
  /* 12951225 push ebx */
  push32((uint32_t)(EBX));
  /* 12951226 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12951229 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1295122c lea eax, [0x1296e680] */
  EAX = ((uint32_t)(0x1296e680));
  /* 12951232 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951236 jne 0x12951273 */
  if (!C.zf) goto L_12951273;
  /* 12951238 mov al, 0xff */
  AL = (0xffu);
  /* 1295123a mov edi, edi */
  EDI = (EDI);
L_1295123c:;
  /* 1295123c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1295123e je 0x1295126e */
  if (C.zf) goto L_1295126e;
  /* 12951240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12951242 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12951243 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12951245 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12951246 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951248 je 0x1295123c */
  if (C.zf) goto L_1295123c;
  /* 1295124a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1295124c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1295124e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12951250 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12951253 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12951255 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12951257 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12951259 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1295125b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1295125d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1295125f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12951262 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12951264 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12951266 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951268 je 0x1295123c */
  if (C.zf) goto L_1295123c;
  /* 1295126a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1295126c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1295126e:;
  /* 1295126e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12951271 jmp 0x129512eb */
  goto L_129512eb;
L_12951273:;
  /* 12951273 lock inc dword ptr [0x1296e814] */
  x86_unimpl("lock inc @ 0x12951273");
  /* 1295127a cmp dword ptr [0x1296e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951281 jg 0x12951287 */
  if ((!C.zf&&C.sf==C.of)) goto L_12951287;
  /* 12951283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951285 jmp 0x1295129c */
  goto L_1295129c;
L_12951287:;
  /* 12951287 lock dec dword ptr [0x1296e814] */
  x86_unimpl("lock dec @ 0x12951287");
  /* 1295128e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12951290 call 0x12946550 */
  push32(0x12951295u); f_12946550();
  /* 12951295 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1295129c:;
  /* 1295129c mov eax, 0xff */
  EAX = (0xffu);
  /* 129512a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129512a3 nop  */
  /* nop */
L_129512a4:;
  /* 129512a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129512a6 je 0x129512cf */
  if (C.zf) goto L_129512cf;
  /* 129512a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129512aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129512ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 129512ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129512ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129512b0 je 0x129512a4 */
  if (C.zf) goto L_129512a4;
  /* 129512b2 push eax */
  push32((uint32_t)(EAX));
  /* 129512b3 push ebx */
  push32((uint32_t)(EBX));
  /* 129512b4 call 0x12952390 */
  push32(0x129512b9u); f_12952390();
  /* 129512b9 mov ebx, eax */
  EBX = (EAX);
  /* 129512bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129512be call 0x12952390 */
  push32(0x129512c3u); f_12952390();
  /* 129512c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129512c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129512c8 je 0x129512a4 */
  if (C.zf) goto L_129512a4;
  /* 129512ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129512cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129512cf:;
  /* 129512cf mov ebx, eax */
  EBX = (EAX);
  /* 129512d1 pop eax */
  EAX = (pop32());
  /* 129512d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129512d4 jne 0x129512df */
  if (!C.zf) goto L_129512df;
  /* 129512d6 lock dec dword ptr [0x1296e814] */
  x86_unimpl("lock dec @ 0x129512d6");
  /* 129512dd jmp 0x129512e9 */
  goto L_129512e9;
L_129512df:;
  /* 129512df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129512e1 call 0x129465f0 */
  push32(0x129512e6u); f_129465f0();
  /* 129512e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129512e9:;
  /* 129512e9 mov eax, ebx */
  EAX = (EBX);
L_129512eb:;
  /* 129512eb pop ebx */
  EBX = (pop32());
  /* 129512ec pop esi */
  ESI = (pop32());
  /* 129512ed pop edi */
  EDI = (pop32());
  /* 129512ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129512ef ret  */
  ESPCHK(0x12951220u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x129512f0 (257 bytes, 103 insns) */
void f_129512f0(void) {
  FTRACE(0x129512f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129512f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129512f1 mov ebp, esp */
  EBP = (ESP);
  /* 129512f3 push edi */
  push32((uint32_t)(EDI));
  /* 129512f4 push esi */
  push32((uint32_t)(ESI));
  /* 129512f5 push ebx */
  push32((uint32_t)(EBX));
  /* 129512f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129512f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129512fb je 0x129513ea */
  if (C.zf) goto L_129513ea;
  /* 12951301 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12951304 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12951307 lea eax, [0x1296e680] */
  EAX = ((uint32_t)(0x1296e680));
  /* 1295130d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951311 jne 0x12951361 */
  if (!C.zf) goto L_12951361;
  /* 12951313 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12951315 mov bl, 0x5a */
  BL = (0x5au);
  /* 12951317 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12951319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1295131c:;
  /* 1295131c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1295131e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12951320 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12951322 je 0x12951345 */
  if (C.zf) goto L_12951345;
  /* 12951324 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12951326 je 0x12951345 */
  if (C.zf) goto L_12951345;
  /* 12951328 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12951329 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1295132a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1295132c jb 0x12951334 */
  if (C.cf) goto L_12951334;
  /* 1295132e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951330 ja 0x12951334 */
  if ((!C.cf&&!C.zf)) goto L_12951334;
  /* 12951332 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12951334:;
  /* 12951334 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951336 jb 0x1295133e */
  if (C.cf) goto L_1295133e;
  /* 12951338 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1295133a ja 0x1295133e */
  if ((!C.cf&&!C.zf)) goto L_1295133e;
  /* 1295133c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1295133e:;
  /* 1295133e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951340 jne 0x1295134f */
  if (!C.zf) goto L_1295134f;
  /* 12951342 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12951343 jne 0x1295131c */
  if (!C.zf) goto L_1295131c;
L_12951345:;
  /* 12951345 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951347 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12951349 je 0x129513ea */
  if (C.zf) goto L_129513ea;
L_1295134f:;
  /* 1295134f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12951354 jb 0x129513ea */
  if (C.cf) goto L_129513ea;
  /* 1295135a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1295135c jmp 0x129513ea */
  goto L_129513ea;
L_12951361:;
  /* 12951361 lock inc dword ptr [0x1296e814] */
  x86_unimpl("lock inc @ 0x12951361");
  /* 12951368 cmp dword ptr [0x1296e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295136f jg 0x12951375 */
  if ((!C.zf&&C.sf==C.of)) goto L_12951375;
  /* 12951371 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951373 jmp 0x1295138e */
  goto L_1295138e;
L_12951375:;
  /* 12951375 lock dec dword ptr [0x1296e814] */
  x86_unimpl("lock dec @ 0x12951375");
  /* 1295137c mov ebx, ecx */
  EBX = (ECX);
  /* 1295137e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12951380 call 0x12946550 */
  push32(0x12951385u); f_12946550();
  /* 12951385 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1295138c mov ecx, ebx */
  ECX = (EBX);
L_1295138e:;
  /* 1295138e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951390 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12951392 mov edi, edi */
  EDI = (EDI);
L_12951394:;
  /* 12951394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12951396 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951398 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1295139a je 0x129513bf */
  if (C.zf) goto L_129513bf;
  /* 1295139c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1295139e je 0x129513bf */
  if (C.zf) goto L_129513bf;
  /* 129513a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129513a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129513a2 push ecx */
  push32((uint32_t)(ECX));
  /* 129513a3 push eax */
  push32((uint32_t)(EAX));
  /* 129513a4 push ebx */
  push32((uint32_t)(EBX));
  /* 129513a5 call 0x12952390 */
  push32(0x129513aau); f_12952390();
  /* 129513aa mov ebx, eax */
  EBX = (EAX);
  /* 129513ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129513af call 0x12952390 */
  push32(0x129513b4u); f_12952390();
  /* 129513b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129513b7 pop ecx */
  ECX = (pop32());
  /* 129513b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129513ba jne 0x129513c5 */
  if (!C.zf) goto L_129513c5;
  /* 129513bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129513bd jne 0x12951394 */
  if (!C.zf) goto L_12951394;
L_129513bf:;
  /* 129513bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129513c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129513c3 je 0x129513ce */
  if (C.zf) goto L_129513ce;
L_129513c5:;
  /* 129513c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 129513ca jb 0x129513ce */
  if (C.cf) goto L_129513ce;
  /* 129513cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_129513ce:;
  /* 129513ce pop eax */
  EAX = (pop32());
  /* 129513cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129513d1 jne 0x129513dc */
  if (!C.zf) goto L_129513dc;
  /* 129513d3 lock dec dword ptr [0x1296e814] */
  x86_unimpl("lock dec @ 0x129513d3");
  /* 129513da jmp 0x129513ea */
  goto L_129513ea;
L_129513dc:;
  /* 129513dc mov ebx, ecx */
  EBX = (ECX);
  /* 129513de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129513e0 call 0x129465f0 */
  push32(0x129513e5u); f_129465f0();
  /* 129513e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129513e8 mov ecx, ebx */
  ECX = (EBX);
L_129513ea:;
  /* 129513ea mov eax, ecx */
  EAX = (ECX);
  /* 129513ec pop ebx */
  EBX = (pop32());
  /* 129513ed pop esi */
  ESI = (pop32());
  /* 129513ee pop edi */
  EDI = (pop32());
  /* 129513ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129513f0 ret  */
  ESPCHK(0x129512f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x12951400 (255 bytes, 88 insns) */
void f_12951400(void) {
  FTRACE(0x12951400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951400 push ebp */
  push32((uint32_t)(EBP));
  /* 12951401 mov ebp, esp */
  EBP = (ESP);
  /* 12951403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12951406:;
  /* 12951406 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295140d jle 0x12951426 */
  if ((C.zf||C.sf!=C.of)) goto L_12951426;
  /* 1295140f push 8 */
  push32((uint32_t)(0x8u));
  /* 12951411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951416 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12951418 push ecx */
  push32((uint32_t)(ECX));
  /* 12951419 call 0x12948b60 */
  push32(0x1295141eu); f_12948b60();
  /* 1295141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12951424 jmp 0x1295143f */
  goto L_1295143f;
L_12951426:;
  /* 12951426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295142b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295142d mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 12951433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951435 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12951439 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1295143c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1295143f:;
  /* 1295143f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951443 je 0x12951450 */
  if (C.zf) goto L_12951450;
  /* 12951445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295144b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1295144e jmp 0x12951406 */
  goto L_12951406;
L_12951450:;
  /* 12951450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951453 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951455 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12951457 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1295145a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295145d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951460 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12951463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951466 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12951469 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295146d je 0x12951475 */
  if (C.zf) goto L_12951475;
  /* 1295146f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951473 jne 0x12951488 */
  if (!C.zf) goto L_12951488;
L_12951475:;
  /* 12951475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295147a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295147c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1295147f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951482 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951485 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12951488:;
  /* 12951488 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1295148f:;
  /* 1295148f cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951496 jle 0x129514ab */
  if ((C.zf||C.sf!=C.of)) goto L_129514ab;
  /* 12951498 push 4 */
  push32((uint32_t)(0x4u));
  /* 1295149a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295149d push edx */
  push32((uint32_t)(EDX));
  /* 1295149e call 0x12948b60 */
  push32(0x129514a3u); f_12948b60();
  /* 129514a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129514a6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129514a9 jmp 0x129514c0 */
  goto L_129514c0;
L_129514ab:;
  /* 129514ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129514ae mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 129514b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129514b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129514ba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129514bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129514c0:;
  /* 129514c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129514c4 je 0x129514eb */
  if (C.zf) goto L_129514eb;
  /* 129514c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129514c9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129514cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129514cf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 129514d3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129514d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129514d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129514db mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129514dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129514e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129514e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129514e6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129514e9 jmp 0x1295148f */
  goto L_1295148f;
L_129514eb:;
  /* 129514eb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129514ef jne 0x129514f8 */
  if (!C.zf) goto L_129514f8;
  /* 129514f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129514f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129514f6 jmp 0x129514fb */
  goto L_129514fb;
L_129514f8:;
  /* 129514f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129514fb:;
  /* 129514fb mov esp, ebp */
  ESP = (EBP);
  /* 129514fd pop ebp */
  EBP = (pop32());
  /* 129514fe ret  */
  ESPCHK(0x12951400u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x12951500 (17 bytes, 8 insns) */
void f_12951500(void) {
  FTRACE(0x12951500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951500 push ebp */
  push32((uint32_t)(EBP));
  /* 12951501 mov ebp, esp */
  EBP = (ESP);
  /* 12951503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951506 push eax */
  push32((uint32_t)(EAX));
  /* 12951507 call 0x12951400 */
  push32(0x1295150cu); f_12951400();
  /* 1295150c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295150f pop ebp */
  EBP = (pop32());
  /* 12951510 ret  */
  ESPCHK(0x12951500u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12951520 (297 bytes, 106 insns) */
void f_12951520(void) {
  FTRACE(0x12951520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951520 push ebp */
  push32((uint32_t)(EBP));
  /* 12951521 mov ebp, esp */
  EBP = (ESP);
  /* 12951523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951526 push esi */
  push32((uint32_t)(ESI));
L_12951527:;
  /* 12951527 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295152e jle 0x12951547 */
  if ((C.zf||C.sf!=C.of)) goto L_12951547;
  /* 12951530 push 8 */
  push32((uint32_t)(0x8u));
  /* 12951532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951537 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12951539 push ecx */
  push32((uint32_t)(ECX));
  /* 1295153a call 0x12948b60 */
  push32(0x1295153fu); f_12948b60();
  /* 1295153f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951542 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12951545 jmp 0x12951560 */
  goto L_12951560;
L_12951547:;
  /* 12951547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295154a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295154c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295154e mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 12951554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951556 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1295155a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1295155d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12951560:;
  /* 12951560 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951564 je 0x12951571 */
  if (C.zf) goto L_12951571;
  /* 12951566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295156c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1295156f jmp 0x12951527 */
  goto L_12951527;
L_12951571:;
  /* 12951571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951576 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12951578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1295157b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295157e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951581 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12951584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951587 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1295158a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295158e je 0x12951596 */
  if (C.zf) goto L_12951596;
  /* 12951590 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951594 jne 0x129515a9 */
  if (!C.zf) goto L_129515a9;
L_12951596:;
  /* 12951596 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295159b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295159d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129515a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129515a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129515a6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129515a9:;
  /* 129515a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129515b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129515b7:;
  /* 129515b7 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129515be jle 0x129515d3 */
  if ((C.zf||C.sf!=C.of)) goto L_129515d3;
  /* 129515c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 129515c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129515c5 push edx */
  push32((uint32_t)(EDX));
  /* 129515c6 call 0x12948b60 */
  push32(0x129515cbu); f_12948b60();
  /* 129515cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129515ce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129515d1 jmp 0x129515e8 */
  goto L_129515e8;
L_129515d3:;
  /* 129515d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129515d6 mov ecx, dword ptr [0x1296cc98] */
  ECX = (r32((uint32_t)(0x1296cc98)));
  /* 129515dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129515de mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129515e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129515e5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_129515e8:;
  /* 129515e8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129515ec je 0x12951629 */
  if (C.zf) goto L_12951629;
  /* 129515ee push 0 */
  push32((uint32_t)(0x0u));
  /* 129515f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 129515f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129515f5 push eax */
  push32((uint32_t)(EAX));
  /* 129515f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129515f9 push ecx */
  push32((uint32_t)(ECX));
  /* 129515fa call 0x129524c0 */
  push32(0x129515ffu); f_129524c0();
  /* 129515ff mov ecx, eax */
  ECX = (EAX);
  /* 12951601 mov esi, edx */
  ESI = (EDX);
  /* 12951603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951606 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951609 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1295160a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295160c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1295160e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12951611 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12951614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951619 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1295161b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1295161e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12951627 jmp 0x129515b7 */
  goto L_129515b7;
L_12951629:;
  /* 12951629 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295162d jne 0x1295163e */
  if (!C.zf) goto L_1295163e;
  /* 1295162f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951632 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12951634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951637 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295163a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1295163c jmp 0x12951644 */
  goto L_12951644;
L_1295163e:;
  /* 1295163e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12951644:;
  /* 12951644 pop esi */
  ESI = (pop32());
  /* 12951645 mov esp, ebp */
  ESP = (EBP);
  /* 12951647 pop ebp */
  EBP = (pop32());
  /* 12951648 ret  */
  ESPCHK(0x12951520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x12951650 (61 bytes, 18 insns) */
void f_12951650(void) {
  FTRACE(0x12951650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951650 push ebp */
  push32((uint32_t)(EBP));
  /* 12951651 mov ebp, esp */
  EBP = (ESP);
  /* 12951653 cmp dword ptr [0x1296e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295165a jne 0x1295168b */
  if (!C.zf) goto L_1295168b;
  /* 1295165c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1295165e call 0x12946550 */
  push32(0x12951663u); f_12946550();
  /* 12951663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951666 cmp dword ptr [0x1296e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295166d jne 0x12951681 */
  if (!C.zf) goto L_12951681;
  /* 1295166f call 0x129516b0 */
  push32(0x12951674u); f_129516b0();
  /* 12951674 mov eax, dword ptr [0x1296e7e0] */
  EAX = (r32((uint32_t)(0x1296e7e0)));
  /* 12951679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295167c mov dword ptr [0x1296e7e0], eax */
  w32((uint32_t)(0x1296e7e0), (EAX));
L_12951681:;
  /* 12951681 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12951683 call 0x129465f0 */
  push32(0x12951688u); f_129465f0();
  /* 12951688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1295168b:;
  /* 1295168b pop ebp */
  EBP = (pop32());
  /* 1295168c ret  */
  ESPCHK(0x12951650u, _esp0);
  ESP += 4; return;
}

/* FUN_10011690 @ 0x12951690 (30 bytes, 11 insns) */
void f_12951690(void) {
  FTRACE(0x12951690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951690 push ebp */
  push32((uint32_t)(EBP));
  /* 12951691 mov ebp, esp */
  EBP = (ESP);
  /* 12951693 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12951695 call 0x12946550 */
  push32(0x1295169au); f_12946550();
  /* 1295169a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295169d call 0x129516b0 */
  push32(0x129516a2u); f_129516b0();
  /* 129516a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129516a4 call 0x129465f0 */
  push32(0x129516a9u); f_129465f0();
  /* 129516a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129516ac pop ebp */
  EBP = (pop32());
  /* 129516ad ret  */
  ESPCHK(0x12951690u, _esp0);
  ESP += 4; return;
}

/* FUN_100116b0 @ 0x129516b0 (939 bytes, 266 insns) */
void f_129516b0(void) {
  FTRACE(0x129516b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129516b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129516b1 mov ebp, esp */
  EBP = (ESP);
  /* 129516b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129516b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129516bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 129516bf call 0x12946550 */
  push32(0x129516c4u); f_12946550();
  /* 129516c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129516c7 mov dword ptr [0x1296e728], 0 */
  w32((uint32_t)(0x1296e728), (0x0u));
  /* 129516d1 mov dword ptr [0x1296de38], 0xffffffff */
  w32((uint32_t)(0x1296de38), (0xffffffffu));
  /* 129516db mov eax, dword ptr [0x1296de38] */
  EAX = (r32((uint32_t)(0x1296de38)));
  /* 129516e0 mov dword ptr [0x1296de28], eax */
  w32((uint32_t)(0x1296de28), (EAX));
  /* 129516e5 push 0x1296a850 */
  push32((uint32_t)(0x1296a850u));
  /* 129516ea call 0x12952530 */
  push32(0x129516efu); f_12952530();
  /* 129516ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129516f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129516f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129516f9 jne 0x12951833 */
  if (!C.zf) goto L_12951833;
  /* 129516ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 12951701 call 0x129465f0 */
  push32(0x12951706u); f_129465f0();
  /* 12951706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951709 push 0x1296e730 */
  push32((uint32_t)(0x1296e730u));
  /* 1295170e call dword ptr [0x1297023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297023c))), 0x12951714u);
  /* 12951714 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951717 je 0x1295182e */
  if (C.zf) goto L_1295182e;
  /* 1295171d mov dword ptr [0x1296e728], 1 */
  w32((uint32_t)(0x1296e728), (0x1u));
  /* 12951727 mov ecx, dword ptr [0x1296e730] */
  ECX = (r32((uint32_t)(0x1296e730)));
  /* 1295172d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951730 mov dword ptr [0x1296dd90], ecx */
  w32((uint32_t)(0x1296dd90), (ECX));
  /* 12951736 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951738 mov dx, word ptr [0x1296e776] */
  DX = (r16((uint32_t)(0x1296e776)));
  /* 1295173f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12951741 je 0x12951759 */
  if (C.zf) goto L_12951759;
  /* 12951743 mov eax, dword ptr [0x1296e784] */
  EAX = (r32((uint32_t)(0x1296e784)));
  /* 12951748 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1295174b mov ecx, dword ptr [0x1296dd90] */
  ECX = (r32((uint32_t)(0x1296dd90)));
  /* 12951751 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951753 mov dword ptr [0x1296dd90], ecx */
  w32((uint32_t)(0x1296dd90), (ECX));
L_12951759:;
  /* 12951759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1295175b mov dx, word ptr [0x1296e7ca] */
  DX = (r16((uint32_t)(0x1296e7ca)));
  /* 12951762 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12951764 je 0x1295178e */
  if (C.zf) goto L_1295178e;
  /* 12951766 cmp dword ptr [0x1296e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295176d je 0x1295178e */
  if (C.zf) goto L_1295178e;
  /* 1295176f mov dword ptr [0x1296dd94], 1 */
  w32((uint32_t)(0x1296dd94), (0x1u));
  /* 12951779 mov eax, dword ptr [0x1296e7d8] */
  EAX = (r32((uint32_t)(0x1296e7d8)));
  /* 1295177e sub eax, dword ptr [0x1296e784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296e784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951784 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951787 mov dword ptr [0x1296dd98], eax */
  w32((uint32_t)(0x1296dd98), (EAX));
  /* 1295178c jmp 0x129517a2 */
  goto L_129517a2;
L_1295178e:;
  /* 1295178e mov dword ptr [0x1296dd94], 0 */
  w32((uint32_t)(0x1296dd94), (0x0u));
  /* 12951798 mov dword ptr [0x1296dd98], 0 */
  w32((uint32_t)(0x1296dd98), (0x0u));
L_129517a2:;
  /* 129517a2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 129517a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129517a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129517a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129517aa mov edx, dword ptr [0x1296de1c] */
  EDX = (r32((uint32_t)(0x1296de1c)));
  /* 129517b0 push edx */
  push32((uint32_t)(EDX));
  /* 129517b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129517b3 push 0x1296e734 */
  push32((uint32_t)(0x1296e734u));
  /* 129517b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129517bd mov eax, dword ptr [0x1296e698] */
  EAX = (r32((uint32_t)(0x1296e698)));
  /* 129517c2 push eax */
  push32((uint32_t)(EAX));
  /* 129517c3 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x129517c9u);
  /* 129517c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129517cb je 0x129517df */
  if (C.zf) goto L_129517df;
  /* 129517cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129517d1 jne 0x129517df */
  if (!C.zf) goto L_129517df;
  /* 129517d3 mov ecx, dword ptr [0x1296de1c] */
  ECX = (r32((uint32_t)(0x1296de1c)));
  /* 129517d9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 129517dd jmp 0x129517e8 */
  goto L_129517e8;
L_129517df:;
  /* 129517df mov edx, dword ptr [0x1296de1c] */
  EDX = (r32((uint32_t)(0x1296de1c)));
  /* 129517e5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_129517e8:;
  /* 129517e8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129517eb push eax */
  push32((uint32_t)(EAX));
  /* 129517ec push 0 */
  push32((uint32_t)(0x0u));
  /* 129517ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129517f0 mov ecx, dword ptr [0x1296de20] */
  ECX = (r32((uint32_t)(0x1296de20)));
  /* 129517f6 push ecx */
  push32((uint32_t)(ECX));
  /* 129517f7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129517f9 push 0x1296e788 */
  push32((uint32_t)(0x1296e788u));
  /* 129517fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12951803 mov edx, dword ptr [0x1296e698] */
  EDX = (r32((uint32_t)(0x1296e698)));
  /* 12951809 push edx */
  push32((uint32_t)(EDX));
  /* 1295180a call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x12951810u);
  /* 12951810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951812 je 0x12951825 */
  if (C.zf) goto L_12951825;
  /* 12951814 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951818 jne 0x12951825 */
  if (!C.zf) goto L_12951825;
  /* 1295181a mov eax, dword ptr [0x1296de20] */
  EAX = (r32((uint32_t)(0x1296de20)));
  /* 1295181f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12951823 jmp 0x1295182e */
  goto L_1295182e;
L_12951825:;
  /* 12951825 mov ecx, dword ptr [0x1296de20] */
  ECX = (r32((uint32_t)(0x1296de20)));
  /* 1295182b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1295182e:;
  /* 1295182e jmp 0x12951a57 */
  goto L_12951a57;
L_12951833:;
  /* 12951833 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951836 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12951839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1295183b je 0x1295185d */
  if (C.zf) goto L_1295185d;
  /* 1295183d cmp dword ptr [0x1296e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951844 je 0x1295186c */
  if (C.zf) goto L_1295186c;
  /* 12951846 mov ecx, dword ptr [0x1296e7dc] */
  ECX = (r32((uint32_t)(0x1296e7dc)));
  /* 1295184c push ecx */
  push32((uint32_t)(ECX));
  /* 1295184d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951850 push edx */
  push32((uint32_t)(EDX));
  /* 12951851 call 0x1294e7e0 */
  push32(0x12951856u); f_1294e7e0();
  /* 12951856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1295185b jne 0x1295186c */
  if (!C.zf) goto L_1295186c;
L_1295185d:;
  /* 1295185d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1295185f call 0x129465f0 */
  push32(0x12951864u); f_129465f0();
  /* 12951864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951867 jmp 0x12951a57 */
  goto L_12951a57;
L_1295186c:;
  /* 1295186c push 2 */
  push32((uint32_t)(0x2u));
  /* 1295186e mov eax, dword ptr [0x1296e7dc] */
  EAX = (r32((uint32_t)(0x1296e7dc)));
  /* 12951873 push eax */
  push32((uint32_t)(EAX));
  /* 12951874 call 0x129435e0 */
  push32(0x12951879u); f_129435e0();
  /* 12951879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295187c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12951881 push 0x1296a848 */
  push32((uint32_t)(0x1296a848u));
  /* 12951886 push 2 */
  push32((uint32_t)(0x2u));
  /* 12951888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295188b push ecx */
  push32((uint32_t)(ECX));
  /* 1295188c call 0x12945980 */
  push32(0x12951891u); f_12945980();
  /* 12951891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951897 push eax */
  push32((uint32_t)(EAX));
  /* 12951898 call 0x12942b50 */
  push32(0x1295189du); f_12942b50();
  /* 1295189d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129518a0 mov dword ptr [0x1296e7dc], eax */
  w32((uint32_t)(0x1296e7dc), (EAX));
  /* 129518a5 cmp dword ptr [0x1296e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129518ac jne 0x129518bd */
  if (!C.zf) goto L_129518bd;
  /* 129518ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 129518b0 call 0x129465f0 */
  push32(0x129518b5u); f_129465f0();
  /* 129518b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129518b8 jmp 0x12951a57 */
  goto L_12951a57;
L_129518bd:;
  /* 129518bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129518c0 push edx */
  push32((uint32_t)(EDX));
  /* 129518c1 mov eax, dword ptr [0x1296e7dc] */
  EAX = (r32((uint32_t)(0x1296e7dc)));
  /* 129518c6 push eax */
  push32((uint32_t)(EAX));
  /* 129518c7 call 0x12945b00 */
  push32(0x129518ccu); f_12945b00();
  /* 129518cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129518cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 129518d1 call 0x129465f0 */
  push32(0x129518d6u); f_129465f0();
  /* 129518d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129518d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 129518db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129518de push ecx */
  push32((uint32_t)(ECX));
  /* 129518df mov edx, dword ptr [0x1296de1c] */
  EDX = (r32((uint32_t)(0x1296de1c)));
  /* 129518e5 push edx */
  push32((uint32_t)(EDX));
  /* 129518e6 call 0x12946370 */
  push32(0x129518ebu); f_12946370();
  /* 129518eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129518ee mov eax, dword ptr [0x1296de1c] */
  EAX = (r32((uint32_t)(0x1296de1c)));
  /* 129518f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 129518f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129518fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129518fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12951900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951903 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12951906 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951909 jne 0x1295191d */
  if (!C.zf) goto L_1295191d;
  /* 1295190b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295190e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951911 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12951914 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295191a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1295191d:;
  /* 1295191d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951920 push eax */
  push32((uint32_t)(EAX));
  /* 12951921 call 0x12951400 */
  push32(0x12951926u); f_12951400();
  /* 12951926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951929 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1295192f mov dword ptr [0x1296dd90], eax */
  w32((uint32_t)(0x1296dd90), (EAX));
L_12951934:;
  /* 12951934 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951937 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1295193a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295193d je 0x12951955 */
  if (C.zf) goto L_12951955;
  /* 1295193f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951942 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12951945 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951948 jl 0x12951960 */
  if ((C.sf!=C.of)) goto L_12951960;
  /* 1295194a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295194d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12951950 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951953 jg 0x12951960 */
  if ((!C.zf&&C.sf==C.of)) goto L_12951960;
L_12951955:;
  /* 12951955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295195b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1295195e jmp 0x12951934 */
  goto L_12951934;
L_12951960:;
  /* 12951960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951963 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12951966 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951969 jne 0x12951a05 */
  if (!C.zf) goto L_12951a05;
  /* 1295196f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951975 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12951978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295197b push edx */
  push32((uint32_t)(EDX));
  /* 1295197c call 0x12951400 */
  push32(0x12951981u); f_12951400();
  /* 12951981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951984 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951987 mov ecx, dword ptr [0x1296dd90] */
  ECX = (r32((uint32_t)(0x1296dd90)));
  /* 1295198d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295198f mov dword ptr [0x1296dd90], ecx */
  w32((uint32_t)(0x1296dd90), (ECX));
L_12951995:;
  /* 12951995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951998 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1295199b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295199e jl 0x129519b6 */
  if ((C.sf!=C.of)) goto L_129519b6;
  /* 129519a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129519a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129519a9 jg 0x129519b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_129519b6;
  /* 129519ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129519b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129519b4 jmp 0x12951995 */
  goto L_12951995;
L_129519b6:;
  /* 129519b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129519bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129519bf jne 0x12951a05 */
  if (!C.zf) goto L_12951a05;
  /* 129519c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129519c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129519ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519cd push ecx */
  push32((uint32_t)(ECX));
  /* 129519ce call 0x12951400 */
  push32(0x129519d3u); f_12951400();
  /* 129519d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129519d6 mov edx, dword ptr [0x1296dd90] */
  EDX = (r32((uint32_t)(0x1296dd90)));
  /* 129519dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129519de mov dword ptr [0x1296dd90], edx */
  w32((uint32_t)(0x1296dd90), (EDX));
L_129519e4:;
  /* 129519e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129519ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129519ed jl 0x12951a05 */
  if ((C.sf!=C.of)) goto L_12951a05;
  /* 129519ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129519f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129519f8 jg 0x12951a05 */
  if ((!C.zf&&C.sf==C.of)) goto L_12951a05;
  /* 129519fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129519fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12951a03 jmp 0x129519e4 */
  goto L_129519e4;
L_12951a05:;
  /* 12951a05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951a09 je 0x12951a19 */
  if (C.zf) goto L_12951a19;
  /* 12951a0b mov edx, dword ptr [0x1296dd90] */
  EDX = (r32((uint32_t)(0x1296dd90)));
  /* 12951a11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12951a13 mov dword ptr [0x1296dd90], edx */
  w32((uint32_t)(0x1296dd90), (EDX));
L_12951a19:;
  /* 12951a19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951a1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12951a1f mov dword ptr [0x1296dd94], ecx */
  w32((uint32_t)(0x1296dd94), (ECX));
  /* 12951a25 cmp dword ptr [0x1296dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951a2c je 0x12951a4e */
  if (C.zf) goto L_12951a4e;
  /* 12951a2e push 3 */
  push32((uint32_t)(0x3u));
  /* 12951a30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951a33 push edx */
  push32((uint32_t)(EDX));
  /* 12951a34 mov eax, dword ptr [0x1296de20] */
  EAX = (r32((uint32_t)(0x1296de20)));
  /* 12951a39 push eax */
  push32((uint32_t)(EAX));
  /* 12951a3a call 0x12946370 */
  push32(0x12951a3fu); f_12946370();
  /* 12951a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951a42 mov ecx, dword ptr [0x1296de20] */
  ECX = (r32((uint32_t)(0x1296de20)));
  /* 12951a48 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12951a4c jmp 0x12951a57 */
  goto L_12951a57;
L_12951a4e:;
  /* 12951a4e mov edx, dword ptr [0x1296de20] */
  EDX = (r32((uint32_t)(0x1296de20)));
  /* 12951a54 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12951a57:;
  /* 12951a57 mov esp, ebp */
  ESP = (EBP);
  /* 12951a59 pop ebp */
  EBP = (pop32());
  /* 12951a5a ret  */
  ESPCHK(0x129516b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x12951a60 (46 bytes, 18 insns) */
void f_12951a60(void) {
  FTRACE(0x12951a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12951a61 mov ebp, esp */
  EBP = (ESP);
  /* 12951a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12951a64 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12951a66 call 0x12946550 */
  push32(0x12951a6bu); f_12946550();
  /* 12951a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951a71 push eax */
  push32((uint32_t)(EAX));
  /* 12951a72 call 0x12951a90 */
  push32(0x12951a77u); f_12951a90();
  /* 12951a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951a7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12951a7d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12951a7f call 0x129465f0 */
  push32(0x12951a84u); f_129465f0();
  /* 12951a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951a8a mov esp, ebp */
  ESP = (EBP);
  /* 12951a8c pop ebp */
  EBP = (pop32());
  /* 12951a8d ret  */
  ESPCHK(0x12951a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a90 @ 0x12951a90 (762 bytes, 246 insns) */
void f_12951a90(void) {
  FTRACE(0x12951a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12951a91 mov ebp, esp */
  EBP = (ESP);
  /* 12951a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12951a94 cmp dword ptr [0x1296dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951a9b jne 0x12951aa4 */
  if (!C.zf) goto L_12951aa4;
  /* 12951a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951a9f jmp 0x12951d86 */
  goto L_12951d86;
L_12951aa4:;
  /* 12951aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951aa7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12951aaa cmp ecx, dword ptr [0x1296de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951ab0 jne 0x12951ac4 */
  if (!C.zf) goto L_12951ac4;
  /* 12951ab2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951ab5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12951ab8 cmp eax, dword ptr [0x1296de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951abe je 0x12951c8b */
  if (C.zf) goto L_12951c8b;
L_12951ac4:;
  /* 12951ac4 cmp dword ptr [0x1296e728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951acb je 0x12951c45 */
  if (C.zf) goto L_12951c45;
  /* 12951ad1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951ad3 mov cx, word ptr [0x1296e7c8] */
  CX = (r16((uint32_t)(0x1296e7c8)));
  /* 12951ada test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12951adc jne 0x12951b39 */
  if (!C.zf) goto L_12951b39;
  /* 12951ade xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951ae0 mov dx, word ptr [0x1296e7d6] */
  DX = (r16((uint32_t)(0x1296e7d6)));
  /* 12951ae7 push edx */
  push32((uint32_t)(EDX));
  /* 12951ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951aea mov ax, word ptr [0x1296e7d4] */
  AX = (r16((uint32_t)(0x1296e7d4)));
  /* 12951af0 push eax */
  push32((uint32_t)(EAX));
  /* 12951af1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951af3 mov cx, word ptr [0x1296e7d2] */
  CX = (r16((uint32_t)(0x1296e7d2)));
  /* 12951afa push ecx */
  push32((uint32_t)(ECX));
  /* 12951afb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951afd mov dx, word ptr [0x1296e7d0] */
  DX = (r16((uint32_t)(0x1296e7d0)));
  /* 12951b04 push edx */
  push32((uint32_t)(EDX));
  /* 12951b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951b09 mov ax, word ptr [0x1296e7cc] */
  AX = (r16((uint32_t)(0x1296e7cc)));
  /* 12951b0f push eax */
  push32((uint32_t)(EAX));
  /* 12951b10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951b12 mov cx, word ptr [0x1296e7ce] */
  CX = (r16((uint32_t)(0x1296e7ce)));
  /* 12951b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12951b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951b1c mov dx, word ptr [0x1296e7ca] */
  DX = (r16((uint32_t)(0x1296e7ca)));
  /* 12951b23 push edx */
  push32((uint32_t)(EDX));
  /* 12951b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951b27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12951b2a push ecx */
  push32((uint32_t)(ECX));
  /* 12951b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 12951b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12951b2f call 0x12951d90 */
  push32(0x12951b34u); f_12951d90();
  /* 12951b34 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951b37 jmp 0x12951b8a */
  goto L_12951b8a;
L_12951b39:;
  /* 12951b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951b3b mov dx, word ptr [0x1296e7d6] */
  DX = (r16((uint32_t)(0x1296e7d6)));
  /* 12951b42 push edx */
  push32((uint32_t)(EDX));
  /* 12951b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951b45 mov ax, word ptr [0x1296e7d4] */
  AX = (r16((uint32_t)(0x1296e7d4)));
  /* 12951b4b push eax */
  push32((uint32_t)(EAX));
  /* 12951b4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951b4e mov cx, word ptr [0x1296e7d2] */
  CX = (r16((uint32_t)(0x1296e7d2)));
  /* 12951b55 push ecx */
  push32((uint32_t)(ECX));
  /* 12951b56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951b58 mov dx, word ptr [0x1296e7d0] */
  DX = (r16((uint32_t)(0x1296e7d0)));
  /* 12951b5f push edx */
  push32((uint32_t)(EDX));
  /* 12951b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951b62 mov ax, word ptr [0x1296e7ce] */
  AX = (r16((uint32_t)(0x1296e7ce)));
  /* 12951b68 push eax */
  push32((uint32_t)(EAX));
  /* 12951b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12951b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951b6f mov cx, word ptr [0x1296e7ca] */
  CX = (r16((uint32_t)(0x1296e7ca)));
  /* 12951b76 push ecx */
  push32((uint32_t)(ECX));
  /* 12951b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951b7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12951b7d push eax */
  push32((uint32_t)(EAX));
  /* 12951b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12951b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951b82 call 0x12951d90 */
  push32(0x12951b87u); f_12951d90();
  /* 12951b87 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12951b8a:;
  /* 12951b8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951b8c mov cx, word ptr [0x1296e774] */
  CX = (r16((uint32_t)(0x1296e774)));
  /* 12951b93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12951b95 jne 0x12951bf2 */
  if (!C.zf) goto L_12951bf2;
  /* 12951b97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951b99 mov dx, word ptr [0x1296e782] */
  DX = (r16((uint32_t)(0x1296e782)));
  /* 12951ba0 push edx */
  push32((uint32_t)(EDX));
  /* 12951ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951ba3 mov ax, word ptr [0x1296e780] */
  AX = (r16((uint32_t)(0x1296e780)));
  /* 12951ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12951baa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951bac mov cx, word ptr [0x1296e77e] */
  CX = (r16((uint32_t)(0x1296e77e)));
  /* 12951bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12951bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951bb6 mov dx, word ptr [0x1296e77c] */
  DX = (r16((uint32_t)(0x1296e77c)));
  /* 12951bbd push edx */
  push32((uint32_t)(EDX));
  /* 12951bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12951bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951bc2 mov ax, word ptr [0x1296e778] */
  AX = (r16((uint32_t)(0x1296e778)));
  /* 12951bc8 push eax */
  push32((uint32_t)(EAX));
  /* 12951bc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951bcb mov cx, word ptr [0x1296e77a] */
  CX = (r16((uint32_t)(0x1296e77a)));
  /* 12951bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12951bd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951bd5 mov dx, word ptr [0x1296e776] */
  DX = (r16((uint32_t)(0x1296e776)));
  /* 12951bdc push edx */
  push32((uint32_t)(EDX));
  /* 12951bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951be0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12951be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12951be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951be8 call 0x12951d90 */
  push32(0x12951bedu); f_12951d90();
  /* 12951bed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951bf0 jmp 0x12951c43 */
  goto L_12951c43;
L_12951bf2:;
  /* 12951bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951bf4 mov dx, word ptr [0x1296e782] */
  DX = (r16((uint32_t)(0x1296e782)));
  /* 12951bfb push edx */
  push32((uint32_t)(EDX));
  /* 12951bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951bfe mov ax, word ptr [0x1296e780] */
  AX = (r16((uint32_t)(0x1296e780)));
  /* 12951c04 push eax */
  push32((uint32_t)(EAX));
  /* 12951c05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951c07 mov cx, word ptr [0x1296e77e] */
  CX = (r16((uint32_t)(0x1296e77e)));
  /* 12951c0e push ecx */
  push32((uint32_t)(ECX));
  /* 12951c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12951c11 mov dx, word ptr [0x1296e77c] */
  DX = (r16((uint32_t)(0x1296e77c)));
  /* 12951c18 push edx */
  push32((uint32_t)(EDX));
  /* 12951c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951c1b mov ax, word ptr [0x1296e77a] */
  AX = (r16((uint32_t)(0x1296e77a)));
  /* 12951c21 push eax */
  push32((uint32_t)(EAX));
  /* 12951c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12951c28 mov cx, word ptr [0x1296e776] */
  CX = (r16((uint32_t)(0x1296e776)));
  /* 12951c2f push ecx */
  push32((uint32_t)(ECX));
  /* 12951c30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951c33 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12951c36 push eax */
  push32((uint32_t)(EAX));
  /* 12951c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c3b call 0x12951d90 */
  push32(0x12951c40u); f_12951d90();
  /* 12951c40 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12951c43:;
  /* 12951c43 jmp 0x12951c8b */
  goto L_12951c8b;
L_12951c45:;
  /* 12951c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12951c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951c53 push 4 */
  push32((uint32_t)(0x4u));
  /* 12951c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951c58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12951c5b push edx */
  push32((uint32_t)(EDX));
  /* 12951c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12951c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12951c60 call 0x12951d90 */
  push32(0x12951c65u); f_12951d90();
  /* 12951c65 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12951c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c74 push 5 */
  push32((uint32_t)(0x5u));
  /* 12951c76 push 0xa */
  push32((uint32_t)(0xau));
  /* 12951c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951c7b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12951c7e push ecx */
  push32((uint32_t)(ECX));
  /* 12951c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12951c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951c83 call 0x12951d90 */
  push32(0x12951c88u); f_12951d90();
  /* 12951c88 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12951c8b:;
  /* 12951c8b mov edx, dword ptr [0x1296de2c] */
  EDX = (r32((uint32_t)(0x1296de2c)));
  /* 12951c91 cmp edx, dword ptr [0x1296de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951c97 jge 0x12951ce4 */
  if ((C.sf==C.of)) goto L_12951ce4;
  /* 12951c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951c9c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12951c9f cmp ecx, dword ptr [0x1296de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951ca5 jl 0x12951cb5 */
  if ((C.sf!=C.of)) goto L_12951cb5;
  /* 12951ca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951caa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12951cad cmp eax, dword ptr [0x1296de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951cb3 jle 0x12951cbc */
  if ((C.zf||C.sf!=C.of)) goto L_12951cbc;
L_12951cb5:;
  /* 12951cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951cb7 jmp 0x12951d86 */
  goto L_12951d86;
L_12951cbc:;
  /* 12951cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951cbf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12951cc2 cmp edx, dword ptr [0x1296de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951cc8 jle 0x12951ce2 */
  if ((C.zf||C.sf!=C.of)) goto L_12951ce2;
  /* 12951cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951ccd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12951cd0 cmp ecx, dword ptr [0x1296de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951cd6 jge 0x12951ce2 */
  if ((C.sf==C.of)) goto L_12951ce2;
  /* 12951cd8 mov eax, 1 */
  EAX = (0x1u);
  /* 12951cdd jmp 0x12951d86 */
  goto L_12951d86;
L_12951ce2:;
  /* 12951ce2 jmp 0x12951d27 */
  goto L_12951d27;
L_12951ce4:;
  /* 12951ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951ce7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12951cea cmp eax, dword ptr [0x1296de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951cf0 jl 0x12951d00 */
  if ((C.sf!=C.of)) goto L_12951d00;
  /* 12951cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951cf5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12951cf8 cmp edx, dword ptr [0x1296de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951cfe jle 0x12951d07 */
  if ((C.zf||C.sf!=C.of)) goto L_12951d07;
L_12951d00:;
  /* 12951d00 mov eax, 1 */
  EAX = (0x1u);
  /* 12951d05 jmp 0x12951d86 */
  goto L_12951d86;
L_12951d07:;
  /* 12951d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d0a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12951d0d cmp ecx, dword ptr [0x1296de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d13 jle 0x12951d27 */
  if ((C.zf||C.sf!=C.of)) goto L_12951d27;
  /* 12951d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d18 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12951d1b cmp eax, dword ptr [0x1296de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d21 jge 0x12951d27 */
  if ((C.sf==C.of)) goto L_12951d27;
  /* 12951d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951d25 jmp 0x12951d86 */
  goto L_12951d86;
L_12951d27:;
  /* 12951d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12951d2d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12951d35 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d3a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12951d3d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951d43 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951d45 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951d4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12951d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12951d51 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12951d54 cmp edx, dword ptr [0x1296de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d5a jne 0x12951d72 */
  if (!C.zf) goto L_12951d72;
  /* 12951d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951d5f cmp eax, dword ptr [0x1296de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d65 jl 0x12951d6e */
  if ((C.sf!=C.of)) goto L_12951d6e;
  /* 12951d67 mov eax, 1 */
  EAX = (0x1u);
  /* 12951d6c jmp 0x12951d86 */
  goto L_12951d86;
L_12951d6e:;
  /* 12951d6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951d70 jmp 0x12951d86 */
  goto L_12951d86;
L_12951d72:;
  /* 12951d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951d75 cmp ecx, dword ptr [0x1296de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d7b jge 0x12951d84 */
  if ((C.sf==C.of)) goto L_12951d84;
  /* 12951d7d mov eax, 1 */
  EAX = (0x1u);
  /* 12951d82 jmp 0x12951d86 */
  goto L_12951d86;
L_12951d84:;
  /* 12951d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12951d86:;
  /* 12951d86 mov esp, ebp */
  ESP = (EBP);
  /* 12951d88 pop ebp */
  EBP = (pop32());
  /* 12951d89 ret  */
  ESPCHK(0x12951a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x12951d90 (504 bytes, 145 insns) */
void f_12951d90(void) {
  FTRACE(0x12951d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12951d91 mov ebp, esp */
  EBP = (ESP);
  /* 12951d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951d96 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951d9a jne 0x12951e6c */
  if (!C.zf) goto L_12951e6c;
  /* 12951da0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951da3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12951da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951da8 jne 0x12951db9 */
  if (!C.zf) goto L_12951db9;
  /* 12951daa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951dad mov edx, dword ptr [ecx*4 + 0x1296de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296de4c)));
  /* 12951db4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12951db7 jmp 0x12951dc6 */
  goto L_12951dc6;
L_12951db9:;
  /* 12951db9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951dbc mov ecx, dword ptr [eax*4 + 0x1296de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296de80)));
  /* 12951dc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12951dc6:;
  /* 12951dc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12951dc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951dcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12951dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951dd2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951dd5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951ddb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951dde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951de3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951de6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12951de9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12951ded cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12951dee mov ecx, 7 */
  ECX = (0x7u);
  /* 12951df3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12951df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12951df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12951dfb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951dfe jge 0x12951e19 */
  if ((C.sf==C.of)) goto L_12951e19;
  /* 12951e00 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12951e03 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951e06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12951e09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951e0c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951e0f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951e12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951e14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12951e17 jmp 0x12951e2d */
  goto L_12951e2d;
L_12951e19:;
  /* 12951e19 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12951e1c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951e1f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12951e22 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951e25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951e28 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951e2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12951e2d:;
  /* 12951e2d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951e31 jne 0x12951e6a */
  if (!C.zf) goto L_12951e6a;
  /* 12951e33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951e36 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12951e39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12951e3b jne 0x12951e4c */
  if (!C.zf) goto L_12951e4c;
  /* 12951e3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951e40 mov eax, dword ptr [edx*4 + 0x1296de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296de50)));
  /* 12951e47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12951e4a jmp 0x12951e59 */
  goto L_12951e59;
L_12951e4c:;
  /* 12951e4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951e4f mov edx, dword ptr [ecx*4 + 0x1296de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296de84)));
  /* 12951e56 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12951e59:;
  /* 12951e59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951e5c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951e5f jle 0x12951e6a */
  if ((C.zf||C.sf!=C.of)) goto L_12951e6a;
  /* 12951e61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951e64 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951e67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12951e6a:;
  /* 12951e6a jmp 0x12951ea1 */
  goto L_12951ea1;
L_12951e6c:;
  /* 12951e6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951e6f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12951e72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12951e74 jne 0x12951e85 */
  if (!C.zf) goto L_12951e85;
  /* 12951e76 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951e79 mov ecx, dword ptr [eax*4 + 0x1296de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296de4c)));
  /* 12951e80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12951e83 jmp 0x12951e92 */
  goto L_12951e92;
L_12951e85:;
  /* 12951e85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12951e88 mov eax, dword ptr [edx*4 + 0x1296de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296de80)));
  /* 12951e8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12951e92:;
  /* 12951e92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12951e95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12951e98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951e9b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951e9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12951ea1:;
  /* 12951ea1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951ea5 jne 0x12951ee1 */
  if (!C.zf) goto L_12951ee1;
  /* 12951ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951eaa mov dword ptr [0x1296de2c], eax */
  w32((uint32_t)(0x1296de2c), (EAX));
  /* 12951eaf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12951eb2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951eb5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12951eb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951eba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951ebd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12951ec0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951ec2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951ec8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12951ecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951ecd mov dword ptr [0x1296de30], ecx */
  w32((uint32_t)(0x1296de30), (ECX));
  /* 12951ed3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951ed6 mov dword ptr [0x1296de28], edx */
  w32((uint32_t)(0x1296de28), (EDX));
  /* 12951edc jmp 0x12951f84 */
  goto L_12951f84;
L_12951ee1:;
  /* 12951ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12951ee4 mov dword ptr [0x1296de3c], eax */
  w32((uint32_t)(0x1296de3c), (EAX));
  /* 12951ee9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12951eec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951eef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12951ef2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951ef4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951ef7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12951efa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951efc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951f02 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12951f05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951f07 mov dword ptr [0x1296de40], ecx */
  w32((uint32_t)(0x1296de40), (ECX));
  /* 12951f0d mov edx, dword ptr [0x1296dd98] */
  EDX = (r32((uint32_t)(0x1296dd98)));
  /* 12951f13 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12951f19 mov eax, dword ptr [0x1296de40] */
  EAX = (r32((uint32_t)(0x1296de40)));
  /* 12951f1e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951f20 mov dword ptr [0x1296de40], eax */
  w32((uint32_t)(0x1296de40), (EAX));
  /* 12951f25 cmp dword ptr [0x1296de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951f2c jge 0x12951f51 */
  if ((C.sf==C.of)) goto L_12951f51;
  /* 12951f2e mov ecx, dword ptr [0x1296de40] */
  ECX = (r32((uint32_t)(0x1296de40)));
  /* 12951f34 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951f3a mov dword ptr [0x1296de40], ecx */
  w32((uint32_t)(0x1296de40), (ECX));
  /* 12951f40 mov edx, dword ptr [0x1296de3c] */
  EDX = (r32((uint32_t)(0x1296de3c)));
  /* 12951f46 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951f49 mov dword ptr [0x1296de3c], edx */
  w32((uint32_t)(0x1296de3c), (EDX));
  /* 12951f4f jmp 0x12951f7b */
  goto L_12951f7b;
L_12951f51:;
  /* 12951f51 cmp dword ptr [0x1296de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1296de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951f5b jl 0x12951f7b */
  if ((C.sf!=C.of)) goto L_12951f7b;
  /* 12951f5d mov eax, dword ptr [0x1296de40] */
  EAX = (r32((uint32_t)(0x1296de40)));
  /* 12951f62 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12951f67 mov dword ptr [0x1296de40], eax */
  w32((uint32_t)(0x1296de40), (EAX));
  /* 12951f6c mov ecx, dword ptr [0x1296de3c] */
  ECX = (r32((uint32_t)(0x1296de3c)));
  /* 12951f72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12951f75 mov dword ptr [0x1296de3c], ecx */
  w32((uint32_t)(0x1296de3c), (ECX));
L_12951f7b:;
  /* 12951f7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12951f7e mov dword ptr [0x1296de38], edx */
  w32((uint32_t)(0x1296de38), (EDX));
L_12951f84:;
  /* 12951f84 mov esp, ebp */
  ESP = (EBP);
  /* 12951f86 pop ebp */
  EBP = (pop32());
  /* 12951f87 ret  */
  ESPCHK(0x12951d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x12951f90 (382 bytes, 135 insns) */
void f_12951f90(void) {
  FTRACE(0x12951f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12951f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12951f91 mov ebp, esp */
  EBP = (ESP);
  /* 12951f93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12951f95 push 0x1296a858 */
  push32((uint32_t)(0x1296a858u));
  /* 12951f9a push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 12951f9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12951fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12951fa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12951fad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12951fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 12951fb1 push esi */
  push32((uint32_t)(ESI));
  /* 12951fb2 push edi */
  push32((uint32_t)(EDI));
  /* 12951fb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12951fb6 cmp dword ptr [0x1296e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12951fbd jne 0x12952002 */
  if (!C.zf) goto L_12952002;
  /* 12951fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fc7 call dword ptr [0x12970238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970238))), 0x12951fcdu);
  /* 12951fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951fcf je 0x12951fdd */
  if (C.zf) goto L_12951fdd;
  /* 12951fd1 mov dword ptr [0x1296e7e4], 1 */
  w32((uint32_t)(0x1296e7e4), (0x1u));
  /* 12951fdb jmp 0x12952002 */
  goto L_12952002;
L_12951fdd:;
  /* 12951fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12951fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12951fe5 call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x12951febu);
  /* 12951feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12951fed je 0x12951ffb */
  if (C.zf) goto L_12951ffb;
  /* 12951fef mov dword ptr [0x1296e7e4], 2 */
  w32((uint32_t)(0x1296e7e4), (0x2u));
  /* 12951ff9 jmp 0x12952002 */
  goto L_12952002;
L_12951ffb:;
  /* 12951ffb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12951ffd jmp 0x12952111 */
  goto L_12952111;
L_12952002:;
  /* 12952002 cmp dword ptr [0x1296e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952009 jne 0x12952026 */
  if (!C.zf) goto L_12952026;
  /* 1295200b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295200e push eax */
  push32((uint32_t)(EAX));
  /* 1295200f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12952012 push ecx */
  push32((uint32_t)(ECX));
  /* 12952013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952016 push edx */
  push32((uint32_t)(EDX));
  /* 12952017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295201a push eax */
  push32((uint32_t)(EAX));
  /* 1295201b call dword ptr [0x12970238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970238))), 0x12952021u);
  /* 12952021 jmp 0x12952111 */
  goto L_12952111;
L_12952026:;
  /* 12952026 cmp dword ptr [0x1296e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295202d jne 0x1295210f */
  if (!C.zf) goto L_1295210f;
  /* 12952033 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952037 jne 0x12952042 */
  if (!C.zf) goto L_12952042;
  /* 12952039 mov ecx, dword ptr [0x1296e698] */
  ECX = (r32((uint32_t)(0x1296e698)));
  /* 1295203f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12952042:;
  /* 12952042 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952049 push edx */
  push32((uint32_t)(EDX));
  /* 1295204a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295204d push eax */
  push32((uint32_t)(EAX));
  /* 1295204e call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x12952054u);
  /* 12952054 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12952057 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295205b jne 0x12952064 */
  if (!C.zf) goto L_12952064;
  /* 1295205d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295205f jmp 0x12952111 */
  goto L_12952111;
L_12952064:;
  /* 12952064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1295206b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1295206e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952071 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12952073 call 0x12945cf0 */
  push32(0x12952078u); f_12945cf0();
  /* 12952078 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1295207b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1295207e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12952081 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12952084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1295208b jmp 0x129520a4 */
  goto L_129520a4;
  /* 1295208d mov eax, 1 */
  EAX = (0x1u);
  /* 12952092 ret  */
  ESPCHK(0x12951f90u, _esp0);
  ESP += 4; return;
  /* 12952093 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12952096 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1295209d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129520a4:;
  /* 129520a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129520a8 jne 0x129520ae */
  if (!C.zf) goto L_129520ae;
  /* 129520aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129520ac jmp 0x12952111 */
  goto L_12952111;
L_129520ae:;
  /* 129520ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129520b1 push edx */
  push32((uint32_t)(EDX));
  /* 129520b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129520b5 push eax */
  push32((uint32_t)(EAX));
  /* 129520b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129520b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129520ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129520bd push edx */
  push32((uint32_t)(EDX));
  /* 129520be call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x129520c4u);
  /* 129520c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129520c6 jne 0x129520cc */
  if (!C.zf) goto L_129520cc;
  /* 129520c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129520ca jmp 0x12952111 */
  goto L_12952111;
L_129520cc:;
  /* 129520cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129520d0 jne 0x129520ed */
  if (!C.zf) goto L_129520ed;
  /* 129520d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129520d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129520d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129520d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129520db push eax */
  push32((uint32_t)(EAX));
  /* 129520dc push 1 */
  push32((uint32_t)(0x1u));
  /* 129520de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129520e1 push ecx */
  push32((uint32_t)(ECX));
  /* 129520e2 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x129520e8u);
  /* 129520e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129520eb jmp 0x1295210a */
  goto L_1295210a;
L_129520ed:;
  /* 129520ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129520f0 push edx */
  push32((uint32_t)(EDX));
  /* 129520f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129520f4 push eax */
  push32((uint32_t)(EAX));
  /* 129520f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129520f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129520fa push ecx */
  push32((uint32_t)(ECX));
  /* 129520fb push 1 */
  push32((uint32_t)(0x1u));
  /* 129520fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12952100 push edx */
  push32((uint32_t)(EDX));
  /* 12952101 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x12952107u);
  /* 12952107 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1295210a:;
  /* 1295210a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1295210d jmp 0x12952111 */
  goto L_12952111;
L_1295210f:;
  /* 1295210f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12952111:;
  /* 12952111 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12952114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952117 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1295211e pop edi */
  EDI = (pop32());
  /* 1295211f pop esi */
  ESI = (pop32());
  /* 12952120 pop ebx */
  EBX = (pop32());
  /* 12952121 mov esp, ebp */
  ESP = (EBP);
  /* 12952123 pop ebp */
  EBP = (pop32());
  /* 12952124 ret  */
  ESPCHK(0x12951f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012130 @ 0x12952130 (398 bytes, 140 insns) */
void f_12952130(void) {
  FTRACE(0x12952130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952130 push ebp */
  push32((uint32_t)(EBP));
  /* 12952131 mov ebp, esp */
  EBP = (ESP);
  /* 12952133 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12952135 push 0x1296a868 */
  push32((uint32_t)(0x1296a868u));
  /* 1295213a push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 1295213f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12952145 push eax */
  push32((uint32_t)(EAX));
  /* 12952146 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1295214d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952150 push ebx */
  push32((uint32_t)(EBX));
  /* 12952151 push esi */
  push32((uint32_t)(ESI));
  /* 12952152 push edi */
  push32((uint32_t)(EDI));
  /* 12952153 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12952156 cmp dword ptr [0x1296e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295215d jne 0x129521a2 */
  if (!C.zf) goto L_129521a2;
  /* 1295215f push 0 */
  push32((uint32_t)(0x0u));
  /* 12952161 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952163 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952167 call dword ptr [0x12970238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970238))), 0x1295216du);
  /* 1295216d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1295216f je 0x1295217d */
  if (C.zf) goto L_1295217d;
  /* 12952171 mov dword ptr [0x1296e7e8], 1 */
  w32((uint32_t)(0x1296e7e8), (0x1u));
  /* 1295217b jmp 0x129521a2 */
  goto L_129521a2;
L_1295217d:;
  /* 1295217d push 0 */
  push32((uint32_t)(0x0u));
  /* 1295217f push 0 */
  push32((uint32_t)(0x0u));
  /* 12952181 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952183 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952185 call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x1295218bu);
  /* 1295218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1295218d je 0x1295219b */
  if (C.zf) goto L_1295219b;
  /* 1295218f mov dword ptr [0x1296e7e8], 2 */
  w32((uint32_t)(0x1296e7e8), (0x2u));
  /* 12952199 jmp 0x129521a2 */
  goto L_129521a2;
L_1295219b:;
  /* 1295219b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295219d jmp 0x129522c1 */
  goto L_129522c1;
L_129521a2:;
  /* 129521a2 cmp dword ptr [0x1296e7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129521a9 jne 0x129521c6 */
  if (!C.zf) goto L_129521c6;
  /* 129521ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129521ae push eax */
  push32((uint32_t)(EAX));
  /* 129521af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129521b2 push ecx */
  push32((uint32_t)(ECX));
  /* 129521b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129521b6 push edx */
  push32((uint32_t)(EDX));
  /* 129521b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129521ba push eax */
  push32((uint32_t)(EAX));
  /* 129521bb call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x129521c1u);
  /* 129521c1 jmp 0x129522c1 */
  goto L_129522c1;
L_129521c6:;
  /* 129521c6 cmp dword ptr [0x1296e7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129521cd jne 0x129522bf */
  if (!C.zf) goto L_129522bf;
  /* 129521d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129521d7 jne 0x129521e2 */
  if (!C.zf) goto L_129521e2;
  /* 129521d9 mov ecx, dword ptr [0x1296e698] */
  ECX = (r32((uint32_t)(0x1296e698)));
  /* 129521df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_129521e2:;
  /* 129521e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129521e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129521e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129521e9 push edx */
  push32((uint32_t)(EDX));
  /* 129521ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129521ed push eax */
  push32((uint32_t)(EAX));
  /* 129521ee call dword ptr [0x12970238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970238))), 0x129521f4u);
  /* 129521f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129521f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129521fb jne 0x12952204 */
  if (!C.zf) goto L_12952204;
  /* 129521fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129521ff jmp 0x129522c1 */
  goto L_129522c1;
L_12952204:;
  /* 12952204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1295220b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1295220e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12952210 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952213 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12952215 call 0x12945cf0 */
  push32(0x1295221au); f_12945cf0();
  /* 1295221a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1295221d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12952220 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12952223 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12952226 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1295222d jmp 0x12952246 */
  goto L_12952246;
  /* 1295222f mov eax, 1 */
  EAX = (0x1u);
  /* 12952234 ret  */
  ESPCHK(0x12952130u, _esp0);
  ESP += 4; return;
  /* 12952235 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12952238 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1295223f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12952246:;
  /* 12952246 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295224a jne 0x12952250 */
  if (!C.zf) goto L_12952250;
  /* 1295224c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295224e jmp 0x129522c1 */
  goto L_129522c1;
L_12952250:;
  /* 12952250 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12952253 push edx */
  push32((uint32_t)(EDX));
  /* 12952254 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12952257 push eax */
  push32((uint32_t)(EAX));
  /* 12952258 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295225b push ecx */
  push32((uint32_t)(ECX));
  /* 1295225c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295225f push edx */
  push32((uint32_t)(EDX));
  /* 12952260 call dword ptr [0x12970238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970238))), 0x12952266u);
  /* 12952266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952268 jne 0x1295226e */
  if (!C.zf) goto L_1295226e;
  /* 1295226a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295226c jmp 0x129522c1 */
  goto L_129522c1;
L_1295226e:;
  /* 1295226e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952272 jne 0x12952296 */
  if (!C.zf) goto L_12952296;
  /* 12952274 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952276 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1295227a push 0 */
  push32((uint32_t)(0x0u));
  /* 1295227c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1295227e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12952281 push eax */
  push32((uint32_t)(EAX));
  /* 12952282 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12952287 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1295228a push ecx */
  push32((uint32_t)(ECX));
  /* 1295228b call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x12952291u);
  /* 12952291 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12952294 jmp 0x129522ba */
  goto L_129522ba;
L_12952296:;
  /* 12952296 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1295229a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295229d push edx */
  push32((uint32_t)(EDX));
  /* 1295229e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129522a1 push eax */
  push32((uint32_t)(EAX));
  /* 129522a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129522a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129522a7 push ecx */
  push32((uint32_t)(ECX));
  /* 129522a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129522ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129522b0 push edx */
  push32((uint32_t)(EDX));
  /* 129522b1 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x129522b7u);
  /* 129522b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129522ba:;
  /* 129522ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129522bd jmp 0x129522c1 */
  goto L_129522c1;
L_129522bf:;
  /* 129522bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129522c1:;
  /* 129522c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 129522c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129522c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129522ce pop edi */
  EDI = (pop32());
  /* 129522cf pop esi */
  ESI = (pop32());
  /* 129522d0 pop ebx */
  EBX = (pop32());
  /* 129522d1 mov esp, ebp */
  ESP = (EBP);
  /* 129522d3 pop ebp */
  EBP = (pop32());
  /* 129522d4 ret  */
  ESPCHK(0x12952130u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x129522e0 (11 bytes, 6 insns) */
void f_129522e0(void) {
  FTRACE(0x129522e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129522e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129522e1 mov ebp, esp */
  EBP = (ESP);
  /* 129522e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129522e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129522e9 pop ebp */
  EBP = (pop32());
  /* 129522ea ret  */
  ESPCHK(0x129522e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122f0 @ 0x129522f0 (147 bytes, 43 insns) */
void f_129522f0(void) {
  FTRACE(0x129522f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129522f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129522f1 mov ebp, esp */
  EBP = (ESP);
  /* 129522f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129522f4 cmp dword ptr [0x1296e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129522fb jne 0x12952317 */
  if (!C.zf) goto L_12952317;
  /* 129522fd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952301 jl 0x12952312 */
  if ((C.sf!=C.of)) goto L_12952312;
  /* 12952303 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952307 jg 0x12952312 */
  if ((!C.zf&&C.sf==C.of)) goto L_12952312;
  /* 12952309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295230c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295230f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12952312:;
  /* 12952312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952315 jmp 0x1295237f */
  goto L_1295237f;
L_12952317:;
  /* 12952317 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1295231c call dword ptr [0x12970278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970278))), 0x12952322u);
  /* 12952322 cmp dword ptr [0x1296e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952329 je 0x12952349 */
  if (C.zf) goto L_12952349;
  /* 1295232b push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 12952330 call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x12952336u);
  /* 12952336 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12952338 call 0x12946550 */
  push32(0x1295233du); f_12946550();
  /* 1295233d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952340 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12952347 jmp 0x12952350 */
  goto L_12952350;
L_12952349:;
  /* 12952349 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12952350:;
  /* 12952350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952353 push ecx */
  push32((uint32_t)(ECX));
  /* 12952354 call 0x12952390 */
  push32(0x12952359u); f_12952390();
  /* 12952359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295235c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1295235f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952363 je 0x12952371 */
  if (C.zf) goto L_12952371;
  /* 12952365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12952367 call 0x129465f0 */
  push32(0x1295236cu); f_129465f0();
  /* 1295236c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295236f jmp 0x1295237c */
  goto L_1295237c;
L_12952371:;
  /* 12952371 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 12952376 call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x1295237cu);
L_1295237c:;
  /* 1295237c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1295237f:;
  /* 1295237f mov esp, ebp */
  ESP = (EBP);
  /* 12952381 pop ebp */
  EBP = (pop32());
  /* 12952382 ret  */
  ESPCHK(0x129522f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x12952390 (299 bytes, 91 insns) */
void f_12952390(void) {
  FTRACE(0x12952390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952390 push ebp */
  push32((uint32_t)(EBP));
  /* 12952391 mov ebp, esp */
  EBP = (ESP);
  /* 12952393 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952396 cmp dword ptr [0x1296e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295239d jne 0x129523bc */
  if (!C.zf) goto L_129523bc;
  /* 1295239f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129523a3 jl 0x129523b4 */
  if ((C.sf!=C.of)) goto L_129523b4;
  /* 129523a5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129523a9 jg 0x129523b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_129523b4;
  /* 129523ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129523ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129523b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129523b4:;
  /* 129523b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129523b7 jmp 0x129524b7 */
  goto L_129524b7;
L_129523bc:;
  /* 129523bc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129523c3 jge 0x12952403 */
  if ((C.sf==C.of)) goto L_12952403;
  /* 129523c5 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129523cc jle 0x129523e1 */
  if ((C.zf||C.sf!=C.of)) goto L_129523e1;
  /* 129523ce push 1 */
  push32((uint32_t)(0x1u));
  /* 129523d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129523d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129523d4 call 0x12948b60 */
  push32(0x129523d9u); f_12948b60();
  /* 129523d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129523dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129523df jmp 0x129523f5 */
  goto L_129523f5;
L_129523e1:;
  /* 129523e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129523e4 mov eax, dword ptr [0x1296cc98] */
  EAX = (r32((uint32_t)(0x1296cc98)));
  /* 129523e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129523eb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129523ef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129523f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129523f5:;
  /* 129523f5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129523f9 jne 0x12952403 */
  if (!C.zf) goto L_12952403;
  /* 129523fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129523fe jmp 0x129524b7 */
  goto L_129524b7;
L_12952403:;
  /* 12952403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952406 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12952409 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1295240f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12952415 mov eax, dword ptr [0x1296cc98] */
  EAX = (r32((uint32_t)(0x1296cc98)));
  /* 1295241a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1295241c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12952420 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12952426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12952428 je 0x1295244c */
  if (C.zf) goto L_1295244c;
  /* 1295242a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295242d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12952430 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12952436 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12952439 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1295243c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1295243f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12952443 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1295244a jmp 0x1295245d */
  goto L_1295245d;
L_1295244c:;
  /* 1295244c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1295244f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12952452 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12952456 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1295245d:;
  /* 1295245d push 1 */
  push32((uint32_t)(0x1u));
  /* 1295245f push 0 */
  push32((uint32_t)(0x0u));
  /* 12952461 push 3 */
  push32((uint32_t)(0x3u));
  /* 12952463 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12952466 push edx */
  push32((uint32_t)(EDX));
  /* 12952467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295246a push eax */
  push32((uint32_t)(EAX));
  /* 1295246b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1295246e push ecx */
  push32((uint32_t)(ECX));
  /* 1295246f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12952474 mov edx, dword ptr [0x1296e688] */
  EDX = (r32((uint32_t)(0x1296e688)));
  /* 1295247a push edx */
  push32((uint32_t)(EDX));
  /* 1295247b call 0x1294af40 */
  push32(0x12952480u); f_1294af40();
  /* 12952480 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12952486 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295248a jne 0x12952491 */
  if (!C.zf) goto L_12952491;
  /* 1295248c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295248f jmp 0x129524b7 */
  goto L_129524b7;
L_12952491:;
  /* 12952491 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952495 jne 0x129524a1 */
  if (!C.zf) goto L_129524a1;
  /* 12952497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295249a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1295249f jmp 0x129524b7 */
  goto L_129524b7;
L_129524a1:;
  /* 129524a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129524a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129524a9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 129524ac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129524b2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129524b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_129524b7:;
  /* 129524b7 mov esp, ebp */
  ESP = (EBP);
  /* 129524b9 pop ebp */
  EBP = (pop32());
  /* 129524ba ret  */
  ESPCHK(0x12952390u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x129524c0 (52 bytes, 19 insns) */
void f_129524c0(void) {
  FTRACE(0x129524c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129524c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129524c4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129524c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129524ca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129524ce jne 0x129524d9 */
  if (!C.zf) goto L_129524d9;
  /* 129524d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 129524d4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129524d6 ret 0x10 */
  ESPCHK(0x129524c0u, _esp0);
  ESP += 20; return;
L_129524d9:;
  /* 129524d9 push ebx */
  push32((uint32_t)(EBX));
  /* 129524da mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129524dc mov ebx, eax */
  EBX = (EAX);
  /* 129524de mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129524e2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129524e6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 129524e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129524ec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129524ee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129524f0 pop ebx */
  EBX = (pop32());
  /* 129524f1 ret 0x10 */
  ESPCHK(0x129524c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012500 @ 0x12952500 (46 bytes, 18 insns) */
void f_12952500(void) {
  FTRACE(0x12952500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952500 push ebp */
  push32((uint32_t)(EBP));
  /* 12952501 mov ebp, esp */
  EBP = (ESP);
  /* 12952503 push ecx */
  push32((uint32_t)(ECX));
  /* 12952504 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12952506 call 0x12946550 */
  push32(0x1295250bu); f_12946550();
  /* 1295250b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295250e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952511 push eax */
  push32((uint32_t)(EAX));
  /* 12952512 call 0x12952530 */
  push32(0x12952517u); f_12952530();
  /* 12952517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295251a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1295251d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1295251f call 0x129465f0 */
  push32(0x12952524u); f_129465f0();
  /* 12952524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295252a mov esp, ebp */
  ESP = (EBP);
  /* 1295252c pop ebp */
  EBP = (pop32());
  /* 1295252d ret  */
  ESPCHK(0x12952500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12952530 (198 bytes, 69 insns) */
void f_12952530(void) {
  FTRACE(0x12952530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952530 push ebp */
  push32((uint32_t)(EBP));
  /* 12952531 mov ebp, esp */
  EBP = (ESP);
  /* 12952533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952536 mov eax, dword ptr [0x1296e4a4] */
  EAX = (r32((uint32_t)(0x1296e4a4)));
  /* 1295253b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1295253e cmp dword ptr [0x1296ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952545 jne 0x1295254e */
  if (!C.zf) goto L_1295254e;
  /* 12952547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952549 jmp 0x129525f2 */
  goto L_129525f2;
L_1295254e:;
  /* 1295254e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952552 jne 0x12952576 */
  if (!C.zf) goto L_12952576;
  /* 12952554 cmp dword ptr [0x1296e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295255b je 0x12952576 */
  if (C.zf) goto L_12952576;
  /* 1295255d call 0x12952650 */
  push32(0x12952562u); f_12952650();
  /* 12952562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952564 je 0x1295256d */
  if (C.zf) goto L_1295256d;
  /* 12952566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952568 jmp 0x129525f2 */
  goto L_129525f2;
L_1295256d:;
  /* 1295256d mov ecx, dword ptr [0x1296e4a4] */
  ECX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952573 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12952576:;
  /* 12952576 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295257a je 0x129525f0 */
  if (C.zf) goto L_129525f0;
  /* 1295257c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952580 je 0x129525f0 */
  if (C.zf) goto L_129525f0;
  /* 12952582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952585 push edx */
  push32((uint32_t)(EDX));
  /* 12952586 call 0x12945980 */
  push32(0x1295258bu); f_12945980();
  /* 1295258b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295258e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12952591:;
  /* 12952591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952594 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952597 je 0x129525f0 */
  if (C.zf) goto L_129525f0;
  /* 12952599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1295259c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1295259e push edx */
  push32((uint32_t)(EDX));
  /* 1295259f call 0x12945980 */
  push32(0x129525a4u); f_12945980();
  /* 129525a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129525a7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129525aa jbe 0x129525e5 */
  if ((C.cf||C.zf)) goto L_129525e5;
  /* 129525ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129525af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129525b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129525b4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 129525b8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129525bb jne 0x129525e5 */
  if (!C.zf) goto L_129525e5;
  /* 129525bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129525c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129525c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129525c4 push edx */
  push32((uint32_t)(EDX));
  /* 129525c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129525c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129525ca push ecx */
  push32((uint32_t)(ECX));
  /* 129525cb call 0x12952600 */
  push32(0x129525d0u); f_12952600();
  /* 129525d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129525d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129525d5 jne 0x129525e5 */
  if (!C.zf) goto L_129525e5;
  /* 129525d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129525da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129525dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129525df lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 129525e3 jmp 0x129525f2 */
  goto L_129525f2;
L_129525e5:;
  /* 129525e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129525e8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129525eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129525ee jmp 0x12952591 */
  goto L_12952591;
L_129525f0:;
  /* 129525f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129525f2:;
  /* 129525f2 mov esp, ebp */
  ESP = (EBP);
  /* 129525f4 pop ebp */
  EBP = (pop32());
  /* 129525f5 ret  */
  ESPCHK(0x12952530u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12952600 (79 bytes, 32 insns) */
void f_12952600(void) {
  FTRACE(0x12952600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952600 push ebp */
  push32((uint32_t)(EBP));
  /* 12952601 mov ebp, esp */
  EBP = (ESP);
  /* 12952603 push ecx */
  push32((uint32_t)(ECX));
  /* 12952604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952608 jne 0x1295260e */
  if (!C.zf) goto L_1295260e;
  /* 1295260a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295260c jmp 0x1295264b */
  goto L_1295264b;
L_1295260e:;
  /* 1295260e mov eax, dword ptr [0x1296fb64] */
  EAX = (r32((uint32_t)(0x1296fb64)));
  /* 12952613 push eax */
  push32((uint32_t)(EAX));
  /* 12952614 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12952617 push ecx */
  push32((uint32_t)(ECX));
  /* 12952618 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1295261b push edx */
  push32((uint32_t)(EDX));
  /* 1295261c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1295261f push eax */
  push32((uint32_t)(EAX));
  /* 12952620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952623 push ecx */
  push32((uint32_t)(ECX));
  /* 12952624 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952626 mov edx, dword ptr [0x1296fe04] */
  EDX = (r32((uint32_t)(0x1296fe04)));
  /* 1295262c push edx */
  push32((uint32_t)(EDX));
  /* 1295262d call 0x12952700 */
  push32(0x12952632u); f_12952700();
  /* 12952632 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12952638 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295263c jne 0x12952645 */
  if (!C.zf) goto L_12952645;
  /* 1295263e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12952643 jmp 0x1295264b */
  goto L_1295264b;
L_12952645:;
  /* 12952645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952648 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1295264b:;
  /* 1295264b mov esp, ebp */
  ESP = (EBP);
  /* 1295264d pop ebp */
  EBP = (pop32());
  /* 1295264e ret  */
  ESPCHK(0x12952600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012650 @ 0x12952650 (174 bytes, 66 insns) */
void f_12952650(void) {
  FTRACE(0x12952650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952650 push ebp */
  push32((uint32_t)(EBP));
  /* 12952651 mov ebp, esp */
  EBP = (ESP);
  /* 12952653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952656 mov eax, dword ptr [0x1296e4ac] */
  EAX = (r32((uint32_t)(0x1296e4ac)));
  /* 1295265b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1295265e:;
  /* 1295265e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952661 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952664 je 0x129526f8 */
  if (C.zf) goto L_129526f8;
  /* 1295266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1295266c push 0 */
  push32((uint32_t)(0x0u));
  /* 1295266e push 0 */
  push32((uint32_t)(0x0u));
  /* 12952670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952672 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12952674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952677 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12952679 push eax */
  push32((uint32_t)(EAX));
  /* 1295267a push 0 */
  push32((uint32_t)(0x0u));
  /* 1295267c push 1 */
  push32((uint32_t)(0x1u));
  /* 1295267e call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x12952684u);
  /* 12952684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12952687 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295268b jne 0x12952692 */
  if (!C.zf) goto L_12952692;
  /* 1295268d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952690 jmp 0x129526fa */
  goto L_129526fa;
L_12952692:;
  /* 12952692 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12952694 push 0x1296a874 */
  push32((uint32_t)(0x1296a874u));
  /* 12952699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1295269b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1295269e push ecx */
  push32((uint32_t)(ECX));
  /* 1295269f call 0x12942b50 */
  push32(0x129526a4u); f_12942b50();
  /* 129526a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129526a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129526aa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129526ae jne 0x129526b5 */
  if (!C.zf) goto L_129526b5;
  /* 129526b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129526b3 jmp 0x129526fa */
  goto L_129526fa;
L_129526b5:;
  /* 129526b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129526b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129526b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129526bc push edx */
  push32((uint32_t)(EDX));
  /* 129526bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129526c0 push eax */
  push32((uint32_t)(EAX));
  /* 129526c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129526c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129526c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129526c8 push edx */
  push32((uint32_t)(EDX));
  /* 129526c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129526cb push 1 */
  push32((uint32_t)(0x1u));
  /* 129526cd call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x129526d3u);
  /* 129526d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129526d5 jne 0x129526dc */
  if (!C.zf) goto L_129526dc;
  /* 129526d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129526da jmp 0x129526fa */
  goto L_129526fa;
L_129526dc:;
  /* 129526dc push 0 */
  push32((uint32_t)(0x0u));
  /* 129526de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129526e1 push eax */
  push32((uint32_t)(EAX));
  /* 129526e2 call 0x12952b50 */
  push32(0x129526e7u); f_12952b50();
  /* 129526e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129526ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129526ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129526f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129526f3 jmp 0x1295265e */
  goto L_1295265e;
L_129526f8:;
  /* 129526f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129526fa:;
  /* 129526fa mov esp, ebp */
  ESP = (EBP);
  /* 129526fc pop ebp */
  EBP = (pop32());
  /* 129526fd ret  */
  ESPCHK(0x12952650u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x12952700 (970 bytes, 340 insns) */
void f_12952700(void) {
  FTRACE(0x12952700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952700 push ebp */
  push32((uint32_t)(EBP));
  /* 12952701 mov ebp, esp */
  EBP = (ESP);
  /* 12952703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12952705 push 0x1296a8c8 */
  push32((uint32_t)(0x1296a8c8u));
  /* 1295270a push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 1295270f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12952715 push eax */
  push32((uint32_t)(EAX));
  /* 12952716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1295271d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952720 push ebx */
  push32((uint32_t)(EBX));
  /* 12952721 push esi */
  push32((uint32_t)(ESI));
  /* 12952722 push edi */
  push32((uint32_t)(EDI));
  /* 12952723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12952726 cmp dword ptr [0x1296e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295272d jne 0x12952786 */
  if (!C.zf) goto L_12952786;
  /* 1295272f push 1 */
  push32((uint32_t)(0x1u));
  /* 12952731 push 0x12969f24 */
  push32((uint32_t)(0x12969f24u));
  /* 12952736 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952738 push 0x12969f24 */
  push32((uint32_t)(0x12969f24u));
  /* 1295273d push 0 */
  push32((uint32_t)(0x0u));
  /* 1295273f push 0 */
  push32((uint32_t)(0x0u));
  /* 12952741 call dword ptr [0x12970230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970230))), 0x12952747u);
  /* 12952747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952749 je 0x12952757 */
  if (C.zf) goto L_12952757;
  /* 1295274b mov dword ptr [0x1296e7ec], 1 */
  w32((uint32_t)(0x1296e7ec), (0x1u));
  /* 12952755 jmp 0x12952786 */
  goto L_12952786;
L_12952757:;
  /* 12952757 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952759 push 0x12969f20 */
  push32((uint32_t)(0x12969f20u));
  /* 1295275e push 1 */
  push32((uint32_t)(0x1u));
  /* 12952760 push 0x12969f20 */
  push32((uint32_t)(0x12969f20u));
  /* 12952765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12952769 call dword ptr [0x12970234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970234))), 0x1295276fu);
  /* 1295276f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952771 je 0x1295277f */
  if (C.zf) goto L_1295277f;
  /* 12952773 mov dword ptr [0x1296e7ec], 2 */
  w32((uint32_t)(0x1296e7ec), (0x2u));
  /* 1295277d jmp 0x12952786 */
  goto L_12952786;
L_1295277f:;
  /* 1295277f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952781 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952786:;
  /* 12952786 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295278a jle 0x1295279f */
  if ((C.zf||C.sf!=C.of)) goto L_1295279f;
  /* 1295278c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1295278f push eax */
  push32((uint32_t)(EAX));
  /* 12952790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12952793 push ecx */
  push32((uint32_t)(ECX));
  /* 12952794 call 0x12952b00 */
  push32(0x12952799u); f_12952b00();
  /* 12952799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295279c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1295279f:;
  /* 1295279f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129527a3 jle 0x129527b8 */
  if ((C.zf||C.sf!=C.of)) goto L_129527b8;
  /* 129527a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129527a8 push edx */
  push32((uint32_t)(EDX));
  /* 129527a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129527ac push eax */
  push32((uint32_t)(EAX));
  /* 129527ad call 0x12952b00 */
  push32(0x129527b2u); f_12952b00();
  /* 129527b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129527b5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_129527b8:;
  /* 129527b8 cmp dword ptr [0x1296e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129527bf jne 0x129527e4 */
  if (!C.zf) goto L_129527e4;
  /* 129527c1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129527c4 push ecx */
  push32((uint32_t)(ECX));
  /* 129527c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129527c8 push edx */
  push32((uint32_t)(EDX));
  /* 129527c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129527cc push eax */
  push32((uint32_t)(EAX));
  /* 129527cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129527d0 push ecx */
  push32((uint32_t)(ECX));
  /* 129527d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129527d4 push edx */
  push32((uint32_t)(EDX));
  /* 129527d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129527d8 push eax */
  push32((uint32_t)(EAX));
  /* 129527d9 call dword ptr [0x12970234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970234))), 0x129527dfu);
  /* 129527df jmp 0x12952ae4 */
  goto L_12952ae4;
L_129527e4:;
  /* 129527e4 cmp dword ptr [0x1296e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129527eb jne 0x12952ae2 */
  if (!C.zf) goto L_12952ae2;
  /* 129527f1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129527f5 jne 0x12952800 */
  if (!C.zf) goto L_12952800;
  /* 129527f7 mov ecx, dword ptr [0x1296e698] */
  ECX = (r32((uint32_t)(0x1296e698)));
  /* 129527fd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12952800:;
  /* 12952800 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952804 je 0x12952810 */
  if (C.zf) goto L_12952810;
  /* 12952806 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295280a jne 0x1295298c */
  if (!C.zf) goto L_1295298c;
L_12952810:;
  /* 12952810 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12952813 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952816 jne 0x12952822 */
  if (!C.zf) goto L_12952822;
  /* 12952818 mov eax, 2 */
  EAX = (0x2u);
  /* 1295281d jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952822:;
  /* 12952822 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952826 jle 0x12952832 */
  if ((C.zf||C.sf!=C.of)) goto L_12952832;
  /* 12952828 mov eax, 1 */
  EAX = (0x1u);
  /* 1295282d jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952832:;
  /* 12952832 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952836 jle 0x12952842 */
  if ((C.zf||C.sf!=C.of)) goto L_12952842;
  /* 12952838 mov eax, 3 */
  EAX = (0x3u);
  /* 1295283d jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952842:;
  /* 12952842 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12952845 push eax */
  push32((uint32_t)(EAX));
  /* 12952846 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12952849 push ecx */
  push32((uint32_t)(ECX));
  /* 1295284a call dword ptr [0x12970310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970310))), 0x12952850u);
  /* 12952850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952852 jne 0x1295285b */
  if (!C.zf) goto L_1295285b;
  /* 12952854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952856 jmp 0x12952ae4 */
  goto L_12952ae4;
L_1295285b:;
  /* 1295285b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295285f jne 0x12952867 */
  if (!C.zf) goto L_12952867;
  /* 12952861 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952865 je 0x12952894 */
  if (C.zf) goto L_12952894;
L_12952867:;
  /* 12952867 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295286b jne 0x12952873 */
  if (!C.zf) goto L_12952873;
  /* 1295286d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952871 je 0x12952894 */
  if (C.zf) goto L_12952894;
L_12952873:;
  /* 12952873 push 0x1296a888 */
  push32((uint32_t)(0x1296a888u));
  /* 12952878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1295287a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1295287f push 0x1296a880 */
  push32((uint32_t)(0x1296a880u));
  /* 12952884 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952886 call 0x12941c10 */
  push32(0x1295288bu); f_12941c10();
  /* 1295288b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295288e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952891 jne 0x12952894 */
  if (!C.zf) goto L_12952894;
  /* 12952893 int3  */
  x86_unimpl("int3 @ 0x12952893");
L_12952894:;
  /* 12952894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12952896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952898 jne 0x1295285b */
  if (!C.zf) goto L_1295285b;
  /* 1295289a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295289e jle 0x12952913 */
  if ((C.zf||C.sf!=C.of)) goto L_12952913;
  /* 129528a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129528a4 jae 0x129528b0 */
  if (!C.cf) goto L_129528b0;
  /* 129528a6 mov eax, 3 */
  EAX = (0x3u);
  /* 129528ab jmp 0x12952ae4 */
  goto L_12952ae4;
L_129528b0:;
  /* 129528b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 129528b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 129528b6 jmp 0x129528c1 */
  goto L_129528c1;
L_129528b8:;
  /* 129528b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129528bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129528be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_129528c1:;
  /* 129528c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129528c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129528c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129528c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129528ca je 0x12952909 */
  if (C.zf) goto L_12952909;
  /* 129528cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129528cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129528d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129528d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129528d6 je 0x12952909 */
  if (C.zf) goto L_12952909;
  /* 129528d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129528db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129528dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129528df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129528e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129528e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129528e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129528e8 jl 0x12952907 */
  if ((C.sf!=C.of)) goto L_12952907;
  /* 129528ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129528ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129528ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129528f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129528f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129528f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129528f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129528fb jg 0x12952907 */
  if ((!C.zf&&C.sf==C.of)) goto L_12952907;
  /* 129528fd mov eax, 2 */
  EAX = (0x2u);
  /* 12952902 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952907:;
  /* 12952907 jmp 0x129528b8 */
  goto L_129528b8;
L_12952909:;
  /* 12952909 mov eax, 3 */
  EAX = (0x3u);
  /* 1295290e jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952913:;
  /* 12952913 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952917 jle 0x1295298c */
  if ((C.zf||C.sf!=C.of)) goto L_1295298c;
  /* 12952919 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1295291d jae 0x12952929 */
  if (!C.cf) goto L_12952929;
  /* 1295291f mov eax, 1 */
  EAX = (0x1u);
  /* 12952924 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952929:;
  /* 12952929 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1295292c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1295292f jmp 0x1295293a */
  goto L_1295293a;
L_12952931:;
  /* 12952931 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12952934 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952937 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1295293a:;
  /* 1295293a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1295293d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1295293f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12952941 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952943 je 0x12952982 */
  if (C.zf) goto L_12952982;
  /* 12952945 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12952948 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1295294a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1295294d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1295294f je 0x12952982 */
  if (C.zf) goto L_12952982;
  /* 12952951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12952954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952956 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12952958 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1295295b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1295295d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1295295f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952961 jl 0x12952980 */
  if ((C.sf!=C.of)) goto L_12952980;
  /* 12952963 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12952966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12952968 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1295296a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1295296d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1295296f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12952972 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952974 jg 0x12952980 */
  if ((!C.zf&&C.sf==C.of)) goto L_12952980;
  /* 12952976 mov eax, 2 */
  EAX = (0x2u);
  /* 1295297b jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952980:;
  /* 12952980 jmp 0x12952931 */
  goto L_12952931;
L_12952982:;
  /* 12952982 mov eax, 1 */
  EAX = (0x1u);
  /* 12952987 jmp 0x12952ae4 */
  goto L_12952ae4;
L_1295298c:;
  /* 1295298c push 0 */
  push32((uint32_t)(0x0u));
  /* 1295298e push 0 */
  push32((uint32_t)(0x0u));
  /* 12952990 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12952993 push ecx */
  push32((uint32_t)(ECX));
  /* 12952994 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12952997 push edx */
  push32((uint32_t)(EDX));
  /* 12952998 push 9 */
  push32((uint32_t)(0x9u));
  /* 1295299a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1295299d push eax */
  push32((uint32_t)(EAX));
  /* 1295299e call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x129529a4u);
  /* 129529a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129529a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129529ab jne 0x129529b4 */
  if (!C.zf) goto L_129529b4;
  /* 129529ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129529af jmp 0x12952ae4 */
  goto L_12952ae4;
L_129529b4:;
  /* 129529b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129529bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129529be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129529c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129529c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129529c5 call 0x12945cf0 */
  push32(0x129529cau); f_12945cf0();
  /* 129529ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 129529cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129529d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 129529d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129529d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129529dd jmp 0x129529f6 */
  goto L_129529f6;
  /* 129529df mov eax, 1 */
  EAX = (0x1u);
  /* 129529e4 ret  */
  ESPCHK(0x12952700u, _esp0);
  ESP += 4; return;
  /* 129529e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129529e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129529ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129529f6:;
  /* 129529f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129529fa jne 0x12952a03 */
  if (!C.zf) goto L_12952a03;
  /* 129529fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129529fe jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952a03:;
  /* 12952a03 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12952a06 push edx */
  push32((uint32_t)(EDX));
  /* 12952a07 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12952a0a push eax */
  push32((uint32_t)(EAX));
  /* 12952a0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12952a0e push ecx */
  push32((uint32_t)(ECX));
  /* 12952a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12952a12 push edx */
  push32((uint32_t)(EDX));
  /* 12952a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12952a15 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12952a18 push eax */
  push32((uint32_t)(EAX));
  /* 12952a19 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x12952a1fu);
  /* 12952a1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952a21 jne 0x12952a2a */
  if (!C.zf) goto L_12952a2a;
  /* 12952a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952a25 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952a2a:;
  /* 12952a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12952a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12952a2e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12952a31 push ecx */
  push32((uint32_t)(ECX));
  /* 12952a32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12952a35 push edx */
  push32((uint32_t)(EDX));
  /* 12952a36 push 9 */
  push32((uint32_t)(0x9u));
  /* 12952a38 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12952a3b push eax */
  push32((uint32_t)(EAX));
  /* 12952a3c call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x12952a42u);
  /* 12952a42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12952a45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952a49 jne 0x12952a52 */
  if (!C.zf) goto L_12952a52;
  /* 12952a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952a4d jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952a52:;
  /* 12952a52 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12952a59 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12952a5c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12952a5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952a61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12952a63 call 0x12945cf0 */
  push32(0x12952a68u); f_12945cf0();
  /* 12952a68 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12952a6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12952a6e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12952a71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12952a74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12952a7b jmp 0x12952a94 */
  goto L_12952a94;
  /* 12952a7d mov eax, 1 */
  EAX = (0x1u);
  /* 12952a82 ret  */
  ESPCHK(0x12952700u, _esp0);
  ESP += 4; return;
  /* 12952a83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12952a86 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12952a8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12952a94:;
  /* 12952a94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952a98 jne 0x12952a9e */
  if (!C.zf) goto L_12952a9e;
  /* 12952a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952a9c jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952a9e:;
  /* 12952a9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12952aa1 push edx */
  push32((uint32_t)(EDX));
  /* 12952aa2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12952aa5 push eax */
  push32((uint32_t)(EAX));
  /* 12952aa6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12952aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12952aaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12952aad push edx */
  push32((uint32_t)(EDX));
  /* 12952aae push 1 */
  push32((uint32_t)(0x1u));
  /* 12952ab0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12952ab3 push eax */
  push32((uint32_t)(EAX));
  /* 12952ab4 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x12952abau);
  /* 12952aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952abc jne 0x12952ac2 */
  if (!C.zf) goto L_12952ac2;
  /* 12952abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952ac0 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952ac2:;
  /* 12952ac2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12952ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 12952ac6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12952ac9 push edx */
  push32((uint32_t)(EDX));
  /* 12952aca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12952acd push eax */
  push32((uint32_t)(EAX));
  /* 12952ace mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12952ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 12952ad2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952ad5 push edx */
  push32((uint32_t)(EDX));
  /* 12952ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952ad9 push eax */
  push32((uint32_t)(EAX));
  /* 12952ada call dword ptr [0x12970230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970230))), 0x12952ae0u);
  /* 12952ae0 jmp 0x12952ae4 */
  goto L_12952ae4;
L_12952ae2:;
  /* 12952ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12952ae4:;
  /* 12952ae4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12952ae7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952aea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12952af1 pop edi */
  EDI = (pop32());
  /* 12952af2 pop esi */
  ESI = (pop32());
  /* 12952af3 pop ebx */
  EBX = (pop32());
  /* 12952af4 mov esp, ebp */
  ESP = (EBP);
  /* 12952af6 pop ebp */
  EBP = (pop32());
  /* 12952af7 ret  */
  ESPCHK(0x12952700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x12952b00 (80 bytes, 32 insns) */
void f_12952b00(void) {
  FTRACE(0x12952b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12952b01 mov ebp, esp */
  EBP = (ESP);
  /* 12952b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952b09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12952b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952b0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12952b12:;
  /* 12952b12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952b15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952b18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12952b1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952b20 je 0x12952b37 */
  if (C.zf) goto L_12952b37;
  /* 12952b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952b25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12952b28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952b2a je 0x12952b37 */
  if (C.zf) goto L_12952b37;
  /* 12952b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952b2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952b32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12952b35 jmp 0x12952b12 */
  goto L_12952b12;
L_12952b37:;
  /* 12952b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952b3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12952b3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952b3f jne 0x12952b49 */
  if (!C.zf) goto L_12952b49;
  /* 12952b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952b44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952b47 jmp 0x12952b4c */
  goto L_12952b4c;
L_12952b49:;
  /* 12952b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12952b4c:;
  /* 12952b4c mov esp, ebp */
  ESP = (EBP);
  /* 12952b4e pop ebp */
  EBP = (pop32());
  /* 12952b4f ret  */
  ESPCHK(0x12952b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x12952b50 (736 bytes, 224 insns) */
void f_12952b50(void) {
  FTRACE(0x12952b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12952b51 mov ebp, esp */
  EBP = (ESP);
  /* 12952b53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952b56 push esi */
  push32((uint32_t)(ESI));
  /* 12952b57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952b5b je 0x12952b7c */
  if (C.zf) goto L_12952b7c;
  /* 12952b5d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12952b5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952b62 push eax */
  push32((uint32_t)(EAX));
  /* 12952b63 call 0x12952fa0 */
  push32(0x12952b68u); f_12952fa0();
  /* 12952b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952b6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12952b6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952b72 je 0x12952b7c */
  if (C.zf) goto L_12952b7c;
  /* 12952b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952b77 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952b7a jne 0x12952b84 */
  if (!C.zf) goto L_12952b84;
L_12952b7c:;
  /* 12952b7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952b7f jmp 0x12952e2b */
  goto L_12952e2b;
L_12952b84:;
  /* 12952b84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12952b87 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12952b8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12952b8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12952b90 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12952b93 mov ecx, dword ptr [0x1296e4a4] */
  ECX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952b99 cmp ecx, dword ptr [0x1296e4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296e4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952b9f jne 0x12952bb5 */
  if (!C.zf) goto L_12952bb5;
  /* 12952ba1 mov edx, dword ptr [0x1296e4a4] */
  EDX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952ba7 push edx */
  push32((uint32_t)(EDX));
  /* 12952ba8 call 0x12952eb0 */
  push32(0x12952badu); f_12952eb0();
  /* 12952bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952bb0 mov dword ptr [0x1296e4a4], eax */
  w32((uint32_t)(0x1296e4a4), (EAX));
L_12952bb5:;
  /* 12952bb5 cmp dword ptr [0x1296e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952bbc jne 0x12952c75 */
  if (!C.zf) goto L_12952c75;
  /* 12952bc2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952bc6 je 0x12952be7 */
  if (C.zf) goto L_12952be7;
  /* 12952bc8 cmp dword ptr [0x1296e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952bcf je 0x12952be7 */
  if (C.zf) goto L_12952be7;
  /* 12952bd1 call 0x12952650 */
  push32(0x12952bd6u); f_12952650();
  /* 12952bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952bd8 je 0x12952be2 */
  if (C.zf) goto L_12952be2;
  /* 12952bda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952bdd jmp 0x12952e2b */
  goto L_12952e2b;
L_12952be2:;
  /* 12952be2 jmp 0x12952c75 */
  goto L_12952c75;
L_12952be7:;
  /* 12952be7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952beb je 0x12952bf4 */
  if (C.zf) goto L_12952bf4;
  /* 12952bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952bef jmp 0x12952e2b */
  goto L_12952e2b;
L_12952bf4:;
  /* 12952bf4 cmp dword ptr [0x1296e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952bfb jne 0x12952c34 */
  if (!C.zf) goto L_12952c34;
  /* 12952bfd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12952c02 push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952c09 push 4 */
  push32((uint32_t)(0x4u));
  /* 12952c0b call 0x12942b50 */
  push32(0x12952c10u); f_12942b50();
  /* 12952c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952c13 mov dword ptr [0x1296e4a4], eax */
  w32((uint32_t)(0x1296e4a4), (EAX));
  /* 12952c18 cmp dword ptr [0x1296e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952c1f jne 0x12952c29 */
  if (!C.zf) goto L_12952c29;
  /* 12952c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952c24 jmp 0x12952e2b */
  goto L_12952e2b;
L_12952c29:;
  /* 12952c29 mov eax, dword ptr [0x1296e4a4] */
  EAX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952c2e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12952c34:;
  /* 12952c34 cmp dword ptr [0x1296e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952c3b jne 0x12952c75 */
  if (!C.zf) goto L_12952c75;
  /* 12952c3d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12952c42 push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952c49 push 4 */
  push32((uint32_t)(0x4u));
  /* 12952c4b call 0x12942b50 */
  push32(0x12952c50u); f_12942b50();
  /* 12952c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952c53 mov dword ptr [0x1296e4ac], eax */
  w32((uint32_t)(0x1296e4ac), (EAX));
  /* 12952c58 cmp dword ptr [0x1296e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952c5f jne 0x12952c69 */
  if (!C.zf) goto L_12952c69;
  /* 12952c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952c64 jmp 0x12952e2b */
  goto L_12952e2b;
L_12952c69:;
  /* 12952c69 mov ecx, dword ptr [0x1296e4ac] */
  ECX = (r32((uint32_t)(0x1296e4ac)));
  /* 12952c6f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12952c75:;
  /* 12952c75 mov edx, dword ptr [0x1296e4a4] */
  EDX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952c7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12952c7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12952c81 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952c84 push eax */
  push32((uint32_t)(EAX));
  /* 12952c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952c88 push ecx */
  push32((uint32_t)(ECX));
  /* 12952c89 call 0x12952e30 */
  push32(0x12952c8eu); f_12952e30();
  /* 12952c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952c91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12952c94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952c98 jl 0x12952d31 */
  if ((C.sf!=C.of)) goto L_12952d31;
  /* 12952c9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952ca1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952ca4 je 0x12952d31 */
  if (C.zf) goto L_12952d31;
  /* 12952caa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952cae je 0x12952d23 */
  if (C.zf) goto L_12952d23;
  /* 12952cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952cb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952cb8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12952cbb push edx */
  push32((uint32_t)(EDX));
  /* 12952cbc call 0x129435e0 */
  push32(0x12952cc1u); f_129435e0();
  /* 12952cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952cc4 jmp 0x12952ccf */
  goto L_12952ccf;
L_12952cc6:;
  /* 12952cc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952cc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952ccc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12952ccf:;
  /* 12952ccf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952cd2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952cd5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952cd9 je 0x12952cf0 */
  if (C.zf) goto L_12952cf0;
  /* 12952cdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952cde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952ce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952ce4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12952ce7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12952ceb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12952cee jmp 0x12952cc6 */
  goto L_12952cc6;
L_12952cf0:;
  /* 12952cf0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12952cf5 push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12952cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952cff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12952d02 push eax */
  push32((uint32_t)(EAX));
  /* 12952d03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d06 push ecx */
  push32((uint32_t)(ECX));
  /* 12952d07 call 0x12942fe0 */
  push32(0x12952d0cu); f_12942fe0();
  /* 12952d0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952d0f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12952d12 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952d16 je 0x12952d21 */
  if (C.zf) goto L_12952d21;
  /* 12952d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d1b mov dword ptr [0x1296e4a4], edx */
  w32((uint32_t)(0x1296e4a4), (EDX));
L_12952d21:;
  /* 12952d21 jmp 0x12952d2f */
  goto L_12952d2f;
L_12952d23:;
  /* 12952d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952d26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952d2c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12952d2f:;
  /* 12952d2f jmp 0x12952da4 */
  goto L_12952da4;
L_12952d31:;
  /* 12952d31 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952d35 jne 0x12952d9d */
  if (!C.zf) goto L_12952d9d;
  /* 12952d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952d3b jge 0x12952d45 */
  if ((C.sf==C.of)) goto L_12952d45;
  /* 12952d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952d40 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12952d42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12952d45:;
  /* 12952d45 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12952d4a push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12952d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952d54 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12952d5b push edx */
  push32((uint32_t)(EDX));
  /* 12952d5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d5f push eax */
  push32((uint32_t)(EAX));
  /* 12952d60 call 0x12942fe0 */
  push32(0x12952d65u); f_12942fe0();
  /* 12952d65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952d68 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12952d6b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952d6f jne 0x12952d79 */
  if (!C.zf) goto L_12952d79;
  /* 12952d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952d74 jmp 0x12952e2b */
  goto L_12952e2b;
L_12952d79:;
  /* 12952d79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952d7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952d82 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12952d85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952d88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d8b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12952d93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952d96 mov dword ptr [0x1296e4a4], eax */
  w32((uint32_t)(0x1296e4a4), (EAX));
  /* 12952d9b jmp 0x12952da4 */
  goto L_12952da4;
L_12952d9d:;
  /* 12952d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952d9f jmp 0x12952e2b */
  goto L_12952e2b;
L_12952da4:;
  /* 12952da4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952da8 je 0x12952e29 */
  if (C.zf) goto L_12952e29;
  /* 12952daa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12952daf push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952db9 push ecx */
  push32((uint32_t)(ECX));
  /* 12952dba call 0x12945980 */
  push32(0x12952dbfu); f_12945980();
  /* 12952dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952dc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952dc5 push eax */
  push32((uint32_t)(EAX));
  /* 12952dc6 call 0x12942b50 */
  push32(0x12952dcbu); f_12942b50();
  /* 12952dcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952dce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12952dd1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952dd5 je 0x12952e29 */
  if (C.zf) goto L_12952e29;
  /* 12952dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952dda push edx */
  push32((uint32_t)(EDX));
  /* 12952ddb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952dde push eax */
  push32((uint32_t)(EAX));
  /* 12952ddf call 0x12945b00 */
  push32(0x12952de4u); f_12945b00();
  /* 12952de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952de7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12952dea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952ded mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952df0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952df2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12952df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952df8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12952dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952dfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952e01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12952e04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12952e07 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12952e09 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952e0b not edx */
  EDX = (~(EDX));
  /* 12952e0d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12952e10 push edx */
  push32((uint32_t)(EDX));
  /* 12952e11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952e14 push eax */
  push32((uint32_t)(EAX));
  /* 12952e15 call dword ptr [0x1297022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297022c))), 0x12952e1bu);
  /* 12952e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12952e1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952e20 push ecx */
  push32((uint32_t)(ECX));
  /* 12952e21 call 0x129435e0 */
  push32(0x12952e26u); f_129435e0();
  /* 12952e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12952e29:;
  /* 12952e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12952e2b:;
  /* 12952e2b pop esi */
  ESI = (pop32());
  /* 12952e2c mov esp, ebp */
  ESP = (EBP);
  /* 12952e2e pop ebp */
  EBP = (pop32());
  /* 12952e2f ret  */
  ESPCHK(0x12952b50u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12952e30 (124 bytes, 47 insns) */
void f_12952e30(void) {
  FTRACE(0x12952e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12952e31 mov ebp, esp */
  EBP = (ESP);
  /* 12952e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12952e34 mov eax, dword ptr [0x1296e4a4] */
  EAX = (r32((uint32_t)(0x1296e4a4)));
  /* 12952e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12952e3c jmp 0x12952e47 */
  goto L_12952e47;
L_12952e3e:;
  /* 12952e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e41 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952e44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12952e47:;
  /* 12952e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e4a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952e4d je 0x12952e9a */
  if (C.zf) goto L_12952e9a;
  /* 12952e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952e52 push eax */
  push32((uint32_t)(EAX));
  /* 12952e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12952e58 push edx */
  push32((uint32_t)(EDX));
  /* 12952e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952e5c push eax */
  push32((uint32_t)(EAX));
  /* 12952e5d call 0x12952600 */
  push32(0x12952e62u); f_12952600();
  /* 12952e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12952e67 jne 0x12952e98 */
  if (!C.zf) goto L_12952e98;
  /* 12952e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12952e6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952e71 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12952e75 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952e78 je 0x12952e8a */
  if (C.zf) goto L_12952e8a;
  /* 12952e7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e7d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12952e7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952e82 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12952e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952e88 jne 0x12952e98 */
  if (!C.zf) goto L_12952e98;
L_12952e8a:;
  /* 12952e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e8d sub eax, dword ptr [0x1296e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952e93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12952e96 jmp 0x12952ea8 */
  goto L_12952ea8;
L_12952e98:;
  /* 12952e98 jmp 0x12952e3e */
  goto L_12952e3e;
L_12952e9a:;
  /* 12952e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952e9d sub eax, dword ptr [0x1296e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952ea3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12952ea6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12952ea8:;
  /* 12952ea8 mov esp, ebp */
  ESP = (EBP);
  /* 12952eaa pop ebp */
  EBP = (pop32());
  /* 12952eab ret  */
  ESPCHK(0x12952e30u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12952eb0 (238 bytes, 80 insns) */
void f_12952eb0(void) {
  FTRACE(0x12952eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12952eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12952eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12952eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12952ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952ec0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12952ec3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952ec7 jne 0x12952ed0 */
  if (!C.zf) goto L_12952ed0;
  /* 12952ec9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12952ecb jmp 0x12952f9a */
  goto L_12952f9a;
L_12952ed0:;
  /* 12952ed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952ed3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12952ed5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952ed8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952edb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12952ede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952ee0 je 0x12952eed */
  if (C.zf) goto L_12952eed;
  /* 12952ee2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952ee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952ee8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12952eeb jmp 0x12952ed0 */
  goto L_12952ed0;
L_12952eed:;
  /* 12952eed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12952ef2 push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952ef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12952ef9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12952efc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12952f03 push eax */
  push32((uint32_t)(EAX));
  /* 12952f04 call 0x12942b50 */
  push32(0x12952f09u); f_12942b50();
  /* 12952f09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12952f0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12952f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952f19 jne 0x12952f25 */
  if (!C.zf) goto L_12952f25;
  /* 12952f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12952f1d call 0x12941ac0 */
  push32(0x12952f22u); f_12941ac0();
  /* 12952f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12952f25:;
  /* 12952f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952f28 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12952f2b:;
  /* 12952f2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952f2e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952f31 je 0x12952f8e */
  if (C.zf) goto L_12952f8e;
  /* 12952f33 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12952f38 push 0x1296a8e0 */
  push32((uint32_t)(0x1296a8e0u));
  /* 12952f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12952f3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952f42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12952f44 push edx */
  push32((uint32_t)(EDX));
  /* 12952f45 call 0x12945980 */
  push32(0x12952f4au); f_12945980();
  /* 12952f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f50 push eax */
  push32((uint32_t)(EAX));
  /* 12952f51 call 0x12942b50 */
  push32(0x12952f56u); f_12942b50();
  /* 12952f56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12952f5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952f64 je 0x12952f7a */
  if (C.zf) goto L_12952f7a;
  /* 12952f66 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952f69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12952f6b push ecx */
  push32((uint32_t)(ECX));
  /* 12952f6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f6f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12952f71 push eax */
  push32((uint32_t)(EAX));
  /* 12952f72 call 0x12945b00 */
  push32(0x12952f77u); f_12945b00();
  /* 12952f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12952f7a:;
  /* 12952f7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12952f7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12952f83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f86 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952f89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12952f8c jmp 0x12952f2b */
  goto L_12952f2b;
L_12952f8e:;
  /* 12952f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12952f91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12952f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12952f9a:;
  /* 12952f9a mov esp, ebp */
  ESP = (EBP);
  /* 12952f9c pop ebp */
  EBP = (pop32());
  /* 12952f9d ret  */
  ESPCHK(0x12952eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x12952fa0 (237 bytes, 81 insns) */
void f_12952fa0(void) {
  FTRACE(0x12952fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12952fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12952fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12952fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12952fa4 cmp dword ptr [0x1296fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12952fab jne 0x12952fc2 */
  if (!C.zf) goto L_12952fc2;
  /* 12952fad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12952fb0 push eax */
  push32((uint32_t)(EAX));
  /* 12952fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12952fb5 call 0x129530a0 */
  push32(0x12952fbau); f_129530a0();
  /* 12952fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952fbd jmp 0x12953089 */
  goto L_12953089;
L_12952fc2:;
  /* 12952fc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12952fc4 call 0x12946550 */
  push32(0x12952fc9u); f_12946550();
  /* 12952fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12952fcc jmp 0x12952fd7 */
  goto L_12952fd7;
L_12952fce:;
  /* 12952fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952fd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12952fd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12952fd7:;
  /* 12952fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12952fda movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12952fde mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12952fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952fe5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12952feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12952fed je 0x1295306b */
  if (C.zf) goto L_1295306b;
  /* 12952fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12952ff2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12952ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12952ff9 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 12952fff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12953002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12953004 je 0x12953056 */
  if (C.zf) goto L_12953056;
  /* 12953006 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12953009 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1295300c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1295300f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12953012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12953014 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12953016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12953018 jne 0x12953028 */
  if (!C.zf) goto L_12953028;
  /* 1295301a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1295301c call 0x129465f0 */
  push32(0x12953021u); f_129465f0();
  /* 12953021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12953024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12953026 jmp 0x12953089 */
  goto L_12953089;
L_12953028:;
  /* 12953028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1295302b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12953031 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12953034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12953037 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12953039 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1295303b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1295303d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12953040 jne 0x12953054 */
  if (!C.zf) goto L_12953054;
  /* 12953042 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12953044 call 0x129465f0 */
  push32(0x12953049u); f_129465f0();
  /* 12953049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1295304c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1295304f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12953052 jmp 0x12953089 */
  goto L_12953089;
L_12953054:;
  /* 12953054 jmp 0x12953066 */
  goto L_12953066;
L_12953056:;
  /* 12953056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12953059 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1295305f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12953062 jne 0x12953066 */
  if (!C.zf) goto L_12953066;
  /* 12953064 jmp 0x1295306b */
  goto L_1295306b;
L_12953066:;
  /* 12953066 jmp 0x12952fce */
  goto L_12952fce;
L_1295306b:;
  /* 1295306b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1295306d call 0x129465f0 */
  push32(0x12953072u); f_129465f0();
  /* 12953072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12953075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12953078 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1295307d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12953080 jne 0x12953087 */
  if (!C.zf) goto L_12953087;
  /* 12953082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12953085 jmp 0x12953089 */
  goto L_12953089;
L_12953087:;
  /* 12953087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12953089:;
  /* 12953089 mov esp, ebp */
  ESP = (EBP);
  /* 1295308b pop ebp */
  EBP = (pop32());
  /* 1295308c ret  */
  ESPCHK(0x12952fa0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x129530a0 (193 bytes, 87 insns) */
void f_129530a0(void) {
  FTRACE(0x129530a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129530a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129530a2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 129530a6 push ebx */
  push32((uint32_t)(EBX));
  /* 129530a7 mov ebx, eax */
  EBX = (EAX);
  /* 129530a9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129530ac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 129530b0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129530b6 je 0x129530cb */
  if (C.zf) goto L_129530cb;
L_129530b8:;
  /* 129530b8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 129530ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129530bb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129530bd je 0x12953090 */
  if (C.zf) { jmp_ind(0x12953090u); return; }
  /* 129530bf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 129530c1 je 0x12953114 */
  if (C.zf) goto L_12953114;
  /* 129530c3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129530c9 jne 0x129530b8 */
  if (!C.zf) goto L_129530b8;
L_129530cb:;
  /* 129530cb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 129530cd push edi */
  push32((uint32_t)(EDI));
  /* 129530ce mov eax, ebx */
  EAX = (EBX);
  /* 129530d0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 129530d3 push esi */
  push32((uint32_t)(ESI));
  /* 129530d4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_129530d6:;
  /* 129530d6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 129530d8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 129530dd mov eax, ecx */
  EAX = (ECX);
  /* 129530df mov esi, edi */
  ESI = (EDI);
  /* 129530e1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 129530e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129530e5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129530e7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129530ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129530ed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 129530ef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 129530f1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129530f4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 129530fa jne 0x12953118 */
  if (!C.zf) goto L_12953118;
  /* 129530fc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12953101 je 0x129530d6 */
  if (C.zf) goto L_129530d6;
  /* 12953103 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12953108 jne 0x12953112 */
  if (!C.zf) goto L_12953112;
  /* 1295310a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12953110 jne 0x129530d6 */
  if (!C.zf) goto L_129530d6;
L_12953112:;
  /* 12953112 pop esi */
  ESI = (pop32());
  /* 12953113 pop edi */
  EDI = (pop32());
L_12953114:;
  /* 12953114 pop ebx */
  EBX = (pop32());
  /* 12953115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12953117 ret  */
  ESPCHK(0x129530a0u, _esp0);
  ESP += 4; return;
L_12953118:;
  /* 12953118 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1295311b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1295311d je 0x12953155 */
  if (C.zf) goto L_12953155;
  /* 1295311f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12953121 je 0x12953112 */
  if (C.zf) goto L_12953112;
  /* 12953123 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12953125 je 0x1295314e */
  if (C.zf) goto L_1295314e;
  /* 12953127 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12953129 je 0x12953112 */
  if (C.zf) goto L_12953112;
  /* 1295312b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1295312e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12953130 je 0x12953147 */
  if (C.zf) goto L_12953147;
  /* 12953132 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12953134 je 0x12953112 */
  if (C.zf) goto L_12953112;
  /* 12953136 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12953138 je 0x12953140 */
  if (C.zf) goto L_12953140;
  /* 1295313a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1295313c je 0x12953112 */
  if (C.zf) goto L_12953112;
  /* 1295313e jmp 0x129530d6 */
  goto L_129530d6;
L_12953140:;
  /* 12953140 pop esi */
  ESI = (pop32());
  /* 12953141 pop edi */
  EDI = (pop32());
  /* 12953142 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12953145 pop ebx */
  EBX = (pop32());
  /* 12953146 ret  */
  ESPCHK(0x129530a0u, _esp0);
  ESP += 4; return;
L_12953147:;
  /* 12953147 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1295314a pop esi */
  ESI = (pop32());
  /* 1295314b pop edi */
  EDI = (pop32());
  /* 1295314c pop ebx */
  EBX = (pop32());
  /* 1295314d ret  */
  ESPCHK(0x129530a0u, _esp0);
  ESP += 4; return;
L_1295314e:;
  /* 1295314e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12953151 pop esi */
  ESI = (pop32());
  /* 12953152 pop edi */
  EDI = (pop32());
  /* 12953153 pop ebx */
  EBX = (pop32());
  /* 12953154 ret  */
  ESPCHK(0x129530a0u, _esp0);
  ESP += 4; return;
L_12953155:;
  /* 12953155 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12953158 pop esi */
  ESI = (pop32());
  /* 12953159 pop edi */
  EDI = (pop32());
  /* 1295315a pop ebx */
  EBX = (pop32());
  /* 1295315b ret  */
  ESPCHK(0x129530a0u, _esp0);
  ESP += 4; return;
  /* 1295315c jmp dword ptr [0x12970254] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12970254)))); return;
}

/* RtlUnwind @ 0x129532ac (6 bytes, 1 insns) */
void f_129532ac(void) {
  FTRACE(0x129532acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129532ac jmp dword ptr [0x12970330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12970330)))); return;
}

