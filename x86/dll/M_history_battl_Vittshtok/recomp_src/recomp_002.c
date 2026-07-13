#include "recomp.h"

/* FUN_1000f640 @ 0x12c0f640 (135 bytes, 48 insns) */
void f_12c0f640(void) {
  FTRACE(0x12c0f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f640 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f641 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f646 push esi */
  push32((uint32_t)(ESI));
  /* 12c0f647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f64a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f64f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f659 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12c0f65c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0f664 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0f666 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12c0f669 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f66a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0f66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0f66f push edx */
  push32((uint32_t)(EDX));
  /* 12c0f670 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f676u);
  /* 12c0f676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f678 jne 0x12c0f67e */
  if (!C.zf) goto L_12c0f67e;
  /* 12c0f67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f67c jmp 0x12c0f6c2 */
  goto L_12c0f6c2;
L_12c0f67e:;
  /* 12c0f67e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12c0f681 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f682 call 0x12c0f8b0 */
  push32(0x12c0f687u); f_12c0f8b0();
  /* 12c0f687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f68a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f68d je 0x12c0f6bd */
  if (C.zf) goto L_12c0f6bd;
  /* 12c0f68f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f693 je 0x12c0f6bd */
  if (C.zf) goto L_12c0f6bd;
  /* 12c0f695 mov ecx, dword ptr [0x12c2e70c] */
  ECX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f69b push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f69c call 0x12c0f930 */
  push32(0x12c0f6a1u); f_12c0f930();
  /* 12c0f6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f6a4 mov esi, eax */
  ESI = (EAX);
  /* 12c0f6a6 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f6ac push edx */
  push32((uint32_t)(EDX));
  /* 12c0f6ad call 0x12c05c50 */
  push32(0x12c0f6b2u); f_12c05c50();
  /* 12c0f6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f6b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f6b7 jne 0x12c0f6bd */
  if (!C.zf) goto L_12c0f6bd;
  /* 12c0f6b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f6bb jmp 0x12c0f6c2 */
  goto L_12c0f6c2;
L_12c0f6bd:;
  /* 12c0f6bd mov eax, 1 */
  EAX = (0x1u);
L_12c0f6c2:;
  /* 12c0f6c2 pop esi */
  ESI = (pop32());
  /* 12c0f6c3 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f6c5 pop ebp */
  EBP = (pop32());
  /* 12c0f6c6 ret  */
  ESPCHK(0x12c0f640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x12c0f6d0 (77 bytes, 18 insns) */
void f_12c0f6d0(void) {
  FTRACE(0x12c0f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f6d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f6d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12c0f6e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12c0f6e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f6ea call dword ptr [0x12c30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30258))), 0x12c0f6f0u);
  /* 12c0f6f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f6f2 je 0x12c0f709 */
  if (C.zf) goto L_12c0f709;
  /* 12c0f6f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f6fb jne 0x12c0f709 */
  if (!C.zf) goto L_12c0f709;
  /* 12c0f6fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12c0f707 jmp 0x12c0f713 */
  goto L_12c0f713;
L_12c0f709:;
  /* 12c0f709 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12c0f713:;
  /* 12c0f713 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c0f719 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f71b pop ebp */
  EBP = (pop32());
  /* 12c0f71c ret  */
  ESPCHK(0x12c0f6d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12c0f720 (388 bytes, 118 insns) */
void f_12c0f720(void) {
  FTRACE(0x12c0f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f720 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f721 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0f72d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12c0f734 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c0f73b:;
  /* 12c0f73b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0f73e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f741 jg 0x12c0f888 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0f888;
  /* 12c0f747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0f74a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f74d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0f74e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f750 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0f752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0f755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f758 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f75e cmp edx, dword ptr [ecx + 0x12c2d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12c2d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f764 jne 0x12c0f85e */
  if (!C.zf) goto L_12c0f85e;
  /* 12c0f76a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0f76d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c0f770 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f774 ja 0x12c0f797 */
  if ((!C.cf&&!C.zf)) goto L_12c0f797;
  /* 12c0f776 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f77a je 0x12c0f809 */
  if (C.zf) goto L_12c0f809;
  /* 12c0f780 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f784 je 0x12c0f7b4 */
  if (C.zf) goto L_12c0f7b4;
  /* 12c0f786 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f78a je 0x12c0f7d6 */
  if (C.zf) goto L_12c0f7d6;
  /* 12c0f78c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f790 je 0x12c0f7f8 */
  if (C.zf) goto L_12c0f7f8;
  /* 12c0f792 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f797:;
  /* 12c0f797 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f79e je 0x12c0f7c5 */
  if (C.zf) goto L_12c0f7c5;
  /* 12c0f7a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f7a7 je 0x12c0f7e7 */
  if (C.zf) goto L_12c0f7e7;
  /* 12c0f7a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f7b0 je 0x12c0f81a */
  if (C.zf) goto L_12c0f81a;
  /* 12c0f7b2 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f7b4:;
  /* 12c0f7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f7b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f7ba add ecx, 0x12c2d524 */
  { uint32_t _a=(ECX),_b=(0x12c2d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f7c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0f7c3 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f7c5:;
  /* 12c0f7c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f7c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f7cb mov eax, dword ptr [edx + 0x12c2d52c] */
  EAX = (r32((uint32_t)(EDX + 0x12c2d52c)));
  /* 12c0f7d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0f7d4 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f7d6:;
  /* 12c0f7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f7d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f7dc add ecx, 0x12c2d530 */
  { uint32_t _a=(ECX),_b=(0x12c2d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f7e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0f7e5 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f7e7:;
  /* 12c0f7e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f7ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f7ed mov eax, dword ptr [edx + 0x12c2d534] */
  EAX = (r32((uint32_t)(EDX + 0x12c2d534)));
  /* 12c0f7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0f7f6 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f7f8:;
  /* 12c0f7f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f7fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f7fe add ecx, 0x12c2d538 */
  { uint32_t _a=(ECX),_b=(0x12c2d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0f807 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f809:;
  /* 12c0f809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f80c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f80f add edx, 0x12c2d53c */
  { uint32_t _a=(EDX),_b=(0x12c2d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0f818 jmp 0x12c0f828 */
  goto L_12c0f828;
L_12c0f81a:;
  /* 12c0f81a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f81d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f820 add eax, 0x12c2d544 */
  { uint32_t _a=(EAX),_b=(0x12c2d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0f828:;
  /* 12c0f828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f82c je 0x12c0f834 */
  if (C.zf) goto L_12c0f834;
  /* 12c0f82e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f832 jge 0x12c0f836 */
  if ((C.sf==C.of)) goto L_12c0f836;
L_12c0f834:;
  /* 12c0f834 jmp 0x12c0f888 */
  goto L_12c0f888;
L_12c0f836:;
  /* 12c0f836 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0f839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f83c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f83d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0f840 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0f844 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f845 call 0x12c06640 */
  push32(0x12c0f84au); f_12c06640();
  /* 12c0f84a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f84d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0f850 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f853 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12c0f857 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0f85c jmp 0x12c0f89e */
  goto L_12c0f89e;
L_12c0f85e:;
  /* 12c0f85e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f861 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f867 cmp eax, dword ptr [edx + 0x12c2d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12c2d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f86d jae 0x12c0f87a */
  if (!C.cf) goto L_12c0f87a;
  /* 12c0f86f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f872 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0f878 jmp 0x12c0f883 */
  goto L_12c0f883;
L_12c0f87a:;
  /* 12c0f87a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0f87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f880 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c0f883:;
  /* 12c0f883 jmp 0x12c0f73b */
  goto L_12c0f73b;
L_12c0f888:;
  /* 12c0f888 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0f88b push eax */
  push32((uint32_t)(EAX));
  /* 12c0f88c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0f88f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0f893 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f897 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f898 call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c0f89eu);
L_12c0f89e:;
  /* 12c0f89e mov esp, ebp */
  ESP = (EBP);
  /* 12c0f8a0 pop ebp */
  EBP = (pop32());
  /* 12c0f8a1 ret 0x10 */
  ESPCHK(0x12c0f720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f8b0 @ 0x12c0f8b0 (118 bytes, 42 insns) */
void f_12c0f8b0(void) {
  FTRACE(0x12c0f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f8b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c0f8bd:;
  /* 12c0f8bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f8c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c0f8c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12c0f8c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f8cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f8cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c0f8d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0f8d4 je 0x12c0f91f */
  if (C.zf) goto L_12c0f91f;
  /* 12c0f8d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f8da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f8dd jl 0x12c0f8f2 */
  if ((C.sf!=C.of)) goto L_12c0f8f2;
  /* 12c0f8df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f8e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f8e6 jg 0x12c0f8f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0f8f2;
  /* 12c0f8e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c0f8eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c0f8ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12c0f8f0 jmp 0x12c0f90c */
  goto L_12c0f90c;
L_12c0f8f2:;
  /* 12c0f8f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f8f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f8f9 jl 0x12c0f90c */
  if ((C.sf!=C.of)) goto L_12c0f90c;
  /* 12c0f8fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f8ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f902 jg 0x12c0f90c */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0f90c;
  /* 12c0f904 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c0f907 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c0f909 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12c0f90c:;
  /* 12c0f90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0f90f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c0f912 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0f916 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c0f91a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0f91d jmp 0x12c0f8bd */
  goto L_12c0f8bd;
L_12c0f91f:;
  /* 12c0f91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0f922 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f924 pop ebp */
  EBP = (pop32());
  /* 12c0f925 ret  */
  ESPCHK(0x12c0f8b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12c0f930 (101 bytes, 36 insns) */
void f_12c0f930(void) {
  FTRACE(0x12c0f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f930 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f931 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0f93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c0f942 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12c0f945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f94b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c0f94e:;
  /* 12c0f94e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c0f952 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f955 jl 0x12c0f960 */
  if ((C.sf!=C.of)) goto L_12c0f960;
  /* 12c0f957 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c0f95b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f95e jle 0x12c0f972 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0f972;
L_12c0f960:;
  /* 12c0f960 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c0f964 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f967 jl 0x12c0f98e */
  if ((C.sf!=C.of)) goto L_12c0f98e;
  /* 12c0f969 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c0f96d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f970 jg 0x12c0f98e */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0f98e;
L_12c0f972:;
  /* 12c0f972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0f975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0f97b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f97e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0f980 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12c0f983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f986 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f989 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c0f98c jmp 0x12c0f94e */
  goto L_12c0f94e;
L_12c0f98e:;
  /* 12c0f98e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0f991 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f993 pop ebp */
  EBP = (pop32());
  /* 12c0f994 ret  */
  ESPCHK(0x12c0f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x12c0f9a0 (122 bytes, 39 insns) */
void f_12c0f9a0(void) {
  FTRACE(0x12c0f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f9a7 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f9ad jae 0x12c0f9d1 */
  if (!C.cf) goto L_12c0f9d1;
  /* 12c0f9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f9b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0f9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f9b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f9bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0f9be mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0f9c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0f9ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0f9cf jne 0x12c0f9ec */
  if (!C.zf) goto L_12c0f9ec;
L_12c0f9d1:;
  /* 12c0f9d1 call 0x12c0acf0 */
  push32(0x12c0f9d6u); f_12c0acf0();
  /* 12c0f9d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0f9dc call 0x12c0ad00 */
  push32(0x12c0f9e1u); f_12c0ad00();
  /* 12c0f9e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0f9e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f9ea jmp 0x12c0fa16 */
  goto L_12c0fa16;
L_12c0f9ec:;
  /* 12c0f9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f9ef push edx */
  push32((uint32_t)(EDX));
  /* 12c0f9f0 call 0x12c0c510 */
  push32(0x12c0f9f5u); f_12c0c510();
  /* 12c0f9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f9f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f9fb push eax */
  push32((uint32_t)(EAX));
  /* 12c0f9fc call 0x12c0fa20 */
  push32(0x12c0fa01u); f_12c0fa20();
  /* 12c0fa01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0fa07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa0a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fa0b call 0x12c0c5a0 */
  push32(0x12c0fa10u); f_12c0c5a0();
  /* 12c0fa10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0fa16:;
  /* 12c0fa16 mov esp, ebp */
  ESP = (EBP);
  /* 12c0fa18 pop ebp */
  EBP = (pop32());
  /* 12c0fa19 ret  */
  ESPCHK(0x12c0f9a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12c0fa20 (170 bytes, 59 insns) */
void f_12c0fa20(void) {
  FTRACE(0x12c0fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0fa21 mov ebp, esp */
  EBP = (ESP);
  /* 12c0fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fa24 push esi */
  push32((uint32_t)(ESI));
  /* 12c0fa25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa28 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fa29 call 0x12c0c390 */
  push32(0x12c0fa2eu); f_12c0c390();
  /* 12c0fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fa34 je 0x12c0fa73 */
  if (C.zf) goto L_12c0fa73;
  /* 12c0fa36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fa3a je 0x12c0fa42 */
  if (C.zf) goto L_12c0fa42;
  /* 12c0fa3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fa40 jne 0x12c0fa5c */
  if (!C.zf) goto L_12c0fa5c;
L_12c0fa42:;
  /* 12c0fa42 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0fa44 call 0x12c0c390 */
  push32(0x12c0fa49u); f_12c0c390();
  /* 12c0fa49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa4c mov esi, eax */
  ESI = (EAX);
  /* 12c0fa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0fa50 call 0x12c0c390 */
  push32(0x12c0fa55u); f_12c0c390();
  /* 12c0fa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fa5a je 0x12c0fa73 */
  if (C.zf) goto L_12c0fa73;
L_12c0fa5c:;
  /* 12c0fa5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa5f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fa60 call 0x12c0c390 */
  push32(0x12c0fa65u); f_12c0c390();
  /* 12c0fa65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa68 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fa69 call dword ptr [0x12c30260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30260))), 0x12c0fa6fu);
  /* 12c0fa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0fa71 je 0x12c0fa7c */
  if (C.zf) goto L_12c0fa7c;
L_12c0fa73:;
  /* 12c0fa73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0fa7a jmp 0x12c0fa85 */
  goto L_12c0fa85;
L_12c0fa7c:;
  /* 12c0fa7c call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0fa82u);
  /* 12c0fa82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0fa85:;
  /* 12c0fa85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa88 push edx */
  push32((uint32_t)(EDX));
  /* 12c0fa89 call 0x12c0c2b0 */
  push32(0x12c0fa8eu); f_12c0c2b0();
  /* 12c0fa8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fa91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0fa97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fa9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0fa9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0faa0 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0faa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12c0faac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fab0 je 0x12c0fac3 */
  if (C.zf) goto L_12c0fac3;
  /* 12c0fab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0fab5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fab6 call 0x12c0ac50 */
  push32(0x12c0fabbu); f_12c0ac50();
  /* 12c0fabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fabe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0fac1 jmp 0x12c0fac5 */
  goto L_12c0fac5;
L_12c0fac3:;
  /* 12c0fac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0fac5:;
  /* 12c0fac5 pop esi */
  ESI = (pop32());
  /* 12c0fac6 mov esp, ebp */
  ESP = (EBP);
  /* 12c0fac8 pop ebp */
  EBP = (pop32());
  /* 12c0fac9 ret  */
  ESPCHK(0x12c0fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x12c0fad0 (146 bytes, 52 insns) */
void f_12c0fad0(void) {
  FTRACE(0x12c0fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0fad1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0fad3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0fad4 push esi */
  push32((uint32_t)(ESI));
  /* 12c0fad5 push edi */
  push32((uint32_t)(EDI));
L_12c0fad6:;
  /* 12c0fad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fada jne 0x12c0fafa */
  if (!C.zf) goto L_12c0fafa;
  /* 12c0fadc push 0x12c2a000 */
  push32((uint32_t)(0x12c2a000u));
  /* 12c0fae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0fae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c0fae5 push 0x12c2a6c8 */
  push32((uint32_t)(0x12c2a6c8u));
  /* 12c0faea push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0faec call 0x12c01ee0 */
  push32(0x12c0faf1u); f_12c01ee0();
  /* 12c0faf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0faf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0faf7 jne 0x12c0fafa */
  if (!C.zf) goto L_12c0fafa;
  /* 12c0faf9 int3  */
  x86_unimpl("int3 @ 0x12c0faf9");
L_12c0fafa:;
  /* 12c0fafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0fafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0fafe jne 0x12c0fad6 */
  if (!C.zf) goto L_12c0fad6;
  /* 12c0fb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0fb06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0fb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0fb0e je 0x12c0fb5d */
  if (C.zf) goto L_12c0fb5d;
  /* 12c0fb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0fb16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0fb19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0fb1b je 0x12c0fb5d */
  if (C.zf) goto L_12c0fb5d;
  /* 12c0fb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0fb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c0fb25 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fb26 call 0x12c038b0 */
  push32(0x12c0fb2bu); f_12c038b0();
  /* 12c0fb2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0fb34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0fb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c0fb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12c0fb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c0fb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0fb56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12c0fb5d:;
  /* 12c0fb5d pop edi */
  EDI = (pop32());
  /* 12c0fb5e pop esi */
  ESI = (pop32());
  /* 12c0fb5f pop ebx */
  EBX = (pop32());
  /* 12c0fb60 pop ebp */
  EBP = (pop32());
  /* 12c0fb61 ret  */
  ESPCHK(0x12c0fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x12c0fb70 (289 bytes, 97 insns) */
void f_12c0fb70(void) {
  FTRACE(0x12c0fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0fb71 mov ebp, esp */
  EBP = (ESP);
  /* 12c0fb73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0fb76 push esi */
  push32((uint32_t)(ESI));
  /* 12c0fb77 mov eax, dword ptr [0x12c2dc98] */
  EAX = (r32((uint32_t)(0x12c2dc98)));
  /* 12c0fb7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0fb7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0fb86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fb8d jmp 0x12c0fb98 */
  goto L_12c0fb98;
L_12c0fb8f:;
  /* 12c0fb8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fb92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fb95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c0fb98:;
  /* 12c0fb98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fb9c jae 0x12c0fbd1 */
  if (!C.cf) goto L_12c0fbd1;
  /* 12c0fb9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0fba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fba8 call 0x12c05c50 */
  push32(0x12c0fbadu); f_12c05c50();
  /* 12c0fbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fbb0 mov esi, eax */
  ESI = (EAX);
  /* 12c0fbb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fbb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fbb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12c0fbbc push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fbbd call 0x12c05c50 */
  push32(0x12c0fbc2u); f_12c05c50();
  /* 12c0fbc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fbc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fbc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c0fbcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0fbcf jmp 0x12c0fb8f */
  goto L_12c0fb8f;
L_12c0fbd1:;
  /* 12c0fbd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0fbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fbd7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fbd8 call 0x12c02e00 */
  push32(0x12c0fbddu); f_12c02e00();
  /* 12c0fbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fbe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0fbe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fbe7 je 0x12c0fc89 */
  if (C.zf) goto L_12c0fc89;
  /* 12c0fbed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0fbf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fbf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fbfa jmp 0x12c0fc05 */
  goto L_12c0fc05;
L_12c0fbfc:;
  /* 12c0fbfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fbff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c0fc05:;
  /* 12c0fc05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fc09 jae 0x12c0fc7a */
  if (!C.cf) goto L_12c0fc7a;
  /* 12c0fc0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12c0fc11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fc1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fc1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fc20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fc24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc27 push edx */
  push32((uint32_t)(EDX));
  /* 12c0fc28 call 0x12c05dd0 */
  push32(0x12c0fc2du); f_12c05dd0();
  /* 12c0fc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc30 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fc31 call 0x12c05c50 */
  push32(0x12c0fc36u); f_12c05c50();
  /* 12c0fc36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fc41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12c0fc47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c0fc50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fc53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fc56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12c0fc5a push eax */
  push32((uint32_t)(EAX));
  /* 12c0fc5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc5e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fc5f call 0x12c05dd0 */
  push32(0x12c0fc64u); f_12c05dd0();
  /* 12c0fc64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc67 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fc68 call 0x12c05c50 */
  push32(0x12c0fc6du); f_12c05c50();
  /* 12c0fc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c0fc78 jmp 0x12c0fbfc */
  goto L_12c0fbfc;
L_12c0fc7a:;
  /* 12c0fc7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c0fc80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fc83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fc86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c0fc89:;
  /* 12c0fc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0fc8c pop esi */
  ESI = (pop32());
  /* 12c0fc8d mov esp, ebp */
  ESP = (EBP);
  /* 12c0fc8f pop ebp */
  EBP = (pop32());
  /* 12c0fc90 ret  */
  ESPCHK(0x12c0fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x12c0fca0 (291 bytes, 97 insns) */
void f_12c0fca0(void) {
  FTRACE(0x12c0fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0fca1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0fca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0fca6 push esi */
  push32((uint32_t)(ESI));
  /* 12c0fca7 mov eax, dword ptr [0x12c2dc98] */
  EAX = (r32((uint32_t)(0x12c2dc98)));
  /* 12c0fcac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0fcaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0fcb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fcbd jmp 0x12c0fcc8 */
  goto L_12c0fcc8;
L_12c0fcbf:;
  /* 12c0fcbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fcc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fcc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c0fcc8:;
  /* 12c0fcc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fccc jae 0x12c0fd02 */
  if (!C.cf) goto L_12c0fd02;
  /* 12c0fcce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fcd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12c0fcd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fcd9 call 0x12c05c50 */
  push32(0x12c0fcdeu); f_12c05c50();
  /* 12c0fcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fce1 mov esi, eax */
  ESI = (EAX);
  /* 12c0fce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12c0fced push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fcee call 0x12c05c50 */
  push32(0x12c0fcf3u); f_12c05c50();
  /* 12c0fcf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fcf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fcf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c0fcfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0fd00 jmp 0x12c0fcbf */
  goto L_12c0fcbf;
L_12c0fd02:;
  /* 12c0fd02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0fd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd08 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fd09 call 0x12c02e00 */
  push32(0x12c0fd0eu); f_12c02e00();
  /* 12c0fd0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0fd14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fd18 je 0x12c0fdbb */
  if (C.zf) goto L_12c0fdbb;
  /* 12c0fd1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0fd21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fd24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fd2b jmp 0x12c0fd36 */
  goto L_12c0fd36;
L_12c0fd2d:;
  /* 12c0fd2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fd30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c0fd36:;
  /* 12c0fd36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fd3a jae 0x12c0fdac */
  if (!C.cf) goto L_12c0fdac;
  /* 12c0fd3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12c0fd42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fd4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fd4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fd51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12c0fd55 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fd56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd59 push edx */
  push32((uint32_t)(EDX));
  /* 12c0fd5a call 0x12c05dd0 */
  push32(0x12c0fd5fu); f_12c05dd0();
  /* 12c0fd5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd62 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fd63 call 0x12c05c50 */
  push32(0x12c0fd68u); f_12c05c50();
  /* 12c0fd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0fd73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12c0fd79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c0fd82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fd85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fd88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c0fd8c push eax */
  push32((uint32_t)(EAX));
  /* 12c0fd8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fd90 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fd91 call 0x12c05dd0 */
  push32(0x12c0fd96u); f_12c05dd0();
  /* 12c0fd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fd99 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fd9a call 0x12c05c50 */
  push32(0x12c0fd9fu); f_12c05c50();
  /* 12c0fd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fda2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fda5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fda7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c0fdaa jmp 0x12c0fd2d */
  goto L_12c0fd2d;
L_12c0fdac:;
  /* 12c0fdac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fdaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c0fdb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0fdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fdb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c0fdbb:;
  /* 12c0fdbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0fdbe pop esi */
  ESI = (pop32());
  /* 12c0fdbf mov esp, ebp */
  ESP = (EBP);
  /* 12c0fdc1 pop ebp */
  EBP = (pop32());
  /* 12c0fdc2 ret  */
  ESPCHK(0x12c0fca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x12c0fdd0 (878 bytes, 273 insns) */
void f_12c0fdd0(void) {
  FTRACE(0x12c0fdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0fdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0fdd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0fdd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0fdd6 push esi */
  push32((uint32_t)(ESI));
  /* 12c0fdd7 mov eax, dword ptr [0x12c2dc98] */
  EAX = (r32((uint32_t)(0x12c2dc98)));
  /* 12c0fddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0fddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0fde6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fded jmp 0x12c0fdf8 */
  goto L_12c0fdf8;
L_12c0fdef:;
  /* 12c0fdef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fdf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fdf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c0fdf8:;
  /* 12c0fdf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fdfc jae 0x12c0fe31 */
  if (!C.cf) goto L_12c0fe31;
  /* 12c0fdfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fe01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0fe07 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fe08 call 0x12c05c50 */
  push32(0x12c0fe0du); f_12c05c50();
  /* 12c0fe0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe10 mov esi, eax */
  ESI = (EAX);
  /* 12c0fe12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fe15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12c0fe1c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fe1d call 0x12c05c50 */
  push32(0x12c0fe22u); f_12c05c50();
  /* 12c0fe22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c0fe2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0fe2f jmp 0x12c0fdef */
  goto L_12c0fdef;
L_12c0fe31:;
  /* 12c0fe31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0fe38 jmp 0x12c0fe43 */
  goto L_12c0fe43;
L_12c0fe3a:;
  /* 12c0fe3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fe3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c0fe43:;
  /* 12c0fe43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0fe47 jae 0x12c0fe7d */
  if (!C.cf) goto L_12c0fe7d;
  /* 12c0fe49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fe4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c0fe53 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fe54 call 0x12c05c50 */
  push32(0x12c0fe59u); f_12c05c50();
  /* 12c0fe59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe5c mov esi, eax */
  ESI = (EAX);
  /* 12c0fe5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fe61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c0fe68 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fe69 call 0x12c05c50 */
  push32(0x12c0fe6eu); f_12c05c50();
  /* 12c0fe6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c0fe78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0fe7b jmp 0x12c0fe3a */
  goto L_12c0fe3a;
L_12c0fe7d:;
  /* 12c0fe7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12c0fe86 push eax */
  push32((uint32_t)(EAX));
  /* 12c0fe87 call 0x12c05c50 */
  push32(0x12c0fe8cu); f_12c05c50();
  /* 12c0fe8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fe8f mov esi, eax */
  ESI = (EAX);
  /* 12c0fe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fe94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12c0fe9a push edx */
  push32((uint32_t)(EDX));
  /* 12c0fe9b call 0x12c05c50 */
  push32(0x12c0fea0u); f_12c05c50();
  /* 12c0fea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12c0feaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0fead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0feb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12c0feb6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0feb7 call 0x12c05c50 */
  push32(0x12c0febcu); f_12c05c50();
  /* 12c0febc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0febf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0fec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c0fec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0fec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12c0fed2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0fed3 call 0x12c05c50 */
  push32(0x12c0fed8u); f_12c05c50();
  /* 12c0fed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fedb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0fede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c0fee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0fee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12c0feee push edx */
  push32((uint32_t)(EDX));
  /* 12c0feef call 0x12c05c50 */
  push32(0x12c0fef4u); f_12c05c50();
  /* 12c0fef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0fef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0fefa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c0fefe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0ff01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0ff04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff09 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ff0a call 0x12c02e00 */
  push32(0x12c0ff0fu); f_12c02e00();
  /* 12c0ff0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0ff15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ff19 je 0x12c10136 */
  if (C.zf) goto L_12c10136;
  /* 12c0ff1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ff22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c0ff25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ff28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c0ff31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12c0ff36 mov eax, dword ptr [0x12c2dc98] */
  EAX = (r32((uint32_t)(0x12c2dc98)));
  /* 12c0ff3b push eax */
  push32((uint32_t)(EAX));
  /* 12c0ff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ff3f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ff40 call 0x12c09700 */
  push32(0x12c0ff45u); f_12c09700();
  /* 12c0ff45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0ff4f jmp 0x12c0ff5a */
  goto L_12c0ff5a;
L_12c0ff51:;
  /* 12c0ff51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ff54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c0ff5a:;
  /* 12c0ff5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ff5e jae 0x12c0ffce */
  if (!C.cf) goto L_12c0ffce;
  /* 12c0ff60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ff63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0ff66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ff69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12c0ff6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ff6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ff72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0ff75 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ff76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ff79 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ff7a call 0x12c05dd0 */
  push32(0x12c0ff7fu); f_12c05dd0();
  /* 12c0ff7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff82 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ff83 call 0x12c05c50 */
  push32(0x12c0ff88u); f_12c05c50();
  /* 12c0ff88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ff8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ff8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c0ff92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c0ff95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ff98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0ff9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ff9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12c0ffa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ffa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ffa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12c0ffac push edx */
  push32((uint32_t)(EDX));
  /* 12c0ffad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ffb0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ffb1 call 0x12c05dd0 */
  push32(0x12c0ffb6u); f_12c05dd0();
  /* 12c0ffb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ffb9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ffba call 0x12c05c50 */
  push32(0x12c0ffbfu); f_12c05c50();
  /* 12c0ffbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ffc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ffc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c0ffc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c0ffcc jmp 0x12c0ff51 */
  goto L_12c0ff51;
L_12c0ffce:;
  /* 12c0ffce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0ffd5 jmp 0x12c0ffe0 */
  goto L_12c0ffe0;
L_12c0ffd7:;
  /* 12c0ffd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ffda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ffdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c0ffe0:;
  /* 12c0ffe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ffe4 jae 0x12c10056 */
  if (!C.cf) goto L_12c10056;
  /* 12c0ffe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ffe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0ffec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0ffef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12c0fff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0fff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0fff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c0fffd push eax */
  push32((uint32_t)(EAX));
  /* 12c0fffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10001 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10002 call 0x12c05dd0 */
  push32(0x12c10007u); f_12c05dd0();
  /* 12c10007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1000a push eax */
  push32((uint32_t)(EAX));
  /* 12c1000b call 0x12c05c50 */
  push32(0x12c10010u); f_12c05c50();
  /* 12c10010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c1001a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c1001d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c10023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12c1002a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c1002d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c10034 push eax */
  push32((uint32_t)(EAX));
  /* 12c10035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10038 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10039 call 0x12c05dd0 */
  push32(0x12c1003eu); f_12c05dd0();
  /* 12c1003e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10041 push eax */
  push32((uint32_t)(EAX));
  /* 12c10042 call 0x12c05c50 */
  push32(0x12c10047u); f_12c05c50();
  /* 12c10047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1004a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c1004d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c10051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c10054 jmp 0x12c0ffd7 */
  goto L_12c0ffd7;
L_12c10056:;
  /* 12c10056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c10059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c1005c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12c10062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12c1006b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1006c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c1006f push edx */
  push32((uint32_t)(EDX));
  /* 12c10070 call 0x12c05dd0 */
  push32(0x12c10075u); f_12c05dd0();
  /* 12c10075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10078 push eax */
  push32((uint32_t)(EAX));
  /* 12c10079 call 0x12c05c50 */
  push32(0x12c1007eu); f_12c05c50();
  /* 12c1007e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c10088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c1008b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c1008e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12c10097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1009a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12c100a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c100a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c100a5 call 0x12c05dd0 */
  push32(0x12c100aau); f_12c05dd0();
  /* 12c100aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c100ad push eax */
  push32((uint32_t)(EAX));
  /* 12c100ae call 0x12c05c50 */
  push32(0x12c100b3u); f_12c05c50();
  /* 12c100b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c100b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c100bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c100c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c100c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12c100cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c100cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12c100d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c100d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100d9 push edx */
  push32((uint32_t)(EDX));
  /* 12c100da call 0x12c05dd0 */
  push32(0x12c100dfu); f_12c05dd0();
  /* 12c100df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c100e2 push eax */
  push32((uint32_t)(EAX));
  /* 12c100e3 call 0x12c05c50 */
  push32(0x12c100e8u); f_12c05c50();
  /* 12c100e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c100eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c100f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c100f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c100f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c100fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12c10101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12c1010a push eax */
  push32((uint32_t)(EAX));
  /* 12c1010b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c1010e push ecx */
  push32((uint32_t)(ECX));
  /* 12c1010f call 0x12c05dd0 */
  push32(0x12c10114u); f_12c05dd0();
  /* 12c10114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10117 push eax */
  push32((uint32_t)(EAX));
  /* 12c10118 call 0x12c05c50 */
  push32(0x12c1011du); f_12c05c50();
  /* 12c1011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12c10127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c1012a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c1012d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12c10136:;
  /* 12c10136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10139 pop esi */
  ESI = (pop32());
  /* 12c1013a mov esp, ebp */
  ESP = (EBP);
  /* 12c1013c pop ebp */
  EBP = (pop32());
  /* 12c1013d ret  */
  ESPCHK(0x12c0fdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x12c10140 (31 bytes, 15 insns) */
void f_12c10140(void) {
  FTRACE(0x12c10140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10140 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10141 mov ebp, esp */
  EBP = (ESP);
  /* 12c10143 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c10145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10148 push eax */
  push32((uint32_t)(EAX));
  /* 12c10149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1014c push ecx */
  push32((uint32_t)(ECX));
  /* 12c1014d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10150 push edx */
  push32((uint32_t)(EDX));
  /* 12c10151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10154 push eax */
  push32((uint32_t)(EAX));
  /* 12c10155 call 0x12c10160 */
  push32(0x12c1015au); f_12c10160();
  /* 12c1015a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1015d pop ebp */
  EBP = (pop32());
  /* 12c1015e ret  */
  ESPCHK(0x12c10140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x12c10160 (393 bytes, 123 insns) */
void f_12c10160(void) {
  FTRACE(0x12c10160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10160 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10161 mov ebp, esp */
  EBP = (ESP);
  /* 12c10163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10166 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1016a jne 0x12c10176 */
  if (!C.zf) goto L_12c10176;
  /* 12c1016c mov eax, dword ptr [0x12c2dc98] */
  EAX = (r32((uint32_t)(0x12c2dc98)));
  /* 12c10171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c10174 jmp 0x12c1017c */
  goto L_12c1017c;
L_12c10176:;
  /* 12c10176 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c1017c:;
  /* 12c1017c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c1017f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c10182 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c10188 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c1018d call dword ptr [0x12c302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a4))), 0x12c10193u);
  /* 12c10193 cmp dword ptr [0x12c2e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1019a je 0x12c101ba */
  if (C.zf) goto L_12c101ba;
  /* 12c1019c push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c101a1 call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c101a7u);
  /* 12c101a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c101a9 call 0x12c06820 */
  push32(0x12c101aeu); f_12c06820();
  /* 12c101ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c101b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c101b8 jmp 0x12c101c1 */
  goto L_12c101c1;
L_12c101ba:;
  /* 12c101ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c101c1:;
  /* 12c101c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c101c5 jbe 0x12c102b2 */
  if ((C.cf||C.zf)) goto L_12c102b2;
  /* 12c101cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c101ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c101d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12c101d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c101d7 je 0x12c101e1 */
  if (C.zf) goto L_12c101e1;
  /* 12c101d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c101dd je 0x12c101e6 */
  if (C.zf) goto L_12c101e6;
  /* 12c101df jmp 0x12c10240 */
  goto L_12c10240;
L_12c101e1:;
  /* 12c101e1 jmp 0x12c102b2 */
  goto L_12c102b2;
L_12c101e6:;
  /* 12c101e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c101e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c101ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c101ef mov dword ptr [0x12c2e7f8], 0 */
  w32((uint32_t)(0x12c2e7f8), (0x0u));
  /* 12c101f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c101fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c101ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10202 jne 0x12c10217 */
  if (!C.zf) goto L_12c10217;
  /* 12c10204 mov dword ptr [0x12c2e7f8], 1 */
  w32((uint32_t)(0x12c2e7f8), (0x1u));
  /* 12c1020e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10214 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c10217:;
  /* 12c10217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1021a push ecx */
  push32((uint32_t)(ECX));
  /* 12c1021b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12c1021e push edx */
  push32((uint32_t)(EDX));
  /* 12c1021f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c10222 push eax */
  push32((uint32_t)(EAX));
  /* 12c10223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10226 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1022a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c1022c push eax */
  push32((uint32_t)(EAX));
  /* 12c1022d call 0x12c102f0 */
  push32(0x12c10232u); f_12c102f0();
  /* 12c10232 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1023b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c1023e jmp 0x12c102ad */
  goto L_12c102ad;
L_12c10240:;
  /* 12c10240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c10245 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10247 mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c1024d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c1024f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c10253 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c10259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c1025b je 0x12c10288 */
  if (C.zf) goto L_12c10288;
  /* 12c1025d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10261 jbe 0x12c10288 */
  if ((C.cf||C.zf)) goto L_12c10288;
  /* 12c10263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10269 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c1026b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c1026d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10273 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c10276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1027c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c1027f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10282 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10285 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c10288:;
  /* 12c10288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1028b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1028e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c10290 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c10292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c1029b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1029e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c102a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c102a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c102a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c102aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c102ad:;
  /* 12c102ad jmp 0x12c101c1 */
  goto L_12c101c1;
L_12c102b2:;
  /* 12c102b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c102b6 je 0x12c102c4 */
  if (C.zf) goto L_12c102c4;
  /* 12c102b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c102ba call 0x12c068c0 */
  push32(0x12c102bfu); f_12c068c0();
  /* 12c102bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c102c2 jmp 0x12c102cf */
  goto L_12c102cf;
L_12c102c4:;
  /* 12c102c4 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c102c9 call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c102cfu);
L_12c102cf:;
  /* 12c102cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c102d3 jbe 0x12c102e3 */
  if ((C.cf||C.zf)) goto L_12c102e3;
  /* 12c102d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c102d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c102db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c102de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c102e1 jmp 0x12c102e5 */
  goto L_12c102e5;
L_12c102e3:;
  /* 12c102e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c102e5:;
  /* 12c102e5 mov esp, ebp */
  ESP = (EBP);
  /* 12c102e7 pop ebp */
  EBP = (pop32());
  /* 12c102e8 ret  */
  ESPCHK(0x12c10160u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x12c102f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12c102f0(void) {
  FTRACE(0x12c102f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c102f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c102f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c102f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c102f6 push esi */
  push32((uint32_t)(ESI));
  /* 12c102f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12c102fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c102fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c10307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1030b ja 0x12c10858 */
  if ((!C.cf&&!C.zf)) goto L_12c10858;
  /* 12c10311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c10316 mov dl, byte ptr [eax + 0x12c108b9] */
  DL = (r8((uint32_t)(EAX + 0x12c108b9)));
  /* 12c1031c jmp dword ptr [edx*4 + 0x12c1085d] */
  switch (EDX) {
    case 0: goto L_12c10836;
    case 1: goto L_12c10345;
    case 2: goto L_12c1038b;
    case 3: goto L_12c104d8;
    case 4: goto L_12c10500;
    case 5: goto L_12c1059f;
    case 6: goto L_12c1060b;
    case 7: goto L_12c10634;
    case 8: goto L_12c10675;
    case 9: goto L_12c10757;
    case 10: goto L_12c107be;
    case 11: goto L_12c1080b;
    case 12: goto L_12c10323;
    case 13: goto L_12c10368;
    case 14: goto L_12c103ae;
    case 15: goto L_12c104ae;
    case 16: goto L_12c10545;
    case 17: goto L_12c10572;
    case 18: goto L_12c105c7;
    case 19: goto L_12c1064b;
    case 20: goto L_12c106f9;
    case 21: goto L_12c10788;
    case 22: goto L_12c10858;
    default: x86_unimpl("switch@0x12c1031c out of table"); return;
  }
L_12c10323:;
  /* 12c10323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10326 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1032a push edx */
  push32((uint32_t)(EDX));
  /* 12c1032b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1032e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c10331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c10337 push eax */
  push32((uint32_t)(EAX));
  /* 12c10338 call 0x12c10910 */
  push32(0x12c1033du); f_12c10910();
  /* 12c1033d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10340 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10345:;
  /* 12c10345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10348 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1034c push edx */
  push32((uint32_t)(EDX));
  /* 12c1034d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c10353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12c1035a push eax */
  push32((uint32_t)(EAX));
  /* 12c1035b call 0x12c10910 */
  push32(0x12c10360u); f_12c10910();
  /* 12c10360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10363 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10368:;
  /* 12c10368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1036b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1036c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1036f push edx */
  push32((uint32_t)(EDX));
  /* 12c10370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c10376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12c1037d push eax */
  push32((uint32_t)(EAX));
  /* 12c1037e call 0x12c10910 */
  push32(0x12c10383u); f_12c10910();
  /* 12c10383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10386 jmp 0x12c10858 */
  goto L_12c10858;
L_12c1038b:;
  /* 12c1038b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1038e push ecx */
  push32((uint32_t)(ECX));
  /* 12c1038f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10392 push edx */
  push32((uint32_t)(EDX));
  /* 12c10393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c10399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1039c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12c103a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c103a1 call 0x12c10910 */
  push32(0x12c103a6u); f_12c10910();
  /* 12c103a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c103a9 jmp 0x12c10858 */
  goto L_12c10858;
L_12c103ae:;
  /* 12c103ae cmp dword ptr [0x12c2e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c103b5 je 0x12c10436 */
  if (C.zf) goto L_12c10436;
  /* 12c103b7 mov dword ptr [0x12c2e7f8], 0 */
  w32((uint32_t)(0x12c2e7f8), (0x0u));
  /* 12c103c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c103c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c103c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c103c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c103c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c103cc push eax */
  push32((uint32_t)(EAX));
  /* 12c103cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c103d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c103d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c103d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12c103da push eax */
  push32((uint32_t)(EAX));
  /* 12c103db call 0x12c10ac0 */
  push32(0x12c103e0u); f_12c10ac0();
  /* 12c103e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c103e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c103e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c103e9 jne 0x12c103f0 */
  if (!C.zf) goto L_12c103f0;
  /* 12c103eb jmp 0x12c10858 */
  goto L_12c10858;
L_12c103f0:;
  /* 12c103f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c103f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c103f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12c103f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c103fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c103fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c10405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c1040a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c1040d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c10412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10415 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10419 push edx */
  push32((uint32_t)(EDX));
  /* 12c1041a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1041d push eax */
  push32((uint32_t)(EAX));
  /* 12c1041e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10421 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12c1042b push eax */
  push32((uint32_t)(EAX));
  /* 12c1042c call 0x12c10ac0 */
  push32(0x12c10431u); f_12c10ac0();
  /* 12c10431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10434 jmp 0x12c104a9 */
  goto L_12c104a9;
L_12c10436:;
  /* 12c10436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10439 push ecx */
  push32((uint32_t)(ECX));
  /* 12c1043a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1043d push edx */
  push32((uint32_t)(EDX));
  /* 12c1043e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10441 push eax */
  push32((uint32_t)(EAX));
  /* 12c10442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10445 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12c1044f push eax */
  push32((uint32_t)(EAX));
  /* 12c10450 call 0x12c10ac0 */
  push32(0x12c10455u); f_12c10ac0();
  /* 12c10455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1045b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1045e jne 0x12c10465 */
  if (!C.zf) goto L_12c10465;
  /* 12c10460 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10465:;
  /* 12c10465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c1046a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12c1046d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c1047a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1047d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c1047f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c10487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1048a push ecx */
  push32((uint32_t)(ECX));
  /* 12c1048b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1048e push edx */
  push32((uint32_t)(EDX));
  /* 12c1048f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10492 push eax */
  push32((uint32_t)(EAX));
  /* 12c10493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10496 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1049a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12c104a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c104a1 call 0x12c10ac0 */
  push32(0x12c104a6u); f_12c10ac0();
  /* 12c104a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c104a9:;
  /* 12c104a9 jmp 0x12c10858 */
  goto L_12c10858;
L_12c104ae:;
  /* 12c104ae mov ecx, dword ptr [0x12c2e7f8] */
  ECX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c104b4 mov dword ptr [0x12c2e808], ecx */
  w32((uint32_t)(0x12c2e808), (ECX));
  /* 12c104ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c104bd push edx */
  push32((uint32_t)(EDX));
  /* 12c104be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c104c1 push eax */
  push32((uint32_t)(EAX));
  /* 12c104c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c104c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c104c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c104ca push edx */
  push32((uint32_t)(EDX));
  /* 12c104cb call 0x12c10960 */
  push32(0x12c104d0u); f_12c10960();
  /* 12c104d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c104d3 jmp 0x12c10858 */
  goto L_12c10858;
L_12c104d8:;
  /* 12c104d8 mov eax, dword ptr [0x12c2e7f8] */
  EAX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c104dd mov dword ptr [0x12c2e808], eax */
  w32((uint32_t)(0x12c2e808), (EAX));
  /* 12c104e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c104e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c104e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c104e9 push edx */
  push32((uint32_t)(EDX));
  /* 12c104ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12c104ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c104ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c104f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c104f3 call 0x12c10960 */
  push32(0x12c104f8u); f_12c10960();
  /* 12c104f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c104fb jmp 0x12c10858 */
  goto L_12c10858;
L_12c10500:;
  /* 12c10500 mov edx, dword ptr [0x12c2e7f8] */
  EDX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c10506 mov dword ptr [0x12c2e808], edx */
  w32((uint32_t)(0x12c2e808), (EDX));
  /* 12c1050c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1050f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c10512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c10513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12c10518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c1051a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c1051d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10521 jne 0x12c1052a */
  if (!C.zf) goto L_12c1052a;
  /* 12c10523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12c1052a:;
  /* 12c1052a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1052d push edx */
  push32((uint32_t)(EDX));
  /* 12c1052e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10531 push eax */
  push32((uint32_t)(EAX));
  /* 12c10532 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c10534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10537 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10538 call 0x12c10960 */
  push32(0x12c1053du); f_12c10960();
  /* 12c1053d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10540 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10545:;
  /* 12c10545 mov edx, dword ptr [0x12c2e7f8] */
  EDX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c1054b mov dword ptr [0x12c2e808], edx */
  w32((uint32_t)(0x12c2e808), (EDX));
  /* 12c10551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10554 push eax */
  push32((uint32_t)(EAX));
  /* 12c10555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10558 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10559 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c1055b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1055e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c10561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10564 push eax */
  push32((uint32_t)(EAX));
  /* 12c10565 call 0x12c10960 */
  push32(0x12c1056au); f_12c10960();
  /* 12c1056a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1056d jmp 0x12c10858 */
  goto L_12c10858;
L_12c10572:;
  /* 12c10572 mov ecx, dword ptr [0x12c2e7f8] */
  ECX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c10578 mov dword ptr [0x12c2e808], ecx */
  w32((uint32_t)(0x12c2e808), (ECX));
  /* 12c1057e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10581 push edx */
  push32((uint32_t)(EDX));
  /* 12c10582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10585 push eax */
  push32((uint32_t)(EAX));
  /* 12c10586 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c10588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1058b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c1058e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10591 push edx */
  push32((uint32_t)(EDX));
  /* 12c10592 call 0x12c10960 */
  push32(0x12c10597u); f_12c10960();
  /* 12c10597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1059a jmp 0x12c10858 */
  goto L_12c10858;
L_12c1059f:;
  /* 12c1059f mov eax, dword ptr [0x12c2e7f8] */
  EAX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c105a4 mov dword ptr [0x12c2e808], eax */
  w32((uint32_t)(0x12c2e808), (EAX));
  /* 12c105a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c105ac push ecx */
  push32((uint32_t)(ECX));
  /* 12c105ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c105b0 push edx */
  push32((uint32_t)(EDX));
  /* 12c105b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c105b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c105b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c105b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c105ba call 0x12c10960 */
  push32(0x12c105bfu); f_12c10960();
  /* 12c105bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c105c2 jmp 0x12c10858 */
  goto L_12c10858;
L_12c105c7:;
  /* 12c105c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c105ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c105ce jg 0x12c105ec */
  if ((!C.zf&&C.sf==C.of)) goto L_12c105ec;
  /* 12c105d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c105d3 push eax */
  push32((uint32_t)(EAX));
  /* 12c105d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c105d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c105d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c105db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12c105e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c105e2 call 0x12c10910 */
  push32(0x12c105e7u); f_12c10910();
  /* 12c105e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c105ea jmp 0x12c10606 */
  goto L_12c10606;
L_12c105ec:;
  /* 12c105ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c105ef push ecx */
  push32((uint32_t)(ECX));
  /* 12c105f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c105f3 push edx */
  push32((uint32_t)(EDX));
  /* 12c105f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c105f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12c105fd push ecx */
  push32((uint32_t)(ECX));
  /* 12c105fe call 0x12c10910 */
  push32(0x12c10603u); f_12c10910();
  /* 12c10603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c10606:;
  /* 12c10606 jmp 0x12c10858 */
  goto L_12c10858;
L_12c1060b:;
  /* 12c1060b mov edx, dword ptr [0x12c2e7f8] */
  EDX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c10611 mov dword ptr [0x12c2e808], edx */
  w32((uint32_t)(0x12c2e808), (EDX));
  /* 12c10617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1061a push eax */
  push32((uint32_t)(EAX));
  /* 12c1061b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1061e push ecx */
  push32((uint32_t)(ECX));
  /* 12c1061f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c10621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10626 push eax */
  push32((uint32_t)(EAX));
  /* 12c10627 call 0x12c10960 */
  push32(0x12c1062cu); f_12c10960();
  /* 12c1062c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1062f jmp 0x12c10858 */
  goto L_12c10858;
L_12c10634:;
  /* 12c10634 mov ecx, dword ptr [0x12c2e7f8] */
  ECX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c1063a mov dword ptr [0x12c2e808], ecx */
  w32((uint32_t)(0x12c2e808), (ECX));
  /* 12c10640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12c10646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c10649 jmp 0x12c1069d */
  goto L_12c1069d;
L_12c1064b:;
  /* 12c1064b mov ecx, dword ptr [0x12c2e7f8] */
  ECX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c10651 mov dword ptr [0x12c2e808], ecx */
  w32((uint32_t)(0x12c2e808), (ECX));
  /* 12c10657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1065a push edx */
  push32((uint32_t)(EDX));
  /* 12c1065b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1065e push eax */
  push32((uint32_t)(EAX));
  /* 12c1065f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c10661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c10667 push edx */
  push32((uint32_t)(EDX));
  /* 12c10668 call 0x12c10960 */
  push32(0x12c1066du); f_12c10960();
  /* 12c1066d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10670 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10675:;
  /* 12c10675 mov eax, dword ptr [0x12c2e7f8] */
  EAX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c1067a mov dword ptr [0x12c2e808], eax */
  w32((uint32_t)(0x12c2e808), (EAX));
  /* 12c1067f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10686 jne 0x12c10691 */
  if (!C.zf) goto L_12c10691;
  /* 12c10688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12c1068f jmp 0x12c1069d */
  goto L_12c1069d;
L_12c10691:;
  /* 12c10691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12c10697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c1069a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c1069d:;
  /* 12c1069d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c106a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c106a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c106a6 jge 0x12c106b1 */
  if ((C.sf==C.of)) goto L_12c106b1;
  /* 12c106a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c106af jmp 0x12c106de */
  goto L_12c106de;
L_12c106b1:;
  /* 12c106b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c106b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c106b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c106b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12c106bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c106bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c106c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c106c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c106c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c106c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12c106ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c106d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c106d3 jl 0x12c106de */
  if ((C.sf!=C.of)) goto L_12c106de;
  /* 12c106d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c106d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c106db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c106de:;
  /* 12c106de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c106e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c106e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c106e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c106e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c106e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c106eb push edx */
  push32((uint32_t)(EDX));
  /* 12c106ec call 0x12c10960 */
  push32(0x12c106f1u); f_12c10960();
  /* 12c106f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c106f4 jmp 0x12c10858 */
  goto L_12c10858;
L_12c106f9:;
  /* 12c106f9 cmp dword ptr [0x12c2e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10700 je 0x12c10730 */
  if (C.zf) goto L_12c10730;
  /* 12c10702 mov dword ptr [0x12c2e7f8], 0 */
  w32((uint32_t)(0x12c2e7f8), (0x0u));
  /* 12c1070c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1070f push eax */
  push32((uint32_t)(EAX));
  /* 12c10710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10713 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10717 push edx */
  push32((uint32_t)(EDX));
  /* 12c10718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1071b push eax */
  push32((uint32_t)(EAX));
  /* 12c1071c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1071f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12c10725 push edx */
  push32((uint32_t)(EDX));
  /* 12c10726 call 0x12c10ac0 */
  push32(0x12c1072bu); f_12c10ac0();
  /* 12c1072b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1072e jmp 0x12c10752 */
  goto L_12c10752;
L_12c10730:;
  /* 12c10730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10733 push eax */
  push32((uint32_t)(EAX));
  /* 12c10734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10737 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1073b push edx */
  push32((uint32_t)(EDX));
  /* 12c1073c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1073f push eax */
  push32((uint32_t)(EAX));
  /* 12c10740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12c10749 push edx */
  push32((uint32_t)(EDX));
  /* 12c1074a call 0x12c10ac0 */
  push32(0x12c1074fu); f_12c10ac0();
  /* 12c1074f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c10752:;
  /* 12c10752 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10757:;
  /* 12c10757 mov dword ptr [0x12c2e7f8], 0 */
  w32((uint32_t)(0x12c2e7f8), (0x0u));
  /* 12c10761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10764 push eax */
  push32((uint32_t)(EAX));
  /* 12c10765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10768 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1076c push edx */
  push32((uint32_t)(EDX));
  /* 12c1076d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10770 push eax */
  push32((uint32_t)(EAX));
  /* 12c10771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12c1077a push edx */
  push32((uint32_t)(EDX));
  /* 12c1077b call 0x12c10ac0 */
  push32(0x12c10780u); f_12c10ac0();
  /* 12c10780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10783 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10788:;
  /* 12c10788 mov eax, dword ptr [0x12c2e7f8] */
  EAX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c1078d mov dword ptr [0x12c2e808], eax */
  w32((uint32_t)(0x12c2e808), (EAX));
  /* 12c10792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c10798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c10799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12c1079e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c107a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c107a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c107a6 push edx */
  push32((uint32_t)(EDX));
  /* 12c107a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c107aa push eax */
  push32((uint32_t)(EAX));
  /* 12c107ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12c107ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c107b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c107b1 call 0x12c10960 */
  push32(0x12c107b6u); f_12c10960();
  /* 12c107b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c107b9 jmp 0x12c10858 */
  goto L_12c10858;
L_12c107be:;
  /* 12c107be mov edx, dword ptr [0x12c2e7f8] */
  EDX = (r32((uint32_t)(0x12c2e7f8)));
  /* 12c107c4 mov dword ptr [0x12c2e808], edx */
  w32((uint32_t)(0x12c2e808), (EDX));
  /* 12c107ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c107cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c107d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c107d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12c107d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c107d8 mov ecx, eax */
  ECX = (EAX);
  /* 12c107da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c107dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c107e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c107e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c107e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c107e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12c107ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c107ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c107f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c107f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c107f6 push eax */
  push32((uint32_t)(EAX));
  /* 12c107f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c107fa push ecx */
  push32((uint32_t)(ECX));
  /* 12c107fb push 4 */
  push32((uint32_t)(0x4u));
  /* 12c107fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10800 push edx */
  push32((uint32_t)(EDX));
  /* 12c10801 call 0x12c10960 */
  push32(0x12c10806u); f_12c10960();
  /* 12c10806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10809 jmp 0x12c10858 */
  goto L_12c10858;
L_12c1080b:;
  /* 12c1080b call 0x12c11920 */
  push32(0x12c10810u); f_12c11920();
  /* 12c10810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10813 push eax */
  push32((uint32_t)(EAX));
  /* 12c10814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10817 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1081b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1081d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12c10824 mov ecx, dword ptr [eax*4 + 0x12c2de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2de1c)));
  /* 12c1082b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1082c call 0x12c10910 */
  push32(0x12c10831u); f_12c10910();
  /* 12c10831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10834 jmp 0x12c10858 */
  goto L_12c10858;
L_12c10836:;
  /* 12c10836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c1083b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12c1083e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c1084b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1084e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c10858:;
  /* 12c10858 pop esi */
  ESI = (pop32());
  /* 12c10859 mov esp, ebp */
  ESP = (EBP);
  /* 12c1085b pop ebp */
  EBP = (pop32());
  /* 12c1085c ret  */
  ESPCHK(0x12c102f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12c10910 (72 bytes, 30 insns) */
void f_12c10910(void) {
  FTRACE(0x12c10910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10910 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10911 mov ebp, esp */
  EBP = (ESP);
L_12c10913:;
  /* 12c10913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10919 je 0x12c10956 */
  if (C.zf) goto L_12c10956;
  /* 12c1091b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1091e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c10921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c10923 je 0x12c10956 */
  if (C.zf) goto L_12c10956;
  /* 12c10925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c1092a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1092d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c1092f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c10931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1093c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c1093e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c10947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1094a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c1094c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c1094f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c10954 jmp 0x12c10913 */
  goto L_12c10913;
L_12c10956:;
  /* 12c10956 pop ebp */
  EBP = (pop32());
  /* 12c10957 ret  */
  ESPCHK(0x12c10910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x12c10960 (173 bytes, 64 insns) */
void f_12c10960(void) {
  FTRACE(0x12c10960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10961 mov ebp, esp */
  EBP = (ESP);
  /* 12c10963 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c1096b cmp dword ptr [0x12c2e808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10972 je 0x12c1098a */
  if (C.zf) goto L_12c1098a;
  /* 12c10974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10977 push eax */
  push32((uint32_t)(EAX));
  /* 12c10978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1097b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1097c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1097f push edx */
  push32((uint32_t)(EDX));
  /* 12c10980 call 0x12c10a10 */
  push32(0x12c10985u); f_12c10a10();
  /* 12c10985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10988 jmp 0x12c10a09 */
  goto L_12c10a09;
L_12c1098a:;
  /* 12c1098a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1098d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10992 jae 0x12c10a00 */
  if (!C.cf) goto L_12c10a00;
  /* 12c10994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c1099a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c1099d jmp 0x12c109a8 */
  goto L_12c109a8;
L_12c1099f:;
  /* 12c1099f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c109a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c109a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12c109a8:;
  /* 12c109a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c109ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c109ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c109b0 je 0x12c109e4 */
  if (C.zf) goto L_12c109e4;
  /* 12c109b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c109b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c109b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12c109bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c109bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c109c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c109c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c109c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c109c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12c109cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c109ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c109cf mov ecx, 0xa */
  ECX = (0xau);
  /* 12c109d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c109d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c109d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c109dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c109df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c109e2 jmp 0x12c1099f */
  goto L_12c1099f;
L_12c109e4:;
  /* 12c109e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c109e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c109e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c109ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c109ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c109f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c109f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c109f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c109f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c109fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c109fe jmp 0x12c10a09 */
  goto L_12c10a09;
L_12c10a00:;
  /* 12c10a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c10a09:;
  /* 12c10a09 mov esp, ebp */
  ESP = (EBP);
  /* 12c10a0b pop ebp */
  EBP = (pop32());
  /* 12c10a0c ret  */
  ESPCHK(0x12c10960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12c10a10 (172 bytes, 65 insns) */
void f_12c10a10(void) {
  FTRACE(0x12c10a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10a11 mov ebp, esp */
  EBP = (ESP);
  /* 12c10a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c10a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10a24 jbe 0x12c10a6b */
  if ((C.cf||C.zf)) goto L_12c10a6b;
L_12c10a26:;
  /* 12c10a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c10a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 12c10a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c10a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c10a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c10a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c10a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c10a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 12c10a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c10a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c10a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10a61 jle 0x12c10a6b */
  if ((C.zf||C.sf!=C.of)) goto L_12c10a6b;
  /* 12c10a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10a69 ja 0x12c10a26 */
  if ((!C.cf&&!C.zf)) goto L_12c10a26;
L_12c10a6b:;
  /* 12c10a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c10a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c10a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c10a84:;
  /* 12c10a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12c10a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c10a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c10a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c10a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c10aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c10aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c10aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c10aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c10ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c10ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10ab6 jb 0x12c10a84 */
  if (C.cf) goto L_12c10a84;
  /* 12c10ab8 mov esp, ebp */
  ESP = (EBP);
  /* 12c10aba pop ebp */
  EBP = (pop32());
  /* 12c10abb ret  */
  ESPCHK(0x12c10a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x12c10ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12c10ac0(void) {
  FTRACE(0x12c10ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c10ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12c10ac6:;
  /* 12c10ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c10acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c10ace je 0x12c10f3c */
  if (C.zf) goto L_12c10f3c;
  /* 12c10ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10ada je 0x12c10f3c */
  if (C.zf) goto L_12c10f3c;
  /* 12c10ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c10ae4 mov dword ptr [0x12c2e808], 0 */
  w32((uint32_t)(0x12c2e808), (0x0u));
  /* 12c10aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c10af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c10afb jmp 0x12c10b06 */
  goto L_12c10b06;
L_12c10afd:;
  /* 12c10afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c10b06:;
  /* 12c10b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c10b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c10b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c10b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10b1d jne 0x12c10b21 */
  if (!C.zf) goto L_12c10b21;
  /* 12c10b1f jmp 0x12c10afd */
  goto L_12c10afd;
L_12c10b21:;
  /* 12c10b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c10b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c10b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c10b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c10b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10b40 ja 0x12c10e90 */
  if ((!C.cf&&!C.zf)) goto L_12c10e90;
  /* 12c10b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c10b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c10b4b mov al, byte ptr [ecx + 0x12c10f6c] */
  AL = (r8((uint32_t)(ECX + 0x12c10f6c)));
  /* 12c10b51 jmp dword ptr [eax*4 + 0x12c10f40] */
  switch (EAX) {
    case 0: goto L_12c10daf;
    case 1: goto L_12c10c93;
    case 2: goto L_12c10c1e;
    case 3: goto L_12c10b58;
    case 4: goto L_12c10b96;
    case 5: goto L_12c10bf7;
    case 6: goto L_12c10c45;
    case 7: goto L_12c10c6c;
    case 8: goto L_12c10cda;
    case 9: goto L_12c10bd4;
    case 10: goto L_12c10e90;
    default: x86_unimpl("switch@0x12c10b51 out of table"); return;
  }
L_12c10b58:;
  /* 12c10b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c10b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c10b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c10b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10b6b ja 0x12c10b91 */
  if ((!C.cf&&!C.zf)) goto L_12c10b91;
  /* 12c10b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c10b70 jmp dword ptr [ecx*4 + 0x12c10fbf] */
  switch (ECX) {
    case 0: goto L_12c10b77;
    case 1: goto L_12c10b81;
    case 2: goto L_12c10b87;
    case 3: goto L_12c10b8d;
    case 4: goto L_12c10bb5;
    case 5: goto L_12c10bbf;
    case 6: goto L_12c10bc5;
    case 7: goto L_12c10bcb;
    default: x86_unimpl("switch@0x12c10b70 out of table"); return;
  }
L_12c10b77:;
  /* 12c10b77 mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10b81:;
  /* 12c10b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12c10b85 jmp 0x12c10b91 */
  goto L_12c10b91;
L_12c10b87:;
  /* 12c10b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12c10b8b jmp 0x12c10b91 */
  goto L_12c10b91;
L_12c10b8d:;
  /* 12c10b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12c10b91:;
  /* 12c10b91 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10b96:;
  /* 12c10b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c10b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c10b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c10ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10ba9 ja 0x12c10bcf */
  if ((!C.cf&&!C.zf)) goto L_12c10bcf;
  /* 12c10bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c10bae jmp dword ptr [ecx*4 + 0x12c10fcf] */
  switch (ECX) {
    case 0: goto L_12c10bb5;
    case 1: goto L_12c10bbf;
    case 2: goto L_12c10bc5;
    case 3: goto L_12c10bcb;
    default: x86_unimpl("switch@0x12c10bae out of table"); return;
  }
L_12c10bb5:;
  /* 12c10bb5 mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10bbf:;
  /* 12c10bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12c10bc3 jmp 0x12c10bcf */
  goto L_12c10bcf;
L_12c10bc5:;
  /* 12c10bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12c10bc9 jmp 0x12c10bcf */
  goto L_12c10bcf;
L_12c10bcb:;
  /* 12c10bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12c10bcf:;
  /* 12c10bcf jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10bd4:;
  /* 12c10bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c10bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10bde je 0x12c10be8 */
  if (C.zf) goto L_12c10be8;
  /* 12c10be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10be4 je 0x12c10bee */
  if (C.zf) goto L_12c10bee;
  /* 12c10be6 jmp 0x12c10bf2 */
  goto L_12c10bf2;
L_12c10be8:;
  /* 12c10be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12c10bec jmp 0x12c10bf2 */
  goto L_12c10bf2;
L_12c10bee:;
  /* 12c10bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12c10bf2:;
  /* 12c10bf2 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10bf7:;
  /* 12c10bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c10bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c01 je 0x12c10c0b */
  if (C.zf) goto L_12c10c0b;
  /* 12c10c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c07 je 0x12c10c15 */
  if (C.zf) goto L_12c10c15;
  /* 12c10c09 jmp 0x12c10c19 */
  goto L_12c10c19;
L_12c10c0b:;
  /* 12c10c0b mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10c15:;
  /* 12c10c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12c10c19:;
  /* 12c10c19 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10c1e:;
  /* 12c10c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c10c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c28 je 0x12c10c32 */
  if (C.zf) goto L_12c10c32;
  /* 12c10c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c2e je 0x12c10c3c */
  if (C.zf) goto L_12c10c3c;
  /* 12c10c30 jmp 0x12c10c40 */
  goto L_12c10c40;
L_12c10c32:;
  /* 12c10c32 mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10c3c:;
  /* 12c10c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12c10c40:;
  /* 12c10c40 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10c45:;
  /* 12c10c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12c10c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c4f je 0x12c10c59 */
  if (C.zf) goto L_12c10c59;
  /* 12c10c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c55 je 0x12c10c63 */
  if (C.zf) goto L_12c10c63;
  /* 12c10c57 jmp 0x12c10c67 */
  goto L_12c10c67;
L_12c10c59:;
  /* 12c10c59 mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10c63:;
  /* 12c10c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12c10c67:;
  /* 12c10c67 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10c6c:;
  /* 12c10c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c10c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c76 je 0x12c10c80 */
  if (C.zf) goto L_12c10c80;
  /* 12c10c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10c7c je 0x12c10c8a */
  if (C.zf) goto L_12c10c8a;
  /* 12c10c7e jmp 0x12c10c8e */
  goto L_12c10c8e;
L_12c10c80:;
  /* 12c10c80 mov dword ptr [0x12c2e808], 1 */
  w32((uint32_t)(0x12c2e808), (0x1u));
L_12c10c8a:;
  /* 12c10c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12c10c8e:;
  /* 12c10c8e jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10c93:;
  /* 12c10c93 push 0x12c2a7fc */
  push32((uint32_t)(0x12c2a7fcu));
  /* 12c10c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10c9b push ecx */
  push32((uint32_t)(ECX));
  /* 12c10c9c call 0x12c114f0 */
  push32(0x12c10ca1u); f_12c114f0();
  /* 12c10ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c10ca6 jne 0x12c10cb3 */
  if (!C.zf) goto L_12c10cb3;
  /* 12c10ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c10cb1 jmp 0x12c10cd1 */
  goto L_12c10cd1;
L_12c10cb3:;
  /* 12c10cb3 push 0x12c2a7f8 */
  push32((uint32_t)(0x12c2a7f8u));
  /* 12c10cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10cbb push eax */
  push32((uint32_t)(EAX));
  /* 12c10cbc call 0x12c114f0 */
  push32(0x12c10cc1u); f_12c114f0();
  /* 12c10cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c10cc6 jne 0x12c10cd1 */
  if (!C.zf) goto L_12c10cd1;
  /* 12c10cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c10cd1:;
  /* 12c10cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12c10cd5 jmp 0x12c10e90 */
  goto L_12c10e90;
L_12c10cda:;
  /* 12c10cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10ce1 jg 0x12c10cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c10cf1;
  /* 12c10ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12c10cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c10cef jmp 0x12c10cfd */
  goto L_12c10cfd;
L_12c10cf1:;
  /* 12c10cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12c10cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c10cfd:;
  /* 12c10cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10d01 jle 0x12c10da4 */
  if ((C.zf||C.sf!=C.of)) goto L_12c10da4;
  /* 12c10d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10d0d jbe 0x12c10da4 */
  if ((C.cf||C.zf)) goto L_12c10da4;
  /* 12c10d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c10d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10d1a mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c10d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c10d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c10d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c10d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c10d2e je 0x12c10d67 */
  if (C.zf) goto L_12c10d67;
  /* 12c10d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10d36 jbe 0x12c10d67 */
  if ((C.cf||C.zf)) goto L_12c10d67;
  /* 12c10d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c10d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c10d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c10d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c10d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c10d67:;
  /* 12c10d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c10d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c10d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c10d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c10d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c10d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c10d9f jmp 0x12c10cfd */
  goto L_12c10cfd;
L_12c10da4:;
  /* 12c10da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c10daa jmp 0x12c10ac6 */
  goto L_12c10ac6;
L_12c10daf:;
  /* 12c10daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c10db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c10db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c10db7 je 0x12c10e82 */
  if (C.zf) goto L_12c10e82;
  /* 12c10dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c10dc6:;
  /* 12c10dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c10dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c10dce je 0x12c10e80 */
  if (C.zf) goto L_12c10e80;
  /* 12c10dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10dda je 0x12c10e80 */
  if (C.zf) goto L_12c10e80;
  /* 12c10de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c10de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10de9 jne 0x12c10df9 */
  if (!C.zf) goto L_12c10df9;
  /* 12c10deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c10df4 jmp 0x12c10e80 */
  goto L_12c10e80;
L_12c10df9:;
  /* 12c10df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c10dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c10e00 mov edx, dword ptr [0x12c2cc98] */
  EDX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c10e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c10e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c10e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c10e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c10e13 je 0x12c10e4c */
  if (C.zf) goto L_12c10e4c;
  /* 12c10e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10e1b jbe 0x12c10e4c */
  if ((C.cf||C.zf)) goto L_12c10e4c;
  /* 12c10e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c10e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c10e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c10e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c10e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c10e4c:;
  /* 12c10e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c10e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c10e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c10e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c10e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c10e7b jmp 0x12c10dc6 */
  goto L_12c10dc6;
L_12c10e80:;
  /* 12c10e80 jmp 0x12c10e8b */
  goto L_12c10e8b;
L_12c10e82:;
  /* 12c10e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c10e8b:;
  /* 12c10e8b jmp 0x12c10ac6 */
  goto L_12c10ac6;
L_12c10e90:;
  /* 12c10e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c10e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c10e96 je 0x12c10ebc */
  if (C.zf) goto L_12c10ebc;
  /* 12c10e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c10e9b push edx */
  push32((uint32_t)(EDX));
  /* 12c10e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10e9f push eax */
  push32((uint32_t)(EAX));
  /* 12c10ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c10ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c10ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12c10ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c10eab push eax */
  push32((uint32_t)(EAX));
  /* 12c10eac call 0x12c102f0 */
  push32(0x12c10eb1u); f_12c102f0();
  /* 12c10eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c10eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c10eba jmp 0x12c10f37 */
  goto L_12c10f37;
L_12c10ebc:;
  /* 12c10ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c10ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10ec3 mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c10ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c10ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c10ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c10ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c10ed7 je 0x12c10f08 */
  if (C.zf) goto L_12c10f08;
  /* 12c10ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c10ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c10ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c10ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c10efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c10f08:;
  /* 12c10f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c10f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c10f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c10f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c10f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c10f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c10f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c10f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c10f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c10f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c10f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c10f37:;
  /* 12c10f37 jmp 0x12c10ac6 */
  goto L_12c10ac6;
L_12c10f3c:;
  /* 12c10f3c mov esp, ebp */
  ESP = (EBP);
  /* 12c10f3e pop ebp */
  EBP = (pop32());
  /* 12c10f3f ret  */
  ESPCHK(0x12c10ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x12c10fe0 (650 bytes, 178 insns) */
void f_12c10fe0(void) {
  FTRACE(0x12c10fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c10fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c10fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12c10fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c10fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c10fed jne 0x12c11149 */
  if (!C.zf) goto L_12c11149;
  /* 12c10ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c10ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12c10ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12c11002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c1100c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12c11016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c1101e push edx */
  push32((uint32_t)(EDX));
  /* 12c1101f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11022 push eax */
  push32((uint32_t)(EAX));
  /* 12c11023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11026 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1102a push edx */
  push32((uint32_t)(EDX));
  /* 12c1102b call 0x12c12400 */
  push32(0x12c11030u); f_12c12400();
  /* 12c11030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c11036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1103a jne 0x12c110cf */
  if (!C.zf) goto L_12c110cf;
  /* 12c11040 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c11046u);
  /* 12c11046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11049 je 0x12c11050 */
  if (C.zf) goto L_12c11050;
  /* 12c1104b jmp 0x12c1112d */
  goto L_12c1112d;
L_12c11050:;
  /* 12c11050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11052 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11054 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11059 push eax */
  push32((uint32_t)(EAX));
  /* 12c1105a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1105d push ecx */
  push32((uint32_t)(ECX));
  /* 12c1105e call 0x12c12400 */
  push32(0x12c11063u); f_12c12400();
  /* 12c11063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12c1106c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11073 jne 0x12c1107a */
  if (!C.zf) goto L_12c1107a;
  /* 12c11075 jmp 0x12c1112d */
  goto L_12c1112d;
L_12c1107a:;
  /* 12c1107a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12c1107c push 0x12c2a804 */
  push32((uint32_t)(0x12c2a804u));
  /* 12c11081 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c11089 push edx */
  push32((uint32_t)(EDX));
  /* 12c1108a call 0x12c02e20 */
  push32(0x12c1108fu); f_12c02e20();
  /* 12c1108f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c11095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11099 jne 0x12c110a0 */
  if (!C.zf) goto L_12c110a0;
  /* 12c1109b jmp 0x12c1112d */
  goto L_12c1112d;
L_12c110a0:;
  /* 12c110a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c110a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c110a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12c110af push eax */
  push32((uint32_t)(EAX));
  /* 12c110b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c110b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c110b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c110b7 push edx */
  push32((uint32_t)(EDX));
  /* 12c110b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c110bb push eax */
  push32((uint32_t)(EAX));
  /* 12c110bc call 0x12c12400 */
  push32(0x12c110c1u); f_12c12400();
  /* 12c110c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c110c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c110c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c110cb jne 0x12c110cf */
  if (!C.zf) goto L_12c110cf;
  /* 12c110cd jmp 0x12c1112d */
  goto L_12c1112d;
L_12c110cf:;
  /* 12c110cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12c110d1 push 0x12c2a804 */
  push32((uint32_t)(0x12c2a804u));
  /* 12c110d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c110d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c110db push ecx */
  push32((uint32_t)(ECX));
  /* 12c110dc call 0x12c02e20 */
  push32(0x12c110e1u); f_12c02e20();
  /* 12c110e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c110e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c110ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c110ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c110f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c110f5 jne 0x12c110f9 */
  if (!C.zf) goto L_12c110f9;
  /* 12c110f7 jmp 0x12c1112d */
  goto L_12c1112d;
L_12c110f9:;
  /* 12c110f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c110fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c110fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11100 push edx */
  push32((uint32_t)(EDX));
  /* 12c11101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12c11107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c11109 push ecx */
  push32((uint32_t)(ECX));
  /* 12c1110a call 0x12c06640 */
  push32(0x12c1110fu); f_12c06640();
  /* 12c1110f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11116 je 0x12c11126 */
  if (C.zf) goto L_12c11126;
  /* 12c11118 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c1111a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1111d push edx */
  push32((uint32_t)(EDX));
  /* 12c1111e call 0x12c038b0 */
  push32(0x12c11123u); f_12c038b0();
  /* 12c11123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c11126:;
  /* 12c11126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11128 jmp 0x12c11266 */
  goto L_12c11266;
L_12c1112d:;
  /* 12c1112d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11131 je 0x12c11141 */
  if (C.zf) goto L_12c11141;
  /* 12c11133 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11138 push eax */
  push32((uint32_t)(EAX));
  /* 12c11139 call 0x12c038b0 */
  push32(0x12c1113eu); f_12c038b0();
  /* 12c1113e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c11141:;
  /* 12c11141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c11144 jmp 0x12c11266 */
  goto L_12c11266;
L_12c11149:;
  /* 12c11149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1114d jne 0x12c11263 */
  if (!C.zf) goto L_12c11263;
  /* 12c11153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12c1115d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c11160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12c11166 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c1116e push edx */
  push32((uint32_t)(EDX));
  /* 12c1116f push 0x12c2e720 */
  push32((uint32_t)(0x12c2e720u));
  /* 12c11174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11177 push eax */
  push32((uint32_t)(EAX));
  /* 12c11178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1117b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1117c call 0x12c12260 */
  push32(0x12c11181u); f_12c12260();
  /* 12c11181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c11186 jne 0x12c11190 */
  if (!C.zf) goto L_12c11190;
  /* 12c11188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c1118b jmp 0x12c11266 */
  goto L_12c11266;
L_12c11190:;
  /* 12c11190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c11196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c11199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12c111a3 jmp 0x12c111b4 */
  goto L_12c111b4;
L_12c111a5:;
  /* 12c111a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c111ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c111ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12c111b4:;
  /* 12c111b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c111bb jge 0x12c1125f */
  if ((C.sf==C.of)) goto L_12c1125f;
  /* 12c111c1 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c111c8 jle 0x12c111fb */
  if ((C.zf||C.sf!=C.of)) goto L_12c111fb;
  /* 12c111ca push 4 */
  push32((uint32_t)(0x4u));
  /* 12c111cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c111d2 mov dl, byte ptr [ecx*2 + 0x12c2e720] */
  DL = (r8((uint32_t)(ECX*2 + 0x12c2e720)));
  /* 12c111d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12c111df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c111e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c111ea push eax */
  push32((uint32_t)(EAX));
  /* 12c111eb call 0x12c08e30 */
  push32(0x12c111f0u); f_12c08e30();
  /* 12c111f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c111f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12c111f9 jmp 0x12c1122e */
  goto L_12c1122e;
L_12c111fb:;
  /* 12c111fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c11201 mov dl, byte ptr [ecx*2 + 0x12c2e720] */
  DL = (r8((uint32_t)(ECX*2 + 0x12c2e720)));
  /* 12c11208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12c1120e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c11214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c11219 mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c1121f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c11225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c11228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12c1122e:;
  /* 12c1122e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11235 je 0x12c11258 */
  if (C.zf) goto L_12c11258;
  /* 12c11237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c1123d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c11240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12c1124a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c1124e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c11254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c11256 jmp 0x12c1125a */
  goto L_12c1125a;
L_12c11258:;
  /* 12c11258 jmp 0x12c1125f */
  goto L_12c1125f;
L_12c1125a:;
  /* 12c1125a jmp 0x12c111a5 */
  goto L_12c111a5;
L_12c1125f:;
  /* 12c1125f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11261 jmp 0x12c11266 */
  goto L_12c11266;
L_12c11263:;
  /* 12c11263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c11266:;
  /* 12c11266 mov esp, ebp */
  ESP = (EBP);
  /* 12c11268 pop ebp */
  EBP = (pop32());
  /* 12c11269 ret  */
  ESPCHK(0x12c10fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x12c11270 (10 bytes, 5 insns) */
void f_12c11270(void) {
  FTRACE(0x12c11270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11270 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11271 mov ebp, esp */
  EBP = (ESP);
  /* 12c11273 mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c11278 pop ebp */
  EBP = (pop32());
  /* 12c11279 ret  */
  ESPCHK(0x12c11270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x12c11280 (575 bytes, 196 insns) */
void f_12c11280(void) {
  FTRACE(0x12c11280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11280 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11281 mov ebp, esp */
  EBP = (ESP);
  /* 12c11283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c11285 push 0x12c2a810 */
  push32((uint32_t)(0x12c2a810u));
  /* 12c1128a push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c1128f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c11295 push eax */
  push32((uint32_t)(EAX));
  /* 12c11296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c1129d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c112a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c112a1 push esi */
  push32((uint32_t)(ESI));
  /* 12c112a2 push edi */
  push32((uint32_t)(EDI));
  /* 12c112a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c112a6 cmp dword ptr [0x12c2e72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c112ad jne 0x12c112fe */
  if (!C.zf) goto L_12c112fe;
  /* 12c112af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c112b2 push eax */
  push32((uint32_t)(EAX));
  /* 12c112b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c112b5 push 0x12c29f44 */
  push32((uint32_t)(0x12c29f44u));
  /* 12c112ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12c112bc call dword ptr [0x12c30350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30350))), 0x12c112c2u);
  /* 12c112c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c112c4 je 0x12c112d2 */
  if (C.zf) goto L_12c112d2;
  /* 12c112c6 mov dword ptr [0x12c2e72c], 1 */
  w32((uint32_t)(0x12c2e72c), (0x1u));
  /* 12c112d0 jmp 0x12c112fe */
  goto L_12c112fe;
L_12c112d2:;
  /* 12c112d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c112d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c112d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c112d8 push 0x12c29f40 */
  push32((uint32_t)(0x12c29f40u));
  /* 12c112dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c112df push 0 */
  push32((uint32_t)(0x0u));
  /* 12c112e1 call dword ptr [0x12c3034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3034c))), 0x12c112e7u);
  /* 12c112e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c112e9 je 0x12c112f7 */
  if (C.zf) goto L_12c112f7;
  /* 12c112eb mov dword ptr [0x12c2e72c], 2 */
  w32((uint32_t)(0x12c2e72c), (0x2u));
  /* 12c112f5 jmp 0x12c112fe */
  goto L_12c112fe;
L_12c112f7:;
  /* 12c112f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c112f9 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c112fe:;
  /* 12c112fe cmp dword ptr [0x12c2e72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11305 jne 0x12c11322 */
  if (!C.zf) goto L_12c11322;
  /* 12c11307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1130a push edx */
  push32((uint32_t)(EDX));
  /* 12c1130b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1130e push eax */
  push32((uint32_t)(EAX));
  /* 12c1130f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c11312 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11316 push edx */
  push32((uint32_t)(EDX));
  /* 12c11317 call dword ptr [0x12c30350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30350))), 0x12c1131du);
  /* 12c1131d jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c11322:;
  /* 12c11322 cmp dword ptr [0x12c2e72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11329 jne 0x12c114d7 */
  if (!C.zf) goto L_12c114d7;
  /* 12c1132f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11333 jne 0x12c1133d */
  if (!C.zf) goto L_12c1133d;
  /* 12c11335 mov eax, dword ptr [0x12c2e6a0] */
  EAX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c1133a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12c1133d:;
  /* 12c1133d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1133f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11348 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1134c push edx */
  push32((uint32_t)(EDX));
  /* 12c1134d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c11352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c11355 push eax */
  push32((uint32_t)(EAX));
  /* 12c11356 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c1135cu);
  /* 12c1135c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c1135f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11363 jne 0x12c1136c */
  if (!C.zf) goto L_12c1136c;
  /* 12c11365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11367 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c1136c:;
  /* 12c1136c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c11373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c11376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c1137b call 0x12c05fc0 */
  push32(0x12c11380u); f_12c05fc0();
  /* 12c11380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12c11383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c11386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c11389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c1138c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c1138f push edx */
  push32((uint32_t)(EDX));
  /* 12c11390 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c11395 push eax */
  push32((uint32_t)(EAX));
  /* 12c11396 call 0x12c06b90 */
  push32(0x12c1139bu); f_12c06b90();
  /* 12c1139b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1139e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c113a5 jmp 0x12c113be */
  goto L_12c113be;
  /* 12c113a7 mov eax, 1 */
  EAX = (0x1u);
  /* 12c113ac ret  */
  ESPCHK(0x12c11280u, _esp0);
  ESP += 4; return;
  /* 12c113ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c113b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12c113b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c113be:;
  /* 12c113be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c113c2 jne 0x12c113cb */
  if (!C.zf) goto L_12c113cb;
  /* 12c113c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c113c6 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c113cb:;
  /* 12c113cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c113cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c113cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c113d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c113d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c113d6 push edx */
  push32((uint32_t)(EDX));
  /* 12c113d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c113da push eax */
  push32((uint32_t)(EAX));
  /* 12c113db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c113de push ecx */
  push32((uint32_t)(ECX));
  /* 12c113df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c113e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c113e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c113e8 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c113eeu);
  /* 12c113ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c113f0 jne 0x12c113f9 */
  if (!C.zf) goto L_12c113f9;
  /* 12c113f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c113f4 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c113f9:;
  /* 12c113f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c11400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c11403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12c11407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1140a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c1140c call 0x12c05fc0 */
  push32(0x12c11411u); f_12c05fc0();
  /* 12c11411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12c11414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c11417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c1141a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c1141d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c11424 jmp 0x12c1143d */
  goto L_12c1143d;
  /* 12c11426 mov eax, 1 */
  EAX = (0x1u);
  /* 12c1142b ret  */
  ESPCHK(0x12c11280u, _esp0);
  ESP += 4; return;
  /* 12c1142c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c1142f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c11436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c1143d:;
  /* 12c1143d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11441 jne 0x12c1144a */
  if (!C.zf) goto L_12c1144a;
  /* 12c11443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11445 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c1144a:;
  /* 12c1144a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1144e jne 0x12c11459 */
  if (!C.zf) goto L_12c11459;
  /* 12c11450 mov edx, dword ptr [0x12c2e690] */
  EDX = (r32((uint32_t)(0x12c2e690)));
  /* 12c11456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12c11459:;
  /* 12c11459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1145c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c1145f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12c11465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c1146b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12c11472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c11475 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c11479 push edx */
  push32((uint32_t)(EDX));
  /* 12c1147a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c1147d push eax */
  push32((uint32_t)(EAX));
  /* 12c1147e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11481 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c11485 push edx */
  push32((uint32_t)(EDX));
  /* 12c11486 call dword ptr [0x12c3034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3034c))), 0x12c1148cu);
  /* 12c1148c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c1148f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c11492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c11495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12c1149c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c114a2 je 0x12c114b8 */
  if (C.zf) goto L_12c114b8;
  /* 12c114a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c114a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c114aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c114ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c114b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c114b6 je 0x12c114bc */
  if (C.zf) goto L_12c114bc;
L_12c114b8:;
  /* 12c114b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c114ba jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c114bc:;
  /* 12c114bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c114bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c114c1 push eax */
  push32((uint32_t)(EAX));
  /* 12c114c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c114c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c114c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c114c9 push edx */
  push32((uint32_t)(EDX));
  /* 12c114ca call 0x12c0ad10 */
  push32(0x12c114cfu); f_12c0ad10();
  /* 12c114cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c114d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c114d5 jmp 0x12c114d9 */
  goto L_12c114d9;
L_12c114d7:;
  /* 12c114d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c114d9:;
  /* 12c114d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12c114dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c114df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c114e6 pop edi */
  EDI = (pop32());
  /* 12c114e7 pop esi */
  ESI = (pop32());
  /* 12c114e8 pop ebx */
  EBX = (pop32());
  /* 12c114e9 mov esp, ebp */
  ESP = (EBP);
  /* 12c114eb pop ebp */
  EBP = (pop32());
  /* 12c114ec ret  */
  ESPCHK(0x12c11280u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x12c114f0 (208 bytes, 85 insns) */
void f_12c114f0(void) {
  FTRACE(0x12c114f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c114f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c114f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c114f3 push edi */
  push32((uint32_t)(EDI));
  /* 12c114f4 push esi */
  push32((uint32_t)(ESI));
  /* 12c114f5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c114f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c114f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c114fc lea eax, [0x12c2e688] */
  EAX = ((uint32_t)(0x12c2e688));
  /* 12c11502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11506 jne 0x12c11543 */
  if (!C.zf) goto L_12c11543;
  /* 12c11508 mov al, 0xff */
  AL = (0xffu);
  /* 12c1150a mov edi, edi */
  EDI = (EDI);
L_12c1150c:;
  /* 12c1150c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c1150e je 0x12c1153e */
  if (C.zf) goto L_12c1153e;
  /* 12c11510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c11512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c11513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12c11515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c11516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11518 je 0x12c1150c */
  if (C.zf) goto L_12c1150c;
  /* 12c1151a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c1151c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c1151e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c11520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c11523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c11525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c11527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12c11529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c1152b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c1152d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c1152f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c11532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c11534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c11536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11538 je 0x12c1150c */
  if (C.zf) goto L_12c1150c;
  /* 12c1153a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c1153c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12c1153e:;
  /* 12c1153e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12c11541 jmp 0x12c115bb */
  goto L_12c115bb;
L_12c11543:;
  /* 12c11543 lock inc dword ptr [0x12c2e81c] */
  x86_unimpl("lock inc @ 0x12c11543");
  /* 12c1154a cmp dword ptr [0x12c2e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11551 jg 0x12c11557 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c11557;
  /* 12c11553 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11555 jmp 0x12c1156c */
  goto L_12c1156c;
L_12c11557:;
  /* 12c11557 lock dec dword ptr [0x12c2e81c] */
  x86_unimpl("lock dec @ 0x12c11557");
  /* 12c1155e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c11560 call 0x12c06820 */
  push32(0x12c11565u); f_12c06820();
  /* 12c11565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12c1156c:;
  /* 12c1156c mov eax, 0xff */
  EAX = (0xffu);
  /* 12c11571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c11573 nop  */
  /* nop */
L_12c11574:;
  /* 12c11574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c11576 je 0x12c1159f */
  if (C.zf) goto L_12c1159f;
  /* 12c11578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c1157a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c1157b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c1157d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c1157e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11580 je 0x12c11574 */
  if (C.zf) goto L_12c11574;
  /* 12c11582 push eax */
  push32((uint32_t)(EAX));
  /* 12c11583 push ebx */
  push32((uint32_t)(EBX));
  /* 12c11584 call 0x12c12660 */
  push32(0x12c11589u); f_12c12660();
  /* 12c11589 mov ebx, eax */
  EBX = (EAX);
  /* 12c1158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1158e call 0x12c12660 */
  push32(0x12c11593u); f_12c12660();
  /* 12c11593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11598 je 0x12c11574 */
  if (C.zf) goto L_12c11574;
  /* 12c1159a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c1159c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c1159f:;
  /* 12c1159f mov ebx, eax */
  EBX = (EAX);
  /* 12c115a1 pop eax */
  EAX = (pop32());
  /* 12c115a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c115a4 jne 0x12c115af */
  if (!C.zf) goto L_12c115af;
  /* 12c115a6 lock dec dword ptr [0x12c2e81c] */
  x86_unimpl("lock dec @ 0x12c115a6");
  /* 12c115ad jmp 0x12c115b9 */
  goto L_12c115b9;
L_12c115af:;
  /* 12c115af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c115b1 call 0x12c068c0 */
  push32(0x12c115b6u); f_12c068c0();
  /* 12c115b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c115b9:;
  /* 12c115b9 mov eax, ebx */
  EAX = (EBX);
L_12c115bb:;
  /* 12c115bb pop ebx */
  EBX = (pop32());
  /* 12c115bc pop esi */
  ESI = (pop32());
  /* 12c115bd pop edi */
  EDI = (pop32());
  /* 12c115be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c115bf ret  */
  ESPCHK(0x12c114f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115c0 @ 0x12c115c0 (257 bytes, 103 insns) */
void f_12c115c0(void) {
  FTRACE(0x12c115c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c115c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c115c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c115c3 push edi */
  push32((uint32_t)(EDI));
  /* 12c115c4 push esi */
  push32((uint32_t)(ESI));
  /* 12c115c5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c115c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c115c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c115cb je 0x12c116ba */
  if (C.zf) goto L_12c116ba;
  /* 12c115d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c115d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c115d7 lea eax, [0x12c2e688] */
  EAX = ((uint32_t)(0x12c2e688));
  /* 12c115dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c115e1 jne 0x12c11631 */
  if (!C.zf) goto L_12c11631;
  /* 12c115e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12c115e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12c115e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12c115e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c115ec:;
  /* 12c115ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12c115ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c115f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c115f2 je 0x12c11615 */
  if (C.zf) goto L_12c11615;
  /* 12c115f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c115f6 je 0x12c11615 */
  if (C.zf) goto L_12c11615;
  /* 12c115f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c115f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c115fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c115fc jb 0x12c11604 */
  if (C.cf) goto L_12c11604;
  /* 12c115fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11600 ja 0x12c11604 */
  if ((!C.cf&&!C.zf)) goto L_12c11604;
  /* 12c11602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12c11604:;
  /* 12c11604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11606 jb 0x12c1160e */
  if (C.cf) goto L_12c1160e;
  /* 12c11608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c1160a ja 0x12c1160e */
  if ((!C.cf&&!C.zf)) goto L_12c1160e;
  /* 12c1160c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12c1160e:;
  /* 12c1160e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11610 jne 0x12c1161f */
  if (!C.zf) goto L_12c1161f;
  /* 12c11612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c11613 jne 0x12c115ec */
  if (!C.zf) goto L_12c115ec;
L_12c11615:;
  /* 12c11615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c11619 je 0x12c116ba */
  if (C.zf) goto L_12c116ba;
L_12c1161f:;
  /* 12c1161f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c11624 jb 0x12c116ba */
  if (C.cf) goto L_12c116ba;
  /* 12c1162a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c1162c jmp 0x12c116ba */
  goto L_12c116ba;
L_12c11631:;
  /* 12c11631 lock inc dword ptr [0x12c2e81c] */
  x86_unimpl("lock inc @ 0x12c11631");
  /* 12c11638 cmp dword ptr [0x12c2e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1163f jg 0x12c11645 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c11645;
  /* 12c11641 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11643 jmp 0x12c1165e */
  goto L_12c1165e;
L_12c11645:;
  /* 12c11645 lock dec dword ptr [0x12c2e81c] */
  x86_unimpl("lock dec @ 0x12c11645");
  /* 12c1164c mov ebx, ecx */
  EBX = (ECX);
  /* 12c1164e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c11650 call 0x12c06820 */
  push32(0x12c11655u); f_12c06820();
  /* 12c11655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12c1165c mov ecx, ebx */
  ECX = (EBX);
L_12c1165e:;
  /* 12c1165e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c11662 mov edi, edi */
  EDI = (EDI);
L_12c11664:;
  /* 12c11664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c11666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c1166a je 0x12c1168f */
  if (C.zf) goto L_12c1168f;
  /* 12c1166c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c1166e je 0x12c1168f */
  if (C.zf) goto L_12c1168f;
  /* 12c11670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c11671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c11672 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11673 push eax */
  push32((uint32_t)(EAX));
  /* 12c11674 push ebx */
  push32((uint32_t)(EBX));
  /* 12c11675 call 0x12c12660 */
  push32(0x12c1167au); f_12c12660();
  /* 12c1167a mov ebx, eax */
  EBX = (EAX);
  /* 12c1167c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1167f call 0x12c12660 */
  push32(0x12c11684u); f_12c12660();
  /* 12c11684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11687 pop ecx */
  ECX = (pop32());
  /* 12c11688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1168a jne 0x12c11695 */
  if (!C.zf) goto L_12c11695;
  /* 12c1168c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c1168d jne 0x12c11664 */
  if (!C.zf) goto L_12c11664;
L_12c1168f:;
  /* 12c1168f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11693 je 0x12c1169e */
  if (C.zf) goto L_12c1169e;
L_12c11695:;
  /* 12c11695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c1169a jb 0x12c1169e */
  if (C.cf) goto L_12c1169e;
  /* 12c1169c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12c1169e:;
  /* 12c1169e pop eax */
  EAX = (pop32());
  /* 12c1169f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c116a1 jne 0x12c116ac */
  if (!C.zf) goto L_12c116ac;
  /* 12c116a3 lock dec dword ptr [0x12c2e81c] */
  x86_unimpl("lock dec @ 0x12c116a3");
  /* 12c116aa jmp 0x12c116ba */
  goto L_12c116ba;
L_12c116ac:;
  /* 12c116ac mov ebx, ecx */
  EBX = (ECX);
  /* 12c116ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c116b0 call 0x12c068c0 */
  push32(0x12c116b5u); f_12c068c0();
  /* 12c116b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c116b8 mov ecx, ebx */
  ECX = (EBX);
L_12c116ba:;
  /* 12c116ba mov eax, ecx */
  EAX = (ECX);
  /* 12c116bc pop ebx */
  EBX = (pop32());
  /* 12c116bd pop esi */
  ESI = (pop32());
  /* 12c116be pop edi */
  EDI = (pop32());
  /* 12c116bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c116c0 ret  */
  ESPCHK(0x12c115c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x12c116d0 (255 bytes, 88 insns) */
void f_12c116d0(void) {
  FTRACE(0x12c116d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c116d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c116d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c116d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12c116d6:;
  /* 12c116d6 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c116dd jle 0x12c116f6 */
  if ((C.zf||C.sf!=C.of)) goto L_12c116f6;
  /* 12c116df push 8 */
  push32((uint32_t)(0x8u));
  /* 12c116e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c116e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c116e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c116e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c116e9 call 0x12c08e30 */
  push32(0x12c116eeu); f_12c08e30();
  /* 12c116ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c116f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c116f4 jmp 0x12c1170f */
  goto L_12c1170f;
L_12c116f6:;
  /* 12c116f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c116f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c116fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c116fd mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c11703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11705 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c11709 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c1170c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c1170f:;
  /* 12c1170f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11713 je 0x12c11720 */
  if (C.zf) goto L_12c11720;
  /* 12c11715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1171b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c1171e jmp 0x12c116d6 */
  goto L_12c116d6;
L_12c11720:;
  /* 12c11720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11725 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c11727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c1172a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1172d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11730 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c11733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c11736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11739 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1173d je 0x12c11745 */
  if (C.zf) goto L_12c11745;
  /* 12c1173f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11743 jne 0x12c11758 */
  if (!C.zf) goto L_12c11758;
L_12c11745:;
  /* 12c11745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1174a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c1174c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c1174f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11755 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c11758:;
  /* 12c11758 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c1175f:;
  /* 12c1175f cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11766 jle 0x12c1177b */
  if ((C.zf||C.sf!=C.of)) goto L_12c1177b;
  /* 12c11768 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c1176a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1176d push edx */
  push32((uint32_t)(EDX));
  /* 12c1176e call 0x12c08e30 */
  push32(0x12c11773u); f_12c08e30();
  /* 12c11773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11776 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c11779 jmp 0x12c11790 */
  goto L_12c11790;
L_12c1177b:;
  /* 12c1177b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1177e mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c11784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c1178a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c1178d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c11790:;
  /* 12c11790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11794 je 0x12c117bb */
  if (C.zf) goto L_12c117bb;
  /* 12c11796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c11799 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c1179c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1179f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12c117a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c117a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c117a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c117ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c117ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c117b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c117b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c117b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c117b9 jmp 0x12c1175f */
  goto L_12c1175f;
L_12c117bb:;
  /* 12c117bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c117bf jne 0x12c117c8 */
  if (!C.zf) goto L_12c117c8;
  /* 12c117c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c117c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c117c6 jmp 0x12c117cb */
  goto L_12c117cb;
L_12c117c8:;
  /* 12c117c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c117cb:;
  /* 12c117cb mov esp, ebp */
  ESP = (EBP);
  /* 12c117cd pop ebp */
  EBP = (pop32());
  /* 12c117ce ret  */
  ESPCHK(0x12c116d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x12c117d0 (17 bytes, 8 insns) */
void f_12c117d0(void) {
  FTRACE(0x12c117d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c117d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c117d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c117d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c117d6 push eax */
  push32((uint32_t)(EAX));
  /* 12c117d7 call 0x12c116d0 */
  push32(0x12c117dcu); f_12c116d0();
  /* 12c117dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c117df pop ebp */
  EBP = (pop32());
  /* 12c117e0 ret  */
  ESPCHK(0x12c117d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x12c117f0 (297 bytes, 106 insns) */
void f_12c117f0(void) {
  FTRACE(0x12c117f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c117f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c117f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c117f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c117f6 push esi */
  push32((uint32_t)(ESI));
L_12c117f7:;
  /* 12c117f7 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c117fe jle 0x12c11817 */
  if ((C.zf||C.sf!=C.of)) goto L_12c11817;
  /* 12c11800 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c11802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11807 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c11809 push ecx */
  push32((uint32_t)(ECX));
  /* 12c1180a call 0x12c08e30 */
  push32(0x12c1180fu); f_12c08e30();
  /* 12c1180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11812 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c11815 jmp 0x12c11830 */
  goto L_12c11830;
L_12c11817:;
  /* 12c11817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1181c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c1181e mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c11824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c1182a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c1182d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c11830:;
  /* 12c11830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11834 je 0x12c11841 */
  if (C.zf) goto L_12c11841;
  /* 12c11836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1183c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c1183f jmp 0x12c117f7 */
  goto L_12c117f7;
L_12c11841:;
  /* 12c11841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c11848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c1184b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1184e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11851 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c11854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c11857 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c1185a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1185e je 0x12c11866 */
  if (C.zf) goto L_12c11866;
  /* 12c11860 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11864 jne 0x12c11879 */
  if (!C.zf) goto L_12c11879;
L_12c11866:;
  /* 12c11866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1186b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c1186d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c11870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11876 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c11879:;
  /* 12c11879 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c11880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c11887:;
  /* 12c11887 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1188e jle 0x12c118a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c118a3;
  /* 12c11890 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c11892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c11895 push edx */
  push32((uint32_t)(EDX));
  /* 12c11896 call 0x12c08e30 */
  push32(0x12c1189bu); f_12c08e30();
  /* 12c1189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1189e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c118a1 jmp 0x12c118b8 */
  goto L_12c118b8;
L_12c118a3:;
  /* 12c118a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c118a6 mov ecx, dword ptr [0x12c2cc98] */
  ECX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c118ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c118ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c118b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c118b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12c118b8:;
  /* 12c118b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c118bc je 0x12c118f9 */
  if (C.zf) goto L_12c118f9;
  /* 12c118be push 0 */
  push32((uint32_t)(0x0u));
  /* 12c118c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c118c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c118c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c118c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c118c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c118ca call 0x12c12790 */
  push32(0x12c118cfu); f_12c12790();
  /* 12c118cf mov ecx, eax */
  ECX = (EAX);
  /* 12c118d1 mov esi, edx */
  ESI = (EDX);
  /* 12c118d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c118d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c118d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c118da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c118dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c118de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c118e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12c118e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c118e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c118e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c118eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c118ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c118f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c118f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c118f7 jmp 0x12c11887 */
  goto L_12c11887;
L_12c118f9:;
  /* 12c118f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c118fd jne 0x12c1190e */
  if (!C.zf) goto L_12c1190e;
  /* 12c118ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11902 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c11904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c11907 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1190a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c1190c jmp 0x12c11914 */
  goto L_12c11914;
L_12c1190e:;
  /* 12c1190e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12c11914:;
  /* 12c11914 pop esi */
  ESI = (pop32());
  /* 12c11915 mov esp, ebp */
  ESP = (EBP);
  /* 12c11917 pop ebp */
  EBP = (pop32());
  /* 12c11918 ret  */
  ESPCHK(0x12c117f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011920 @ 0x12c11920 (61 bytes, 18 insns) */
void f_12c11920(void) {
  FTRACE(0x12c11920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11920 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11921 mov ebp, esp */
  EBP = (ESP);
  /* 12c11923 cmp dword ptr [0x12c2e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1192a jne 0x12c1195b */
  if (!C.zf) goto L_12c1195b;
  /* 12c1192c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c1192e call 0x12c06820 */
  push32(0x12c11933u); f_12c06820();
  /* 12c11933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11936 cmp dword ptr [0x12c2e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1193d jne 0x12c11951 */
  if (!C.zf) goto L_12c11951;
  /* 12c1193f call 0x12c11980 */
  push32(0x12c11944u); f_12c11980();
  /* 12c11944 mov eax, dword ptr [0x12c2e7e8] */
  EAX = (r32((uint32_t)(0x12c2e7e8)));
  /* 12c11949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1194c mov dword ptr [0x12c2e7e8], eax */
  w32((uint32_t)(0x12c2e7e8), (EAX));
L_12c11951:;
  /* 12c11951 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c11953 call 0x12c068c0 */
  push32(0x12c11958u); f_12c068c0();
  /* 12c11958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c1195b:;
  /* 12c1195b pop ebp */
  EBP = (pop32());
  /* 12c1195c ret  */
  ESPCHK(0x12c11920u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x12c11960 (30 bytes, 11 insns) */
void f_12c11960(void) {
  FTRACE(0x12c11960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11961 mov ebp, esp */
  EBP = (ESP);
  /* 12c11963 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c11965 call 0x12c06820 */
  push32(0x12c1196au); f_12c06820();
  /* 12c1196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1196d call 0x12c11980 */
  push32(0x12c11972u); f_12c11980();
  /* 12c11972 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c11974 call 0x12c068c0 */
  push32(0x12c11979u); f_12c068c0();
  /* 12c11979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1197c pop ebp */
  EBP = (pop32());
  /* 12c1197d ret  */
  ESPCHK(0x12c11960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x12c11980 (939 bytes, 266 insns) */
void f_12c11980(void) {
  FTRACE(0x12c11980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11980 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11981 mov ebp, esp */
  EBP = (ESP);
  /* 12c11983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c11986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c1198d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c1198f call 0x12c06820 */
  push32(0x12c11994u); f_12c06820();
  /* 12c11994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11997 mov dword ptr [0x12c2e730], 0 */
  w32((uint32_t)(0x12c2e730), (0x0u));
  /* 12c119a1 mov dword ptr [0x12c2de38], 0xffffffff */
  w32((uint32_t)(0x12c2de38), (0xffffffffu));
  /* 12c119ab mov eax, dword ptr [0x12c2de38] */
  EAX = (r32((uint32_t)(0x12c2de38)));
  /* 12c119b0 mov dword ptr [0x12c2de28], eax */
  w32((uint32_t)(0x12c2de28), (EAX));
  /* 12c119b5 push 0x12c2a870 */
  push32((uint32_t)(0x12c2a870u));
  /* 12c119ba call 0x12c12800 */
  push32(0x12c119bfu); f_12c12800();
  /* 12c119bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c119c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c119c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c119c9 jne 0x12c11b03 */
  if (!C.zf) goto L_12c11b03;
  /* 12c119cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c119d1 call 0x12c068c0 */
  push32(0x12c119d6u); f_12c068c0();
  /* 12c119d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c119d9 push 0x12c2e738 */
  push32((uint32_t)(0x12c2e738u));
  /* 12c119de call dword ptr [0x12c30250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30250))), 0x12c119e4u);
  /* 12c119e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c119e7 je 0x12c11afe */
  if (C.zf) goto L_12c11afe;
  /* 12c119ed mov dword ptr [0x12c2e730], 1 */
  w32((uint32_t)(0x12c2e730), (0x1u));
  /* 12c119f7 mov ecx, dword ptr [0x12c2e738] */
  ECX = (r32((uint32_t)(0x12c2e738)));
  /* 12c119fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11a00 mov dword ptr [0x12c2dd90], ecx */
  w32((uint32_t)(0x12c2dd90), (ECX));
  /* 12c11a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11a08 mov dx, word ptr [0x12c2e77e] */
  DX = (r16((uint32_t)(0x12c2e77e)));
  /* 12c11a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c11a11 je 0x12c11a29 */
  if (C.zf) goto L_12c11a29;
  /* 12c11a13 mov eax, dword ptr [0x12c2e78c] */
  EAX = (r32((uint32_t)(0x12c2e78c)));
  /* 12c11a18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11a1b mov ecx, dword ptr [0x12c2dd90] */
  ECX = (r32((uint32_t)(0x12c2dd90)));
  /* 12c11a21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11a23 mov dword ptr [0x12c2dd90], ecx */
  w32((uint32_t)(0x12c2dd90), (ECX));
L_12c11a29:;
  /* 12c11a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11a2b mov dx, word ptr [0x12c2e7d2] */
  DX = (r16((uint32_t)(0x12c2e7d2)));
  /* 12c11a32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c11a34 je 0x12c11a5e */
  if (C.zf) goto L_12c11a5e;
  /* 12c11a36 cmp dword ptr [0x12c2e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11a3d je 0x12c11a5e */
  if (C.zf) goto L_12c11a5e;
  /* 12c11a3f mov dword ptr [0x12c2dd94], 1 */
  w32((uint32_t)(0x12c2dd94), (0x1u));
  /* 12c11a49 mov eax, dword ptr [0x12c2e7e0] */
  EAX = (r32((uint32_t)(0x12c2e7e0)));
  /* 12c11a4e sub eax, dword ptr [0x12c2e78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2e78c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c11a54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11a57 mov dword ptr [0x12c2dd98], eax */
  w32((uint32_t)(0x12c2dd98), (EAX));
  /* 12c11a5c jmp 0x12c11a72 */
  goto L_12c11a72;
L_12c11a5e:;
  /* 12c11a5e mov dword ptr [0x12c2dd94], 0 */
  w32((uint32_t)(0x12c2dd94), (0x0u));
  /* 12c11a68 mov dword ptr [0x12c2dd98], 0 */
  w32((uint32_t)(0x12c2dd98), (0x0u));
L_12c11a72:;
  /* 12c11a72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c11a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11a78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c11a7a mov edx, dword ptr [0x12c2de1c] */
  EDX = (r32((uint32_t)(0x12c2de1c)));
  /* 12c11a80 push edx */
  push32((uint32_t)(EDX));
  /* 12c11a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c11a83 push 0x12c2e73c */
  push32((uint32_t)(0x12c2e73cu));
  /* 12c11a88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c11a8d mov eax, dword ptr [0x12c2e6a0] */
  EAX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c11a92 push eax */
  push32((uint32_t)(EAX));
  /* 12c11a93 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c11a99u);
  /* 12c11a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c11a9b je 0x12c11aaf */
  if (C.zf) goto L_12c11aaf;
  /* 12c11a9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11aa1 jne 0x12c11aaf */
  if (!C.zf) goto L_12c11aaf;
  /* 12c11aa3 mov ecx, dword ptr [0x12c2de1c] */
  ECX = (r32((uint32_t)(0x12c2de1c)));
  /* 12c11aa9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12c11aad jmp 0x12c11ab8 */
  goto L_12c11ab8;
L_12c11aaf:;
  /* 12c11aaf mov edx, dword ptr [0x12c2de1c] */
  EDX = (r32((uint32_t)(0x12c2de1c)));
  /* 12c11ab5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12c11ab8:;
  /* 12c11ab8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c11abb push eax */
  push32((uint32_t)(EAX));
  /* 12c11abc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11abe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c11ac0 mov ecx, dword ptr [0x12c2de20] */
  ECX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11ac7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c11ac9 push 0x12c2e790 */
  push32((uint32_t)(0x12c2e790u));
  /* 12c11ace push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c11ad3 mov edx, dword ptr [0x12c2e6a0] */
  EDX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c11ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12c11ada call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c11ae0u);
  /* 12c11ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c11ae2 je 0x12c11af5 */
  if (C.zf) goto L_12c11af5;
  /* 12c11ae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11ae8 jne 0x12c11af5 */
  if (!C.zf) goto L_12c11af5;
  /* 12c11aea mov eax, dword ptr [0x12c2de20] */
  EAX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11aef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12c11af3 jmp 0x12c11afe */
  goto L_12c11afe;
L_12c11af5:;
  /* 12c11af5 mov ecx, dword ptr [0x12c2de20] */
  ECX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11afb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12c11afe:;
  /* 12c11afe jmp 0x12c11d27 */
  goto L_12c11d27;
L_12c11b03:;
  /* 12c11b03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c11b0b je 0x12c11b2d */
  if (C.zf) goto L_12c11b2d;
  /* 12c11b0d cmp dword ptr [0x12c2e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11b14 je 0x12c11b3c */
  if (C.zf) goto L_12c11b3c;
  /* 12c11b16 mov ecx, dword ptr [0x12c2e7e4] */
  ECX = (r32((uint32_t)(0x12c2e7e4)));
  /* 12c11b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12c11b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11b20 push edx */
  push32((uint32_t)(EDX));
  /* 12c11b21 call 0x12c0eab0 */
  push32(0x12c11b26u); f_12c0eab0();
  /* 12c11b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c11b2b jne 0x12c11b3c */
  if (!C.zf) goto L_12c11b3c;
L_12c11b2d:;
  /* 12c11b2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c11b2f call 0x12c068c0 */
  push32(0x12c11b34u); f_12c068c0();
  /* 12c11b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b37 jmp 0x12c11d27 */
  goto L_12c11d27;
L_12c11b3c:;
  /* 12c11b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11b3e mov eax, dword ptr [0x12c2e7e4] */
  EAX = (r32((uint32_t)(0x12c2e7e4)));
  /* 12c11b43 push eax */
  push32((uint32_t)(EAX));
  /* 12c11b44 call 0x12c038b0 */
  push32(0x12c11b49u); f_12c038b0();
  /* 12c11b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12c11b51 push 0x12c2a868 */
  push32((uint32_t)(0x12c2a868u));
  /* 12c11b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11b5b push ecx */
  push32((uint32_t)(ECX));
  /* 12c11b5c call 0x12c05c50 */
  push32(0x12c11b61u); f_12c05c50();
  /* 12c11b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b67 push eax */
  push32((uint32_t)(EAX));
  /* 12c11b68 call 0x12c02e20 */
  push32(0x12c11b6du); f_12c02e20();
  /* 12c11b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b70 mov dword ptr [0x12c2e7e4], eax */
  w32((uint32_t)(0x12c2e7e4), (EAX));
  /* 12c11b75 cmp dword ptr [0x12c2e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11b7c jne 0x12c11b8d */
  if (!C.zf) goto L_12c11b8d;
  /* 12c11b7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c11b80 call 0x12c068c0 */
  push32(0x12c11b85u); f_12c068c0();
  /* 12c11b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b88 jmp 0x12c11d27 */
  goto L_12c11d27;
L_12c11b8d:;
  /* 12c11b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11b90 push edx */
  push32((uint32_t)(EDX));
  /* 12c11b91 mov eax, dword ptr [0x12c2e7e4] */
  EAX = (r32((uint32_t)(0x12c2e7e4)));
  /* 12c11b96 push eax */
  push32((uint32_t)(EAX));
  /* 12c11b97 call 0x12c05dd0 */
  push32(0x12c11b9cu); f_12c05dd0();
  /* 12c11b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11b9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c11ba1 call 0x12c068c0 */
  push32(0x12c11ba6u); f_12c068c0();
  /* 12c11ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11ba9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c11bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11bae push ecx */
  push32((uint32_t)(ECX));
  /* 12c11baf mov edx, dword ptr [0x12c2de1c] */
  EDX = (r32((uint32_t)(0x12c2de1c)));
  /* 12c11bb5 push edx */
  push32((uint32_t)(EDX));
  /* 12c11bb6 call 0x12c06640 */
  push32(0x12c11bbbu); f_12c06640();
  /* 12c11bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11bbe mov eax, dword ptr [0x12c2de1c] */
  EAX = (r32((uint32_t)(0x12c2de1c)));
  /* 12c11bc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12c11bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11bca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11bcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11bd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11bd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11bd9 jne 0x12c11bed */
  if (!C.zf) goto L_12c11bed;
  /* 12c11bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c11bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11be1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c11be4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11be7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11bea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c11bed:;
  /* 12c11bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11bf0 push eax */
  push32((uint32_t)(EAX));
  /* 12c11bf1 call 0x12c116d0 */
  push32(0x12c11bf6u); f_12c116d0();
  /* 12c11bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11bf9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11bff mov dword ptr [0x12c2dd90], eax */
  w32((uint32_t)(0x12c2dd90), (EAX));
L_12c11c04:;
  /* 12c11c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c11c0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c0d je 0x12c11c25 */
  if (C.zf) goto L_12c11c25;
  /* 12c11c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c11c15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c18 jl 0x12c11c30 */
  if ((C.sf!=C.of)) goto L_12c11c30;
  /* 12c11c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11c20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c23 jg 0x12c11c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c11c30;
L_12c11c25:;
  /* 12c11c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11c2e jmp 0x12c11c04 */
  goto L_12c11c04;
L_12c11c30:;
  /* 12c11c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11c36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c39 jne 0x12c11cd5 */
  if (!C.zf) goto L_12c11cd5;
  /* 12c11c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c4b push edx */
  push32((uint32_t)(EDX));
  /* 12c11c4c call 0x12c116d0 */
  push32(0x12c11c51u); f_12c116d0();
  /* 12c11c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c11c57 mov ecx, dword ptr [0x12c2dd90] */
  ECX = (r32((uint32_t)(0x12c2dd90)));
  /* 12c11c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c5f mov dword ptr [0x12c2dd90], ecx */
  w32((uint32_t)(0x12c2dd90), (ECX));
L_12c11c65:;
  /* 12c11c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11c6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c6e jl 0x12c11c86 */
  if ((C.sf!=C.of)) goto L_12c11c86;
  /* 12c11c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c11c76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c79 jg 0x12c11c86 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c11c86;
  /* 12c11c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c11c84 jmp 0x12c11c65 */
  goto L_12c11c65;
L_12c11c86:;
  /* 12c11c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c11c8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11c8f jne 0x12c11cd5 */
  if (!C.zf) goto L_12c11cd5;
  /* 12c11c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11c97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c11c9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11c9d push ecx */
  push32((uint32_t)(ECX));
  /* 12c11c9e call 0x12c116d0 */
  push32(0x12c11ca3u); f_12c116d0();
  /* 12c11ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11ca6 mov edx, dword ptr [0x12c2dd90] */
  EDX = (r32((uint32_t)(0x12c2dd90)));
  /* 12c11cac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11cae mov dword ptr [0x12c2dd90], edx */
  w32((uint32_t)(0x12c2dd90), (EDX));
L_12c11cb4:;
  /* 12c11cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11cb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c11cba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11cbd jl 0x12c11cd5 */
  if ((C.sf!=C.of)) goto L_12c11cd5;
  /* 12c11cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c11cc5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11cc8 jg 0x12c11cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c11cd5;
  /* 12c11cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c11cd3 jmp 0x12c11cb4 */
  goto L_12c11cb4;
L_12c11cd5:;
  /* 12c11cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11cd9 je 0x12c11ce9 */
  if (C.zf) goto L_12c11ce9;
  /* 12c11cdb mov edx, dword ptr [0x12c2dd90] */
  EDX = (r32((uint32_t)(0x12c2dd90)));
  /* 12c11ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c11ce3 mov dword ptr [0x12c2dd90], edx */
  w32((uint32_t)(0x12c2dd90), (EDX));
L_12c11ce9:;
  /* 12c11ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c11cef mov dword ptr [0x12c2dd94], ecx */
  w32((uint32_t)(0x12c2dd94), (ECX));
  /* 12c11cf5 cmp dword ptr [0x12c2dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11cfc je 0x12c11d1e */
  if (C.zf) goto L_12c11d1e;
  /* 12c11cfe push 3 */
  push32((uint32_t)(0x3u));
  /* 12c11d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c11d03 push edx */
  push32((uint32_t)(EDX));
  /* 12c11d04 mov eax, dword ptr [0x12c2de20] */
  EAX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11d09 push eax */
  push32((uint32_t)(EAX));
  /* 12c11d0a call 0x12c06640 */
  push32(0x12c11d0fu); f_12c06640();
  /* 12c11d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11d12 mov ecx, dword ptr [0x12c2de20] */
  ECX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11d18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12c11d1c jmp 0x12c11d27 */
  goto L_12c11d27;
L_12c11d1e:;
  /* 12c11d1e mov edx, dword ptr [0x12c2de20] */
  EDX = (r32((uint32_t)(0x12c2de20)));
  /* 12c11d24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12c11d27:;
  /* 12c11d27 mov esp, ebp */
  ESP = (EBP);
  /* 12c11d29 pop ebp */
  EBP = (pop32());
  /* 12c11d2a ret  */
  ESPCHK(0x12c11980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x12c11d30 (46 bytes, 18 insns) */
void f_12c11d30(void) {
  FTRACE(0x12c11d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11d31 mov ebp, esp */
  EBP = (ESP);
  /* 12c11d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11d34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c11d36 call 0x12c06820 */
  push32(0x12c11d3bu); f_12c06820();
  /* 12c11d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11d41 push eax */
  push32((uint32_t)(EAX));
  /* 12c11d42 call 0x12c11d60 */
  push32(0x12c11d47u); f_12c11d60();
  /* 12c11d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c11d4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c11d4f call 0x12c068c0 */
  push32(0x12c11d54u); f_12c068c0();
  /* 12c11d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c11d5a mov esp, ebp */
  ESP = (EBP);
  /* 12c11d5c pop ebp */
  EBP = (pop32());
  /* 12c11d5d ret  */
  ESPCHK(0x12c11d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x12c11d60 (762 bytes, 246 insns) */
void f_12c11d60(void) {
  FTRACE(0x12c11d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c11d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c11d61 mov ebp, esp */
  EBP = (ESP);
  /* 12c11d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11d64 cmp dword ptr [0x12c2dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11d6b jne 0x12c11d74 */
  if (!C.zf) goto L_12c11d74;
  /* 12c11d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11d6f jmp 0x12c12056 */
  goto L_12c12056;
L_12c11d74:;
  /* 12c11d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11d77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c11d7a cmp ecx, dword ptr [0x12c2de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11d80 jne 0x12c11d94 */
  if (!C.zf) goto L_12c11d94;
  /* 12c11d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c11d88 cmp eax, dword ptr [0x12c2de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11d8e je 0x12c11f5b */
  if (C.zf) goto L_12c11f5b;
L_12c11d94:;
  /* 12c11d94 cmp dword ptr [0x12c2e730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11d9b je 0x12c11f15 */
  if (C.zf) goto L_12c11f15;
  /* 12c11da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11da3 mov cx, word ptr [0x12c2e7d0] */
  CX = (r16((uint32_t)(0x12c2e7d0)));
  /* 12c11daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c11dac jne 0x12c11e09 */
  if (!C.zf) goto L_12c11e09;
  /* 12c11dae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11db0 mov dx, word ptr [0x12c2e7de] */
  DX = (r16((uint32_t)(0x12c2e7de)));
  /* 12c11db7 push edx */
  push32((uint32_t)(EDX));
  /* 12c11db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11dba mov ax, word ptr [0x12c2e7dc] */
  AX = (r16((uint32_t)(0x12c2e7dc)));
  /* 12c11dc0 push eax */
  push32((uint32_t)(EAX));
  /* 12c11dc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11dc3 mov cx, word ptr [0x12c2e7da] */
  CX = (r16((uint32_t)(0x12c2e7da)));
  /* 12c11dca push ecx */
  push32((uint32_t)(ECX));
  /* 12c11dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11dcd mov dx, word ptr [0x12c2e7d8] */
  DX = (r16((uint32_t)(0x12c2e7d8)));
  /* 12c11dd4 push edx */
  push32((uint32_t)(EDX));
  /* 12c11dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11dd9 mov ax, word ptr [0x12c2e7d4] */
  AX = (r16((uint32_t)(0x12c2e7d4)));
  /* 12c11ddf push eax */
  push32((uint32_t)(EAX));
  /* 12c11de0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11de2 mov cx, word ptr [0x12c2e7d6] */
  CX = (r16((uint32_t)(0x12c2e7d6)));
  /* 12c11de9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11dea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11dec mov dx, word ptr [0x12c2e7d2] */
  DX = (r16((uint32_t)(0x12c2e7d2)));
  /* 12c11df3 push edx */
  push32((uint32_t)(EDX));
  /* 12c11df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c11dfa push ecx */
  push32((uint32_t)(ECX));
  /* 12c11dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11dff call 0x12c12060 */
  push32(0x12c11e04u); f_12c12060();
  /* 12c11e04 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11e07 jmp 0x12c11e5a */
  goto L_12c11e5a;
L_12c11e09:;
  /* 12c11e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11e0b mov dx, word ptr [0x12c2e7de] */
  DX = (r16((uint32_t)(0x12c2e7de)));
  /* 12c11e12 push edx */
  push32((uint32_t)(EDX));
  /* 12c11e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11e15 mov ax, word ptr [0x12c2e7dc] */
  AX = (r16((uint32_t)(0x12c2e7dc)));
  /* 12c11e1b push eax */
  push32((uint32_t)(EAX));
  /* 12c11e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11e1e mov cx, word ptr [0x12c2e7da] */
  CX = (r16((uint32_t)(0x12c2e7da)));
  /* 12c11e25 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11e28 mov dx, word ptr [0x12c2e7d8] */
  DX = (r16((uint32_t)(0x12c2e7d8)));
  /* 12c11e2f push edx */
  push32((uint32_t)(EDX));
  /* 12c11e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11e32 mov ax, word ptr [0x12c2e7d6] */
  AX = (r16((uint32_t)(0x12c2e7d6)));
  /* 12c11e38 push eax */
  push32((uint32_t)(EAX));
  /* 12c11e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11e3f mov cx, word ptr [0x12c2e7d2] */
  CX = (r16((uint32_t)(0x12c2e7d2)));
  /* 12c11e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c11e4d push eax */
  push32((uint32_t)(EAX));
  /* 12c11e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11e52 call 0x12c12060 */
  push32(0x12c11e57u); f_12c12060();
  /* 12c11e57 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c11e5a:;
  /* 12c11e5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11e5c mov cx, word ptr [0x12c2e77c] */
  CX = (r16((uint32_t)(0x12c2e77c)));
  /* 12c11e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c11e65 jne 0x12c11ec2 */
  if (!C.zf) goto L_12c11ec2;
  /* 12c11e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11e69 mov dx, word ptr [0x12c2e78a] */
  DX = (r16((uint32_t)(0x12c2e78a)));
  /* 12c11e70 push edx */
  push32((uint32_t)(EDX));
  /* 12c11e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11e73 mov ax, word ptr [0x12c2e788] */
  AX = (r16((uint32_t)(0x12c2e788)));
  /* 12c11e79 push eax */
  push32((uint32_t)(EAX));
  /* 12c11e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11e7c mov cx, word ptr [0x12c2e786] */
  CX = (r16((uint32_t)(0x12c2e786)));
  /* 12c11e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11e86 mov dx, word ptr [0x12c2e784] */
  DX = (r16((uint32_t)(0x12c2e784)));
  /* 12c11e8d push edx */
  push32((uint32_t)(EDX));
  /* 12c11e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11e92 mov ax, word ptr [0x12c2e780] */
  AX = (r16((uint32_t)(0x12c2e780)));
  /* 12c11e98 push eax */
  push32((uint32_t)(EAX));
  /* 12c11e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11e9b mov cx, word ptr [0x12c2e782] */
  CX = (r16((uint32_t)(0x12c2e782)));
  /* 12c11ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11ea5 mov dx, word ptr [0x12c2e77e] */
  DX = (r16((uint32_t)(0x12c2e77e)));
  /* 12c11eac push edx */
  push32((uint32_t)(EDX));
  /* 12c11ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11eb0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c11eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c11eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11eb8 call 0x12c12060 */
  push32(0x12c11ebdu); f_12c12060();
  /* 12c11ebd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11ec0 jmp 0x12c11f13 */
  goto L_12c11f13;
L_12c11ec2:;
  /* 12c11ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11ec4 mov dx, word ptr [0x12c2e78a] */
  DX = (r16((uint32_t)(0x12c2e78a)));
  /* 12c11ecb push edx */
  push32((uint32_t)(EDX));
  /* 12c11ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11ece mov ax, word ptr [0x12c2e788] */
  AX = (r16((uint32_t)(0x12c2e788)));
  /* 12c11ed4 push eax */
  push32((uint32_t)(EAX));
  /* 12c11ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11ed7 mov cx, word ptr [0x12c2e786] */
  CX = (r16((uint32_t)(0x12c2e786)));
  /* 12c11ede push ecx */
  push32((uint32_t)(ECX));
  /* 12c11edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c11ee1 mov dx, word ptr [0x12c2e784] */
  DX = (r16((uint32_t)(0x12c2e784)));
  /* 12c11ee8 push edx */
  push32((uint32_t)(EDX));
  /* 12c11ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11eeb mov ax, word ptr [0x12c2e782] */
  AX = (r16((uint32_t)(0x12c2e782)));
  /* 12c11ef1 push eax */
  push32((uint32_t)(EAX));
  /* 12c11ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c11ef8 mov cx, word ptr [0x12c2e77e] */
  CX = (r16((uint32_t)(0x12c2e77e)));
  /* 12c11eff push ecx */
  push32((uint32_t)(ECX));
  /* 12c11f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c11f06 push eax */
  push32((uint32_t)(EAX));
  /* 12c11f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f0b call 0x12c12060 */
  push32(0x12c11f10u); f_12c12060();
  /* 12c11f10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c11f13:;
  /* 12c11f13 jmp 0x12c11f5b */
  goto L_12c11f5b;
L_12c11f15:;
  /* 12c11f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11f23 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c11f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c11f2b push edx */
  push32((uint32_t)(EDX));
  /* 12c11f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11f30 call 0x12c12060 */
  push32(0x12c11f35u); f_12c12060();
  /* 12c11f35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c11f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c11f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f44 push 5 */
  push32((uint32_t)(0x5u));
  /* 12c11f46 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c11f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c11f4e push ecx */
  push32((uint32_t)(ECX));
  /* 12c11f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c11f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c11f53 call 0x12c12060 */
  push32(0x12c11f58u); f_12c12060();
  /* 12c11f58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c11f5b:;
  /* 12c11f5b mov edx, dword ptr [0x12c2de2c] */
  EDX = (r32((uint32_t)(0x12c2de2c)));
  /* 12c11f61 cmp edx, dword ptr [0x12c2de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11f67 jge 0x12c11fb4 */
  if ((C.sf==C.of)) goto L_12c11fb4;
  /* 12c11f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c11f6f cmp ecx, dword ptr [0x12c2de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11f75 jl 0x12c11f85 */
  if ((C.sf!=C.of)) goto L_12c11f85;
  /* 12c11f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c11f7d cmp eax, dword ptr [0x12c2de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11f83 jle 0x12c11f8c */
  if ((C.zf||C.sf!=C.of)) goto L_12c11f8c;
L_12c11f85:;
  /* 12c11f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11f87 jmp 0x12c12056 */
  goto L_12c12056;
L_12c11f8c:;
  /* 12c11f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c11f92 cmp edx, dword ptr [0x12c2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11f98 jle 0x12c11fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_12c11fb2;
  /* 12c11f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11f9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c11fa0 cmp ecx, dword ptr [0x12c2de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11fa6 jge 0x12c11fb2 */
  if ((C.sf==C.of)) goto L_12c11fb2;
  /* 12c11fa8 mov eax, 1 */
  EAX = (0x1u);
  /* 12c11fad jmp 0x12c12056 */
  goto L_12c12056;
L_12c11fb2:;
  /* 12c11fb2 jmp 0x12c11ff7 */
  goto L_12c11ff7;
L_12c11fb4:;
  /* 12c11fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11fb7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c11fba cmp eax, dword ptr [0x12c2de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11fc0 jl 0x12c11fd0 */
  if ((C.sf!=C.of)) goto L_12c11fd0;
  /* 12c11fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11fc5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c11fc8 cmp edx, dword ptr [0x12c2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11fce jle 0x12c11fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c11fd7;
L_12c11fd0:;
  /* 12c11fd0 mov eax, 1 */
  EAX = (0x1u);
  /* 12c11fd5 jmp 0x12c12056 */
  goto L_12c12056;
L_12c11fd7:;
  /* 12c11fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11fda mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c11fdd cmp ecx, dword ptr [0x12c2de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11fe3 jle 0x12c11ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c11ff7;
  /* 12c11fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11fe8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c11feb cmp eax, dword ptr [0x12c2de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c11ff1 jge 0x12c11ff7 */
  if ((C.sf==C.of)) goto L_12c11ff7;
  /* 12c11ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c11ff5 jmp 0x12c12056 */
  goto L_12c12056;
L_12c11ff7:;
  /* 12c11ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c11ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c11ffd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c12000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c12005 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1200a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c1200d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c12013 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12015 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c1201b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c1201e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12021 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c12024 cmp edx, dword ptr [0x12c2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1202a jne 0x12c12042 */
  if (!C.zf) goto L_12c12042;
  /* 12c1202c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1202f cmp eax, dword ptr [0x12c2de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12035 jl 0x12c1203e */
  if ((C.sf!=C.of)) goto L_12c1203e;
  /* 12c12037 mov eax, 1 */
  EAX = (0x1u);
  /* 12c1203c jmp 0x12c12056 */
  goto L_12c12056;
L_12c1203e:;
  /* 12c1203e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12040 jmp 0x12c12056 */
  goto L_12c12056;
L_12c12042:;
  /* 12c12042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12045 cmp ecx, dword ptr [0x12c2de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1204b jge 0x12c12054 */
  if ((C.sf==C.of)) goto L_12c12054;
  /* 12c1204d mov eax, 1 */
  EAX = (0x1u);
  /* 12c12052 jmp 0x12c12056 */
  goto L_12c12056;
L_12c12054:;
  /* 12c12054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c12056:;
  /* 12c12056 mov esp, ebp */
  ESP = (EBP);
  /* 12c12058 pop ebp */
  EBP = (pop32());
  /* 12c12059 ret  */
  ESPCHK(0x12c11d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x12c12060 (504 bytes, 145 insns) */
void f_12c12060(void) {
  FTRACE(0x12c12060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12060 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12061 mov ebp, esp */
  EBP = (ESP);
  /* 12c12063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12066 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1206a jne 0x12c1213c */
  if (!C.zf) goto L_12c1213c;
  /* 12c12070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12073 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c12076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12078 jne 0x12c12089 */
  if (!C.zf) goto L_12c12089;
  /* 12c1207a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1207d mov edx, dword ptr [ecx*4 + 0x12c2de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2de4c)));
  /* 12c12084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c12087 jmp 0x12c12096 */
  goto L_12c12096;
L_12c12089:;
  /* 12c12089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1208c mov ecx, dword ptr [eax*4 + 0x12c2de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2de80)));
  /* 12c12093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c12096:;
  /* 12c12096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1209c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c1209f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c120a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c120a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c120ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c120ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c120b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c120b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c120b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12c120b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12c120bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c120be mov ecx, 7 */
  ECX = (0x7u);
  /* 12c120c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c120c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c120c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c120cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c120ce jge 0x12c120e9 */
  if ((C.sf==C.of)) goto L_12c120e9;
  /* 12c120d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c120d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c120d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c120d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c120dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c120df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c120e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c120e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c120e7 jmp 0x12c120fd */
  goto L_12c120fd;
L_12c120e9:;
  /* 12c120e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c120ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c120ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c120f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c120f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c120f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c120fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c120fd:;
  /* 12c120fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12101 jne 0x12c1213a */
  if (!C.zf) goto L_12c1213a;
  /* 12c12103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12106 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c12109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c1210b jne 0x12c1211c */
  if (!C.zf) goto L_12c1211c;
  /* 12c1210d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12110 mov eax, dword ptr [edx*4 + 0x12c2de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2de50)));
  /* 12c12117 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c1211a jmp 0x12c12129 */
  goto L_12c12129;
L_12c1211c:;
  /* 12c1211c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1211f mov edx, dword ptr [ecx*4 + 0x12c2de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2de84)));
  /* 12c12126 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c12129:;
  /* 12c12129 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1212c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1212f jle 0x12c1213a */
  if ((C.zf||C.sf!=C.of)) goto L_12c1213a;
  /* 12c12131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12134 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12137 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c1213a:;
  /* 12c1213a jmp 0x12c12171 */
  goto L_12c12171;
L_12c1213c:;
  /* 12c1213c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1213f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c12142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12144 jne 0x12c12155 */
  if (!C.zf) goto L_12c12155;
  /* 12c12146 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12149 mov ecx, dword ptr [eax*4 + 0x12c2de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2de4c)));
  /* 12c12150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c12153 jmp 0x12c12162 */
  goto L_12c12162;
L_12c12155:;
  /* 12c12155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12158 mov eax, dword ptr [edx*4 + 0x12c2de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2de80)));
  /* 12c1215f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12c12162:;
  /* 12c12162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c12165 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c12168 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1216b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1216e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c12171:;
  /* 12c12171 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12175 jne 0x12c121b1 */
  if (!C.zf) goto L_12c121b1;
  /* 12c12177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1217a mov dword ptr [0x12c2de2c], eax */
  w32((uint32_t)(0x12c2de2c), (EAX));
  /* 12c1217f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c12182 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c12185 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12c12188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1218a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c1218d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12c12190 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12192 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c12198 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12c1219b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1219d mov dword ptr [0x12c2de30], ecx */
  w32((uint32_t)(0x12c2de30), (ECX));
  /* 12c121a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c121a6 mov dword ptr [0x12c2de28], edx */
  w32((uint32_t)(0x12c2de28), (EDX));
  /* 12c121ac jmp 0x12c12254 */
  goto L_12c12254;
L_12c121b1:;
  /* 12c121b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c121b4 mov dword ptr [0x12c2de3c], eax */
  w32((uint32_t)(0x12c2de3c), (EAX));
  /* 12c121b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c121bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c121bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12c121c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c121c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c121c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12c121ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c121cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c121d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12c121d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c121d7 mov dword ptr [0x12c2de40], ecx */
  w32((uint32_t)(0x12c2de40), (ECX));
  /* 12c121dd mov edx, dword ptr [0x12c2dd98] */
  EDX = (r32((uint32_t)(0x12c2dd98)));
  /* 12c121e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c121e9 mov eax, dword ptr [0x12c2de40] */
  EAX = (r32((uint32_t)(0x12c2de40)));
  /* 12c121ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c121f0 mov dword ptr [0x12c2de40], eax */
  w32((uint32_t)(0x12c2de40), (EAX));
  /* 12c121f5 cmp dword ptr [0x12c2de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c121fc jge 0x12c12221 */
  if ((C.sf==C.of)) goto L_12c12221;
  /* 12c121fe mov ecx, dword ptr [0x12c2de40] */
  ECX = (r32((uint32_t)(0x12c2de40)));
  /* 12c12204 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1220a mov dword ptr [0x12c2de40], ecx */
  w32((uint32_t)(0x12c2de40), (ECX));
  /* 12c12210 mov edx, dword ptr [0x12c2de3c] */
  EDX = (r32((uint32_t)(0x12c2de3c)));
  /* 12c12216 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12219 mov dword ptr [0x12c2de3c], edx */
  w32((uint32_t)(0x12c2de3c), (EDX));
  /* 12c1221f jmp 0x12c1224b */
  goto L_12c1224b;
L_12c12221:;
  /* 12c12221 cmp dword ptr [0x12c2de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12c2de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1222b jl 0x12c1224b */
  if ((C.sf!=C.of)) goto L_12c1224b;
  /* 12c1222d mov eax, dword ptr [0x12c2de40] */
  EAX = (r32((uint32_t)(0x12c2de40)));
  /* 12c12232 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12237 mov dword ptr [0x12c2de40], eax */
  w32((uint32_t)(0x12c2de40), (EAX));
  /* 12c1223c mov ecx, dword ptr [0x12c2de3c] */
  ECX = (r32((uint32_t)(0x12c2de3c)));
  /* 12c12242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12245 mov dword ptr [0x12c2de3c], ecx */
  w32((uint32_t)(0x12c2de3c), (ECX));
L_12c1224b:;
  /* 12c1224b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c1224e mov dword ptr [0x12c2de38], edx */
  w32((uint32_t)(0x12c2de38), (EDX));
L_12c12254:;
  /* 12c12254 mov esp, ebp */
  ESP = (EBP);
  /* 12c12256 pop ebp */
  EBP = (pop32());
  /* 12c12257 ret  */
  ESPCHK(0x12c12060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x12c12260 (382 bytes, 135 insns) */
void f_12c12260(void) {
  FTRACE(0x12c12260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12260 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12261 mov ebp, esp */
  EBP = (ESP);
  /* 12c12263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c12265 push 0x12c2a878 */
  push32((uint32_t)(0x12c2a878u));
  /* 12c1226a push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c1226f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c12275 push eax */
  push32((uint32_t)(EAX));
  /* 12c12276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c1227d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12280 push ebx */
  push32((uint32_t)(EBX));
  /* 12c12281 push esi */
  push32((uint32_t)(ESI));
  /* 12c12282 push edi */
  push32((uint32_t)(EDI));
  /* 12c12283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c12286 cmp dword ptr [0x12c2e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1228d jne 0x12c122d2 */
  if (!C.zf) goto L_12c122d2;
  /* 12c1228f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12291 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12297 call dword ptr [0x12c3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3024c))), 0x12c1229du);
  /* 12c1229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c1229f je 0x12c122ad */
  if (C.zf) goto L_12c122ad;
  /* 12c122a1 mov dword ptr [0x12c2e7ec], 1 */
  w32((uint32_t)(0x12c2e7ec), (0x1u));
  /* 12c122ab jmp 0x12c122d2 */
  goto L_12c122d2;
L_12c122ad:;
  /* 12c122ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12c122af push 0 */
  push32((uint32_t)(0x0u));
  /* 12c122b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c122b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c122b5 call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c122bbu);
  /* 12c122bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c122bd je 0x12c122cb */
  if (C.zf) goto L_12c122cb;
  /* 12c122bf mov dword ptr [0x12c2e7ec], 2 */
  w32((uint32_t)(0x12c2e7ec), (0x2u));
  /* 12c122c9 jmp 0x12c122d2 */
  goto L_12c122d2;
L_12c122cb:;
  /* 12c122cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c122cd jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c122d2:;
  /* 12c122d2 cmp dword ptr [0x12c2e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c122d9 jne 0x12c122f6 */
  if (!C.zf) goto L_12c122f6;
  /* 12c122db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c122de push eax */
  push32((uint32_t)(EAX));
  /* 12c122df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c122e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c122e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c122e6 push edx */
  push32((uint32_t)(EDX));
  /* 12c122e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c122ea push eax */
  push32((uint32_t)(EAX));
  /* 12c122eb call dword ptr [0x12c3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3024c))), 0x12c122f1u);
  /* 12c122f1 jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c122f6:;
  /* 12c122f6 cmp dword ptr [0x12c2e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c122fd jne 0x12c123df */
  if (!C.zf) goto L_12c123df;
  /* 12c12303 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12307 jne 0x12c12312 */
  if (!C.zf) goto L_12c12312;
  /* 12c12309 mov ecx, dword ptr [0x12c2e6a0] */
  ECX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c1230f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12c12312:;
  /* 12c12312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12314 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12319 push edx */
  push32((uint32_t)(EDX));
  /* 12c1231a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1231d push eax */
  push32((uint32_t)(EAX));
  /* 12c1231e call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c12324u);
  /* 12c12324 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c12327 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1232b jne 0x12c12334 */
  if (!C.zf) goto L_12c12334;
  /* 12c1232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1232f jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c12334:;
  /* 12c12334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c1233b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c1233e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c12343 call 0x12c05fc0 */
  push32(0x12c12348u); f_12c05fc0();
  /* 12c12348 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12c1234b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c1234e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c12351 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c12354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c1235b jmp 0x12c12374 */
  goto L_12c12374;
  /* 12c1235d mov eax, 1 */
  EAX = (0x1u);
  /* 12c12362 ret  */
  ESPCHK(0x12c12260u, _esp0);
  ESP += 4; return;
  /* 12c12363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12366 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c1236d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c12374:;
  /* 12c12374 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12378 jne 0x12c1237e */
  if (!C.zf) goto L_12c1237e;
  /* 12c1237a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1237c jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c1237e:;
  /* 12c1237e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c12381 push edx */
  push32((uint32_t)(EDX));
  /* 12c12382 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12385 push eax */
  push32((uint32_t)(EAX));
  /* 12c12386 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12389 push ecx */
  push32((uint32_t)(ECX));
  /* 12c1238a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1238d push edx */
  push32((uint32_t)(EDX));
  /* 12c1238e call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c12394u);
  /* 12c12394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12396 jne 0x12c1239c */
  if (!C.zf) goto L_12c1239c;
  /* 12c12398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1239a jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c1239c:;
  /* 12c1239c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c123a0 jne 0x12c123bd */
  if (!C.zf) goto L_12c123bd;
  /* 12c123a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c123a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c123a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c123a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c123ab push eax */
  push32((uint32_t)(EAX));
  /* 12c123ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12c123ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c123b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c123b2 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c123b8u);
  /* 12c123b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c123bb jmp 0x12c123da */
  goto L_12c123da;
L_12c123bd:;
  /* 12c123bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c123c0 push edx */
  push32((uint32_t)(EDX));
  /* 12c123c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c123c4 push eax */
  push32((uint32_t)(EAX));
  /* 12c123c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c123c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c123ca push ecx */
  push32((uint32_t)(ECX));
  /* 12c123cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c123cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c123d0 push edx */
  push32((uint32_t)(EDX));
  /* 12c123d1 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c123d7u);
  /* 12c123d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c123da:;
  /* 12c123da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c123dd jmp 0x12c123e1 */
  goto L_12c123e1;
L_12c123df:;
  /* 12c123df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c123e1:;
  /* 12c123e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12c123e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c123e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c123ee pop edi */
  EDI = (pop32());
  /* 12c123ef pop esi */
  ESI = (pop32());
  /* 12c123f0 pop ebx */
  EBX = (pop32());
  /* 12c123f1 mov esp, ebp */
  ESP = (EBP);
  /* 12c123f3 pop ebp */
  EBP = (pop32());
  /* 12c123f4 ret  */
  ESPCHK(0x12c12260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x12c12400 (398 bytes, 140 insns) */
void f_12c12400(void) {
  FTRACE(0x12c12400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12401 mov ebp, esp */
  EBP = (ESP);
  /* 12c12403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c12405 push 0x12c2a888 */
  push32((uint32_t)(0x12c2a888u));
  /* 12c1240a push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c1240f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c12415 push eax */
  push32((uint32_t)(EAX));
  /* 12c12416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c1241d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12420 push ebx */
  push32((uint32_t)(EBX));
  /* 12c12421 push esi */
  push32((uint32_t)(ESI));
  /* 12c12422 push edi */
  push32((uint32_t)(EDI));
  /* 12c12423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c12426 cmp dword ptr [0x12c2e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1242d jne 0x12c12472 */
  if (!C.zf) goto L_12c12472;
  /* 12c1242f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12431 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12433 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12435 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12437 call dword ptr [0x12c3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3024c))), 0x12c1243du);
  /* 12c1243d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c1243f je 0x12c1244d */
  if (C.zf) goto L_12c1244d;
  /* 12c12441 mov dword ptr [0x12c2e7f0], 1 */
  w32((uint32_t)(0x12c2e7f0), (0x1u));
  /* 12c1244b jmp 0x12c12472 */
  goto L_12c12472;
L_12c1244d:;
  /* 12c1244d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1244f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12451 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12453 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12455 call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c1245bu);
  /* 12c1245b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c1245d je 0x12c1246b */
  if (C.zf) goto L_12c1246b;
  /* 12c1245f mov dword ptr [0x12c2e7f0], 2 */
  w32((uint32_t)(0x12c2e7f0), (0x2u));
  /* 12c12469 jmp 0x12c12472 */
  goto L_12c12472;
L_12c1246b:;
  /* 12c1246b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1246d jmp 0x12c12591 */
  goto L_12c12591;
L_12c12472:;
  /* 12c12472 cmp dword ptr [0x12c2e7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12479 jne 0x12c12496 */
  if (!C.zf) goto L_12c12496;
  /* 12c1247b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1247e push eax */
  push32((uint32_t)(EAX));
  /* 12c1247f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12482 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12486 push edx */
  push32((uint32_t)(EDX));
  /* 12c12487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1248a push eax */
  push32((uint32_t)(EAX));
  /* 12c1248b call dword ptr [0x12c30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30264))), 0x12c12491u);
  /* 12c12491 jmp 0x12c12591 */
  goto L_12c12591;
L_12c12496:;
  /* 12c12496 cmp dword ptr [0x12c2e7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1249d jne 0x12c1258f */
  if (!C.zf) goto L_12c1258f;
  /* 12c124a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c124a7 jne 0x12c124b2 */
  if (!C.zf) goto L_12c124b2;
  /* 12c124a9 mov ecx, dword ptr [0x12c2e6a0] */
  ECX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c124af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12c124b2:;
  /* 12c124b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c124b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c124b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c124b9 push edx */
  push32((uint32_t)(EDX));
  /* 12c124ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c124bd push eax */
  push32((uint32_t)(EAX));
  /* 12c124be call dword ptr [0x12c3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3024c))), 0x12c124c4u);
  /* 12c124c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c124c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c124cb jne 0x12c124d4 */
  if (!C.zf) goto L_12c124d4;
  /* 12c124cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c124cf jmp 0x12c12591 */
  goto L_12c12591;
L_12c124d4:;
  /* 12c124d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c124db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c124de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c124e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c124e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c124e5 call 0x12c05fc0 */
  push32(0x12c124eau); f_12c05fc0();
  /* 12c124ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12c124ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c124f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c124f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c124f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c124fd jmp 0x12c12516 */
  goto L_12c12516;
  /* 12c124ff mov eax, 1 */
  EAX = (0x1u);
  /* 12c12504 ret  */
  ESPCHK(0x12c12400u, _esp0);
  ESP += 4; return;
  /* 12c12505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12508 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c1250f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c12516:;
  /* 12c12516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1251a jne 0x12c12520 */
  if (!C.zf) goto L_12c12520;
  /* 12c1251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1251e jmp 0x12c12591 */
  goto L_12c12591;
L_12c12520:;
  /* 12c12520 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c12523 push edx */
  push32((uint32_t)(EDX));
  /* 12c12524 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12527 push eax */
  push32((uint32_t)(EAX));
  /* 12c12528 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c1252b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1252c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1252f push edx */
  push32((uint32_t)(EDX));
  /* 12c12530 call dword ptr [0x12c3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3024c))), 0x12c12536u);
  /* 12c12536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12538 jne 0x12c1253e */
  if (!C.zf) goto L_12c1253e;
  /* 12c1253a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1253c jmp 0x12c12591 */
  goto L_12c12591;
L_12c1253e:;
  /* 12c1253e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12542 jne 0x12c12566 */
  if (!C.zf) goto L_12c12566;
  /* 12c12544 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12548 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1254a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1254c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c1254e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12551 push eax */
  push32((uint32_t)(EAX));
  /* 12c12552 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c12557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c1255a push ecx */
  push32((uint32_t)(ECX));
  /* 12c1255b call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c12561u);
  /* 12c12561 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c12564 jmp 0x12c1258a */
  goto L_12c1258a;
L_12c12566:;
  /* 12c12566 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12568 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1256a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c1256d push edx */
  push32((uint32_t)(EDX));
  /* 12c1256e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12571 push eax */
  push32((uint32_t)(EAX));
  /* 12c12572 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c12574 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12577 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c1257d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12580 push edx */
  push32((uint32_t)(EDX));
  /* 12c12581 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c12587u);
  /* 12c12587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c1258a:;
  /* 12c1258a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c1258d jmp 0x12c12591 */
  goto L_12c12591;
L_12c1258f:;
  /* 12c1258f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c12591:;
  /* 12c12591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12c12594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c12597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c1259e pop edi */
  EDI = (pop32());
  /* 12c1259f pop esi */
  ESI = (pop32());
  /* 12c125a0 pop ebx */
  EBX = (pop32());
  /* 12c125a1 mov esp, ebp */
  ESP = (EBP);
  /* 12c125a3 pop ebp */
  EBP = (pop32());
  /* 12c125a4 ret  */
  ESPCHK(0x12c12400u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x12c125b0 (11 bytes, 6 insns) */
void f_12c125b0(void) {
  FTRACE(0x12c125b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c125b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c125b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c125b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c125b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c125b9 pop ebp */
  EBP = (pop32());
  /* 12c125ba ret  */
  ESPCHK(0x12c125b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x12c125c0 (147 bytes, 43 insns) */
void f_12c125c0(void) {
  FTRACE(0x12c125c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c125c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c125c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c125c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c125c4 cmp dword ptr [0x12c2e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c125cb jne 0x12c125e7 */
  if (!C.zf) goto L_12c125e7;
  /* 12c125cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c125d1 jl 0x12c125e2 */
  if ((C.sf!=C.of)) goto L_12c125e2;
  /* 12c125d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c125d7 jg 0x12c125e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c125e2;
  /* 12c125d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c125dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c125df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c125e2:;
  /* 12c125e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c125e5 jmp 0x12c1264f */
  goto L_12c1264f;
L_12c125e7:;
  /* 12c125e7 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c125ec call dword ptr [0x12c302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a4))), 0x12c125f2u);
  /* 12c125f2 cmp dword ptr [0x12c2e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c125f9 je 0x12c12619 */
  if (C.zf) goto L_12c12619;
  /* 12c125fb push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c12600 call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c12606u);
  /* 12c12606 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c12608 call 0x12c06820 */
  push32(0x12c1260du); f_12c06820();
  /* 12c1260d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c12617 jmp 0x12c12620 */
  goto L_12c12620;
L_12c12619:;
  /* 12c12619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c12620:;
  /* 12c12620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12623 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12624 call 0x12c12660 */
  push32(0x12c12629u); f_12c12660();
  /* 12c12629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1262c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c1262f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12633 je 0x12c12641 */
  if (C.zf) goto L_12c12641;
  /* 12c12635 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c12637 call 0x12c068c0 */
  push32(0x12c1263cu); f_12c068c0();
  /* 12c1263c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1263f jmp 0x12c1264c */
  goto L_12c1264c;
L_12c12641:;
  /* 12c12641 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c12646 call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c1264cu);
L_12c1264c:;
  /* 12c1264c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12c1264f:;
  /* 12c1264f mov esp, ebp */
  ESP = (EBP);
  /* 12c12651 pop ebp */
  EBP = (pop32());
  /* 12c12652 ret  */
  ESPCHK(0x12c125c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x12c12660 (299 bytes, 91 insns) */
void f_12c12660(void) {
  FTRACE(0x12c12660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12660 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12661 mov ebp, esp */
  EBP = (ESP);
  /* 12c12663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12666 cmp dword ptr [0x12c2e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1266d jne 0x12c1268c */
  if (!C.zf) goto L_12c1268c;
  /* 12c1266f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12673 jl 0x12c12684 */
  if ((C.sf!=C.of)) goto L_12c12684;
  /* 12c12675 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12679 jg 0x12c12684 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c12684;
  /* 12c1267b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1267e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12681 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c12684:;
  /* 12c12684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12687 jmp 0x12c12787 */
  goto L_12c12787;
L_12c1268c:;
  /* 12c1268c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12693 jge 0x12c126d3 */
  if ((C.sf==C.of)) goto L_12c126d3;
  /* 12c12695 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1269c jle 0x12c126b1 */
  if ((C.zf||C.sf!=C.of)) goto L_12c126b1;
  /* 12c1269e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c126a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c126a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c126a4 call 0x12c08e30 */
  push32(0x12c126a9u); f_12c08e30();
  /* 12c126a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c126ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c126af jmp 0x12c126c5 */
  goto L_12c126c5;
L_12c126b1:;
  /* 12c126b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c126b4 mov eax, dword ptr [0x12c2cc98] */
  EAX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c126b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c126bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c126bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c126c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c126c5:;
  /* 12c126c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c126c9 jne 0x12c126d3 */
  if (!C.zf) goto L_12c126d3;
  /* 12c126cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c126ce jmp 0x12c12787 */
  goto L_12c12787;
L_12c126d3:;
  /* 12c126d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c126d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c126d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c126df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c126e5 mov eax, dword ptr [0x12c2cc98] */
  EAX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c126ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c126ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c126f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c126f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c126f8 je 0x12c1271c */
  if (C.zf) goto L_12c1271c;
  /* 12c126fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c126fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c12700 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c12706 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12c12709 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c1270c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12c1270f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12c12713 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c1271a jmp 0x12c1272d */
  goto L_12c1272d;
L_12c1271c:;
  /* 12c1271c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c1271f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12c12722 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12c12726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12c1272d:;
  /* 12c1272d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c1272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12731 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c12733 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12c12736 push edx */
  push32((uint32_t)(EDX));
  /* 12c12737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1273a push eax */
  push32((uint32_t)(EAX));
  /* 12c1273b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c1273e push ecx */
  push32((uint32_t)(ECX));
  /* 12c1273f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c12744 mov edx, dword ptr [0x12c2e690] */
  EDX = (r32((uint32_t)(0x12c2e690)));
  /* 12c1274a push edx */
  push32((uint32_t)(EDX));
  /* 12c1274b call 0x12c0b210 */
  push32(0x12c12750u); f_12c0b210();
  /* 12c12750 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c12756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1275a jne 0x12c12761 */
  if (!C.zf) goto L_12c12761;
  /* 12c1275c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1275f jmp 0x12c12787 */
  goto L_12c12787;
L_12c12761:;
  /* 12c12761 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12765 jne 0x12c12771 */
  if (!C.zf) goto L_12c12771;
  /* 12c12767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1276a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c1276f jmp 0x12c12787 */
  goto L_12c12787;
L_12c12771:;
  /* 12c12771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12779 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12c1277c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c12782 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c12785 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12c12787:;
  /* 12c12787 mov esp, ebp */
  ESP = (EBP);
  /* 12c12789 pop ebp */
  EBP = (pop32());
  /* 12c1278a ret  */
  ESPCHK(0x12c12660u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12c12790 (52 bytes, 19 insns) */
void f_12c12790(void) {
  FTRACE(0x12c12790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12790 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c12794 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c12798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c1279a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c1279e jne 0x12c127a9 */
  if (!C.zf) goto L_12c127a9;
  /* 12c127a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c127a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c127a6 ret 0x10 */
  ESPCHK(0x12c12790u, _esp0);
  ESP += 20; return;
L_12c127a9:;
  /* 12c127a9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c127aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c127ac mov ebx, eax */
  EBX = (EAX);
  /* 12c127ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c127b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c127b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c127b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c127bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c127be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c127c0 pop ebx */
  EBX = (pop32());
  /* 12c127c1 ret 0x10 */
  ESPCHK(0x12c12790u, _esp0);
  ESP += 20; return;
}

/* FUN_100127d0 @ 0x12c127d0 (46 bytes, 18 insns) */
void f_12c127d0(void) {
  FTRACE(0x12c127d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c127d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c127d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c127d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c127d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c127d6 call 0x12c06820 */
  push32(0x12c127dbu); f_12c06820();
  /* 12c127db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c127de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c127e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c127e2 call 0x12c12800 */
  push32(0x12c127e7u); f_12c12800();
  /* 12c127e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c127ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c127ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c127ef call 0x12c068c0 */
  push32(0x12c127f4u); f_12c068c0();
  /* 12c127f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c127f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c127fa mov esp, ebp */
  ESP = (EBP);
  /* 12c127fc pop ebp */
  EBP = (pop32());
  /* 12c127fd ret  */
  ESPCHK(0x12c127d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12c12800 (198 bytes, 69 insns) */
void f_12c12800(void) {
  FTRACE(0x12c12800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12800 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12801 mov ebp, esp */
  EBP = (ESP);
  /* 12c12803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12806 mov eax, dword ptr [0x12c2e4ac] */
  EAX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c1280b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c1280e cmp dword ptr [0x12c2ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12815 jne 0x12c1281e */
  if (!C.zf) goto L_12c1281e;
  /* 12c12817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12819 jmp 0x12c128c2 */
  goto L_12c128c2;
L_12c1281e:;
  /* 12c1281e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12822 jne 0x12c12846 */
  if (!C.zf) goto L_12c12846;
  /* 12c12824 cmp dword ptr [0x12c2e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1282b je 0x12c12846 */
  if (C.zf) goto L_12c12846;
  /* 12c1282d call 0x12c12920 */
  push32(0x12c12832u); f_12c12920();
  /* 12c12832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12834 je 0x12c1283d */
  if (C.zf) goto L_12c1283d;
  /* 12c12836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12838 jmp 0x12c128c2 */
  goto L_12c128c2;
L_12c1283d:;
  /* 12c1283d mov ecx, dword ptr [0x12c2e4ac] */
  ECX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c12843 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c12846:;
  /* 12c12846 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1284a je 0x12c128c0 */
  if (C.zf) goto L_12c128c0;
  /* 12c1284c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12850 je 0x12c128c0 */
  if (C.zf) goto L_12c128c0;
  /* 12c12852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12855 push edx */
  push32((uint32_t)(EDX));
  /* 12c12856 call 0x12c05c50 */
  push32(0x12c1285bu); f_12c05c50();
  /* 12c1285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1285e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c12861:;
  /* 12c12861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12864 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12867 je 0x12c128c0 */
  if (C.zf) goto L_12c128c0;
  /* 12c12869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1286c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c1286e push edx */
  push32((uint32_t)(EDX));
  /* 12c1286f call 0x12c05c50 */
  push32(0x12c12874u); f_12c05c50();
  /* 12c12874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1287a jbe 0x12c128b5 */
  if ((C.cf||C.zf)) goto L_12c128b5;
  /* 12c1287c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1287f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c12881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12884 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12c12888 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1288b jne 0x12c128b5 */
  if (!C.zf) goto L_12c128b5;
  /* 12c1288d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12890 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12894 push edx */
  push32((uint32_t)(EDX));
  /* 12c12895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c1289a push ecx */
  push32((uint32_t)(ECX));
  /* 12c1289b call 0x12c128d0 */
  push32(0x12c128a0u); f_12c128d0();
  /* 12c128a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c128a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c128a5 jne 0x12c128b5 */
  if (!C.zf) goto L_12c128b5;
  /* 12c128a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c128aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c128ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c128af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12c128b3 jmp 0x12c128c2 */
  goto L_12c128c2;
L_12c128b5:;
  /* 12c128b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c128b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c128bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c128be jmp 0x12c12861 */
  goto L_12c12861;
L_12c128c0:;
  /* 12c128c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c128c2:;
  /* 12c128c2 mov esp, ebp */
  ESP = (EBP);
  /* 12c128c4 pop ebp */
  EBP = (pop32());
  /* 12c128c5 ret  */
  ESPCHK(0x12c12800u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12c128d0 (79 bytes, 32 insns) */
void f_12c128d0(void) {
  FTRACE(0x12c128d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c128d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c128d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c128d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c128d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c128d8 jne 0x12c128de */
  if (!C.zf) goto L_12c128de;
  /* 12c128da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c128dc jmp 0x12c1291b */
  goto L_12c1291b;
L_12c128de:;
  /* 12c128de mov eax, dword ptr [0x12c2fb64] */
  EAX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c128e3 push eax */
  push32((uint32_t)(EAX));
  /* 12c128e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c128e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c128e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c128eb push edx */
  push32((uint32_t)(EDX));
  /* 12c128ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c128ef push eax */
  push32((uint32_t)(EAX));
  /* 12c128f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c128f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c128f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c128f6 mov edx, dword ptr [0x12c2fe04] */
  EDX = (r32((uint32_t)(0x12c2fe04)));
  /* 12c128fc push edx */
  push32((uint32_t)(EDX));
  /* 12c128fd call 0x12c129d0 */
  push32(0x12c12902u); f_12c129d0();
  /* 12c12902 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c12908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1290c jne 0x12c12915 */
  if (!C.zf) goto L_12c12915;
  /* 12c1290e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12c12913 jmp 0x12c1291b */
  goto L_12c1291b;
L_12c12915:;
  /* 12c12915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12918 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c1291b:;
  /* 12c1291b mov esp, ebp */
  ESP = (EBP);
  /* 12c1291d pop ebp */
  EBP = (pop32());
  /* 12c1291e ret  */
  ESPCHK(0x12c128d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x12c12920 (174 bytes, 66 insns) */
void f_12c12920(void) {
  FTRACE(0x12c12920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12920 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12921 mov ebp, esp */
  EBP = (ESP);
  /* 12c12923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12926 mov eax, dword ptr [0x12c2e4b4] */
  EAX = (r32((uint32_t)(0x12c2e4b4)));
  /* 12c1292b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c1292e:;
  /* 12c1292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12931 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12934 je 0x12c129c8 */
  if (C.zf) goto L_12c129c8;
  /* 12c1293a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1293c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1293e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12940 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12942 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c12944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12947 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c12949 push eax */
  push32((uint32_t)(EAX));
  /* 12c1294a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1294c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c1294e call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c12954u);
  /* 12c12954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c12957 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1295b jne 0x12c12962 */
  if (!C.zf) goto L_12c12962;
  /* 12c1295d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12960 jmp 0x12c129ca */
  goto L_12c129ca;
L_12c12962:;
  /* 12c12962 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c12964 push 0x12c2a894 */
  push32((uint32_t)(0x12c2a894u));
  /* 12c12969 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c1296b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1296e push ecx */
  push32((uint32_t)(ECX));
  /* 12c1296f call 0x12c02e20 */
  push32(0x12c12974u); f_12c02e20();
  /* 12c12974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c1297a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1297e jne 0x12c12985 */
  if (!C.zf) goto L_12c12985;
  /* 12c12980 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12983 jmp 0x12c129ca */
  goto L_12c129ca;
L_12c12985:;
  /* 12c12985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1298c push edx */
  push32((uint32_t)(EDX));
  /* 12c1298d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12990 push eax */
  push32((uint32_t)(EAX));
  /* 12c12991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c12993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c12998 push edx */
  push32((uint32_t)(EDX));
  /* 12c12999 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c1299b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c1299d call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c129a3u);
  /* 12c129a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c129a5 jne 0x12c129ac */
  if (!C.zf) goto L_12c129ac;
  /* 12c129a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c129aa jmp 0x12c129ca */
  goto L_12c129ca;
L_12c129ac:;
  /* 12c129ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12c129ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c129b1 push eax */
  push32((uint32_t)(EAX));
  /* 12c129b2 call 0x12c12e20 */
  push32(0x12c129b7u); f_12c12e20();
  /* 12c129b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c129ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c129bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c129c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c129c3 jmp 0x12c1292e */
  goto L_12c1292e;
L_12c129c8:;
  /* 12c129c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c129ca:;
  /* 12c129ca mov esp, ebp */
  ESP = (EBP);
  /* 12c129cc pop ebp */
  EBP = (pop32());
  /* 12c129cd ret  */
  ESPCHK(0x12c12920u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x12c129d0 (970 bytes, 340 insns) */
void f_12c129d0(void) {
  FTRACE(0x12c129d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c129d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c129d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c129d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c129d5 push 0x12c2a8e8 */
  push32((uint32_t)(0x12c2a8e8u));
  /* 12c129da push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c129df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c129e5 push eax */
  push32((uint32_t)(EAX));
  /* 12c129e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c129ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c129f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c129f1 push esi */
  push32((uint32_t)(ESI));
  /* 12c129f2 push edi */
  push32((uint32_t)(EDI));
  /* 12c129f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c129f6 cmp dword ptr [0x12c2e7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c129fd jne 0x12c12a56 */
  if (!C.zf) goto L_12c12a56;
  /* 12c129ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12a01 push 0x12c29f44 */
  push32((uint32_t)(0x12c29f44u));
  /* 12c12a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12a08 push 0x12c29f44 */
  push32((uint32_t)(0x12c29f44u));
  /* 12c12a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12a11 call dword ptr [0x12c30248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30248))), 0x12c12a17u);
  /* 12c12a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12a19 je 0x12c12a27 */
  if (C.zf) goto L_12c12a27;
  /* 12c12a1b mov dword ptr [0x12c2e7f4], 1 */
  w32((uint32_t)(0x12c2e7f4), (0x1u));
  /* 12c12a25 jmp 0x12c12a56 */
  goto L_12c12a56;
L_12c12a27:;
  /* 12c12a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12a29 push 0x12c29f40 */
  push32((uint32_t)(0x12c29f40u));
  /* 12c12a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12a30 push 0x12c29f40 */
  push32((uint32_t)(0x12c29f40u));
  /* 12c12a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12a39 call dword ptr [0x12c30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30254))), 0x12c12a3fu);
  /* 12c12a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12a41 je 0x12c12a4f */
  if (C.zf) goto L_12c12a4f;
  /* 12c12a43 mov dword ptr [0x12c2e7f4], 2 */
  w32((uint32_t)(0x12c2e7f4), (0x2u));
  /* 12c12a4d jmp 0x12c12a56 */
  goto L_12c12a56;
L_12c12a4f:;
  /* 12c12a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12a51 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12a56:;
  /* 12c12a56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12a5a jle 0x12c12a6f */
  if ((C.zf||C.sf!=C.of)) goto L_12c12a6f;
  /* 12c12a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12a5f push eax */
  push32((uint32_t)(EAX));
  /* 12c12a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12a64 call 0x12c12dd0 */
  push32(0x12c12a69u); f_12c12dd0();
  /* 12c12a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12a6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c12a6f:;
  /* 12c12a6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12a73 jle 0x12c12a88 */
  if ((C.zf||C.sf!=C.of)) goto L_12c12a88;
  /* 12c12a75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c12a78 push edx */
  push32((uint32_t)(EDX));
  /* 12c12a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12a7c push eax */
  push32((uint32_t)(EAX));
  /* 12c12a7d call 0x12c12dd0 */
  push32(0x12c12a82u); f_12c12dd0();
  /* 12c12a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12a85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12c12a88:;
  /* 12c12a88 cmp dword ptr [0x12c2e7f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12a8f jne 0x12c12ab4 */
  if (!C.zf) goto L_12c12ab4;
  /* 12c12a91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c12a94 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12a98 push edx */
  push32((uint32_t)(EDX));
  /* 12c12a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12a9c push eax */
  push32((uint32_t)(EAX));
  /* 12c12a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12aa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12aa4 push edx */
  push32((uint32_t)(EDX));
  /* 12c12aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12c12aa9 call dword ptr [0x12c30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30254))), 0x12c12aafu);
  /* 12c12aaf jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12ab4:;
  /* 12c12ab4 cmp dword ptr [0x12c2e7f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e7f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12abb jne 0x12c12db2 */
  if (!C.zf) goto L_12c12db2;
  /* 12c12ac1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ac5 jne 0x12c12ad0 */
  if (!C.zf) goto L_12c12ad0;
  /* 12c12ac7 mov ecx, dword ptr [0x12c2e6a0] */
  ECX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c12acd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12c12ad0:;
  /* 12c12ad0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ad4 je 0x12c12ae0 */
  if (C.zf) goto L_12c12ae0;
  /* 12c12ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ada jne 0x12c12c5c */
  if (!C.zf) goto L_12c12c5c;
L_12c12ae0:;
  /* 12c12ae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12ae3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ae6 jne 0x12c12af2 */
  if (!C.zf) goto L_12c12af2;
  /* 12c12ae8 mov eax, 2 */
  EAX = (0x2u);
  /* 12c12aed jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12af2:;
  /* 12c12af2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12af6 jle 0x12c12b02 */
  if ((C.zf||C.sf!=C.of)) goto L_12c12b02;
  /* 12c12af8 mov eax, 1 */
  EAX = (0x1u);
  /* 12c12afd jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12b02:;
  /* 12c12b02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b06 jle 0x12c12b12 */
  if ((C.zf||C.sf!=C.of)) goto L_12c12b12;
  /* 12c12b08 mov eax, 3 */
  EAX = (0x3u);
  /* 12c12b0d jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12b12:;
  /* 12c12b12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12c12b15 push eax */
  push32((uint32_t)(EAX));
  /* 12c12b16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c12b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12b1a call dword ptr [0x12c3033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3033c))), 0x12c12b20u);
  /* 12c12b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12b22 jne 0x12c12b2b */
  if (!C.zf) goto L_12c12b2b;
  /* 12c12b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12b26 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12b2b:;
  /* 12c12b2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b2f jne 0x12c12b37 */
  if (!C.zf) goto L_12c12b37;
  /* 12c12b31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b35 je 0x12c12b64 */
  if (C.zf) goto L_12c12b64;
L_12c12b37:;
  /* 12c12b37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b3b jne 0x12c12b43 */
  if (!C.zf) goto L_12c12b43;
  /* 12c12b3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b41 je 0x12c12b64 */
  if (C.zf) goto L_12c12b64;
L_12c12b43:;
  /* 12c12b43 push 0x12c2a8a8 */
  push32((uint32_t)(0x12c2a8a8u));
  /* 12c12b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12b4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12c12b4f push 0x12c2a8a0 */
  push32((uint32_t)(0x12c2a8a0u));
  /* 12c12b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c12b56 call 0x12c01ee0 */
  push32(0x12c12b5bu); f_12c01ee0();
  /* 12c12b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b61 jne 0x12c12b64 */
  if (!C.zf) goto L_12c12b64;
  /* 12c12b63 int3  */
  x86_unimpl("int3 @ 0x12c12b63");
L_12c12b64:;
  /* 12c12b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c12b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12b68 jne 0x12c12b2b */
  if (!C.zf) goto L_12c12b2b;
  /* 12c12b6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b6e jle 0x12c12be3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c12be3;
  /* 12c12b70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12b74 jae 0x12c12b80 */
  if (!C.cf) goto L_12c12b80;
  /* 12c12b76 mov eax, 3 */
  EAX = (0x3u);
  /* 12c12b7b jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12b80:;
  /* 12c12b80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12c12b83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12c12b86 jmp 0x12c12b91 */
  goto L_12c12b91;
L_12c12b88:;
  /* 12c12b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12b8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12b8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12c12b91:;
  /* 12c12b91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12b96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c12b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12b9a je 0x12c12bd9 */
  if (C.zf) goto L_12c12bd9;
  /* 12c12b9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c12ba1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c12ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12ba6 je 0x12c12bd9 */
  if (C.zf) goto L_12c12bd9;
  /* 12c12ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c12bad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c12baf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12bb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c12bb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12bb8 jl 0x12c12bd7 */
  if ((C.sf!=C.of)) goto L_12c12bd7;
  /* 12c12bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c12bbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c12bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c12bc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c12bc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12bcb jg 0x12c12bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c12bd7;
  /* 12c12bcd mov eax, 2 */
  EAX = (0x2u);
  /* 12c12bd2 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12bd7:;
  /* 12c12bd7 jmp 0x12c12b88 */
  goto L_12c12b88;
L_12c12bd9:;
  /* 12c12bd9 mov eax, 3 */
  EAX = (0x3u);
  /* 12c12bde jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12be3:;
  /* 12c12be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12be7 jle 0x12c12c5c */
  if ((C.zf||C.sf!=C.of)) goto L_12c12c5c;
  /* 12c12be9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12bed jae 0x12c12bf9 */
  if (!C.cf) goto L_12c12bf9;
  /* 12c12bef mov eax, 1 */
  EAX = (0x1u);
  /* 12c12bf4 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12bf9:;
  /* 12c12bf9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12c12bfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12c12bff jmp 0x12c12c0a */
  goto L_12c12c0a;
L_12c12c01:;
  /* 12c12c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12c04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12c07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12c12c0a:;
  /* 12c12c0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c12c0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c12c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12c13 je 0x12c12c52 */
  if (C.zf) goto L_12c12c52;
  /* 12c12c15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12c18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c12c1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c12c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c12c1f je 0x12c12c52 */
  if (C.zf) goto L_12c12c52;
  /* 12c12c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12c26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c12c28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12c2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c12c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c12c2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12c31 jl 0x12c12c50 */
  if ((C.sf!=C.of)) goto L_12c12c50;
  /* 12c12c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c12c38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c12c3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12c12c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12c3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c12c42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12c44 jg 0x12c12c50 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c12c50;
  /* 12c12c46 mov eax, 2 */
  EAX = (0x2u);
  /* 12c12c4b jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12c50:;
  /* 12c12c50 jmp 0x12c12c01 */
  goto L_12c12c01;
L_12c12c52:;
  /* 12c12c52 mov eax, 1 */
  EAX = (0x1u);
  /* 12c12c57 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12c5c:;
  /* 12c12c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12c60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12c67 push edx */
  push32((uint32_t)(EDX));
  /* 12c12c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c12c6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c12c6d push eax */
  push32((uint32_t)(EAX));
  /* 12c12c6e call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c12c74u);
  /* 12c12c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c12c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12c7b jne 0x12c12c84 */
  if (!C.zf) goto L_12c12c84;
  /* 12c12c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12c7f jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12c84:;
  /* 12c12c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c12c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c12c8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c12c90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12c93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c12c95 call 0x12c05fc0 */
  push32(0x12c12c9au); f_12c05fc0();
  /* 12c12c9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12c12c9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c12ca0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12c12ca3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c12ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c12cad jmp 0x12c12cc6 */
  goto L_12c12cc6;
  /* 12c12caf mov eax, 1 */
  EAX = (0x1u);
  /* 12c12cb4 ret  */
  ESPCHK(0x12c129d0u, _esp0);
  ESP += 4; return;
  /* 12c12cb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12cb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c12cbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c12cc6:;
  /* 12c12cc6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12cca jne 0x12c12cd3 */
  if (!C.zf) goto L_12c12cd3;
  /* 12c12ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12cce jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12cd3:;
  /* 12c12cd3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c12cd6 push edx */
  push32((uint32_t)(EDX));
  /* 12c12cd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c12cda push eax */
  push32((uint32_t)(EAX));
  /* 12c12cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c12cde push ecx */
  push32((uint32_t)(ECX));
  /* 12c12cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c12ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12c12ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12ce5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c12ce8 push eax */
  push32((uint32_t)(EAX));
  /* 12c12ce9 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c12cefu);
  /* 12c12cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12cf1 jne 0x12c12cfa */
  if (!C.zf) goto L_12c12cfa;
  /* 12c12cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12cf5 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12cfa:;
  /* 12c12cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c12cfe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c12d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12d02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12d05 push edx */
  push32((uint32_t)(EDX));
  /* 12c12d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c12d08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c12d0b push eax */
  push32((uint32_t)(EAX));
  /* 12c12d0c call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c12d12u);
  /* 12c12d12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c12d15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12d19 jne 0x12c12d22 */
  if (!C.zf) goto L_12c12d22;
  /* 12c12d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12d1d jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12d22:;
  /* 12c12d22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c12d29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c12d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c12d33 call 0x12c05fc0 */
  push32(0x12c12d38u); f_12c05fc0();
  /* 12c12d38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12c12d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c12d3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12c12d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c12d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c12d4b jmp 0x12c12d64 */
  goto L_12c12d64;
  /* 12c12d4d mov eax, 1 */
  EAX = (0x1u);
  /* 12c12d52 ret  */
  ESPCHK(0x12c129d0u, _esp0);
  ESP += 4; return;
  /* 12c12d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12d56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12c12d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c12d64:;
  /* 12c12d64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12d68 jne 0x12c12d6e */
  if (!C.zf) goto L_12c12d6e;
  /* 12c12d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12d6c jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12d6e:;
  /* 12c12d6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12d71 push edx */
  push32((uint32_t)(EDX));
  /* 12c12d72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c12d75 push eax */
  push32((uint32_t)(EAX));
  /* 12c12d76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c12d79 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12d7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c12d7d push edx */
  push32((uint32_t)(EDX));
  /* 12c12d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c12d80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c12d83 push eax */
  push32((uint32_t)(EAX));
  /* 12c12d84 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c12d8au);
  /* 12c12d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12d8c jne 0x12c12d92 */
  if (!C.zf) goto L_12c12d92;
  /* 12c12d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12d90 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12d92:;
  /* 12c12d92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c12d95 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c12d99 push edx */
  push32((uint32_t)(EDX));
  /* 12c12d9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c12d9d push eax */
  push32((uint32_t)(EAX));
  /* 12c12d9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c12da1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12da5 push edx */
  push32((uint32_t)(EDX));
  /* 12c12da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12da9 push eax */
  push32((uint32_t)(EAX));
  /* 12c12daa call dword ptr [0x12c30248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30248))), 0x12c12db0u);
  /* 12c12db0 jmp 0x12c12db4 */
  goto L_12c12db4;
L_12c12db2:;
  /* 12c12db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c12db4:;
  /* 12c12db4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12c12db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c12dba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c12dc1 pop edi */
  EDI = (pop32());
  /* 12c12dc2 pop esi */
  ESI = (pop32());
  /* 12c12dc3 pop ebx */
  EBX = (pop32());
  /* 12c12dc4 mov esp, ebp */
  ESP = (EBP);
  /* 12c12dc6 pop ebp */
  EBP = (pop32());
  /* 12c12dc7 ret  */
  ESPCHK(0x12c129d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x12c12dd0 (80 bytes, 32 insns) */
void f_12c12dd0(void) {
  FTRACE(0x12c12dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c12dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c12dd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c12ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12ddf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c12de2:;
  /* 12c12de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12de8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c12dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12df0 je 0x12c12e07 */
  if (C.zf) goto L_12c12e07;
  /* 12c12df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12df5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c12df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12dfa je 0x12c12e07 */
  if (C.zf) goto L_12c12e07;
  /* 12c12dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12e02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c12e05 jmp 0x12c12de2 */
  goto L_12c12de2;
L_12c12e07:;
  /* 12c12e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12e0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c12e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c12e0f jne 0x12c12e19 */
  if (!C.zf) goto L_12c12e19;
  /* 12c12e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c12e14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12e17 jmp 0x12c12e1c */
  goto L_12c12e1c;
L_12c12e19:;
  /* 12c12e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12c12e1c:;
  /* 12c12e1c mov esp, ebp */
  ESP = (EBP);
  /* 12c12e1e pop ebp */
  EBP = (pop32());
  /* 12c12e1f ret  */
  ESPCHK(0x12c12dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x12c12e20 (736 bytes, 224 insns) */
void f_12c12e20(void) {
  FTRACE(0x12c12e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c12e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c12e21 mov ebp, esp */
  EBP = (ESP);
  /* 12c12e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12e26 push esi */
  push32((uint32_t)(ESI));
  /* 12c12e27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e2b je 0x12c12e4c */
  if (C.zf) goto L_12c12e4c;
  /* 12c12e2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c12e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12e32 push eax */
  push32((uint32_t)(EAX));
  /* 12c12e33 call 0x12c13270 */
  push32(0x12c12e38u); f_12c13270();
  /* 12c12e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c12e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e42 je 0x12c12e4c */
  if (C.zf) goto L_12c12e4c;
  /* 12c12e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12e47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e4a jne 0x12c12e54 */
  if (!C.zf) goto L_12c12e54;
L_12c12e4c:;
  /* 12c12e4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12e4f jmp 0x12c130fb */
  goto L_12c130fb;
L_12c12e54:;
  /* 12c12e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12e57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c12e5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c12e5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c12e60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c12e63 mov ecx, dword ptr [0x12c2e4ac] */
  ECX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c12e69 cmp ecx, dword ptr [0x12c2e4b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2e4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e6f jne 0x12c12e85 */
  if (!C.zf) goto L_12c12e85;
  /* 12c12e71 mov edx, dword ptr [0x12c2e4ac] */
  EDX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c12e77 push edx */
  push32((uint32_t)(EDX));
  /* 12c12e78 call 0x12c13180 */
  push32(0x12c12e7du); f_12c13180();
  /* 12c12e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12e80 mov dword ptr [0x12c2e4ac], eax */
  w32((uint32_t)(0x12c2e4ac), (EAX));
L_12c12e85:;
  /* 12c12e85 cmp dword ptr [0x12c2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e8c jne 0x12c12f45 */
  if (!C.zf) goto L_12c12f45;
  /* 12c12e92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e96 je 0x12c12eb7 */
  if (C.zf) goto L_12c12eb7;
  /* 12c12e98 cmp dword ptr [0x12c2e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12e9f je 0x12c12eb7 */
  if (C.zf) goto L_12c12eb7;
  /* 12c12ea1 call 0x12c12920 */
  push32(0x12c12ea6u); f_12c12920();
  /* 12c12ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c12ea8 je 0x12c12eb2 */
  if (C.zf) goto L_12c12eb2;
  /* 12c12eaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12ead jmp 0x12c130fb */
  goto L_12c130fb;
L_12c12eb2:;
  /* 12c12eb2 jmp 0x12c12f45 */
  goto L_12c12f45;
L_12c12eb7:;
  /* 12c12eb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ebb je 0x12c12ec4 */
  if (C.zf) goto L_12c12ec4;
  /* 12c12ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c12ebf jmp 0x12c130fb */
  goto L_12c130fb;
L_12c12ec4:;
  /* 12c12ec4 cmp dword ptr [0x12c2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12ecb jne 0x12c12f04 */
  if (!C.zf) goto L_12c12f04;
  /* 12c12ecd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12c12ed2 push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c12ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c12ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c12edb call 0x12c02e20 */
  push32(0x12c12ee0u); f_12c02e20();
  /* 12c12ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12ee3 mov dword ptr [0x12c2e4ac], eax */
  w32((uint32_t)(0x12c2e4ac), (EAX));
  /* 12c12ee8 cmp dword ptr [0x12c2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12eef jne 0x12c12ef9 */
  if (!C.zf) goto L_12c12ef9;
  /* 12c12ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12ef4 jmp 0x12c130fb */
  goto L_12c130fb;
L_12c12ef9:;
  /* 12c12ef9 mov eax, dword ptr [0x12c2e4ac] */
  EAX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c12efe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c12f04:;
  /* 12c12f04 cmp dword ptr [0x12c2e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12f0b jne 0x12c12f45 */
  if (!C.zf) goto L_12c12f45;
  /* 12c12f0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12c12f12 push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c12f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c12f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c12f1b call 0x12c02e20 */
  push32(0x12c12f20u); f_12c02e20();
  /* 12c12f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12f23 mov dword ptr [0x12c2e4b4], eax */
  w32((uint32_t)(0x12c2e4b4), (EAX));
  /* 12c12f28 cmp dword ptr [0x12c2e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12f2f jne 0x12c12f39 */
  if (!C.zf) goto L_12c12f39;
  /* 12c12f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c12f34 jmp 0x12c130fb */
  goto L_12c130fb;
L_12c12f39:;
  /* 12c12f39 mov ecx, dword ptr [0x12c2e4b4] */
  ECX = (r32((uint32_t)(0x12c2e4b4)));
  /* 12c12f3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12c12f45:;
  /* 12c12f45 mov edx, dword ptr [0x12c2e4ac] */
  EDX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c12f4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c12f4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c12f51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c12f54 push eax */
  push32((uint32_t)(EAX));
  /* 12c12f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12f58 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12f59 call 0x12c13100 */
  push32(0x12c12f5eu); f_12c13100();
  /* 12c12f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c12f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12f68 jl 0x12c13001 */
  if ((C.sf!=C.of)) goto L_12c13001;
  /* 12c12f6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12f71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12f74 je 0x12c13001 */
  if (C.zf) goto L_12c13001;
  /* 12c12f7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12f7e je 0x12c12ff3 */
  if (C.zf) goto L_12c12ff3;
  /* 12c12f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c12f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12f88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c12f8b push edx */
  push32((uint32_t)(EDX));
  /* 12c12f8c call 0x12c038b0 */
  push32(0x12c12f91u); f_12c038b0();
  /* 12c12f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12f94 jmp 0x12c12f9f */
  goto L_12c12f9f;
L_12c12f96:;
  /* 12c12f96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c12f9f:;
  /* 12c12f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12fa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12fa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12fa9 je 0x12c12fc0 */
  if (C.zf) goto L_12c12fc0;
  /* 12c12fab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12fb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12fb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12c12fbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12c12fbe jmp 0x12c12f96 */
  goto L_12c12f96;
L_12c12fc0:;
  /* 12c12fc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12c12fc5 push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c12fca push 2 */
  push32((uint32_t)(0x2u));
  /* 12c12fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12fcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c12fd2 push eax */
  push32((uint32_t)(EAX));
  /* 12c12fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c12fd7 call 0x12c032b0 */
  push32(0x12c12fdcu); f_12c032b0();
  /* 12c12fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c12fdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c12fe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c12fe6 je 0x12c12ff1 */
  if (C.zf) goto L_12c12ff1;
  /* 12c12fe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12feb mov dword ptr [0x12c2e4ac], edx */
  w32((uint32_t)(0x12c2e4ac), (EDX));
L_12c12ff1:;
  /* 12c12ff1 jmp 0x12c12fff */
  goto L_12c12fff;
L_12c12ff3:;
  /* 12c12ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c12ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c12ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c12ffc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12c12fff:;
  /* 12c12fff jmp 0x12c13074 */
  goto L_12c13074;
L_12c13001:;
  /* 12c13001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13005 jne 0x12c1306d */
  if (!C.zf) goto L_12c1306d;
  /* 12c13007 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1300b jge 0x12c13015 */
  if ((C.sf==C.of)) goto L_12c13015;
  /* 12c1300d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13010 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c13012 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c13015:;
  /* 12c13015 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12c1301a push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c1301f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c13021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13024 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12c1302b push edx */
  push32((uint32_t)(EDX));
  /* 12c1302c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1302f push eax */
  push32((uint32_t)(EAX));
  /* 12c13030 call 0x12c032b0 */
  push32(0x12c13035u); f_12c032b0();
  /* 12c13035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13038 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c1303b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1303f jne 0x12c13049 */
  if (!C.zf) goto L_12c13049;
  /* 12c13041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c13044 jmp 0x12c130fb */
  goto L_12c130fb;
L_12c13049:;
  /* 12c13049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1304c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13052 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12c13055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1305b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12c13063 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c13066 mov dword ptr [0x12c2e4ac], eax */
  w32((uint32_t)(0x12c2e4ac), (EAX));
  /* 12c1306b jmp 0x12c13074 */
  goto L_12c13074;
L_12c1306d:;
  /* 12c1306d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1306f jmp 0x12c130fb */
  goto L_12c130fb;
L_12c13074:;
  /* 12c13074 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13078 je 0x12c130f9 */
  if (C.zf) goto L_12c130f9;
  /* 12c1307a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12c1307f push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c13084 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c13086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13089 push ecx */
  push32((uint32_t)(ECX));
  /* 12c1308a call 0x12c05c50 */
  push32(0x12c1308fu); f_12c05c50();
  /* 12c1308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13092 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13095 push eax */
  push32((uint32_t)(EAX));
  /* 12c13096 call 0x12c02e20 */
  push32(0x12c1309bu); f_12c02e20();
  /* 12c1309b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1309e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c130a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c130a5 je 0x12c130f9 */
  if (C.zf) goto L_12c130f9;
  /* 12c130a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c130aa push edx */
  push32((uint32_t)(EDX));
  /* 12c130ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c130ae push eax */
  push32((uint32_t)(EAX));
  /* 12c130af call 0x12c05dd0 */
  push32(0x12c130b4u); f_12c05dd0();
  /* 12c130b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c130b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c130ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c130bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c130c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c130c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c130c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c130c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c130cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c130ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c130d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c130d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c130d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c130d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c130db not edx */
  EDX = (~(EDX));
  /* 12c130dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c130e0 push edx */
  push32((uint32_t)(EDX));
  /* 12c130e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c130e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c130e5 call dword ptr [0x12c30244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30244))), 0x12c130ebu);
  /* 12c130eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c130ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c130f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c130f1 call 0x12c038b0 */
  push32(0x12c130f6u); f_12c038b0();
  /* 12c130f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c130f9:;
  /* 12c130f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c130fb:;
  /* 12c130fb pop esi */
  ESI = (pop32());
  /* 12c130fc mov esp, ebp */
  ESP = (EBP);
  /* 12c130fe pop ebp */
  EBP = (pop32());
  /* 12c130ff ret  */
  ESPCHK(0x12c12e20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12c13100 (124 bytes, 47 insns) */
void f_12c13100(void) {
  FTRACE(0x12c13100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c13100 push ebp */
  push32((uint32_t)(EBP));
  /* 12c13101 mov ebp, esp */
  EBP = (ESP);
  /* 12c13103 push ecx */
  push32((uint32_t)(ECX));
  /* 12c13104 mov eax, dword ptr [0x12c2e4ac] */
  EAX = (r32((uint32_t)(0x12c2e4ac)));
  /* 12c13109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c1310c jmp 0x12c13117 */
  goto L_12c13117;
L_12c1310e:;
  /* 12c1310e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c13111 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13114 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c13117:;
  /* 12c13117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1311a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1311d je 0x12c1316a */
  if (C.zf) goto L_12c1316a;
  /* 12c1311f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c13122 push eax */
  push32((uint32_t)(EAX));
  /* 12c13123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c13126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c13128 push edx */
  push32((uint32_t)(EDX));
  /* 12c13129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1312c push eax */
  push32((uint32_t)(EAX));
  /* 12c1312d call 0x12c128d0 */
  push32(0x12c13132u); f_12c128d0();
  /* 12c13132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c13137 jne 0x12c13168 */
  if (!C.zf) goto L_12c13168;
  /* 12c13139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1313c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c1313e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c13141 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12c13145 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13148 je 0x12c1315a */
  if (C.zf) goto L_12c1315a;
  /* 12c1314a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1314d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c1314f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c13152 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12c13156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c13158 jne 0x12c13168 */
  if (!C.zf) goto L_12c13168;
L_12c1315a:;
  /* 12c1315a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1315d sub eax, dword ptr [0x12c2e4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2e4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c13163 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c13166 jmp 0x12c13178 */
  goto L_12c13178;
L_12c13168:;
  /* 12c13168 jmp 0x12c1310e */
  goto L_12c1310e;
L_12c1316a:;
  /* 12c1316a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c1316d sub eax, dword ptr [0x12c2e4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2e4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c13173 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c13176 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12c13178:;
  /* 12c13178 mov esp, ebp */
  ESP = (EBP);
  /* 12c1317a pop ebp */
  EBP = (pop32());
  /* 12c1317b ret  */
  ESPCHK(0x12c13100u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12c13180 (238 bytes, 80 insns) */
void f_12c13180(void) {
  FTRACE(0x12c13180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c13180 push ebp */
  push32((uint32_t)(EBP));
  /* 12c13181 mov ebp, esp */
  EBP = (ESP);
  /* 12c13183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c13186 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c1318d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c13193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13197 jne 0x12c131a0 */
  if (!C.zf) goto L_12c131a0;
  /* 12c13199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c1319b jmp 0x12c1326a */
  goto L_12c1326a;
L_12c131a0:;
  /* 12c131a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c131a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c131a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c131a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c131ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c131ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c131b0 je 0x12c131bd */
  if (C.zf) goto L_12c131bd;
  /* 12c131b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c131b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c131b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c131bb jmp 0x12c131a0 */
  goto L_12c131a0;
L_12c131bd:;
  /* 12c131bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12c131c2 push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c131c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c131c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c131cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12c131d3 push eax */
  push32((uint32_t)(EAX));
  /* 12c131d4 call 0x12c02e20 */
  push32(0x12c131d9u); f_12c02e20();
  /* 12c131d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c131dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c131df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c131e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c131e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c131e9 jne 0x12c131f5 */
  if (!C.zf) goto L_12c131f5;
  /* 12c131eb push 9 */
  push32((uint32_t)(0x9u));
  /* 12c131ed call 0x12c01d90 */
  push32(0x12c131f2u); f_12c01d90();
  /* 12c131f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c131f5:;
  /* 12c131f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c131f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c131fb:;
  /* 12c131fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c131fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13201 je 0x12c1325e */
  if (C.zf) goto L_12c1325e;
  /* 12c13203 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12c13208 push 0x12c2a900 */
  push32((uint32_t)(0x12c2a900u));
  /* 12c1320d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c1320f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c13212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c13214 push edx */
  push32((uint32_t)(EDX));
  /* 12c13215 call 0x12c05c50 */
  push32(0x12c1321au); f_12c05c50();
  /* 12c1321a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1321d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13220 push eax */
  push32((uint32_t)(EAX));
  /* 12c13221 call 0x12c02e20 */
  push32(0x12c13226u); f_12c02e20();
  /* 12c13226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1322c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c1322e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13234 je 0x12c1324a */
  if (C.zf) goto L_12c1324a;
  /* 12c13236 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c13239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c1323b push ecx */
  push32((uint32_t)(ECX));
  /* 12c1323c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c1323f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c13241 push eax */
  push32((uint32_t)(EAX));
  /* 12c13242 call 0x12c05dd0 */
  push32(0x12c13247u); f_12c05dd0();
  /* 12c13247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c1324a:;
  /* 12c1324a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c1324d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c13253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13256 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13259 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c1325c jmp 0x12c131fb */
  goto L_12c131fb;
L_12c1325e:;
  /* 12c1325e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c13261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c13267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c1326a:;
  /* 12c1326a mov esp, ebp */
  ESP = (EBP);
  /* 12c1326c pop ebp */
  EBP = (pop32());
  /* 12c1326d ret  */
  ESPCHK(0x12c13180u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x12c13270 (237 bytes, 81 insns) */
void f_12c13270(void) {
  FTRACE(0x12c13270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c13270 push ebp */
  push32((uint32_t)(EBP));
  /* 12c13271 mov ebp, esp */
  EBP = (ESP);
  /* 12c13273 push ecx */
  push32((uint32_t)(ECX));
  /* 12c13274 cmp dword ptr [0x12c2fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c1327b jne 0x12c13292 */
  if (!C.zf) goto L_12c13292;
  /* 12c1327d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c13280 push eax */
  push32((uint32_t)(EAX));
  /* 12c13281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13284 push ecx */
  push32((uint32_t)(ECX));
  /* 12c13285 call 0x12c13370 */
  push32(0x12c1328au); f_12c13370();
  /* 12c1328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1328d jmp 0x12c13359 */
  goto L_12c13359;
L_12c13292:;
  /* 12c13292 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c13294 call 0x12c06820 */
  push32(0x12c13299u); f_12c06820();
  /* 12c13299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1329c jmp 0x12c132a7 */
  goto L_12c132a7;
L_12c1329e:;
  /* 12c1329e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c132a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c132a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c132a7:;
  /* 12c132a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c132aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12c132ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12c132b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c132b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c132bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c132bd je 0x12c1333b */
  if (C.zf) goto L_12c1333b;
  /* 12c132bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c132c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c132c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c132c9 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c132cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c132d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c132d4 je 0x12c13326 */
  if (C.zf) goto L_12c13326;
  /* 12c132d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c132d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c132dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c132df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c132e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c132e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c132e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c132e8 jne 0x12c132f8 */
  if (!C.zf) goto L_12c132f8;
  /* 12c132ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c132ec call 0x12c068c0 */
  push32(0x12c132f1u); f_12c068c0();
  /* 12c132f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c132f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c132f6 jmp 0x12c13359 */
  goto L_12c13359;
L_12c132f8:;
  /* 12c132f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c132fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c13301 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c13304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c13309 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c1330b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c1330d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13310 jne 0x12c13324 */
  if (!C.zf) goto L_12c13324;
  /* 12c13312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c13314 call 0x12c068c0 */
  push32(0x12c13319u); f_12c068c0();
  /* 12c13319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c1331c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c1331f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c13322 jmp 0x12c13359 */
  goto L_12c13359;
L_12c13324:;
  /* 12c13324 jmp 0x12c13336 */
  goto L_12c13336;
L_12c13326:;
  /* 12c13326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c13329 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c1332f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13332 jne 0x12c13336 */
  if (!C.zf) goto L_12c13336;
  /* 12c13334 jmp 0x12c1333b */
  goto L_12c1333b;
L_12c13336:;
  /* 12c13336 jmp 0x12c1329e */
  goto L_12c1329e;
L_12c1333b:;
  /* 12c1333b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c1333d call 0x12c068c0 */
  push32(0x12c13342u); f_12c068c0();
  /* 12c13342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c13345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c13348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c1334d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c13350 jne 0x12c13357 */
  if (!C.zf) goto L_12c13357;
  /* 12c13352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c13355 jmp 0x12c13359 */
  goto L_12c13359;
L_12c13357:;
  /* 12c13357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c13359:;
  /* 12c13359 mov esp, ebp */
  ESP = (EBP);
  /* 12c1335b pop ebp */
  EBP = (pop32());
  /* 12c1335c ret  */
  ESPCHK(0x12c13270u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12c13370 (193 bytes, 87 insns) */
void f_12c13370(void) {
  FTRACE(0x12c13370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c13370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c13372 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c13376 push ebx */
  push32((uint32_t)(EBX));
  /* 12c13377 mov ebx, eax */
  EBX = (EAX);
  /* 12c13379 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c1337c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c13380 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c13386 je 0x12c1339b */
  if (C.zf) goto L_12c1339b;
L_12c13388:;
  /* 12c13388 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12c1338a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c1338b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c1338d je 0x12c13360 */
  if (C.zf) { jmp_ind(0x12c13360u); return; }
  /* 12c1338f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c13391 je 0x12c133e4 */
  if (C.zf) goto L_12c133e4;
  /* 12c13393 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c13399 jne 0x12c13388 */
  if (!C.zf) goto L_12c13388;
L_12c1339b:;
  /* 12c1339b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12c1339d push edi */
  push32((uint32_t)(EDI));
  /* 12c1339e mov eax, ebx */
  EAX = (EBX);
  /* 12c133a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12c133a3 push esi */
  push32((uint32_t)(ESI));
  /* 12c133a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12c133a6:;
  /* 12c133a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c133a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12c133ad mov eax, ecx */
  EAX = (ECX);
  /* 12c133af mov esi, edi */
  ESI = (EDI);
  /* 12c133b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12c133b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c133b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c133b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c133ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c133bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c133bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c133c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c133c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c133ca jne 0x12c133e8 */
  if (!C.zf) goto L_12c133e8;
  /* 12c133cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c133d1 je 0x12c133a6 */
  if (C.zf) goto L_12c133a6;
  /* 12c133d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c133d8 jne 0x12c133e2 */
  if (!C.zf) goto L_12c133e2;
  /* 12c133da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c133e0 jne 0x12c133a6 */
  if (!C.zf) goto L_12c133a6;
L_12c133e2:;
  /* 12c133e2 pop esi */
  ESI = (pop32());
  /* 12c133e3 pop edi */
  EDI = (pop32());
L_12c133e4:;
  /* 12c133e4 pop ebx */
  EBX = (pop32());
  /* 12c133e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c133e7 ret  */
  ESPCHK(0x12c13370u, _esp0);
  ESP += 4; return;
L_12c133e8:;
  /* 12c133e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12c133eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c133ed je 0x12c13425 */
  if (C.zf) goto L_12c13425;
  /* 12c133ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c133f1 je 0x12c133e2 */
  if (C.zf) goto L_12c133e2;
  /* 12c133f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c133f5 je 0x12c1341e */
  if (C.zf) goto L_12c1341e;
  /* 12c133f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c133f9 je 0x12c133e2 */
  if (C.zf) goto L_12c133e2;
  /* 12c133fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c133fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c13400 je 0x12c13417 */
  if (C.zf) goto L_12c13417;
  /* 12c13402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c13404 je 0x12c133e2 */
  if (C.zf) goto L_12c133e2;
  /* 12c13406 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c13408 je 0x12c13410 */
  if (C.zf) goto L_12c13410;
  /* 12c1340a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c1340c je 0x12c133e2 */
  if (C.zf) goto L_12c133e2;
  /* 12c1340e jmp 0x12c133a6 */
  goto L_12c133a6;
L_12c13410:;
  /* 12c13410 pop esi */
  ESI = (pop32());
  /* 12c13411 pop edi */
  EDI = (pop32());
  /* 12c13412 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12c13415 pop ebx */
  EBX = (pop32());
  /* 12c13416 ret  */
  ESPCHK(0x12c13370u, _esp0);
  ESP += 4; return;
L_12c13417:;
  /* 12c13417 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12c1341a pop esi */
  ESI = (pop32());
  /* 12c1341b pop edi */
  EDI = (pop32());
  /* 12c1341c pop ebx */
  EBX = (pop32());
  /* 12c1341d ret  */
  ESPCHK(0x12c13370u, _esp0);
  ESP += 4; return;
L_12c1341e:;
  /* 12c1341e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12c13421 pop esi */
  ESI = (pop32());
  /* 12c13422 pop edi */
  EDI = (pop32());
  /* 12c13423 pop ebx */
  EBX = (pop32());
  /* 12c13424 ret  */
  ESPCHK(0x12c13370u, _esp0);
  ESP += 4; return;
L_12c13425:;
  /* 12c13425 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12c13428 pop esi */
  ESI = (pop32());
  /* 12c13429 pop edi */
  EDI = (pop32());
  /* 12c1342a pop ebx */
  EBX = (pop32());
  /* 12c1342b ret  */
  ESPCHK(0x12c13370u, _esp0);
  ESP += 4; return;
  /* 12c1342c jmp dword ptr [0x12c30280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c30280)))); return;
}

/* RtlUnwind @ 0x12c1357c (6 bytes, 1 insns) */
void f_12c1357c(void) {
  FTRACE(0x12c1357cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c1357c jmp dword ptr [0x12c3027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c3027c)))); return;
}

