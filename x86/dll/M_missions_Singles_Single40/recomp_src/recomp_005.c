#include "recomp.h"

/* FUN_1001d760 @ 0x116ad760 (77 bytes, 18 insns) */
void f_116ad760(void) {
  FTRACE(0x116ad760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad760 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad761 mov ebp, esp */
  EBP = (ESP);
  /* 116ad763 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad769 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 116ad773 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 116ad779 push eax */
  push32((uint32_t)(EAX));
  /* 116ad77a call dword ptr [0x116d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d334c))), 0x116ad780u);
  /* 116ad780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad782 je 0x116ad799 */
  if (C.zf) goto L_116ad799;
  /* 116ad784 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad78b jne 0x116ad799 */
  if (!C.zf) goto L_116ad799;
  /* 116ad78d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 116ad797 jmp 0x116ad7a3 */
  goto L_116ad7a3;
L_116ad799:;
  /* 116ad799 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_116ad7a3:;
  /* 116ad7a3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116ad7a9 mov esp, ebp */
  ESP = (EBP);
  /* 116ad7ab pop ebp */
  EBP = (pop32());
  /* 116ad7ac ret  */
  ESPCHK(0x116ad760u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x116ad7b0 (388 bytes, 118 insns) */
void f_116ad7b0(void) {
  FTRACE(0x116ad7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad7b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad7b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad7b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116ad7bd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 116ad7c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116ad7cb:;
  /* 116ad7cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ad7ce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad7d1 jg 0x116ad918 */
  if ((!C.zf&&C.sf==C.of)) goto L_116ad918;
  /* 116ad7d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ad7da add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad7dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116ad7de sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad7e0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116ad7e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ad7e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad7e8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad7eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad7ee cmp edx, dword ptr [ecx + 0x116cedc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x116cedc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad7f4 jne 0x116ad8ee */
  if (!C.zf) goto L_116ad8ee;
  /* 116ad7fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ad7fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116ad800 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad804 ja 0x116ad827 */
  if ((!C.cf&&!C.zf)) goto L_116ad827;
  /* 116ad806 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad80a je 0x116ad899 */
  if (C.zf) goto L_116ad899;
  /* 116ad810 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad814 je 0x116ad844 */
  if (C.zf) goto L_116ad844;
  /* 116ad816 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad81a je 0x116ad866 */
  if (C.zf) goto L_116ad866;
  /* 116ad81c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad820 je 0x116ad888 */
  if (C.zf) goto L_116ad888;
  /* 116ad822 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad827:;
  /* 116ad827 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad82e je 0x116ad855 */
  if (C.zf) goto L_116ad855;
  /* 116ad830 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad837 je 0x116ad877 */
  if (C.zf) goto L_116ad877;
  /* 116ad839 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad840 je 0x116ad8aa */
  if (C.zf) goto L_116ad8aa;
  /* 116ad842 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad844:;
  /* 116ad844 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad847 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad84a add ecx, 0x116cedc4 */
  { uint32_t _a=(ECX),_b=(0x116cedc4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad850 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ad853 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad855:;
  /* 116ad855 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad858 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad85b mov eax, dword ptr [edx + 0x116cedcc] */
  EAX = (r32((uint32_t)(EDX + 0x116cedcc)));
  /* 116ad861 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ad864 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad866:;
  /* 116ad866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad869 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad86c add ecx, 0x116cedd0 */
  { uint32_t _a=(ECX),_b=(0x116cedd0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad872 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ad875 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad877:;
  /* 116ad877 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad87a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad87d mov eax, dword ptr [edx + 0x116cedd4] */
  EAX = (r32((uint32_t)(EDX + 0x116cedd4)));
  /* 116ad883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ad886 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad888:;
  /* 116ad888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad88b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad88e add ecx, 0x116cedd8 */
  { uint32_t _a=(ECX),_b=(0x116cedd8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad894 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ad897 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad899:;
  /* 116ad899 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad89c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad89f add edx, 0x116ceddc */
  { uint32_t _a=(EDX),_b=(0x116ceddcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad8a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116ad8a8 jmp 0x116ad8b8 */
  goto L_116ad8b8;
L_116ad8aa:;
  /* 116ad8aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad8ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad8b0 add eax, 0x116cede4 */
  { uint32_t _a=(EAX),_b=(0x116cede4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad8b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116ad8b8:;
  /* 116ad8b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad8bc je 0x116ad8c4 */
  if (C.zf) goto L_116ad8c4;
  /* 116ad8be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad8c2 jge 0x116ad8c6 */
  if ((C.sf==C.of)) goto L_116ad8c6;
L_116ad8c4:;
  /* 116ad8c4 jmp 0x116ad918 */
  goto L_116ad918;
L_116ad8c6:;
  /* 116ad8c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ad8c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad8cc push ecx */
  push32((uint32_t)(ECX));
  /* 116ad8cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ad8d0 push edx */
  push32((uint32_t)(EDX));
  /* 116ad8d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ad8d4 push eax */
  push32((uint32_t)(EAX));
  /* 116ad8d5 call 0x116a10b0 */
  push32(0x116ad8dau); f_116a10b0();
  /* 116ad8da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad8dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ad8e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad8e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 116ad8e7 mov eax, 1 */
  EAX = (0x1u);
  /* 116ad8ec jmp 0x116ad92e */
  goto L_116ad92e;
L_116ad8ee:;
  /* 116ad8ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad8f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ad8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad8f7 cmp eax, dword ptr [edx + 0x116cedc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x116cedc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad8fd jae 0x116ad90a */
  if (!C.cf) goto L_116ad90a;
  /* 116ad8ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad902 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad905 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ad908 jmp 0x116ad913 */
  goto L_116ad913;
L_116ad90a:;
  /* 116ad90a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ad90d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad910 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116ad913:;
  /* 116ad913 jmp 0x116ad7cb */
  goto L_116ad7cb;
L_116ad918:;
  /* 116ad918 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ad91b push eax */
  push32((uint32_t)(EAX));
  /* 116ad91c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ad91f push ecx */
  push32((uint32_t)(ECX));
  /* 116ad920 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ad923 push edx */
  push32((uint32_t)(EDX));
  /* 116ad924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad927 push eax */
  push32((uint32_t)(EAX));
  /* 116ad928 call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116ad92eu);
L_116ad92e:;
  /* 116ad92e mov esp, ebp */
  ESP = (EBP);
  /* 116ad930 pop ebp */
  EBP = (pop32());
  /* 116ad931 ret 0x10 */
  ESPCHK(0x116ad7b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001d940 @ 0x116ad940 (118 bytes, 42 insns) */
void f_116ad940(void) {
  FTRACE(0x116ad940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad940 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad941 mov ebp, esp */
  EBP = (ESP);
  /* 116ad943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116ad94d:;
  /* 116ad94d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad950 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ad952 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 116ad955 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad95c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad95f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116ad962 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ad964 je 0x116ad9af */
  if (C.zf) goto L_116ad9af;
  /* 116ad966 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad96a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad96d jl 0x116ad982 */
  if ((C.sf!=C.of)) goto L_116ad982;
  /* 116ad96f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad973 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad976 jg 0x116ad982 */
  if ((!C.zf&&C.sf==C.of)) goto L_116ad982;
  /* 116ad978 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116ad97b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116ad97d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 116ad980 jmp 0x116ad99c */
  goto L_116ad99c;
L_116ad982:;
  /* 116ad982 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad986 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad989 jl 0x116ad99c */
  if ((C.sf!=C.of)) goto L_116ad99c;
  /* 116ad98b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad98f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad992 jg 0x116ad99c */
  if ((!C.zf&&C.sf==C.of)) goto L_116ad99c;
  /* 116ad994 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116ad997 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116ad999 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_116ad99c:;
  /* 116ad99c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ad99f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116ad9a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ad9a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116ad9aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ad9ad jmp 0x116ad94d */
  goto L_116ad94d;
L_116ad9af:;
  /* 116ad9af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ad9b2 mov esp, ebp */
  ESP = (EBP);
  /* 116ad9b4 pop ebp */
  EBP = (pop32());
  /* 116ad9b5 ret  */
  ESPCHK(0x116ad940u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x116ad9c0 (101 bytes, 36 insns) */
void f_116ad9c0(void) {
  FTRACE(0x116ad9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad9c1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad9c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ad9cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad9d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ad9d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 116ad9d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad9d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad9db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116ad9de:;
  /* 116ad9de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116ad9e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad9e5 jl 0x116ad9f0 */
  if ((C.sf!=C.of)) goto L_116ad9f0;
  /* 116ad9e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116ad9eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad9ee jle 0x116ada02 */
  if ((C.zf||C.sf!=C.of)) goto L_116ada02;
L_116ad9f0:;
  /* 116ad9f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116ad9f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad9f7 jl 0x116ada1e */
  if ((C.sf!=C.of)) goto L_116ada1e;
  /* 116ad9f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116ad9fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ada00 jg 0x116ada1e */
  if ((!C.zf&&C.sf==C.of)) goto L_116ada1e;
L_116ada02:;
  /* 116ada02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ada05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ada08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ada0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ada0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ada10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 116ada13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ada16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ada19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116ada1c jmp 0x116ad9de */
  goto L_116ad9de;
L_116ada1e:;
  /* 116ada1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ada21 mov esp, ebp */
  ESP = (EBP);
  /* 116ada23 pop ebp */
  EBP = (pop32());
  /* 116ada24 ret  */
  ESPCHK(0x116ad9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da30 @ 0x116ada30 (1085 bytes, 299 insns) */
void f_116ada30(void) {
  FTRACE(0x116ada30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ada30 push ebp */
  push32((uint32_t)(EBP));
  /* 116ada31 mov ebp, esp */
  EBP = (ESP);
  /* 116ada33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ada36 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 116ada3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ada43 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116ada4a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116ada51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ada58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ada5b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 116ada5f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 116ada63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ada66 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 116ada6a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 116ada6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ada71 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116ada77 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ada7a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ada80 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116ada82 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116ada88 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 116ada8c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 116ada90 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 116ada94 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 116ada98 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 116ada9c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 116adaa1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 116adaa5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116adaa8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116adaae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116adab1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116adab6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adab8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 116adabc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116adabf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116adac5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adacb jge 0x116adaed */
  if ((C.sf==C.of)) goto L_116adaed;
  /* 116adacd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116adad0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116adad6 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adadc jge 0x116adaed */
  if ((C.sf==C.of)) goto L_116adaed;
  /* 116adade mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116adae1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116adae6 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adaeb jle 0x116adb24 */
  if ((C.zf||C.sf!=C.of)) goto L_116adb24;
L_116adaed:;
  /* 116adaed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116adaf0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116adaf6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116adaf8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adafa and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116adb00 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adb06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb09 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116adb0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb0f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116adb16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb19 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116adb1f jmp 0x116ade69 */
  goto L_116ade69;
L_116adb24:;
  /* 116adb24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116adb27 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116adb2d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adb33 jg 0x116adb57 */
  if ((!C.zf&&C.sf==C.of)) goto L_116adb57;
  /* 116adb35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb38 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116adb3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb42 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116adb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb4c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 116adb52 jmp 0x116ade69 */
  goto L_116ade69;
L_116adb57:;
  /* 116adb57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116adb5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116adb5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116adb61 jne 0x116adb9d */
  if (!C.zf) goto L_116adb9d;
  /* 116adb63 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 116adb67 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 116adb6b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 116adb6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116adb75 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116adb7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116adb7c jne 0x116adb9d */
  if (!C.zf) goto L_116adb9d;
  /* 116adb7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb81 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adb85 jne 0x116adb9d */
  if (!C.zf) goto L_116adb9d;
  /* 116adb87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adb8d jne 0x116adb9d */
  if (!C.zf) goto L_116adb9d;
  /* 116adb8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adb92 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 116adb98 jmp 0x116ade69 */
  goto L_116ade69;
L_116adb9d:;
  /* 116adb9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116adba0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116adba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116adba8 jne 0x116adbf9 */
  if (!C.zf) goto L_116adbf9;
  /* 116adbaa mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 116adbae add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 116adbb2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 116adbb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adbb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116adbbc and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116adbc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116adbc4 jne 0x116adbf9 */
  if (!C.zf) goto L_116adbf9;
  /* 116adbc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adbc9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adbcd jne 0x116adbf9 */
  if (!C.zf) goto L_116adbf9;
  /* 116adbcf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adbd2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adbd5 jne 0x116adbf9 */
  if (!C.zf) goto L_116adbf9;
  /* 116adbd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adbda mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 116adbe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adbe4 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 116adbeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adbee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116adbf4 jmp 0x116ade69 */
  goto L_116ade69;
L_116adbf9:;
  /* 116adbf9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116adc00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116adc07 jmp 0x116adc12 */
  goto L_116adc12;
L_116adc09:;
  /* 116adc09 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116adc0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adc0f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_116adc12:;
  /* 116adc12 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adc16 jge 0x116adcd1 */
  if ((C.sf==C.of)) goto L_116adcd1;
  /* 116adc1c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116adc1f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116adc21 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116adc24 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 116adc2b mov eax, 5 */
  EAX = (0x5u);
  /* 116adc30 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adc33 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 116adc36 jmp 0x116adc41 */
  goto L_116adc41;
L_116adc38:;
  /* 116adc38 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116adc3b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adc3e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_116adc41:;
  /* 116adc41 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adc45 jle 0x116adcc3 */
  if ((C.zf||C.sf!=C.of)) goto L_116adcc3;
  /* 116adc47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adc4a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adc4d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 116adc50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adc53 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adc56 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 116adc59 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116adc5c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 116adc60 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 116adc63 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116adc66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116adc68 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 116adc6b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116adc6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116adc70 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116adc73 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116adc76 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 116adc79 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116adc7c push ecx */
  push32((uint32_t)(ECX));
  /* 116adc7d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 116adc80 push edx */
  push32((uint32_t)(EDX));
  /* 116adc81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116adc84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116adc86 push ecx */
  push32((uint32_t)(ECX));
  /* 116adc87 call 0x116a94b0 */
  push32(0x116adc8cu); f_116a94b0();
  /* 116adc8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116adc8f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 116adc92 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adc96 je 0x116adcac */
  if (C.zf) goto L_116adcac;
  /* 116adc98 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116adc9b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 116adca0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 116adca4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116adca7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_116adcac:;
  /* 116adcac mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116adcaf add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adcb2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116adcb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116adcb8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adcbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116adcbe jmp 0x116adc38 */
  goto L_116adc38;
L_116adcc3:;
  /* 116adcc3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116adcc6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adcc9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116adccc jmp 0x116adc09 */
  goto L_116adc09;
L_116adcd1:;
  /* 116adcd1 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 116adcd5 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116adcda mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_116adcde:;
  /* 116adcde movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 116adce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116adce4 jle 0x116add0d */
  if ((C.zf||C.sf!=C.of)) goto L_116add0d;
  /* 116adce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116adce9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116adcef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116adcf1 jne 0x116add0d */
  if (!C.zf) goto L_116add0d;
  /* 116adcf3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 116adcf6 push edx */
  push32((uint32_t)(EDX));
  /* 116adcf7 call 0x116a95a0 */
  push32(0x116adcfcu); f_116a95a0();
  /* 116adcfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116adcff mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 116add03 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116add07 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 116add0b jmp 0x116adcde */
  goto L_116adcde;
L_116add0d:;
  /* 116add0d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 116add11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116add13 jg 0x116add6d */
  if ((!C.zf&&C.sf==C.of)) goto L_116add6d;
  /* 116add15 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 116add19 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116add1d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_116add21:;
  /* 116add21 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 116add25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116add27 jge 0x116add5c */
  if ((C.sf==C.of)) goto L_116add5c;
  /* 116add29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116add2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116add32 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116add35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116add37 je 0x116add42 */
  if (C.zf) goto L_116add42;
  /* 116add39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116add3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116add3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116add42:;
  /* 116add42 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 116add45 push eax */
  push32((uint32_t)(EAX));
  /* 116add46 call 0x116a9600 */
  push32(0x116add4bu); f_116a9600();
  /* 116add4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116add4e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 116add52 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 116add56 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 116add5a jmp 0x116add21 */
  goto L_116add21;
L_116add5c:;
  /* 116add5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116add60 je 0x116add6d */
  if (C.zf) goto L_116add6d;
  /* 116add62 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 116add66 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 116add69 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_116add6d:;
  /* 116add6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116add70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116add75 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116add7a jg 0x116add8d */
  if ((!C.zf&&C.sf==C.of)) goto L_116add8d;
  /* 116add7c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116add7f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116add85 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116add8b jne 0x116addee */
  if (!C.zf) goto L_116addee;
L_116add8d:;
  /* 116add8d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116add91 jne 0x116adde5 */
  if (!C.zf) goto L_116adde5;
  /* 116add93 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 116add9a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116add9e jne 0x116addda */
  if (!C.zf) goto L_116addda;
  /* 116adda0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 116adda7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 116addaa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116addb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116addb6 jne 0x116addcc */
  if (!C.zf) goto L_116addcc;
  /* 116addb8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 116addbe mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 116addc2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 116addc6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 116addca jmp 0x116addd8 */
  goto L_116addd8;
L_116addcc:;
  /* 116addcc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 116addd0 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 116addd4 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_116addd8:;
  /* 116addd8 jmp 0x116adde3 */
  goto L_116adde3;
L_116addda:;
  /* 116addda mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 116adddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adde0 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_116adde3:;
  /* 116adde3 jmp 0x116addee */
  goto L_116addee;
L_116adde5:;
  /* 116adde5 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 116adde8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116addeb mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_116addee:;
  /* 116addee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116addf1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116addf7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116addfd jl 0x116ade33 */
  if ((C.sf!=C.of)) goto L_116ade33;
  /* 116addff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ade02 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ade08 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ade0a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ade0c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ade12 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ade18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116ade1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade21 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116ade28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade2b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 116ade31 jmp 0x116ade69 */
  goto L_116ade69;
L_116ade33:;
  /* 116ade33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade36 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 116ade3a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 116ade3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ade43 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 116ade46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ade4c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 116ade4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ade52 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ade57 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ade5a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116ade60 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116ade62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ade65 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_116ade69:;
  /* 116ade69 mov esp, ebp */
  ESP = (EBP);
  /* 116ade6b pop ebp */
  EBP = (pop32());
  /* 116ade6c ret  */
  ESPCHK(0x116ada30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de70 @ 0x116ade70 (195 bytes, 67 insns) */
void f_116ade70(void) {
  FTRACE(0x116ade70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ade70 push ebp */
  push32((uint32_t)(EBP));
  /* 116ade71 mov ebp, esp */
  EBP = (ESP);
  /* 116ade73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ade76 mov eax, 0x116cf640 */
  EAX = (0x116cf640u);
  /* 116ade7b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ade7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ade81 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ade85 jne 0x116ade8c */
  if (!C.zf) goto L_116ade8c;
  /* 116ade87 jmp 0x116adf2f */
  goto L_116adf2f;
L_116ade8c:;
  /* 116ade8c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ade90 jge 0x116adea5 */
  if ((C.sf==C.of)) goto L_116adea5;
  /* 116ade92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ade95 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ade97 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116ade9a mov edx, 0x116cf7a0 */
  EDX = (0x116cf7a0u);
  /* 116ade9f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adea2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116adea5:;
  /* 116adea5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adea9 jne 0x116adeb3 */
  if (!C.zf) goto L_116adeb3;
  /* 116adeab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adeae mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_116adeb3:;
  /* 116adeb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adeb7 je 0x116adf2f */
  if (C.zf) goto L_116adf2f;
  /* 116adeb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116adebc add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adebf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116adec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adec5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 116adec8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116adecb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adece sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 116aded1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116aded4 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aded8 jne 0x116adedc */
  if (!C.zf) goto L_116adedc;
  /* 116adeda jmp 0x116adeb3 */
  goto L_116adeb3;
L_116adedc:;
  /* 116adedc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116adedf imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116adee2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116adee5 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adee7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116adeea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116adeed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116adeef mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 116adef2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adef8 jl 0x116adf1d */
  if ((C.sf!=C.of)) goto L_116adf1d;
  /* 116adefa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116adefd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116adeff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116adf02 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 116adf05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116adf08 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 116adf0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116adf0e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 116adf11 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adf14 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 116adf17 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 116adf1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116adf1d:;
  /* 116adf1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116adf20 push edx */
  push32((uint32_t)(EDX));
  /* 116adf21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adf24 push eax */
  push32((uint32_t)(EAX));
  /* 116adf25 call 0x116ada30 */
  push32(0x116adf2au); f_116ada30();
  /* 116adf2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116adf2d jmp 0x116adeb3 */
  goto L_116adeb3;
L_116adf2f:;
  /* 116adf2f mov esp, ebp */
  ESP = (EBP);
  /* 116adf31 pop ebp */
  EBP = (pop32());
  /* 116adf32 ret  */
  ESPCHK(0x116ade70u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x116adf40 (52 bytes, 19 insns) */
void f_116adf40(void) {
  FTRACE(0x116adf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116adf40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116adf44 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 116adf48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116adf4a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116adf4e jne 0x116adf59 */
  if (!C.zf) goto L_116adf59;
  /* 116adf50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116adf54 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116adf56 ret 0x10 */
  ESPCHK(0x116adf40u, _esp0);
  ESP += 20; return;
L_116adf59:;
  /* 116adf59 push ebx */
  push32((uint32_t)(EBX));
  /* 116adf5a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116adf5c mov ebx, eax */
  EBX = (EAX);
  /* 116adf5e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116adf62 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116adf66 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adf68 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116adf6c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116adf6e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116adf70 pop ebx */
  EBX = (pop32());
  /* 116adf71 ret 0x10 */
  ESPCHK(0x116adf40u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x116adf80 (79 bytes, 32 insns) */
void f_116adf80(void) {
  FTRACE(0x116adf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116adf80 push ebp */
  push32((uint32_t)(EBP));
  /* 116adf81 mov ebp, esp */
  EBP = (ESP);
  /* 116adf83 push ecx */
  push32((uint32_t)(ECX));
  /* 116adf84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adf88 jne 0x116adf8e */
  if (!C.zf) goto L_116adf8e;
  /* 116adf8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116adf8c jmp 0x116adfcb */
  goto L_116adfcb;
L_116adf8e:;
  /* 116adf8e mov eax, dword ptr [0x116d1c38] */
  EAX = (r32((uint32_t)(0x116d1c38)));
  /* 116adf93 push eax */
  push32((uint32_t)(EAX));
  /* 116adf94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116adf97 push ecx */
  push32((uint32_t)(ECX));
  /* 116adf98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116adf9b push edx */
  push32((uint32_t)(EDX));
  /* 116adf9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116adf9f push eax */
  push32((uint32_t)(EAX));
  /* 116adfa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116adfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 116adfa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116adfa6 mov edx, dword ptr [0x116d1ec4] */
  EDX = (r32((uint32_t)(0x116d1ec4)));
  /* 116adfac push edx */
  push32((uint32_t)(EDX));
  /* 116adfad call 0x116b0540 */
  push32(0x116adfb2u); f_116b0540();
  /* 116adfb2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116adfb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116adfb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adfbc jne 0x116adfc5 */
  if (!C.zf) goto L_116adfc5;
  /* 116adfbe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 116adfc3 jmp 0x116adfcb */
  goto L_116adfcb;
L_116adfc5:;
  /* 116adfc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116adfc8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116adfcb:;
  /* 116adfcb mov esp, ebp */
  ESP = (EBP);
  /* 116adfcd pop ebp */
  EBP = (pop32());
  /* 116adfce ret  */
  ESPCHK(0x116adf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dfd0 @ 0x116adfd0 (174 bytes, 66 insns) */
void f_116adfd0(void) {
  FTRACE(0x116adfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116adfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116adfd1 mov ebp, esp */
  EBP = (ESP);
  /* 116adfd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116adfd6 mov eax, dword ptr [0x116d05f4] */
  EAX = (r32((uint32_t)(0x116d05f4)));
  /* 116adfdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116adfde:;
  /* 116adfde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116adfe1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116adfe4 je 0x116ae078 */
  if (C.zf) goto L_116ae078;
  /* 116adfea push 0 */
  push32((uint32_t)(0x0u));
  /* 116adfec push 0 */
  push32((uint32_t)(0x0u));
  /* 116adfee push 0 */
  push32((uint32_t)(0x0u));
  /* 116adff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116adff2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116adff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116adff7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116adff9 push eax */
  push32((uint32_t)(EAX));
  /* 116adffa push 0 */
  push32((uint32_t)(0x0u));
  /* 116adffc push 1 */
  push32((uint32_t)(0x1u));
  /* 116adffe call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116ae004u);
  /* 116ae004 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ae007 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae00b jne 0x116ae012 */
  if (!C.zf) goto L_116ae012;
  /* 116ae00d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae010 jmp 0x116ae07a */
  goto L_116ae07a;
L_116ae012:;
  /* 116ae012 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116ae014 push 0x116cc0bc */
  push32((uint32_t)(0x116cc0bcu));
  /* 116ae019 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae01b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae01e push ecx */
  push32((uint32_t)(ECX));
  /* 116ae01f call 0x1169c220 */
  push32(0x116ae024u); f_1169c220();
  /* 116ae024 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae027 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ae02a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae02e jne 0x116ae035 */
  if (!C.zf) goto L_116ae035;
  /* 116ae030 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae033 jmp 0x116ae07a */
  goto L_116ae07a;
L_116ae035:;
  /* 116ae035 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae037 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae039 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae03c push edx */
  push32((uint32_t)(EDX));
  /* 116ae03d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae040 push eax */
  push32((uint32_t)(EAX));
  /* 116ae041 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116ae043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae046 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ae048 push edx */
  push32((uint32_t)(EDX));
  /* 116ae049 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae04b push 1 */
  push32((uint32_t)(0x1u));
  /* 116ae04d call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116ae053u);
  /* 116ae053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ae055 jne 0x116ae05c */
  if (!C.zf) goto L_116ae05c;
  /* 116ae057 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae05a jmp 0x116ae07a */
  goto L_116ae07a;
L_116ae05c:;
  /* 116ae05c push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae05e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae061 push eax */
  push32((uint32_t)(EAX));
  /* 116ae062 call 0x116b0990 */
  push32(0x116ae067u); f_116b0990();
  /* 116ae067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae06a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae06d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ae073 jmp 0x116adfde */
  goto L_116adfde;
L_116ae078:;
  /* 116ae078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ae07a:;
  /* 116ae07a mov esp, ebp */
  ESP = (EBP);
  /* 116ae07c pop ebp */
  EBP = (pop32());
  /* 116ae07d ret  */
  ESPCHK(0x116adfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e080 @ 0x116ae080 (482 bytes, 138 insns) */
void f_116ae080(void) {
  FTRACE(0x116ae080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae080 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae081 mov ebp, esp */
  EBP = (ESP);
  /* 116ae083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae086 push esi */
  push32((uint32_t)(ESI));
  /* 116ae087 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 116ae08e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 116ae090 call 0x1169c120 */
  push32(0x116ae095u); f_1169c120();
  /* 116ae095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae098 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ae09f jmp 0x116ae0aa */
  goto L_116ae0aa;
L_116ae0a1:;
  /* 116ae0a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae0a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae0a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ae0aa:;
  /* 116ae0aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae0ae jge 0x116ae250 */
  if ((C.sf==C.of)) goto L_116ae250;
  /* 116ae0b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae0b7 cmp dword ptr [ecx*4 + 0x116d1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x116d1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae0bf je 0x116ae1b6 */
  if (C.zf) goto L_116ae1b6;
  /* 116ae0c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae0c8 mov eax, dword ptr [edx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116ae0cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ae0d2 jmp 0x116ae0dd */
  goto L_116ae0dd;
L_116ae0d4:;
  /* 116ae0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae0d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae0da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ae0dd:;
  /* 116ae0dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae0e0 mov eax, dword ptr [edx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116ae0e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae0ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae0ef jae 0x116ae1a6 */
  if (!C.cf) goto L_116ae1a6;
  /* 116ae0f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae0f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116ae0fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae0ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae101 jne 0x116ae1a1 */
  if (!C.zf) goto L_116ae1a1;
  /* 116ae107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae10a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae10e jne 0x116ae149 */
  if (!C.zf) goto L_116ae149;
  /* 116ae110 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ae112 call 0x1169c120 */
  push32(0x116ae117u); f_1169c120();
  /* 116ae117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae11a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae11d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae121 jne 0x116ae13f */
  if (!C.zf) goto L_116ae13f;
  /* 116ae123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae126 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae129 push edx */
  push32((uint32_t)(EDX));
  /* 116ae12a call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x116ae130u);
  /* 116ae130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae133 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ae136 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae13c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_116ae13f:;
  /* 116ae13f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ae141 call 0x1169c1c0 */
  push32(0x116ae146u); f_1169c1c0();
  /* 116ae146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ae149:;
  /* 116ae149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae14c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae14f push eax */
  push32((uint32_t)(EAX));
  /* 116ae150 call dword ptr [0x116d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d345c))), 0x116ae156u);
  /* 116ae156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae159 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116ae15d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae160 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae162 je 0x116ae176 */
  if (C.zf) goto L_116ae176;
  /* 116ae164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae167 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae16a push eax */
  push32((uint32_t)(EAX));
  /* 116ae16b call dword ptr [0x116d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3438))), 0x116ae171u);
  /* 116ae171 jmp 0x116ae0d4 */
  goto L_116ae0d4;
L_116ae176:;
  /* 116ae176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae179 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116ae17f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae182 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ae185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae18b sub eax, dword ptr [edx*4 + 0x116d1f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x116d1f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae192 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116ae193 mov esi, 0x24 */
  ESI = (0x24u);
  /* 116ae198 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116ae19a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ae19f jmp 0x116ae1a6 */
  goto L_116ae1a6;
L_116ae1a1:;
  /* 116ae1a1 jmp 0x116ae0d4 */
  goto L_116ae0d4;
L_116ae1a6:;
  /* 116ae1a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae1aa je 0x116ae1b1 */
  if (C.zf) goto L_116ae1b1;
  /* 116ae1ac jmp 0x116ae250 */
  goto L_116ae250;
L_116ae1b1:;
  /* 116ae1b1 jmp 0x116ae24b */
  goto L_116ae24b;
L_116ae1b6:;
  /* 116ae1b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 116ae1b8 push 0x116cc0c8 */
  push32((uint32_t)(0x116cc0c8u));
  /* 116ae1bd push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae1bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116ae1c4 call 0x1169c220 */
  push32(0x116ae1c9u); f_1169c220();
  /* 116ae1c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ae1cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae1d3 je 0x116ae249 */
  if (C.zf) goto L_116ae249;
  /* 116ae1d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae1d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae1db mov dword ptr [eax*4 + 0x116d1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x116d1f00), (ECX));
  /* 116ae1e2 mov edx, dword ptr [0x116d203c] */
  EDX = (r32((uint32_t)(0x116d203c)));
  /* 116ae1e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae1eb mov dword ptr [0x116d203c], edx */
  w32((uint32_t)(0x116d203c), (EDX));
  /* 116ae1f1 jmp 0x116ae1fc */
  goto L_116ae1fc;
L_116ae1f3:;
  /* 116ae1f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae1f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae1f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ae1fc:;
  /* 116ae1fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae1ff mov edx, dword ptr [ecx*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ae206 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae20c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae20f jae 0x116ae234 */
  if (!C.cf) goto L_116ae234;
  /* 116ae211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae214 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 116ae218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae21b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116ae221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae224 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 116ae228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae22b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116ae232 jmp 0x116ae1f3 */
  goto L_116ae1f3;
L_116ae234:;
  /* 116ae234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae237 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ae23a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ae23d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae240 push edx */
  push32((uint32_t)(EDX));
  /* 116ae241 call 0x116ae590 */
  push32(0x116ae246u); f_116ae590();
  /* 116ae246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ae249:;
  /* 116ae249 jmp 0x116ae250 */
  goto L_116ae250;
L_116ae24b:;
  /* 116ae24b jmp 0x116ae0a1 */
  goto L_116ae0a1;
L_116ae250:;
  /* 116ae250 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 116ae252 call 0x1169c1c0 */
  push32(0x116ae257u); f_1169c1c0();
  /* 116ae257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae25a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae25d pop esi */
  ESI = (pop32());
  /* 116ae25e mov esp, ebp */
  ESP = (EBP);
  /* 116ae260 pop ebp */
  EBP = (pop32());
  /* 116ae261 ret  */
  ESPCHK(0x116ae080u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x116ae270 (183 bytes, 57 insns) */
void f_116ae270(void) {
  FTRACE(0x116ae270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae270 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae271 mov ebp, esp */
  EBP = (ESP);
  /* 116ae273 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae277 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae27d jae 0x116ae30a */
  if (!C.cf) goto L_116ae30a;
  /* 116ae283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae286 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ae289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae28c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ae28f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae292 mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ae299 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae29d jne 0x116ae30a */
  if (!C.zf) goto L_116ae30a;
  /* 116ae29f cmp dword ptr [0x116d0550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae2a6 jne 0x116ae2ea */
  if (!C.zf) goto L_116ae2ea;
  /* 116ae2a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae2ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ae2ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae2b2 je 0x116ae2c2 */
  if (C.zf) goto L_116ae2c2;
  /* 116ae2b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae2b8 je 0x116ae2d0 */
  if (C.zf) goto L_116ae2d0;
  /* 116ae2ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae2be je 0x116ae2de */
  if (C.zf) goto L_116ae2de;
  /* 116ae2c0 jmp 0x116ae2ea */
  goto L_116ae2ea;
L_116ae2c2:;
  /* 116ae2c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae2c5 push edx */
  push32((uint32_t)(EDX));
  /* 116ae2c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116ae2c8 call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae2ceu);
  /* 116ae2ce jmp 0x116ae2ea */
  goto L_116ae2ea;
L_116ae2d0:;
  /* 116ae2d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae2d3 push eax */
  push32((uint32_t)(EAX));
  /* 116ae2d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116ae2d6 call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae2dcu);
  /* 116ae2dc jmp 0x116ae2ea */
  goto L_116ae2ea;
L_116ae2de:;
  /* 116ae2de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae2e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116ae2e4 call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae2eau);
L_116ae2ea:;
  /* 116ae2ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae2ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ae2f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae2f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae2f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae2f9 mov ecx, dword ptr [edx*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116ae300 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae303 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 116ae306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ae308 jmp 0x116ae323 */
  goto L_116ae323;
L_116ae30a:;
  /* 116ae30a call 0x116a77c0 */
  push32(0x116ae30fu); f_116a77c0();
  /* 116ae30f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ae315 call 0x116a77d0 */
  push32(0x116ae31au); f_116a77d0();
  /* 116ae31a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ae320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ae323:;
  /* 116ae323 mov esp, ebp */
  ESP = (EBP);
  /* 116ae325 pop ebp */
  EBP = (pop32());
  /* 116ae326 ret  */
  ESPCHK(0x116ae270u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e330 @ 0x116ae330 (216 bytes, 63 insns) */
void f_116ae330(void) {
  FTRACE(0x116ae330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae330 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae331 mov ebp, esp */
  EBP = (ESP);
  /* 116ae333 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae337 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae33d jae 0x116ae3eb */
  if (!C.cf) goto L_116ae3eb;
  /* 116ae343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae346 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ae349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae34c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ae34f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae352 mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ae359 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ae35e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae363 je 0x116ae3eb */
  if (C.zf) goto L_116ae3eb;
  /* 116ae369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae36c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ae36f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae372 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae375 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae378 mov ecx, dword ptr [edx*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116ae37f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae383 je 0x116ae3eb */
  if (C.zf) goto L_116ae3eb;
  /* 116ae385 cmp dword ptr [0x116d0550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae38c jne 0x116ae3ca */
  if (!C.zf) goto L_116ae3ca;
  /* 116ae38e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae391 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ae394 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae398 je 0x116ae3a8 */
  if (C.zf) goto L_116ae3a8;
  /* 116ae39a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae39e je 0x116ae3b4 */
  if (C.zf) goto L_116ae3b4;
  /* 116ae3a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae3a4 je 0x116ae3c0 */
  if (C.zf) goto L_116ae3c0;
  /* 116ae3a6 jmp 0x116ae3ca */
  goto L_116ae3ca;
L_116ae3a8:;
  /* 116ae3a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae3aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116ae3ac call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae3b2u);
  /* 116ae3b2 jmp 0x116ae3ca */
  goto L_116ae3ca;
L_116ae3b4:;
  /* 116ae3b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae3b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116ae3b8 call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae3beu);
  /* 116ae3be jmp 0x116ae3ca */
  goto L_116ae3ca;
L_116ae3c0:;
  /* 116ae3c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae3c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116ae3c4 call dword ptr [0x116d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3348))), 0x116ae3cau);
L_116ae3ca:;
  /* 116ae3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae3cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ae3d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae3d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae3d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae3d9 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116ae3e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 116ae3e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ae3e9 jmp 0x116ae404 */
  goto L_116ae404;
L_116ae3eb:;
  /* 116ae3eb call 0x116a77c0 */
  push32(0x116ae3f0u); f_116a77c0();
  /* 116ae3f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ae3f6 call 0x116a77d0 */
  push32(0x116ae3fbu); f_116a77d0();
  /* 116ae3fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ae401 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ae404:;
  /* 116ae404 mov esp, ebp */
  ESP = (EBP);
  /* 116ae406 pop ebp */
  EBP = (pop32());
  /* 116ae407 ret  */
  ESPCHK(0x116ae330u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e410 @ 0x116ae410 (102 bytes, 30 insns) */
void f_116ae410(void) {
  FTRACE(0x116ae410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae410 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae411 mov ebp, esp */
  EBP = (ESP);
  /* 116ae413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae416 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae41c jae 0x116ae45b */
  if (!C.cf) goto L_116ae45b;
  /* 116ae41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae421 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ae424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae427 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ae42a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae42d mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ae434 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ae439 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae43c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae43e je 0x116ae45b */
  if (C.zf) goto L_116ae45b;
  /* 116ae440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae443 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ae446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae449 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae44c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae44f mov ecx, dword ptr [edx*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116ae456 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 116ae459 jmp 0x116ae474 */
  goto L_116ae474;
L_116ae45b:;
  /* 116ae45b call 0x116a77c0 */
  push32(0x116ae460u); f_116a77c0();
  /* 116ae460 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ae466 call 0x116a77d0 */
  push32(0x116ae46bu); f_116a77d0();
  /* 116ae46b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ae471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ae474:;
  /* 116ae474 pop ebp */
  EBP = (pop32());
  /* 116ae475 ret  */
  ESPCHK(0x116ae410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e480 @ 0x116ae480 (260 bytes, 83 insns) */
void f_116ae480(void) {
  FTRACE(0x116ae480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae480 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae481 mov ebp, esp */
  EBP = (ESP);
  /* 116ae483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae486 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ae48a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae48d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 116ae490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ae492 je 0x116ae49d */
  if (C.zf) goto L_116ae49d;
  /* 116ae494 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae497 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116ae49a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_116ae49d:;
  /* 116ae49d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae4a0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae4a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae4a8 je 0x116ae4b2 */
  if (C.zf) goto L_116ae4b2;
  /* 116ae4aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae4ad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 116ae4af mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_116ae4b2:;
  /* 116ae4b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ae4b5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae4bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae4bd je 0x116ae4c8 */
  if (C.zf) goto L_116ae4c8;
  /* 116ae4bf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae4c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 116ae4c5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_116ae4c8:;
  /* 116ae4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae4cb push eax */
  push32((uint32_t)(EAX));
  /* 116ae4cc call dword ptr [0x116d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33d4))), 0x116ae4d2u);
  /* 116ae4d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ae4d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae4d9 jne 0x116ae4f2 */
  if (!C.zf) goto L_116ae4f2;
  /* 116ae4db call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116ae4e1u);
  /* 116ae4e1 push eax */
  push32((uint32_t)(EAX));
  /* 116ae4e2 call 0x116a7720 */
  push32(0x116ae4e7u); f_116a7720();
  /* 116ae4e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae4ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae4ed jmp 0x116ae580 */
  goto L_116ae580;
L_116ae4f2:;
  /* 116ae4f2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae4f6 jne 0x116ae503 */
  if (!C.zf) goto L_116ae503;
  /* 116ae4f8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae4fb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 116ae4fe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 116ae501 jmp 0x116ae512 */
  goto L_116ae512;
L_116ae503:;
  /* 116ae503 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae507 jne 0x116ae512 */
  if (!C.zf) goto L_116ae512;
  /* 116ae509 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae50c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 116ae50f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_116ae512:;
  /* 116ae512 call 0x116ae080 */
  push32(0x116ae517u); f_116ae080();
  /* 116ae517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ae51a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae51e jne 0x116ae53b */
  if (!C.zf) goto L_116ae53b;
  /* 116ae520 call 0x116a77c0 */
  push32(0x116ae525u); f_116a77c0();
  /* 116ae525 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 116ae52b call 0x116a77d0 */
  push32(0x116ae530u); f_116a77d0();
  /* 116ae530 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ae536 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae539 jmp 0x116ae580 */
  goto L_116ae580;
L_116ae53b:;
  /* 116ae53b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae53e push eax */
  push32((uint32_t)(EAX));
  /* 116ae53f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae542 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae543 call 0x116ae270 */
  push32(0x116ae548u); f_116ae270();
  /* 116ae548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae54b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae54e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 116ae551 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 116ae554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae557 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ae55a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae55d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae560 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae563 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116ae56a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ae56d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 116ae571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae574 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae575 call 0x116ae620 */
  push32(0x116ae57au); f_116ae620();
  /* 116ae57a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae57d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ae580:;
  /* 116ae580 mov esp, ebp */
  ESP = (EBP);
  /* 116ae582 pop ebp */
  EBP = (pop32());
  /* 116ae583 ret  */
  ESPCHK(0x116ae480u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e590 @ 0x116ae590 (134 bytes, 44 insns) */
void f_116ae590(void) {
  FTRACE(0x116ae590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae590 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae591 mov ebp, esp */
  EBP = (ESP);
  /* 116ae593 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae597 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ae59a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae59d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae5a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae5a3 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116ae5aa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae5ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ae5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae5b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae5b6 jne 0x116ae5f1 */
  if (!C.zf) goto L_116ae5f1;
  /* 116ae5b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ae5ba call 0x1169c120 */
  push32(0x116ae5bfu); f_1169c120();
  /* 116ae5bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae5c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae5c5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae5c9 jne 0x116ae5e7 */
  if (!C.zf) goto L_116ae5e7;
  /* 116ae5cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae5ce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae5d1 push edx */
  push32((uint32_t)(EDX));
  /* 116ae5d2 call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x116ae5d8u);
  /* 116ae5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae5db mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ae5de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae5e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae5e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_116ae5e7:;
  /* 116ae5e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ae5e9 call 0x1169c1c0 */
  push32(0x116ae5eeu); f_1169c1c0();
  /* 116ae5ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ae5f1:;
  /* 116ae5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae5f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ae5f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae5fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae5fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae600 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116ae607 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 116ae60b push eax */
  push32((uint32_t)(EAX));
  /* 116ae60c call dword ptr [0x116d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d345c))), 0x116ae612u);
  /* 116ae612 mov esp, ebp */
  ESP = (EBP);
  /* 116ae614 pop ebp */
  EBP = (pop32());
  /* 116ae615 ret  */
  ESPCHK(0x116ae590u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x116ae620 (38 bytes, 13 insns) */
void f_116ae620(void) {
  FTRACE(0x116ae620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae620 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae621 mov ebp, esp */
  EBP = (ESP);
  /* 116ae623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae626 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ae629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae62c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae62f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ae632 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116ae639 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 116ae63d push eax */
  push32((uint32_t)(EAX));
  /* 116ae63e call dword ptr [0x116d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3438))), 0x116ae644u);
  /* 116ae644 pop ebp */
  EBP = (pop32());
  /* 116ae645 ret  */
  ESPCHK(0x116ae620u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e650 @ 0x116ae650 (218 bytes, 63 insns) */
void f_116ae650(void) {
  FTRACE(0x116ae650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae650 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae651 mov ebp, esp */
  EBP = (ESP);
  /* 116ae653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ae65d push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae65f call 0x1169c120 */
  push32(0x116ae664u); f_1169c120();
  /* 116ae664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae667 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 116ae66e jmp 0x116ae679 */
  goto L_116ae679;
L_116ae670:;
  /* 116ae670 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae673 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae676 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116ae679:;
  /* 116ae679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae67c cmp ecx, dword ptr [0x116d1c20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae682 jge 0x116ae719 */
  if ((C.sf==C.of)) goto L_116ae719;
  /* 116ae688 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae68b mov eax, dword ptr [0x116d08dc] */
  EAX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae690 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae694 je 0x116ae714 */
  if (C.zf) goto L_116ae714;
  /* 116ae696 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae699 mov edx, dword ptr [0x116d08dc] */
  EDX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae69f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ae6a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ae6a5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae6ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae6ad je 0x116ae6d1 */
  if (C.zf) goto L_116ae6d1;
  /* 116ae6af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae6b2 mov eax, dword ptr [0x116d08dc] */
  EAX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae6b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ae6ba push ecx */
  push32((uint32_t)(ECX));
  /* 116ae6bb call 0x116b0de0 */
  push32(0x116ae6c0u); f_116b0de0();
  /* 116ae6c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae6c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae6c6 je 0x116ae6d1 */
  if (C.zf) goto L_116ae6d1;
  /* 116ae6c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae6cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae6ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ae6d1:;
  /* 116ae6d1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae6d5 jl 0x116ae714 */
  if ((C.sf!=C.of)) goto L_116ae714;
  /* 116ae6d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae6da mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae6e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ae6e3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae6e6 push edx */
  push32((uint32_t)(EDX));
  /* 116ae6e7 call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x116ae6edu);
  /* 116ae6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae6ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae6f2 mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae6f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ae6fb push edx */
  push32((uint32_t)(EDX));
  /* 116ae6fc call 0x1169ccb0 */
  push32(0x116ae701u); f_1169ccb0();
  /* 116ae701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae707 mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae70d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_116ae714:;
  /* 116ae714 jmp 0x116ae670 */
  goto L_116ae670;
L_116ae719:;
  /* 116ae719 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae71b call 0x1169c1c0 */
  push32(0x116ae720u); f_1169c1c0();
  /* 116ae720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae726 mov esp, ebp */
  ESP = (EBP);
  /* 116ae728 pop ebp */
  EBP = (pop32());
  /* 116ae729 ret  */
  ESPCHK(0x116ae650u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e730 @ 0x116ae730 (68 bytes, 26 insns) */
void f_116ae730(void) {
  FTRACE(0x116ae730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae730 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae731 mov ebp, esp */
  EBP = (ESP);
  /* 116ae733 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae738 jne 0x116ae746 */
  if (!C.zf) goto L_116ae746;
  /* 116ae73a push 0 */
  push32((uint32_t)(0x0u));
  /* 116ae73c call 0x116ae8a0 */
  push32(0x116ae741u); f_116ae8a0();
  /* 116ae741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae744 jmp 0x116ae770 */
  goto L_116ae770;
L_116ae746:;
  /* 116ae746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae749 push eax */
  push32((uint32_t)(EAX));
  /* 116ae74a call 0x116ab260 */
  push32(0x116ae74fu); f_116ab260();
  /* 116ae74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae755 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae756 call 0x116ae780 */
  push32(0x116ae75bu); f_116ae780();
  /* 116ae75b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae75e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ae761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae764 push edx */
  push32((uint32_t)(EDX));
  /* 116ae765 call 0x116ab2d0 */
  push32(0x116ae76au); f_116ab2d0();
  /* 116ae76a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ae770:;
  /* 116ae770 mov esp, ebp */
  ESP = (EBP);
  /* 116ae772 pop ebp */
  EBP = (pop32());
  /* 116ae773 ret  */
  ESPCHK(0x116ae730u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e780 @ 0x116ae780 (65 bytes, 26 insns) */
void f_116ae780(void) {
  FTRACE(0x116ae780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae780 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae781 mov ebp, esp */
  EBP = (ESP);
  /* 116ae783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae786 push eax */
  push32((uint32_t)(EAX));
  /* 116ae787 call 0x116ae7d0 */
  push32(0x116ae78cu); f_116ae7d0();
  /* 116ae78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ae791 je 0x116ae798 */
  if (C.zf) goto L_116ae798;
  /* 116ae793 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ae796 jmp 0x116ae7bf */
  goto L_116ae7bf;
L_116ae798:;
  /* 116ae798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae79b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ae79e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae7a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae7a6 je 0x116ae7bd */
  if (C.zf) goto L_116ae7bd;
  /* 116ae7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae7ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116ae7ae push ecx */
  push32((uint32_t)(ECX));
  /* 116ae7af call 0x116b0f30 */
  push32(0x116ae7b4u); f_116b0f30();
  /* 116ae7b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae7b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ae7b9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae7bb jmp 0x116ae7bf */
  goto L_116ae7bf;
L_116ae7bd:;
  /* 116ae7bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ae7bf:;
  /* 116ae7bf pop ebp */
  EBP = (pop32());
  /* 116ae7c0 ret  */
  ESPCHK(0x116ae780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e7d0 @ 0x116ae7d0 (183 bytes, 62 insns) */
void f_116ae7d0(void) {
  FTRACE(0x116ae7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae7d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ae7d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae7d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ae7dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ae7e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ae7e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae7e6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ae7e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae7ec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae7ef jne 0x116ae86b */
  if (!C.zf) goto L_116ae86b;
  /* 116ae7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae7f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ae7f7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae7fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae7ff je 0x116ae86b */
  if (C.zf) goto L_116ae86b;
  /* 116ae801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae807 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 116ae809 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae80c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ae80f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae813 jle 0x116ae86b */
  if ((C.zf||C.sf!=C.of)) goto L_116ae86b;
  /* 116ae815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae818 push edx */
  push32((uint32_t)(EDX));
  /* 116ae819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae81c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ae81f push ecx */
  push32((uint32_t)(ECX));
  /* 116ae820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae823 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116ae826 push eax */
  push32((uint32_t)(EAX));
  /* 116ae827 call 0x116aacf0 */
  push32(0x116ae82cu); f_116aacf0();
  /* 116ae82c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae82f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae832 jne 0x116ae855 */
  if (!C.zf) goto L_116ae855;
  /* 116ae834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae837 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ae83a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae842 je 0x116ae853 */
  if (C.zf) goto L_116ae853;
  /* 116ae844 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae847 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ae84a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 116ae84d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae850 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_116ae853:;
  /* 116ae853 jmp 0x116ae86b */
  goto L_116ae86b;
L_116ae855:;
  /* 116ae855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae858 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ae85b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae85e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae861 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116ae864 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ae86b:;
  /* 116ae86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae86e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae871 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116ae874 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116ae876 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ae879 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116ae880 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae883 mov esp, ebp */
  ESP = (EBP);
  /* 116ae885 pop ebp */
  EBP = (pop32());
  /* 116ae886 ret  */
  ESPCHK(0x116ae7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e890 @ 0x116ae890 (15 bytes, 7 insns) */
void f_116ae890(void) {
  FTRACE(0x116ae890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae890 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae891 mov ebp, esp */
  EBP = (ESP);
  /* 116ae893 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ae895 call 0x116ae8a0 */
  push32(0x116ae89au); f_116ae8a0();
  /* 116ae89a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae89d pop ebp */
  EBP = (pop32());
  /* 116ae89e ret  */
  ESPCHK(0x116ae890u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8a0 @ 0x116ae8a0 (319 bytes, 94 insns) */
void f_116ae8a0(void) {
  FTRACE(0x116ae8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae8a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ae8a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae8a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ae8ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ae8b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae8b6 call 0x1169c120 */
  push32(0x116ae8bbu); f_1169c120();
  /* 116ae8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae8be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ae8c5 jmp 0x116ae8d0 */
  goto L_116ae8d0;
L_116ae8c7:;
  /* 116ae8c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae8ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae8cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ae8d0:;
  /* 116ae8d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae8d3 cmp ecx, dword ptr [0x116d1c20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae8d9 jge 0x116ae9c3 */
  if ((C.sf==C.of)) goto L_116ae9c3;
  /* 116ae8df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae8e2 mov eax, dword ptr [0x116d08dc] */
  EAX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae8e7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae8eb je 0x116ae9be */
  if (C.zf) goto L_116ae9be;
  /* 116ae8f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae8f4 mov edx, dword ptr [0x116d08dc] */
  EDX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae8fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ae8fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ae900 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 116ae906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ae908 je 0x116ae9be */
  if (C.zf) goto L_116ae9be;
  /* 116ae90e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae911 mov eax, dword ptr [0x116d08dc] */
  EAX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae916 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ae919 push ecx */
  push32((uint32_t)(ECX));
  /* 116ae91a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae91d push edx */
  push32((uint32_t)(EDX));
  /* 116ae91e call 0x116ab2a0 */
  push32(0x116ae923u); f_116ab2a0();
  /* 116ae923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae926 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae929 mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae92f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ae932 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116ae935 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 116ae93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ae93c je 0x116ae9a5 */
  if (C.zf) goto L_116ae9a5;
  /* 116ae93e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae942 jne 0x116ae969 */
  if (!C.zf) goto L_116ae969;
  /* 116ae944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae947 mov edx, dword ptr [0x116d08dc] */
  EDX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae94d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ae950 push eax */
  push32((uint32_t)(EAX));
  /* 116ae951 call 0x116ae780 */
  push32(0x116ae956u); f_116ae780();
  /* 116ae956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae959 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae95c je 0x116ae967 */
  if (C.zf) goto L_116ae967;
  /* 116ae95e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae964 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ae967:;
  /* 116ae967 jmp 0x116ae9a5 */
  goto L_116ae9a5;
L_116ae969:;
  /* 116ae969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae96d jne 0x116ae9a5 */
  if (!C.zf) goto L_116ae9a5;
  /* 116ae96f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae972 mov eax, dword ptr [0x116d08dc] */
  EAX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae977 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ae97a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ae97d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116ae980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ae982 je 0x116ae9a5 */
  if (C.zf) goto L_116ae9a5;
  /* 116ae984 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae987 mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae98d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ae990 push edx */
  push32((uint32_t)(EDX));
  /* 116ae991 call 0x116ae780 */
  push32(0x116ae996u); f_116ae780();
  /* 116ae996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae999 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae99c jne 0x116ae9a5 */
  if (!C.zf) goto L_116ae9a5;
  /* 116ae99e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_116ae9a5:;
  /* 116ae9a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae9a8 mov ecx, dword ptr [0x116d08dc] */
  ECX = (r32((uint32_t)(0x116d08dc)));
  /* 116ae9ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ae9b1 push edx */
  push32((uint32_t)(EDX));
  /* 116ae9b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ae9b5 push eax */
  push32((uint32_t)(EAX));
  /* 116ae9b6 call 0x116ab310 */
  push32(0x116ae9bbu); f_116ab310();
  /* 116ae9bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ae9be:;
  /* 116ae9be jmp 0x116ae8c7 */
  goto L_116ae8c7;
L_116ae9c3:;
  /* 116ae9c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ae9c5 call 0x1169c1c0 */
  push32(0x116ae9cau); f_1169c1c0();
  /* 116ae9ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ae9cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ae9d1 jne 0x116ae9d8 */
  if (!C.zf) goto L_116ae9d8;
  /* 116ae9d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ae9d6 jmp 0x116ae9db */
  goto L_116ae9db;
L_116ae9d8:;
  /* 116ae9d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ae9db:;
  /* 116ae9db mov esp, ebp */
  ESP = (EBP);
  /* 116ae9dd pop ebp */
  EBP = (pop32());
  /* 116ae9de ret  */
  ESPCHK(0x116ae8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e9e0 @ 0x116ae9e0 (289 bytes, 97 insns) */
void f_116ae9e0(void) {
  FTRACE(0x116ae9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ae9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ae9e1 mov ebp, esp */
  EBP = (ESP);
  /* 116ae9e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ae9e6 push esi */
  push32((uint32_t)(ESI));
  /* 116ae9e7 mov eax, dword ptr [0x116cf540] */
  EAX = (r32((uint32_t)(0x116cf540)));
  /* 116ae9ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ae9ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ae9f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116ae9fd jmp 0x116aea08 */
  goto L_116aea08;
L_116ae9ff:;
  /* 116ae9ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aea02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116aea08:;
  /* 116aea08 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aea0c jae 0x116aea41 */
  if (!C.cf) goto L_116aea41;
  /* 116aea0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aea11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aea14 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116aea17 push ecx */
  push32((uint32_t)(ECX));
  /* 116aea18 call 0x116a07b0 */
  push32(0x116aea1du); f_116a07b0();
  /* 116aea1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea20 mov esi, eax */
  ESI = (EAX);
  /* 116aea22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aea25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aea28 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 116aea2c push ecx */
  push32((uint32_t)(ECX));
  /* 116aea2d call 0x116a07b0 */
  push32(0x116aea32u); f_116a07b0();
  /* 116aea32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea38 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116aea3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aea3f jmp 0x116ae9ff */
  goto L_116ae9ff;
L_116aea41:;
  /* 116aea41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aea44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea47 push eax */
  push32((uint32_t)(EAX));
  /* 116aea48 call 0x1169c200 */
  push32(0x116aea4du); f_1169c200();
  /* 116aea4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aea53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aea57 je 0x116aeaf9 */
  if (C.zf) goto L_116aeaf9;
  /* 116aea5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aea60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aea63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aea6a jmp 0x116aea75 */
  goto L_116aea75;
L_116aea6c:;
  /* 116aea6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aea6f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea72 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116aea75:;
  /* 116aea75 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aea79 jae 0x116aeaea */
  if (!C.cf) goto L_116aeaea;
  /* 116aea7b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aea7e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 116aea81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aea84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aea87 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aea8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aea8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aea90 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116aea93 push ecx */
  push32((uint32_t)(ECX));
  /* 116aea94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aea97 push edx */
  push32((uint32_t)(EDX));
  /* 116aea98 call 0x1169a7d0 */
  push32(0x116aea9du); f_1169a7d0();
  /* 116aea9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeaa0 push eax */
  push32((uint32_t)(EAX));
  /* 116aeaa1 call 0x116a07b0 */
  push32(0x116aeaa6u); f_116a07b0();
  /* 116aeaa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeaa9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeaac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeaae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aeab1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeab4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 116aeab7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeaba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeabd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aeac0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeac3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aeac6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116aeaca push eax */
  push32((uint32_t)(EAX));
  /* 116aeacb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeace push ecx */
  push32((uint32_t)(ECX));
  /* 116aeacf call 0x1169a7d0 */
  push32(0x116aead4u); f_1169a7d0();
  /* 116aead4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aead7 push eax */
  push32((uint32_t)(EAX));
  /* 116aead8 call 0x116a07b0 */
  push32(0x116aeaddu); f_116a07b0();
  /* 116aeadd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeae3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeae5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aeae8 jmp 0x116aea6c */
  goto L_116aea6c;
L_116aeaea:;
  /* 116aeaea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeaed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116aeaf0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeaf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeaf6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116aeaf9:;
  /* 116aeaf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aeafc pop esi */
  ESI = (pop32());
  /* 116aeafd mov esp, ebp */
  ESP = (EBP);
  /* 116aeaff pop ebp */
  EBP = (pop32());
  /* 116aeb00 ret  */
  ESPCHK(0x116ae9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb10 @ 0x116aeb10 (291 bytes, 97 insns) */
void f_116aeb10(void) {
  FTRACE(0x116aeb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aeb10 push ebp */
  push32((uint32_t)(EBP));
  /* 116aeb11 mov ebp, esp */
  EBP = (ESP);
  /* 116aeb13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aeb16 push esi */
  push32((uint32_t)(ESI));
  /* 116aeb17 mov eax, dword ptr [0x116cf540] */
  EAX = (r32((uint32_t)(0x116cf540)));
  /* 116aeb1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aeb1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116aeb26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aeb2d jmp 0x116aeb38 */
  goto L_116aeb38;
L_116aeb2f:;
  /* 116aeb2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeb32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116aeb38:;
  /* 116aeb38 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aeb3c jae 0x116aeb72 */
  if (!C.cf) goto L_116aeb72;
  /* 116aeb3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeb41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aeb44 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 116aeb48 push ecx */
  push32((uint32_t)(ECX));
  /* 116aeb49 call 0x116a07b0 */
  push32(0x116aeb4eu); f_116a07b0();
  /* 116aeb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb51 mov esi, eax */
  ESI = (EAX);
  /* 116aeb53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeb56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aeb59 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 116aeb5d push ecx */
  push32((uint32_t)(ECX));
  /* 116aeb5e call 0x116a07b0 */
  push32(0x116aeb63u); f_116a07b0();
  /* 116aeb63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb66 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb69 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116aeb6d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aeb70 jmp 0x116aeb2f */
  goto L_116aeb2f;
L_116aeb72:;
  /* 116aeb72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aeb75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb78 push eax */
  push32((uint32_t)(EAX));
  /* 116aeb79 call 0x1169c200 */
  push32(0x116aeb7eu); f_1169c200();
  /* 116aeb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeb81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aeb84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aeb88 je 0x116aec2b */
  if (C.zf) goto L_116aec2b;
  /* 116aeb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aeb91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aeb94 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aeb9b jmp 0x116aeba6 */
  goto L_116aeba6;
L_116aeb9d:;
  /* 116aeb9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeba0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeba3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116aeba6:;
  /* 116aeba6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aebaa jae 0x116aec1c */
  if (!C.cf) goto L_116aec1c;
  /* 116aebac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebaf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 116aebb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aebb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aebbb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aebbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aebc1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 116aebc5 push ecx */
  push32((uint32_t)(ECX));
  /* 116aebc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebc9 push edx */
  push32((uint32_t)(EDX));
  /* 116aebca call 0x1169a7d0 */
  push32(0x116aebcfu); f_1169a7d0();
  /* 116aebcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aebd2 push eax */
  push32((uint32_t)(EAX));
  /* 116aebd3 call 0x116a07b0 */
  push32(0x116aebd8u); f_116a07b0();
  /* 116aebd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aebdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aebe0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116aebe3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebe6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 116aebe9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aebec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aebef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aebf2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aebf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aebf8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116aebfc push eax */
  push32((uint32_t)(EAX));
  /* 116aebfd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aec00 push ecx */
  push32((uint32_t)(ECX));
  /* 116aec01 call 0x1169a7d0 */
  push32(0x116aec06u); f_1169a7d0();
  /* 116aec06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec09 push eax */
  push32((uint32_t)(EAX));
  /* 116aec0a call 0x116a07b0 */
  push32(0x116aec0fu); f_116a07b0();
  /* 116aec0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aec15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aec1a jmp 0x116aeb9d */
  goto L_116aeb9d;
L_116aec1c:;
  /* 116aec1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aec1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116aec22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aec25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116aec2b:;
  /* 116aec2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aec2e pop esi */
  ESI = (pop32());
  /* 116aec2f mov esp, ebp */
  ESP = (EBP);
  /* 116aec31 pop ebp */
  EBP = (pop32());
  /* 116aec32 ret  */
  ESPCHK(0x116aeb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec40 @ 0x116aec40 (878 bytes, 273 insns) */
void f_116aec40(void) {
  FTRACE(0x116aec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aec40 push ebp */
  push32((uint32_t)(EBP));
  /* 116aec41 mov ebp, esp */
  EBP = (ESP);
  /* 116aec43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aec46 push esi */
  push32((uint32_t)(ESI));
  /* 116aec47 mov eax, dword ptr [0x116cf540] */
  EAX = (r32((uint32_t)(0x116cf540)));
  /* 116aec4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aec4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116aec56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aec5d jmp 0x116aec68 */
  goto L_116aec68;
L_116aec5f:;
  /* 116aec5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aec62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116aec68:;
  /* 116aec68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aec6c jae 0x116aeca1 */
  if (!C.cf) goto L_116aeca1;
  /* 116aec6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aec71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aec74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116aec77 push ecx */
  push32((uint32_t)(ECX));
  /* 116aec78 call 0x116a07b0 */
  push32(0x116aec7du); f_116a07b0();
  /* 116aec7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec80 mov esi, eax */
  ESI = (EAX);
  /* 116aec82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aec85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aec88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 116aec8c push ecx */
  push32((uint32_t)(ECX));
  /* 116aec8d call 0x116a07b0 */
  push32(0x116aec92u); f_116a07b0();
  /* 116aec92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aec98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116aec9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aec9f jmp 0x116aec5f */
  goto L_116aec5f;
L_116aeca1:;
  /* 116aeca1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aeca8 jmp 0x116aecb3 */
  goto L_116aecb3;
L_116aecaa:;
  /* 116aecaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aecad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aecb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116aecb3:;
  /* 116aecb3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aecb7 jae 0x116aeced */
  if (!C.cf) goto L_116aeced;
  /* 116aecb9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aecbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aecbf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116aecc3 push eax */
  push32((uint32_t)(EAX));
  /* 116aecc4 call 0x116a07b0 */
  push32(0x116aecc9u); f_116a07b0();
  /* 116aecc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeccc mov esi, eax */
  ESI = (EAX);
  /* 116aecce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aecd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aecd4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116aecd8 push eax */
  push32((uint32_t)(EAX));
  /* 116aecd9 call 0x116a07b0 */
  push32(0x116aecdeu); f_116a07b0();
  /* 116aecde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aece1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aece4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116aece8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116aeceb jmp 0x116aecaa */
  goto L_116aecaa;
L_116aeced:;
  /* 116aeced mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aecf0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 116aecf6 push eax */
  push32((uint32_t)(EAX));
  /* 116aecf7 call 0x116a07b0 */
  push32(0x116aecfcu); f_116a07b0();
  /* 116aecfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aecff mov esi, eax */
  ESI = (EAX);
  /* 116aed01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aed04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 116aed0a push edx */
  push32((uint32_t)(EDX));
  /* 116aed0b call 0x116a07b0 */
  push32(0x116aed10u); f_116a07b0();
  /* 116aed10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116aed1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aed1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aed20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116aed26 push edx */
  push32((uint32_t)(EDX));
  /* 116aed27 call 0x116a07b0 */
  push32(0x116aed2cu); f_116a07b0();
  /* 116aed2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aed32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aed36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aed39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aed3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 116aed42 push ecx */
  push32((uint32_t)(ECX));
  /* 116aed43 call 0x116a07b0 */
  push32(0x116aed48u); f_116a07b0();
  /* 116aed48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aed4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116aed52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aed55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aed58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 116aed5e push edx */
  push32((uint32_t)(EDX));
  /* 116aed5f call 0x116a07b0 */
  push32(0x116aed64u); f_116a07b0();
  /* 116aed64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aed6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aed6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aed71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aed74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed79 push eax */
  push32((uint32_t)(EAX));
  /* 116aed7a call 0x1169c200 */
  push32(0x116aed7fu); f_1169c200();
  /* 116aed7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aed85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aed89 je 0x116aefa6 */
  if (C.zf) goto L_116aefa6;
  /* 116aed8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aed92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116aed95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aed98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aed9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aeda1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 116aeda6 mov eax, dword ptr [0x116cf540] */
  EAX = (r32((uint32_t)(0x116cf540)));
  /* 116aedab push eax */
  push32((uint32_t)(EAX));
  /* 116aedac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aedaf push ecx */
  push32((uint32_t)(ECX));
  /* 116aedb0 call 0x116a61d0 */
  push32(0x116aedb5u); f_116a61d0();
  /* 116aedb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aedb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aedbf jmp 0x116aedca */
  goto L_116aedca;
L_116aedc1:;
  /* 116aedc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aedc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aedc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116aedca:;
  /* 116aedca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aedce jae 0x116aee3e */
  if (!C.cf) goto L_116aee3e;
  /* 116aedd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aedd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aedd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aedd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116aeddc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aeddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aede2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116aede5 push edx */
  push32((uint32_t)(EDX));
  /* 116aede6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aede9 push eax */
  push32((uint32_t)(EAX));
  /* 116aedea call 0x1169a7d0 */
  push32(0x116aedefu); f_1169a7d0();
  /* 116aedef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aedf2 push eax */
  push32((uint32_t)(EAX));
  /* 116aedf3 call 0x116a07b0 */
  push32(0x116aedf8u); f_116a07b0();
  /* 116aedf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aedfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aedfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aee02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aee05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aee0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 116aee12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aee18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 116aee1c push edx */
  push32((uint32_t)(EDX));
  /* 116aee1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee20 push eax */
  push32((uint32_t)(EAX));
  /* 116aee21 call 0x1169a7d0 */
  push32(0x116aee26u); f_1169a7d0();
  /* 116aee26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aee29 push eax */
  push32((uint32_t)(EAX));
  /* 116aee2a call 0x116a07b0 */
  push32(0x116aee2fu); f_116a07b0();
  /* 116aee2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aee32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aee39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aee3c jmp 0x116aedc1 */
  goto L_116aedc1;
L_116aee3e:;
  /* 116aee3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aee45 jmp 0x116aee50 */
  goto L_116aee50;
L_116aee47:;
  /* 116aee47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aee4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116aee50:;
  /* 116aee50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aee54 jae 0x116aeec6 */
  if (!C.cf) goto L_116aeec6;
  /* 116aee56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aee5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 116aee63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aee69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116aee6d push eax */
  push32((uint32_t)(EAX));
  /* 116aee6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee71 push ecx */
  push32((uint32_t)(ECX));
  /* 116aee72 call 0x1169a7d0 */
  push32(0x116aee77u); f_1169a7d0();
  /* 116aee77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aee7a push eax */
  push32((uint32_t)(EAX));
  /* 116aee7b call 0x116a07b0 */
  push32(0x116aee80u); f_116a07b0();
  /* 116aee80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aee83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116aee8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aee8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aee93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aee96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 116aee9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aee9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aeea0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116aeea4 push eax */
  push32((uint32_t)(EAX));
  /* 116aeea5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeea8 push ecx */
  push32((uint32_t)(ECX));
  /* 116aeea9 call 0x1169a7d0 */
  push32(0x116aeeaeu); f_1169a7d0();
  /* 116aeeae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeeb1 push eax */
  push32((uint32_t)(EAX));
  /* 116aeeb2 call 0x116a07b0 */
  push32(0x116aeeb7u); f_116a07b0();
  /* 116aeeb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeeba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeebd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116aeec1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aeec4 jmp 0x116aee47 */
  goto L_116aee47;
L_116aeec6:;
  /* 116aeec6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aeec9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeecc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 116aeed2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aeed5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 116aeedb push ecx */
  push32((uint32_t)(ECX));
  /* 116aeedc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeedf push edx */
  push32((uint32_t)(EDX));
  /* 116aeee0 call 0x1169a7d0 */
  push32(0x116aeee5u); f_1169a7d0();
  /* 116aeee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeee8 push eax */
  push32((uint32_t)(EAX));
  /* 116aeee9 call 0x116a07b0 */
  push32(0x116aeeeeu); f_116a07b0();
  /* 116aeeee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aeef1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aeef4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aeef8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aeefb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aeefe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 116aef07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aef0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 116aef10 push eax */
  push32((uint32_t)(EAX));
  /* 116aef11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef14 push ecx */
  push32((uint32_t)(ECX));
  /* 116aef15 call 0x1169a7d0 */
  push32(0x116aef1au); f_1169a7d0();
  /* 116aef1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef1d push eax */
  push32((uint32_t)(EAX));
  /* 116aef1e call 0x116a07b0 */
  push32(0x116aef23u); f_116a07b0();
  /* 116aef23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116aef2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aef30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aef33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 116aef3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aef3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 116aef45 push ecx */
  push32((uint32_t)(ECX));
  /* 116aef46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef49 push edx */
  push32((uint32_t)(EDX));
  /* 116aef4a call 0x1169a7d0 */
  push32(0x116aef4fu); f_1169a7d0();
  /* 116aef4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef52 push eax */
  push32((uint32_t)(EAX));
  /* 116aef53 call 0x116a07b0 */
  push32(0x116aef58u); f_116a07b0();
  /* 116aef58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116aef62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aef65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aef68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 116aef71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aef74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 116aef7a push eax */
  push32((uint32_t)(EAX));
  /* 116aef7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef7e push ecx */
  push32((uint32_t)(ECX));
  /* 116aef7f call 0x1169a7d0 */
  push32(0x116aef84u); f_1169a7d0();
  /* 116aef84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef87 push eax */
  push32((uint32_t)(EAX));
  /* 116aef88 call 0x116a07b0 */
  push32(0x116aef8du); f_116a07b0();
  /* 116aef8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aef90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aef93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116aef97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aef9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aef9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aefa0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_116aefa6:;
  /* 116aefa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aefa9 pop esi */
  ESI = (pop32());
  /* 116aefaa mov esp, ebp */
  ESP = (EBP);
  /* 116aefac pop ebp */
  EBP = (pop32());
  /* 116aefad ret  */
  ESPCHK(0x116aec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001efb0 @ 0x116aefb0 (31 bytes, 15 insns) */
void f_116aefb0(void) {
  FTRACE(0x116aefb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aefb0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aefb1 mov ebp, esp */
  EBP = (ESP);
  /* 116aefb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aefb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116aefb8 push eax */
  push32((uint32_t)(EAX));
  /* 116aefb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aefbc push ecx */
  push32((uint32_t)(ECX));
  /* 116aefbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aefc0 push edx */
  push32((uint32_t)(EDX));
  /* 116aefc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aefc4 push eax */
  push32((uint32_t)(EAX));
  /* 116aefc5 call 0x116aefd0 */
  push32(0x116aefcau); f_116aefd0();
  /* 116aefca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aefcd pop ebp */
  EBP = (pop32());
  /* 116aefce ret  */
  ESPCHK(0x116aefb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001efd0 @ 0x116aefd0 (393 bytes, 123 insns) */
void f_116aefd0(void) {
  FTRACE(0x116aefd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aefd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aefd1 mov ebp, esp */
  EBP = (ESP);
  /* 116aefd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aefd6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aefda jne 0x116aefe6 */
  if (!C.zf) goto L_116aefe6;
  /* 116aefdc mov eax, dword ptr [0x116cf540] */
  EAX = (r32((uint32_t)(0x116cf540)));
  /* 116aefe1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116aefe4 jmp 0x116aefec */
  goto L_116aefec;
L_116aefe6:;
  /* 116aefe6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116aefe9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116aefec:;
  /* 116aefec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aefef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116aeff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aeff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aeff8 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116aeffd call dword ptr [0x116d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d344c))), 0x116af003u);
  /* 116af003 cmp dword ptr [0x116d1c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af00a je 0x116af02a */
  if (C.zf) goto L_116af02a;
  /* 116af00c push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116af011 call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116af017u);
  /* 116af017 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116af019 call 0x1169c120 */
  push32(0x116af01eu); f_1169c120();
  /* 116af01e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af021 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116af028 jmp 0x116af031 */
  goto L_116af031;
L_116af02a:;
  /* 116af02a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116af031:;
  /* 116af031 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af035 jbe 0x116af122 */
  if ((C.cf||C.zf)) goto L_116af122;
  /* 116af03b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af03e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116af040 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 116af043 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116af047 je 0x116af051 */
  if (C.zf) goto L_116af051;
  /* 116af049 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116af04d je 0x116af056 */
  if (C.zf) goto L_116af056;
  /* 116af04f jmp 0x116af0b0 */
  goto L_116af0b0;
L_116af051:;
  /* 116af051 jmp 0x116af122 */
  goto L_116af122;
L_116af056:;
  /* 116af056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af05c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 116af05f mov dword ptr [0x116d08c8], 0 */
  w32((uint32_t)(0x116d08c8), (0x0u));
  /* 116af069 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af06c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116af06f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af072 jne 0x116af087 */
  if (!C.zf) goto L_116af087;
  /* 116af074 mov dword ptr [0x116d08c8], 1 */
  w32((uint32_t)(0x116d08c8), (0x1u));
  /* 116af07e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af081 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af084 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116af087:;
  /* 116af087 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af08a push ecx */
  push32((uint32_t)(ECX));
  /* 116af08b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116af08e push edx */
  push32((uint32_t)(EDX));
  /* 116af08f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116af092 push eax */
  push32((uint32_t)(EAX));
  /* 116af093 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af096 push ecx */
  push32((uint32_t)(ECX));
  /* 116af097 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af09a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116af09c push eax */
  push32((uint32_t)(EAX));
  /* 116af09d call 0x116af160 */
  push32(0x116af0a2u); f_116af160();
  /* 116af0a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af0a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af0a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af0ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116af0ae jmp 0x116af11d */
  goto L_116af11d;
L_116af0b0:;
  /* 116af0b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af0b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116af0b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116af0b7 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116af0bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116af0bf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116af0c3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116af0c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116af0cb je 0x116af0f8 */
  if (C.zf) goto L_116af0f8;
  /* 116af0cd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af0d1 jbe 0x116af0f8 */
  if ((C.cf||C.zf)) goto L_116af0f8;
  /* 116af0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af0d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af0d9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116af0db mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116af0dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af0e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af0e3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116af0e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af0e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af0ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116af0ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af0f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af0f5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116af0f8:;
  /* 116af0f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af0fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af0fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116af100 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116af102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af105 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af108 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116af10b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af10e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af111 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116af114 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af117 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af11a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116af11d:;
  /* 116af11d jmp 0x116af031 */
  goto L_116af031;
L_116af122:;
  /* 116af122 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af126 je 0x116af134 */
  if (C.zf) goto L_116af134;
  /* 116af128 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116af12a call 0x1169c1c0 */
  push32(0x116af12fu); f_1169c1c0();
  /* 116af12f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af132 jmp 0x116af13f */
  goto L_116af13f;
L_116af134:;
  /* 116af134 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116af139 call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116af13fu);
L_116af13f:;
  /* 116af13f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af143 jbe 0x116af153 */
  if ((C.cf||C.zf)) goto L_116af153;
  /* 116af145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af148 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116af14b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af14e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af151 jmp 0x116af155 */
  goto L_116af155;
L_116af153:;
  /* 116af153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116af155:;
  /* 116af155 mov esp, ebp */
  ESP = (EBP);
  /* 116af157 pop ebp */
  EBP = (pop32());
  /* 116af158 ret  */
  ESPCHK(0x116aefd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f160 @ 0x116af160 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_116af160(void) {
  FTRACE(0x116af160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116af160 push ebp */
  push32((uint32_t)(EBP));
  /* 116af161 mov ebp, esp */
  EBP = (ESP);
  /* 116af163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af166 push esi */
  push32((uint32_t)(ESI));
  /* 116af167 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 116af16b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116af16e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af171 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af174 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116af177 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af17b ja 0x116af6c8 */
  if ((!C.cf&&!C.zf)) goto L_116af6c8;
  /* 116af181 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116af186 mov dl, byte ptr [eax + 0x116af729] */
  DL = (r8((uint32_t)(EAX + 0x116af729)));
  /* 116af18c jmp dword ptr [edx*4 + 0x116af6cd] */
  switch (EDX) {
    case 0: goto L_116af6a6;
    case 1: goto L_116af1b5;
    case 2: goto L_116af1fb;
    case 3: goto L_116af348;
    case 4: goto L_116af370;
    case 5: goto L_116af40f;
    case 6: goto L_116af47b;
    case 7: goto L_116af4a4;
    case 8: goto L_116af4e5;
    case 9: goto L_116af5c7;
    case 10: goto L_116af62e;
    case 11: goto L_116af67b;
    case 12: goto L_116af193;
    case 13: goto L_116af1d8;
    case 14: goto L_116af21e;
    case 15: goto L_116af31e;
    case 16: goto L_116af3b5;
    case 17: goto L_116af3e2;
    case 18: goto L_116af437;
    case 19: goto L_116af4bb;
    case 20: goto L_116af569;
    case 21: goto L_116af5f8;
    case 22: goto L_116af6c8;
    default: x86_unimpl("switch@0x116af18c out of table"); return;
  }
L_116af193:;
  /* 116af193 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af196 push ecx */
  push32((uint32_t)(ECX));
  /* 116af197 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af19a push edx */
  push32((uint32_t)(EDX));
  /* 116af19b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af19e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116af1a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af1a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116af1a7 push eax */
  push32((uint32_t)(EAX));
  /* 116af1a8 call 0x116af780 */
  push32(0x116af1adu); f_116af780();
  /* 116af1ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af1b0 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af1b5:;
  /* 116af1b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116af1b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af1bc push edx */
  push32((uint32_t)(EDX));
  /* 116af1bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af1c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116af1c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af1c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116af1ca push eax */
  push32((uint32_t)(EAX));
  /* 116af1cb call 0x116af780 */
  push32(0x116af1d0u); f_116af780();
  /* 116af1d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af1d3 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af1d8:;
  /* 116af1d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af1db push ecx */
  push32((uint32_t)(ECX));
  /* 116af1dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af1df push edx */
  push32((uint32_t)(EDX));
  /* 116af1e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af1e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116af1e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af1e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116af1ed push eax */
  push32((uint32_t)(EAX));
  /* 116af1ee call 0x116af780 */
  push32(0x116af1f3u); f_116af780();
  /* 116af1f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af1f6 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af1fb:;
  /* 116af1fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af1fe push ecx */
  push32((uint32_t)(ECX));
  /* 116af1ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af202 push edx */
  push32((uint32_t)(EDX));
  /* 116af203 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af206 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116af209 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af20c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116af210 push eax */
  push32((uint32_t)(EAX));
  /* 116af211 call 0x116af780 */
  push32(0x116af216u); f_116af780();
  /* 116af216 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af219 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af21e:;
  /* 116af21e cmp dword ptr [0x116d08c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af225 je 0x116af2a6 */
  if (C.zf) goto L_116af2a6;
  /* 116af227 mov dword ptr [0x116d08c8], 0 */
  w32((uint32_t)(0x116d08c8), (0x0u));
  /* 116af231 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af234 push ecx */
  push32((uint32_t)(ECX));
  /* 116af235 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af238 push edx */
  push32((uint32_t)(EDX));
  /* 116af239 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af23c push eax */
  push32((uint32_t)(EAX));
  /* 116af23d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af240 push ecx */
  push32((uint32_t)(ECX));
  /* 116af241 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af244 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 116af24a push eax */
  push32((uint32_t)(EAX));
  /* 116af24b call 0x116af930 */
  push32(0x116af250u); f_116af930();
  /* 116af250 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af253 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af256 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af259 jne 0x116af260 */
  if (!C.zf) goto L_116af260;
  /* 116af25b jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af260:;
  /* 116af260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af263 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af265 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 116af268 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af26b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af270 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af273 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af275 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af278 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af27a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af27d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af280 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af282 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af285 push ecx */
  push32((uint32_t)(ECX));
  /* 116af286 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af289 push edx */
  push32((uint32_t)(EDX));
  /* 116af28a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af28d push eax */
  push32((uint32_t)(EAX));
  /* 116af28e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af291 push ecx */
  push32((uint32_t)(ECX));
  /* 116af292 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af295 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116af29b push eax */
  push32((uint32_t)(EAX));
  /* 116af29c call 0x116af930 */
  push32(0x116af2a1u); f_116af930();
  /* 116af2a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af2a4 jmp 0x116af319 */
  goto L_116af319;
L_116af2a6:;
  /* 116af2a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af2a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116af2aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af2ad push edx */
  push32((uint32_t)(EDX));
  /* 116af2ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af2b1 push eax */
  push32((uint32_t)(EAX));
  /* 116af2b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 116af2b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af2b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116af2bf push eax */
  push32((uint32_t)(EAX));
  /* 116af2c0 call 0x116af930 */
  push32(0x116af2c5u); f_116af930();
  /* 116af2c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af2c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af2cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af2ce jne 0x116af2d5 */
  if (!C.zf) goto L_116af2d5;
  /* 116af2d0 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af2d5:;
  /* 116af2d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af2d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af2da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 116af2dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af2e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af2e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af2e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af2e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af2ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af2ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af2ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af2f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af2f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af2f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af2fa push ecx */
  push32((uint32_t)(ECX));
  /* 116af2fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af2fe push edx */
  push32((uint32_t)(EDX));
  /* 116af2ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af302 push eax */
  push32((uint32_t)(EAX));
  /* 116af303 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af306 push ecx */
  push32((uint32_t)(ECX));
  /* 116af307 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af30a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116af310 push eax */
  push32((uint32_t)(EAX));
  /* 116af311 call 0x116af930 */
  push32(0x116af316u); f_116af930();
  /* 116af316 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116af319:;
  /* 116af319 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af31e:;
  /* 116af31e mov ecx, dword ptr [0x116d08c8] */
  ECX = (r32((uint32_t)(0x116d08c8)));
  /* 116af324 mov dword ptr [0x116d08d8], ecx */
  w32((uint32_t)(0x116d08d8), (ECX));
  /* 116af32a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af32d push edx */
  push32((uint32_t)(EDX));
  /* 116af32e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af331 push eax */
  push32((uint32_t)(EAX));
  /* 116af332 push 2 */
  push32((uint32_t)(0x2u));
  /* 116af334 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af337 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116af33a push edx */
  push32((uint32_t)(EDX));
  /* 116af33b call 0x116af7d0 */
  push32(0x116af340u); f_116af7d0();
  /* 116af340 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af343 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af348:;
  /* 116af348 mov eax, dword ptr [0x116d08c8] */
  EAX = (r32((uint32_t)(0x116d08c8)));
  /* 116af34d mov dword ptr [0x116d08d8], eax */
  w32((uint32_t)(0x116d08d8), (EAX));
  /* 116af352 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af355 push ecx */
  push32((uint32_t)(ECX));
  /* 116af356 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af359 push edx */
  push32((uint32_t)(EDX));
  /* 116af35a push 2 */
  push32((uint32_t)(0x2u));
  /* 116af35c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af35f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116af362 push ecx */
  push32((uint32_t)(ECX));
  /* 116af363 call 0x116af7d0 */
  push32(0x116af368u); f_116af7d0();
  /* 116af368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af36b jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af370:;
  /* 116af370 mov edx, dword ptr [0x116d08c8] */
  EDX = (r32((uint32_t)(0x116d08c8)));
  /* 116af376 mov dword ptr [0x116d08d8], edx */
  w32((uint32_t)(0x116d08d8), (EDX));
  /* 116af37c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af37f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 116af382 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af383 mov ecx, 0xc */
  ECX = (0xcu);
  /* 116af388 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af38a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116af38d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af391 jne 0x116af39a */
  if (!C.zf) goto L_116af39a;
  /* 116af393 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_116af39a:;
  /* 116af39a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af39d push edx */
  push32((uint32_t)(EDX));
  /* 116af39e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af3a1 push eax */
  push32((uint32_t)(EAX));
  /* 116af3a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116af3a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116af3a8 call 0x116af7d0 */
  push32(0x116af3adu); f_116af7d0();
  /* 116af3ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af3b0 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af3b5:;
  /* 116af3b5 mov edx, dword ptr [0x116d08c8] */
  EDX = (r32((uint32_t)(0x116d08c8)));
  /* 116af3bb mov dword ptr [0x116d08d8], edx */
  w32((uint32_t)(0x116d08d8), (EDX));
  /* 116af3c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af3c4 push eax */
  push32((uint32_t)(EAX));
  /* 116af3c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 116af3c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116af3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af3ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116af3d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af3d4 push eax */
  push32((uint32_t)(EAX));
  /* 116af3d5 call 0x116af7d0 */
  push32(0x116af3dau); f_116af7d0();
  /* 116af3da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af3dd jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af3e2:;
  /* 116af3e2 mov ecx, dword ptr [0x116d08c8] */
  ECX = (r32((uint32_t)(0x116d08c8)));
  /* 116af3e8 mov dword ptr [0x116d08d8], ecx */
  w32((uint32_t)(0x116d08d8), (ECX));
  /* 116af3ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af3f1 push edx */
  push32((uint32_t)(EDX));
  /* 116af3f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af3f5 push eax */
  push32((uint32_t)(EAX));
  /* 116af3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116af3f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af3fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116af3fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af401 push edx */
  push32((uint32_t)(EDX));
  /* 116af402 call 0x116af7d0 */
  push32(0x116af407u); f_116af7d0();
  /* 116af407 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af40a jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af40f:;
  /* 116af40f mov eax, dword ptr [0x116d08c8] */
  EAX = (r32((uint32_t)(0x116d08c8)));
  /* 116af414 mov dword ptr [0x116d08d8], eax */
  w32((uint32_t)(0x116d08d8), (EAX));
  /* 116af419 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af41c push ecx */
  push32((uint32_t)(ECX));
  /* 116af41d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af420 push edx */
  push32((uint32_t)(EDX));
  /* 116af421 push 2 */
  push32((uint32_t)(0x2u));
  /* 116af423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af426 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116af429 push ecx */
  push32((uint32_t)(ECX));
  /* 116af42a call 0x116af7d0 */
  push32(0x116af42fu); f_116af7d0();
  /* 116af42f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af432 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af437:;
  /* 116af437 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af43a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af43e jg 0x116af45c */
  if ((!C.zf&&C.sf==C.of)) goto L_116af45c;
  /* 116af440 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af443 push eax */
  push32((uint32_t)(EAX));
  /* 116af444 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af447 push ecx */
  push32((uint32_t)(ECX));
  /* 116af448 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af44b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 116af451 push eax */
  push32((uint32_t)(EAX));
  /* 116af452 call 0x116af780 */
  push32(0x116af457u); f_116af780();
  /* 116af457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af45a jmp 0x116af476 */
  goto L_116af476;
L_116af45c:;
  /* 116af45c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af45f push ecx */
  push32((uint32_t)(ECX));
  /* 116af460 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af463 push edx */
  push32((uint32_t)(EDX));
  /* 116af464 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af467 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 116af46d push ecx */
  push32((uint32_t)(ECX));
  /* 116af46e call 0x116af780 */
  push32(0x116af473u); f_116af780();
  /* 116af473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116af476:;
  /* 116af476 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af47b:;
  /* 116af47b mov edx, dword ptr [0x116d08c8] */
  EDX = (r32((uint32_t)(0x116d08c8)));
  /* 116af481 mov dword ptr [0x116d08d8], edx */
  w32((uint32_t)(0x116d08d8), (EDX));
  /* 116af487 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af48a push eax */
  push32((uint32_t)(EAX));
  /* 116af48b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af48e push ecx */
  push32((uint32_t)(ECX));
  /* 116af48f push 2 */
  push32((uint32_t)(0x2u));
  /* 116af491 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af494 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af496 push eax */
  push32((uint32_t)(EAX));
  /* 116af497 call 0x116af7d0 */
  push32(0x116af49cu); f_116af7d0();
  /* 116af49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af49f jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af4a4:;
  /* 116af4a4 mov ecx, dword ptr [0x116d08c8] */
  ECX = (r32((uint32_t)(0x116d08c8)));
  /* 116af4aa mov dword ptr [0x116d08d8], ecx */
  w32((uint32_t)(0x116d08d8), (ECX));
  /* 116af4b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af4b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116af4b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116af4b9 jmp 0x116af50d */
  goto L_116af50d;
L_116af4bb:;
  /* 116af4bb mov ecx, dword ptr [0x116d08c8] */
  ECX = (r32((uint32_t)(0x116d08c8)));
  /* 116af4c1 mov dword ptr [0x116d08d8], ecx */
  w32((uint32_t)(0x116d08d8), (ECX));
  /* 116af4c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af4ca push edx */
  push32((uint32_t)(EDX));
  /* 116af4cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af4ce push eax */
  push32((uint32_t)(EAX));
  /* 116af4cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116af4d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af4d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116af4d7 push edx */
  push32((uint32_t)(EDX));
  /* 116af4d8 call 0x116af7d0 */
  push32(0x116af4ddu); f_116af7d0();
  /* 116af4dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af4e0 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af4e5:;
  /* 116af4e5 mov eax, dword ptr [0x116d08c8] */
  EAX = (r32((uint32_t)(0x116d08c8)));
  /* 116af4ea mov dword ptr [0x116d08d8], eax */
  w32((uint32_t)(0x116d08d8), (EAX));
  /* 116af4ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af4f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af4f6 jne 0x116af501 */
  if (!C.zf) goto L_116af501;
  /* 116af4f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 116af4ff jmp 0x116af50d */
  goto L_116af50d;
L_116af501:;
  /* 116af501 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af504 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116af507 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af50a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116af50d:;
  /* 116af50d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af510 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116af513 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af516 jge 0x116af521 */
  if ((C.sf==C.of)) goto L_116af521;
  /* 116af518 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116af51f jmp 0x116af54e */
  goto L_116af54e;
L_116af521:;
  /* 116af521 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af524 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116af527 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af528 mov ecx, 7 */
  ECX = (0x7u);
  /* 116af52d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af52f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116af532 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af535 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116af538 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af539 mov ecx, 7 */
  ECX = (0x7u);
  /* 116af53e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af540 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af543 jl 0x116af54e */
  if ((C.sf!=C.of)) goto L_116af54e;
  /* 116af545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af548 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af54b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116af54e:;
  /* 116af54e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af551 push eax */
  push32((uint32_t)(EAX));
  /* 116af552 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af555 push ecx */
  push32((uint32_t)(ECX));
  /* 116af556 push 2 */
  push32((uint32_t)(0x2u));
  /* 116af558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af55b push edx */
  push32((uint32_t)(EDX));
  /* 116af55c call 0x116af7d0 */
  push32(0x116af561u); f_116af7d0();
  /* 116af561 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af564 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af569:;
  /* 116af569 cmp dword ptr [0x116d08c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af570 je 0x116af5a0 */
  if (C.zf) goto L_116af5a0;
  /* 116af572 mov dword ptr [0x116d08c8], 0 */
  w32((uint32_t)(0x116d08c8), (0x0u));
  /* 116af57c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af57f push eax */
  push32((uint32_t)(EAX));
  /* 116af580 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af583 push ecx */
  push32((uint32_t)(ECX));
  /* 116af584 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af587 push edx */
  push32((uint32_t)(EDX));
  /* 116af588 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af58b push eax */
  push32((uint32_t)(EAX));
  /* 116af58c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af58f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116af595 push edx */
  push32((uint32_t)(EDX));
  /* 116af596 call 0x116af930 */
  push32(0x116af59bu); f_116af930();
  /* 116af59b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af59e jmp 0x116af5c2 */
  goto L_116af5c2;
L_116af5a0:;
  /* 116af5a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af5a3 push eax */
  push32((uint32_t)(EAX));
  /* 116af5a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116af5a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af5ab push edx */
  push32((uint32_t)(EDX));
  /* 116af5ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af5af push eax */
  push32((uint32_t)(EAX));
  /* 116af5b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af5b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116af5b9 push edx */
  push32((uint32_t)(EDX));
  /* 116af5ba call 0x116af930 */
  push32(0x116af5bfu); f_116af930();
  /* 116af5bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116af5c2:;
  /* 116af5c2 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af5c7:;
  /* 116af5c7 mov dword ptr [0x116d08c8], 0 */
  w32((uint32_t)(0x116d08c8), (0x0u));
  /* 116af5d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af5d4 push eax */
  push32((uint32_t)(EAX));
  /* 116af5d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af5d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116af5d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af5dc push edx */
  push32((uint32_t)(EDX));
  /* 116af5dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af5e0 push eax */
  push32((uint32_t)(EAX));
  /* 116af5e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116af5e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 116af5ea push edx */
  push32((uint32_t)(EDX));
  /* 116af5eb call 0x116af930 */
  push32(0x116af5f0u); f_116af930();
  /* 116af5f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af5f3 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af5f8:;
  /* 116af5f8 mov eax, dword ptr [0x116d08c8] */
  EAX = (r32((uint32_t)(0x116d08c8)));
  /* 116af5fd mov dword ptr [0x116d08d8], eax */
  w32((uint32_t)(0x116d08d8), (EAX));
  /* 116af602 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af605 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 116af608 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af609 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 116af60e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af610 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116af613 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af616 push edx */
  push32((uint32_t)(EDX));
  /* 116af617 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af61a push eax */
  push32((uint32_t)(EAX));
  /* 116af61b push 2 */
  push32((uint32_t)(0x2u));
  /* 116af61d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af620 push ecx */
  push32((uint32_t)(ECX));
  /* 116af621 call 0x116af7d0 */
  push32(0x116af626u); f_116af7d0();
  /* 116af626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af629 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af62e:;
  /* 116af62e mov edx, dword ptr [0x116d08c8] */
  EDX = (r32((uint32_t)(0x116d08c8)));
  /* 116af634 mov dword ptr [0x116d08d8], edx */
  w32((uint32_t)(0x116d08d8), (EDX));
  /* 116af63a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af63d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 116af640 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af641 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 116af646 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af648 mov ecx, eax */
  ECX = (EAX);
  /* 116af64a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af64d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116af650 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af653 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116af656 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af657 mov esi, 0x64 */
  ESI = (0x64u);
  /* 116af65c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af65e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116af663 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af666 push eax */
  push32((uint32_t)(EAX));
  /* 116af667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af66a push ecx */
  push32((uint32_t)(ECX));
  /* 116af66b push 4 */
  push32((uint32_t)(0x4u));
  /* 116af66d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af670 push edx */
  push32((uint32_t)(EDX));
  /* 116af671 call 0x116af7d0 */
  push32(0x116af676u); f_116af7d0();
  /* 116af676 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af679 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af67b:;
  /* 116af67b call 0x116a5080 */
  push32(0x116af680u); f_116a5080();
  /* 116af680 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af683 push eax */
  push32((uint32_t)(EAX));
  /* 116af684 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af687 push ecx */
  push32((uint32_t)(ECX));
  /* 116af688 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af68b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116af68d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af691 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 116af694 mov ecx, dword ptr [eax*4 + 0x116ce5d4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce5d4)));
  /* 116af69b push ecx */
  push32((uint32_t)(ECX));
  /* 116af69c call 0x116af780 */
  push32(0x116af6a1u); f_116af780();
  /* 116af6a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af6a4 jmp 0x116af6c8 */
  goto L_116af6c8;
L_116af6a6:;
  /* 116af6a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af6a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af6ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 116af6ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af6b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af6b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af6b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af6b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af6bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af6be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af6c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af6c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af6c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116af6c8:;
  /* 116af6c8 pop esi */
  ESI = (pop32());
  /* 116af6c9 mov esp, ebp */
  ESP = (EBP);
  /* 116af6cb pop ebp */
  EBP = (pop32());
  /* 116af6cc ret  */
  ESPCHK(0x116af160u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x116af780 (72 bytes, 30 insns) */
void f_116af780(void) {
  FTRACE(0x116af780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116af780 push ebp */
  push32((uint32_t)(EBP));
  /* 116af781 mov ebp, esp */
  EBP = (ESP);
L_116af783:;
  /* 116af783 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af786 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af789 je 0x116af7c6 */
  if (C.zf) goto L_116af7c6;
  /* 116af78b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af78e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116af791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116af793 je 0x116af7c6 */
  if (C.zf) goto L_116af7c6;
  /* 116af795 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af798 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af79a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af79d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116af79f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116af7a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af7a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116af7a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af7a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af7ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116af7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af7b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af7b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116af7b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af7ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af7bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af7bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af7c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116af7c4 jmp 0x116af783 */
  goto L_116af783;
L_116af7c6:;
  /* 116af7c6 pop ebp */
  EBP = (pop32());
  /* 116af7c7 ret  */
  ESPCHK(0x116af780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f7d0 @ 0x116af7d0 (173 bytes, 64 insns) */
void f_116af7d0(void) {
  FTRACE(0x116af7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116af7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116af7d1 mov ebp, esp */
  EBP = (ESP);
  /* 116af7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116af7d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116af7db cmp dword ptr [0x116d08d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af7e2 je 0x116af7fa */
  if (C.zf) goto L_116af7fa;
  /* 116af7e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af7e7 push eax */
  push32((uint32_t)(EAX));
  /* 116af7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af7eb push ecx */
  push32((uint32_t)(ECX));
  /* 116af7ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af7ef push edx */
  push32((uint32_t)(EDX));
  /* 116af7f0 call 0x116af880 */
  push32(0x116af7f5u); f_116af880();
  /* 116af7f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116af7f8 jmp 0x116af879 */
  goto L_116af879;
L_116af7fa:;
  /* 116af7fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af7fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af800 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af802 jae 0x116af870 */
  if (!C.cf) goto L_116af870;
  /* 116af804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af807 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af80a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116af80d jmp 0x116af818 */
  goto L_116af818;
L_116af80f:;
  /* 116af80f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af812 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af815 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_116af818:;
  /* 116af818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af81b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af81e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116af820 je 0x116af854 */
  if (C.zf) goto L_116af854;
  /* 116af822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af825 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af826 mov ecx, 0xa */
  ECX = (0xau);
  /* 116af82b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af82d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af830 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af833 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af835 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af838 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 116af83b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af83e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af83f mov ecx, 0xa */
  ECX = (0xau);
  /* 116af844 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af846 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116af849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af84c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af84f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116af852 jmp 0x116af80f */
  goto L_116af80f;
L_116af854:;
  /* 116af854 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af857 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af859 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af85c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af85f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116af861 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af864 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af866 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af869 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af86c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116af86e jmp 0x116af879 */
  goto L_116af879;
L_116af870:;
  /* 116af870 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af873 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116af879:;
  /* 116af879 mov esp, ebp */
  ESP = (EBP);
  /* 116af87b pop ebp */
  EBP = (pop32());
  /* 116af87c ret  */
  ESPCHK(0x116af7d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x116af880 (172 bytes, 65 insns) */
void f_116af880(void) {
  FTRACE(0x116af880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116af880 push ebp */
  push32((uint32_t)(EBP));
  /* 116af881 mov ebp, esp */
  EBP = (ESP);
  /* 116af883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af886 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af889 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af88b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116af88e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af891 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af894 jbe 0x116af8db */
  if ((C.cf||C.zf)) goto L_116af8db;
L_116af896:;
  /* 116af896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af899 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af89a mov ecx, 0xa */
  ECX = (0xau);
  /* 116af89f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af8a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af8a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116af8a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af8af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116af8b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af8b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116af8b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af8ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af8bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116af8bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af8c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116af8c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 116af8c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116af8ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116af8cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af8d1 jle 0x116af8db */
  if ((C.zf||C.sf!=C.of)) goto L_116af8db;
  /* 116af8d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116af8d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af8d9 ja 0x116af896 */
  if ((!C.cf&&!C.zf)) goto L_116af896;
L_116af8db:;
  /* 116af8db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af8de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116af8e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116af8e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116af8e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116af8eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af8f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116af8f4:;
  /* 116af8f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116af8f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 116af8fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af8ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116af902 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116af904 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116af906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af909 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af90c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116af90f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116af912 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116af915 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116af917 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116af91a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af91d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116af920 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116af923 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af926 jb 0x116af8f4 */
  if (C.cf) goto L_116af8f4;
  /* 116af928 mov esp, ebp */
  ESP = (EBP);
  /* 116af92a pop ebp */
  EBP = (pop32());
  /* 116af92b ret  */
  ESPCHK(0x116af880u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f930 @ 0x116af930 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_116af930(void) {
  FTRACE(0x116af930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116af930 push ebp */
  push32((uint32_t)(EBP));
  /* 116af931 mov ebp, esp */
  EBP = (ESP);
  /* 116af933 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_116af936:;
  /* 116af936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af939 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116af93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116af93e je 0x116afdac */
  if (C.zf) goto L_116afdac;
  /* 116af944 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116af947 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af94a je 0x116afdac */
  if (C.zf) goto L_116afdac;
  /* 116af950 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 116af954 mov dword ptr [0x116d08d8], 0 */
  w32((uint32_t)(0x116d08d8), (0x0u));
  /* 116af95e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116af965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af968 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116af96b jmp 0x116af976 */
  goto L_116af976;
L_116af96d:;
  /* 116af96d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af970 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af973 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116af976:;
  /* 116af976 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af979 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116af97c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af97f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116af982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116af988 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116af98b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af98d jne 0x116af991 */
  if (!C.zf) goto L_116af991;
  /* 116af98f jmp 0x116af96d */
  goto L_116af96d;
L_116af991:;
  /* 116af991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116af994 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af997 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116af99a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116af99d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116af9a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116af9a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116af9a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af9a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116af9ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af9b0 ja 0x116afd00 */
  if ((!C.cf&&!C.zf)) goto L_116afd00;
  /* 116af9b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116af9b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116af9bb mov al, byte ptr [ecx + 0x116afddc] */
  AL = (r8((uint32_t)(ECX + 0x116afddc)));
  /* 116af9c1 jmp dword ptr [eax*4 + 0x116afdb0] */
  switch (EAX) {
    case 0: goto L_116afc1f;
    case 1: goto L_116afb03;
    case 2: goto L_116afa8e;
    case 3: goto L_116af9c8;
    case 4: goto L_116afa06;
    case 5: goto L_116afa67;
    case 6: goto L_116afab5;
    case 7: goto L_116afadc;
    case 8: goto L_116afb4a;
    case 9: goto L_116afa44;
    case 10: goto L_116afd00;
    default: x86_unimpl("switch@0x116af9c1 out of table"); return;
  }
L_116af9c8:;
  /* 116af9c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116af9cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116af9ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116af9d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116af9d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116af9d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116af9db ja 0x116afa01 */
  if ((!C.cf&&!C.zf)) goto L_116afa01;
  /* 116af9dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116af9e0 jmp dword ptr [ecx*4 + 0x116afe2f] */
  switch (ECX) {
    case 0: goto L_116af9e7;
    case 1: goto L_116af9f1;
    case 2: goto L_116af9f7;
    case 3: goto L_116af9fd;
    case 4: goto L_116afa25;
    case 5: goto L_116afa2f;
    case 6: goto L_116afa35;
    case 7: goto L_116afa3b;
    default: x86_unimpl("switch@0x116af9e0 out of table"); return;
  }
L_116af9e7:;
  /* 116af9e7 mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116af9f1:;
  /* 116af9f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 116af9f5 jmp 0x116afa01 */
  goto L_116afa01;
L_116af9f7:;
  /* 116af9f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 116af9fb jmp 0x116afa01 */
  goto L_116afa01;
L_116af9fd:;
  /* 116af9fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_116afa01:;
  /* 116afa01 jmp 0x116afd00 */
  goto L_116afd00;
L_116afa06:;
  /* 116afa06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afa09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116afa0c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116afa0f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afa12 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116afa15 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa19 ja 0x116afa3f */
  if ((!C.cf&&!C.zf)) goto L_116afa3f;
  /* 116afa1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116afa1e jmp dword ptr [ecx*4 + 0x116afe3f] */
  switch (ECX) {
    case 0: goto L_116afa25;
    case 1: goto L_116afa2f;
    case 2: goto L_116afa35;
    case 3: goto L_116afa3b;
    default: x86_unimpl("switch@0x116afa1e out of table"); return;
  }
L_116afa25:;
  /* 116afa25 mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116afa2f:;
  /* 116afa2f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 116afa33 jmp 0x116afa3f */
  goto L_116afa3f;
L_116afa35:;
  /* 116afa35 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 116afa39 jmp 0x116afa3f */
  goto L_116afa3f;
L_116afa3b:;
  /* 116afa3b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_116afa3f:;
  /* 116afa3f jmp 0x116afd00 */
  goto L_116afd00;
L_116afa44:;
  /* 116afa44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afa47 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116afa4a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa4e je 0x116afa58 */
  if (C.zf) goto L_116afa58;
  /* 116afa50 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa54 je 0x116afa5e */
  if (C.zf) goto L_116afa5e;
  /* 116afa56 jmp 0x116afa62 */
  goto L_116afa62;
L_116afa58:;
  /* 116afa58 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 116afa5c jmp 0x116afa62 */
  goto L_116afa62;
L_116afa5e:;
  /* 116afa5e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_116afa62:;
  /* 116afa62 jmp 0x116afd00 */
  goto L_116afd00;
L_116afa67:;
  /* 116afa67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afa6a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116afa6d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa71 je 0x116afa7b */
  if (C.zf) goto L_116afa7b;
  /* 116afa73 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa77 je 0x116afa85 */
  if (C.zf) goto L_116afa85;
  /* 116afa79 jmp 0x116afa89 */
  goto L_116afa89;
L_116afa7b:;
  /* 116afa7b mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116afa85:;
  /* 116afa85 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_116afa89:;
  /* 116afa89 jmp 0x116afd00 */
  goto L_116afd00;
L_116afa8e:;
  /* 116afa8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afa91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116afa94 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa98 je 0x116afaa2 */
  if (C.zf) goto L_116afaa2;
  /* 116afa9a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afa9e je 0x116afaac */
  if (C.zf) goto L_116afaac;
  /* 116afaa0 jmp 0x116afab0 */
  goto L_116afab0;
L_116afaa2:;
  /* 116afaa2 mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116afaac:;
  /* 116afaac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_116afab0:;
  /* 116afab0 jmp 0x116afd00 */
  goto L_116afd00;
L_116afab5:;
  /* 116afab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afab8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 116afabb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afabf je 0x116afac9 */
  if (C.zf) goto L_116afac9;
  /* 116afac1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afac5 je 0x116afad3 */
  if (C.zf) goto L_116afad3;
  /* 116afac7 jmp 0x116afad7 */
  goto L_116afad7;
L_116afac9:;
  /* 116afac9 mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116afad3:;
  /* 116afad3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_116afad7:;
  /* 116afad7 jmp 0x116afd00 */
  goto L_116afd00;
L_116afadc:;
  /* 116afadc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afadf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116afae2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afae6 je 0x116afaf0 */
  if (C.zf) goto L_116afaf0;
  /* 116afae8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afaec je 0x116afafa */
  if (C.zf) goto L_116afafa;
  /* 116afaee jmp 0x116afafe */
  goto L_116afafe;
L_116afaf0:;
  /* 116afaf0 mov dword ptr [0x116d08d8], 1 */
  w32((uint32_t)(0x116d08d8), (0x1u));
L_116afafa:;
  /* 116afafa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_116afafe:;
  /* 116afafe jmp 0x116afd00 */
  goto L_116afd00;
L_116afb03:;
  /* 116afb03 push 0x116cc1fc */
  push32((uint32_t)(0x116cc1fcu));
  /* 116afb08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afb0b push ecx */
  push32((uint32_t)(ECX));
  /* 116afb0c call 0x116b0360 */
  push32(0x116afb11u); f_116b0360();
  /* 116afb11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afb14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116afb16 jne 0x116afb23 */
  if (!C.zf) goto L_116afb23;
  /* 116afb18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afb1b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afb1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116afb21 jmp 0x116afb41 */
  goto L_116afb41;
L_116afb23:;
  /* 116afb23 push 0x116cc1f8 */
  push32((uint32_t)(0x116cc1f8u));
  /* 116afb28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afb2b push eax */
  push32((uint32_t)(EAX));
  /* 116afb2c call 0x116b0360 */
  push32(0x116afb31u); f_116b0360();
  /* 116afb31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afb34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116afb36 jne 0x116afb41 */
  if (!C.zf) goto L_116afb41;
  /* 116afb38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afb3b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afb3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116afb41:;
  /* 116afb41 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 116afb45 jmp 0x116afd00 */
  goto L_116afd00;
L_116afb4a:;
  /* 116afb4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116afb4d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afb51 jg 0x116afb61 */
  if ((!C.zf&&C.sf==C.of)) goto L_116afb61;
  /* 116afb53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116afb56 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 116afb5c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116afb5f jmp 0x116afb6d */
  goto L_116afb6d;
L_116afb61:;
  /* 116afb61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116afb64 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 116afb6a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116afb6d:;
  /* 116afb6d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afb71 jle 0x116afc14 */
  if ((C.zf||C.sf!=C.of)) goto L_116afc14;
  /* 116afb77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afb7a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afb7d jbe 0x116afc14 */
  if ((C.cf||C.zf)) goto L_116afc14;
  /* 116afb83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116afb86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116afb88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116afb8a mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116afb90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116afb92 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116afb96 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116afb9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116afb9e je 0x116afbd7 */
  if (C.zf) goto L_116afbd7;
  /* 116afba0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afba3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afba6 jbe 0x116afbd7 */
  if ((C.cf||C.zf)) goto L_116afbd7;
  /* 116afba8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afbad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116afbb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116afbb2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116afbb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afbb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afbbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116afbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116afbc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afbc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116afbca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afbcd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afbcf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afbd2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afbd5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116afbd7:;
  /* 116afbd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afbdc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116afbdf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116afbe1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116afbe3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbe6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afbe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afbeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afbee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116afbf0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116afbf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afbf6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116afbf9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afbfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afbfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afc01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afc04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116afc06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afc09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afc0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116afc0f jmp 0x116afb6d */
  goto L_116afb6d;
L_116afc14:;
  /* 116afc14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116afc17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116afc1a jmp 0x116af936 */
  goto L_116af936;
L_116afc1f:;
  /* 116afc1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afc22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116afc25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116afc27 je 0x116afcf2 */
  if (C.zf) goto L_116afcf2;
  /* 116afc2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afc33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116afc36:;
  /* 116afc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116afc3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116afc3e je 0x116afcf0 */
  if (C.zf) goto L_116afcf0;
  /* 116afc44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afc47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afc4a je 0x116afcf0 */
  if (C.zf) goto L_116afcf0;
  /* 116afc50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116afc56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afc59 jne 0x116afc69 */
  if (!C.zf) goto L_116afc69;
  /* 116afc5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afc61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116afc64 jmp 0x116afcf0 */
  goto L_116afcf0;
L_116afc69:;
  /* 116afc69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116afc6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116afc70 mov edx, dword ptr [0x116ce26c] */
  EDX = (r32((uint32_t)(0x116ce26c)));
  /* 116afc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116afc78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116afc7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116afc81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116afc83 je 0x116afcbc */
  if (C.zf) goto L_116afcbc;
  /* 116afc85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afc88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afc8b jbe 0x116afcbc */
  if ((C.cf||C.zf)) goto L_116afcbc;
  /* 116afc8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afc90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afc92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afc95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116afc97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116afc99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afc9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afc9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afca1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afca4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116afca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afca9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afcac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116afcaf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afcb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afcb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afcb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afcba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116afcbc:;
  /* 116afcbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afcbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afcc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afcc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116afcc6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116afcc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afccb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afccd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afcd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afcd3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116afcd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afcd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afcdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116afcde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afce1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afce3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afce6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afce9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116afceb jmp 0x116afc36 */
  goto L_116afc36;
L_116afcf0:;
  /* 116afcf0 jmp 0x116afcfb */
  goto L_116afcfb;
L_116afcf2:;
  /* 116afcf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afcf5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afcf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116afcfb:;
  /* 116afcfb jmp 0x116af936 */
  goto L_116af936;
L_116afd00:;
  /* 116afd00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116afd04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116afd06 je 0x116afd2c */
  if (C.zf) goto L_116afd2c;
  /* 116afd08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116afd0b push edx */
  push32((uint32_t)(EDX));
  /* 116afd0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afd0f push eax */
  push32((uint32_t)(EAX));
  /* 116afd10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd13 push ecx */
  push32((uint32_t)(ECX));
  /* 116afd14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116afd17 push edx */
  push32((uint32_t)(EDX));
  /* 116afd18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116afd1b push eax */
  push32((uint32_t)(EAX));
  /* 116afd1c call 0x116af160 */
  push32(0x116afd21u); f_116af160();
  /* 116afd21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afd24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116afd27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116afd2a jmp 0x116afda7 */
  goto L_116afda7;
L_116afd2c:;
  /* 116afd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116afd31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116afd33 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116afd39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116afd3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116afd3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116afd45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116afd47 je 0x116afd78 */
  if (C.zf) goto L_116afd78;
  /* 116afd49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afd51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116afd53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116afd55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afd5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afd5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116afd62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afd65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afd68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116afd6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afd6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afd70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afd73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afd76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116afd78:;
  /* 116afd78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116afd7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afd80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116afd82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116afd84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116afd89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afd8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afd8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116afd91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116afd94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116afd97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116afd9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afd9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116afd9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afda2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afda5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116afda7:;
  /* 116afda7 jmp 0x116af936 */
  goto L_116af936;
L_116afdac:;
  /* 116afdac mov esp, ebp */
  ESP = (EBP);
  /* 116afdae pop ebp */
  EBP = (pop32());
  /* 116afdaf ret  */
  ESPCHK(0x116af930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fe50 @ 0x116afe50 (650 bytes, 178 insns) */
void f_116afe50(void) {
  FTRACE(0x116afe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116afe50 push ebp */
  push32((uint32_t)(EBP));
  /* 116afe51 mov ebp, esp */
  EBP = (ESP);
  /* 116afe53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116afe59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afe5d jne 0x116affb9 */
  if (!C.zf) goto L_116affb9;
  /* 116afe63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116afe66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 116afe6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 116afe72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116afe75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116afe7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 116afe86 push 0 */
  push32((uint32_t)(0x0u));
  /* 116afe88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116afe8e push edx */
  push32((uint32_t)(EDX));
  /* 116afe8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116afe92 push eax */
  push32((uint32_t)(EAX));
  /* 116afe93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afe96 push ecx */
  push32((uint32_t)(ECX));
  /* 116afe97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116afe9a push edx */
  push32((uint32_t)(EDX));
  /* 116afe9b call 0x116b11b0 */
  push32(0x116afea0u); f_116b11b0();
  /* 116afea0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afea3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116afea6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afeaa jne 0x116aff3f */
  if (!C.zf) goto L_116aff3f;
  /* 116afeb0 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116afeb6u);
  /* 116afeb6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afeb9 je 0x116afec0 */
  if (C.zf) goto L_116afec0;
  /* 116afebb jmp 0x116aff9d */
  goto L_116aff9d;
L_116afec0:;
  /* 116afec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116afec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116afec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116afec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116afec9 push eax */
  push32((uint32_t)(EAX));
  /* 116afeca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116afecd push ecx */
  push32((uint32_t)(ECX));
  /* 116afece call 0x116b11b0 */
  push32(0x116afed3u); f_116b11b0();
  /* 116afed3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afed6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 116afedc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116afee3 jne 0x116afeea */
  if (!C.zf) goto L_116afeea;
  /* 116afee5 jmp 0x116aff9d */
  goto L_116aff9d;
L_116afeea:;
  /* 116afeea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 116afeec push 0x116cc204 */
  push32((uint32_t)(0x116cc204u));
  /* 116afef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116afef3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116afef9 push edx */
  push32((uint32_t)(EDX));
  /* 116afefa call 0x1169c220 */
  push32(0x116afeffu); f_1169c220();
  /* 116afeff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aff02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aff05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aff09 jne 0x116aff10 */
  if (!C.zf) goto L_116aff10;
  /* 116aff0b jmp 0x116aff9d */
  goto L_116aff9d;
L_116aff10:;
  /* 116aff10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116aff17 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aff19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 116aff1f push eax */
  push32((uint32_t)(EAX));
  /* 116aff20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aff23 push ecx */
  push32((uint32_t)(ECX));
  /* 116aff24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aff27 push edx */
  push32((uint32_t)(EDX));
  /* 116aff28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aff2b push eax */
  push32((uint32_t)(EAX));
  /* 116aff2c call 0x116b11b0 */
  push32(0x116aff31u); f_116b11b0();
  /* 116aff31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aff34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aff37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aff3b jne 0x116aff3f */
  if (!C.zf) goto L_116aff3f;
  /* 116aff3d jmp 0x116aff9d */
  goto L_116aff9d;
L_116aff3f:;
  /* 116aff3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 116aff41 push 0x116cc204 */
  push32((uint32_t)(0x116cc204u));
  /* 116aff46 push 2 */
  push32((uint32_t)(0x2u));
  /* 116aff48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aff4b push ecx */
  push32((uint32_t)(ECX));
  /* 116aff4c call 0x1169c220 */
  push32(0x116aff51u); f_1169c220();
  /* 116aff51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aff54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 116aff5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116aff5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 116aff62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aff65 jne 0x116aff69 */
  if (!C.zf) goto L_116aff69;
  /* 116aff67 jmp 0x116aff9d */
  goto L_116aff9d;
L_116aff69:;
  /* 116aff69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aff6c push ecx */
  push32((uint32_t)(ECX));
  /* 116aff6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aff70 push edx */
  push32((uint32_t)(EDX));
  /* 116aff71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 116aff77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116aff79 push ecx */
  push32((uint32_t)(ECX));
  /* 116aff7a call 0x116a10b0 */
  push32(0x116aff7fu); f_116a10b0();
  /* 116aff7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aff82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aff86 je 0x116aff96 */
  if (C.zf) goto L_116aff96;
  /* 116aff88 push 2 */
  push32((uint32_t)(0x2u));
  /* 116aff8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aff8d push edx */
  push32((uint32_t)(EDX));
  /* 116aff8e call 0x1169ccb0 */
  push32(0x116aff93u); f_1169ccb0();
  /* 116aff93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116aff96:;
  /* 116aff96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aff98 jmp 0x116b00d6 */
  goto L_116b00d6;
L_116aff9d:;
  /* 116aff9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116affa1 je 0x116affb1 */
  if (C.zf) goto L_116affb1;
  /* 116affa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116affa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116affa8 push eax */
  push32((uint32_t)(EAX));
  /* 116affa9 call 0x1169ccb0 */
  push32(0x116affaeu); f_1169ccb0();
  /* 116affae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116affb1:;
  /* 116affb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116affb4 jmp 0x116b00d6 */
  goto L_116b00d6;
L_116affb9:;
  /* 116affb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116affbd jne 0x116b00d3 */
  if (!C.zf) goto L_116b00d3;
  /* 116affc3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 116affcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116affd0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 116affd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116affd8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116affde push edx */
  push32((uint32_t)(EDX));
  /* 116affdf push 0x116d08ac */
  push32((uint32_t)(0x116d08acu));
  /* 116affe4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116affe7 push eax */
  push32((uint32_t)(EAX));
  /* 116affe8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116affeb push ecx */
  push32((uint32_t)(ECX));
  /* 116affec call 0x116b1010 */
  push32(0x116afff1u); f_116b1010();
  /* 116afff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116afff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116afff6 jne 0x116b0000 */
  if (!C.zf) goto L_116b0000;
  /* 116afff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116afffb jmp 0x116b00d6 */
  goto L_116b00d6;
L_116b0000:;
  /* 116b0000 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116b0006 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116b0009 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 116b0013 jmp 0x116b0024 */
  goto L_116b0024;
L_116b0015:;
  /* 116b0015 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116b001b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b001e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_116b0024:;
  /* 116b0024 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b002b jge 0x116b00cf */
  if ((C.sf==C.of)) goto L_116b00cf;
  /* 116b0031 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0038 jle 0x116b006b */
  if ((C.zf||C.sf!=C.of)) goto L_116b006b;
  /* 116b003a push 4 */
  push32((uint32_t)(0x4u));
  /* 116b003c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116b0042 mov dl, byte ptr [ecx*2 + 0x116d08ac] */
  DL = (r8((uint32_t)(ECX*2 + 0x116d08ac)));
  /* 116b0049 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 116b004f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116b0055 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b005a push eax */
  push32((uint32_t)(EAX));
  /* 116b005b call 0x116a17d0 */
  push32(0x116b0060u); f_116a17d0();
  /* 116b0060 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0063 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 116b0069 jmp 0x116b009e */
  goto L_116b009e;
L_116b006b:;
  /* 116b006b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116b0071 mov dl, byte ptr [ecx*2 + 0x116d08ac] */
  DL = (r8((uint32_t)(ECX*2 + 0x116d08ac)));
  /* 116b0078 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 116b007e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116b0084 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0089 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116b008f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b0091 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116b0095 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116b0098 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_116b009e:;
  /* 116b009e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b00a5 je 0x116b00c8 */
  if (C.zf) goto L_116b00c8;
  /* 116b00a7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116b00ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116b00b0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116b00b3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 116b00ba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116b00be mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116b00c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116b00c6 jmp 0x116b00ca */
  goto L_116b00ca;
L_116b00c8:;
  /* 116b00c8 jmp 0x116b00cf */
  goto L_116b00cf;
L_116b00ca:;
  /* 116b00ca jmp 0x116b0015 */
  goto L_116b0015;
L_116b00cf:;
  /* 116b00cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b00d1 jmp 0x116b00d6 */
  goto L_116b00d6;
L_116b00d3:;
  /* 116b00d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116b00d6:;
  /* 116b00d6 mov esp, ebp */
  ESP = (EBP);
  /* 116b00d8 pop ebp */
  EBP = (pop32());
  /* 116b00d9 ret  */
  ESPCHK(0x116afe50u, _esp0);
  ESP += 4; return;
}

/* FUN_100200e0 @ 0x116b00e0 (10 bytes, 5 insns) */
void f_116b00e0(void) {
  FTRACE(0x116b00e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b00e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b00e1 mov ebp, esp */
  EBP = (ESP);
  /* 116b00e3 mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116b00e8 pop ebp */
  EBP = (pop32());
  /* 116b00e9 ret  */
  ESPCHK(0x116b00e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100200f0 @ 0x116b00f0 (575 bytes, 196 insns) */
void f_116b00f0(void) {
  FTRACE(0x116b00f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b00f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b00f1 mov ebp, esp */
  EBP = (ESP);
  /* 116b00f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b00f5 push 0x116cc210 */
  push32((uint32_t)(0x116cc210u));
  /* 116b00fa push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116b00ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116b0105 push eax */
  push32((uint32_t)(EAX));
  /* 116b0106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116b010d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0110 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0111 push esi */
  push32((uint32_t)(ESI));
  /* 116b0112 push edi */
  push32((uint32_t)(EDI));
  /* 116b0113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b0116 cmp dword ptr [0x116d08b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b011d jne 0x116b016e */
  if (!C.zf) goto L_116b016e;
  /* 116b011f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 116b0122 push eax */
  push32((uint32_t)(EAX));
  /* 116b0123 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0125 push 0x116cb944 */
  push32((uint32_t)(0x116cb944u));
  /* 116b012a push 1 */
  push32((uint32_t)(0x1u));
  /* 116b012c call dword ptr [0x116d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3374))), 0x116b0132u);
  /* 116b0132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0134 je 0x116b0142 */
  if (C.zf) goto L_116b0142;
  /* 116b0136 mov dword ptr [0x116d08b8], 1 */
  w32((uint32_t)(0x116d08b8), (0x1u));
  /* 116b0140 jmp 0x116b016e */
  goto L_116b016e;
L_116b0142:;
  /* 116b0142 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 116b0145 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0146 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0148 push 0x116cb940 */
  push32((uint32_t)(0x116cb940u));
  /* 116b014d push 1 */
  push32((uint32_t)(0x1u));
  /* 116b014f push 0 */
  push32((uint32_t)(0x0u));
  /* 116b0151 call dword ptr [0x116d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3378))), 0x116b0157u);
  /* 116b0157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0159 je 0x116b0167 */
  if (C.zf) goto L_116b0167;
  /* 116b015b mov dword ptr [0x116d08b8], 2 */
  w32((uint32_t)(0x116d08b8), (0x2u));
  /* 116b0165 jmp 0x116b016e */
  goto L_116b016e;
L_116b0167:;
  /* 116b0167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0169 jmp 0x116b0349 */
  goto L_116b0349;
L_116b016e:;
  /* 116b016e cmp dword ptr [0x116d08b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d08b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0175 jne 0x116b0192 */
  if (!C.zf) goto L_116b0192;
  /* 116b0177 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b017a push edx */
  push32((uint32_t)(EDX));
  /* 116b017b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b017e push eax */
  push32((uint32_t)(EAX));
  /* 116b017f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0182 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0186 push edx */
  push32((uint32_t)(EDX));
  /* 116b0187 call dword ptr [0x116d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3374))), 0x116b018du);
  /* 116b018d jmp 0x116b0349 */
  goto L_116b0349;
L_116b0192:;
  /* 116b0192 cmp dword ptr [0x116d08b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d08b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0199 jne 0x116b0347 */
  if (!C.zf) goto L_116b0347;
  /* 116b019f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b01a3 jne 0x116b01ad */
  if (!C.zf) goto L_116b01ad;
  /* 116b01a5 mov eax, dword ptr [0x116d0838] */
  EAX = (r32((uint32_t)(0x116d0838)));
  /* 116b01aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_116b01ad:;
  /* 116b01ad push 0 */
  push32((uint32_t)(0x0u));
  /* 116b01af push 0 */
  push32((uint32_t)(0x0u));
  /* 116b01b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b01b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b01b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b01b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116b01b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b01bc push edx */
  push32((uint32_t)(EDX));
  /* 116b01bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116b01c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b01c5 push eax */
  push32((uint32_t)(EAX));
  /* 116b01c6 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116b01ccu);
  /* 116b01cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116b01cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b01d3 jne 0x116b01dc */
  if (!C.zf) goto L_116b01dc;
  /* 116b01d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b01d7 jmp 0x116b0349 */
  goto L_116b0349;
L_116b01dc:;
  /* 116b01dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116b01e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b01e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b01e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b01eb call 0x116a0a30 */
  push32(0x116b01f0u); f_116a0a30();
  /* 116b01f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 116b01f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b01f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116b01f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116b01fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b01ff push edx */
  push32((uint32_t)(EDX));
  /* 116b0200 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b0202 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116b0205 push eax */
  push32((uint32_t)(EAX));
  /* 116b0206 call 0x116a2540 */
  push32(0x116b020bu); f_116a2540();
  /* 116b020b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b020e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b0215 jmp 0x116b022e */
  goto L_116b022e;
  /* 116b0217 mov eax, 1 */
  EAX = (0x1u);
  /* 116b021c ret  */
  ESPCHK(0x116b00f0u, _esp0);
  ESP += 4; return;
  /* 116b021d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b0220 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 116b0227 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b022e:;
  /* 116b022e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0232 jne 0x116b023b */
  if (!C.zf) goto L_116b023b;
  /* 116b0234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0236 jmp 0x116b0349 */
  goto L_116b0349;
L_116b023b:;
  /* 116b023b push 0 */
  push32((uint32_t)(0x0u));
  /* 116b023d push 0 */
  push32((uint32_t)(0x0u));
  /* 116b023f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b0242 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0243 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116b0246 push edx */
  push32((uint32_t)(EDX));
  /* 116b0247 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b024a push eax */
  push32((uint32_t)(EAX));
  /* 116b024b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b024e push ecx */
  push32((uint32_t)(ECX));
  /* 116b024f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116b0254 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b0257 push edx */
  push32((uint32_t)(EDX));
  /* 116b0258 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116b025eu);
  /* 116b025e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0260 jne 0x116b0269 */
  if (!C.zf) goto L_116b0269;
  /* 116b0262 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0264 jmp 0x116b0349 */
  goto L_116b0349;
L_116b0269:;
  /* 116b0269 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116b0270 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b0273 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 116b0277 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b027a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b027c call 0x116a0a30 */
  push32(0x116b0281u); f_116a0a30();
  /* 116b0281 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116b0284 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b0287 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116b028a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116b028d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b0294 jmp 0x116b02ad */
  goto L_116b02ad;
  /* 116b0296 mov eax, 1 */
  EAX = (0x1u);
  /* 116b029b ret  */
  ESPCHK(0x116b00f0u, _esp0);
  ESP += 4; return;
  /* 116b029c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b029f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116b02a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b02ad:;
  /* 116b02ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b02b1 jne 0x116b02ba */
  if (!C.zf) goto L_116b02ba;
  /* 116b02b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b02b5 jmp 0x116b0349 */
  goto L_116b0349;
L_116b02ba:;
  /* 116b02ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b02be jne 0x116b02c9 */
  if (!C.zf) goto L_116b02c9;
  /* 116b02c0 mov edx, dword ptr [0x116d0828] */
  EDX = (r32((uint32_t)(0x116d0828)));
  /* 116b02c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116b02c9:;
  /* 116b02c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b02cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b02cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 116b02d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b02d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b02db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 116b02e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b02e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116b02e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b02e9 push edx */
  push32((uint32_t)(EDX));
  /* 116b02ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116b02ed push eax */
  push32((uint32_t)(EAX));
  /* 116b02ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b02f1 push ecx */
  push32((uint32_t)(ECX));
  /* 116b02f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116b02f5 push edx */
  push32((uint32_t)(EDX));
  /* 116b02f6 call dword ptr [0x116d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3378))), 0x116b02fcu);
  /* 116b02fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116b02ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b0302 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b0305 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b0307 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 116b030c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0312 je 0x116b0328 */
  if (C.zf) goto L_116b0328;
  /* 116b0314 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b0317 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b031a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b031c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116b0320 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0326 je 0x116b032c */
  if (C.zf) goto L_116b032c;
L_116b0328:;
  /* 116b0328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b032a jmp 0x116b0349 */
  goto L_116b0349;
L_116b032c:;
  /* 116b032c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b032f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116b0331 push eax */
  push32((uint32_t)(EAX));
  /* 116b0332 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b0335 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0336 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b0339 push edx */
  push32((uint32_t)(EDX));
  /* 116b033a call 0x116a25a0 */
  push32(0x116b033fu); f_116a25a0();
  /* 116b033f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0342 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b0345 jmp 0x116b0349 */
  goto L_116b0349;
L_116b0347:;
  /* 116b0347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b0349:;
  /* 116b0349 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 116b034c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b034f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116b0356 pop edi */
  EDI = (pop32());
  /* 116b0357 pop esi */
  ESI = (pop32());
  /* 116b0358 pop ebx */
  EBX = (pop32());
  /* 116b0359 mov esp, ebp */
  ESP = (EBP);
  /* 116b035b pop ebp */
  EBP = (pop32());
  /* 116b035c ret  */
  ESPCHK(0x116b00f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020360 @ 0x116b0360 (208 bytes, 85 insns) */
void f_116b0360(void) {
  FTRACE(0x116b0360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0360 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0361 mov ebp, esp */
  EBP = (ESP);
  /* 116b0363 push edi */
  push32((uint32_t)(EDI));
  /* 116b0364 push esi */
  push32((uint32_t)(ESI));
  /* 116b0365 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0366 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0369 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116b036c lea eax, [0x116d0820] */
  EAX = ((uint32_t)(0x116d0820));
  /* 116b0372 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0376 jne 0x116b03b3 */
  if (!C.zf) goto L_116b03b3;
  /* 116b0378 mov al, 0xff */
  AL = (0xffu);
  /* 116b037a mov edi, edi */
  EDI = (EDI);
L_116b037c:;
  /* 116b037c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116b037e je 0x116b03ae */
  if (C.zf) goto L_116b03ae;
  /* 116b0380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116b0382 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116b0383 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 116b0385 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116b0386 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0388 je 0x116b037c */
  if (C.zf) goto L_116b037c;
  /* 116b038a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116b038c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b038e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116b0390 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116b0393 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116b0395 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116b0397 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 116b0399 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116b039b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b039d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116b039f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116b03a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116b03a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116b03a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b03a8 je 0x116b037c */
  if (C.zf) goto L_116b037c;
  /* 116b03aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116b03ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_116b03ae:;
  /* 116b03ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 116b03b1 jmp 0x116b042b */
  goto L_116b042b;
L_116b03b3:;
  /* 116b03b3 lock inc dword ptr [0x116d1c34] */
  x86_unimpl("lock inc @ 0x116b03b3");
  /* 116b03ba cmp dword ptr [0x116d1c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b03c1 jg 0x116b03c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116b03c7;
  /* 116b03c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b03c5 jmp 0x116b03dc */
  goto L_116b03dc;
L_116b03c7:;
  /* 116b03c7 lock dec dword ptr [0x116d1c34] */
  x86_unimpl("lock dec @ 0x116b03c7");
  /* 116b03ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116b03d0 call 0x1169c120 */
  push32(0x116b03d5u); f_1169c120();
  /* 116b03d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_116b03dc:;
  /* 116b03dc mov eax, 0xff */
  EAX = (0xffu);
  /* 116b03e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116b03e3 nop  */
  /* nop */
L_116b03e4:;
  /* 116b03e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116b03e6 je 0x116b040f */
  if (C.zf) goto L_116b040f;
  /* 116b03e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116b03ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116b03eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116b03ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116b03ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b03f0 je 0x116b03e4 */
  if (C.zf) goto L_116b03e4;
  /* 116b03f2 push eax */
  push32((uint32_t)(EAX));
  /* 116b03f3 push ebx */
  push32((uint32_t)(EBX));
  /* 116b03f4 call 0x116a1940 */
  push32(0x116b03f9u); f_116a1940();
  /* 116b03f9 mov ebx, eax */
  EBX = (EAX);
  /* 116b03fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b03fe call 0x116a1940 */
  push32(0x116b0403u); f_116a1940();
  /* 116b0403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0406 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0408 je 0x116b03e4 */
  if (C.zf) goto L_116b03e4;
  /* 116b040a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b040c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116b040f:;
  /* 116b040f mov ebx, eax */
  EBX = (EAX);
  /* 116b0411 pop eax */
  EAX = (pop32());
  /* 116b0412 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0414 jne 0x116b041f */
  if (!C.zf) goto L_116b041f;
  /* 116b0416 lock dec dword ptr [0x116d1c34] */
  x86_unimpl("lock dec @ 0x116b0416");
  /* 116b041d jmp 0x116b0429 */
  goto L_116b0429;
L_116b041f:;
  /* 116b041f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116b0421 call 0x1169c1c0 */
  push32(0x116b0426u); f_1169c1c0();
  /* 116b0426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116b0429:;
  /* 116b0429 mov eax, ebx */
  EAX = (EBX);
L_116b042b:;
  /* 116b042b pop ebx */
  EBX = (pop32());
  /* 116b042c pop esi */
  ESI = (pop32());
  /* 116b042d pop edi */
  EDI = (pop32());
  /* 116b042e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116b042f ret  */
  ESPCHK(0x116b0360u, _esp0);
  ESP += 4; return;
}

/* FUN_10020430 @ 0x116b0430 (257 bytes, 103 insns) */
void f_116b0430(void) {
  FTRACE(0x116b0430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0430 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0431 mov ebp, esp */
  EBP = (ESP);
  /* 116b0433 push edi */
  push32((uint32_t)(EDI));
  /* 116b0434 push esi */
  push32((uint32_t)(ESI));
  /* 116b0435 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0436 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b0439 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b043b je 0x116b052a */
  if (C.zf) goto L_116b052a;
  /* 116b0441 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0444 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0447 lea eax, [0x116d0820] */
  EAX = ((uint32_t)(0x116d0820));
  /* 116b044d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0451 jne 0x116b04a1 */
  if (!C.zf) goto L_116b04a1;
  /* 116b0453 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 116b0455 mov bl, 0x5a */
  BL = (0x5au);
  /* 116b0457 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 116b0459 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116b045c:;
  /* 116b045c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 116b045e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116b0460 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 116b0462 je 0x116b0485 */
  if (C.zf) goto L_116b0485;
  /* 116b0464 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116b0466 je 0x116b0485 */
  if (C.zf) goto L_116b0485;
  /* 116b0468 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116b0469 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116b046a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b046c jb 0x116b0474 */
  if (C.cf) goto L_116b0474;
  /* 116b046e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0470 ja 0x116b0474 */
  if ((!C.cf&&!C.zf)) goto L_116b0474;
  /* 116b0472 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_116b0474:;
  /* 116b0474 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0476 jb 0x116b047e */
  if (C.cf) goto L_116b047e;
  /* 116b0478 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b047a ja 0x116b047e */
  if ((!C.cf&&!C.zf)) goto L_116b047e;
  /* 116b047c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_116b047e:;
  /* 116b047e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0480 jne 0x116b048f */
  if (!C.zf) goto L_116b048f;
  /* 116b0482 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116b0483 jne 0x116b045c */
  if (!C.zf) goto L_116b045c;
L_116b0485:;
  /* 116b0485 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b0487 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b0489 je 0x116b052a */
  if (C.zf) goto L_116b052a;
L_116b048f:;
  /* 116b048f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116b0494 jb 0x116b052a */
  if (C.cf) goto L_116b052a;
  /* 116b049a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116b049c jmp 0x116b052a */
  goto L_116b052a;
L_116b04a1:;
  /* 116b04a1 lock inc dword ptr [0x116d1c34] */
  x86_unimpl("lock inc @ 0x116b04a1");
  /* 116b04a8 cmp dword ptr [0x116d1c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b04af jg 0x116b04b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116b04b5;
  /* 116b04b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b04b3 jmp 0x116b04ce */
  goto L_116b04ce;
L_116b04b5:;
  /* 116b04b5 lock dec dword ptr [0x116d1c34] */
  x86_unimpl("lock dec @ 0x116b04b5");
  /* 116b04bc mov ebx, ecx */
  EBX = (ECX);
  /* 116b04be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116b04c0 call 0x1169c120 */
  push32(0x116b04c5u); f_1169c120();
  /* 116b04c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 116b04cc mov ecx, ebx */
  ECX = (EBX);
L_116b04ce:;
  /* 116b04ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b04d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116b04d2 mov edi, edi */
  EDI = (EDI);
L_116b04d4:;
  /* 116b04d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116b04d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b04d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116b04da je 0x116b04ff */
  if (C.zf) goto L_116b04ff;
  /* 116b04dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116b04de je 0x116b04ff */
  if (C.zf) goto L_116b04ff;
  /* 116b04e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116b04e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116b04e2 push ecx */
  push32((uint32_t)(ECX));
  /* 116b04e3 push eax */
  push32((uint32_t)(EAX));
  /* 116b04e4 push ebx */
  push32((uint32_t)(EBX));
  /* 116b04e5 call 0x116a1940 */
  push32(0x116b04eau); f_116a1940();
  /* 116b04ea mov ebx, eax */
  EBX = (EAX);
  /* 116b04ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b04ef call 0x116a1940 */
  push32(0x116b04f4u); f_116a1940();
  /* 116b04f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b04f7 pop ecx */
  ECX = (pop32());
  /* 116b04f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b04fa jne 0x116b0505 */
  if (!C.zf) goto L_116b0505;
  /* 116b04fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116b04fd jne 0x116b04d4 */
  if (!C.zf) goto L_116b04d4;
L_116b04ff:;
  /* 116b04ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b0501 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0503 je 0x116b050e */
  if (C.zf) goto L_116b050e;
L_116b0505:;
  /* 116b0505 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116b050a jb 0x116b050e */
  if (C.cf) goto L_116b050e;
  /* 116b050c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_116b050e:;
  /* 116b050e pop eax */
  EAX = (pop32());
  /* 116b050f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0511 jne 0x116b051c */
  if (!C.zf) goto L_116b051c;
  /* 116b0513 lock dec dword ptr [0x116d1c34] */
  x86_unimpl("lock dec @ 0x116b0513");
  /* 116b051a jmp 0x116b052a */
  goto L_116b052a;
L_116b051c:;
  /* 116b051c mov ebx, ecx */
  EBX = (ECX);
  /* 116b051e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116b0520 call 0x1169c1c0 */
  push32(0x116b0525u); f_1169c1c0();
  /* 116b0525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0528 mov ecx, ebx */
  ECX = (EBX);
L_116b052a:;
  /* 116b052a mov eax, ecx */
  EAX = (ECX);
  /* 116b052c pop ebx */
  EBX = (pop32());
  /* 116b052d pop esi */
  ESI = (pop32());
  /* 116b052e pop edi */
  EDI = (pop32());
  /* 116b052f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116b0530 ret  */
  ESPCHK(0x116b0430u, _esp0);
  ESP += 4; return;
}

/* FUN_10020540 @ 0x116b0540 (970 bytes, 340 insns) */
void f_116b0540(void) {
  FTRACE(0x116b0540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0540 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0541 mov ebp, esp */
  EBP = (ESP);
  /* 116b0543 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b0545 push 0x116cc270 */
  push32((uint32_t)(0x116cc270u));
  /* 116b054a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116b054f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116b0555 push eax */
  push32((uint32_t)(EAX));
  /* 116b0556 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116b055d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0560 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0561 push esi */
  push32((uint32_t)(ESI));
  /* 116b0562 push edi */
  push32((uint32_t)(EDI));
  /* 116b0563 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b0566 cmp dword ptr [0x116d08bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b056d jne 0x116b05c6 */
  if (!C.zf) goto L_116b05c6;
  /* 116b056f push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0571 push 0x116cb944 */
  push32((uint32_t)(0x116cb944u));
  /* 116b0576 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0578 push 0x116cb944 */
  push32((uint32_t)(0x116cb944u));
  /* 116b057d push 0 */
  push32((uint32_t)(0x0u));
  /* 116b057f push 0 */
  push32((uint32_t)(0x0u));
  /* 116b0581 call dword ptr [0x116d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3340))), 0x116b0587u);
  /* 116b0587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0589 je 0x116b0597 */
  if (C.zf) goto L_116b0597;
  /* 116b058b mov dword ptr [0x116d08bc], 1 */
  w32((uint32_t)(0x116d08bc), (0x1u));
  /* 116b0595 jmp 0x116b05c6 */
  goto L_116b05c6;
L_116b0597:;
  /* 116b0597 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0599 push 0x116cb940 */
  push32((uint32_t)(0x116cb940u));
  /* 116b059e push 1 */
  push32((uint32_t)(0x1u));
  /* 116b05a0 push 0x116cb940 */
  push32((uint32_t)(0x116cb940u));
  /* 116b05a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b05a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b05a9 call dword ptr [0x116d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3344))), 0x116b05afu);
  /* 116b05af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b05b1 je 0x116b05bf */
  if (C.zf) goto L_116b05bf;
  /* 116b05b3 mov dword ptr [0x116d08bc], 2 */
  w32((uint32_t)(0x116d08bc), (0x2u));
  /* 116b05bd jmp 0x116b05c6 */
  goto L_116b05c6;
L_116b05bf:;
  /* 116b05bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b05c1 jmp 0x116b0924 */
  goto L_116b0924;
L_116b05c6:;
  /* 116b05c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b05ca jle 0x116b05df */
  if ((C.zf||C.sf!=C.of)) goto L_116b05df;
  /* 116b05cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b05cf push eax */
  push32((uint32_t)(EAX));
  /* 116b05d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b05d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116b05d4 call 0x116b0940 */
  push32(0x116b05d9u); f_116b0940();
  /* 116b05d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b05dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116b05df:;
  /* 116b05df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b05e3 jle 0x116b05f8 */
  if ((C.zf||C.sf!=C.of)) goto L_116b05f8;
  /* 116b05e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116b05e8 push edx */
  push32((uint32_t)(EDX));
  /* 116b05e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b05ec push eax */
  push32((uint32_t)(EAX));
  /* 116b05ed call 0x116b0940 */
  push32(0x116b05f2u); f_116b0940();
  /* 116b05f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b05f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_116b05f8:;
  /* 116b05f8 cmp dword ptr [0x116d08bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d08bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b05ff jne 0x116b0624 */
  if (!C.zf) goto L_116b0624;
  /* 116b0601 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116b0604 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0605 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b0608 push edx */
  push32((uint32_t)(EDX));
  /* 116b0609 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b060c push eax */
  push32((uint32_t)(EAX));
  /* 116b060d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b0610 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0611 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0614 push edx */
  push32((uint32_t)(EDX));
  /* 116b0615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0618 push eax */
  push32((uint32_t)(EAX));
  /* 116b0619 call dword ptr [0x116d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3344))), 0x116b061fu);
  /* 116b061f jmp 0x116b0924 */
  goto L_116b0924;
L_116b0624:;
  /* 116b0624 cmp dword ptr [0x116d08bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d08bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b062b jne 0x116b0922 */
  if (!C.zf) goto L_116b0922;
  /* 116b0631 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0635 jne 0x116b0640 */
  if (!C.zf) goto L_116b0640;
  /* 116b0637 mov ecx, dword ptr [0x116d0838] */
  ECX = (r32((uint32_t)(0x116d0838)));
  /* 116b063d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_116b0640:;
  /* 116b0640 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0644 je 0x116b0650 */
  if (C.zf) goto L_116b0650;
  /* 116b0646 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b064a jne 0x116b07cc */
  if (!C.zf) goto L_116b07cc;
L_116b0650:;
  /* 116b0650 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b0653 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0656 jne 0x116b0662 */
  if (!C.zf) goto L_116b0662;
  /* 116b0658 mov eax, 2 */
  EAX = (0x2u);
  /* 116b065d jmp 0x116b0924 */
  goto L_116b0924;
L_116b0662:;
  /* 116b0662 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0666 jle 0x116b0672 */
  if ((C.zf||C.sf!=C.of)) goto L_116b0672;
  /* 116b0668 mov eax, 1 */
  EAX = (0x1u);
  /* 116b066d jmp 0x116b0924 */
  goto L_116b0924;
L_116b0672:;
  /* 116b0672 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0676 jle 0x116b0682 */
  if ((C.zf||C.sf!=C.of)) goto L_116b0682;
  /* 116b0678 mov eax, 3 */
  EAX = (0x3u);
  /* 116b067d jmp 0x116b0924 */
  goto L_116b0924;
L_116b0682:;
  /* 116b0682 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 116b0685 push eax */
  push32((uint32_t)(EAX));
  /* 116b0686 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116b0689 push ecx */
  push32((uint32_t)(ECX));
  /* 116b068a call dword ptr [0x116d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d338c))), 0x116b0690u);
  /* 116b0690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0692 jne 0x116b069b */
  if (!C.zf) goto L_116b069b;
  /* 116b0694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0696 jmp 0x116b0924 */
  goto L_116b0924;
L_116b069b:;
  /* 116b069b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b069f jne 0x116b06a7 */
  if (!C.zf) goto L_116b06a7;
  /* 116b06a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06a5 je 0x116b06d4 */
  if (C.zf) goto L_116b06d4;
L_116b06a7:;
  /* 116b06a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06ab jne 0x116b06b3 */
  if (!C.zf) goto L_116b06b3;
  /* 116b06ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06b1 je 0x116b06d4 */
  if (C.zf) goto L_116b06d4;
L_116b06b3:;
  /* 116b06b3 push 0x116cc230 */
  push32((uint32_t)(0x116cc230u));
  /* 116b06b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b06ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 116b06bf push 0x116cc228 */
  push32((uint32_t)(0x116cc228u));
  /* 116b06c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b06c6 call 0x1169ade0 */
  push32(0x116b06cbu); f_1169ade0();
  /* 116b06cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b06ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06d1 jne 0x116b06d4 */
  if (!C.zf) goto L_116b06d4;
  /* 116b06d3 int3  */
  x86_unimpl("int3 @ 0x116b06d3");
L_116b06d4:;
  /* 116b06d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b06d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b06d8 jne 0x116b069b */
  if (!C.zf) goto L_116b069b;
  /* 116b06da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06de jle 0x116b0753 */
  if ((C.zf||C.sf!=C.of)) goto L_116b0753;
  /* 116b06e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b06e4 jae 0x116b06f0 */
  if (!C.cf) goto L_116b06f0;
  /* 116b06e6 mov eax, 3 */
  EAX = (0x3u);
  /* 116b06eb jmp 0x116b0924 */
  goto L_116b0924;
L_116b06f0:;
  /* 116b06f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 116b06f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 116b06f6 jmp 0x116b0701 */
  goto L_116b0701;
L_116b06f8:;
  /* 116b06f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b06fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b06fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_116b0701:;
  /* 116b0701 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b0704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0706 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116b0708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b070a je 0x116b0749 */
  if (C.zf) goto L_116b0749;
  /* 116b070c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b070f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b0711 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116b0714 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0716 je 0x116b0749 */
  if (C.zf) goto L_116b0749;
  /* 116b0718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b071b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b071d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116b071f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b0722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0724 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116b0726 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0728 jl 0x116b0747 */
  if ((C.sf!=C.of)) goto L_116b0747;
  /* 116b072a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b072d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b072f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116b0731 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b0734 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b0736 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116b0739 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b073b jg 0x116b0747 */
  if ((!C.zf&&C.sf==C.of)) goto L_116b0747;
  /* 116b073d mov eax, 2 */
  EAX = (0x2u);
  /* 116b0742 jmp 0x116b0924 */
  goto L_116b0924;
L_116b0747:;
  /* 116b0747 jmp 0x116b06f8 */
  goto L_116b06f8;
L_116b0749:;
  /* 116b0749 mov eax, 3 */
  EAX = (0x3u);
  /* 116b074e jmp 0x116b0924 */
  goto L_116b0924;
L_116b0753:;
  /* 116b0753 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0757 jle 0x116b07cc */
  if ((C.zf||C.sf!=C.of)) goto L_116b07cc;
  /* 116b0759 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b075d jae 0x116b0769 */
  if (!C.cf) goto L_116b0769;
  /* 116b075f mov eax, 1 */
  EAX = (0x1u);
  /* 116b0764 jmp 0x116b0924 */
  goto L_116b0924;
L_116b0769:;
  /* 116b0769 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 116b076c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 116b076f jmp 0x116b077a */
  goto L_116b077a;
L_116b0771:;
  /* 116b0771 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b0774 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0777 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_116b077a:;
  /* 116b077a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b077d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b077f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116b0781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0783 je 0x116b07c2 */
  if (C.zf) goto L_116b07c2;
  /* 116b0785 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b0788 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b078a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116b078d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b078f je 0x116b07c2 */
  if (C.zf) goto L_116b07c2;
  /* 116b0791 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b0794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0796 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116b0798 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b079b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116b079d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116b079f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b07a1 jl 0x116b07c0 */
  if ((C.sf!=C.of)) goto L_116b07c0;
  /* 116b07a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b07a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b07a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116b07aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116b07ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b07af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116b07b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b07b4 jg 0x116b07c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116b07c0;
  /* 116b07b6 mov eax, 2 */
  EAX = (0x2u);
  /* 116b07bb jmp 0x116b0924 */
  goto L_116b0924;
L_116b07c0:;
  /* 116b07c0 jmp 0x116b0771 */
  goto L_116b0771;
L_116b07c2:;
  /* 116b07c2 mov eax, 1 */
  EAX = (0x1u);
  /* 116b07c7 jmp 0x116b0924 */
  goto L_116b0924;
L_116b07cc:;
  /* 116b07cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116b07ce push 0 */
  push32((uint32_t)(0x0u));
  /* 116b07d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b07d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116b07d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b07d7 push edx */
  push32((uint32_t)(EDX));
  /* 116b07d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 116b07da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116b07dd push eax */
  push32((uint32_t)(EAX));
  /* 116b07de call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b07e4u);
  /* 116b07e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116b07e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b07eb jne 0x116b07f4 */
  if (!C.zf) goto L_116b07f4;
  /* 116b07ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b07ef jmp 0x116b0924 */
  goto L_116b0924;
L_116b07f4:;
  /* 116b07f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116b07fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b07fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116b0800 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0803 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b0805 call 0x116a0a30 */
  push32(0x116b080au); f_116a0a30();
  /* 116b080a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 116b080d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b0810 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 116b0813 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116b0816 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b081d jmp 0x116b0836 */
  goto L_116b0836;
  /* 116b081f mov eax, 1 */
  EAX = (0x1u);
  /* 116b0824 ret  */
  ESPCHK(0x116b0540u, _esp0);
  ESP += 4; return;
  /* 116b0825 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b0828 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116b082f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b0836:;
  /* 116b0836 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b083a jne 0x116b0843 */
  if (!C.zf) goto L_116b0843;
  /* 116b083c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b083e jmp 0x116b0924 */
  goto L_116b0924;
L_116b0843:;
  /* 116b0843 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b0846 push edx */
  push32((uint32_t)(EDX));
  /* 116b0847 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b084a push eax */
  push32((uint32_t)(EAX));
  /* 116b084b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b084e push ecx */
  push32((uint32_t)(ECX));
  /* 116b084f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b0852 push edx */
  push32((uint32_t)(EDX));
  /* 116b0853 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b0855 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116b0858 push eax */
  push32((uint32_t)(EAX));
  /* 116b0859 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b085fu);
  /* 116b085f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0861 jne 0x116b086a */
  if (!C.zf) goto L_116b086a;
  /* 116b0863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0865 jmp 0x116b0924 */
  goto L_116b0924;
L_116b086a:;
  /* 116b086a push 0 */
  push32((uint32_t)(0x0u));
  /* 116b086c push 0 */
  push32((uint32_t)(0x0u));
  /* 116b086e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116b0871 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0872 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b0875 push edx */
  push32((uint32_t)(EDX));
  /* 116b0876 push 9 */
  push32((uint32_t)(0x9u));
  /* 116b0878 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116b087b push eax */
  push32((uint32_t)(EAX));
  /* 116b087c call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b0882u);
  /* 116b0882 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116b0885 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0889 jne 0x116b0892 */
  if (!C.zf) goto L_116b0892;
  /* 116b088b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b088d jmp 0x116b0924 */
  goto L_116b0924;
L_116b0892:;
  /* 116b0892 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116b0899 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b089c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116b089e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b08a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b08a3 call 0x116a0a30 */
  push32(0x116b08a8u); f_116a0a30();
  /* 116b08a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 116b08ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b08ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 116b08b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116b08b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b08bb jmp 0x116b08d4 */
  goto L_116b08d4;
  /* 116b08bd mov eax, 1 */
  EAX = (0x1u);
  /* 116b08c2 ret  */
  ESPCHK(0x116b0540u, _esp0);
  ESP += 4; return;
  /* 116b08c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b08c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116b08cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b08d4:;
  /* 116b08d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b08d8 jne 0x116b08de */
  if (!C.zf) goto L_116b08de;
  /* 116b08da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b08dc jmp 0x116b0924 */
  goto L_116b0924;
L_116b08de:;
  /* 116b08de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b08e1 push edx */
  push32((uint32_t)(EDX));
  /* 116b08e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b08e5 push eax */
  push32((uint32_t)(EAX));
  /* 116b08e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116b08e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116b08ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b08ed push edx */
  push32((uint32_t)(EDX));
  /* 116b08ee push 1 */
  push32((uint32_t)(0x1u));
  /* 116b08f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116b08f3 push eax */
  push32((uint32_t)(EAX));
  /* 116b08f4 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b08fau);
  /* 116b08fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b08fc jne 0x116b0902 */
  if (!C.zf) goto L_116b0902;
  /* 116b08fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0900 jmp 0x116b0924 */
  goto L_116b0924;
L_116b0902:;
  /* 116b0902 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b0905 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0906 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b0909 push edx */
  push32((uint32_t)(EDX));
  /* 116b090a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b090d push eax */
  push32((uint32_t)(EAX));
  /* 116b090e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b0911 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0915 push edx */
  push32((uint32_t)(EDX));
  /* 116b0916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0919 push eax */
  push32((uint32_t)(EAX));
  /* 116b091a call dword ptr [0x116d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3340))), 0x116b0920u);
  /* 116b0920 jmp 0x116b0924 */
  goto L_116b0924;
L_116b0922:;
  /* 116b0922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b0924:;
  /* 116b0924 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 116b0927 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b092a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116b0931 pop edi */
  EDI = (pop32());
  /* 116b0932 pop esi */
  ESI = (pop32());
  /* 116b0933 pop ebx */
  EBX = (pop32());
  /* 116b0934 mov esp, ebp */
  ESP = (EBP);
  /* 116b0936 pop ebp */
  EBP = (pop32());
  /* 116b0937 ret  */
  ESPCHK(0x116b0540u, _esp0);
  ESP += 4; return;
}

/* FUN_10020940 @ 0x116b0940 (80 bytes, 32 insns) */
void f_116b0940(void) {
  FTRACE(0x116b0940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0940 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0941 mov ebp, esp */
  EBP = (ESP);
  /* 116b0943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0949 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116b094c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b094f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116b0952:;
  /* 116b0952 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0955 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0958 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b095b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116b095e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0960 je 0x116b0977 */
  if (C.zf) goto L_116b0977;
  /* 116b0962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0965 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116b0968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b096a je 0x116b0977 */
  if (C.zf) goto L_116b0977;
  /* 116b096c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b096f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0972 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b0975 jmp 0x116b0952 */
  goto L_116b0952;
L_116b0977:;
  /* 116b0977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b097a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116b097d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b097f jne 0x116b0989 */
  if (!C.zf) goto L_116b0989;
  /* 116b0981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0984 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0987 jmp 0x116b098c */
  goto L_116b098c;
L_116b0989:;
  /* 116b0989 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_116b098c:;
  /* 116b098c mov esp, ebp */
  ESP = (EBP);
  /* 116b098e pop ebp */
  EBP = (pop32());
  /* 116b098f ret  */
  ESPCHK(0x116b0940u, _esp0);
  ESP += 4; return;
}

/* FUN_10020990 @ 0x116b0990 (736 bytes, 224 insns) */
void f_116b0990(void) {
  FTRACE(0x116b0990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0990 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0991 mov ebp, esp */
  EBP = (ESP);
  /* 116b0993 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0996 push esi */
  push32((uint32_t)(ESI));
  /* 116b0997 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b099b je 0x116b09bc */
  if (C.zf) goto L_116b09bc;
  /* 116b099d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116b099f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b09a2 push eax */
  push32((uint32_t)(EAX));
  /* 116b09a3 call 0x116b1360 */
  push32(0x116b09a8u); f_116b1360();
  /* 116b09a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b09ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116b09ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b09b2 je 0x116b09bc */
  if (C.zf) goto L_116b09bc;
  /* 116b09b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b09b7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b09ba jne 0x116b09c4 */
  if (!C.zf) goto L_116b09c4;
L_116b09bc:;
  /* 116b09bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b09bf jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b09c4:;
  /* 116b09c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116b09c7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116b09cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116b09cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b09cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116b09d0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116b09d3 mov ecx, dword ptr [0x116d05ec] */
  ECX = (r32((uint32_t)(0x116d05ec)));
  /* 116b09d9 cmp ecx, dword ptr [0x116d05f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d05f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b09df jne 0x116b09f5 */
  if (!C.zf) goto L_116b09f5;
  /* 116b09e1 mov edx, dword ptr [0x116d05ec] */
  EDX = (r32((uint32_t)(0x116d05ec)));
  /* 116b09e7 push edx */
  push32((uint32_t)(EDX));
  /* 116b09e8 call 0x116b0cf0 */
  push32(0x116b09edu); f_116b0cf0();
  /* 116b09ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b09f0 mov dword ptr [0x116d05ec], eax */
  w32((uint32_t)(0x116d05ec), (EAX));
L_116b09f5:;
  /* 116b09f5 cmp dword ptr [0x116d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b09fc jne 0x116b0ab5 */
  if (!C.zf) goto L_116b0ab5;
  /* 116b0a02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a06 je 0x116b0a27 */
  if (C.zf) goto L_116b0a27;
  /* 116b0a08 cmp dword ptr [0x116d05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a0f je 0x116b0a27 */
  if (C.zf) goto L_116b0a27;
  /* 116b0a11 call 0x116adfd0 */
  push32(0x116b0a16u); f_116adfd0();
  /* 116b0a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0a18 je 0x116b0a22 */
  if (C.zf) goto L_116b0a22;
  /* 116b0a1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0a1d jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0a22:;
  /* 116b0a22 jmp 0x116b0ab5 */
  goto L_116b0ab5;
L_116b0a27:;
  /* 116b0a27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a2b je 0x116b0a34 */
  if (C.zf) goto L_116b0a34;
  /* 116b0a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0a2f jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0a34:;
  /* 116b0a34 cmp dword ptr [0x116d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a3b jne 0x116b0a74 */
  if (!C.zf) goto L_116b0a74;
  /* 116b0a3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 116b0a42 push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0a49 push 4 */
  push32((uint32_t)(0x4u));
  /* 116b0a4b call 0x1169c220 */
  push32(0x116b0a50u); f_1169c220();
  /* 116b0a50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0a53 mov dword ptr [0x116d05ec], eax */
  w32((uint32_t)(0x116d05ec), (EAX));
  /* 116b0a58 cmp dword ptr [0x116d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a5f jne 0x116b0a69 */
  if (!C.zf) goto L_116b0a69;
  /* 116b0a61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0a64 jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0a69:;
  /* 116b0a69 mov eax, dword ptr [0x116d05ec] */
  EAX = (r32((uint32_t)(0x116d05ec)));
  /* 116b0a6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116b0a74:;
  /* 116b0a74 cmp dword ptr [0x116d05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a7b jne 0x116b0ab5 */
  if (!C.zf) goto L_116b0ab5;
  /* 116b0a7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 116b0a82 push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0a89 push 4 */
  push32((uint32_t)(0x4u));
  /* 116b0a8b call 0x1169c220 */
  push32(0x116b0a90u); f_1169c220();
  /* 116b0a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0a93 mov dword ptr [0x116d05f4], eax */
  w32((uint32_t)(0x116d05f4), (EAX));
  /* 116b0a98 cmp dword ptr [0x116d05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0a9f jne 0x116b0aa9 */
  if (!C.zf) goto L_116b0aa9;
  /* 116b0aa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0aa4 jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0aa9:;
  /* 116b0aa9 mov ecx, dword ptr [0x116d05f4] */
  ECX = (r32((uint32_t)(0x116d05f4)));
  /* 116b0aaf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_116b0ab5:;
  /* 116b0ab5 mov edx, dword ptr [0x116d05ec] */
  EDX = (r32((uint32_t)(0x116d05ec)));
  /* 116b0abb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116b0abe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116b0ac1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0ac4 push eax */
  push32((uint32_t)(EAX));
  /* 116b0ac5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0ac9 call 0x116b0c70 */
  push32(0x116b0aceu); f_116b0c70();
  /* 116b0ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ad1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116b0ad4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0ad8 jl 0x116b0b71 */
  if ((C.sf!=C.of)) goto L_116b0b71;
  /* 116b0ade mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0ae1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0ae4 je 0x116b0b71 */
  if (C.zf) goto L_116b0b71;
  /* 116b0aea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0aee je 0x116b0b63 */
  if (C.zf) goto L_116b0b63;
  /* 116b0af0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0af2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0af5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0af8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116b0afb push edx */
  push32((uint32_t)(EDX));
  /* 116b0afc call 0x1169ccb0 */
  push32(0x116b0b01u); f_1169ccb0();
  /* 116b0b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0b04 jmp 0x116b0b0f */
  goto L_116b0b0f;
L_116b0b06:;
  /* 116b0b06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0b0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116b0b0f:;
  /* 116b0b0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0b19 je 0x116b0b30 */
  if (C.zf) goto L_116b0b30;
  /* 116b0b1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 116b0b2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116b0b2e jmp 0x116b0b06 */
  goto L_116b0b06;
L_116b0b30:;
  /* 116b0b30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 116b0b35 push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0b3a push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0b3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116b0b42 push eax */
  push32((uint32_t)(EAX));
  /* 116b0b43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b46 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0b47 call 0x1169c6b0 */
  push32(0x116b0b4cu); f_1169c6b0();
  /* 116b0b4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0b4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116b0b52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0b56 je 0x116b0b61 */
  if (C.zf) goto L_116b0b61;
  /* 116b0b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b5b mov dword ptr [0x116d05ec], edx */
  w32((uint32_t)(0x116d05ec), (EDX));
L_116b0b61:;
  /* 116b0b61 jmp 0x116b0b6f */
  goto L_116b0b6f;
L_116b0b63:;
  /* 116b0b63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0b6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_116b0b6f:;
  /* 116b0b6f jmp 0x116b0be4 */
  goto L_116b0be4;
L_116b0b71:;
  /* 116b0b71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0b75 jne 0x116b0bdd */
  if (!C.zf) goto L_116b0bdd;
  /* 116b0b77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0b7b jge 0x116b0b85 */
  if ((C.sf==C.of)) goto L_116b0b85;
  /* 116b0b7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116b0b82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116b0b85:;
  /* 116b0b85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 116b0b8a push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0b91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0b94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 116b0b9b push edx */
  push32((uint32_t)(EDX));
  /* 116b0b9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0b9f push eax */
  push32((uint32_t)(EAX));
  /* 116b0ba0 call 0x1169c6b0 */
  push32(0x116b0ba5u); f_1169c6b0();
  /* 116b0ba5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ba8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116b0bab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0baf jne 0x116b0bb9 */
  if (!C.zf) goto L_116b0bb9;
  /* 116b0bb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0bb4 jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0bb9:;
  /* 116b0bb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0bbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0bc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116b0bc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0bc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0bcb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 116b0bd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0bd6 mov dword ptr [0x116d05ec], eax */
  w32((uint32_t)(0x116d05ec), (EAX));
  /* 116b0bdb jmp 0x116b0be4 */
  goto L_116b0be4;
L_116b0bdd:;
  /* 116b0bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0bdf jmp 0x116b0c6b */
  goto L_116b0c6b;
L_116b0be4:;
  /* 116b0be4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0be8 je 0x116b0c69 */
  if (C.zf) goto L_116b0c69;
  /* 116b0bea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 116b0bef push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0bf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0bf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0bfa call 0x116a07b0 */
  push32(0x116b0bffu); f_116a07b0();
  /* 116b0bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c05 push eax */
  push32((uint32_t)(EAX));
  /* 116b0c06 call 0x1169c220 */
  push32(0x116b0c0bu); f_1169c220();
  /* 116b0c0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116b0c11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0c15 je 0x116b0c69 */
  if (C.zf) goto L_116b0c69;
  /* 116b0c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0c1a push edx */
  push32((uint32_t)(EDX));
  /* 116b0c1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0c1e push eax */
  push32((uint32_t)(EAX));
  /* 116b0c1f call 0x1169a7d0 */
  push32(0x116b0c24u); f_1169a7d0();
  /* 116b0c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116b0c2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0c2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0c30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116b0c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0c38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116b0c3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0c3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116b0c44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116b0c47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116b0c49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0c4b not edx */
  EDX = (~(EDX));
  /* 116b0c4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116b0c50 push edx */
  push32((uint32_t)(EDX));
  /* 116b0c51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0c54 push eax */
  push32((uint32_t)(EAX));
  /* 116b0c55 call dword ptr [0x116d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d333c))), 0x116b0c5bu);
  /* 116b0c5b push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0c5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0c60 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0c61 call 0x1169ccb0 */
  push32(0x116b0c66u); f_1169ccb0();
  /* 116b0c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116b0c69:;
  /* 116b0c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b0c6b:;
  /* 116b0c6b pop esi */
  ESI = (pop32());
  /* 116b0c6c mov esp, ebp */
  ESP = (EBP);
  /* 116b0c6e pop ebp */
  EBP = (pop32());
  /* 116b0c6f ret  */
  ESPCHK(0x116b0990u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x116b0c70 (124 bytes, 47 insns) */
void f_116b0c70(void) {
  FTRACE(0x116b0c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0c70 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0c71 mov ebp, esp */
  EBP = (ESP);
  /* 116b0c73 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0c74 mov eax, dword ptr [0x116d05ec] */
  EAX = (r32((uint32_t)(0x116d05ec)));
  /* 116b0c79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b0c7c jmp 0x116b0c87 */
  goto L_116b0c87;
L_116b0c7e:;
  /* 116b0c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0c81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0c84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116b0c87:;
  /* 116b0c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0c8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0c8d je 0x116b0cda */
  if (C.zf) goto L_116b0cda;
  /* 116b0c8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0c92 push eax */
  push32((uint32_t)(EAX));
  /* 116b0c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0c96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116b0c98 push edx */
  push32((uint32_t)(EDX));
  /* 116b0c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0c9c push eax */
  push32((uint32_t)(EAX));
  /* 116b0c9d call 0x116adf80 */
  push32(0x116b0ca2u); f_116adf80();
  /* 116b0ca2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0ca7 jne 0x116b0cd8 */
  if (!C.zf) goto L_116b0cd8;
  /* 116b0ca9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0cac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116b0cae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0cb1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 116b0cb5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0cb8 je 0x116b0cca */
  if (C.zf) goto L_116b0cca;
  /* 116b0cba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0cbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116b0cbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b0cc2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 116b0cc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0cc8 jne 0x116b0cd8 */
  if (!C.zf) goto L_116b0cd8;
L_116b0cca:;
  /* 116b0cca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0ccd sub eax, dword ptr [0x116d05ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d05ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0cd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116b0cd6 jmp 0x116b0ce8 */
  goto L_116b0ce8;
L_116b0cd8:;
  /* 116b0cd8 jmp 0x116b0c7e */
  goto L_116b0c7e;
L_116b0cda:;
  /* 116b0cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0cdd sub eax, dword ptr [0x116d05ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d05ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0ce3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116b0ce6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_116b0ce8:;
  /* 116b0ce8 mov esp, ebp */
  ESP = (EBP);
  /* 116b0cea pop ebp */
  EBP = (pop32());
  /* 116b0ceb ret  */
  ESPCHK(0x116b0c70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x116b0cf0 (238 bytes, 80 insns) */
void f_116b0cf0(void) {
  FTRACE(0x116b0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 116b0cf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0cf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116b0cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0d00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116b0d03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0d07 jne 0x116b0d10 */
  if (!C.zf) goto L_116b0d10;
  /* 116b0d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0d0b jmp 0x116b0dda */
  goto L_116b0dda;
L_116b0d10:;
  /* 116b0d10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0d13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116b0d15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0d18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116b0d1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0d20 je 0x116b0d2d */
  if (C.zf) goto L_116b0d2d;
  /* 116b0d22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0d25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116b0d2b jmp 0x116b0d10 */
  goto L_116b0d10;
L_116b0d2d:;
  /* 116b0d2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 116b0d32 push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0d37 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0d39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b0d3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 116b0d43 push eax */
  push32((uint32_t)(EAX));
  /* 116b0d44 call 0x1169c220 */
  push32(0x116b0d49u); f_1169c220();
  /* 116b0d49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116b0d4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0d52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116b0d55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0d59 jne 0x116b0d65 */
  if (!C.zf) goto L_116b0d65;
  /* 116b0d5b push 9 */
  push32((uint32_t)(0x9u));
  /* 116b0d5d call 0x1169ac90 */
  push32(0x116b0d62u); f_1169ac90();
  /* 116b0d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116b0d65:;
  /* 116b0d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0d68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116b0d6b:;
  /* 116b0d6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0d6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0d71 je 0x116b0dce */
  if (C.zf) goto L_116b0dce;
  /* 116b0d73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 116b0d78 push 0x116cc288 */
  push32((uint32_t)(0x116cc288u));
  /* 116b0d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0d7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0d82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116b0d84 push edx */
  push32((uint32_t)(EDX));
  /* 116b0d85 call 0x116a07b0 */
  push32(0x116b0d8au); f_116a07b0();
  /* 116b0d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d90 push eax */
  push32((uint32_t)(EAX));
  /* 116b0d91 call 0x1169c220 */
  push32(0x116b0d96u); f_1169c220();
  /* 116b0d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0d9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116b0d9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0da1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0da4 je 0x116b0dba */
  if (C.zf) goto L_116b0dba;
  /* 116b0da6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0da9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116b0dab push ecx */
  push32((uint32_t)(ECX));
  /* 116b0dac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0daf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116b0db1 push eax */
  push32((uint32_t)(EAX));
  /* 116b0db2 call 0x1169a7d0 */
  push32(0x116b0db7u); f_1169a7d0();
  /* 116b0db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116b0dba:;
  /* 116b0dba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116b0dbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0dc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116b0dc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0dc6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0dc9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116b0dcc jmp 0x116b0d6b */
  goto L_116b0d6b;
L_116b0dce:;
  /* 116b0dce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0dd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116b0dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116b0dda:;
  /* 116b0dda mov esp, ebp */
  ESP = (EBP);
  /* 116b0ddc pop ebp */
  EBP = (pop32());
  /* 116b0ddd ret  */
  ESPCHK(0x116b0cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020de0 @ 0x116b0de0 (130 bytes, 50 insns) */
void f_116b0de0(void) {
  FTRACE(0x116b0de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0de0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0de1 mov ebp, esp */
  EBP = (ESP);
  /* 116b0de3 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0de4 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0de5 push esi */
  push32((uint32_t)(ESI));
  /* 116b0de6 push edi */
  push32((uint32_t)(EDI));
  /* 116b0de7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b0dee:;
  /* 116b0dee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0df2 jne 0x116b0e12 */
  if (!C.zf) goto L_116b0e12;
  /* 116b0df4 push 0x116cc2a0 */
  push32((uint32_t)(0x116cc2a0u));
  /* 116b0df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b0dfb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 116b0dfd push 0x116cc294 */
  push32((uint32_t)(0x116cc294u));
  /* 116b0e02 push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0e04 call 0x1169ade0 */
  push32(0x116b0e09u); f_1169ade0();
  /* 116b0e09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0e0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0e0f jne 0x116b0e12 */
  if (!C.zf) goto L_116b0e12;
  /* 116b0e11 int3  */
  x86_unimpl("int3 @ 0x116b0e11");
L_116b0e12:;
  /* 116b0e12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b0e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0e16 jne 0x116b0dee */
  if (!C.zf) goto L_116b0dee;
  /* 116b0e18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116b0e1e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 116b0e21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b0e23 je 0x116b0e31 */
  if (C.zf) goto L_116b0e31;
  /* 116b0e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e28 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 116b0e2f jmp 0x116b0e58 */
  goto L_116b0e58;
L_116b0e31:;
  /* 116b0e31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e34 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0e35 call 0x116ab260 */
  push32(0x116b0e3au); f_116ab260();
  /* 116b0e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0e3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e40 push edx */
  push32((uint32_t)(EDX));
  /* 116b0e41 call 0x116b0e70 */
  push32(0x116b0e46u); f_116b0e70();
  /* 116b0e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0e49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b0e4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e4f push eax */
  push32((uint32_t)(EAX));
  /* 116b0e50 call 0x116ab2d0 */
  push32(0x116b0e55u); f_116ab2d0();
  /* 116b0e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116b0e58:;
  /* 116b0e58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0e5b pop edi */
  EDI = (pop32());
  /* 116b0e5c pop esi */
  ESI = (pop32());
  /* 116b0e5d pop ebx */
  EBX = (pop32());
  /* 116b0e5e mov esp, ebp */
  ESP = (EBP);
  /* 116b0e60 pop ebp */
  EBP = (pop32());
  /* 116b0e61 ret  */
  ESPCHK(0x116b0de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020e70 @ 0x116b0e70 (190 bytes, 67 insns) */
void f_116b0e70(void) {
  FTRACE(0x116b0e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0e70 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0e71 mov ebp, esp */
  EBP = (ESP);
  /* 116b0e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b0e76 push ebx */
  push32((uint32_t)(EBX));
  /* 116b0e77 push esi */
  push32((uint32_t)(ESI));
  /* 116b0e78 push edi */
  push32((uint32_t)(EDI));
  /* 116b0e79 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b0e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0e83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116b0e86:;
  /* 116b0e86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0e8a jne 0x116b0eaa */
  if (!C.zf) goto L_116b0eaa;
  /* 116b0e8c push 0x116cb7f0 */
  push32((uint32_t)(0x116cb7f0u));
  /* 116b0e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b0e93 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 116b0e95 push 0x116cc294 */
  push32((uint32_t)(0x116cc294u));
  /* 116b0e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0e9c call 0x1169ade0 */
  push32(0x116b0ea1u); f_1169ade0();
  /* 116b0ea1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ea4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0ea7 jne 0x116b0eaa */
  if (!C.zf) goto L_116b0eaa;
  /* 116b0ea9 int3  */
  x86_unimpl("int3 @ 0x116b0ea9");
L_116b0eaa:;
  /* 116b0eaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b0eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b0eae jne 0x116b0e86 */
  if (!C.zf) goto L_116b0e86;
  /* 116b0eb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0eb3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116b0eb6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 116b0ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0ebd je 0x116b0f1a */
  if (C.zf) goto L_116b0f1a;
  /* 116b0ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0ec3 call 0x116ae7d0 */
  push32(0x116b0ec8u); f_116ae7d0();
  /* 116b0ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b0ece mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0ed1 push edx */
  push32((uint32_t)(EDX));
  /* 116b0ed2 call 0x116b1580 */
  push32(0x116b0ed7u); f_116b1580();
  /* 116b0ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0eda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0edd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116b0ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0ee1 call 0x116b1450 */
  push32(0x116b0ee6u); f_116b1450();
  /* 116b0ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0eeb jge 0x116b0ef6 */
  if ((C.sf==C.of)) goto L_116b0ef6;
  /* 116b0eed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b0ef4 jmp 0x116b0f1a */
  goto L_116b0f1a;
L_116b0ef6:;
  /* 116b0ef6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0ef9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0efd je 0x116b0f1a */
  if (C.zf) goto L_116b0f1a;
  /* 116b0eff push 2 */
  push32((uint32_t)(0x2u));
  /* 116b0f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0f04 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116b0f07 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0f08 call 0x1169ccb0 */
  push32(0x116b0f0du); f_1169ccb0();
  /* 116b0f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0f10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0f13 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_116b0f1a:;
  /* 116b0f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116b0f1d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 116b0f24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0f27 pop edi */
  EDI = (pop32());
  /* 116b0f28 pop esi */
  ESI = (pop32());
  /* 116b0f29 pop ebx */
  EBX = (pop32());
  /* 116b0f2a mov esp, ebp */
  ESP = (EBP);
  /* 116b0f2c pop ebp */
  EBP = (pop32());
  /* 116b0f2d ret  */
  ESPCHK(0x116b0e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10020f30 @ 0x116b0f30 (210 bytes, 63 insns) */
void f_116b0f30(void) {
  FTRACE(0x116b0f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b0f30 push ebp */
  push32((uint32_t)(EBP));
  /* 116b0f31 mov ebp, esp */
  EBP = (ESP);
  /* 116b0f33 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f37 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0f3d jae 0x116b0f61 */
  if (!C.cf) goto L_116b0f61;
  /* 116b0f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116b0f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116b0f4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116b0f4e mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116b0f55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116b0f5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116b0f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b0f5f jne 0x116b0f74 */
  if (!C.zf) goto L_116b0f74;
L_116b0f61:;
  /* 116b0f61 call 0x116a77c0 */
  push32(0x116b0f66u); f_116a77c0();
  /* 116b0f66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116b0f6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b0f6f jmp 0x116b0ffe */
  goto L_116b0ffe;
L_116b0f74:;
  /* 116b0f74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f77 push edx */
  push32((uint32_t)(EDX));
  /* 116b0f78 call 0x116ae590 */
  push32(0x116b0f7du); f_116ae590();
  /* 116b0f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f83 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116b0f86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0f89 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116b0f8c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116b0f8f mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116b0f96 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116b0f9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116b0f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0fa0 je 0x116b0fdd */
  if (C.zf) goto L_116b0fdd;
  /* 116b0fa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 116b0fa6 call 0x116ae410 */
  push32(0x116b0fabu); f_116ae410();
  /* 116b0fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0fae push eax */
  push32((uint32_t)(EAX));
  /* 116b0faf call dword ptr [0x116d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3338))), 0x116b0fb5u);
  /* 116b0fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b0fb7 jne 0x116b0fc4 */
  if (!C.zf) goto L_116b0fc4;
  /* 116b0fb9 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116b0fbfu);
  /* 116b0fbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b0fc2 jmp 0x116b0fcb */
  goto L_116b0fcb;
L_116b0fc4:;
  /* 116b0fc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116b0fcb:;
  /* 116b0fcb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b0fcf jne 0x116b0fd3 */
  if (!C.zf) goto L_116b0fd3;
  /* 116b0fd1 jmp 0x116b0fef */
  goto L_116b0fef;
L_116b0fd3:;
  /* 116b0fd3 call 0x116a77d0 */
  push32(0x116b0fd8u); f_116a77d0();
  /* 116b0fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b0fdb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116b0fdd:;
  /* 116b0fdd call 0x116a77c0 */
  push32(0x116b0fe2u); f_116a77c0();
  /* 116b0fe2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116b0fe8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b0fef:;
  /* 116b0fef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b0ff2 push eax */
  push32((uint32_t)(EAX));
  /* 116b0ff3 call 0x116ae620 */
  push32(0x116b0ff8u); f_116ae620();
  /* 116b0ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b0ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116b0ffe:;
  /* 116b0ffe mov esp, ebp */
  ESP = (EBP);
  /* 116b1000 pop ebp */
  EBP = (pop32());
  /* 116b1001 ret  */
  ESPCHK(0x116b0f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10021010 @ 0x116b1010 (382 bytes, 135 insns) */
void f_116b1010(void) {
  FTRACE(0x116b1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b1010 push ebp */
  push32((uint32_t)(EBP));
  /* 116b1011 mov ebp, esp */
  EBP = (ESP);
  /* 116b1013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b1015 push 0x116cc2b0 */
  push32((uint32_t)(0x116cc2b0u));
  /* 116b101a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116b101f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116b1025 push eax */
  push32((uint32_t)(EAX));
  /* 116b1026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116b102d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1030 push ebx */
  push32((uint32_t)(EBX));
  /* 116b1031 push esi */
  push32((uint32_t)(ESI));
  /* 116b1032 push edi */
  push32((uint32_t)(EDI));
  /* 116b1033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b1036 cmp dword ptr [0x116d08c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b103d jne 0x116b1082 */
  if (!C.zf) goto L_116b1082;
  /* 116b103f push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1041 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1043 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b1045 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1047 call dword ptr [0x116d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3334))), 0x116b104du);
  /* 116b104d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b104f je 0x116b105d */
  if (C.zf) goto L_116b105d;
  /* 116b1051 mov dword ptr [0x116d08c0], 1 */
  w32((uint32_t)(0x116d08c0), (0x1u));
  /* 116b105b jmp 0x116b1082 */
  goto L_116b1082;
L_116b105d:;
  /* 116b105d push 0 */
  push32((uint32_t)(0x0u));
  /* 116b105f push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1061 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b1063 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1065 call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116b106bu);
  /* 116b106b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b106d je 0x116b107b */
  if (C.zf) goto L_116b107b;
  /* 116b106f mov dword ptr [0x116d08c0], 2 */
  w32((uint32_t)(0x116d08c0), (0x2u));
  /* 116b1079 jmp 0x116b1082 */
  goto L_116b1082;
L_116b107b:;
  /* 116b107b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b107d jmp 0x116b1191 */
  goto L_116b1191;
L_116b1082:;
  /* 116b1082 cmp dword ptr [0x116d08c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1089 jne 0x116b10a6 */
  if (!C.zf) goto L_116b10a6;
  /* 116b108b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b108e push eax */
  push32((uint32_t)(EAX));
  /* 116b108f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b1092 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b1096 push edx */
  push32((uint32_t)(EDX));
  /* 116b1097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b109a push eax */
  push32((uint32_t)(EAX));
  /* 116b109b call dword ptr [0x116d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3334))), 0x116b10a1u);
  /* 116b10a1 jmp 0x116b1191 */
  goto L_116b1191;
L_116b10a6:;
  /* 116b10a6 cmp dword ptr [0x116d08c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b10ad jne 0x116b118f */
  if (!C.zf) goto L_116b118f;
  /* 116b10b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b10b7 jne 0x116b10c2 */
  if (!C.zf) goto L_116b10c2;
  /* 116b10b9 mov ecx, dword ptr [0x116d0838] */
  ECX = (r32((uint32_t)(0x116d0838)));
  /* 116b10bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116b10c2:;
  /* 116b10c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b10c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b10c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b10c9 push edx */
  push32((uint32_t)(EDX));
  /* 116b10ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b10cd push eax */
  push32((uint32_t)(EAX));
  /* 116b10ce call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116b10d4u);
  /* 116b10d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116b10d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b10db jne 0x116b10e4 */
  if (!C.zf) goto L_116b10e4;
  /* 116b10dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b10df jmp 0x116b1191 */
  goto L_116b1191;
L_116b10e4:;
  /* 116b10e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116b10eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b10ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b10f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b10f3 call 0x116a0a30 */
  push32(0x116b10f8u); f_116a0a30();
  /* 116b10f8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116b10fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b10fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b1101 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116b1104 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b110b jmp 0x116b1124 */
  goto L_116b1124;
  /* 116b110d mov eax, 1 */
  EAX = (0x1u);
  /* 116b1112 ret  */
  ESPCHK(0x116b1010u, _esp0);
  ESP += 4; return;
  /* 116b1113 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b1116 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116b111d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b1124:;
  /* 116b1124 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1128 jne 0x116b112e */
  if (!C.zf) goto L_116b112e;
  /* 116b112a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b112c jmp 0x116b1191 */
  goto L_116b1191;
L_116b112e:;
  /* 116b112e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b1131 push edx */
  push32((uint32_t)(EDX));
  /* 116b1132 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b1135 push eax */
  push32((uint32_t)(EAX));
  /* 116b1136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b1139 push ecx */
  push32((uint32_t)(ECX));
  /* 116b113a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b113d push edx */
  push32((uint32_t)(EDX));
  /* 116b113e call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116b1144u);
  /* 116b1144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b1146 jne 0x116b114c */
  if (!C.zf) goto L_116b114c;
  /* 116b1148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b114a jmp 0x116b1191 */
  goto L_116b1191;
L_116b114c:;
  /* 116b114c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1150 jne 0x116b116d */
  if (!C.zf) goto L_116b116d;
  /* 116b1152 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1154 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1156 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b1158 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b115b push eax */
  push32((uint32_t)(EAX));
  /* 116b115c push 1 */
  push32((uint32_t)(0x1u));
  /* 116b115e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b1161 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1162 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b1168u);
  /* 116b1168 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116b116b jmp 0x116b118a */
  goto L_116b118a;
L_116b116d:;
  /* 116b116d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b1170 push edx */
  push32((uint32_t)(EDX));
  /* 116b1171 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b1174 push eax */
  push32((uint32_t)(EAX));
  /* 116b1175 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b1177 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b117a push ecx */
  push32((uint32_t)(ECX));
  /* 116b117b push 1 */
  push32((uint32_t)(0x1u));
  /* 116b117d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b1180 push edx */
  push32((uint32_t)(EDX));
  /* 116b1181 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116b1187u);
  /* 116b1187 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116b118a:;
  /* 116b118a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b118d jmp 0x116b1191 */
  goto L_116b1191;
L_116b118f:;
  /* 116b118f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b1191:;
  /* 116b1191 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 116b1194 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b1197 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116b119e pop edi */
  EDI = (pop32());
  /* 116b119f pop esi */
  ESI = (pop32());
  /* 116b11a0 pop ebx */
  EBX = (pop32());
  /* 116b11a1 mov esp, ebp */
  ESP = (EBP);
  /* 116b11a3 pop ebp */
  EBP = (pop32());
  /* 116b11a4 ret  */
  ESPCHK(0x116b1010u, _esp0);
  ESP += 4; return;
}

/* FUN_100211b0 @ 0x116b11b0 (398 bytes, 140 insns) */
void f_116b11b0(void) {
  FTRACE(0x116b11b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b11b1 mov ebp, esp */
  EBP = (ESP);
  /* 116b11b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b11b5 push 0x116cc2c0 */
  push32((uint32_t)(0x116cc2c0u));
  /* 116b11ba push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116b11bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116b11c5 push eax */
  push32((uint32_t)(EAX));
  /* 116b11c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116b11cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b11d0 push ebx */
  push32((uint32_t)(EBX));
  /* 116b11d1 push esi */
  push32((uint32_t)(ESI));
  /* 116b11d2 push edi */
  push32((uint32_t)(EDI));
  /* 116b11d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b11d6 cmp dword ptr [0x116d08c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b11dd jne 0x116b1222 */
  if (!C.zf) goto L_116b1222;
  /* 116b11df push 0 */
  push32((uint32_t)(0x0u));
  /* 116b11e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b11e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b11e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b11e7 call dword ptr [0x116d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3334))), 0x116b11edu);
  /* 116b11ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b11ef je 0x116b11fd */
  if (C.zf) goto L_116b11fd;
  /* 116b11f1 mov dword ptr [0x116d08c4], 1 */
  w32((uint32_t)(0x116d08c4), (0x1u));
  /* 116b11fb jmp 0x116b1222 */
  goto L_116b1222;
L_116b11fd:;
  /* 116b11fd push 0 */
  push32((uint32_t)(0x0u));
  /* 116b11ff push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1201 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b1203 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1205 call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116b120bu);
  /* 116b120b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b120d je 0x116b121b */
  if (C.zf) goto L_116b121b;
  /* 116b120f mov dword ptr [0x116d08c4], 2 */
  w32((uint32_t)(0x116d08c4), (0x2u));
  /* 116b1219 jmp 0x116b1222 */
  goto L_116b1222;
L_116b121b:;
  /* 116b121b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b121d jmp 0x116b1341 */
  goto L_116b1341;
L_116b1222:;
  /* 116b1222 cmp dword ptr [0x116d08c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1229 jne 0x116b1246 */
  if (!C.zf) goto L_116b1246;
  /* 116b122b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b122e push eax */
  push32((uint32_t)(EAX));
  /* 116b122f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b1232 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b1236 push edx */
  push32((uint32_t)(EDX));
  /* 116b1237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b123a push eax */
  push32((uint32_t)(EAX));
  /* 116b123b call dword ptr [0x116d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3358))), 0x116b1241u);
  /* 116b1241 jmp 0x116b1341 */
  goto L_116b1341;
L_116b1246:;
  /* 116b1246 cmp dword ptr [0x116d08c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d08c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b124d jne 0x116b133f */
  if (!C.zf) goto L_116b133f;
  /* 116b1253 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1257 jne 0x116b1262 */
  if (!C.zf) goto L_116b1262;
  /* 116b1259 mov ecx, dword ptr [0x116d0838] */
  ECX = (r32((uint32_t)(0x116d0838)));
  /* 116b125f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116b1262:;
  /* 116b1262 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1264 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b1269 push edx */
  push32((uint32_t)(EDX));
  /* 116b126a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b126d push eax */
  push32((uint32_t)(EAX));
  /* 116b126e call dword ptr [0x116d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3334))), 0x116b1274u);
  /* 116b1274 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116b1277 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b127b jne 0x116b1284 */
  if (!C.zf) goto L_116b1284;
  /* 116b127d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b127f jmp 0x116b1341 */
  goto L_116b1341;
L_116b1284:;
  /* 116b1284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116b128b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b128e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116b1290 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1293 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116b1295 call 0x116a0a30 */
  push32(0x116b129au); f_116a0a30();
  /* 116b129a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116b129d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116b12a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116b12a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116b12a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116b12ad jmp 0x116b12c6 */
  goto L_116b12c6;
  /* 116b12af mov eax, 1 */
  EAX = (0x1u);
  /* 116b12b4 ret  */
  ESPCHK(0x116b11b0u, _esp0);
  ESP += 4; return;
  /* 116b12b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116b12b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116b12bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116b12c6:;
  /* 116b12c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b12ca jne 0x116b12d0 */
  if (!C.zf) goto L_116b12d0;
  /* 116b12cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b12ce jmp 0x116b1341 */
  goto L_116b1341;
L_116b12d0:;
  /* 116b12d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116b12d3 push edx */
  push32((uint32_t)(EDX));
  /* 116b12d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b12d7 push eax */
  push32((uint32_t)(EAX));
  /* 116b12d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b12db push ecx */
  push32((uint32_t)(ECX));
  /* 116b12dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b12df push edx */
  push32((uint32_t)(EDX));
  /* 116b12e0 call dword ptr [0x116d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3334))), 0x116b12e6u);
  /* 116b12e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b12e8 jne 0x116b12ee */
  if (!C.zf) goto L_116b12ee;
  /* 116b12ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b12ec jmp 0x116b1341 */
  goto L_116b1341;
L_116b12ee:;
  /* 116b12ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b12f2 jne 0x116b1316 */
  if (!C.zf) goto L_116b1316;
  /* 116b12f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b12f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b12f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b12fa push 0 */
  push32((uint32_t)(0x0u));
  /* 116b12fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b12fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b1301 push eax */
  push32((uint32_t)(EAX));
  /* 116b1302 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116b1307 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b130a push ecx */
  push32((uint32_t)(ECX));
  /* 116b130b call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116b1311u);
  /* 116b1311 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116b1314 jmp 0x116b133a */
  goto L_116b133a;
L_116b1316:;
  /* 116b1316 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1318 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b131a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116b131d push edx */
  push32((uint32_t)(EDX));
  /* 116b131e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116b1321 push eax */
  push32((uint32_t)(EAX));
  /* 116b1322 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116b1324 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116b1327 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1328 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116b132d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116b1330 push edx */
  push32((uint32_t)(EDX));
  /* 116b1331 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116b1337u);
  /* 116b1337 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116b133a:;
  /* 116b133a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116b133d jmp 0x116b1341 */
  goto L_116b1341;
L_116b133f:;
  /* 116b133f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b1341:;
  /* 116b1341 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 116b1344 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116b1347 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116b134e pop edi */
  EDI = (pop32());
  /* 116b134f pop esi */
  ESI = (pop32());
  /* 116b1350 pop ebx */
  EBX = (pop32());
  /* 116b1351 mov esp, ebp */
  ESP = (EBP);
  /* 116b1353 pop ebp */
  EBP = (pop32());
  /* 116b1354 ret  */
  ESPCHK(0x116b11b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021360 @ 0x116b1360 (237 bytes, 81 insns) */
void f_116b1360(void) {
  FTRACE(0x116b1360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b1360 push ebp */
  push32((uint32_t)(EBP));
  /* 116b1361 mov ebp, esp */
  EBP = (ESP);
  /* 116b1363 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1364 cmp dword ptr [0x116d1cbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1cbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b136b jne 0x116b1382 */
  if (!C.zf) goto L_116b1382;
  /* 116b136d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116b1370 push eax */
  push32((uint32_t)(EAX));
  /* 116b1371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1374 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1375 call 0x116b1630 */
  push32(0x116b137au); f_116b1630();
  /* 116b137a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b137d jmp 0x116b1449 */
  goto L_116b1449;
L_116b1382:;
  /* 116b1382 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116b1384 call 0x1169c120 */
  push32(0x116b1389u); f_1169c120();
  /* 116b1389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b138c jmp 0x116b1397 */
  goto L_116b1397;
L_116b138e:;
  /* 116b138e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1391 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1394 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116b1397:;
  /* 116b1397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b139a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 116b139e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116b13a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b13a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116b13ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b13ad je 0x116b142b */
  if (C.zf) goto L_116b142b;
  /* 116b13af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b13b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b13b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b13b9 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 116b13bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116b13c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b13c4 je 0x116b1416 */
  if (C.zf) goto L_116b1416;
  /* 116b13c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b13c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b13cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116b13cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b13d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b13d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116b13d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b13d8 jne 0x116b13e8 */
  if (!C.zf) goto L_116b13e8;
  /* 116b13da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116b13dc call 0x1169c1c0 */
  push32(0x116b13e1u); f_1169c1c0();
  /* 116b13e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b13e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b13e6 jmp 0x116b1449 */
  goto L_116b1449;
L_116b13e8:;
  /* 116b13e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b13eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116b13f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116b13f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b13f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116b13f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116b13fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116b13fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1400 jne 0x116b1414 */
  if (!C.zf) goto L_116b1414;
  /* 116b1402 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116b1404 call 0x1169c1c0 */
  push32(0x116b1409u); f_1169c1c0();
  /* 116b1409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b140c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b140f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116b1412 jmp 0x116b1449 */
  goto L_116b1449;
L_116b1414:;
  /* 116b1414 jmp 0x116b1426 */
  goto L_116b1426;
L_116b1416:;
  /* 116b1416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b1419 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116b141f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1422 jne 0x116b1426 */
  if (!C.zf) goto L_116b1426;
  /* 116b1424 jmp 0x116b142b */
  goto L_116b142b;
L_116b1426:;
  /* 116b1426 jmp 0x116b138e */
  goto L_116b138e;
L_116b142b:;
  /* 116b142b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116b142d call 0x1169c1c0 */
  push32(0x116b1432u); f_1169c1c0();
  /* 116b1432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b1438 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b143d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1440 jne 0x116b1447 */
  if (!C.zf) goto L_116b1447;
  /* 116b1442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1445 jmp 0x116b1449 */
  goto L_116b1449;
L_116b1447:;
  /* 116b1447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b1449:;
  /* 116b1449 mov esp, ebp */
  ESP = (EBP);
  /* 116b144b pop ebp */
  EBP = (pop32());
  /* 116b144c ret  */
  ESPCHK(0x116b1360u, _esp0);
  ESP += 4; return;
}

/* FUN_10021450 @ 0x116b1450 (122 bytes, 39 insns) */
void f_116b1450(void) {
  FTRACE(0x116b1450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b1450 push ebp */
  push32((uint32_t)(EBP));
  /* 116b1451 mov ebp, esp */
  EBP = (ESP);
  /* 116b1453 push ecx */
  push32((uint32_t)(ECX));
  /* 116b1454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1457 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b145d jae 0x116b1481 */
  if (!C.cf) goto L_116b1481;
  /* 116b145f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1462 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116b1465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1468 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116b146b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116b146e mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116b1475 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116b147a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116b147d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b147f jne 0x116b149c */
  if (!C.zf) goto L_116b149c;
L_116b1481:;
  /* 116b1481 call 0x116a77c0 */
  push32(0x116b1486u); f_116a77c0();
  /* 116b1486 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116b148c call 0x116a77d0 */
  push32(0x116b1491u); f_116a77d0();
  /* 116b1491 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116b1497 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b149a jmp 0x116b14c6 */
  goto L_116b14c6;
L_116b149c:;
  /* 116b149c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b149f push edx */
  push32((uint32_t)(EDX));
  /* 116b14a0 call 0x116ae590 */
  push32(0x116b14a5u); f_116ae590();
  /* 116b14a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b14a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b14ab push eax */
  push32((uint32_t)(EAX));
  /* 116b14ac call 0x116b14d0 */
  push32(0x116b14b1u); f_116b14d0();
  /* 116b14b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b14b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116b14b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b14ba push ecx */
  push32((uint32_t)(ECX));
  /* 116b14bb call 0x116ae620 */
  push32(0x116b14c0u); f_116ae620();
  /* 116b14c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b14c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116b14c6:;
  /* 116b14c6 mov esp, ebp */
  ESP = (EBP);
  /* 116b14c8 pop ebp */
  EBP = (pop32());
  /* 116b14c9 ret  */
  ESPCHK(0x116b1450u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x116b14d0 (170 bytes, 59 insns) */
void f_116b14d0(void) {
  FTRACE(0x116b14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b14d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116b14d1 mov ebp, esp */
  EBP = (ESP);
  /* 116b14d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116b14d4 push esi */
  push32((uint32_t)(ESI));
  /* 116b14d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b14d8 push eax */
  push32((uint32_t)(EAX));
  /* 116b14d9 call 0x116ae410 */
  push32(0x116b14deu); f_116ae410();
  /* 116b14de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b14e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b14e4 je 0x116b1523 */
  if (C.zf) goto L_116b1523;
  /* 116b14e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b14ea je 0x116b14f2 */
  if (C.zf) goto L_116b14f2;
  /* 116b14ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b14f0 jne 0x116b150c */
  if (!C.zf) goto L_116b150c;
L_116b14f2:;
  /* 116b14f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116b14f4 call 0x116ae410 */
  push32(0x116b14f9u); f_116ae410();
  /* 116b14f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b14fc mov esi, eax */
  ESI = (EAX);
  /* 116b14fe push 2 */
  push32((uint32_t)(0x2u));
  /* 116b1500 call 0x116ae410 */
  push32(0x116b1505u); f_116ae410();
  /* 116b1505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1508 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b150a je 0x116b1523 */
  if (C.zf) goto L_116b1523;
L_116b150c:;
  /* 116b150c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b150f push ecx */
  push32((uint32_t)(ECX));
  /* 116b1510 call 0x116ae410 */
  push32(0x116b1515u); f_116ae410();
  /* 116b1515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1518 push eax */
  push32((uint32_t)(EAX));
  /* 116b1519 call dword ptr [0x116d3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3330))), 0x116b151fu);
  /* 116b151f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b1521 je 0x116b152c */
  if (C.zf) goto L_116b152c;
L_116b1523:;
  /* 116b1523 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116b152a jmp 0x116b1535 */
  goto L_116b1535;
L_116b152c:;
  /* 116b152c call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116b1532u);
  /* 116b1532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116b1535:;
  /* 116b1535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1538 push edx */
  push32((uint32_t)(EDX));
  /* 116b1539 call 0x116ae330 */
  push32(0x116b153eu); f_116ae330();
  /* 116b153e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1544 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116b1547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b154a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116b154d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116b1550 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116b1557 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 116b155c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b1560 je 0x116b1573 */
  if (C.zf) goto L_116b1573;
  /* 116b1562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116b1565 push eax */
  push32((uint32_t)(EAX));
  /* 116b1566 call 0x116a7720 */
  push32(0x116b156bu); f_116a7720();
  /* 116b156b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b156e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b1571 jmp 0x116b1575 */
  goto L_116b1575;
L_116b1573:;
  /* 116b1573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116b1575:;
  /* 116b1575 pop esi */
  ESI = (pop32());
  /* 116b1576 mov esp, ebp */
  ESP = (EBP);
  /* 116b1578 pop ebp */
  EBP = (pop32());
  /* 116b1579 ret  */
  ESPCHK(0x116b14d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021580 @ 0x116b1580 (146 bytes, 52 insns) */
void f_116b1580(void) {
  FTRACE(0x116b1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b1580 push ebp */
  push32((uint32_t)(EBP));
  /* 116b1581 mov ebp, esp */
  EBP = (ESP);
  /* 116b1583 push ebx */
  push32((uint32_t)(EBX));
  /* 116b1584 push esi */
  push32((uint32_t)(ESI));
  /* 116b1585 push edi */
  push32((uint32_t)(EDI));
L_116b1586:;
  /* 116b1586 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b158a jne 0x116b15aa */
  if (!C.zf) goto L_116b15aa;
  /* 116b158c push 0x116cc2a0 */
  push32((uint32_t)(0x116cc2a0u));
  /* 116b1591 push 0 */
  push32((uint32_t)(0x0u));
  /* 116b1593 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116b1595 push 0x116cc2cc */
  push32((uint32_t)(0x116cc2ccu));
  /* 116b159a push 2 */
  push32((uint32_t)(0x2u));
  /* 116b159c call 0x1169ade0 */
  push32(0x116b15a1u); f_1169ade0();
  /* 116b15a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b15a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116b15a7 jne 0x116b15aa */
  if (!C.zf) goto L_116b15aa;
  /* 116b15a9 int3  */
  x86_unimpl("int3 @ 0x116b15a9");
L_116b15aa:;
  /* 116b15aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b15ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116b15ae jne 0x116b1586 */
  if (!C.zf) goto L_116b1586;
  /* 116b15b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116b15b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 116b15bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116b15be je 0x116b160d */
  if (C.zf) goto L_116b160d;
  /* 116b15c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116b15c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116b15c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116b15cb je 0x116b160d */
  if (C.zf) goto L_116b160d;
  /* 116b15cd push 2 */
  push32((uint32_t)(0x2u));
  /* 116b15cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116b15d5 push eax */
  push32((uint32_t)(EAX));
  /* 116b15d6 call 0x1169ccb0 */
  push32(0x116b15dbu); f_1169ccb0();
  /* 116b15db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116b15de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116b15e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 116b15ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116b15f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116b15f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b15fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116b1603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116b1606 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_116b160d:;
  /* 116b160d pop edi */
  EDI = (pop32());
  /* 116b160e pop esi */
  ESI = (pop32());
  /* 116b160f pop ebx */
  EBX = (pop32());
  /* 116b1610 pop ebp */
  EBP = (pop32());
  /* 116b1611 ret  */
  ESPCHK(0x116b1580u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x116b1630 (193 bytes, 87 insns) */
void f_116b1630(void) {
  FTRACE(0x116b1630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b1630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b1632 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 116b1636 push ebx */
  push32((uint32_t)(EBX));
  /* 116b1637 mov ebx, eax */
  EBX = (EAX);
  /* 116b1639 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116b163c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 116b1640 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116b1646 je 0x116b165b */
  if (C.zf) goto L_116b165b;
L_116b1648:;
  /* 116b1648 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 116b164a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116b164b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b164d je 0x116b1620 */
  if (C.zf) { jmp_ind(0x116b1620u); return; }
  /* 116b164f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 116b1651 je 0x116b16a4 */
  if (C.zf) goto L_116b16a4;
  /* 116b1653 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116b1659 jne 0x116b1648 */
  if (!C.zf) goto L_116b1648;
L_116b165b:;
  /* 116b165b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 116b165d push edi */
  push32((uint32_t)(EDI));
  /* 116b165e mov eax, ebx */
  EAX = (EBX);
  /* 116b1660 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 116b1663 push esi */
  push32((uint32_t)(ESI));
  /* 116b1664 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_116b1666:;
  /* 116b1666 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 116b1668 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 116b166d mov eax, ecx */
  EAX = (ECX);
  /* 116b166f mov esi, edi */
  ESI = (EDI);
  /* 116b1671 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 116b1673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1675 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1677 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116b167a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116b167d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 116b167f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 116b1681 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116b1684 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 116b168a jne 0x116b16a8 */
  if (!C.zf) goto L_116b16a8;
  /* 116b168c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116b1691 je 0x116b1666 */
  if (C.zf) goto L_116b1666;
  /* 116b1693 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116b1698 jne 0x116b16a2 */
  if (!C.zf) goto L_116b16a2;
  /* 116b169a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 116b16a0 jne 0x116b1666 */
  if (!C.zf) goto L_116b1666;
L_116b16a2:;
  /* 116b16a2 pop esi */
  ESI = (pop32());
  /* 116b16a3 pop edi */
  EDI = (pop32());
L_116b16a4:;
  /* 116b16a4 pop ebx */
  EBX = (pop32());
  /* 116b16a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116b16a7 ret  */
  ESPCHK(0x116b1630u, _esp0);
  ESP += 4; return;
L_116b16a8:;
  /* 116b16a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116b16ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b16ad je 0x116b16e5 */
  if (C.zf) goto L_116b16e5;
  /* 116b16af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116b16b1 je 0x116b16a2 */
  if (C.zf) goto L_116b16a2;
  /* 116b16b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b16b5 je 0x116b16de */
  if (C.zf) goto L_116b16de;
  /* 116b16b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116b16b9 je 0x116b16a2 */
  if (C.zf) goto L_116b16a2;
  /* 116b16bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116b16be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b16c0 je 0x116b16d7 */
  if (C.zf) goto L_116b16d7;
  /* 116b16c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116b16c4 je 0x116b16a2 */
  if (C.zf) goto L_116b16a2;
  /* 116b16c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116b16c8 je 0x116b16d0 */
  if (C.zf) goto L_116b16d0;
  /* 116b16ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116b16cc je 0x116b16a2 */
  if (C.zf) goto L_116b16a2;
  /* 116b16ce jmp 0x116b1666 */
  goto L_116b1666;
L_116b16d0:;
  /* 116b16d0 pop esi */
  ESI = (pop32());
  /* 116b16d1 pop edi */
  EDI = (pop32());
  /* 116b16d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 116b16d5 pop ebx */
  EBX = (pop32());
  /* 116b16d6 ret  */
  ESPCHK(0x116b1630u, _esp0);
  ESP += 4; return;
L_116b16d7:;
  /* 116b16d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 116b16da pop esi */
  ESI = (pop32());
  /* 116b16db pop edi */
  EDI = (pop32());
  /* 116b16dc pop ebx */
  EBX = (pop32());
  /* 116b16dd ret  */
  ESPCHK(0x116b1630u, _esp0);
  ESP += 4; return;
L_116b16de:;
  /* 116b16de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 116b16e1 pop esi */
  ESI = (pop32());
  /* 116b16e2 pop edi */
  EDI = (pop32());
  /* 116b16e3 pop ebx */
  EBX = (pop32());
  /* 116b16e4 ret  */
  ESPCHK(0x116b1630u, _esp0);
  ESP += 4; return;
L_116b16e5:;
  /* 116b16e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 116b16e8 pop esi */
  ESI = (pop32());
  /* 116b16e9 pop edi */
  EDI = (pop32());
  /* 116b16ea pop ebx */
  EBX = (pop32());
  /* 116b16eb ret  */
  ESPCHK(0x116b1630u, _esp0);
  ESP += 4; return;
  /* 116b16ef xor al, 0x6d */
  { uint32_t _r=(AL)^(0x6du); AL = (_r); fl_logic(_r,8); }
}

/* RtlUnwind @ 0x116b16ec (6 bytes, 1 insns) */
void f_116b16ec(void) {
  FTRACE(0x116b16ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b16ec jmp dword ptr [0x116d3418] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x116d3418)))); return;
}

/* Unwind@10028720 @ 0x116b8720 (11 bytes, 5 insns) */
void f_116b8720(void) {
  FTRACE(0x116b8720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116b8720 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116b8723 push eax */
  push32((uint32_t)(EAX));
  /* 116b8724 call 0x1169a0b0 */
  push32(0x116b8729u); f_1169a0b0();
  /* 116b8729 pop ecx */
  ECX = (pop32());
  /* 116b872a ret  */
  ESPCHK(0x116b8720u, _esp0);
  ESP += 4; return;
}

