#include "recomp.h"

/* __close_lk @ 0x12c4f750 (170 bytes, 59 insns) */
void f_12c4f750(void) {
  FTRACE(0x12c4f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f751 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f753 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f754 push esi */
  push32((uint32_t)(ESI));
  /* 12c4f755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f758 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f759 call 0x12c4c0c0 */
  push32(0x12c4f75eu); f_12c4c0c0();
  /* 12c4f75e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f761 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f764 je 0x12c4f7a3 */
  if (C.zf) goto L_12c4f7a3;
  /* 12c4f766 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f76a je 0x12c4f772 */
  if (C.zf) goto L_12c4f772;
  /* 12c4f76c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f770 jne 0x12c4f78c */
  if (!C.zf) goto L_12c4f78c;
L_12c4f772:;
  /* 12c4f772 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4f774 call 0x12c4c0c0 */
  push32(0x12c4f779u); f_12c4c0c0();
  /* 12c4f779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f77c mov esi, eax */
  ESI = (EAX);
  /* 12c4f77e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4f780 call 0x12c4c0c0 */
  push32(0x12c4f785u); f_12c4c0c0();
  /* 12c4f785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f788 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f78a je 0x12c4f7a3 */
  if (C.zf) goto L_12c4f7a3;
L_12c4f78c:;
  /* 12c4f78c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f78f push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f790 call 0x12c4c0c0 */
  push32(0x12c4f795u); f_12c4c0c0();
  /* 12c4f795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f798 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f799 call dword ptr [0x12c70240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70240))), 0x12c4f79fu);
  /* 12c4f79f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f7a1 je 0x12c4f7ac */
  if (C.zf) goto L_12c4f7ac;
L_12c4f7a3:;
  /* 12c4f7a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4f7aa jmp 0x12c4f7b5 */
  goto L_12c4f7b5;
L_12c4f7ac:;
  /* 12c4f7ac call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4f7b2u);
  /* 12c4f7b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4f7b5:;
  /* 12c4f7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f7b8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f7b9 call 0x12c4bfe0 */
  push32(0x12c4f7beu); f_12c4bfe0();
  /* 12c4f7be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f7c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f7c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4f7c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f7ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f7cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f7d0 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4f7d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12c4f7dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f7e0 je 0x12c4f7f3 */
  if (C.zf) goto L_12c4f7f3;
  /* 12c4f7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f7e5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f7e6 call 0x12c4a980 */
  push32(0x12c4f7ebu); f_12c4a980();
  /* 12c4f7eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f7ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f7f1 jmp 0x12c4f7f5 */
  goto L_12c4f7f5;
L_12c4f7f3:;
  /* 12c4f7f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4f7f5:;
  /* 12c4f7f5 pop esi */
  ESI = (pop32());
  /* 12c4f7f6 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f7f8 pop ebp */
  EBP = (pop32());
  /* 12c4f7f9 ret  */
  ESPCHK(0x12c4f750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x12c4f800 (146 bytes, 52 insns) */
void f_12c4f800(void) {
  FTRACE(0x12c4f800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f800 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f801 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f803 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4f804 push esi */
  push32((uint32_t)(ESI));
  /* 12c4f805 push edi */
  push32((uint32_t)(EDI));
L_12c4f806:;
  /* 12c4f806 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f80a jne 0x12c4f82a */
  if (!C.zf) goto L_12c4f82a;
  /* 12c4f80c push 0x12c69fe0 */
  push32((uint32_t)(0x12c69fe0u));
  /* 12c4f811 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4f813 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c4f815 push 0x12c6a6a8 */
  push32((uint32_t)(0x12c6a6a8u));
  /* 12c4f81a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4f81c call 0x12c41c10 */
  push32(0x12c4f821u); f_12c41c10();
  /* 12c4f821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f824 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f827 jne 0x12c4f82a */
  if (!C.zf) goto L_12c4f82a;
  /* 12c4f829 int3  */
  x86_unimpl("int3 @ 0x12c4f829");
L_12c4f82a:;
  /* 12c4f82a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f82c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f82e jne 0x12c4f806 */
  if (!C.zf) goto L_12c4f806;
  /* 12c4f830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f833 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4f836 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f83c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4f83e je 0x12c4f88d */
  if (C.zf) goto L_12c4f88d;
  /* 12c4f840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f843 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4f846 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4f84b je 0x12c4f88d */
  if (C.zf) goto L_12c4f88d;
  /* 12c4f84d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4f84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f852 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c4f855 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f856 call 0x12c435e0 */
  push32(0x12c4f85bu); f_12c435e0();
  /* 12c4f85b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f861 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4f864 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f86a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f86d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c4f870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f873 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12c4f879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f87c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c4f883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f886 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12c4f88d:;
  /* 12c4f88d pop edi */
  EDI = (pop32());
  /* 12c4f88e pop esi */
  ESI = (pop32());
  /* 12c4f88f pop ebx */
  EBX = (pop32());
  /* 12c4f890 pop ebp */
  EBP = (pop32());
  /* 12c4f891 ret  */
  ESPCHK(0x12c4f800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x12c4f8a0 (289 bytes, 97 insns) */
void f_12c4f8a0(void) {
  FTRACE(0x12c4f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f8a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f8a6 push esi */
  push32((uint32_t)(ESI));
  /* 12c4f8a7 mov eax, dword ptr [0x12c6dc98] */
  EAX = (r32((uint32_t)(0x12c6dc98)));
  /* 12c4f8ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4f8af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4f8b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4f8bd jmp 0x12c4f8c8 */
  goto L_12c4f8c8;
L_12c4f8bf:;
  /* 12c4f8bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f8c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f8c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c4f8c8:;
  /* 12c4f8c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f8cc jae 0x12c4f901 */
  if (!C.cf) goto L_12c4f901;
  /* 12c4f8ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f8d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f8d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4f8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f8d8 call 0x12c45980 */
  push32(0x12c4f8ddu); f_12c45980();
  /* 12c4f8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f8e0 mov esi, eax */
  ESI = (EAX);
  /* 12c4f8e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f8e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f8e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12c4f8ec push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f8ed call 0x12c45980 */
  push32(0x12c4f8f2u); f_12c45980();
  /* 12c4f8f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f8f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f8f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c4f8fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4f8ff jmp 0x12c4f8bf */
  goto L_12c4f8bf;
L_12c4f901:;
  /* 12c4f901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f907 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f908 call 0x12c42b30 */
  push32(0x12c4f90du); f_12c42b30();
  /* 12c4f90d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4f913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f917 je 0x12c4f9b9 */
  if (C.zf) goto L_12c4f9b9;
  /* 12c4f91d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f920 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4f923 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4f92a jmp 0x12c4f935 */
  goto L_12c4f935;
L_12c4f92c:;
  /* 12c4f92c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f92f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f932 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c4f935:;
  /* 12c4f935 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f939 jae 0x12c4f9aa */
  if (!C.cf) goto L_12c4f9aa;
  /* 12c4f93b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f93e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12c4f941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f944 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f947 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4f94a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f94d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f950 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4f953 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f954 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f957 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f958 call 0x12c45b00 */
  push32(0x12c4f95du); f_12c45b00();
  /* 12c4f95d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f960 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f961 call 0x12c45980 */
  push32(0x12c4f966u); f_12c45980();
  /* 12c4f966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f969 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f96c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f96e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4f971 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f974 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12c4f977 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f97a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f97d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4f980 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f983 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f986 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12c4f98a push eax */
  push32((uint32_t)(EAX));
  /* 12c4f98b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f98e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f98f call 0x12c45b00 */
  push32(0x12c4f994u); f_12c45b00();
  /* 12c4f994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f997 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f998 call 0x12c45980 */
  push32(0x12c4f99du); f_12c45980();
  /* 12c4f99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f9a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f9a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f9a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4f9a8 jmp 0x12c4f92c */
  goto L_12c4f92c;
L_12c4f9aa:;
  /* 12c4f9aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f9ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c4f9b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4f9b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f9b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c4f9b9:;
  /* 12c4f9b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f9bc pop esi */
  ESI = (pop32());
  /* 12c4f9bd mov esp, ebp */
  ESP = (EBP);
  /* 12c4f9bf pop ebp */
  EBP = (pop32());
  /* 12c4f9c0 ret  */
  ESPCHK(0x12c4f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9d0 @ 0x12c4f9d0 (291 bytes, 97 insns) */
void f_12c4f9d0(void) {
  FTRACE(0x12c4f9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f9d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f9d6 push esi */
  push32((uint32_t)(ESI));
  /* 12c4f9d7 mov eax, dword ptr [0x12c6dc98] */
  EAX = (r32((uint32_t)(0x12c6dc98)));
  /* 12c4f9dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4f9df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4f9e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4f9ed jmp 0x12c4f9f8 */
  goto L_12c4f9f8;
L_12c4f9ef:;
  /* 12c4f9ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f9f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f9f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c4f9f8:;
  /* 12c4f9f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f9fc jae 0x12c4fa32 */
  if (!C.cf) goto L_12c4fa32;
  /* 12c4f9fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fa01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fa04 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12c4fa08 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fa09 call 0x12c45980 */
  push32(0x12c4fa0eu); f_12c45980();
  /* 12c4fa0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa11 mov esi, eax */
  ESI = (EAX);
  /* 12c4fa13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fa16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fa19 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12c4fa1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fa1e call 0x12c45980 */
  push32(0x12c4fa23u); f_12c45980();
  /* 12c4fa23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa26 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa29 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c4fa2d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4fa30 jmp 0x12c4f9ef */
  goto L_12c4f9ef;
L_12c4fa32:;
  /* 12c4fa32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4fa35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa38 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fa39 call 0x12c42b30 */
  push32(0x12c4fa3eu); f_12c42b30();
  /* 12c4fa3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4fa44 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fa48 je 0x12c4faeb */
  if (C.zf) goto L_12c4faeb;
  /* 12c4fa4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4fa51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4fa54 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4fa5b jmp 0x12c4fa66 */
  goto L_12c4fa66;
L_12c4fa5d:;
  /* 12c4fa5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fa60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c4fa66:;
  /* 12c4fa66 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fa6a jae 0x12c4fadc */
  if (!C.cf) goto L_12c4fadc;
  /* 12c4fa6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fa6f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12c4fa72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fa75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4fa7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fa7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fa81 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12c4fa85 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fa86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fa89 push edx */
  push32((uint32_t)(EDX));
  /* 12c4fa8a call 0x12c45b00 */
  push32(0x12c4fa8fu); f_12c45b00();
  /* 12c4fa8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa92 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fa93 call 0x12c45980 */
  push32(0x12c4fa98u); f_12c45980();
  /* 12c4fa98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fa9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fa9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4faa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4faa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4faa6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12c4faa9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4faac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4faaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4fab2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fab8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c4fabc push eax */
  push32((uint32_t)(EAX));
  /* 12c4fabd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fac0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fac1 call 0x12c45b00 */
  push32(0x12c4fac6u); f_12c45b00();
  /* 12c4fac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fac9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4faca call 0x12c45980 */
  push32(0x12c4facfu); f_12c45980();
  /* 12c4facf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fad2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fad5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fad7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fada jmp 0x12c4fa5d */
  goto L_12c4fa5d;
L_12c4fadc:;
  /* 12c4fadc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fadf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c4fae2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fae8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c4faeb:;
  /* 12c4faeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4faee pop esi */
  ESI = (pop32());
  /* 12c4faef mov esp, ebp */
  ESP = (EBP);
  /* 12c4faf1 pop ebp */
  EBP = (pop32());
  /* 12c4faf2 ret  */
  ESPCHK(0x12c4f9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x12c4fb00 (878 bytes, 273 insns) */
void f_12c4fb00(void) {
  FTRACE(0x12c4fb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4fb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4fb01 mov ebp, esp */
  EBP = (ESP);
  /* 12c4fb03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4fb06 push esi */
  push32((uint32_t)(ESI));
  /* 12c4fb07 mov eax, dword ptr [0x12c6dc98] */
  EAX = (r32((uint32_t)(0x12c6dc98)));
  /* 12c4fb0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4fb0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4fb16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4fb1d jmp 0x12c4fb28 */
  goto L_12c4fb28;
L_12c4fb1f:;
  /* 12c4fb1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c4fb28:;
  /* 12c4fb28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fb2c jae 0x12c4fb61 */
  if (!C.cf) goto L_12c4fb61;
  /* 12c4fb2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fb34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4fb37 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fb38 call 0x12c45980 */
  push32(0x12c4fb3du); f_12c45980();
  /* 12c4fb3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb40 mov esi, eax */
  ESI = (EAX);
  /* 12c4fb42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fb48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12c4fb4c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fb4d call 0x12c45980 */
  push32(0x12c4fb52u); f_12c45980();
  /* 12c4fb52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c4fb5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4fb5f jmp 0x12c4fb1f */
  goto L_12c4fb1f;
L_12c4fb61:;
  /* 12c4fb61 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4fb68 jmp 0x12c4fb73 */
  goto L_12c4fb73;
L_12c4fb6a:;
  /* 12c4fb6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c4fb73:;
  /* 12c4fb73 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fb77 jae 0x12c4fbad */
  if (!C.cf) goto L_12c4fbad;
  /* 12c4fb79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fb7f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c4fb83 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fb84 call 0x12c45980 */
  push32(0x12c4fb89u); f_12c45980();
  /* 12c4fb89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fb8c mov esi, eax */
  ESI = (EAX);
  /* 12c4fb8e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fb91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fb94 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c4fb98 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fb99 call 0x12c45980 */
  push32(0x12c4fb9eu); f_12c45980();
  /* 12c4fb9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fba1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fba4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c4fba8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4fbab jmp 0x12c4fb6a */
  goto L_12c4fb6a;
L_12c4fbad:;
  /* 12c4fbad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fbb0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12c4fbb6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fbb7 call 0x12c45980 */
  push32(0x12c4fbbcu); f_12c45980();
  /* 12c4fbbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fbbf mov esi, eax */
  ESI = (EAX);
  /* 12c4fbc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fbc4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12c4fbca push edx */
  push32((uint32_t)(EDX));
  /* 12c4fbcb call 0x12c45980 */
  push32(0x12c4fbd0u); f_12c45980();
  /* 12c4fbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fbd3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fbd6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c4fbda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4fbdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fbe0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12c4fbe6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4fbe7 call 0x12c45980 */
  push32(0x12c4fbecu); f_12c45980();
  /* 12c4fbec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fbef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4fbf2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fbf6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4fbf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fbfc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12c4fc02 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fc03 call 0x12c45980 */
  push32(0x12c4fc08u); f_12c45980();
  /* 12c4fc08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4fc0e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c4fc12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4fc15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fc18 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12c4fc1e push edx */
  push32((uint32_t)(EDX));
  /* 12c4fc1f call 0x12c45980 */
  push32(0x12c4fc24u); f_12c45980();
  /* 12c4fc24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4fc2a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fc2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4fc31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4fc34 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc39 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fc3a call 0x12c42b30 */
  push32(0x12c4fc3fu); f_12c42b30();
  /* 12c4fc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4fc45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fc49 je 0x12c4fe66 */
  if (C.zf) goto L_12c4fe66;
  /* 12c4fc4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4fc52 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c4fc55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4fc58 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc5e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fc61 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12c4fc66 mov eax, dword ptr [0x12c6dc98] */
  EAX = (r32((uint32_t)(0x12c6dc98)));
  /* 12c4fc6b push eax */
  push32((uint32_t)(EAX));
  /* 12c4fc6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4fc6f push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fc70 call 0x12c49430 */
  push32(0x12c4fc75u); f_12c49430();
  /* 12c4fc75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4fc7f jmp 0x12c4fc8a */
  goto L_12c4fc8a;
L_12c4fc81:;
  /* 12c4fc81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fc84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fc87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c4fc8a:;
  /* 12c4fc8a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fc8e jae 0x12c4fcfe */
  if (!C.cf) goto L_12c4fcfe;
  /* 12c4fc90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fc93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fc96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fc99 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12c4fc9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fc9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fca2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4fca5 push edx */
  push32((uint32_t)(EDX));
  /* 12c4fca6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fca9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fcaa call 0x12c45b00 */
  push32(0x12c4fcafu); f_12c45b00();
  /* 12c4fcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fcb2 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fcb3 call 0x12c45980 */
  push32(0x12c4fcb8u); f_12c45980();
  /* 12c4fcb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fcbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fcbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fcc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fcc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fcc8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fccb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fcce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12c4fcd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fcd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fcd8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12c4fcdc push edx */
  push32((uint32_t)(EDX));
  /* 12c4fcdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fce0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fce1 call 0x12c45b00 */
  push32(0x12c4fce6u); f_12c45b00();
  /* 12c4fce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fce9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fcea call 0x12c45980 */
  push32(0x12c4fcefu); f_12c45980();
  /* 12c4fcef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fcf2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fcf5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fcf9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fcfc jmp 0x12c4fc81 */
  goto L_12c4fc81;
L_12c4fcfe:;
  /* 12c4fcfe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4fd05 jmp 0x12c4fd10 */
  goto L_12c4fd10;
L_12c4fd07:;
  /* 12c4fd07 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fd0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fd0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c4fd10:;
  /* 12c4fd10 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fd14 jae 0x12c4fd86 */
  if (!C.cf) goto L_12c4fd86;
  /* 12c4fd16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fd19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fd1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd1f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12c4fd23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fd26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fd29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c4fd2d push eax */
  push32((uint32_t)(EAX));
  /* 12c4fd2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd31 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fd32 call 0x12c45b00 */
  push32(0x12c4fd37u); f_12c45b00();
  /* 12c4fd37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fd3a push eax */
  push32((uint32_t)(EAX));
  /* 12c4fd3b call 0x12c45980 */
  push32(0x12c4fd40u); f_12c45980();
  /* 12c4fd40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fd43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd46 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c4fd4a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4fd4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fd50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fd53 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd56 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12c4fd5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4fd5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fd60 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c4fd64 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fd65 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd68 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fd69 call 0x12c45b00 */
  push32(0x12c4fd6eu); f_12c45b00();
  /* 12c4fd6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fd71 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fd72 call 0x12c45980 */
  push32(0x12c4fd77u); f_12c45980();
  /* 12c4fd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fd7a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd7d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c4fd81 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4fd84 jmp 0x12c4fd07 */
  goto L_12c4fd07;
L_12c4fd86:;
  /* 12c4fd86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fd89 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd8c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12c4fd92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fd95 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12c4fd9b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fd9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fd9f push edx */
  push32((uint32_t)(EDX));
  /* 12c4fda0 call 0x12c45b00 */
  push32(0x12c4fda5u); f_12c45b00();
  /* 12c4fda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fda8 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fda9 call 0x12c45980 */
  push32(0x12c4fdaeu); f_12c45980();
  /* 12c4fdae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fdb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fdb4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fdb8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fdbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fdbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fdc1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12c4fdc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fdca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12c4fdd0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fdd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fdd5 call 0x12c45b00 */
  push32(0x12c4fddau); f_12c45b00();
  /* 12c4fdda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fddd push eax */
  push32((uint32_t)(EAX));
  /* 12c4fdde call 0x12c45980 */
  push32(0x12c4fde3u); f_12c45980();
  /* 12c4fde3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fde6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fde9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c4fded mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4fdf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fdf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fdf6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12c4fdfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fdff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12c4fe05 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fe06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe09 push edx */
  push32((uint32_t)(EDX));
  /* 12c4fe0a call 0x12c45b00 */
  push32(0x12c4fe0fu); f_12c45b00();
  /* 12c4fe0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fe12 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fe13 call 0x12c45980 */
  push32(0x12c4fe18u); f_12c45980();
  /* 12c4fe18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fe1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c4fe22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c4fe25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fe28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe2b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12c4fe31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4fe34 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12c4fe3a push eax */
  push32((uint32_t)(EAX));
  /* 12c4fe3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe3e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fe3f call 0x12c45b00 */
  push32(0x12c4fe44u); f_12c45b00();
  /* 12c4fe44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fe47 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fe48 call 0x12c45980 */
  push32(0x12c4fe4du); f_12c45980();
  /* 12c4fe4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fe50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe53 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c4fe57 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4fe5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4fe5d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4fe60 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12c4fe66:;
  /* 12c4fe66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4fe69 pop esi */
  ESI = (pop32());
  /* 12c4fe6a mov esp, ebp */
  ESP = (EBP);
  /* 12c4fe6c pop ebp */
  EBP = (pop32());
  /* 12c4fe6d ret  */
  ESPCHK(0x12c4fb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe70 @ 0x12c4fe70 (31 bytes, 15 insns) */
void f_12c4fe70(void) {
  FTRACE(0x12c4fe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4fe70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4fe71 mov ebp, esp */
  EBP = (ESP);
  /* 12c4fe73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4fe75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4fe78 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fe79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4fe7c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4fe7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4fe80 push edx */
  push32((uint32_t)(EDX));
  /* 12c4fe81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4fe84 push eax */
  push32((uint32_t)(EAX));
  /* 12c4fe85 call 0x12c4fe90 */
  push32(0x12c4fe8au); f_12c4fe90();
  /* 12c4fe8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fe8d pop ebp */
  EBP = (pop32());
  /* 12c4fe8e ret  */
  ESPCHK(0x12c4fe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x12c4fe90 (393 bytes, 123 insns) */
void f_12c4fe90(void) {
  FTRACE(0x12c4fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4fe91 mov ebp, esp */
  EBP = (ESP);
  /* 12c4fe93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4fe96 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fe9a jne 0x12c4fea6 */
  if (!C.zf) goto L_12c4fea6;
  /* 12c4fe9c mov eax, dword ptr [0x12c6dc98] */
  EAX = (r32((uint32_t)(0x12c6dc98)));
  /* 12c4fea1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c4fea4 jmp 0x12c4feac */
  goto L_12c4feac;
L_12c4fea6:;
  /* 12c4fea6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4fea9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c4feac:;
  /* 12c4feac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4feaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4feb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4feb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4feb8 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4febd call dword ptr [0x12c70278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70278))), 0x12c4fec3u);
  /* 12c4fec3 cmp dword ptr [0x12c6e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4feca je 0x12c4feea */
  if (C.zf) goto L_12c4feea;
  /* 12c4fecc push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4fed1 call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c4fed7u);
  /* 12c4fed7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4fed9 call 0x12c46550 */
  push32(0x12c4fedeu); f_12c46550();
  /* 12c4fede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c4fee8 jmp 0x12c4fef1 */
  goto L_12c4fef1;
L_12c4feea:;
  /* 12c4feea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c4fef1:;
  /* 12c4fef1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4fef5 jbe 0x12c4ffe2 */
  if ((C.cf||C.zf)) goto L_12c4ffe2;
  /* 12c4fefb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4fefe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4ff00 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12c4ff03 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4ff07 je 0x12c4ff11 */
  if (C.zf) goto L_12c4ff11;
  /* 12c4ff09 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4ff0d je 0x12c4ff16 */
  if (C.zf) goto L_12c4ff16;
  /* 12c4ff0f jmp 0x12c4ff70 */
  goto L_12c4ff70;
L_12c4ff11:;
  /* 12c4ff11 jmp 0x12c4ffe2 */
  goto L_12c4ffe2;
L_12c4ff16:;
  /* 12c4ff16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ff1c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c4ff1f mov dword ptr [0x12c6e7f0], 0 */
  w32((uint32_t)(0x12c6e7f0), (0x0u));
  /* 12c4ff29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4ff2f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ff32 jne 0x12c4ff47 */
  if (!C.zf) goto L_12c4ff47;
  /* 12c4ff34 mov dword ptr [0x12c6e7f0], 1 */
  w32((uint32_t)(0x12c6e7f0), (0x1u));
  /* 12c4ff3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ff44 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c4ff47:;
  /* 12c4ff47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4ff4a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ff4b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12c4ff4e push edx */
  push32((uint32_t)(EDX));
  /* 12c4ff4f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c4ff52 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ff53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4ff56 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ff57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4ff5c push eax */
  push32((uint32_t)(EAX));
  /* 12c4ff5d call 0x12c50020 */
  push32(0x12c4ff62u); f_12c50020();
  /* 12c4ff62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ff65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ff6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c4ff6e jmp 0x12c4ffdd */
  goto L_12c4ffdd;
L_12c4ff70:;
  /* 12c4ff70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ff75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4ff77 mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c4ff7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ff7f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c4ff83 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ff89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4ff8b je 0x12c4ffb8 */
  if (C.zf) goto L_12c4ffb8;
  /* 12c4ff8d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ff91 jbe 0x12c4ffb8 */
  if ((C.cf||C.zf)) goto L_12c4ffb8;
  /* 12c4ff93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ff96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ff99 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4ff9b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c4ff9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ffa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ffa3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c4ffa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ffa9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ffac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c4ffaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4ffb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ffb5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c4ffb8:;
  /* 12c4ffb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ffbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ffbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4ffc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c4ffc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ffc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ffc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c4ffcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ffce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ffd1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c4ffd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4ffd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ffda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c4ffdd:;
  /* 12c4ffdd jmp 0x12c4fef1 */
  goto L_12c4fef1;
L_12c4ffe2:;
  /* 12c4ffe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ffe6 je 0x12c4fff4 */
  if (C.zf) goto L_12c4fff4;
  /* 12c4ffe8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4ffea call 0x12c465f0 */
  push32(0x12c4ffefu); f_12c465f0();
  /* 12c4ffef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4fff2 jmp 0x12c4ffff */
  goto L_12c4ffff;
L_12c4fff4:;
  /* 12c4fff4 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4fff9 call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c4ffffu);
L_12c4ffff:;
  /* 12c4ffff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50003 jbe 0x12c50013 */
  if ((C.cf||C.zf)) goto L_12c50013;
  /* 12c50005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50008 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c5000b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5000e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50011 jmp 0x12c50015 */
  goto L_12c50015;
L_12c50013:;
  /* 12c50013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c50015:;
  /* 12c50015 mov esp, ebp */
  ESP = (EBP);
  /* 12c50017 pop ebp */
  EBP = (pop32());
  /* 12c50018 ret  */
  ESPCHK(0x12c4fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x12c50020 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12c50020(void) {
  FTRACE(0x12c50020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50020 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50021 mov ebp, esp */
  EBP = (ESP);
  /* 12c50023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50026 push esi */
  push32((uint32_t)(ESI));
  /* 12c50027 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12c5002b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c5002e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50031 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50034 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c50037 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5003b ja 0x12c50588 */
  if ((!C.cf&&!C.zf)) goto L_12c50588;
  /* 12c50041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c50046 mov dl, byte ptr [eax + 0x12c505e9] */
  DL = (r8((uint32_t)(EAX + 0x12c505e9)));
  /* 12c5004c jmp dword ptr [edx*4 + 0x12c5058d] */
  switch (EDX) {
    case 0: goto L_12c50566;
    case 1: goto L_12c50075;
    case 2: goto L_12c500bb;
    case 3: goto L_12c50208;
    case 4: goto L_12c50230;
    case 5: goto L_12c502cf;
    case 6: goto L_12c5033b;
    case 7: goto L_12c50364;
    case 8: goto L_12c503a5;
    case 9: goto L_12c50487;
    case 10: goto L_12c504ee;
    case 11: goto L_12c5053b;
    case 12: goto L_12c50053;
    case 13: goto L_12c50098;
    case 14: goto L_12c500de;
    case 15: goto L_12c501de;
    case 16: goto L_12c50275;
    case 17: goto L_12c502a2;
    case 18: goto L_12c502f7;
    case 19: goto L_12c5037b;
    case 20: goto L_12c50429;
    case 21: goto L_12c504b8;
    case 22: goto L_12c50588;
    default: x86_unimpl("switch@0x12c5004c out of table"); return;
  }
L_12c50053:;
  /* 12c50053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50056 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50057 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5005a push edx */
  push32((uint32_t)(EDX));
  /* 12c5005b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5005e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c50061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50064 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c50067 push eax */
  push32((uint32_t)(EAX));
  /* 12c50068 call 0x12c50640 */
  push32(0x12c5006du); f_12c50640();
  /* 12c5006d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50070 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50075:;
  /* 12c50075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50078 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50079 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5007c push edx */
  push32((uint32_t)(EDX));
  /* 12c5007d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50080 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c50083 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50086 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12c5008a push eax */
  push32((uint32_t)(EAX));
  /* 12c5008b call 0x12c50640 */
  push32(0x12c50090u); f_12c50640();
  /* 12c50090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50093 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50098:;
  /* 12c50098 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5009b push ecx */
  push32((uint32_t)(ECX));
  /* 12c5009c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5009f push edx */
  push32((uint32_t)(EDX));
  /* 12c500a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c500a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c500a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c500a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c500ad push eax */
  push32((uint32_t)(EAX));
  /* 12c500ae call 0x12c50640 */
  push32(0x12c500b3u); f_12c50640();
  /* 12c500b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c500b6 jmp 0x12c50588 */
  goto L_12c50588;
L_12c500bb:;
  /* 12c500bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c500be push ecx */
  push32((uint32_t)(ECX));
  /* 12c500bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c500c2 push edx */
  push32((uint32_t)(EDX));
  /* 12c500c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c500c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c500c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c500cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c500d0 push eax */
  push32((uint32_t)(EAX));
  /* 12c500d1 call 0x12c50640 */
  push32(0x12c500d6u); f_12c50640();
  /* 12c500d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c500d9 jmp 0x12c50588 */
  goto L_12c50588;
L_12c500de:;
  /* 12c500de cmp dword ptr [0x12c6e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c500e5 je 0x12c50166 */
  if (C.zf) goto L_12c50166;
  /* 12c500e7 mov dword ptr [0x12c6e7f0], 0 */
  w32((uint32_t)(0x12c6e7f0), (0x0u));
  /* 12c500f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c500f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c500f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c500f8 push edx */
  push32((uint32_t)(EDX));
  /* 12c500f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c500fc push eax */
  push32((uint32_t)(EAX));
  /* 12c500fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50100 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50101 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12c5010a push eax */
  push32((uint32_t)(EAX));
  /* 12c5010b call 0x12c507f0 */
  push32(0x12c50110u); f_12c507f0();
  /* 12c50110 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50116 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50119 jne 0x12c50120 */
  if (!C.zf) goto L_12c50120;
  /* 12c5011b jmp 0x12c50588 */
  goto L_12c50588;
L_12c50120:;
  /* 12c50120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50123 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50125 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12c50128 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5012b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c5012d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50130 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c50135 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50138 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c5013a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c5013d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50140 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c50142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50145 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50146 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50149 push edx */
  push32((uint32_t)(EDX));
  /* 12c5014a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5014d push eax */
  push32((uint32_t)(EAX));
  /* 12c5014e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50151 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50152 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50155 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12c5015b push eax */
  push32((uint32_t)(EAX));
  /* 12c5015c call 0x12c507f0 */
  push32(0x12c50161u); f_12c507f0();
  /* 12c50161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50164 jmp 0x12c501d9 */
  goto L_12c501d9;
L_12c50166:;
  /* 12c50166 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50169 push ecx */
  push32((uint32_t)(ECX));
  /* 12c5016a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5016d push edx */
  push32((uint32_t)(EDX));
  /* 12c5016e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50171 push eax */
  push32((uint32_t)(EAX));
  /* 12c50172 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50175 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50176 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50179 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12c5017f push eax */
  push32((uint32_t)(EAX));
  /* 12c50180 call 0x12c507f0 */
  push32(0x12c50185u); f_12c507f0();
  /* 12c50185 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50188 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5018b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5018e jne 0x12c50195 */
  if (!C.zf) goto L_12c50195;
  /* 12c50190 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50195:;
  /* 12c50195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50198 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c5019a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12c5019d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c501a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c501a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c501a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c501a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c501aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c501ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c501af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c501b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c501b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c501b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c501ba push ecx */
  push32((uint32_t)(ECX));
  /* 12c501bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c501be push edx */
  push32((uint32_t)(EDX));
  /* 12c501bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c501c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c501c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c501c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c501c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c501ca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12c501d0 push eax */
  push32((uint32_t)(EAX));
  /* 12c501d1 call 0x12c507f0 */
  push32(0x12c501d6u); f_12c507f0();
  /* 12c501d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c501d9:;
  /* 12c501d9 jmp 0x12c50588 */
  goto L_12c50588;
L_12c501de:;
  /* 12c501de mov ecx, dword ptr [0x12c6e7f0] */
  ECX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c501e4 mov dword ptr [0x12c6e800], ecx */
  w32((uint32_t)(0x12c6e800), (ECX));
  /* 12c501ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c501ed push edx */
  push32((uint32_t)(EDX));
  /* 12c501ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c501f1 push eax */
  push32((uint32_t)(EAX));
  /* 12c501f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c501f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c501f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c501fa push edx */
  push32((uint32_t)(EDX));
  /* 12c501fb call 0x12c50690 */
  push32(0x12c50200u); f_12c50690();
  /* 12c50200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50203 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50208:;
  /* 12c50208 mov eax, dword ptr [0x12c6e7f0] */
  EAX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c5020d mov dword ptr [0x12c6e800], eax */
  w32((uint32_t)(0x12c6e800), (EAX));
  /* 12c50212 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50215 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50216 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50219 push edx */
  push32((uint32_t)(EDX));
  /* 12c5021a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c5021c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5021f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c50222 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50223 call 0x12c50690 */
  push32(0x12c50228u); f_12c50690();
  /* 12c50228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5022b jmp 0x12c50588 */
  goto L_12c50588;
L_12c50230:;
  /* 12c50230 mov edx, dword ptr [0x12c6e7f0] */
  EDX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c50236 mov dword ptr [0x12c6e800], edx */
  w32((uint32_t)(0x12c6e800), (EDX));
  /* 12c5023c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5023f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c50242 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c50243 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12c50248 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c5024a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c5024d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50251 jne 0x12c5025a */
  if (!C.zf) goto L_12c5025a;
  /* 12c50253 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12c5025a:;
  /* 12c5025a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5025d push edx */
  push32((uint32_t)(EDX));
  /* 12c5025e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50261 push eax */
  push32((uint32_t)(EAX));
  /* 12c50262 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50267 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50268 call 0x12c50690 */
  push32(0x12c5026du); f_12c50690();
  /* 12c5026d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50270 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50275:;
  /* 12c50275 mov edx, dword ptr [0x12c6e7f0] */
  EDX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c5027b mov dword ptr [0x12c6e800], edx */
  w32((uint32_t)(0x12c6e800), (EDX));
  /* 12c50281 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50284 push eax */
  push32((uint32_t)(EAX));
  /* 12c50285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50288 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50289 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c5028b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5028e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c50291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50294 push eax */
  push32((uint32_t)(EAX));
  /* 12c50295 call 0x12c50690 */
  push32(0x12c5029au); f_12c50690();
  /* 12c5029a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5029d jmp 0x12c50588 */
  goto L_12c50588;
L_12c502a2:;
  /* 12c502a2 mov ecx, dword ptr [0x12c6e7f0] */
  ECX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c502a8 mov dword ptr [0x12c6e800], ecx */
  w32((uint32_t)(0x12c6e800), (ECX));
  /* 12c502ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c502b1 push edx */
  push32((uint32_t)(EDX));
  /* 12c502b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c502b5 push eax */
  push32((uint32_t)(EAX));
  /* 12c502b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c502b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c502bb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c502be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c502c1 push edx */
  push32((uint32_t)(EDX));
  /* 12c502c2 call 0x12c50690 */
  push32(0x12c502c7u); f_12c50690();
  /* 12c502c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c502ca jmp 0x12c50588 */
  goto L_12c50588;
L_12c502cf:;
  /* 12c502cf mov eax, dword ptr [0x12c6e7f0] */
  EAX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c502d4 mov dword ptr [0x12c6e800], eax */
  w32((uint32_t)(0x12c6e800), (EAX));
  /* 12c502d9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c502dc push ecx */
  push32((uint32_t)(ECX));
  /* 12c502dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c502e0 push edx */
  push32((uint32_t)(EDX));
  /* 12c502e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c502e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c502e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c502e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c502ea call 0x12c50690 */
  push32(0x12c502efu); f_12c50690();
  /* 12c502ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c502f2 jmp 0x12c50588 */
  goto L_12c50588;
L_12c502f7:;
  /* 12c502f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c502fa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c502fe jg 0x12c5031c */
  if ((!C.zf&&C.sf==C.of)) goto L_12c5031c;
  /* 12c50300 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50303 push eax */
  push32((uint32_t)(EAX));
  /* 12c50304 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50307 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50308 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c5030b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12c50311 push eax */
  push32((uint32_t)(EAX));
  /* 12c50312 call 0x12c50640 */
  push32(0x12c50317u); f_12c50640();
  /* 12c50317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5031a jmp 0x12c50336 */
  goto L_12c50336;
L_12c5031c:;
  /* 12c5031c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5031f push ecx */
  push32((uint32_t)(ECX));
  /* 12c50320 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50323 push edx */
  push32((uint32_t)(EDX));
  /* 12c50324 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50327 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12c5032d push ecx */
  push32((uint32_t)(ECX));
  /* 12c5032e call 0x12c50640 */
  push32(0x12c50333u); f_12c50640();
  /* 12c50333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c50336:;
  /* 12c50336 jmp 0x12c50588 */
  goto L_12c50588;
L_12c5033b:;
  /* 12c5033b mov edx, dword ptr [0x12c6e7f0] */
  EDX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c50341 mov dword ptr [0x12c6e800], edx */
  w32((uint32_t)(0x12c6e800), (EDX));
  /* 12c50347 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5034a push eax */
  push32((uint32_t)(EAX));
  /* 12c5034b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5034e push ecx */
  push32((uint32_t)(ECX));
  /* 12c5034f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50351 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50354 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50356 push eax */
  push32((uint32_t)(EAX));
  /* 12c50357 call 0x12c50690 */
  push32(0x12c5035cu); f_12c50690();
  /* 12c5035c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5035f jmp 0x12c50588 */
  goto L_12c50588;
L_12c50364:;
  /* 12c50364 mov ecx, dword ptr [0x12c6e7f0] */
  ECX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c5036a mov dword ptr [0x12c6e800], ecx */
  w32((uint32_t)(0x12c6e800), (ECX));
  /* 12c50370 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50373 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12c50376 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c50379 jmp 0x12c503cd */
  goto L_12c503cd;
L_12c5037b:;
  /* 12c5037b mov ecx, dword ptr [0x12c6e7f0] */
  ECX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c50381 mov dword ptr [0x12c6e800], ecx */
  w32((uint32_t)(0x12c6e800), (ECX));
  /* 12c50387 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5038a push edx */
  push32((uint32_t)(EDX));
  /* 12c5038b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5038e push eax */
  push32((uint32_t)(EAX));
  /* 12c5038f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c50391 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50394 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c50397 push edx */
  push32((uint32_t)(EDX));
  /* 12c50398 call 0x12c50690 */
  push32(0x12c5039du); f_12c50690();
  /* 12c5039d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c503a0 jmp 0x12c50588 */
  goto L_12c50588;
L_12c503a5:;
  /* 12c503a5 mov eax, dword ptr [0x12c6e7f0] */
  EAX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c503aa mov dword ptr [0x12c6e800], eax */
  w32((uint32_t)(0x12c6e800), (EAX));
  /* 12c503af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c503b2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c503b6 jne 0x12c503c1 */
  if (!C.zf) goto L_12c503c1;
  /* 12c503b8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12c503bf jmp 0x12c503cd */
  goto L_12c503cd;
L_12c503c1:;
  /* 12c503c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c503c4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12c503c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c503ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c503cd:;
  /* 12c503cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c503d0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c503d3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c503d6 jge 0x12c503e1 */
  if ((C.sf==C.of)) goto L_12c503e1;
  /* 12c503d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c503df jmp 0x12c5040e */
  goto L_12c5040e;
L_12c503e1:;
  /* 12c503e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c503e4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c503e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c503e8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12c503ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c503ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c503f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c503f5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c503f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c503f9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12c503fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c50400 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50403 jl 0x12c5040e */
  if ((C.sf!=C.of)) goto L_12c5040e;
  /* 12c50405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5040b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c5040e:;
  /* 12c5040e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50411 push eax */
  push32((uint32_t)(EAX));
  /* 12c50412 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50415 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50416 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5041b push edx */
  push32((uint32_t)(EDX));
  /* 12c5041c call 0x12c50690 */
  push32(0x12c50421u); f_12c50690();
  /* 12c50421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50424 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50429:;
  /* 12c50429 cmp dword ptr [0x12c6e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50430 je 0x12c50460 */
  if (C.zf) goto L_12c50460;
  /* 12c50432 mov dword ptr [0x12c6e7f0], 0 */
  w32((uint32_t)(0x12c6e7f0), (0x0u));
  /* 12c5043c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c5043f push eax */
  push32((uint32_t)(EAX));
  /* 12c50440 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50443 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50447 push edx */
  push32((uint32_t)(EDX));
  /* 12c50448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5044b push eax */
  push32((uint32_t)(EAX));
  /* 12c5044c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c5044f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12c50455 push edx */
  push32((uint32_t)(EDX));
  /* 12c50456 call 0x12c507f0 */
  push32(0x12c5045bu); f_12c507f0();
  /* 12c5045b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5045e jmp 0x12c50482 */
  goto L_12c50482;
L_12c50460:;
  /* 12c50460 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50463 push eax */
  push32((uint32_t)(EAX));
  /* 12c50464 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50467 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5046b push edx */
  push32((uint32_t)(EDX));
  /* 12c5046c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5046f push eax */
  push32((uint32_t)(EAX));
  /* 12c50470 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50473 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12c50479 push edx */
  push32((uint32_t)(EDX));
  /* 12c5047a call 0x12c507f0 */
  push32(0x12c5047fu); f_12c507f0();
  /* 12c5047f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c50482:;
  /* 12c50482 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50487:;
  /* 12c50487 mov dword ptr [0x12c6e7f0], 0 */
  w32((uint32_t)(0x12c6e7f0), (0x0u));
  /* 12c50491 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50494 push eax */
  push32((uint32_t)(EAX));
  /* 12c50495 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50498 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50499 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5049c push edx */
  push32((uint32_t)(EDX));
  /* 12c5049d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c504a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c504a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c504a4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12c504aa push edx */
  push32((uint32_t)(EDX));
  /* 12c504ab call 0x12c507f0 */
  push32(0x12c504b0u); f_12c507f0();
  /* 12c504b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c504b3 jmp 0x12c50588 */
  goto L_12c50588;
L_12c504b8:;
  /* 12c504b8 mov eax, dword ptr [0x12c6e7f0] */
  EAX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c504bd mov dword ptr [0x12c6e800], eax */
  w32((uint32_t)(0x12c6e800), (EAX));
  /* 12c504c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c504c5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c504c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c504c9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12c504ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c504d0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c504d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c504d6 push edx */
  push32((uint32_t)(EDX));
  /* 12c504d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c504da push eax */
  push32((uint32_t)(EAX));
  /* 12c504db push 2 */
  push32((uint32_t)(0x2u));
  /* 12c504dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c504e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c504e1 call 0x12c50690 */
  push32(0x12c504e6u); f_12c50690();
  /* 12c504e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c504e9 jmp 0x12c50588 */
  goto L_12c50588;
L_12c504ee:;
  /* 12c504ee mov edx, dword ptr [0x12c6e7f0] */
  EDX = (r32((uint32_t)(0x12c6e7f0)));
  /* 12c504f4 mov dword ptr [0x12c6e800], edx */
  w32((uint32_t)(0x12c6e800), (EDX));
  /* 12c504fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c504fd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c50500 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c50501 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12c50506 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c50508 mov ecx, eax */
  ECX = (EAX);
  /* 12c5050a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5050d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c50510 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50513 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c50516 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c50517 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12c5051c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c5051e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c50523 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50526 push eax */
  push32((uint32_t)(EAX));
  /* 12c50527 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5052a push ecx */
  push32((uint32_t)(ECX));
  /* 12c5052b push 4 */
  push32((uint32_t)(0x4u));
  /* 12c5052d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50530 push edx */
  push32((uint32_t)(EDX));
  /* 12c50531 call 0x12c50690 */
  push32(0x12c50536u); f_12c50690();
  /* 12c50536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50539 jmp 0x12c50588 */
  goto L_12c50588;
L_12c5053b:;
  /* 12c5053b call 0x12c51650 */
  push32(0x12c50540u); f_12c51650();
  /* 12c50540 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50543 push eax */
  push32((uint32_t)(EAX));
  /* 12c50544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50547 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5054b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5054d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50551 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12c50554 mov ecx, dword ptr [eax*4 + 0x12c6de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6de1c)));
  /* 12c5055b push ecx */
  push32((uint32_t)(ECX));
  /* 12c5055c call 0x12c50640 */
  push32(0x12c50561u); f_12c50640();
  /* 12c50561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50564 jmp 0x12c50588 */
  goto L_12c50588;
L_12c50566:;
  /* 12c50566 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50569 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c5056b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12c5056e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50573 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50579 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c5057b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5057e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50580 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50586 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c50588:;
  /* 12c50588 pop esi */
  ESI = (pop32());
  /* 12c50589 mov esp, ebp */
  ESP = (EBP);
  /* 12c5058b pop ebp */
  EBP = (pop32());
  /* 12c5058c ret  */
  ESPCHK(0x12c50020u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12c50640 (72 bytes, 30 insns) */
void f_12c50640(void) {
  FTRACE(0x12c50640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50640 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50641 mov ebp, esp */
  EBP = (ESP);
L_12c50643:;
  /* 12c50643 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50646 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50649 je 0x12c50686 */
  if (C.zf) goto L_12c50686;
  /* 12c5064b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5064e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c50651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c50653 je 0x12c50686 */
  if (C.zf) goto L_12c50686;
  /* 12c50655 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50658 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c5065a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5065d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5065f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c50661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50664 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50666 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50669 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5066c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c5066e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50674 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c50677 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5067a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c5067c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c5067f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50682 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c50684 jmp 0x12c50643 */
  goto L_12c50643;
L_12c50686:;
  /* 12c50686 pop ebp */
  EBP = (pop32());
  /* 12c50687 ret  */
  ESPCHK(0x12c50640u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x12c50690 (173 bytes, 64 insns) */
void f_12c50690(void) {
  FTRACE(0x12c50690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50690 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50691 mov ebp, esp */
  EBP = (ESP);
  /* 12c50693 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c5069b cmp dword ptr [0x12c6e800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c506a2 je 0x12c506ba */
  if (C.zf) goto L_12c506ba;
  /* 12c506a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c506a7 push eax */
  push32((uint32_t)(EAX));
  /* 12c506a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c506ab push ecx */
  push32((uint32_t)(ECX));
  /* 12c506ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c506af push edx */
  push32((uint32_t)(EDX));
  /* 12c506b0 call 0x12c50740 */
  push32(0x12c506b5u); f_12c50740();
  /* 12c506b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c506b8 jmp 0x12c50739 */
  goto L_12c50739;
L_12c506ba:;
  /* 12c506ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c506bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c506c0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c506c2 jae 0x12c50730 */
  if (!C.cf) goto L_12c50730;
  /* 12c506c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c506c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c506ca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c506cd jmp 0x12c506d8 */
  goto L_12c506d8;
L_12c506cf:;
  /* 12c506cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c506d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c506d5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12c506d8:;
  /* 12c506d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c506db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c506de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c506e0 je 0x12c50714 */
  if (C.zf) goto L_12c50714;
  /* 12c506e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c506e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c506e6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12c506eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c506ed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c506f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c506f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c506f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c506f8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12c506fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c506fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c506ff mov ecx, 0xa */
  ECX = (0xau);
  /* 12c50704 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c50706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c50709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5070c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5070f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c50712 jmp 0x12c506cf */
  goto L_12c506cf;
L_12c50714:;
  /* 12c50714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50719 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5071c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5071f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c50721 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50724 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50726 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50729 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5072c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c5072e jmp 0x12c50739 */
  goto L_12c50739;
L_12c50730:;
  /* 12c50730 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50733 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c50739:;
  /* 12c50739 mov esp, ebp */
  ESP = (EBP);
  /* 12c5073b pop ebp */
  EBP = (pop32());
  /* 12c5073c ret  */
  ESPCHK(0x12c50690u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12c50740 (172 bytes, 65 insns) */
void f_12c50740(void) {
  FTRACE(0x12c50740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50740 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50741 mov ebp, esp */
  EBP = (ESP);
  /* 12c50743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50749 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c5074b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c5074e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50751 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50754 jbe 0x12c5079b */
  if ((C.cf||C.zf)) goto L_12c5079b;
L_12c50756:;
  /* 12c50756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50759 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c5075a mov ecx, 0xa */
  ECX = (0xau);
  /* 12c5075f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c50761 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50767 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c50769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5076c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5076f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c50772 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50775 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50777 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c5077a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5077d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c5077f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50782 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c50783 mov ecx, 0xa */
  ECX = (0xau);
  /* 12c50788 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c5078a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c5078d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50791 jle 0x12c5079b */
  if ((C.zf||C.sf!=C.of)) goto L_12c5079b;
  /* 12c50793 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50796 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50799 ja 0x12c50756 */
  if ((!C.cf&&!C.zf)) goto L_12c50756;
L_12c5079b:;
  /* 12c5079b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5079e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c507a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c507a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c507a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c507a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c507ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c507ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c507b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c507b4:;
  /* 12c507b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c507b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c507b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12c507bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c507bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c507c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c507c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c507c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c507c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c507cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c507cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c507d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c507d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c507d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c507da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c507dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c507e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c507e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c507e6 jb 0x12c507b4 */
  if (C.cf) goto L_12c507b4;
  /* 12c507e8 mov esp, ebp */
  ESP = (EBP);
  /* 12c507ea pop ebp */
  EBP = (pop32());
  /* 12c507eb ret  */
  ESPCHK(0x12c50740u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x12c507f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12c507f0(void) {
  FTRACE(0x12c507f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c507f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c507f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c507f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12c507f6:;
  /* 12c507f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c507f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c507fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c507fe je 0x12c50c6c */
  if (C.zf) goto L_12c50c6c;
  /* 12c50804 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50807 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5080a je 0x12c50c6c */
  if (C.zf) goto L_12c50c6c;
  /* 12c50810 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c50814 mov dword ptr [0x12c6e800], 0 */
  w32((uint32_t)(0x12c6e800), (0x0u));
  /* 12c5081e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c50825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50828 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c5082b jmp 0x12c50836 */
  goto L_12c50836;
L_12c5082d:;
  /* 12c5082d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50830 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50833 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c50836:;
  /* 12c50836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50839 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c5083c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5083f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c50842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50848 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c5084b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5084d jne 0x12c50851 */
  if (!C.zf) goto L_12c50851;
  /* 12c5084f jmp 0x12c5082d */
  goto L_12c5082d;
L_12c50851:;
  /* 12c50851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50854 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50857 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c5085a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5085d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c50860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c50863 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c50866 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50869 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c5086c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50870 ja 0x12c50bc0 */
  if ((!C.cf&&!C.zf)) goto L_12c50bc0;
  /* 12c50876 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c50879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5087b mov al, byte ptr [ecx + 0x12c50c9c] */
  AL = (r8((uint32_t)(ECX + 0x12c50c9c)));
  /* 12c50881 jmp dword ptr [eax*4 + 0x12c50c70] */
  switch (EAX) {
    case 0: goto L_12c50adf;
    case 1: goto L_12c509c3;
    case 2: goto L_12c5094e;
    case 3: goto L_12c50888;
    case 4: goto L_12c508c6;
    case 5: goto L_12c50927;
    case 6: goto L_12c50975;
    case 7: goto L_12c5099c;
    case 8: goto L_12c50a0a;
    case 9: goto L_12c50904;
    case 10: goto L_12c50bc0;
    default: x86_unimpl("switch@0x12c50881 out of table"); return;
  }
L_12c50888:;
  /* 12c50888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5088b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c5088e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c50891 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50894 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c50897 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5089b ja 0x12c508c1 */
  if ((!C.cf&&!C.zf)) goto L_12c508c1;
  /* 12c5089d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c508a0 jmp dword ptr [ecx*4 + 0x12c50cef] */
  switch (ECX) {
    case 0: goto L_12c508a7;
    case 1: goto L_12c508b1;
    case 2: goto L_12c508b7;
    case 3: goto L_12c508bd;
    case 4: goto L_12c508e5;
    case 5: goto L_12c508ef;
    case 6: goto L_12c508f5;
    case 7: goto L_12c508fb;
    default: x86_unimpl("switch@0x12c508a0 out of table"); return;
  }
L_12c508a7:;
  /* 12c508a7 mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c508b1:;
  /* 12c508b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12c508b5 jmp 0x12c508c1 */
  goto L_12c508c1;
L_12c508b7:;
  /* 12c508b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12c508bb jmp 0x12c508c1 */
  goto L_12c508c1;
L_12c508bd:;
  /* 12c508bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12c508c1:;
  /* 12c508c1 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c508c6:;
  /* 12c508c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c508c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c508cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c508cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c508d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c508d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c508d9 ja 0x12c508ff */
  if ((!C.cf&&!C.zf)) goto L_12c508ff;
  /* 12c508db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c508de jmp dword ptr [ecx*4 + 0x12c50cff] */
  switch (ECX) {
    case 0: goto L_12c508e5;
    case 1: goto L_12c508ef;
    case 2: goto L_12c508f5;
    case 3: goto L_12c508fb;
    default: x86_unimpl("switch@0x12c508de out of table"); return;
  }
L_12c508e5:;
  /* 12c508e5 mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c508ef:;
  /* 12c508ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12c508f3 jmp 0x12c508ff */
  goto L_12c508ff;
L_12c508f5:;
  /* 12c508f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12c508f9 jmp 0x12c508ff */
  goto L_12c508ff;
L_12c508fb:;
  /* 12c508fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12c508ff:;
  /* 12c508ff jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c50904:;
  /* 12c50904 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50907 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c5090a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5090e je 0x12c50918 */
  if (C.zf) goto L_12c50918;
  /* 12c50910 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50914 je 0x12c5091e */
  if (C.zf) goto L_12c5091e;
  /* 12c50916 jmp 0x12c50922 */
  goto L_12c50922;
L_12c50918:;
  /* 12c50918 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12c5091c jmp 0x12c50922 */
  goto L_12c50922;
L_12c5091e:;
  /* 12c5091e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12c50922:;
  /* 12c50922 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c50927:;
  /* 12c50927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5092a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c5092d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50931 je 0x12c5093b */
  if (C.zf) goto L_12c5093b;
  /* 12c50933 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50937 je 0x12c50945 */
  if (C.zf) goto L_12c50945;
  /* 12c50939 jmp 0x12c50949 */
  goto L_12c50949;
L_12c5093b:;
  /* 12c5093b mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c50945:;
  /* 12c50945 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12c50949:;
  /* 12c50949 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c5094e:;
  /* 12c5094e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50951 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c50954 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50958 je 0x12c50962 */
  if (C.zf) goto L_12c50962;
  /* 12c5095a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5095e je 0x12c5096c */
  if (C.zf) goto L_12c5096c;
  /* 12c50960 jmp 0x12c50970 */
  goto L_12c50970;
L_12c50962:;
  /* 12c50962 mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c5096c:;
  /* 12c5096c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12c50970:;
  /* 12c50970 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c50975:;
  /* 12c50975 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50978 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12c5097b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5097f je 0x12c50989 */
  if (C.zf) goto L_12c50989;
  /* 12c50981 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50985 je 0x12c50993 */
  if (C.zf) goto L_12c50993;
  /* 12c50987 jmp 0x12c50997 */
  goto L_12c50997;
L_12c50989:;
  /* 12c50989 mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c50993:;
  /* 12c50993 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12c50997:;
  /* 12c50997 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c5099c:;
  /* 12c5099c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5099f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c509a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c509a6 je 0x12c509b0 */
  if (C.zf) goto L_12c509b0;
  /* 12c509a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c509ac je 0x12c509ba */
  if (C.zf) goto L_12c509ba;
  /* 12c509ae jmp 0x12c509be */
  goto L_12c509be;
L_12c509b0:;
  /* 12c509b0 mov dword ptr [0x12c6e800], 1 */
  w32((uint32_t)(0x12c6e800), (0x1u));
L_12c509ba:;
  /* 12c509ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12c509be:;
  /* 12c509be jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c509c3:;
  /* 12c509c3 push 0x12c6a7dc */
  push32((uint32_t)(0x12c6a7dcu));
  /* 12c509c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c509cb push ecx */
  push32((uint32_t)(ECX));
  /* 12c509cc call 0x12c51220 */
  push32(0x12c509d1u); f_12c51220();
  /* 12c509d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c509d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c509d6 jne 0x12c509e3 */
  if (!C.zf) goto L_12c509e3;
  /* 12c509d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c509db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c509de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c509e1 jmp 0x12c50a01 */
  goto L_12c50a01;
L_12c509e3:;
  /* 12c509e3 push 0x12c6a7d8 */
  push32((uint32_t)(0x12c6a7d8u));
  /* 12c509e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c509eb push eax */
  push32((uint32_t)(EAX));
  /* 12c509ec call 0x12c51220 */
  push32(0x12c509f1u); f_12c51220();
  /* 12c509f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c509f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c509f6 jne 0x12c50a01 */
  if (!C.zf) goto L_12c50a01;
  /* 12c509f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c509fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c509fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c50a01:;
  /* 12c50a01 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12c50a05 jmp 0x12c50bc0 */
  goto L_12c50bc0;
L_12c50a0a:;
  /* 12c50a0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50a0d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50a11 jg 0x12c50a21 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c50a21;
  /* 12c50a13 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50a16 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12c50a1c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c50a1f jmp 0x12c50a2d */
  goto L_12c50a2d;
L_12c50a21:;
  /* 12c50a21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50a24 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12c50a2a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c50a2d:;
  /* 12c50a2d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50a31 jle 0x12c50ad4 */
  if ((C.zf||C.sf!=C.of)) goto L_12c50ad4;
  /* 12c50a37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50a3a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50a3d jbe 0x12c50ad4 */
  if ((C.cf||C.zf)) goto L_12c50ad4;
  /* 12c50a43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c50a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c50a48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c50a4a mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c50a50 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c50a52 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c50a56 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c50a5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c50a5e je 0x12c50a97 */
  if (C.zf) goto L_12c50a97;
  /* 12c50a60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50a63 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50a66 jbe 0x12c50a97 */
  if ((C.cf||C.zf)) goto L_12c50a97;
  /* 12c50a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50a6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50a6d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c50a70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c50a72 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c50a74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50a77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50a79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50a7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50a7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c50a81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c50a84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50a87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c50a8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50a8d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50a8f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50a92 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50a95 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c50a97:;
  /* 12c50a97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50a9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50a9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c50a9f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c50aa1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c50aa3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50aa6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50aa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50aab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50aae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c50ab0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c50ab3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50ab6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c50ab9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50abc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50abe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50ac1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50ac4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c50ac6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50ac9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50acc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c50acf jmp 0x12c50a2d */
  goto L_12c50a2d;
L_12c50ad4:;
  /* 12c50ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50ad7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c50ada jmp 0x12c507f6 */
  goto L_12c507f6;
L_12c50adf:;
  /* 12c50adf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50ae2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c50ae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c50ae7 je 0x12c50bb2 */
  if (C.zf) goto L_12c50bb2;
  /* 12c50aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50af0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50af3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c50af6:;
  /* 12c50af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50af9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c50afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c50afe je 0x12c50bb0 */
  if (C.zf) goto L_12c50bb0;
  /* 12c50b04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50b07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50b0a je 0x12c50bb0 */
  if (C.zf) goto L_12c50bb0;
  /* 12c50b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b13 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c50b16 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50b19 jne 0x12c50b29 */
  if (!C.zf) goto L_12c50b29;
  /* 12c50b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50b21 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c50b24 jmp 0x12c50bb0 */
  goto L_12c50bb0;
L_12c50b29:;
  /* 12c50b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c50b2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c50b30 mov edx, dword ptr [0x12c6cc98] */
  EDX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c50b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c50b38 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c50b3c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c50b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c50b43 je 0x12c50b7c */
  if (C.zf) goto L_12c50b7c;
  /* 12c50b45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50b48 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50b4b jbe 0x12c50b7c */
  if ((C.cf||C.zf)) goto L_12c50b7c;
  /* 12c50b4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c50b57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c50b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50b61 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c50b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50b6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c50b6f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50b72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50b74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50b77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50b7a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c50b7c:;
  /* 12c50b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50b81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c50b86 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c50b88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50b8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50b93 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c50b95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50b9b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c50b9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50ba1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50ba3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50ba6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50ba9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c50bab jmp 0x12c50af6 */
  goto L_12c50af6;
L_12c50bb0:;
  /* 12c50bb0 jmp 0x12c50bbb */
  goto L_12c50bbb;
L_12c50bb2:;
  /* 12c50bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50bb5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50bb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c50bbb:;
  /* 12c50bbb jmp 0x12c507f6 */
  goto L_12c507f6;
L_12c50bc0:;
  /* 12c50bc0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c50bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c50bc6 je 0x12c50bec */
  if (C.zf) goto L_12c50bec;
  /* 12c50bc8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c50bcb push edx */
  push32((uint32_t)(EDX));
  /* 12c50bcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50bcf push eax */
  push32((uint32_t)(EAX));
  /* 12c50bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50bd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12c50bd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c50bdb push eax */
  push32((uint32_t)(EAX));
  /* 12c50bdc call 0x12c50020 */
  push32(0x12c50be1u); f_12c50020();
  /* 12c50be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50be4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c50be7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c50bea jmp 0x12c50c67 */
  goto L_12c50c67;
L_12c50bec:;
  /* 12c50bec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c50bf1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c50bf3 mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c50bf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c50bfb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c50bff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c50c05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c50c07 je 0x12c50c38 */
  if (C.zf) goto L_12c50c38;
  /* 12c50c09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50c11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c50c13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c50c15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50c1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50c1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c50c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50c25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50c28 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c50c2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50c2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50c30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50c36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c50c38:;
  /* 12c50c38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c50c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50c40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c50c42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c50c44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50c49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50c4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50c4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c50c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c50c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50c57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c50c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c50c5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50c62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50c65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c50c67:;
  /* 12c50c67 jmp 0x12c507f6 */
  goto L_12c507f6;
L_12c50c6c:;
  /* 12c50c6c mov esp, ebp */
  ESP = (EBP);
  /* 12c50c6e pop ebp */
  EBP = (pop32());
  /* 12c50c6f ret  */
  ESPCHK(0x12c507f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x12c50d10 (650 bytes, 178 insns) */
void f_12c50d10(void) {
  FTRACE(0x12c50d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50d11 mov ebp, esp */
  EBP = (ESP);
  /* 12c50d13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c50d19 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50d1d jne 0x12c50e79 */
  if (!C.zf) goto L_12c50e79;
  /* 12c50d23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50d26 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12c50d2c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12c50d32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c50d35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c50d3c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12c50d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50d48 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c50d4e push edx */
  push32((uint32_t)(EDX));
  /* 12c50d4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50d52 push eax */
  push32((uint32_t)(EAX));
  /* 12c50d53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50d56 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50d57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50d5a push edx */
  push32((uint32_t)(EDX));
  /* 12c50d5b call 0x12c52130 */
  push32(0x12c50d60u); f_12c52130();
  /* 12c50d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50d63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c50d66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50d6a jne 0x12c50dff */
  if (!C.zf) goto L_12c50dff;
  /* 12c50d70 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c50d76u);
  /* 12c50d76 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50d79 je 0x12c50d80 */
  if (C.zf) goto L_12c50d80;
  /* 12c50d7b jmp 0x12c50e5d */
  goto L_12c50e5d;
L_12c50d80:;
  /* 12c50d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50d86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50d89 push eax */
  push32((uint32_t)(EAX));
  /* 12c50d8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50d8d push ecx */
  push32((uint32_t)(ECX));
  /* 12c50d8e call 0x12c52130 */
  push32(0x12c50d93u); f_12c52130();
  /* 12c50d93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50d96 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12c50d9c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50da3 jne 0x12c50daa */
  if (!C.zf) goto L_12c50daa;
  /* 12c50da5 jmp 0x12c50e5d */
  goto L_12c50e5d;
L_12c50daa:;
  /* 12c50daa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12c50dac push 0x12c6a7e4 */
  push32((uint32_t)(0x12c6a7e4u));
  /* 12c50db1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50db3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c50db9 push edx */
  push32((uint32_t)(EDX));
  /* 12c50dba call 0x12c42b50 */
  push32(0x12c50dbfu); f_12c42b50();
  /* 12c50dbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50dc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c50dc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50dc9 jne 0x12c50dd0 */
  if (!C.zf) goto L_12c50dd0;
  /* 12c50dcb jmp 0x12c50e5d */
  goto L_12c50e5d;
L_12c50dd0:;
  /* 12c50dd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c50dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50dd9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c50ddf push eax */
  push32((uint32_t)(EAX));
  /* 12c50de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50de4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50de7 push edx */
  push32((uint32_t)(EDX));
  /* 12c50de8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50deb push eax */
  push32((uint32_t)(EAX));
  /* 12c50dec call 0x12c52130 */
  push32(0x12c50df1u); f_12c52130();
  /* 12c50df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50df4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c50df7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50dfb jne 0x12c50dff */
  if (!C.zf) goto L_12c50dff;
  /* 12c50dfd jmp 0x12c50e5d */
  goto L_12c50e5d;
L_12c50dff:;
  /* 12c50dff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12c50e01 push 0x12c6a7e4 */
  push32((uint32_t)(0x12c6a7e4u));
  /* 12c50e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50e08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c50e0b push ecx */
  push32((uint32_t)(ECX));
  /* 12c50e0c call 0x12c42b50 */
  push32(0x12c50e11u); f_12c42b50();
  /* 12c50e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50e14 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c50e1a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c50e1c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c50e22 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50e25 jne 0x12c50e29 */
  if (!C.zf) goto L_12c50e29;
  /* 12c50e27 jmp 0x12c50e5d */
  goto L_12c50e5d;
L_12c50e29:;
  /* 12c50e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c50e2c push ecx */
  push32((uint32_t)(ECX));
  /* 12c50e2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50e30 push edx */
  push32((uint32_t)(EDX));
  /* 12c50e31 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c50e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c50e39 push ecx */
  push32((uint32_t)(ECX));
  /* 12c50e3a call 0x12c46370 */
  push32(0x12c50e3fu); f_12c46370();
  /* 12c50e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50e42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50e46 je 0x12c50e56 */
  if (C.zf) goto L_12c50e56;
  /* 12c50e48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50e4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50e4d push edx */
  push32((uint32_t)(EDX));
  /* 12c50e4e call 0x12c435e0 */
  push32(0x12c50e53u); f_12c435e0();
  /* 12c50e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c50e56:;
  /* 12c50e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c50e58 jmp 0x12c50f96 */
  goto L_12c50f96;
L_12c50e5d:;
  /* 12c50e5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50e61 je 0x12c50e71 */
  if (C.zf) goto L_12c50e71;
  /* 12c50e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c50e65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c50e68 push eax */
  push32((uint32_t)(EAX));
  /* 12c50e69 call 0x12c435e0 */
  push32(0x12c50e6eu); f_12c435e0();
  /* 12c50e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c50e71:;
  /* 12c50e71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c50e74 jmp 0x12c50f96 */
  goto L_12c50f96;
L_12c50e79:;
  /* 12c50e79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50e7d jne 0x12c50f93 */
  if (!C.zf) goto L_12c50f93;
  /* 12c50e83 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12c50e8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c50e90 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12c50e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c50e98 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c50e9e push edx */
  push32((uint32_t)(EDX));
  /* 12c50e9f push 0x12c6e718 */
  push32((uint32_t)(0x12c6e718u));
  /* 12c50ea4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c50ea7 push eax */
  push32((uint32_t)(EAX));
  /* 12c50ea8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c50eab push ecx */
  push32((uint32_t)(ECX));
  /* 12c50eac call 0x12c51f90 */
  push32(0x12c50eb1u); f_12c51f90();
  /* 12c50eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c50eb6 jne 0x12c50ec0 */
  if (!C.zf) goto L_12c50ec0;
  /* 12c50eb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c50ebb jmp 0x12c50f96 */
  goto L_12c50f96;
L_12c50ec0:;
  /* 12c50ec0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c50ec6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c50ec9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12c50ed3 jmp 0x12c50ee4 */
  goto L_12c50ee4;
L_12c50ed5:;
  /* 12c50ed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c50edb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50ede mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12c50ee4:;
  /* 12c50ee4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50eeb jge 0x12c50f8f */
  if ((C.sf==C.of)) goto L_12c50f8f;
  /* 12c50ef1 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50ef8 jle 0x12c50f2b */
  if ((C.zf||C.sf!=C.of)) goto L_12c50f2b;
  /* 12c50efa push 4 */
  push32((uint32_t)(0x4u));
  /* 12c50efc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c50f02 mov dl, byte ptr [ecx*2 + 0x12c6e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12c6e718)));
  /* 12c50f09 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12c50f0f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c50f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c50f1a push eax */
  push32((uint32_t)(EAX));
  /* 12c50f1b call 0x12c48b60 */
  push32(0x12c50f20u); f_12c48b60();
  /* 12c50f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50f23 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12c50f29 jmp 0x12c50f5e */
  goto L_12c50f5e;
L_12c50f2b:;
  /* 12c50f2b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c50f31 mov dl, byte ptr [ecx*2 + 0x12c6e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12c6e718)));
  /* 12c50f38 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12c50f3e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c50f44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c50f49 mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c50f4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c50f51 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c50f55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c50f58 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12c50f5e:;
  /* 12c50f5e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50f65 je 0x12c50f88 */
  if (C.zf) goto L_12c50f88;
  /* 12c50f67 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c50f6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c50f70 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c50f73 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12c50f7a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c50f7e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c50f84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c50f86 jmp 0x12c50f8a */
  goto L_12c50f8a;
L_12c50f88:;
  /* 12c50f88 jmp 0x12c50f8f */
  goto L_12c50f8f;
L_12c50f8a:;
  /* 12c50f8a jmp 0x12c50ed5 */
  goto L_12c50ed5;
L_12c50f8f:;
  /* 12c50f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c50f91 jmp 0x12c50f96 */
  goto L_12c50f96;
L_12c50f93:;
  /* 12c50f93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c50f96:;
  /* 12c50f96 mov esp, ebp */
  ESP = (EBP);
  /* 12c50f98 pop ebp */
  EBP = (pop32());
  /* 12c50f99 ret  */
  ESPCHK(0x12c50d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x12c50fa0 (10 bytes, 5 insns) */
void f_12c50fa0(void) {
  FTRACE(0x12c50fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12c50fa3 mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c50fa8 pop ebp */
  EBP = (pop32());
  /* 12c50fa9 ret  */
  ESPCHK(0x12c50fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x12c50fb0 (575 bytes, 196 insns) */
void f_12c50fb0(void) {
  FTRACE(0x12c50fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c50fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c50fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12c50fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c50fb5 push 0x12c6a7f0 */
  push32((uint32_t)(0x12c6a7f0u));
  /* 12c50fba push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c50fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c50fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12c50fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c50fcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c50fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c50fd1 push esi */
  push32((uint32_t)(ESI));
  /* 12c50fd2 push edi */
  push32((uint32_t)(EDI));
  /* 12c50fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c50fd6 cmp dword ptr [0x12c6e724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c50fdd jne 0x12c5102e */
  if (!C.zf) goto L_12c5102e;
  /* 12c50fdf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c50fe2 push eax */
  push32((uint32_t)(EAX));
  /* 12c50fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c50fe5 push 0x12c69f24 */
  push32((uint32_t)(0x12c69f24u));
  /* 12c50fea push 1 */
  push32((uint32_t)(0x1u));
  /* 12c50fec call dword ptr [0x12c70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70324))), 0x12c50ff2u);
  /* 12c50ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c50ff4 je 0x12c51002 */
  if (C.zf) goto L_12c51002;
  /* 12c50ff6 mov dword ptr [0x12c6e724], 1 */
  w32((uint32_t)(0x12c6e724), (0x1u));
  /* 12c51000 jmp 0x12c5102e */
  goto L_12c5102e;
L_12c51002:;
  /* 12c51002 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c51005 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51006 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51008 push 0x12c69f20 */
  push32((uint32_t)(0x12c69f20u));
  /* 12c5100d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c5100f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51011 call dword ptr [0x12c70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70320))), 0x12c51017u);
  /* 12c51017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51019 je 0x12c51027 */
  if (C.zf) goto L_12c51027;
  /* 12c5101b mov dword ptr [0x12c6e724], 2 */
  w32((uint32_t)(0x12c6e724), (0x2u));
  /* 12c51025 jmp 0x12c5102e */
  goto L_12c5102e;
L_12c51027:;
  /* 12c51027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51029 jmp 0x12c51209 */
  goto L_12c51209;
L_12c5102e:;
  /* 12c5102e cmp dword ptr [0x12c6e724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51035 jne 0x12c51052 */
  if (!C.zf) goto L_12c51052;
  /* 12c51037 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5103a push edx */
  push32((uint32_t)(EDX));
  /* 12c5103b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5103e push eax */
  push32((uint32_t)(EAX));
  /* 12c5103f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c51042 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51046 push edx */
  push32((uint32_t)(EDX));
  /* 12c51047 call dword ptr [0x12c70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70324))), 0x12c5104du);
  /* 12c5104d jmp 0x12c51209 */
  goto L_12c51209;
L_12c51052:;
  /* 12c51052 cmp dword ptr [0x12c6e724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51059 jne 0x12c51207 */
  if (!C.zf) goto L_12c51207;
  /* 12c5105f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51063 jne 0x12c5106d */
  if (!C.zf) goto L_12c5106d;
  /* 12c51065 mov eax, dword ptr [0x12c6e698] */
  EAX = (r32((uint32_t)(0x12c6e698)));
  /* 12c5106a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12c5106d:;
  /* 12c5106d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5106f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51071 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51078 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5107c push edx */
  push32((uint32_t)(EDX));
  /* 12c5107d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c51082 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c51085 push eax */
  push32((uint32_t)(EAX));
  /* 12c51086 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c5108cu);
  /* 12c5108c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c5108f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51093 jne 0x12c5109c */
  if (!C.zf) goto L_12c5109c;
  /* 12c51095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51097 jmp 0x12c51209 */
  goto L_12c51209;
L_12c5109c:;
  /* 12c5109c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c510a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c510a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c510a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c510ab call 0x12c45cf0 */
  push32(0x12c510b0u); f_12c45cf0();
  /* 12c510b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12c510b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c510b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c510b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c510bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c510bf push edx */
  push32((uint32_t)(EDX));
  /* 12c510c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c510c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c510c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c510c6 call 0x12c468c0 */
  push32(0x12c510cbu); f_12c468c0();
  /* 12c510cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c510ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c510d5 jmp 0x12c510ee */
  goto L_12c510ee;
  /* 12c510d7 mov eax, 1 */
  EAX = (0x1u);
  /* 12c510dc ret  */
  ESPCHK(0x12c50fb0u, _esp0);
  ESP += 4; return;
  /* 12c510dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c510e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12c510e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c510ee:;
  /* 12c510ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c510f2 jne 0x12c510fb */
  if (!C.zf) goto L_12c510fb;
  /* 12c510f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c510f6 jmp 0x12c51209 */
  goto L_12c51209;
L_12c510fb:;
  /* 12c510fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c510fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c510ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c51102 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51103 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c51106 push edx */
  push32((uint32_t)(EDX));
  /* 12c51107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5110a push eax */
  push32((uint32_t)(EAX));
  /* 12c5110b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5110e push ecx */
  push32((uint32_t)(ECX));
  /* 12c5110f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c51114 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c51117 push edx */
  push32((uint32_t)(EDX));
  /* 12c51118 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c5111eu);
  /* 12c5111e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51120 jne 0x12c51129 */
  if (!C.zf) goto L_12c51129;
  /* 12c51122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51124 jmp 0x12c51209 */
  goto L_12c51209;
L_12c51129:;
  /* 12c51129 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c51130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c51133 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12c51137 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5113a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c5113c call 0x12c45cf0 */
  push32(0x12c51141u); f_12c45cf0();
  /* 12c51141 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12c51144 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c51147 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c5114a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c5114d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c51154 jmp 0x12c5116d */
  goto L_12c5116d;
  /* 12c51156 mov eax, 1 */
  EAX = (0x1u);
  /* 12c5115b ret  */
  ESPCHK(0x12c50fb0u, _esp0);
  ESP += 4; return;
  /* 12c5115c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c5115f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c51166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c5116d:;
  /* 12c5116d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51171 jne 0x12c5117a */
  if (!C.zf) goto L_12c5117a;
  /* 12c51173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51175 jmp 0x12c51209 */
  goto L_12c51209;
L_12c5117a:;
  /* 12c5117a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5117e jne 0x12c51189 */
  if (!C.zf) goto L_12c51189;
  /* 12c51180 mov edx, dword ptr [0x12c6e688] */
  EDX = (r32((uint32_t)(0x12c6e688)));
  /* 12c51186 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12c51189:;
  /* 12c51189 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5118c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c5118f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12c51195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51198 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c5119b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12c511a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c511a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c511a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c511a9 push edx */
  push32((uint32_t)(EDX));
  /* 12c511aa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c511ad push eax */
  push32((uint32_t)(EAX));
  /* 12c511ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c511b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c511b2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c511b5 push edx */
  push32((uint32_t)(EDX));
  /* 12c511b6 call dword ptr [0x12c70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70320))), 0x12c511bcu);
  /* 12c511bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c511bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c511c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c511c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c511c7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12c511cc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c511d2 je 0x12c511e8 */
  if (C.zf) goto L_12c511e8;
  /* 12c511d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c511d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c511da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c511dc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c511e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c511e6 je 0x12c511ec */
  if (C.zf) goto L_12c511ec;
L_12c511e8:;
  /* 12c511e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c511ea jmp 0x12c51209 */
  goto L_12c51209;
L_12c511ec:;
  /* 12c511ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c511ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c511f1 push eax */
  push32((uint32_t)(EAX));
  /* 12c511f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c511f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c511f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c511f9 push edx */
  push32((uint32_t)(EDX));
  /* 12c511fa call 0x12c4aa40 */
  push32(0x12c511ffu); f_12c4aa40();
  /* 12c511ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51202 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c51205 jmp 0x12c51209 */
  goto L_12c51209;
L_12c51207:;
  /* 12c51207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c51209:;
  /* 12c51209 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12c5120c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c5120f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c51216 pop edi */
  EDI = (pop32());
  /* 12c51217 pop esi */
  ESI = (pop32());
  /* 12c51218 pop ebx */
  EBX = (pop32());
  /* 12c51219 mov esp, ebp */
  ESP = (EBP);
  /* 12c5121b pop ebp */
  EBP = (pop32());
  /* 12c5121c ret  */
  ESPCHK(0x12c50fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x12c51220 (208 bytes, 85 insns) */
void f_12c51220(void) {
  FTRACE(0x12c51220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51220 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51221 mov ebp, esp */
  EBP = (ESP);
  /* 12c51223 push edi */
  push32((uint32_t)(EDI));
  /* 12c51224 push esi */
  push32((uint32_t)(ESI));
  /* 12c51225 push ebx */
  push32((uint32_t)(EBX));
  /* 12c51226 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c51229 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5122c lea eax, [0x12c6e680] */
  EAX = ((uint32_t)(0x12c6e680));
  /* 12c51232 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51236 jne 0x12c51273 */
  if (!C.zf) goto L_12c51273;
  /* 12c51238 mov al, 0xff */
  AL = (0xffu);
  /* 12c5123a mov edi, edi */
  EDI = (EDI);
L_12c5123c:;
  /* 12c5123c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c5123e je 0x12c5126e */
  if (C.zf) goto L_12c5126e;
  /* 12c51240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c51242 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c51243 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12c51245 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c51246 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51248 je 0x12c5123c */
  if (C.zf) goto L_12c5123c;
  /* 12c5124a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c5124c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c5124e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c51250 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c51253 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c51255 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c51257 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12c51259 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c5125b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c5125d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c5125f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c51262 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c51264 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c51266 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51268 je 0x12c5123c */
  if (C.zf) goto L_12c5123c;
  /* 12c5126a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c5126c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12c5126e:;
  /* 12c5126e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12c51271 jmp 0x12c512eb */
  goto L_12c512eb;
L_12c51273:;
  /* 12c51273 lock inc dword ptr [0x12c6e814] */
  x86_unimpl("lock inc @ 0x12c51273");
  /* 12c5127a cmp dword ptr [0x12c6e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51281 jg 0x12c51287 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c51287;
  /* 12c51283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51285 jmp 0x12c5129c */
  goto L_12c5129c;
L_12c51287:;
  /* 12c51287 lock dec dword ptr [0x12c6e814] */
  x86_unimpl("lock dec @ 0x12c51287");
  /* 12c5128e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c51290 call 0x12c46550 */
  push32(0x12c51295u); f_12c46550();
  /* 12c51295 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12c5129c:;
  /* 12c5129c mov eax, 0xff */
  EAX = (0xffu);
  /* 12c512a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c512a3 nop  */
  /* nop */
L_12c512a4:;
  /* 12c512a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c512a6 je 0x12c512cf */
  if (C.zf) goto L_12c512cf;
  /* 12c512a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c512aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c512ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c512ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c512ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c512b0 je 0x12c512a4 */
  if (C.zf) goto L_12c512a4;
  /* 12c512b2 push eax */
  push32((uint32_t)(EAX));
  /* 12c512b3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c512b4 call 0x12c52390 */
  push32(0x12c512b9u); f_12c52390();
  /* 12c512b9 mov ebx, eax */
  EBX = (EAX);
  /* 12c512bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c512be call 0x12c52390 */
  push32(0x12c512c3u); f_12c52390();
  /* 12c512c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c512c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c512c8 je 0x12c512a4 */
  if (C.zf) goto L_12c512a4;
  /* 12c512ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c512cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c512cf:;
  /* 12c512cf mov ebx, eax */
  EBX = (EAX);
  /* 12c512d1 pop eax */
  EAX = (pop32());
  /* 12c512d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c512d4 jne 0x12c512df */
  if (!C.zf) goto L_12c512df;
  /* 12c512d6 lock dec dword ptr [0x12c6e814] */
  x86_unimpl("lock dec @ 0x12c512d6");
  /* 12c512dd jmp 0x12c512e9 */
  goto L_12c512e9;
L_12c512df:;
  /* 12c512df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c512e1 call 0x12c465f0 */
  push32(0x12c512e6u); f_12c465f0();
  /* 12c512e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c512e9:;
  /* 12c512e9 mov eax, ebx */
  EAX = (EBX);
L_12c512eb:;
  /* 12c512eb pop ebx */
  EBX = (pop32());
  /* 12c512ec pop esi */
  ESI = (pop32());
  /* 12c512ed pop edi */
  EDI = (pop32());
  /* 12c512ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c512ef ret  */
  ESPCHK(0x12c51220u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x12c512f0 (257 bytes, 103 insns) */
void f_12c512f0(void) {
  FTRACE(0x12c512f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c512f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c512f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c512f3 push edi */
  push32((uint32_t)(EDI));
  /* 12c512f4 push esi */
  push32((uint32_t)(ESI));
  /* 12c512f5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c512f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c512f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c512fb je 0x12c513ea */
  if (C.zf) goto L_12c513ea;
  /* 12c51301 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51304 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c51307 lea eax, [0x12c6e680] */
  EAX = ((uint32_t)(0x12c6e680));
  /* 12c5130d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51311 jne 0x12c51361 */
  if (!C.zf) goto L_12c51361;
  /* 12c51313 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12c51315 mov bl, 0x5a */
  BL = (0x5au);
  /* 12c51317 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12c51319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c5131c:;
  /* 12c5131c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12c5131e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c51320 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c51322 je 0x12c51345 */
  if (C.zf) goto L_12c51345;
  /* 12c51324 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c51326 je 0x12c51345 */
  if (C.zf) goto L_12c51345;
  /* 12c51328 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c51329 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c5132a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c5132c jb 0x12c51334 */
  if (C.cf) goto L_12c51334;
  /* 12c5132e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51330 ja 0x12c51334 */
  if ((!C.cf&&!C.zf)) goto L_12c51334;
  /* 12c51332 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12c51334:;
  /* 12c51334 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51336 jb 0x12c5133e */
  if (C.cf) goto L_12c5133e;
  /* 12c51338 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c5133a ja 0x12c5133e */
  if ((!C.cf&&!C.zf)) goto L_12c5133e;
  /* 12c5133c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12c5133e:;
  /* 12c5133e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51340 jne 0x12c5134f */
  if (!C.zf) goto L_12c5134f;
  /* 12c51342 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c51343 jne 0x12c5131c */
  if (!C.zf) goto L_12c5131c;
L_12c51345:;
  /* 12c51345 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51347 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c51349 je 0x12c513ea */
  if (C.zf) goto L_12c513ea;
L_12c5134f:;
  /* 12c5134f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c51354 jb 0x12c513ea */
  if (C.cf) goto L_12c513ea;
  /* 12c5135a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c5135c jmp 0x12c513ea */
  goto L_12c513ea;
L_12c51361:;
  /* 12c51361 lock inc dword ptr [0x12c6e814] */
  x86_unimpl("lock inc @ 0x12c51361");
  /* 12c51368 cmp dword ptr [0x12c6e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5136f jg 0x12c51375 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c51375;
  /* 12c51371 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51373 jmp 0x12c5138e */
  goto L_12c5138e;
L_12c51375:;
  /* 12c51375 lock dec dword ptr [0x12c6e814] */
  x86_unimpl("lock dec @ 0x12c51375");
  /* 12c5137c mov ebx, ecx */
  EBX = (ECX);
  /* 12c5137e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c51380 call 0x12c46550 */
  push32(0x12c51385u); f_12c46550();
  /* 12c51385 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12c5138c mov ecx, ebx */
  ECX = (EBX);
L_12c5138e:;
  /* 12c5138e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51390 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c51392 mov edi, edi */
  EDI = (EDI);
L_12c51394:;
  /* 12c51394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c51396 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51398 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c5139a je 0x12c513bf */
  if (C.zf) goto L_12c513bf;
  /* 12c5139c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c5139e je 0x12c513bf */
  if (C.zf) goto L_12c513bf;
  /* 12c513a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c513a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c513a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c513a3 push eax */
  push32((uint32_t)(EAX));
  /* 12c513a4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c513a5 call 0x12c52390 */
  push32(0x12c513aau); f_12c52390();
  /* 12c513aa mov ebx, eax */
  EBX = (EAX);
  /* 12c513ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c513af call 0x12c52390 */
  push32(0x12c513b4u); f_12c52390();
  /* 12c513b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c513b7 pop ecx */
  ECX = (pop32());
  /* 12c513b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c513ba jne 0x12c513c5 */
  if (!C.zf) goto L_12c513c5;
  /* 12c513bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c513bd jne 0x12c51394 */
  if (!C.zf) goto L_12c51394;
L_12c513bf:;
  /* 12c513bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c513c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c513c3 je 0x12c513ce */
  if (C.zf) goto L_12c513ce;
L_12c513c5:;
  /* 12c513c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c513ca jb 0x12c513ce */
  if (C.cf) goto L_12c513ce;
  /* 12c513cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12c513ce:;
  /* 12c513ce pop eax */
  EAX = (pop32());
  /* 12c513cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c513d1 jne 0x12c513dc */
  if (!C.zf) goto L_12c513dc;
  /* 12c513d3 lock dec dword ptr [0x12c6e814] */
  x86_unimpl("lock dec @ 0x12c513d3");
  /* 12c513da jmp 0x12c513ea */
  goto L_12c513ea;
L_12c513dc:;
  /* 12c513dc mov ebx, ecx */
  EBX = (ECX);
  /* 12c513de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c513e0 call 0x12c465f0 */
  push32(0x12c513e5u); f_12c465f0();
  /* 12c513e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c513e8 mov ecx, ebx */
  ECX = (EBX);
L_12c513ea:;
  /* 12c513ea mov eax, ecx */
  EAX = (ECX);
  /* 12c513ec pop ebx */
  EBX = (pop32());
  /* 12c513ed pop esi */
  ESI = (pop32());
  /* 12c513ee pop edi */
  EDI = (pop32());
  /* 12c513ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c513f0 ret  */
  ESPCHK(0x12c512f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x12c51400 (255 bytes, 88 insns) */
void f_12c51400(void) {
  FTRACE(0x12c51400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51401 mov ebp, esp */
  EBP = (ESP);
  /* 12c51403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12c51406:;
  /* 12c51406 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5140d jle 0x12c51426 */
  if ((C.zf||C.sf!=C.of)) goto L_12c51426;
  /* 12c5140f push 8 */
  push32((uint32_t)(0x8u));
  /* 12c51411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51416 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c51418 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51419 call 0x12c48b60 */
  push32(0x12c5141eu); f_12c48b60();
  /* 12c5141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c51424 jmp 0x12c5143f */
  goto L_12c5143f;
L_12c51426:;
  /* 12c51426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5142b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5142d mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c51433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51435 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c51439 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c5143c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c5143f:;
  /* 12c5143f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51443 je 0x12c51450 */
  if (C.zf) goto L_12c51450;
  /* 12c51445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5144b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c5144e jmp 0x12c51406 */
  goto L_12c51406;
L_12c51450:;
  /* 12c51450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51453 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51455 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c51457 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c5145a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5145d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51460 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c51463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51466 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c51469 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5146d je 0x12c51475 */
  if (C.zf) goto L_12c51475;
  /* 12c5146f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51473 jne 0x12c51488 */
  if (!C.zf) goto L_12c51488;
L_12c51475:;
  /* 12c51475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5147a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5147c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c5147f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51482 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51485 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c51488:;
  /* 12c51488 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c5148f:;
  /* 12c5148f cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51496 jle 0x12c514ab */
  if ((C.zf||C.sf!=C.of)) goto L_12c514ab;
  /* 12c51498 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c5149a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5149d push edx */
  push32((uint32_t)(EDX));
  /* 12c5149e call 0x12c48b60 */
  push32(0x12c514a3u); f_12c48b60();
  /* 12c514a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c514a6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c514a9 jmp 0x12c514c0 */
  goto L_12c514c0;
L_12c514ab:;
  /* 12c514ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c514ae mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c514b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c514b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c514ba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c514bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c514c0:;
  /* 12c514c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c514c4 je 0x12c514eb */
  if (C.zf) goto L_12c514eb;
  /* 12c514c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c514c9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c514cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c514cf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12c514d3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c514d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c514d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c514db mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c514dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c514e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c514e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c514e6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c514e9 jmp 0x12c5148f */
  goto L_12c5148f;
L_12c514eb:;
  /* 12c514eb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c514ef jne 0x12c514f8 */
  if (!C.zf) goto L_12c514f8;
  /* 12c514f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c514f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c514f6 jmp 0x12c514fb */
  goto L_12c514fb;
L_12c514f8:;
  /* 12c514f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c514fb:;
  /* 12c514fb mov esp, ebp */
  ESP = (EBP);
  /* 12c514fd pop ebp */
  EBP = (pop32());
  /* 12c514fe ret  */
  ESPCHK(0x12c51400u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x12c51500 (17 bytes, 8 insns) */
void f_12c51500(void) {
  FTRACE(0x12c51500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51500 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51501 mov ebp, esp */
  EBP = (ESP);
  /* 12c51503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51506 push eax */
  push32((uint32_t)(EAX));
  /* 12c51507 call 0x12c51400 */
  push32(0x12c5150cu); f_12c51400();
  /* 12c5150c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5150f pop ebp */
  EBP = (pop32());
  /* 12c51510 ret  */
  ESPCHK(0x12c51500u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12c51520 (297 bytes, 106 insns) */
void f_12c51520(void) {
  FTRACE(0x12c51520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51520 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51521 mov ebp, esp */
  EBP = (ESP);
  /* 12c51523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51526 push esi */
  push32((uint32_t)(ESI));
L_12c51527:;
  /* 12c51527 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5152e jle 0x12c51547 */
  if ((C.zf||C.sf!=C.of)) goto L_12c51547;
  /* 12c51530 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c51532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51537 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c51539 push ecx */
  push32((uint32_t)(ECX));
  /* 12c5153a call 0x12c48b60 */
  push32(0x12c5153fu); f_12c48b60();
  /* 12c5153f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51542 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c51545 jmp 0x12c51560 */
  goto L_12c51560;
L_12c51547:;
  /* 12c51547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5154a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5154c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5154e mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c51554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51556 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c5155a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c5155d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c51560:;
  /* 12c51560 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51564 je 0x12c51571 */
  if (C.zf) goto L_12c51571;
  /* 12c51566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5156c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c5156f jmp 0x12c51527 */
  goto L_12c51527;
L_12c51571:;
  /* 12c51571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51576 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c51578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c5157b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5157e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51581 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c51584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51587 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c5158a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5158e je 0x12c51596 */
  if (C.zf) goto L_12c51596;
  /* 12c51590 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51594 jne 0x12c515a9 */
  if (!C.zf) goto L_12c515a9;
L_12c51596:;
  /* 12c51596 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5159b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5159d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c515a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c515a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c515a6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c515a9:;
  /* 12c515a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c515b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c515b7:;
  /* 12c515b7 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c515be jle 0x12c515d3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c515d3;
  /* 12c515c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c515c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c515c5 push edx */
  push32((uint32_t)(EDX));
  /* 12c515c6 call 0x12c48b60 */
  push32(0x12c515cbu); f_12c48b60();
  /* 12c515cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c515ce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c515d1 jmp 0x12c515e8 */
  goto L_12c515e8;
L_12c515d3:;
  /* 12c515d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c515d6 mov ecx, dword ptr [0x12c6cc98] */
  ECX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c515dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c515de mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c515e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c515e5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12c515e8:;
  /* 12c515e8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c515ec je 0x12c51629 */
  if (C.zf) goto L_12c51629;
  /* 12c515ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12c515f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c515f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c515f5 push eax */
  push32((uint32_t)(EAX));
  /* 12c515f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c515f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c515fa call 0x12c524c0 */
  push32(0x12c515ffu); f_12c524c0();
  /* 12c515ff mov ecx, eax */
  ECX = (EAX);
  /* 12c51601 mov esi, edx */
  ESI = (EDX);
  /* 12c51603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51606 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51609 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c5160a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5160c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5160e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c51611 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12c51614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51619 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c5161b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c5161e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c51627 jmp 0x12c515b7 */
  goto L_12c515b7;
L_12c51629:;
  /* 12c51629 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5162d jne 0x12c5163e */
  if (!C.zf) goto L_12c5163e;
  /* 12c5162f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51632 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c51634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51637 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5163a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c5163c jmp 0x12c51644 */
  goto L_12c51644;
L_12c5163e:;
  /* 12c5163e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12c51644:;
  /* 12c51644 pop esi */
  ESI = (pop32());
  /* 12c51645 mov esp, ebp */
  ESP = (EBP);
  /* 12c51647 pop ebp */
  EBP = (pop32());
  /* 12c51648 ret  */
  ESPCHK(0x12c51520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x12c51650 (61 bytes, 18 insns) */
void f_12c51650(void) {
  FTRACE(0x12c51650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51650 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51651 mov ebp, esp */
  EBP = (ESP);
  /* 12c51653 cmp dword ptr [0x12c6e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5165a jne 0x12c5168b */
  if (!C.zf) goto L_12c5168b;
  /* 12c5165c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c5165e call 0x12c46550 */
  push32(0x12c51663u); f_12c46550();
  /* 12c51663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51666 cmp dword ptr [0x12c6e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5166d jne 0x12c51681 */
  if (!C.zf) goto L_12c51681;
  /* 12c5166f call 0x12c516b0 */
  push32(0x12c51674u); f_12c516b0();
  /* 12c51674 mov eax, dword ptr [0x12c6e7e0] */
  EAX = (r32((uint32_t)(0x12c6e7e0)));
  /* 12c51679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5167c mov dword ptr [0x12c6e7e0], eax */
  w32((uint32_t)(0x12c6e7e0), (EAX));
L_12c51681:;
  /* 12c51681 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c51683 call 0x12c465f0 */
  push32(0x12c51688u); f_12c465f0();
  /* 12c51688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c5168b:;
  /* 12c5168b pop ebp */
  EBP = (pop32());
  /* 12c5168c ret  */
  ESPCHK(0x12c51650u, _esp0);
  ESP += 4; return;
}

/* FUN_10011690 @ 0x12c51690 (30 bytes, 11 insns) */
void f_12c51690(void) {
  FTRACE(0x12c51690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51690 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51691 mov ebp, esp */
  EBP = (ESP);
  /* 12c51693 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c51695 call 0x12c46550 */
  push32(0x12c5169au); f_12c46550();
  /* 12c5169a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5169d call 0x12c516b0 */
  push32(0x12c516a2u); f_12c516b0();
  /* 12c516a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c516a4 call 0x12c465f0 */
  push32(0x12c516a9u); f_12c465f0();
  /* 12c516a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c516ac pop ebp */
  EBP = (pop32());
  /* 12c516ad ret  */
  ESPCHK(0x12c51690u, _esp0);
  ESP += 4; return;
}

/* FUN_100116b0 @ 0x12c516b0 (939 bytes, 266 insns) */
void f_12c516b0(void) {
  FTRACE(0x12c516b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c516b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c516b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c516b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c516b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c516bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c516bf call 0x12c46550 */
  push32(0x12c516c4u); f_12c46550();
  /* 12c516c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c516c7 mov dword ptr [0x12c6e728], 0 */
  w32((uint32_t)(0x12c6e728), (0x0u));
  /* 12c516d1 mov dword ptr [0x12c6de38], 0xffffffff */
  w32((uint32_t)(0x12c6de38), (0xffffffffu));
  /* 12c516db mov eax, dword ptr [0x12c6de38] */
  EAX = (r32((uint32_t)(0x12c6de38)));
  /* 12c516e0 mov dword ptr [0x12c6de28], eax */
  w32((uint32_t)(0x12c6de28), (EAX));
  /* 12c516e5 push 0x12c6a850 */
  push32((uint32_t)(0x12c6a850u));
  /* 12c516ea call 0x12c52530 */
  push32(0x12c516efu); f_12c52530();
  /* 12c516ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c516f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c516f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c516f9 jne 0x12c51833 */
  if (!C.zf) goto L_12c51833;
  /* 12c516ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c51701 call 0x12c465f0 */
  push32(0x12c51706u); f_12c465f0();
  /* 12c51706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51709 push 0x12c6e730 */
  push32((uint32_t)(0x12c6e730u));
  /* 12c5170e call dword ptr [0x12c7023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7023c))), 0x12c51714u);
  /* 12c51714 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51717 je 0x12c5182e */
  if (C.zf) goto L_12c5182e;
  /* 12c5171d mov dword ptr [0x12c6e728], 1 */
  w32((uint32_t)(0x12c6e728), (0x1u));
  /* 12c51727 mov ecx, dword ptr [0x12c6e730] */
  ECX = (r32((uint32_t)(0x12c6e730)));
  /* 12c5172d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51730 mov dword ptr [0x12c6dd90], ecx */
  w32((uint32_t)(0x12c6dd90), (ECX));
  /* 12c51736 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51738 mov dx, word ptr [0x12c6e776] */
  DX = (r16((uint32_t)(0x12c6e776)));
  /* 12c5173f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c51741 je 0x12c51759 */
  if (C.zf) goto L_12c51759;
  /* 12c51743 mov eax, dword ptr [0x12c6e784] */
  EAX = (r32((uint32_t)(0x12c6e784)));
  /* 12c51748 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c5174b mov ecx, dword ptr [0x12c6dd90] */
  ECX = (r32((uint32_t)(0x12c6dd90)));
  /* 12c51751 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51753 mov dword ptr [0x12c6dd90], ecx */
  w32((uint32_t)(0x12c6dd90), (ECX));
L_12c51759:;
  /* 12c51759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c5175b mov dx, word ptr [0x12c6e7ca] */
  DX = (r16((uint32_t)(0x12c6e7ca)));
  /* 12c51762 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c51764 je 0x12c5178e */
  if (C.zf) goto L_12c5178e;
  /* 12c51766 cmp dword ptr [0x12c6e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5176d je 0x12c5178e */
  if (C.zf) goto L_12c5178e;
  /* 12c5176f mov dword ptr [0x12c6dd94], 1 */
  w32((uint32_t)(0x12c6dd94), (0x1u));
  /* 12c51779 mov eax, dword ptr [0x12c6e7d8] */
  EAX = (r32((uint32_t)(0x12c6e7d8)));
  /* 12c5177e sub eax, dword ptr [0x12c6e784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6e784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51784 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51787 mov dword ptr [0x12c6dd98], eax */
  w32((uint32_t)(0x12c6dd98), (EAX));
  /* 12c5178c jmp 0x12c517a2 */
  goto L_12c517a2;
L_12c5178e:;
  /* 12c5178e mov dword ptr [0x12c6dd94], 0 */
  w32((uint32_t)(0x12c6dd94), (0x0u));
  /* 12c51798 mov dword ptr [0x12c6dd98], 0 */
  w32((uint32_t)(0x12c6dd98), (0x0u));
L_12c517a2:;
  /* 12c517a2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c517a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c517a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c517a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c517aa mov edx, dword ptr [0x12c6de1c] */
  EDX = (r32((uint32_t)(0x12c6de1c)));
  /* 12c517b0 push edx */
  push32((uint32_t)(EDX));
  /* 12c517b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c517b3 push 0x12c6e734 */
  push32((uint32_t)(0x12c6e734u));
  /* 12c517b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c517bd mov eax, dword ptr [0x12c6e698] */
  EAX = (r32((uint32_t)(0x12c6e698)));
  /* 12c517c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c517c3 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c517c9u);
  /* 12c517c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c517cb je 0x12c517df */
  if (C.zf) goto L_12c517df;
  /* 12c517cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c517d1 jne 0x12c517df */
  if (!C.zf) goto L_12c517df;
  /* 12c517d3 mov ecx, dword ptr [0x12c6de1c] */
  ECX = (r32((uint32_t)(0x12c6de1c)));
  /* 12c517d9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12c517dd jmp 0x12c517e8 */
  goto L_12c517e8;
L_12c517df:;
  /* 12c517df mov edx, dword ptr [0x12c6de1c] */
  EDX = (r32((uint32_t)(0x12c6de1c)));
  /* 12c517e5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12c517e8:;
  /* 12c517e8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c517eb push eax */
  push32((uint32_t)(EAX));
  /* 12c517ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12c517ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c517f0 mov ecx, dword ptr [0x12c6de20] */
  ECX = (r32((uint32_t)(0x12c6de20)));
  /* 12c517f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c517f7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c517f9 push 0x12c6e788 */
  push32((uint32_t)(0x12c6e788u));
  /* 12c517fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c51803 mov edx, dword ptr [0x12c6e698] */
  EDX = (r32((uint32_t)(0x12c6e698)));
  /* 12c51809 push edx */
  push32((uint32_t)(EDX));
  /* 12c5180a call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c51810u);
  /* 12c51810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51812 je 0x12c51825 */
  if (C.zf) goto L_12c51825;
  /* 12c51814 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51818 jne 0x12c51825 */
  if (!C.zf) goto L_12c51825;
  /* 12c5181a mov eax, dword ptr [0x12c6de20] */
  EAX = (r32((uint32_t)(0x12c6de20)));
  /* 12c5181f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12c51823 jmp 0x12c5182e */
  goto L_12c5182e;
L_12c51825:;
  /* 12c51825 mov ecx, dword ptr [0x12c6de20] */
  ECX = (r32((uint32_t)(0x12c6de20)));
  /* 12c5182b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12c5182e:;
  /* 12c5182e jmp 0x12c51a57 */
  goto L_12c51a57;
L_12c51833:;
  /* 12c51833 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51836 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c51839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c5183b je 0x12c5185d */
  if (C.zf) goto L_12c5185d;
  /* 12c5183d cmp dword ptr [0x12c6e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51844 je 0x12c5186c */
  if (C.zf) goto L_12c5186c;
  /* 12c51846 mov ecx, dword ptr [0x12c6e7dc] */
  ECX = (r32((uint32_t)(0x12c6e7dc)));
  /* 12c5184c push ecx */
  push32((uint32_t)(ECX));
  /* 12c5184d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51850 push edx */
  push32((uint32_t)(EDX));
  /* 12c51851 call 0x12c4e7e0 */
  push32(0x12c51856u); f_12c4e7e0();
  /* 12c51856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c5185b jne 0x12c5186c */
  if (!C.zf) goto L_12c5186c;
L_12c5185d:;
  /* 12c5185d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c5185f call 0x12c465f0 */
  push32(0x12c51864u); f_12c465f0();
  /* 12c51864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51867 jmp 0x12c51a57 */
  goto L_12c51a57;
L_12c5186c:;
  /* 12c5186c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c5186e mov eax, dword ptr [0x12c6e7dc] */
  EAX = (r32((uint32_t)(0x12c6e7dc)));
  /* 12c51873 push eax */
  push32((uint32_t)(EAX));
  /* 12c51874 call 0x12c435e0 */
  push32(0x12c51879u); f_12c435e0();
  /* 12c51879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5187c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12c51881 push 0x12c6a848 */
  push32((uint32_t)(0x12c6a848u));
  /* 12c51886 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c51888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5188b push ecx */
  push32((uint32_t)(ECX));
  /* 12c5188c call 0x12c45980 */
  push32(0x12c51891u); f_12c45980();
  /* 12c51891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51897 push eax */
  push32((uint32_t)(EAX));
  /* 12c51898 call 0x12c42b50 */
  push32(0x12c5189du); f_12c42b50();
  /* 12c5189d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518a0 mov dword ptr [0x12c6e7dc], eax */
  w32((uint32_t)(0x12c6e7dc), (EAX));
  /* 12c518a5 cmp dword ptr [0x12c6e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c518ac jne 0x12c518bd */
  if (!C.zf) goto L_12c518bd;
  /* 12c518ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c518b0 call 0x12c465f0 */
  push32(0x12c518b5u); f_12c465f0();
  /* 12c518b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518b8 jmp 0x12c51a57 */
  goto L_12c51a57;
L_12c518bd:;
  /* 12c518bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c518c0 push edx */
  push32((uint32_t)(EDX));
  /* 12c518c1 mov eax, dword ptr [0x12c6e7dc] */
  EAX = (r32((uint32_t)(0x12c6e7dc)));
  /* 12c518c6 push eax */
  push32((uint32_t)(EAX));
  /* 12c518c7 call 0x12c45b00 */
  push32(0x12c518ccu); f_12c45b00();
  /* 12c518cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c518d1 call 0x12c465f0 */
  push32(0x12c518d6u); f_12c465f0();
  /* 12c518d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c518db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c518de push ecx */
  push32((uint32_t)(ECX));
  /* 12c518df mov edx, dword ptr [0x12c6de1c] */
  EDX = (r32((uint32_t)(0x12c6de1c)));
  /* 12c518e5 push edx */
  push32((uint32_t)(EDX));
  /* 12c518e6 call 0x12c46370 */
  push32(0x12c518ebu); f_12c46370();
  /* 12c518eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518ee mov eax, dword ptr [0x12c6de1c] */
  EAX = (r32((uint32_t)(0x12c6de1c)));
  /* 12c518f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12c518f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c518fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c518fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c51900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51903 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c51906 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51909 jne 0x12c5191d */
  if (!C.zf) goto L_12c5191d;
  /* 12c5190b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5190e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51911 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c51914 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5191a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c5191d:;
  /* 12c5191d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51920 push eax */
  push32((uint32_t)(EAX));
  /* 12c51921 call 0x12c51400 */
  push32(0x12c51926u); f_12c51400();
  /* 12c51926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51929 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c5192f mov dword ptr [0x12c6dd90], eax */
  w32((uint32_t)(0x12c6dd90), (EAX));
L_12c51934:;
  /* 12c51934 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51937 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c5193a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5193d je 0x12c51955 */
  if (C.zf) goto L_12c51955;
  /* 12c5193f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51942 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c51945 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51948 jl 0x12c51960 */
  if ((C.sf!=C.of)) goto L_12c51960;
  /* 12c5194a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5194d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c51950 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51953 jg 0x12c51960 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c51960;
L_12c51955:;
  /* 12c51955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5195b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c5195e jmp 0x12c51934 */
  goto L_12c51934;
L_12c51960:;
  /* 12c51960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51963 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c51966 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51969 jne 0x12c51a05 */
  if (!C.zf) goto L_12c51a05;
  /* 12c5196f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51975 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c51978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5197b push edx */
  push32((uint32_t)(EDX));
  /* 12c5197c call 0x12c51400 */
  push32(0x12c51981u); f_12c51400();
  /* 12c51981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51984 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51987 mov ecx, dword ptr [0x12c6dd90] */
  ECX = (r32((uint32_t)(0x12c6dd90)));
  /* 12c5198d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5198f mov dword ptr [0x12c6dd90], ecx */
  w32((uint32_t)(0x12c6dd90), (ECX));
L_12c51995:;
  /* 12c51995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51998 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c5199b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5199e jl 0x12c519b6 */
  if ((C.sf!=C.of)) goto L_12c519b6;
  /* 12c519a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c519a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c519a9 jg 0x12c519b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c519b6;
  /* 12c519ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c519b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c519b4 jmp 0x12c51995 */
  goto L_12c51995;
L_12c519b6:;
  /* 12c519b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c519bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c519bf jne 0x12c51a05 */
  if (!C.zf) goto L_12c51a05;
  /* 12c519c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c519c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c519ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519cd push ecx */
  push32((uint32_t)(ECX));
  /* 12c519ce call 0x12c51400 */
  push32(0x12c519d3u); f_12c51400();
  /* 12c519d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c519d6 mov edx, dword ptr [0x12c6dd90] */
  EDX = (r32((uint32_t)(0x12c6dd90)));
  /* 12c519dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c519de mov dword ptr [0x12c6dd90], edx */
  w32((uint32_t)(0x12c6dd90), (EDX));
L_12c519e4:;
  /* 12c519e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c519ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c519ed jl 0x12c51a05 */
  if ((C.sf!=C.of)) goto L_12c51a05;
  /* 12c519ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c519f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c519f8 jg 0x12c51a05 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c51a05;
  /* 12c519fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c519fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c51a03 jmp 0x12c519e4 */
  goto L_12c519e4;
L_12c51a05:;
  /* 12c51a05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51a09 je 0x12c51a19 */
  if (C.zf) goto L_12c51a19;
  /* 12c51a0b mov edx, dword ptr [0x12c6dd90] */
  EDX = (r32((uint32_t)(0x12c6dd90)));
  /* 12c51a11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c51a13 mov dword ptr [0x12c6dd90], edx */
  w32((uint32_t)(0x12c6dd90), (EDX));
L_12c51a19:;
  /* 12c51a19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51a1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c51a1f mov dword ptr [0x12c6dd94], ecx */
  w32((uint32_t)(0x12c6dd94), (ECX));
  /* 12c51a25 cmp dword ptr [0x12c6dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51a2c je 0x12c51a4e */
  if (C.zf) goto L_12c51a4e;
  /* 12c51a2e push 3 */
  push32((uint32_t)(0x3u));
  /* 12c51a30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51a33 push edx */
  push32((uint32_t)(EDX));
  /* 12c51a34 mov eax, dword ptr [0x12c6de20] */
  EAX = (r32((uint32_t)(0x12c6de20)));
  /* 12c51a39 push eax */
  push32((uint32_t)(EAX));
  /* 12c51a3a call 0x12c46370 */
  push32(0x12c51a3fu); f_12c46370();
  /* 12c51a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51a42 mov ecx, dword ptr [0x12c6de20] */
  ECX = (r32((uint32_t)(0x12c6de20)));
  /* 12c51a48 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12c51a4c jmp 0x12c51a57 */
  goto L_12c51a57;
L_12c51a4e:;
  /* 12c51a4e mov edx, dword ptr [0x12c6de20] */
  EDX = (r32((uint32_t)(0x12c6de20)));
  /* 12c51a54 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12c51a57:;
  /* 12c51a57 mov esp, ebp */
  ESP = (EBP);
  /* 12c51a59 pop ebp */
  EBP = (pop32());
  /* 12c51a5a ret  */
  ESPCHK(0x12c516b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x12c51a60 (46 bytes, 18 insns) */
void f_12c51a60(void) {
  FTRACE(0x12c51a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51a61 mov ebp, esp */
  EBP = (ESP);
  /* 12c51a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51a64 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c51a66 call 0x12c46550 */
  push32(0x12c51a6bu); f_12c46550();
  /* 12c51a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51a71 push eax */
  push32((uint32_t)(EAX));
  /* 12c51a72 call 0x12c51a90 */
  push32(0x12c51a77u); f_12c51a90();
  /* 12c51a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51a7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c51a7d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c51a7f call 0x12c465f0 */
  push32(0x12c51a84u); f_12c465f0();
  /* 12c51a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51a8a mov esp, ebp */
  ESP = (EBP);
  /* 12c51a8c pop ebp */
  EBP = (pop32());
  /* 12c51a8d ret  */
  ESPCHK(0x12c51a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a90 @ 0x12c51a90 (762 bytes, 246 insns) */
void f_12c51a90(void) {
  FTRACE(0x12c51a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51a91 mov ebp, esp */
  EBP = (ESP);
  /* 12c51a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51a94 cmp dword ptr [0x12c6dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51a9b jne 0x12c51aa4 */
  if (!C.zf) goto L_12c51aa4;
  /* 12c51a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51a9f jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51aa4:;
  /* 12c51aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51aa7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c51aaa cmp ecx, dword ptr [0x12c6de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51ab0 jne 0x12c51ac4 */
  if (!C.zf) goto L_12c51ac4;
  /* 12c51ab2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51ab5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c51ab8 cmp eax, dword ptr [0x12c6de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51abe je 0x12c51c8b */
  if (C.zf) goto L_12c51c8b;
L_12c51ac4:;
  /* 12c51ac4 cmp dword ptr [0x12c6e728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51acb je 0x12c51c45 */
  if (C.zf) goto L_12c51c45;
  /* 12c51ad1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51ad3 mov cx, word ptr [0x12c6e7c8] */
  CX = (r16((uint32_t)(0x12c6e7c8)));
  /* 12c51ada test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c51adc jne 0x12c51b39 */
  if (!C.zf) goto L_12c51b39;
  /* 12c51ade xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51ae0 mov dx, word ptr [0x12c6e7d6] */
  DX = (r16((uint32_t)(0x12c6e7d6)));
  /* 12c51ae7 push edx */
  push32((uint32_t)(EDX));
  /* 12c51ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51aea mov ax, word ptr [0x12c6e7d4] */
  AX = (r16((uint32_t)(0x12c6e7d4)));
  /* 12c51af0 push eax */
  push32((uint32_t)(EAX));
  /* 12c51af1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51af3 mov cx, word ptr [0x12c6e7d2] */
  CX = (r16((uint32_t)(0x12c6e7d2)));
  /* 12c51afa push ecx */
  push32((uint32_t)(ECX));
  /* 12c51afb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51afd mov dx, word ptr [0x12c6e7d0] */
  DX = (r16((uint32_t)(0x12c6e7d0)));
  /* 12c51b04 push edx */
  push32((uint32_t)(EDX));
  /* 12c51b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51b09 mov ax, word ptr [0x12c6e7cc] */
  AX = (r16((uint32_t)(0x12c6e7cc)));
  /* 12c51b0f push eax */
  push32((uint32_t)(EAX));
  /* 12c51b10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51b12 mov cx, word ptr [0x12c6e7ce] */
  CX = (r16((uint32_t)(0x12c6e7ce)));
  /* 12c51b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51b1c mov dx, word ptr [0x12c6e7ca] */
  DX = (r16((uint32_t)(0x12c6e7ca)));
  /* 12c51b23 push edx */
  push32((uint32_t)(EDX));
  /* 12c51b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51b27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c51b2a push ecx */
  push32((uint32_t)(ECX));
  /* 12c51b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51b2f call 0x12c51d90 */
  push32(0x12c51b34u); f_12c51d90();
  /* 12c51b34 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51b37 jmp 0x12c51b8a */
  goto L_12c51b8a;
L_12c51b39:;
  /* 12c51b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51b3b mov dx, word ptr [0x12c6e7d6] */
  DX = (r16((uint32_t)(0x12c6e7d6)));
  /* 12c51b42 push edx */
  push32((uint32_t)(EDX));
  /* 12c51b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51b45 mov ax, word ptr [0x12c6e7d4] */
  AX = (r16((uint32_t)(0x12c6e7d4)));
  /* 12c51b4b push eax */
  push32((uint32_t)(EAX));
  /* 12c51b4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51b4e mov cx, word ptr [0x12c6e7d2] */
  CX = (r16((uint32_t)(0x12c6e7d2)));
  /* 12c51b55 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51b56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51b58 mov dx, word ptr [0x12c6e7d0] */
  DX = (r16((uint32_t)(0x12c6e7d0)));
  /* 12c51b5f push edx */
  push32((uint32_t)(EDX));
  /* 12c51b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51b62 mov ax, word ptr [0x12c6e7ce] */
  AX = (r16((uint32_t)(0x12c6e7ce)));
  /* 12c51b68 push eax */
  push32((uint32_t)(EAX));
  /* 12c51b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51b6f mov cx, word ptr [0x12c6e7ca] */
  CX = (r16((uint32_t)(0x12c6e7ca)));
  /* 12c51b76 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51b7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c51b7d push eax */
  push32((uint32_t)(EAX));
  /* 12c51b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51b82 call 0x12c51d90 */
  push32(0x12c51b87u); f_12c51d90();
  /* 12c51b87 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c51b8a:;
  /* 12c51b8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51b8c mov cx, word ptr [0x12c6e774] */
  CX = (r16((uint32_t)(0x12c6e774)));
  /* 12c51b93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c51b95 jne 0x12c51bf2 */
  if (!C.zf) goto L_12c51bf2;
  /* 12c51b97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51b99 mov dx, word ptr [0x12c6e782] */
  DX = (r16((uint32_t)(0x12c6e782)));
  /* 12c51ba0 push edx */
  push32((uint32_t)(EDX));
  /* 12c51ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51ba3 mov ax, word ptr [0x12c6e780] */
  AX = (r16((uint32_t)(0x12c6e780)));
  /* 12c51ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12c51baa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51bac mov cx, word ptr [0x12c6e77e] */
  CX = (r16((uint32_t)(0x12c6e77e)));
  /* 12c51bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51bb6 mov dx, word ptr [0x12c6e77c] */
  DX = (r16((uint32_t)(0x12c6e77c)));
  /* 12c51bbd push edx */
  push32((uint32_t)(EDX));
  /* 12c51bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51bc2 mov ax, word ptr [0x12c6e778] */
  AX = (r16((uint32_t)(0x12c6e778)));
  /* 12c51bc8 push eax */
  push32((uint32_t)(EAX));
  /* 12c51bc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51bcb mov cx, word ptr [0x12c6e77a] */
  CX = (r16((uint32_t)(0x12c6e77a)));
  /* 12c51bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51bd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51bd5 mov dx, word ptr [0x12c6e776] */
  DX = (r16((uint32_t)(0x12c6e776)));
  /* 12c51bdc push edx */
  push32((uint32_t)(EDX));
  /* 12c51bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51be0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c51be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c51be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51be8 call 0x12c51d90 */
  push32(0x12c51bedu); f_12c51d90();
  /* 12c51bed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51bf0 jmp 0x12c51c43 */
  goto L_12c51c43;
L_12c51bf2:;
  /* 12c51bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51bf4 mov dx, word ptr [0x12c6e782] */
  DX = (r16((uint32_t)(0x12c6e782)));
  /* 12c51bfb push edx */
  push32((uint32_t)(EDX));
  /* 12c51bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51bfe mov ax, word ptr [0x12c6e780] */
  AX = (r16((uint32_t)(0x12c6e780)));
  /* 12c51c04 push eax */
  push32((uint32_t)(EAX));
  /* 12c51c05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51c07 mov cx, word ptr [0x12c6e77e] */
  CX = (r16((uint32_t)(0x12c6e77e)));
  /* 12c51c0e push ecx */
  push32((uint32_t)(ECX));
  /* 12c51c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c51c11 mov dx, word ptr [0x12c6e77c] */
  DX = (r16((uint32_t)(0x12c6e77c)));
  /* 12c51c18 push edx */
  push32((uint32_t)(EDX));
  /* 12c51c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51c1b mov ax, word ptr [0x12c6e77a] */
  AX = (r16((uint32_t)(0x12c6e77a)));
  /* 12c51c21 push eax */
  push32((uint32_t)(EAX));
  /* 12c51c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c51c28 mov cx, word ptr [0x12c6e776] */
  CX = (r16((uint32_t)(0x12c6e776)));
  /* 12c51c2f push ecx */
  push32((uint32_t)(ECX));
  /* 12c51c30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51c33 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c51c36 push eax */
  push32((uint32_t)(EAX));
  /* 12c51c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c3b call 0x12c51d90 */
  push32(0x12c51c40u); f_12c51d90();
  /* 12c51c40 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c51c43:;
  /* 12c51c43 jmp 0x12c51c8b */
  goto L_12c51c8b;
L_12c51c45:;
  /* 12c51c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c51c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51c53 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c51c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51c58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c51c5b push edx */
  push32((uint32_t)(EDX));
  /* 12c51c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51c60 call 0x12c51d90 */
  push32(0x12c51c65u); f_12c51d90();
  /* 12c51c65 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c51c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c74 push 5 */
  push32((uint32_t)(0x5u));
  /* 12c51c76 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c51c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51c7b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c51c7e push ecx */
  push32((uint32_t)(ECX));
  /* 12c51c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51c83 call 0x12c51d90 */
  push32(0x12c51c88u); f_12c51d90();
  /* 12c51c88 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c51c8b:;
  /* 12c51c8b mov edx, dword ptr [0x12c6de2c] */
  EDX = (r32((uint32_t)(0x12c6de2c)));
  /* 12c51c91 cmp edx, dword ptr [0x12c6de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51c97 jge 0x12c51ce4 */
  if ((C.sf==C.of)) goto L_12c51ce4;
  /* 12c51c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51c9c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c51c9f cmp ecx, dword ptr [0x12c6de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51ca5 jl 0x12c51cb5 */
  if ((C.sf!=C.of)) goto L_12c51cb5;
  /* 12c51ca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51caa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c51cad cmp eax, dword ptr [0x12c6de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51cb3 jle 0x12c51cbc */
  if ((C.zf||C.sf!=C.of)) goto L_12c51cbc;
L_12c51cb5:;
  /* 12c51cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51cb7 jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51cbc:;
  /* 12c51cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51cbf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c51cc2 cmp edx, dword ptr [0x12c6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51cc8 jle 0x12c51ce2 */
  if ((C.zf||C.sf!=C.of)) goto L_12c51ce2;
  /* 12c51cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51ccd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c51cd0 cmp ecx, dword ptr [0x12c6de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51cd6 jge 0x12c51ce2 */
  if ((C.sf==C.of)) goto L_12c51ce2;
  /* 12c51cd8 mov eax, 1 */
  EAX = (0x1u);
  /* 12c51cdd jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51ce2:;
  /* 12c51ce2 jmp 0x12c51d27 */
  goto L_12c51d27;
L_12c51ce4:;
  /* 12c51ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51ce7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c51cea cmp eax, dword ptr [0x12c6de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51cf0 jl 0x12c51d00 */
  if ((C.sf!=C.of)) goto L_12c51d00;
  /* 12c51cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51cf5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c51cf8 cmp edx, dword ptr [0x12c6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51cfe jle 0x12c51d07 */
  if ((C.zf||C.sf!=C.of)) goto L_12c51d07;
L_12c51d00:;
  /* 12c51d00 mov eax, 1 */
  EAX = (0x1u);
  /* 12c51d05 jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51d07:;
  /* 12c51d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d0a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c51d0d cmp ecx, dword ptr [0x12c6de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d13 jle 0x12c51d27 */
  if ((C.zf||C.sf!=C.of)) goto L_12c51d27;
  /* 12c51d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d18 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c51d1b cmp eax, dword ptr [0x12c6de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d21 jge 0x12c51d27 */
  if ((C.sf==C.of)) goto L_12c51d27;
  /* 12c51d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51d25 jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51d27:;
  /* 12c51d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c51d2d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c51d35 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d3a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c51d3d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51d43 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51d45 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51d4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c51d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c51d51 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c51d54 cmp edx, dword ptr [0x12c6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d5a jne 0x12c51d72 */
  if (!C.zf) goto L_12c51d72;
  /* 12c51d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51d5f cmp eax, dword ptr [0x12c6de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d65 jl 0x12c51d6e */
  if ((C.sf!=C.of)) goto L_12c51d6e;
  /* 12c51d67 mov eax, 1 */
  EAX = (0x1u);
  /* 12c51d6c jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51d6e:;
  /* 12c51d6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51d70 jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51d72:;
  /* 12c51d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51d75 cmp ecx, dword ptr [0x12c6de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d7b jge 0x12c51d84 */
  if ((C.sf==C.of)) goto L_12c51d84;
  /* 12c51d7d mov eax, 1 */
  EAX = (0x1u);
  /* 12c51d82 jmp 0x12c51d86 */
  goto L_12c51d86;
L_12c51d84:;
  /* 12c51d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c51d86:;
  /* 12c51d86 mov esp, ebp */
  ESP = (EBP);
  /* 12c51d88 pop ebp */
  EBP = (pop32());
  /* 12c51d89 ret  */
  ESPCHK(0x12c51a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x12c51d90 (504 bytes, 145 insns) */
void f_12c51d90(void) {
  FTRACE(0x12c51d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51d91 mov ebp, esp */
  EBP = (ESP);
  /* 12c51d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51d96 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51d9a jne 0x12c51e6c */
  if (!C.zf) goto L_12c51e6c;
  /* 12c51da0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51da3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c51da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51da8 jne 0x12c51db9 */
  if (!C.zf) goto L_12c51db9;
  /* 12c51daa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51dad mov edx, dword ptr [ecx*4 + 0x12c6de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6de4c)));
  /* 12c51db4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c51db7 jmp 0x12c51dc6 */
  goto L_12c51dc6;
L_12c51db9:;
  /* 12c51db9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51dbc mov ecx, dword ptr [eax*4 + 0x12c6de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6de80)));
  /* 12c51dc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c51dc6:;
  /* 12c51dc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c51dc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51dcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c51dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51dd2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51dd5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51ddb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51dde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51de3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51de6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12c51de9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12c51ded cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c51dee mov ecx, 7 */
  ECX = (0x7u);
  /* 12c51df3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c51df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c51df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c51dfb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51dfe jge 0x12c51e19 */
  if ((C.sf==C.of)) goto L_12c51e19;
  /* 12c51e00 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c51e03 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51e06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c51e09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51e0c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51e0f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51e12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51e14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c51e17 jmp 0x12c51e2d */
  goto L_12c51e2d;
L_12c51e19:;
  /* 12c51e19 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c51e1c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51e1f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c51e22 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51e25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51e28 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51e2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c51e2d:;
  /* 12c51e2d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51e31 jne 0x12c51e6a */
  if (!C.zf) goto L_12c51e6a;
  /* 12c51e33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51e36 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c51e39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c51e3b jne 0x12c51e4c */
  if (!C.zf) goto L_12c51e4c;
  /* 12c51e3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51e40 mov eax, dword ptr [edx*4 + 0x12c6de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6de50)));
  /* 12c51e47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c51e4a jmp 0x12c51e59 */
  goto L_12c51e59;
L_12c51e4c:;
  /* 12c51e4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51e4f mov edx, dword ptr [ecx*4 + 0x12c6de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6de84)));
  /* 12c51e56 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c51e59:;
  /* 12c51e59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51e5c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51e5f jle 0x12c51e6a */
  if ((C.zf||C.sf!=C.of)) goto L_12c51e6a;
  /* 12c51e61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51e64 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51e67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c51e6a:;
  /* 12c51e6a jmp 0x12c51ea1 */
  goto L_12c51ea1;
L_12c51e6c:;
  /* 12c51e6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51e6f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c51e72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c51e74 jne 0x12c51e85 */
  if (!C.zf) goto L_12c51e85;
  /* 12c51e76 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51e79 mov ecx, dword ptr [eax*4 + 0x12c6de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6de4c)));
  /* 12c51e80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c51e83 jmp 0x12c51e92 */
  goto L_12c51e92;
L_12c51e85:;
  /* 12c51e85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c51e88 mov eax, dword ptr [edx*4 + 0x12c6de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6de80)));
  /* 12c51e8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12c51e92:;
  /* 12c51e92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c51e95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c51e98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51e9b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51e9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c51ea1:;
  /* 12c51ea1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51ea5 jne 0x12c51ee1 */
  if (!C.zf) goto L_12c51ee1;
  /* 12c51ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51eaa mov dword ptr [0x12c6de2c], eax */
  w32((uint32_t)(0x12c6de2c), (EAX));
  /* 12c51eaf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c51eb2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51eb5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12c51eb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51eba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51ebd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12c51ec0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51ec2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51ec8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12c51ecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51ecd mov dword ptr [0x12c6de30], ecx */
  w32((uint32_t)(0x12c6de30), (ECX));
  /* 12c51ed3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51ed6 mov dword ptr [0x12c6de28], edx */
  w32((uint32_t)(0x12c6de28), (EDX));
  /* 12c51edc jmp 0x12c51f84 */
  goto L_12c51f84;
L_12c51ee1:;
  /* 12c51ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c51ee4 mov dword ptr [0x12c6de3c], eax */
  w32((uint32_t)(0x12c6de3c), (EAX));
  /* 12c51ee9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c51eec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51eef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12c51ef2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51ef4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51ef7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12c51efa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51efc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51f02 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12c51f05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51f07 mov dword ptr [0x12c6de40], ecx */
  w32((uint32_t)(0x12c6de40), (ECX));
  /* 12c51f0d mov edx, dword ptr [0x12c6dd98] */
  EDX = (r32((uint32_t)(0x12c6dd98)));
  /* 12c51f13 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c51f19 mov eax, dword ptr [0x12c6de40] */
  EAX = (r32((uint32_t)(0x12c6de40)));
  /* 12c51f1e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51f20 mov dword ptr [0x12c6de40], eax */
  w32((uint32_t)(0x12c6de40), (EAX));
  /* 12c51f25 cmp dword ptr [0x12c6de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51f2c jge 0x12c51f51 */
  if ((C.sf==C.of)) goto L_12c51f51;
  /* 12c51f2e mov ecx, dword ptr [0x12c6de40] */
  ECX = (r32((uint32_t)(0x12c6de40)));
  /* 12c51f34 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51f3a mov dword ptr [0x12c6de40], ecx */
  w32((uint32_t)(0x12c6de40), (ECX));
  /* 12c51f40 mov edx, dword ptr [0x12c6de3c] */
  EDX = (r32((uint32_t)(0x12c6de3c)));
  /* 12c51f46 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51f49 mov dword ptr [0x12c6de3c], edx */
  w32((uint32_t)(0x12c6de3c), (EDX));
  /* 12c51f4f jmp 0x12c51f7b */
  goto L_12c51f7b;
L_12c51f51:;
  /* 12c51f51 cmp dword ptr [0x12c6de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12c6de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51f5b jl 0x12c51f7b */
  if ((C.sf!=C.of)) goto L_12c51f7b;
  /* 12c51f5d mov eax, dword ptr [0x12c6de40] */
  EAX = (r32((uint32_t)(0x12c6de40)));
  /* 12c51f62 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c51f67 mov dword ptr [0x12c6de40], eax */
  w32((uint32_t)(0x12c6de40), (EAX));
  /* 12c51f6c mov ecx, dword ptr [0x12c6de3c] */
  ECX = (r32((uint32_t)(0x12c6de3c)));
  /* 12c51f72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51f75 mov dword ptr [0x12c6de3c], ecx */
  w32((uint32_t)(0x12c6de3c), (ECX));
L_12c51f7b:;
  /* 12c51f7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c51f7e mov dword ptr [0x12c6de38], edx */
  w32((uint32_t)(0x12c6de38), (EDX));
L_12c51f84:;
  /* 12c51f84 mov esp, ebp */
  ESP = (EBP);
  /* 12c51f86 pop ebp */
  EBP = (pop32());
  /* 12c51f87 ret  */
  ESPCHK(0x12c51d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x12c51f90 (382 bytes, 135 insns) */
void f_12c51f90(void) {
  FTRACE(0x12c51f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c51f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c51f91 mov ebp, esp */
  EBP = (ESP);
  /* 12c51f93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c51f95 push 0x12c6a858 */
  push32((uint32_t)(0x12c6a858u));
  /* 12c51f9a push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c51f9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c51fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12c51fa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c51fad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c51fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c51fb1 push esi */
  push32((uint32_t)(ESI));
  /* 12c51fb2 push edi */
  push32((uint32_t)(EDI));
  /* 12c51fb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c51fb6 cmp dword ptr [0x12c6e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c51fbd jne 0x12c52002 */
  if (!C.zf) goto L_12c52002;
  /* 12c51fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fc7 call dword ptr [0x12c70238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70238))), 0x12c51fcdu);
  /* 12c51fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51fcf je 0x12c51fdd */
  if (C.zf) goto L_12c51fdd;
  /* 12c51fd1 mov dword ptr [0x12c6e7e4], 1 */
  w32((uint32_t)(0x12c6e7e4), (0x1u));
  /* 12c51fdb jmp 0x12c52002 */
  goto L_12c52002;
L_12c51fdd:;
  /* 12c51fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c51fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c51fe5 call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c51febu);
  /* 12c51feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c51fed je 0x12c51ffb */
  if (C.zf) goto L_12c51ffb;
  /* 12c51fef mov dword ptr [0x12c6e7e4], 2 */
  w32((uint32_t)(0x12c6e7e4), (0x2u));
  /* 12c51ff9 jmp 0x12c52002 */
  goto L_12c52002;
L_12c51ffb:;
  /* 12c51ffb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c51ffd jmp 0x12c52111 */
  goto L_12c52111;
L_12c52002:;
  /* 12c52002 cmp dword ptr [0x12c6e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52009 jne 0x12c52026 */
  if (!C.zf) goto L_12c52026;
  /* 12c5200b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5200e push eax */
  push32((uint32_t)(EAX));
  /* 12c5200f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c52012 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52016 push edx */
  push32((uint32_t)(EDX));
  /* 12c52017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5201a push eax */
  push32((uint32_t)(EAX));
  /* 12c5201b call dword ptr [0x12c70238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70238))), 0x12c52021u);
  /* 12c52021 jmp 0x12c52111 */
  goto L_12c52111;
L_12c52026:;
  /* 12c52026 cmp dword ptr [0x12c6e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5202d jne 0x12c5210f */
  if (!C.zf) goto L_12c5210f;
  /* 12c52033 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52037 jne 0x12c52042 */
  if (!C.zf) goto L_12c52042;
  /* 12c52039 mov ecx, dword ptr [0x12c6e698] */
  ECX = (r32((uint32_t)(0x12c6e698)));
  /* 12c5203f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12c52042:;
  /* 12c52042 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52049 push edx */
  push32((uint32_t)(EDX));
  /* 12c5204a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5204d push eax */
  push32((uint32_t)(EAX));
  /* 12c5204e call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c52054u);
  /* 12c52054 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c52057 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5205b jne 0x12c52064 */
  if (!C.zf) goto L_12c52064;
  /* 12c5205d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5205f jmp 0x12c52111 */
  goto L_12c52111;
L_12c52064:;
  /* 12c52064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c5206b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c5206e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52071 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c52073 call 0x12c45cf0 */
  push32(0x12c52078u); f_12c45cf0();
  /* 12c52078 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12c5207b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c5207e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c52081 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c52084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c5208b jmp 0x12c520a4 */
  goto L_12c520a4;
  /* 12c5208d mov eax, 1 */
  EAX = (0x1u);
  /* 12c52092 ret  */
  ESPCHK(0x12c51f90u, _esp0);
  ESP += 4; return;
  /* 12c52093 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52096 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c5209d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c520a4:;
  /* 12c520a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c520a8 jne 0x12c520ae */
  if (!C.zf) goto L_12c520ae;
  /* 12c520aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c520ac jmp 0x12c52111 */
  goto L_12c52111;
L_12c520ae:;
  /* 12c520ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c520b1 push edx */
  push32((uint32_t)(EDX));
  /* 12c520b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c520b5 push eax */
  push32((uint32_t)(EAX));
  /* 12c520b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c520b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c520ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c520bd push edx */
  push32((uint32_t)(EDX));
  /* 12c520be call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c520c4u);
  /* 12c520c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c520c6 jne 0x12c520cc */
  if (!C.zf) goto L_12c520cc;
  /* 12c520c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c520ca jmp 0x12c52111 */
  goto L_12c52111;
L_12c520cc:;
  /* 12c520cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c520d0 jne 0x12c520ed */
  if (!C.zf) goto L_12c520ed;
  /* 12c520d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c520d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c520d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c520d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c520db push eax */
  push32((uint32_t)(EAX));
  /* 12c520dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c520de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c520e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c520e2 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c520e8u);
  /* 12c520e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c520eb jmp 0x12c5210a */
  goto L_12c5210a;
L_12c520ed:;
  /* 12c520ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c520f0 push edx */
  push32((uint32_t)(EDX));
  /* 12c520f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c520f4 push eax */
  push32((uint32_t)(EAX));
  /* 12c520f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c520f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c520fa push ecx */
  push32((uint32_t)(ECX));
  /* 12c520fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c520fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c52100 push edx */
  push32((uint32_t)(EDX));
  /* 12c52101 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c52107u);
  /* 12c52107 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c5210a:;
  /* 12c5210a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c5210d jmp 0x12c52111 */
  goto L_12c52111;
L_12c5210f:;
  /* 12c5210f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c52111:;
  /* 12c52111 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12c52114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52117 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c5211e pop edi */
  EDI = (pop32());
  /* 12c5211f pop esi */
  ESI = (pop32());
  /* 12c52120 pop ebx */
  EBX = (pop32());
  /* 12c52121 mov esp, ebp */
  ESP = (EBP);
  /* 12c52123 pop ebp */
  EBP = (pop32());
  /* 12c52124 ret  */
  ESPCHK(0x12c51f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012130 @ 0x12c52130 (398 bytes, 140 insns) */
void f_12c52130(void) {
  FTRACE(0x12c52130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52130 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52131 mov ebp, esp */
  EBP = (ESP);
  /* 12c52133 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c52135 push 0x12c6a868 */
  push32((uint32_t)(0x12c6a868u));
  /* 12c5213a push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c5213f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c52145 push eax */
  push32((uint32_t)(EAX));
  /* 12c52146 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c5214d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52150 push ebx */
  push32((uint32_t)(EBX));
  /* 12c52151 push esi */
  push32((uint32_t)(ESI));
  /* 12c52152 push edi */
  push32((uint32_t)(EDI));
  /* 12c52153 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c52156 cmp dword ptr [0x12c6e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5215d jne 0x12c521a2 */
  if (!C.zf) goto L_12c521a2;
  /* 12c5215f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52161 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52163 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52167 call dword ptr [0x12c70238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70238))), 0x12c5216du);
  /* 12c5216d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c5216f je 0x12c5217d */
  if (C.zf) goto L_12c5217d;
  /* 12c52171 mov dword ptr [0x12c6e7e8], 1 */
  w32((uint32_t)(0x12c6e7e8), (0x1u));
  /* 12c5217b jmp 0x12c521a2 */
  goto L_12c521a2;
L_12c5217d:;
  /* 12c5217d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5217f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52181 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52183 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52185 call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c5218bu);
  /* 12c5218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c5218d je 0x12c5219b */
  if (C.zf) goto L_12c5219b;
  /* 12c5218f mov dword ptr [0x12c6e7e8], 2 */
  w32((uint32_t)(0x12c6e7e8), (0x2u));
  /* 12c52199 jmp 0x12c521a2 */
  goto L_12c521a2;
L_12c5219b:;
  /* 12c5219b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5219d jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c521a2:;
  /* 12c521a2 cmp dword ptr [0x12c6e7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c521a9 jne 0x12c521c6 */
  if (!C.zf) goto L_12c521c6;
  /* 12c521ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c521ae push eax */
  push32((uint32_t)(EAX));
  /* 12c521af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c521b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c521b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c521b6 push edx */
  push32((uint32_t)(EDX));
  /* 12c521b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c521ba push eax */
  push32((uint32_t)(EAX));
  /* 12c521bb call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c521c1u);
  /* 12c521c1 jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c521c6:;
  /* 12c521c6 cmp dword ptr [0x12c6e7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c521cd jne 0x12c522bf */
  if (!C.zf) goto L_12c522bf;
  /* 12c521d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c521d7 jne 0x12c521e2 */
  if (!C.zf) goto L_12c521e2;
  /* 12c521d9 mov ecx, dword ptr [0x12c6e698] */
  ECX = (r32((uint32_t)(0x12c6e698)));
  /* 12c521df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12c521e2:;
  /* 12c521e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c521e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c521e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c521e9 push edx */
  push32((uint32_t)(EDX));
  /* 12c521ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c521ed push eax */
  push32((uint32_t)(EAX));
  /* 12c521ee call dword ptr [0x12c70238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70238))), 0x12c521f4u);
  /* 12c521f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c521f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c521fb jne 0x12c52204 */
  if (!C.zf) goto L_12c52204;
  /* 12c521fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c521ff jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c52204:;
  /* 12c52204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c5220b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c5220e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c52210 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52213 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c52215 call 0x12c45cf0 */
  push32(0x12c5221au); f_12c45cf0();
  /* 12c5221a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12c5221d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c52220 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c52223 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c52226 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c5222d jmp 0x12c52246 */
  goto L_12c52246;
  /* 12c5222f mov eax, 1 */
  EAX = (0x1u);
  /* 12c52234 ret  */
  ESPCHK(0x12c52130u, _esp0);
  ESP += 4; return;
  /* 12c52235 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52238 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c5223f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c52246:;
  /* 12c52246 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5224a jne 0x12c52250 */
  if (!C.zf) goto L_12c52250;
  /* 12c5224c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5224e jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c52250:;
  /* 12c52250 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c52253 push edx */
  push32((uint32_t)(EDX));
  /* 12c52254 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c52257 push eax */
  push32((uint32_t)(EAX));
  /* 12c52258 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5225b push ecx */
  push32((uint32_t)(ECX));
  /* 12c5225c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5225f push edx */
  push32((uint32_t)(EDX));
  /* 12c52260 call dword ptr [0x12c70238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70238))), 0x12c52266u);
  /* 12c52266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52268 jne 0x12c5226e */
  if (!C.zf) goto L_12c5226e;
  /* 12c5226a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5226c jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c5226e:;
  /* 12c5226e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52272 jne 0x12c52296 */
  if (!C.zf) goto L_12c52296;
  /* 12c52274 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52276 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52278 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5227a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5227c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c5227e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c52281 push eax */
  push32((uint32_t)(EAX));
  /* 12c52282 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c52287 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c5228a push ecx */
  push32((uint32_t)(ECX));
  /* 12c5228b call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c52291u);
  /* 12c52291 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c52294 jmp 0x12c522ba */
  goto L_12c522ba;
L_12c52296:;
  /* 12c52296 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52298 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5229a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5229d push edx */
  push32((uint32_t)(EDX));
  /* 12c5229e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c522a1 push eax */
  push32((uint32_t)(EAX));
  /* 12c522a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c522a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c522a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c522a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c522ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c522b0 push edx */
  push32((uint32_t)(EDX));
  /* 12c522b1 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c522b7u);
  /* 12c522b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c522ba:;
  /* 12c522ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c522bd jmp 0x12c522c1 */
  goto L_12c522c1;
L_12c522bf:;
  /* 12c522bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c522c1:;
  /* 12c522c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12c522c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c522c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c522ce pop edi */
  EDI = (pop32());
  /* 12c522cf pop esi */
  ESI = (pop32());
  /* 12c522d0 pop ebx */
  EBX = (pop32());
  /* 12c522d1 mov esp, ebp */
  ESP = (EBP);
  /* 12c522d3 pop ebp */
  EBP = (pop32());
  /* 12c522d4 ret  */
  ESPCHK(0x12c52130u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x12c522e0 (11 bytes, 6 insns) */
void f_12c522e0(void) {
  FTRACE(0x12c522e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c522e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c522e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c522e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c522e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c522e9 pop ebp */
  EBP = (pop32());
  /* 12c522ea ret  */
  ESPCHK(0x12c522e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122f0 @ 0x12c522f0 (147 bytes, 43 insns) */
void f_12c522f0(void) {
  FTRACE(0x12c522f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c522f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c522f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c522f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c522f4 cmp dword ptr [0x12c6e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c522fb jne 0x12c52317 */
  if (!C.zf) goto L_12c52317;
  /* 12c522fd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52301 jl 0x12c52312 */
  if ((C.sf!=C.of)) goto L_12c52312;
  /* 12c52303 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52307 jg 0x12c52312 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c52312;
  /* 12c52309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5230c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5230f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c52312:;
  /* 12c52312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52315 jmp 0x12c5237f */
  goto L_12c5237f;
L_12c52317:;
  /* 12c52317 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c5231c call dword ptr [0x12c70278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70278))), 0x12c52322u);
  /* 12c52322 cmp dword ptr [0x12c6e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52329 je 0x12c52349 */
  if (C.zf) goto L_12c52349;
  /* 12c5232b push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c52330 call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c52336u);
  /* 12c52336 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c52338 call 0x12c46550 */
  push32(0x12c5233du); f_12c46550();
  /* 12c5233d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52340 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c52347 jmp 0x12c52350 */
  goto L_12c52350;
L_12c52349:;
  /* 12c52349 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c52350:;
  /* 12c52350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52353 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52354 call 0x12c52390 */
  push32(0x12c52359u); f_12c52390();
  /* 12c52359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5235c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c5235f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52363 je 0x12c52371 */
  if (C.zf) goto L_12c52371;
  /* 12c52365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c52367 call 0x12c465f0 */
  push32(0x12c5236cu); f_12c465f0();
  /* 12c5236c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5236f jmp 0x12c5237c */
  goto L_12c5237c;
L_12c52371:;
  /* 12c52371 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c52376 call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c5237cu);
L_12c5237c:;
  /* 12c5237c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12c5237f:;
  /* 12c5237f mov esp, ebp */
  ESP = (EBP);
  /* 12c52381 pop ebp */
  EBP = (pop32());
  /* 12c52382 ret  */
  ESPCHK(0x12c522f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x12c52390 (299 bytes, 91 insns) */
void f_12c52390(void) {
  FTRACE(0x12c52390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52390 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52391 mov ebp, esp */
  EBP = (ESP);
  /* 12c52393 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52396 cmp dword ptr [0x12c6e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5239d jne 0x12c523bc */
  if (!C.zf) goto L_12c523bc;
  /* 12c5239f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c523a3 jl 0x12c523b4 */
  if ((C.sf!=C.of)) goto L_12c523b4;
  /* 12c523a5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c523a9 jg 0x12c523b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c523b4;
  /* 12c523ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c523ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c523b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c523b4:;
  /* 12c523b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c523b7 jmp 0x12c524b7 */
  goto L_12c524b7;
L_12c523bc:;
  /* 12c523bc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c523c3 jge 0x12c52403 */
  if ((C.sf==C.of)) goto L_12c52403;
  /* 12c523c5 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c523cc jle 0x12c523e1 */
  if ((C.zf||C.sf!=C.of)) goto L_12c523e1;
  /* 12c523ce push 1 */
  push32((uint32_t)(0x1u));
  /* 12c523d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c523d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c523d4 call 0x12c48b60 */
  push32(0x12c523d9u); f_12c48b60();
  /* 12c523d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c523dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c523df jmp 0x12c523f5 */
  goto L_12c523f5;
L_12c523e1:;
  /* 12c523e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c523e4 mov eax, dword ptr [0x12c6cc98] */
  EAX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c523e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c523eb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c523ef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c523f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c523f5:;
  /* 12c523f5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c523f9 jne 0x12c52403 */
  if (!C.zf) goto L_12c52403;
  /* 12c523fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c523fe jmp 0x12c524b7 */
  goto L_12c524b7;
L_12c52403:;
  /* 12c52403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52406 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c52409 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c5240f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c52415 mov eax, dword ptr [0x12c6cc98] */
  EAX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c5241a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c5241c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c52420 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c52426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c52428 je 0x12c5244c */
  if (C.zf) goto L_12c5244c;
  /* 12c5242a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5242d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c52430 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c52436 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12c52439 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c5243c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12c5243f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12c52443 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c5244a jmp 0x12c5245d */
  goto L_12c5245d;
L_12c5244c:;
  /* 12c5244c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c5244f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12c52452 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12c52456 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12c5245d:;
  /* 12c5245d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c5245f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52461 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c52463 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12c52466 push edx */
  push32((uint32_t)(EDX));
  /* 12c52467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5246a push eax */
  push32((uint32_t)(EAX));
  /* 12c5246b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c5246e push ecx */
  push32((uint32_t)(ECX));
  /* 12c5246f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c52474 mov edx, dword ptr [0x12c6e688] */
  EDX = (r32((uint32_t)(0x12c6e688)));
  /* 12c5247a push edx */
  push32((uint32_t)(EDX));
  /* 12c5247b call 0x12c4af40 */
  push32(0x12c52480u); f_12c4af40();
  /* 12c52480 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c52486 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5248a jne 0x12c52491 */
  if (!C.zf) goto L_12c52491;
  /* 12c5248c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5248f jmp 0x12c524b7 */
  goto L_12c524b7;
L_12c52491:;
  /* 12c52491 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52495 jne 0x12c524a1 */
  if (!C.zf) goto L_12c524a1;
  /* 12c52497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5249a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c5249f jmp 0x12c524b7 */
  goto L_12c524b7;
L_12c524a1:;
  /* 12c524a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c524a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c524a9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12c524ac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c524b2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c524b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12c524b7:;
  /* 12c524b7 mov esp, ebp */
  ESP = (EBP);
  /* 12c524b9 pop ebp */
  EBP = (pop32());
  /* 12c524ba ret  */
  ESPCHK(0x12c52390u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12c524c0 (52 bytes, 19 insns) */
void f_12c524c0(void) {
  FTRACE(0x12c524c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c524c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c524c4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c524c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c524ca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c524ce jne 0x12c524d9 */
  if (!C.zf) goto L_12c524d9;
  /* 12c524d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c524d4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c524d6 ret 0x10 */
  ESPCHK(0x12c524c0u, _esp0);
  ESP += 20; return;
L_12c524d9:;
  /* 12c524d9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c524da mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c524dc mov ebx, eax */
  EBX = (EAX);
  /* 12c524de mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c524e2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c524e6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c524e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c524ec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c524ee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c524f0 pop ebx */
  EBX = (pop32());
  /* 12c524f1 ret 0x10 */
  ESPCHK(0x12c524c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012500 @ 0x12c52500 (46 bytes, 18 insns) */
void f_12c52500(void) {
  FTRACE(0x12c52500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52500 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52501 mov ebp, esp */
  EBP = (ESP);
  /* 12c52503 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52504 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c52506 call 0x12c46550 */
  push32(0x12c5250bu); f_12c46550();
  /* 12c5250b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5250e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52511 push eax */
  push32((uint32_t)(EAX));
  /* 12c52512 call 0x12c52530 */
  push32(0x12c52517u); f_12c52530();
  /* 12c52517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5251a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c5251d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c5251f call 0x12c465f0 */
  push32(0x12c52524u); f_12c465f0();
  /* 12c52524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5252a mov esp, ebp */
  ESP = (EBP);
  /* 12c5252c pop ebp */
  EBP = (pop32());
  /* 12c5252d ret  */
  ESPCHK(0x12c52500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12c52530 (198 bytes, 69 insns) */
void f_12c52530(void) {
  FTRACE(0x12c52530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52530 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52531 mov ebp, esp */
  EBP = (ESP);
  /* 12c52533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52536 mov eax, dword ptr [0x12c6e4a4] */
  EAX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c5253b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c5253e cmp dword ptr [0x12c6ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52545 jne 0x12c5254e */
  if (!C.zf) goto L_12c5254e;
  /* 12c52547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52549 jmp 0x12c525f2 */
  goto L_12c525f2;
L_12c5254e:;
  /* 12c5254e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52552 jne 0x12c52576 */
  if (!C.zf) goto L_12c52576;
  /* 12c52554 cmp dword ptr [0x12c6e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5255b je 0x12c52576 */
  if (C.zf) goto L_12c52576;
  /* 12c5255d call 0x12c52650 */
  push32(0x12c52562u); f_12c52650();
  /* 12c52562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52564 je 0x12c5256d */
  if (C.zf) goto L_12c5256d;
  /* 12c52566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52568 jmp 0x12c525f2 */
  goto L_12c525f2;
L_12c5256d:;
  /* 12c5256d mov ecx, dword ptr [0x12c6e4a4] */
  ECX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52573 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c52576:;
  /* 12c52576 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5257a je 0x12c525f0 */
  if (C.zf) goto L_12c525f0;
  /* 12c5257c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52580 je 0x12c525f0 */
  if (C.zf) goto L_12c525f0;
  /* 12c52582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52585 push edx */
  push32((uint32_t)(EDX));
  /* 12c52586 call 0x12c45980 */
  push32(0x12c5258bu); f_12c45980();
  /* 12c5258b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5258e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c52591:;
  /* 12c52591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52594 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52597 je 0x12c525f0 */
  if (C.zf) goto L_12c525f0;
  /* 12c52599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c5259c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c5259e push edx */
  push32((uint32_t)(EDX));
  /* 12c5259f call 0x12c45980 */
  push32(0x12c525a4u); f_12c45980();
  /* 12c525a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c525a7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c525aa jbe 0x12c525e5 */
  if ((C.cf||C.zf)) goto L_12c525e5;
  /* 12c525ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c525af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c525b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c525b4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12c525b8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c525bb jne 0x12c525e5 */
  if (!C.zf) goto L_12c525e5;
  /* 12c525bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c525c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c525c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c525c4 push edx */
  push32((uint32_t)(EDX));
  /* 12c525c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c525c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c525ca push ecx */
  push32((uint32_t)(ECX));
  /* 12c525cb call 0x12c52600 */
  push32(0x12c525d0u); f_12c52600();
  /* 12c525d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c525d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c525d5 jne 0x12c525e5 */
  if (!C.zf) goto L_12c525e5;
  /* 12c525d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c525da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c525dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c525df lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12c525e3 jmp 0x12c525f2 */
  goto L_12c525f2;
L_12c525e5:;
  /* 12c525e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c525e8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c525eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c525ee jmp 0x12c52591 */
  goto L_12c52591;
L_12c525f0:;
  /* 12c525f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c525f2:;
  /* 12c525f2 mov esp, ebp */
  ESP = (EBP);
  /* 12c525f4 pop ebp */
  EBP = (pop32());
  /* 12c525f5 ret  */
  ESPCHK(0x12c52530u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12c52600 (79 bytes, 32 insns) */
void f_12c52600(void) {
  FTRACE(0x12c52600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52600 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52601 mov ebp, esp */
  EBP = (ESP);
  /* 12c52603 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52608 jne 0x12c5260e */
  if (!C.zf) goto L_12c5260e;
  /* 12c5260a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5260c jmp 0x12c5264b */
  goto L_12c5264b;
L_12c5260e:;
  /* 12c5260e mov eax, dword ptr [0x12c6fb64] */
  EAX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c52613 push eax */
  push32((uint32_t)(EAX));
  /* 12c52614 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c52617 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52618 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c5261b push edx */
  push32((uint32_t)(EDX));
  /* 12c5261c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c5261f push eax */
  push32((uint32_t)(EAX));
  /* 12c52620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52623 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52624 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52626 mov edx, dword ptr [0x12c6fe04] */
  EDX = (r32((uint32_t)(0x12c6fe04)));
  /* 12c5262c push edx */
  push32((uint32_t)(EDX));
  /* 12c5262d call 0x12c52700 */
  push32(0x12c52632u); f_12c52700();
  /* 12c52632 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c52638 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5263c jne 0x12c52645 */
  if (!C.zf) goto L_12c52645;
  /* 12c5263e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12c52643 jmp 0x12c5264b */
  goto L_12c5264b;
L_12c52645:;
  /* 12c52645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52648 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c5264b:;
  /* 12c5264b mov esp, ebp */
  ESP = (EBP);
  /* 12c5264d pop ebp */
  EBP = (pop32());
  /* 12c5264e ret  */
  ESPCHK(0x12c52600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012650 @ 0x12c52650 (174 bytes, 66 insns) */
void f_12c52650(void) {
  FTRACE(0x12c52650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52650 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52651 mov ebp, esp */
  EBP = (ESP);
  /* 12c52653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52656 mov eax, dword ptr [0x12c6e4ac] */
  EAX = (r32((uint32_t)(0x12c6e4ac)));
  /* 12c5265b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c5265e:;
  /* 12c5265e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52661 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52664 je 0x12c526f8 */
  if (C.zf) goto L_12c526f8;
  /* 12c5266a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5266c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5266e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52672 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c52674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52677 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c52679 push eax */
  push32((uint32_t)(EAX));
  /* 12c5267a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5267c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c5267e call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c52684u);
  /* 12c52684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c52687 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5268b jne 0x12c52692 */
  if (!C.zf) goto L_12c52692;
  /* 12c5268d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52690 jmp 0x12c526fa */
  goto L_12c526fa;
L_12c52692:;
  /* 12c52692 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c52694 push 0x12c6a874 */
  push32((uint32_t)(0x12c6a874u));
  /* 12c52699 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c5269b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c5269e push ecx */
  push32((uint32_t)(ECX));
  /* 12c5269f call 0x12c42b50 */
  push32(0x12c526a4u); f_12c42b50();
  /* 12c526a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c526a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c526aa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c526ae jne 0x12c526b5 */
  if (!C.zf) goto L_12c526b5;
  /* 12c526b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c526b3 jmp 0x12c526fa */
  goto L_12c526fa;
L_12c526b5:;
  /* 12c526b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c526b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c526b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c526bc push edx */
  push32((uint32_t)(EDX));
  /* 12c526bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c526c0 push eax */
  push32((uint32_t)(EAX));
  /* 12c526c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c526c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c526c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c526c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c526c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c526cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c526cd call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c526d3u);
  /* 12c526d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c526d5 jne 0x12c526dc */
  if (!C.zf) goto L_12c526dc;
  /* 12c526d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c526da jmp 0x12c526fa */
  goto L_12c526fa;
L_12c526dc:;
  /* 12c526dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c526de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c526e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c526e2 call 0x12c52b50 */
  push32(0x12c526e7u); f_12c52b50();
  /* 12c526e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c526ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c526ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c526f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c526f3 jmp 0x12c5265e */
  goto L_12c5265e;
L_12c526f8:;
  /* 12c526f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c526fa:;
  /* 12c526fa mov esp, ebp */
  ESP = (EBP);
  /* 12c526fc pop ebp */
  EBP = (pop32());
  /* 12c526fd ret  */
  ESPCHK(0x12c52650u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x12c52700 (970 bytes, 340 insns) */
void f_12c52700(void) {
  FTRACE(0x12c52700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52701 mov ebp, esp */
  EBP = (ESP);
  /* 12c52703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c52705 push 0x12c6a8c8 */
  push32((uint32_t)(0x12c6a8c8u));
  /* 12c5270a push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c5270f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c52715 push eax */
  push32((uint32_t)(EAX));
  /* 12c52716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c5271d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52720 push ebx */
  push32((uint32_t)(EBX));
  /* 12c52721 push esi */
  push32((uint32_t)(ESI));
  /* 12c52722 push edi */
  push32((uint32_t)(EDI));
  /* 12c52723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c52726 cmp dword ptr [0x12c6e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5272d jne 0x12c52786 */
  if (!C.zf) goto L_12c52786;
  /* 12c5272f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52731 push 0x12c69f24 */
  push32((uint32_t)(0x12c69f24u));
  /* 12c52736 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52738 push 0x12c69f24 */
  push32((uint32_t)(0x12c69f24u));
  /* 12c5273d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5273f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52741 call dword ptr [0x12c70230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70230))), 0x12c52747u);
  /* 12c52747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52749 je 0x12c52757 */
  if (C.zf) goto L_12c52757;
  /* 12c5274b mov dword ptr [0x12c6e7ec], 1 */
  w32((uint32_t)(0x12c6e7ec), (0x1u));
  /* 12c52755 jmp 0x12c52786 */
  goto L_12c52786;
L_12c52757:;
  /* 12c52757 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52759 push 0x12c69f20 */
  push32((uint32_t)(0x12c69f20u));
  /* 12c5275e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52760 push 0x12c69f20 */
  push32((uint32_t)(0x12c69f20u));
  /* 12c52765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52769 call dword ptr [0x12c70234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70234))), 0x12c5276fu);
  /* 12c5276f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52771 je 0x12c5277f */
  if (C.zf) goto L_12c5277f;
  /* 12c52773 mov dword ptr [0x12c6e7ec], 2 */
  w32((uint32_t)(0x12c6e7ec), (0x2u));
  /* 12c5277d jmp 0x12c52786 */
  goto L_12c52786;
L_12c5277f:;
  /* 12c5277f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52781 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52786:;
  /* 12c52786 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5278a jle 0x12c5279f */
  if ((C.zf||C.sf!=C.of)) goto L_12c5279f;
  /* 12c5278c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c5278f push eax */
  push32((uint32_t)(EAX));
  /* 12c52790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c52793 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52794 call 0x12c52b00 */
  push32(0x12c52799u); f_12c52b00();
  /* 12c52799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5279c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c5279f:;
  /* 12c5279f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c527a3 jle 0x12c527b8 */
  if ((C.zf||C.sf!=C.of)) goto L_12c527b8;
  /* 12c527a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c527a8 push edx */
  push32((uint32_t)(EDX));
  /* 12c527a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c527ac push eax */
  push32((uint32_t)(EAX));
  /* 12c527ad call 0x12c52b00 */
  push32(0x12c527b2u); f_12c52b00();
  /* 12c527b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c527b5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12c527b8:;
  /* 12c527b8 cmp dword ptr [0x12c6e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c527bf jne 0x12c527e4 */
  if (!C.zf) goto L_12c527e4;
  /* 12c527c1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c527c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c527c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c527c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c527c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c527cc push eax */
  push32((uint32_t)(EAX));
  /* 12c527cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c527d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c527d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c527d4 push edx */
  push32((uint32_t)(EDX));
  /* 12c527d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c527d8 push eax */
  push32((uint32_t)(EAX));
  /* 12c527d9 call dword ptr [0x12c70234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70234))), 0x12c527dfu);
  /* 12c527df jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c527e4:;
  /* 12c527e4 cmp dword ptr [0x12c6e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c527eb jne 0x12c52ae2 */
  if (!C.zf) goto L_12c52ae2;
  /* 12c527f1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c527f5 jne 0x12c52800 */
  if (!C.zf) goto L_12c52800;
  /* 12c527f7 mov ecx, dword ptr [0x12c6e698] */
  ECX = (r32((uint32_t)(0x12c6e698)));
  /* 12c527fd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12c52800:;
  /* 12c52800 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52804 je 0x12c52810 */
  if (C.zf) goto L_12c52810;
  /* 12c52806 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5280a jne 0x12c5298c */
  if (!C.zf) goto L_12c5298c;
L_12c52810:;
  /* 12c52810 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c52813 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52816 jne 0x12c52822 */
  if (!C.zf) goto L_12c52822;
  /* 12c52818 mov eax, 2 */
  EAX = (0x2u);
  /* 12c5281d jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52822:;
  /* 12c52822 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52826 jle 0x12c52832 */
  if ((C.zf||C.sf!=C.of)) goto L_12c52832;
  /* 12c52828 mov eax, 1 */
  EAX = (0x1u);
  /* 12c5282d jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52832:;
  /* 12c52832 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52836 jle 0x12c52842 */
  if ((C.zf||C.sf!=C.of)) goto L_12c52842;
  /* 12c52838 mov eax, 3 */
  EAX = (0x3u);
  /* 12c5283d jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52842:;
  /* 12c52842 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12c52845 push eax */
  push32((uint32_t)(EAX));
  /* 12c52846 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c52849 push ecx */
  push32((uint32_t)(ECX));
  /* 12c5284a call dword ptr [0x12c70310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70310))), 0x12c52850u);
  /* 12c52850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52852 jne 0x12c5285b */
  if (!C.zf) goto L_12c5285b;
  /* 12c52854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52856 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c5285b:;
  /* 12c5285b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5285f jne 0x12c52867 */
  if (!C.zf) goto L_12c52867;
  /* 12c52861 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52865 je 0x12c52894 */
  if (C.zf) goto L_12c52894;
L_12c52867:;
  /* 12c52867 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5286b jne 0x12c52873 */
  if (!C.zf) goto L_12c52873;
  /* 12c5286d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52871 je 0x12c52894 */
  if (C.zf) goto L_12c52894;
L_12c52873:;
  /* 12c52873 push 0x12c6a888 */
  push32((uint32_t)(0x12c6a888u));
  /* 12c52878 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5287a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12c5287f push 0x12c6a880 */
  push32((uint32_t)(0x12c6a880u));
  /* 12c52884 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52886 call 0x12c41c10 */
  push32(0x12c5288bu); f_12c41c10();
  /* 12c5288b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5288e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52891 jne 0x12c52894 */
  if (!C.zf) goto L_12c52894;
  /* 12c52893 int3  */
  x86_unimpl("int3 @ 0x12c52893");
L_12c52894:;
  /* 12c52894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c52896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52898 jne 0x12c5285b */
  if (!C.zf) goto L_12c5285b;
  /* 12c5289a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5289e jle 0x12c52913 */
  if ((C.zf||C.sf!=C.of)) goto L_12c52913;
  /* 12c528a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c528a4 jae 0x12c528b0 */
  if (!C.cf) goto L_12c528b0;
  /* 12c528a6 mov eax, 3 */
  EAX = (0x3u);
  /* 12c528ab jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c528b0:;
  /* 12c528b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12c528b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12c528b6 jmp 0x12c528c1 */
  goto L_12c528c1;
L_12c528b8:;
  /* 12c528b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c528bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c528be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12c528c1:;
  /* 12c528c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c528c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c528c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c528c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c528ca je 0x12c52909 */
  if (C.zf) goto L_12c52909;
  /* 12c528cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c528cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c528d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c528d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c528d6 je 0x12c52909 */
  if (C.zf) goto L_12c52909;
  /* 12c528d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c528db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c528dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c528df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c528e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c528e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c528e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c528e8 jl 0x12c52907 */
  if ((C.sf!=C.of)) goto L_12c52907;
  /* 12c528ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c528ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c528ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c528f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c528f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c528f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c528f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c528fb jg 0x12c52907 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c52907;
  /* 12c528fd mov eax, 2 */
  EAX = (0x2u);
  /* 12c52902 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52907:;
  /* 12c52907 jmp 0x12c528b8 */
  goto L_12c528b8;
L_12c52909:;
  /* 12c52909 mov eax, 3 */
  EAX = (0x3u);
  /* 12c5290e jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52913:;
  /* 12c52913 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52917 jle 0x12c5298c */
  if ((C.zf||C.sf!=C.of)) goto L_12c5298c;
  /* 12c52919 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c5291d jae 0x12c52929 */
  if (!C.cf) goto L_12c52929;
  /* 12c5291f mov eax, 1 */
  EAX = (0x1u);
  /* 12c52924 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52929:;
  /* 12c52929 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12c5292c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12c5292f jmp 0x12c5293a */
  goto L_12c5293a;
L_12c52931:;
  /* 12c52931 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c52934 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52937 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12c5293a:;
  /* 12c5293a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c5293d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c5293f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c52941 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52943 je 0x12c52982 */
  if (C.zf) goto L_12c52982;
  /* 12c52945 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c52948 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c5294a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c5294d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c5294f je 0x12c52982 */
  if (C.zf) goto L_12c52982;
  /* 12c52951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c52954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52956 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c52958 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c5295b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c5295d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c5295f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52961 jl 0x12c52980 */
  if ((C.sf!=C.of)) goto L_12c52980;
  /* 12c52963 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c52966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c52968 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c5296a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c5296d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c5296f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c52972 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52974 jg 0x12c52980 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c52980;
  /* 12c52976 mov eax, 2 */
  EAX = (0x2u);
  /* 12c5297b jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52980:;
  /* 12c52980 jmp 0x12c52931 */
  goto L_12c52931;
L_12c52982:;
  /* 12c52982 mov eax, 1 */
  EAX = (0x1u);
  /* 12c52987 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c5298c:;
  /* 12c5298c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c5298e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52990 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c52993 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52994 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c52997 push edx */
  push32((uint32_t)(EDX));
  /* 12c52998 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c5299a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c5299d push eax */
  push32((uint32_t)(EAX));
  /* 12c5299e call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c529a4u);
  /* 12c529a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c529a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c529ab jne 0x12c529b4 */
  if (!C.zf) goto L_12c529b4;
  /* 12c529ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c529af jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c529b4:;
  /* 12c529b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c529bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c529be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c529c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c529c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c529c5 call 0x12c45cf0 */
  push32(0x12c529cau); f_12c45cf0();
  /* 12c529ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12c529cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c529d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12c529d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c529d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c529dd jmp 0x12c529f6 */
  goto L_12c529f6;
  /* 12c529df mov eax, 1 */
  EAX = (0x1u);
  /* 12c529e4 ret  */
  ESPCHK(0x12c52700u, _esp0);
  ESP += 4; return;
  /* 12c529e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c529e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c529ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c529f6:;
  /* 12c529f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c529fa jne 0x12c52a03 */
  if (!C.zf) goto L_12c52a03;
  /* 12c529fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c529fe jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52a03:;
  /* 12c52a03 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c52a06 push edx */
  push32((uint32_t)(EDX));
  /* 12c52a07 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c52a0a push eax */
  push32((uint32_t)(EAX));
  /* 12c52a0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c52a0e push ecx */
  push32((uint32_t)(ECX));
  /* 12c52a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c52a12 push edx */
  push32((uint32_t)(EDX));
  /* 12c52a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52a15 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c52a18 push eax */
  push32((uint32_t)(EAX));
  /* 12c52a19 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c52a1fu);
  /* 12c52a1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52a21 jne 0x12c52a2a */
  if (!C.zf) goto L_12c52a2a;
  /* 12c52a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52a25 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52a2a:;
  /* 12c52a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c52a2e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c52a31 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52a32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c52a35 push edx */
  push32((uint32_t)(EDX));
  /* 12c52a36 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c52a38 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c52a3b push eax */
  push32((uint32_t)(EAX));
  /* 12c52a3c call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c52a42u);
  /* 12c52a42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c52a45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52a49 jne 0x12c52a52 */
  if (!C.zf) goto L_12c52a52;
  /* 12c52a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52a4d jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52a52:;
  /* 12c52a52 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c52a59 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c52a5c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c52a5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52a61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c52a63 call 0x12c45cf0 */
  push32(0x12c52a68u); f_12c45cf0();
  /* 12c52a68 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12c52a6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c52a6e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12c52a71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c52a74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c52a7b jmp 0x12c52a94 */
  goto L_12c52a94;
  /* 12c52a7d mov eax, 1 */
  EAX = (0x1u);
  /* 12c52a82 ret  */
  ESPCHK(0x12c52700u, _esp0);
  ESP += 4; return;
  /* 12c52a83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52a86 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12c52a8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c52a94:;
  /* 12c52a94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52a98 jne 0x12c52a9e */
  if (!C.zf) goto L_12c52a9e;
  /* 12c52a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52a9c jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52a9e:;
  /* 12c52a9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c52aa1 push edx */
  push32((uint32_t)(EDX));
  /* 12c52aa2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c52aa5 push eax */
  push32((uint32_t)(EAX));
  /* 12c52aa6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c52aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52aaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c52aad push edx */
  push32((uint32_t)(EDX));
  /* 12c52aae push 1 */
  push32((uint32_t)(0x1u));
  /* 12c52ab0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c52ab3 push eax */
  push32((uint32_t)(EAX));
  /* 12c52ab4 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c52abau);
  /* 12c52aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52abc jne 0x12c52ac2 */
  if (!C.zf) goto L_12c52ac2;
  /* 12c52abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52ac0 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52ac2:;
  /* 12c52ac2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c52ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52ac6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c52ac9 push edx */
  push32((uint32_t)(EDX));
  /* 12c52aca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c52acd push eax */
  push32((uint32_t)(EAX));
  /* 12c52ace mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c52ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52ad2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52ad5 push edx */
  push32((uint32_t)(EDX));
  /* 12c52ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52ad9 push eax */
  push32((uint32_t)(EAX));
  /* 12c52ada call dword ptr [0x12c70230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70230))), 0x12c52ae0u);
  /* 12c52ae0 jmp 0x12c52ae4 */
  goto L_12c52ae4;
L_12c52ae2:;
  /* 12c52ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c52ae4:;
  /* 12c52ae4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12c52ae7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52aea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c52af1 pop edi */
  EDI = (pop32());
  /* 12c52af2 pop esi */
  ESI = (pop32());
  /* 12c52af3 pop ebx */
  EBX = (pop32());
  /* 12c52af4 mov esp, ebp */
  ESP = (EBP);
  /* 12c52af6 pop ebp */
  EBP = (pop32());
  /* 12c52af7 ret  */
  ESPCHK(0x12c52700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x12c52b00 (80 bytes, 32 insns) */
void f_12c52b00(void) {
  FTRACE(0x12c52b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52b01 mov ebp, esp */
  EBP = (ESP);
  /* 12c52b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52b09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c52b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52b0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c52b12:;
  /* 12c52b12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52b15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52b18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c52b1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52b20 je 0x12c52b37 */
  if (C.zf) goto L_12c52b37;
  /* 12c52b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52b25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c52b28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52b2a je 0x12c52b37 */
  if (C.zf) goto L_12c52b37;
  /* 12c52b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52b2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52b32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c52b35 jmp 0x12c52b12 */
  goto L_12c52b12;
L_12c52b37:;
  /* 12c52b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52b3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c52b3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52b3f jne 0x12c52b49 */
  if (!C.zf) goto L_12c52b49;
  /* 12c52b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52b44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52b47 jmp 0x12c52b4c */
  goto L_12c52b4c;
L_12c52b49:;
  /* 12c52b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12c52b4c:;
  /* 12c52b4c mov esp, ebp */
  ESP = (EBP);
  /* 12c52b4e pop ebp */
  EBP = (pop32());
  /* 12c52b4f ret  */
  ESPCHK(0x12c52b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x12c52b50 (736 bytes, 224 insns) */
void f_12c52b50(void) {
  FTRACE(0x12c52b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52b51 mov ebp, esp */
  EBP = (ESP);
  /* 12c52b53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52b56 push esi */
  push32((uint32_t)(ESI));
  /* 12c52b57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52b5b je 0x12c52b7c */
  if (C.zf) goto L_12c52b7c;
  /* 12c52b5d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c52b5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52b62 push eax */
  push32((uint32_t)(EAX));
  /* 12c52b63 call 0x12c52fa0 */
  push32(0x12c52b68u); f_12c52fa0();
  /* 12c52b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52b6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c52b6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52b72 je 0x12c52b7c */
  if (C.zf) goto L_12c52b7c;
  /* 12c52b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52b77 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52b7a jne 0x12c52b84 */
  if (!C.zf) goto L_12c52b84;
L_12c52b7c:;
  /* 12c52b7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52b7f jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52b84:;
  /* 12c52b84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52b87 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c52b8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c52b8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c52b90 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c52b93 mov ecx, dword ptr [0x12c6e4a4] */
  ECX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52b99 cmp ecx, dword ptr [0x12c6e4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6e4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52b9f jne 0x12c52bb5 */
  if (!C.zf) goto L_12c52bb5;
  /* 12c52ba1 mov edx, dword ptr [0x12c6e4a4] */
  EDX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52ba7 push edx */
  push32((uint32_t)(EDX));
  /* 12c52ba8 call 0x12c52eb0 */
  push32(0x12c52badu); f_12c52eb0();
  /* 12c52bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52bb0 mov dword ptr [0x12c6e4a4], eax */
  w32((uint32_t)(0x12c6e4a4), (EAX));
L_12c52bb5:;
  /* 12c52bb5 cmp dword ptr [0x12c6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52bbc jne 0x12c52c75 */
  if (!C.zf) goto L_12c52c75;
  /* 12c52bc2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52bc6 je 0x12c52be7 */
  if (C.zf) goto L_12c52be7;
  /* 12c52bc8 cmp dword ptr [0x12c6e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52bcf je 0x12c52be7 */
  if (C.zf) goto L_12c52be7;
  /* 12c52bd1 call 0x12c52650 */
  push32(0x12c52bd6u); f_12c52650();
  /* 12c52bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52bd8 je 0x12c52be2 */
  if (C.zf) goto L_12c52be2;
  /* 12c52bda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52bdd jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52be2:;
  /* 12c52be2 jmp 0x12c52c75 */
  goto L_12c52c75;
L_12c52be7:;
  /* 12c52be7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52beb je 0x12c52bf4 */
  if (C.zf) goto L_12c52bf4;
  /* 12c52bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52bef jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52bf4:;
  /* 12c52bf4 cmp dword ptr [0x12c6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52bfb jne 0x12c52c34 */
  if (!C.zf) goto L_12c52c34;
  /* 12c52bfd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12c52c02 push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52c09 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c52c0b call 0x12c42b50 */
  push32(0x12c52c10u); f_12c42b50();
  /* 12c52c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52c13 mov dword ptr [0x12c6e4a4], eax */
  w32((uint32_t)(0x12c6e4a4), (EAX));
  /* 12c52c18 cmp dword ptr [0x12c6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52c1f jne 0x12c52c29 */
  if (!C.zf) goto L_12c52c29;
  /* 12c52c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52c24 jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52c29:;
  /* 12c52c29 mov eax, dword ptr [0x12c6e4a4] */
  EAX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52c2e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c52c34:;
  /* 12c52c34 cmp dword ptr [0x12c6e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52c3b jne 0x12c52c75 */
  if (!C.zf) goto L_12c52c75;
  /* 12c52c3d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12c52c42 push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52c49 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c52c4b call 0x12c42b50 */
  push32(0x12c52c50u); f_12c42b50();
  /* 12c52c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52c53 mov dword ptr [0x12c6e4ac], eax */
  w32((uint32_t)(0x12c6e4ac), (EAX));
  /* 12c52c58 cmp dword ptr [0x12c6e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52c5f jne 0x12c52c69 */
  if (!C.zf) goto L_12c52c69;
  /* 12c52c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52c64 jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52c69:;
  /* 12c52c69 mov ecx, dword ptr [0x12c6e4ac] */
  ECX = (r32((uint32_t)(0x12c6e4ac)));
  /* 12c52c6f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12c52c75:;
  /* 12c52c75 mov edx, dword ptr [0x12c6e4a4] */
  EDX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52c7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c52c7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52c81 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52c84 push eax */
  push32((uint32_t)(EAX));
  /* 12c52c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52c88 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52c89 call 0x12c52e30 */
  push32(0x12c52c8eu); f_12c52e30();
  /* 12c52c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52c91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c52c94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52c98 jl 0x12c52d31 */
  if ((C.sf!=C.of)) goto L_12c52d31;
  /* 12c52c9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52ca1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52ca4 je 0x12c52d31 */
  if (C.zf) goto L_12c52d31;
  /* 12c52caa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52cae je 0x12c52d23 */
  if (C.zf) goto L_12c52d23;
  /* 12c52cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52cb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52cb8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c52cbb push edx */
  push32((uint32_t)(EDX));
  /* 12c52cbc call 0x12c435e0 */
  push32(0x12c52cc1u); f_12c435e0();
  /* 12c52cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52cc4 jmp 0x12c52ccf */
  goto L_12c52ccf;
L_12c52cc6:;
  /* 12c52cc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52cc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52ccc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c52ccf:;
  /* 12c52ccf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52cd2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52cd5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52cd9 je 0x12c52cf0 */
  if (C.zf) goto L_12c52cf0;
  /* 12c52cdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52cde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52ce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52ce4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52ce7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12c52ceb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12c52cee jmp 0x12c52cc6 */
  goto L_12c52cc6;
L_12c52cf0:;
  /* 12c52cf0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12c52cf5 push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52cff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c52d02 push eax */
  push32((uint32_t)(EAX));
  /* 12c52d03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d06 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52d07 call 0x12c42fe0 */
  push32(0x12c52d0cu); f_12c42fe0();
  /* 12c52d0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52d0f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c52d12 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52d16 je 0x12c52d21 */
  if (C.zf) goto L_12c52d21;
  /* 12c52d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d1b mov dword ptr [0x12c6e4a4], edx */
  w32((uint32_t)(0x12c6e4a4), (EDX));
L_12c52d21:;
  /* 12c52d21 jmp 0x12c52d2f */
  goto L_12c52d2f;
L_12c52d23:;
  /* 12c52d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52d26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52d2c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12c52d2f:;
  /* 12c52d2f jmp 0x12c52da4 */
  goto L_12c52da4;
L_12c52d31:;
  /* 12c52d31 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52d35 jne 0x12c52d9d */
  if (!C.zf) goto L_12c52d9d;
  /* 12c52d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52d3b jge 0x12c52d45 */
  if ((C.sf==C.of)) goto L_12c52d45;
  /* 12c52d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52d40 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c52d42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c52d45:;
  /* 12c52d45 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12c52d4a push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52d54 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12c52d5b push edx */
  push32((uint32_t)(EDX));
  /* 12c52d5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d5f push eax */
  push32((uint32_t)(EAX));
  /* 12c52d60 call 0x12c42fe0 */
  push32(0x12c52d65u); f_12c42fe0();
  /* 12c52d65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52d68 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c52d6b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52d6f jne 0x12c52d79 */
  if (!C.zf) goto L_12c52d79;
  /* 12c52d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52d74 jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52d79:;
  /* 12c52d79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52d7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52d82 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12c52d85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52d88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d8b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12c52d93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52d96 mov dword ptr [0x12c6e4a4], eax */
  w32((uint32_t)(0x12c6e4a4), (EAX));
  /* 12c52d9b jmp 0x12c52da4 */
  goto L_12c52da4;
L_12c52d9d:;
  /* 12c52d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52d9f jmp 0x12c52e2b */
  goto L_12c52e2b;
L_12c52da4:;
  /* 12c52da4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52da8 je 0x12c52e29 */
  if (C.zf) goto L_12c52e29;
  /* 12c52daa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12c52daf push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52db9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52dba call 0x12c45980 */
  push32(0x12c52dbfu); f_12c45980();
  /* 12c52dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52dc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52dc5 push eax */
  push32((uint32_t)(EAX));
  /* 12c52dc6 call 0x12c42b50 */
  push32(0x12c52dcbu); f_12c42b50();
  /* 12c52dcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52dce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c52dd1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52dd5 je 0x12c52e29 */
  if (C.zf) goto L_12c52e29;
  /* 12c52dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52dda push edx */
  push32((uint32_t)(EDX));
  /* 12c52ddb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52dde push eax */
  push32((uint32_t)(EAX));
  /* 12c52ddf call 0x12c45b00 */
  push32(0x12c52de4u); f_12c45b00();
  /* 12c52de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52de7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c52dea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52ded mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52df0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52df2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c52df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52df8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c52dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52dfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52e01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c52e04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c52e07 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c52e09 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52e0b not edx */
  EDX = (~(EDX));
  /* 12c52e0d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c52e10 push edx */
  push32((uint32_t)(EDX));
  /* 12c52e11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52e14 push eax */
  push32((uint32_t)(EAX));
  /* 12c52e15 call dword ptr [0x12c7022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7022c))), 0x12c52e1bu);
  /* 12c52e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52e1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52e20 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52e21 call 0x12c435e0 */
  push32(0x12c52e26u); f_12c435e0();
  /* 12c52e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c52e29:;
  /* 12c52e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c52e2b:;
  /* 12c52e2b pop esi */
  ESI = (pop32());
  /* 12c52e2c mov esp, ebp */
  ESP = (EBP);
  /* 12c52e2e pop ebp */
  EBP = (pop32());
  /* 12c52e2f ret  */
  ESPCHK(0x12c52b50u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12c52e30 (124 bytes, 47 insns) */
void f_12c52e30(void) {
  FTRACE(0x12c52e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52e31 mov ebp, esp */
  EBP = (ESP);
  /* 12c52e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52e34 mov eax, dword ptr [0x12c6e4a4] */
  EAX = (r32((uint32_t)(0x12c6e4a4)));
  /* 12c52e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c52e3c jmp 0x12c52e47 */
  goto L_12c52e47;
L_12c52e3e:;
  /* 12c52e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e41 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52e44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c52e47:;
  /* 12c52e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e4a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52e4d je 0x12c52e9a */
  if (C.zf) goto L_12c52e9a;
  /* 12c52e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52e52 push eax */
  push32((uint32_t)(EAX));
  /* 12c52e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c52e58 push edx */
  push32((uint32_t)(EDX));
  /* 12c52e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52e5c push eax */
  push32((uint32_t)(EAX));
  /* 12c52e5d call 0x12c52600 */
  push32(0x12c52e62u); f_12c52600();
  /* 12c52e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c52e67 jne 0x12c52e98 */
  if (!C.zf) goto L_12c52e98;
  /* 12c52e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c52e6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52e71 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12c52e75 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52e78 je 0x12c52e8a */
  if (C.zf) goto L_12c52e8a;
  /* 12c52e7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e7d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c52e7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52e82 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12c52e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52e88 jne 0x12c52e98 */
  if (!C.zf) goto L_12c52e98;
L_12c52e8a:;
  /* 12c52e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e8d sub eax, dword ptr [0x12c6e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52e93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c52e96 jmp 0x12c52ea8 */
  goto L_12c52ea8;
L_12c52e98:;
  /* 12c52e98 jmp 0x12c52e3e */
  goto L_12c52e3e;
L_12c52e9a:;
  /* 12c52e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52e9d sub eax, dword ptr [0x12c6e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52ea3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c52ea6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12c52ea8:;
  /* 12c52ea8 mov esp, ebp */
  ESP = (EBP);
  /* 12c52eaa pop ebp */
  EBP = (pop32());
  /* 12c52eab ret  */
  ESPCHK(0x12c52e30u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12c52eb0 (238 bytes, 80 insns) */
void f_12c52eb0(void) {
  FTRACE(0x12c52eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12c52eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c52eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c52ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52ec0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c52ec3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52ec7 jne 0x12c52ed0 */
  if (!C.zf) goto L_12c52ed0;
  /* 12c52ec9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c52ecb jmp 0x12c52f9a */
  goto L_12c52f9a;
L_12c52ed0:;
  /* 12c52ed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52ed3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c52ed5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52ed8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52edb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c52ede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52ee0 je 0x12c52eed */
  if (C.zf) goto L_12c52eed;
  /* 12c52ee2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52ee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52ee8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c52eeb jmp 0x12c52ed0 */
  goto L_12c52ed0;
L_12c52eed:;
  /* 12c52eed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12c52ef2 push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52ef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52ef9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c52efc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12c52f03 push eax */
  push32((uint32_t)(EAX));
  /* 12c52f04 call 0x12c42b50 */
  push32(0x12c52f09u); f_12c42b50();
  /* 12c52f09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c52f0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c52f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52f19 jne 0x12c52f25 */
  if (!C.zf) goto L_12c52f25;
  /* 12c52f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c52f1d call 0x12c41ac0 */
  push32(0x12c52f22u); f_12c41ac0();
  /* 12c52f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c52f25:;
  /* 12c52f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52f28 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c52f2b:;
  /* 12c52f2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52f2e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52f31 je 0x12c52f8e */
  if (C.zf) goto L_12c52f8e;
  /* 12c52f33 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12c52f38 push 0x12c6a8e0 */
  push32((uint32_t)(0x12c6a8e0u));
  /* 12c52f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c52f3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52f42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c52f44 push edx */
  push32((uint32_t)(EDX));
  /* 12c52f45 call 0x12c45980 */
  push32(0x12c52f4au); f_12c45980();
  /* 12c52f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f50 push eax */
  push32((uint32_t)(EAX));
  /* 12c52f51 call 0x12c42b50 */
  push32(0x12c52f56u); f_12c42b50();
  /* 12c52f56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c52f5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52f64 je 0x12c52f7a */
  if (C.zf) goto L_12c52f7a;
  /* 12c52f66 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52f69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c52f6b push ecx */
  push32((uint32_t)(ECX));
  /* 12c52f6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f6f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c52f71 push eax */
  push32((uint32_t)(EAX));
  /* 12c52f72 call 0x12c45b00 */
  push32(0x12c52f77u); f_12c45b00();
  /* 12c52f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c52f7a:;
  /* 12c52f7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c52f7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c52f83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f86 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52f89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c52f8c jmp 0x12c52f2b */
  goto L_12c52f2b;
L_12c52f8e:;
  /* 12c52f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c52f91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c52f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c52f9a:;
  /* 12c52f9a mov esp, ebp */
  ESP = (EBP);
  /* 12c52f9c pop ebp */
  EBP = (pop32());
  /* 12c52f9d ret  */
  ESPCHK(0x12c52eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x12c52fa0 (237 bytes, 81 insns) */
void f_12c52fa0(void) {
  FTRACE(0x12c52fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c52fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c52fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12c52fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52fa4 cmp dword ptr [0x12c6fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c52fab jne 0x12c52fc2 */
  if (!C.zf) goto L_12c52fc2;
  /* 12c52fad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c52fb0 push eax */
  push32((uint32_t)(EAX));
  /* 12c52fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c52fb5 call 0x12c530a0 */
  push32(0x12c52fbau); f_12c530a0();
  /* 12c52fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52fbd jmp 0x12c53089 */
  goto L_12c53089;
L_12c52fc2:;
  /* 12c52fc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c52fc4 call 0x12c46550 */
  push32(0x12c52fc9u); f_12c46550();
  /* 12c52fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52fcc jmp 0x12c52fd7 */
  goto L_12c52fd7;
L_12c52fce:;
  /* 12c52fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52fd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c52fd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c52fd7:;
  /* 12c52fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c52fda movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12c52fde mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12c52fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52fe5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c52feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c52fed je 0x12c5306b */
  if (C.zf) goto L_12c5306b;
  /* 12c52fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c52ff2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c52ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c52ff9 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c52fff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c53002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c53004 je 0x12c53056 */
  if (C.zf) goto L_12c53056;
  /* 12c53006 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c53009 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5300c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c5300f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c53012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c53014 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c53016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c53018 jne 0x12c53028 */
  if (!C.zf) goto L_12c53028;
  /* 12c5301a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c5301c call 0x12c465f0 */
  push32(0x12c53021u); f_12c465f0();
  /* 12c53021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c53024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c53026 jmp 0x12c53089 */
  goto L_12c53089;
L_12c53028:;
  /* 12c53028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c5302b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c53031 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c53034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c53037 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c53039 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c5303b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c5303d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c53040 jne 0x12c53054 */
  if (!C.zf) goto L_12c53054;
  /* 12c53042 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c53044 call 0x12c465f0 */
  push32(0x12c53049u); f_12c465f0();
  /* 12c53049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c5304c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c5304f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c53052 jmp 0x12c53089 */
  goto L_12c53089;
L_12c53054:;
  /* 12c53054 jmp 0x12c53066 */
  goto L_12c53066;
L_12c53056:;
  /* 12c53056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c53059 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c5305f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c53062 jne 0x12c53066 */
  if (!C.zf) goto L_12c53066;
  /* 12c53064 jmp 0x12c5306b */
  goto L_12c5306b;
L_12c53066:;
  /* 12c53066 jmp 0x12c52fce */
  goto L_12c52fce;
L_12c5306b:;
  /* 12c5306b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c5306d call 0x12c465f0 */
  push32(0x12c53072u); f_12c465f0();
  /* 12c53072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c53075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c53078 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c5307d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c53080 jne 0x12c53087 */
  if (!C.zf) goto L_12c53087;
  /* 12c53082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c53085 jmp 0x12c53089 */
  goto L_12c53089;
L_12c53087:;
  /* 12c53087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c53089:;
  /* 12c53089 mov esp, ebp */
  ESP = (EBP);
  /* 12c5308b pop ebp */
  EBP = (pop32());
  /* 12c5308c ret  */
  ESPCHK(0x12c52fa0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12c530a0 (193 bytes, 87 insns) */
void f_12c530a0(void) {
  FTRACE(0x12c530a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c530a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c530a2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c530a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c530a7 mov ebx, eax */
  EBX = (EAX);
  /* 12c530a9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c530ac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c530b0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c530b6 je 0x12c530cb */
  if (C.zf) goto L_12c530cb;
L_12c530b8:;
  /* 12c530b8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12c530ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c530bb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c530bd je 0x12c53090 */
  if (C.zf) { jmp_ind(0x12c53090u); return; }
  /* 12c530bf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c530c1 je 0x12c53114 */
  if (C.zf) goto L_12c53114;
  /* 12c530c3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c530c9 jne 0x12c530b8 */
  if (!C.zf) goto L_12c530b8;
L_12c530cb:;
  /* 12c530cb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12c530cd push edi */
  push32((uint32_t)(EDI));
  /* 12c530ce mov eax, ebx */
  EAX = (EBX);
  /* 12c530d0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12c530d3 push esi */
  push32((uint32_t)(ESI));
  /* 12c530d4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12c530d6:;
  /* 12c530d6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c530d8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12c530dd mov eax, ecx */
  EAX = (ECX);
  /* 12c530df mov esi, edi */
  ESI = (EDI);
  /* 12c530e1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12c530e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c530e5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c530e7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c530ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c530ed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c530ef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c530f1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c530f4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c530fa jne 0x12c53118 */
  if (!C.zf) goto L_12c53118;
  /* 12c530fc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c53101 je 0x12c530d6 */
  if (C.zf) goto L_12c530d6;
  /* 12c53103 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c53108 jne 0x12c53112 */
  if (!C.zf) goto L_12c53112;
  /* 12c5310a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c53110 jne 0x12c530d6 */
  if (!C.zf) goto L_12c530d6;
L_12c53112:;
  /* 12c53112 pop esi */
  ESI = (pop32());
  /* 12c53113 pop edi */
  EDI = (pop32());
L_12c53114:;
  /* 12c53114 pop ebx */
  EBX = (pop32());
  /* 12c53115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c53117 ret  */
  ESPCHK(0x12c530a0u, _esp0);
  ESP += 4; return;
L_12c53118:;
  /* 12c53118 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12c5311b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c5311d je 0x12c53155 */
  if (C.zf) goto L_12c53155;
  /* 12c5311f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c53121 je 0x12c53112 */
  if (C.zf) goto L_12c53112;
  /* 12c53123 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c53125 je 0x12c5314e */
  if (C.zf) goto L_12c5314e;
  /* 12c53127 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c53129 je 0x12c53112 */
  if (C.zf) goto L_12c53112;
  /* 12c5312b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c5312e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c53130 je 0x12c53147 */
  if (C.zf) goto L_12c53147;
  /* 12c53132 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c53134 je 0x12c53112 */
  if (C.zf) goto L_12c53112;
  /* 12c53136 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c53138 je 0x12c53140 */
  if (C.zf) goto L_12c53140;
  /* 12c5313a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c5313c je 0x12c53112 */
  if (C.zf) goto L_12c53112;
  /* 12c5313e jmp 0x12c530d6 */
  goto L_12c530d6;
L_12c53140:;
  /* 12c53140 pop esi */
  ESI = (pop32());
  /* 12c53141 pop edi */
  EDI = (pop32());
  /* 12c53142 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12c53145 pop ebx */
  EBX = (pop32());
  /* 12c53146 ret  */
  ESPCHK(0x12c530a0u, _esp0);
  ESP += 4; return;
L_12c53147:;
  /* 12c53147 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12c5314a pop esi */
  ESI = (pop32());
  /* 12c5314b pop edi */
  EDI = (pop32());
  /* 12c5314c pop ebx */
  EBX = (pop32());
  /* 12c5314d ret  */
  ESPCHK(0x12c530a0u, _esp0);
  ESP += 4; return;
L_12c5314e:;
  /* 12c5314e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12c53151 pop esi */
  ESI = (pop32());
  /* 12c53152 pop edi */
  EDI = (pop32());
  /* 12c53153 pop ebx */
  EBX = (pop32());
  /* 12c53154 ret  */
  ESPCHK(0x12c530a0u, _esp0);
  ESP += 4; return;
L_12c53155:;
  /* 12c53155 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12c53158 pop esi */
  ESI = (pop32());
  /* 12c53159 pop edi */
  EDI = (pop32());
  /* 12c5315a pop ebx */
  EBX = (pop32());
  /* 12c5315b ret  */
  ESPCHK(0x12c530a0u, _esp0);
  ESP += 4; return;
  /* 12c5315c jmp dword ptr [0x12c70254] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c70254)))); return;
}

/* RtlUnwind @ 0x12c532ac (6 bytes, 1 insns) */
void f_12c532ac(void) {
  FTRACE(0x12c532acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c532ac jmp dword ptr [0x12c70330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c70330)))); return;
}

