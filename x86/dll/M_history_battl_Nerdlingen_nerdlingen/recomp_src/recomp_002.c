#include "recomp.h"

/* FUN_1000f640 @ 0x12e3f640 (135 bytes, 48 insns) */
void f_12e3f640(void) {
  FTRACE(0x12e3f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f640 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f641 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f646 push esi */
  push32((uint32_t)(ESI));
  /* 12e3f647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f64a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f64f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f659 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12e3f65c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3f664 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3f666 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12e3f669 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f66a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3f66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3f66f push edx */
  push32((uint32_t)(EDX));
  /* 12e3f670 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f676u);
  /* 12e3f676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f678 jne 0x12e3f67e */
  if (!C.zf) goto L_12e3f67e;
  /* 12e3f67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f67c jmp 0x12e3f6c2 */
  goto L_12e3f6c2;
L_12e3f67e:;
  /* 12e3f67e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12e3f681 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f682 call 0x12e3f8b0 */
  push32(0x12e3f687u); f_12e3f8b0();
  /* 12e3f687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f68a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f68d je 0x12e3f6bd */
  if (C.zf) goto L_12e3f6bd;
  /* 12e3f68f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f693 je 0x12e3f6bd */
  if (C.zf) goto L_12e3f6bd;
  /* 12e3f695 mov ecx, dword ptr [0x12e5e70c] */
  ECX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f69b push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f69c call 0x12e3f930 */
  push32(0x12e3f6a1u); f_12e3f930();
  /* 12e3f6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f6a4 mov esi, eax */
  ESI = (EAX);
  /* 12e3f6a6 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f6ac push edx */
  push32((uint32_t)(EDX));
  /* 12e3f6ad call 0x12e35c50 */
  push32(0x12e3f6b2u); f_12e35c50();
  /* 12e3f6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f6b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f6b7 jne 0x12e3f6bd */
  if (!C.zf) goto L_12e3f6bd;
  /* 12e3f6b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f6bb jmp 0x12e3f6c2 */
  goto L_12e3f6c2;
L_12e3f6bd:;
  /* 12e3f6bd mov eax, 1 */
  EAX = (0x1u);
L_12e3f6c2:;
  /* 12e3f6c2 pop esi */
  ESI = (pop32());
  /* 12e3f6c3 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f6c5 pop ebp */
  EBP = (pop32());
  /* 12e3f6c6 ret  */
  ESPCHK(0x12e3f640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x12e3f6d0 (77 bytes, 18 insns) */
void f_12e3f6d0(void) {
  FTRACE(0x12e3f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f6d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f6d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12e3f6e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12e3f6e9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f6ea call dword ptr [0x12e60258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60258))), 0x12e3f6f0u);
  /* 12e3f6f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f6f2 je 0x12e3f709 */
  if (C.zf) goto L_12e3f709;
  /* 12e3f6f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f6fb jne 0x12e3f709 */
  if (!C.zf) goto L_12e3f709;
  /* 12e3f6fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12e3f707 jmp 0x12e3f713 */
  goto L_12e3f713;
L_12e3f709:;
  /* 12e3f709 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12e3f713:;
  /* 12e3f713 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e3f719 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f71b pop ebp */
  EBP = (pop32());
  /* 12e3f71c ret  */
  ESPCHK(0x12e3f6d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12e3f720 (388 bytes, 118 insns) */
void f_12e3f720(void) {
  FTRACE(0x12e3f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f720 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f721 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3f72d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12e3f734 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e3f73b:;
  /* 12e3f73b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3f73e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f741 jg 0x12e3f888 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3f888;
  /* 12e3f747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3f74a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f74d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3f74e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f750 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3f752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3f755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f758 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f75e cmp edx, dword ptr [ecx + 0x12e5d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12e5d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f764 jne 0x12e3f85e */
  if (!C.zf) goto L_12e3f85e;
  /* 12e3f76a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3f76d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e3f770 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f774 ja 0x12e3f797 */
  if ((!C.cf&&!C.zf)) goto L_12e3f797;
  /* 12e3f776 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f77a je 0x12e3f809 */
  if (C.zf) goto L_12e3f809;
  /* 12e3f780 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f784 je 0x12e3f7b4 */
  if (C.zf) goto L_12e3f7b4;
  /* 12e3f786 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f78a je 0x12e3f7d6 */
  if (C.zf) goto L_12e3f7d6;
  /* 12e3f78c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f790 je 0x12e3f7f8 */
  if (C.zf) goto L_12e3f7f8;
  /* 12e3f792 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f797:;
  /* 12e3f797 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f79e je 0x12e3f7c5 */
  if (C.zf) goto L_12e3f7c5;
  /* 12e3f7a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f7a7 je 0x12e3f7e7 */
  if (C.zf) goto L_12e3f7e7;
  /* 12e3f7a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f7b0 je 0x12e3f81a */
  if (C.zf) goto L_12e3f81a;
  /* 12e3f7b2 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f7b4:;
  /* 12e3f7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f7b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f7ba add ecx, 0x12e5d524 */
  { uint32_t _a=(ECX),_b=(0x12e5d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f7c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3f7c3 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f7c5:;
  /* 12e3f7c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f7c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f7cb mov eax, dword ptr [edx + 0x12e5d52c] */
  EAX = (r32((uint32_t)(EDX + 0x12e5d52c)));
  /* 12e3f7d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3f7d4 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f7d6:;
  /* 12e3f7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f7d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f7dc add ecx, 0x12e5d530 */
  { uint32_t _a=(ECX),_b=(0x12e5d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f7e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3f7e5 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f7e7:;
  /* 12e3f7e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f7ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f7ed mov eax, dword ptr [edx + 0x12e5d534] */
  EAX = (r32((uint32_t)(EDX + 0x12e5d534)));
  /* 12e3f7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3f7f6 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f7f8:;
  /* 12e3f7f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f7fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f7fe add ecx, 0x12e5d538 */
  { uint32_t _a=(ECX),_b=(0x12e5d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3f807 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f809:;
  /* 12e3f809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f80c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f80f add edx, 0x12e5d53c */
  { uint32_t _a=(EDX),_b=(0x12e5d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3f818 jmp 0x12e3f828 */
  goto L_12e3f828;
L_12e3f81a:;
  /* 12e3f81a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f81d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f820 add eax, 0x12e5d544 */
  { uint32_t _a=(EAX),_b=(0x12e5d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3f828:;
  /* 12e3f828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f82c je 0x12e3f834 */
  if (C.zf) goto L_12e3f834;
  /* 12e3f82e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f832 jge 0x12e3f836 */
  if ((C.sf==C.of)) goto L_12e3f836;
L_12e3f834:;
  /* 12e3f834 jmp 0x12e3f888 */
  goto L_12e3f888;
L_12e3f836:;
  /* 12e3f836 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3f839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f83c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f83d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3f840 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3f844 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f845 call 0x12e36640 */
  push32(0x12e3f84au); f_12e36640();
  /* 12e3f84a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f84d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3f850 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f853 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12e3f857 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3f85c jmp 0x12e3f89e */
  goto L_12e3f89e;
L_12e3f85e:;
  /* 12e3f85e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f861 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f867 cmp eax, dword ptr [edx + 0x12e5d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12e5d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f86d jae 0x12e3f87a */
  if (!C.cf) goto L_12e3f87a;
  /* 12e3f86f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f872 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3f878 jmp 0x12e3f883 */
  goto L_12e3f883;
L_12e3f87a:;
  /* 12e3f87a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3f87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f880 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e3f883:;
  /* 12e3f883 jmp 0x12e3f73b */
  goto L_12e3f73b;
L_12e3f888:;
  /* 12e3f888 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3f88b push eax */
  push32((uint32_t)(EAX));
  /* 12e3f88c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3f88f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3f893 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f897 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f898 call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e3f89eu);
L_12e3f89e:;
  /* 12e3f89e mov esp, ebp */
  ESP = (EBP);
  /* 12e3f8a0 pop ebp */
  EBP = (pop32());
  /* 12e3f8a1 ret 0x10 */
  ESPCHK(0x12e3f720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f8b0 @ 0x12e3f8b0 (118 bytes, 42 insns) */
void f_12e3f8b0(void) {
  FTRACE(0x12e3f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f8b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e3f8bd:;
  /* 12e3f8bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f8c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e3f8c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e3f8c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f8cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f8cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e3f8d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3f8d4 je 0x12e3f91f */
  if (C.zf) goto L_12e3f91f;
  /* 12e3f8d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f8da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f8dd jl 0x12e3f8f2 */
  if ((C.sf!=C.of)) goto L_12e3f8f2;
  /* 12e3f8df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f8e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f8e6 jg 0x12e3f8f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3f8f2;
  /* 12e3f8e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e3f8eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e3f8ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12e3f8f0 jmp 0x12e3f90c */
  goto L_12e3f90c;
L_12e3f8f2:;
  /* 12e3f8f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f8f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f8f9 jl 0x12e3f90c */
  if ((C.sf!=C.of)) goto L_12e3f90c;
  /* 12e3f8fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f8ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f902 jg 0x12e3f90c */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3f90c;
  /* 12e3f904 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e3f907 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e3f909 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12e3f90c:;
  /* 12e3f90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3f90f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e3f912 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3f916 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e3f91a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3f91d jmp 0x12e3f8bd */
  goto L_12e3f8bd;
L_12e3f91f:;
  /* 12e3f91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3f922 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f924 pop ebp */
  EBP = (pop32());
  /* 12e3f925 ret  */
  ESPCHK(0x12e3f8b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12e3f930 (101 bytes, 36 insns) */
void f_12e3f930(void) {
  FTRACE(0x12e3f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f930 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f931 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3f93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e3f942 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12e3f945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f94b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e3f94e:;
  /* 12e3f94e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e3f952 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f955 jl 0x12e3f960 */
  if ((C.sf!=C.of)) goto L_12e3f960;
  /* 12e3f957 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e3f95b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f95e jle 0x12e3f972 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3f972;
L_12e3f960:;
  /* 12e3f960 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e3f964 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f967 jl 0x12e3f98e */
  if ((C.sf!=C.of)) goto L_12e3f98e;
  /* 12e3f969 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e3f96d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f970 jg 0x12e3f98e */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3f98e;
L_12e3f972:;
  /* 12e3f972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3f975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3f97b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f97e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3f980 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12e3f983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f986 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f989 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e3f98c jmp 0x12e3f94e */
  goto L_12e3f94e;
L_12e3f98e:;
  /* 12e3f98e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3f991 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f993 pop ebp */
  EBP = (pop32());
  /* 12e3f994 ret  */
  ESPCHK(0x12e3f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x12e3f9a0 (122 bytes, 39 insns) */
void f_12e3f9a0(void) {
  FTRACE(0x12e3f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f9a7 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f9ad jae 0x12e3f9d1 */
  if (!C.cf) goto L_12e3f9d1;
  /* 12e3f9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f9b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3f9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f9b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f9bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3f9be mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3f9c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3f9ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3f9cf jne 0x12e3f9ec */
  if (!C.zf) goto L_12e3f9ec;
L_12e3f9d1:;
  /* 12e3f9d1 call 0x12e3acf0 */
  push32(0x12e3f9d6u); f_12e3acf0();
  /* 12e3f9d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3f9dc call 0x12e3ad00 */
  push32(0x12e3f9e1u); f_12e3ad00();
  /* 12e3f9e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3f9e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f9ea jmp 0x12e3fa16 */
  goto L_12e3fa16;
L_12e3f9ec:;
  /* 12e3f9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f9ef push edx */
  push32((uint32_t)(EDX));
  /* 12e3f9f0 call 0x12e3c510 */
  push32(0x12e3f9f5u); f_12e3c510();
  /* 12e3f9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f9f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f9fb push eax */
  push32((uint32_t)(EAX));
  /* 12e3f9fc call 0x12e3fa20 */
  push32(0x12e3fa01u); f_12e3fa20();
  /* 12e3fa01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3fa07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa0a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fa0b call 0x12e3c5a0 */
  push32(0x12e3fa10u); f_12e3c5a0();
  /* 12e3fa10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3fa16:;
  /* 12e3fa16 mov esp, ebp */
  ESP = (EBP);
  /* 12e3fa18 pop ebp */
  EBP = (pop32());
  /* 12e3fa19 ret  */
  ESPCHK(0x12e3f9a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12e3fa20 (170 bytes, 59 insns) */
void f_12e3fa20(void) {
  FTRACE(0x12e3fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3fa21 mov ebp, esp */
  EBP = (ESP);
  /* 12e3fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fa24 push esi */
  push32((uint32_t)(ESI));
  /* 12e3fa25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa28 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fa29 call 0x12e3c390 */
  push32(0x12e3fa2eu); f_12e3c390();
  /* 12e3fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fa34 je 0x12e3fa73 */
  if (C.zf) goto L_12e3fa73;
  /* 12e3fa36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fa3a je 0x12e3fa42 */
  if (C.zf) goto L_12e3fa42;
  /* 12e3fa3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fa40 jne 0x12e3fa5c */
  if (!C.zf) goto L_12e3fa5c;
L_12e3fa42:;
  /* 12e3fa42 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3fa44 call 0x12e3c390 */
  push32(0x12e3fa49u); f_12e3c390();
  /* 12e3fa49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa4c mov esi, eax */
  ESI = (EAX);
  /* 12e3fa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3fa50 call 0x12e3c390 */
  push32(0x12e3fa55u); f_12e3c390();
  /* 12e3fa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fa5a je 0x12e3fa73 */
  if (C.zf) goto L_12e3fa73;
L_12e3fa5c:;
  /* 12e3fa5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa5f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fa60 call 0x12e3c390 */
  push32(0x12e3fa65u); f_12e3c390();
  /* 12e3fa65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa68 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fa69 call dword ptr [0x12e60260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60260))), 0x12e3fa6fu);
  /* 12e3fa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3fa71 je 0x12e3fa7c */
  if (C.zf) goto L_12e3fa7c;
L_12e3fa73:;
  /* 12e3fa73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3fa7a jmp 0x12e3fa85 */
  goto L_12e3fa85;
L_12e3fa7c:;
  /* 12e3fa7c call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3fa82u);
  /* 12e3fa82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3fa85:;
  /* 12e3fa85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa88 push edx */
  push32((uint32_t)(EDX));
  /* 12e3fa89 call 0x12e3c2b0 */
  push32(0x12e3fa8eu); f_12e3c2b0();
  /* 12e3fa8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fa91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3fa97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fa9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3fa9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3faa0 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3faa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12e3faac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fab0 je 0x12e3fac3 */
  if (C.zf) goto L_12e3fac3;
  /* 12e3fab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3fab5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fab6 call 0x12e3ac50 */
  push32(0x12e3fabbu); f_12e3ac50();
  /* 12e3fabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fabe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3fac1 jmp 0x12e3fac5 */
  goto L_12e3fac5;
L_12e3fac3:;
  /* 12e3fac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3fac5:;
  /* 12e3fac5 pop esi */
  ESI = (pop32());
  /* 12e3fac6 mov esp, ebp */
  ESP = (EBP);
  /* 12e3fac8 pop ebp */
  EBP = (pop32());
  /* 12e3fac9 ret  */
  ESPCHK(0x12e3fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x12e3fad0 (146 bytes, 52 insns) */
void f_12e3fad0(void) {
  FTRACE(0x12e3fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3fad1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3fad3 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3fad4 push esi */
  push32((uint32_t)(ESI));
  /* 12e3fad5 push edi */
  push32((uint32_t)(EDI));
L_12e3fad6:;
  /* 12e3fad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fada jne 0x12e3fafa */
  if (!C.zf) goto L_12e3fafa;
  /* 12e3fadc push 0x12e5a000 */
  push32((uint32_t)(0x12e5a000u));
  /* 12e3fae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3fae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e3fae5 push 0x12e5a6c8 */
  push32((uint32_t)(0x12e5a6c8u));
  /* 12e3faea push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3faec call 0x12e31ee0 */
  push32(0x12e3faf1u); f_12e31ee0();
  /* 12e3faf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3faf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3faf7 jne 0x12e3fafa */
  if (!C.zf) goto L_12e3fafa;
  /* 12e3faf9 int3  */
  x86_unimpl("int3 @ 0x12e3faf9");
L_12e3fafa:;
  /* 12e3fafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3fafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3fafe jne 0x12e3fad6 */
  if (!C.zf) goto L_12e3fad6;
  /* 12e3fb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3fb06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3fb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3fb0e je 0x12e3fb5d */
  if (C.zf) goto L_12e3fb5d;
  /* 12e3fb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3fb16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3fb19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3fb1b je 0x12e3fb5d */
  if (C.zf) goto L_12e3fb5d;
  /* 12e3fb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3fb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e3fb25 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fb26 call 0x12e338b0 */
  push32(0x12e3fb2bu); f_12e338b0();
  /* 12e3fb2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3fb34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3fb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e3fb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12e3fb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e3fb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3fb56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12e3fb5d:;
  /* 12e3fb5d pop edi */
  EDI = (pop32());
  /* 12e3fb5e pop esi */
  ESI = (pop32());
  /* 12e3fb5f pop ebx */
  EBX = (pop32());
  /* 12e3fb60 pop ebp */
  EBP = (pop32());
  /* 12e3fb61 ret  */
  ESPCHK(0x12e3fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x12e3fb70 (289 bytes, 97 insns) */
void f_12e3fb70(void) {
  FTRACE(0x12e3fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3fb71 mov ebp, esp */
  EBP = (ESP);
  /* 12e3fb73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3fb76 push esi */
  push32((uint32_t)(ESI));
  /* 12e3fb77 mov eax, dword ptr [0x12e5dc98] */
  EAX = (r32((uint32_t)(0x12e5dc98)));
  /* 12e3fb7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3fb7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3fb86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fb8d jmp 0x12e3fb98 */
  goto L_12e3fb98;
L_12e3fb8f:;
  /* 12e3fb8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fb92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fb95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e3fb98:;
  /* 12e3fb98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fb9c jae 0x12e3fbd1 */
  if (!C.cf) goto L_12e3fbd1;
  /* 12e3fb9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3fba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fba8 call 0x12e35c50 */
  push32(0x12e3fbadu); f_12e35c50();
  /* 12e3fbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fbb0 mov esi, eax */
  ESI = (EAX);
  /* 12e3fbb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fbb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fbb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e3fbbc push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fbbd call 0x12e35c50 */
  push32(0x12e3fbc2u); f_12e35c50();
  /* 12e3fbc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fbc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fbc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e3fbcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3fbcf jmp 0x12e3fb8f */
  goto L_12e3fb8f;
L_12e3fbd1:;
  /* 12e3fbd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3fbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fbd7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fbd8 call 0x12e32e00 */
  push32(0x12e3fbddu); f_12e32e00();
  /* 12e3fbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fbe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3fbe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fbe7 je 0x12e3fc89 */
  if (C.zf) goto L_12e3fc89;
  /* 12e3fbed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3fbf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fbf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fbfa jmp 0x12e3fc05 */
  goto L_12e3fc05;
L_12e3fbfc:;
  /* 12e3fbfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fbff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e3fc05:;
  /* 12e3fc05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fc09 jae 0x12e3fc7a */
  if (!C.cf) goto L_12e3fc7a;
  /* 12e3fc0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e3fc11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fc1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fc1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fc20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fc24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc27 push edx */
  push32((uint32_t)(EDX));
  /* 12e3fc28 call 0x12e35dd0 */
  push32(0x12e3fc2du); f_12e35dd0();
  /* 12e3fc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc30 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fc31 call 0x12e35c50 */
  push32(0x12e3fc36u); f_12e35c50();
  /* 12e3fc36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fc41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e3fc47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e3fc50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fc53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fc56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e3fc5a push eax */
  push32((uint32_t)(EAX));
  /* 12e3fc5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc5e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fc5f call 0x12e35dd0 */
  push32(0x12e3fc64u); f_12e35dd0();
  /* 12e3fc64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc67 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fc68 call 0x12e35c50 */
  push32(0x12e3fc6du); f_12e35c50();
  /* 12e3fc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e3fc78 jmp 0x12e3fbfc */
  goto L_12e3fbfc;
L_12e3fc7a:;
  /* 12e3fc7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e3fc80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fc83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fc86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e3fc89:;
  /* 12e3fc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3fc8c pop esi */
  ESI = (pop32());
  /* 12e3fc8d mov esp, ebp */
  ESP = (EBP);
  /* 12e3fc8f pop ebp */
  EBP = (pop32());
  /* 12e3fc90 ret  */
  ESPCHK(0x12e3fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x12e3fca0 (291 bytes, 97 insns) */
void f_12e3fca0(void) {
  FTRACE(0x12e3fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3fca1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3fca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3fca6 push esi */
  push32((uint32_t)(ESI));
  /* 12e3fca7 mov eax, dword ptr [0x12e5dc98] */
  EAX = (r32((uint32_t)(0x12e5dc98)));
  /* 12e3fcac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3fcaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3fcb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fcbd jmp 0x12e3fcc8 */
  goto L_12e3fcc8;
L_12e3fcbf:;
  /* 12e3fcbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fcc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fcc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e3fcc8:;
  /* 12e3fcc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fccc jae 0x12e3fd02 */
  if (!C.cf) goto L_12e3fd02;
  /* 12e3fcce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fcd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e3fcd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fcd9 call 0x12e35c50 */
  push32(0x12e3fcdeu); f_12e35c50();
  /* 12e3fcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fce1 mov esi, eax */
  ESI = (EAX);
  /* 12e3fce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12e3fced push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fcee call 0x12e35c50 */
  push32(0x12e3fcf3u); f_12e35c50();
  /* 12e3fcf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fcf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fcf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e3fcfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3fd00 jmp 0x12e3fcbf */
  goto L_12e3fcbf;
L_12e3fd02:;
  /* 12e3fd02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3fd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd08 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fd09 call 0x12e32e00 */
  push32(0x12e3fd0eu); f_12e32e00();
  /* 12e3fd0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3fd14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fd18 je 0x12e3fdbb */
  if (C.zf) goto L_12e3fdbb;
  /* 12e3fd1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3fd21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fd24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fd2b jmp 0x12e3fd36 */
  goto L_12e3fd36;
L_12e3fd2d:;
  /* 12e3fd2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fd30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e3fd36:;
  /* 12e3fd36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fd3a jae 0x12e3fdac */
  if (!C.cf) goto L_12e3fdac;
  /* 12e3fd3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e3fd42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fd4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fd4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fd51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e3fd55 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fd56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd59 push edx */
  push32((uint32_t)(EDX));
  /* 12e3fd5a call 0x12e35dd0 */
  push32(0x12e3fd5fu); f_12e35dd0();
  /* 12e3fd5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd62 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fd63 call 0x12e35c50 */
  push32(0x12e3fd68u); f_12e35c50();
  /* 12e3fd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3fd73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e3fd79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e3fd82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fd85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fd88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e3fd8c push eax */
  push32((uint32_t)(EAX));
  /* 12e3fd8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fd90 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fd91 call 0x12e35dd0 */
  push32(0x12e3fd96u); f_12e35dd0();
  /* 12e3fd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fd99 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fd9a call 0x12e35c50 */
  push32(0x12e3fd9fu); f_12e35c50();
  /* 12e3fd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fda2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fda5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fda7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e3fdaa jmp 0x12e3fd2d */
  goto L_12e3fd2d;
L_12e3fdac:;
  /* 12e3fdac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fdaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e3fdb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3fdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fdb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e3fdbb:;
  /* 12e3fdbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3fdbe pop esi */
  ESI = (pop32());
  /* 12e3fdbf mov esp, ebp */
  ESP = (EBP);
  /* 12e3fdc1 pop ebp */
  EBP = (pop32());
  /* 12e3fdc2 ret  */
  ESPCHK(0x12e3fca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x12e3fdd0 (878 bytes, 273 insns) */
void f_12e3fdd0(void) {
  FTRACE(0x12e3fdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3fdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3fdd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3fdd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3fdd6 push esi */
  push32((uint32_t)(ESI));
  /* 12e3fdd7 mov eax, dword ptr [0x12e5dc98] */
  EAX = (r32((uint32_t)(0x12e5dc98)));
  /* 12e3fddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3fddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3fde6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fded jmp 0x12e3fdf8 */
  goto L_12e3fdf8;
L_12e3fdef:;
  /* 12e3fdef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fdf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fdf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e3fdf8:;
  /* 12e3fdf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fdfc jae 0x12e3fe31 */
  if (!C.cf) goto L_12e3fe31;
  /* 12e3fdfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fe01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3fe07 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fe08 call 0x12e35c50 */
  push32(0x12e3fe0du); f_12e35c50();
  /* 12e3fe0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe10 mov esi, eax */
  ESI = (EAX);
  /* 12e3fe12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fe15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e3fe1c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fe1d call 0x12e35c50 */
  push32(0x12e3fe22u); f_12e35c50();
  /* 12e3fe22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e3fe2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3fe2f jmp 0x12e3fdef */
  goto L_12e3fdef;
L_12e3fe31:;
  /* 12e3fe31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3fe38 jmp 0x12e3fe43 */
  goto L_12e3fe43;
L_12e3fe3a:;
  /* 12e3fe3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fe3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e3fe43:;
  /* 12e3fe43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3fe47 jae 0x12e3fe7d */
  if (!C.cf) goto L_12e3fe7d;
  /* 12e3fe49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fe4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e3fe53 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fe54 call 0x12e35c50 */
  push32(0x12e3fe59u); f_12e35c50();
  /* 12e3fe59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe5c mov esi, eax */
  ESI = (EAX);
  /* 12e3fe5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fe61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e3fe68 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fe69 call 0x12e35c50 */
  push32(0x12e3fe6eu); f_12e35c50();
  /* 12e3fe6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e3fe78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3fe7b jmp 0x12e3fe3a */
  goto L_12e3fe3a;
L_12e3fe7d:;
  /* 12e3fe7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e3fe86 push eax */
  push32((uint32_t)(EAX));
  /* 12e3fe87 call 0x12e35c50 */
  push32(0x12e3fe8cu); f_12e35c50();
  /* 12e3fe8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fe8f mov esi, eax */
  ESI = (EAX);
  /* 12e3fe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fe94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12e3fe9a push edx */
  push32((uint32_t)(EDX));
  /* 12e3fe9b call 0x12e35c50 */
  push32(0x12e3fea0u); f_12e35c50();
  /* 12e3fea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e3feaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3fead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3feb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e3feb6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3feb7 call 0x12e35c50 */
  push32(0x12e3febcu); f_12e35c50();
  /* 12e3febc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3febf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3fec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e3fec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3fec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12e3fed2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3fed3 call 0x12e35c50 */
  push32(0x12e3fed8u); f_12e35c50();
  /* 12e3fed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fedb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3fede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e3fee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3fee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e3feee push edx */
  push32((uint32_t)(EDX));
  /* 12e3feef call 0x12e35c50 */
  push32(0x12e3fef4u); f_12e35c50();
  /* 12e3fef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3fef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3fefa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e3fefe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3ff01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3ff04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff09 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ff0a call 0x12e32e00 */
  push32(0x12e3ff0fu); f_12e32e00();
  /* 12e3ff0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3ff15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ff19 je 0x12e40136 */
  if (C.zf) goto L_12e40136;
  /* 12e3ff1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ff22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e3ff25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ff28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e3ff31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12e3ff36 mov eax, dword ptr [0x12e5dc98] */
  EAX = (r32((uint32_t)(0x12e5dc98)));
  /* 12e3ff3b push eax */
  push32((uint32_t)(EAX));
  /* 12e3ff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ff3f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ff40 call 0x12e39700 */
  push32(0x12e3ff45u); f_12e39700();
  /* 12e3ff45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3ff4f jmp 0x12e3ff5a */
  goto L_12e3ff5a;
L_12e3ff51:;
  /* 12e3ff51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ff54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e3ff5a:;
  /* 12e3ff5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ff5e jae 0x12e3ffce */
  if (!C.cf) goto L_12e3ffce;
  /* 12e3ff60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ff63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3ff66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ff69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e3ff6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ff6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ff72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3ff75 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ff76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ff79 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ff7a call 0x12e35dd0 */
  push32(0x12e3ff7fu); f_12e35dd0();
  /* 12e3ff7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff82 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ff83 call 0x12e35c50 */
  push32(0x12e3ff88u); f_12e35c50();
  /* 12e3ff88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ff8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ff8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e3ff92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e3ff95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ff98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3ff9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ff9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12e3ffa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ffa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ffa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12e3ffac push edx */
  push32((uint32_t)(EDX));
  /* 12e3ffad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ffb0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ffb1 call 0x12e35dd0 */
  push32(0x12e3ffb6u); f_12e35dd0();
  /* 12e3ffb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ffb9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ffba call 0x12e35c50 */
  push32(0x12e3ffbfu); f_12e35c50();
  /* 12e3ffbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ffc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ffc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e3ffc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e3ffcc jmp 0x12e3ff51 */
  goto L_12e3ff51;
L_12e3ffce:;
  /* 12e3ffce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3ffd5 jmp 0x12e3ffe0 */
  goto L_12e3ffe0;
L_12e3ffd7:;
  /* 12e3ffd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ffda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ffdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e3ffe0:;
  /* 12e3ffe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ffe4 jae 0x12e40056 */
  if (!C.cf) goto L_12e40056;
  /* 12e3ffe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ffe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3ffec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3ffef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12e3fff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3fff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3fff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e3fffd push eax */
  push32((uint32_t)(EAX));
  /* 12e3fffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40001 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40002 call 0x12e35dd0 */
  push32(0x12e40007u); f_12e35dd0();
  /* 12e40007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4000a push eax */
  push32((uint32_t)(EAX));
  /* 12e4000b call 0x12e35c50 */
  push32(0x12e40010u); f_12e35c50();
  /* 12e40010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e4001a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e4001d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e40023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12e4002a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e4002d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e40034 push eax */
  push32((uint32_t)(EAX));
  /* 12e40035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40038 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40039 call 0x12e35dd0 */
  push32(0x12e4003eu); f_12e35dd0();
  /* 12e4003e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40041 push eax */
  push32((uint32_t)(EAX));
  /* 12e40042 call 0x12e35c50 */
  push32(0x12e40047u); f_12e35c50();
  /* 12e40047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4004a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e4004d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e40051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e40054 jmp 0x12e3ffd7 */
  goto L_12e3ffd7;
L_12e40056:;
  /* 12e40056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e40059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e4005c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12e40062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e4006b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4006c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e4006f push edx */
  push32((uint32_t)(EDX));
  /* 12e40070 call 0x12e35dd0 */
  push32(0x12e40075u); f_12e35dd0();
  /* 12e40075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40078 push eax */
  push32((uint32_t)(EAX));
  /* 12e40079 call 0x12e35c50 */
  push32(0x12e4007eu); f_12e35c50();
  /* 12e4007e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e40088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e4008b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e4008e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12e40097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4009a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e400a0 push eax */
  push32((uint32_t)(EAX));
  /* 12e400a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e400a5 call 0x12e35dd0 */
  push32(0x12e400aau); f_12e35dd0();
  /* 12e400aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e400ad push eax */
  push32((uint32_t)(EAX));
  /* 12e400ae call 0x12e35c50 */
  push32(0x12e400b3u); f_12e35c50();
  /* 12e400b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e400b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e400bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e400c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e400c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12e400cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e400cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12e400d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e400d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400d9 push edx */
  push32((uint32_t)(EDX));
  /* 12e400da call 0x12e35dd0 */
  push32(0x12e400dfu); f_12e35dd0();
  /* 12e400df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e400e2 push eax */
  push32((uint32_t)(EAX));
  /* 12e400e3 call 0x12e35c50 */
  push32(0x12e400e8u); f_12e35c50();
  /* 12e400e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e400eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e400f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e400f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e400f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e400fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12e40101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e4010a push eax */
  push32((uint32_t)(EAX));
  /* 12e4010b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e4010e push ecx */
  push32((uint32_t)(ECX));
  /* 12e4010f call 0x12e35dd0 */
  push32(0x12e40114u); f_12e35dd0();
  /* 12e40114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40117 push eax */
  push32((uint32_t)(EAX));
  /* 12e40118 call 0x12e35c50 */
  push32(0x12e4011du); f_12e35c50();
  /* 12e4011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e40127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e4012a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e4012d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12e40136:;
  /* 12e40136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40139 pop esi */
  ESI = (pop32());
  /* 12e4013a mov esp, ebp */
  ESP = (EBP);
  /* 12e4013c pop ebp */
  EBP = (pop32());
  /* 12e4013d ret  */
  ESPCHK(0x12e3fdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x12e40140 (31 bytes, 15 insns) */
void f_12e40140(void) {
  FTRACE(0x12e40140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40140 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40141 mov ebp, esp */
  EBP = (ESP);
  /* 12e40143 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e40145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40148 push eax */
  push32((uint32_t)(EAX));
  /* 12e40149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4014c push ecx */
  push32((uint32_t)(ECX));
  /* 12e4014d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40150 push edx */
  push32((uint32_t)(EDX));
  /* 12e40151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40154 push eax */
  push32((uint32_t)(EAX));
  /* 12e40155 call 0x12e40160 */
  push32(0x12e4015au); f_12e40160();
  /* 12e4015a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4015d pop ebp */
  EBP = (pop32());
  /* 12e4015e ret  */
  ESPCHK(0x12e40140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x12e40160 (393 bytes, 123 insns) */
void f_12e40160(void) {
  FTRACE(0x12e40160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40160 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40161 mov ebp, esp */
  EBP = (ESP);
  /* 12e40163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40166 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4016a jne 0x12e40176 */
  if (!C.zf) goto L_12e40176;
  /* 12e4016c mov eax, dword ptr [0x12e5dc98] */
  EAX = (r32((uint32_t)(0x12e5dc98)));
  /* 12e40171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e40174 jmp 0x12e4017c */
  goto L_12e4017c;
L_12e40176:;
  /* 12e40176 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e4017c:;
  /* 12e4017c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e4017f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e40182 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e40188 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e4018d call dword ptr [0x12e602a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a4))), 0x12e40193u);
  /* 12e40193 cmp dword ptr [0x12e5e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4019a je 0x12e401ba */
  if (C.zf) goto L_12e401ba;
  /* 12e4019c push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e401a1 call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e401a7u);
  /* 12e401a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e401a9 call 0x12e36820 */
  push32(0x12e401aeu); f_12e36820();
  /* 12e401ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e401b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e401b8 jmp 0x12e401c1 */
  goto L_12e401c1;
L_12e401ba:;
  /* 12e401ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e401c1:;
  /* 12e401c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e401c5 jbe 0x12e402b2 */
  if ((C.cf||C.zf)) goto L_12e402b2;
  /* 12e401cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e401ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e401d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12e401d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e401d7 je 0x12e401e1 */
  if (C.zf) goto L_12e401e1;
  /* 12e401d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e401dd je 0x12e401e6 */
  if (C.zf) goto L_12e401e6;
  /* 12e401df jmp 0x12e40240 */
  goto L_12e40240;
L_12e401e1:;
  /* 12e401e1 jmp 0x12e402b2 */
  goto L_12e402b2;
L_12e401e6:;
  /* 12e401e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e401e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e401ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12e401ef mov dword ptr [0x12e5e7f8], 0 */
  w32((uint32_t)(0x12e5e7f8), (0x0u));
  /* 12e401f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e401fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e401ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40202 jne 0x12e40217 */
  if (!C.zf) goto L_12e40217;
  /* 12e40204 mov dword ptr [0x12e5e7f8], 1 */
  w32((uint32_t)(0x12e5e7f8), (0x1u));
  /* 12e4020e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40214 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e40217:;
  /* 12e40217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4021a push ecx */
  push32((uint32_t)(ECX));
  /* 12e4021b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e4021e push edx */
  push32((uint32_t)(EDX));
  /* 12e4021f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12e40222 push eax */
  push32((uint32_t)(EAX));
  /* 12e40223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40226 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4022a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e4022c push eax */
  push32((uint32_t)(EAX));
  /* 12e4022d call 0x12e402f0 */
  push32(0x12e40232u); f_12e402f0();
  /* 12e40232 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4023b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e4023e jmp 0x12e402ad */
  goto L_12e402ad;
L_12e40240:;
  /* 12e40240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e40245 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40247 mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e4024d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e4024f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e40253 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e40259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e4025b je 0x12e40288 */
  if (C.zf) goto L_12e40288;
  /* 12e4025d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40261 jbe 0x12e40288 */
  if ((C.cf||C.zf)) goto L_12e40288;
  /* 12e40263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40269 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e4026b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e4026d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40273 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e40276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4027c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e4027f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40282 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40285 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e40288:;
  /* 12e40288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4028b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4028e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e40290 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e40292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e4029b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4029e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e402a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e402a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e402a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e402aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e402ad:;
  /* 12e402ad jmp 0x12e401c1 */
  goto L_12e401c1;
L_12e402b2:;
  /* 12e402b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e402b6 je 0x12e402c4 */
  if (C.zf) goto L_12e402c4;
  /* 12e402b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e402ba call 0x12e368c0 */
  push32(0x12e402bfu); f_12e368c0();
  /* 12e402bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e402c2 jmp 0x12e402cf */
  goto L_12e402cf;
L_12e402c4:;
  /* 12e402c4 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e402c9 call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e402cfu);
L_12e402cf:;
  /* 12e402cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e402d3 jbe 0x12e402e3 */
  if ((C.cf||C.zf)) goto L_12e402e3;
  /* 12e402d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e402d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e402db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e402de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e402e1 jmp 0x12e402e5 */
  goto L_12e402e5;
L_12e402e3:;
  /* 12e402e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e402e5:;
  /* 12e402e5 mov esp, ebp */
  ESP = (EBP);
  /* 12e402e7 pop ebp */
  EBP = (pop32());
  /* 12e402e8 ret  */
  ESPCHK(0x12e40160u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x12e402f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12e402f0(void) {
  FTRACE(0x12e402f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e402f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e402f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e402f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e402f6 push esi */
  push32((uint32_t)(ESI));
  /* 12e402f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12e402fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e402fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e40307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4030b ja 0x12e40858 */
  if ((!C.cf&&!C.zf)) goto L_12e40858;
  /* 12e40311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e40316 mov dl, byte ptr [eax + 0x12e408b9] */
  DL = (r8((uint32_t)(EAX + 0x12e408b9)));
  /* 12e4031c jmp dword ptr [edx*4 + 0x12e4085d] */
  switch (EDX) {
    case 0: goto L_12e40836;
    case 1: goto L_12e40345;
    case 2: goto L_12e4038b;
    case 3: goto L_12e404d8;
    case 4: goto L_12e40500;
    case 5: goto L_12e4059f;
    case 6: goto L_12e4060b;
    case 7: goto L_12e40634;
    case 8: goto L_12e40675;
    case 9: goto L_12e40757;
    case 10: goto L_12e407be;
    case 11: goto L_12e4080b;
    case 12: goto L_12e40323;
    case 13: goto L_12e40368;
    case 14: goto L_12e403ae;
    case 15: goto L_12e404ae;
    case 16: goto L_12e40545;
    case 17: goto L_12e40572;
    case 18: goto L_12e405c7;
    case 19: goto L_12e4064b;
    case 20: goto L_12e406f9;
    case 21: goto L_12e40788;
    case 22: goto L_12e40858;
    default: x86_unimpl("switch@0x12e4031c out of table"); return;
  }
L_12e40323:;
  /* 12e40323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40326 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4032a push edx */
  push32((uint32_t)(EDX));
  /* 12e4032b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4032e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e40331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e40337 push eax */
  push32((uint32_t)(EAX));
  /* 12e40338 call 0x12e40910 */
  push32(0x12e4033du); f_12e40910();
  /* 12e4033d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40340 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40345:;
  /* 12e40345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40348 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4034c push edx */
  push32((uint32_t)(EDX));
  /* 12e4034d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e40353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e4035a push eax */
  push32((uint32_t)(EAX));
  /* 12e4035b call 0x12e40910 */
  push32(0x12e40360u); f_12e40910();
  /* 12e40360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40363 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40368:;
  /* 12e40368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4036b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4036c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4036f push edx */
  push32((uint32_t)(EDX));
  /* 12e40370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e40376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e4037d push eax */
  push32((uint32_t)(EAX));
  /* 12e4037e call 0x12e40910 */
  push32(0x12e40383u); f_12e40910();
  /* 12e40383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40386 jmp 0x12e40858 */
  goto L_12e40858;
L_12e4038b:;
  /* 12e4038b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4038e push ecx */
  push32((uint32_t)(ECX));
  /* 12e4038f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40392 push edx */
  push32((uint32_t)(EDX));
  /* 12e40393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e40399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4039c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e403a0 push eax */
  push32((uint32_t)(EAX));
  /* 12e403a1 call 0x12e40910 */
  push32(0x12e403a6u); f_12e40910();
  /* 12e403a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e403a9 jmp 0x12e40858 */
  goto L_12e40858;
L_12e403ae:;
  /* 12e403ae cmp dword ptr [0x12e5e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e403b5 je 0x12e40436 */
  if (C.zf) goto L_12e40436;
  /* 12e403b7 mov dword ptr [0x12e5e7f8], 0 */
  w32((uint32_t)(0x12e5e7f8), (0x0u));
  /* 12e403c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e403c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e403c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e403c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e403c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e403cc push eax */
  push32((uint32_t)(EAX));
  /* 12e403cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e403d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e403d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e403d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e403da push eax */
  push32((uint32_t)(EAX));
  /* 12e403db call 0x12e40ac0 */
  push32(0x12e403e0u); f_12e40ac0();
  /* 12e403e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e403e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e403e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e403e9 jne 0x12e403f0 */
  if (!C.zf) goto L_12e403f0;
  /* 12e403eb jmp 0x12e40858 */
  goto L_12e40858;
L_12e403f0:;
  /* 12e403f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e403f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e403f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e403f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e403fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e403fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e40405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e4040a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e4040d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e40412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40415 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40419 push edx */
  push32((uint32_t)(EDX));
  /* 12e4041a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4041d push eax */
  push32((uint32_t)(EAX));
  /* 12e4041e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40421 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e4042b push eax */
  push32((uint32_t)(EAX));
  /* 12e4042c call 0x12e40ac0 */
  push32(0x12e40431u); f_12e40ac0();
  /* 12e40431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40434 jmp 0x12e404a9 */
  goto L_12e404a9;
L_12e40436:;
  /* 12e40436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40439 push ecx */
  push32((uint32_t)(ECX));
  /* 12e4043a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4043d push edx */
  push32((uint32_t)(EDX));
  /* 12e4043e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40441 push eax */
  push32((uint32_t)(EAX));
  /* 12e40442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40445 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12e4044f push eax */
  push32((uint32_t)(EAX));
  /* 12e40450 call 0x12e40ac0 */
  push32(0x12e40455u); f_12e40ac0();
  /* 12e40455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4045b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4045e jne 0x12e40465 */
  if (!C.zf) goto L_12e40465;
  /* 12e40460 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40465:;
  /* 12e40465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e4046a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e4046d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e4047a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4047d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e4047f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e40487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4048a push ecx */
  push32((uint32_t)(ECX));
  /* 12e4048b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4048e push edx */
  push32((uint32_t)(EDX));
  /* 12e4048f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40492 push eax */
  push32((uint32_t)(EAX));
  /* 12e40493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40496 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4049a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e404a0 push eax */
  push32((uint32_t)(EAX));
  /* 12e404a1 call 0x12e40ac0 */
  push32(0x12e404a6u); f_12e40ac0();
  /* 12e404a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e404a9:;
  /* 12e404a9 jmp 0x12e40858 */
  goto L_12e40858;
L_12e404ae:;
  /* 12e404ae mov ecx, dword ptr [0x12e5e7f8] */
  ECX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e404b4 mov dword ptr [0x12e5e808], ecx */
  w32((uint32_t)(0x12e5e808), (ECX));
  /* 12e404ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e404bd push edx */
  push32((uint32_t)(EDX));
  /* 12e404be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e404c1 push eax */
  push32((uint32_t)(EAX));
  /* 12e404c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e404c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e404c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e404ca push edx */
  push32((uint32_t)(EDX));
  /* 12e404cb call 0x12e40960 */
  push32(0x12e404d0u); f_12e40960();
  /* 12e404d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e404d3 jmp 0x12e40858 */
  goto L_12e40858;
L_12e404d8:;
  /* 12e404d8 mov eax, dword ptr [0x12e5e7f8] */
  EAX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e404dd mov dword ptr [0x12e5e808], eax */
  w32((uint32_t)(0x12e5e808), (EAX));
  /* 12e404e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e404e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e404e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e404e9 push edx */
  push32((uint32_t)(EDX));
  /* 12e404ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12e404ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e404ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e404f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e404f3 call 0x12e40960 */
  push32(0x12e404f8u); f_12e40960();
  /* 12e404f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e404fb jmp 0x12e40858 */
  goto L_12e40858;
L_12e40500:;
  /* 12e40500 mov edx, dword ptr [0x12e5e7f8] */
  EDX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e40506 mov dword ptr [0x12e5e808], edx */
  w32((uint32_t)(0x12e5e808), (EDX));
  /* 12e4050c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4050f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e40512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e40513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12e40518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e4051a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e4051d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40521 jne 0x12e4052a */
  if (!C.zf) goto L_12e4052a;
  /* 12e40523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12e4052a:;
  /* 12e4052a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4052d push edx */
  push32((uint32_t)(EDX));
  /* 12e4052e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40531 push eax */
  push32((uint32_t)(EAX));
  /* 12e40532 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e40534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40537 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40538 call 0x12e40960 */
  push32(0x12e4053du); f_12e40960();
  /* 12e4053d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40540 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40545:;
  /* 12e40545 mov edx, dword ptr [0x12e5e7f8] */
  EDX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e4054b mov dword ptr [0x12e5e808], edx */
  w32((uint32_t)(0x12e5e808), (EDX));
  /* 12e40551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40554 push eax */
  push32((uint32_t)(EAX));
  /* 12e40555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40558 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40559 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e4055b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4055e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e40561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40564 push eax */
  push32((uint32_t)(EAX));
  /* 12e40565 call 0x12e40960 */
  push32(0x12e4056au); f_12e40960();
  /* 12e4056a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4056d jmp 0x12e40858 */
  goto L_12e40858;
L_12e40572:;
  /* 12e40572 mov ecx, dword ptr [0x12e5e7f8] */
  ECX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e40578 mov dword ptr [0x12e5e808], ecx */
  w32((uint32_t)(0x12e5e808), (ECX));
  /* 12e4057e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40581 push edx */
  push32((uint32_t)(EDX));
  /* 12e40582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40585 push eax */
  push32((uint32_t)(EAX));
  /* 12e40586 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e40588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4058b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e4058e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40591 push edx */
  push32((uint32_t)(EDX));
  /* 12e40592 call 0x12e40960 */
  push32(0x12e40597u); f_12e40960();
  /* 12e40597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4059a jmp 0x12e40858 */
  goto L_12e40858;
L_12e4059f:;
  /* 12e4059f mov eax, dword ptr [0x12e5e7f8] */
  EAX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e405a4 mov dword ptr [0x12e5e808], eax */
  w32((uint32_t)(0x12e5e808), (EAX));
  /* 12e405a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e405ac push ecx */
  push32((uint32_t)(ECX));
  /* 12e405ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e405b0 push edx */
  push32((uint32_t)(EDX));
  /* 12e405b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e405b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e405b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e405b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e405ba call 0x12e40960 */
  push32(0x12e405bfu); f_12e40960();
  /* 12e405bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e405c2 jmp 0x12e40858 */
  goto L_12e40858;
L_12e405c7:;
  /* 12e405c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e405ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e405ce jg 0x12e405ec */
  if ((!C.zf&&C.sf==C.of)) goto L_12e405ec;
  /* 12e405d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e405d3 push eax */
  push32((uint32_t)(EAX));
  /* 12e405d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e405d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e405d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e405db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e405e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e405e2 call 0x12e40910 */
  push32(0x12e405e7u); f_12e40910();
  /* 12e405e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e405ea jmp 0x12e40606 */
  goto L_12e40606;
L_12e405ec:;
  /* 12e405ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e405ef push ecx */
  push32((uint32_t)(ECX));
  /* 12e405f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e405f3 push edx */
  push32((uint32_t)(EDX));
  /* 12e405f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e405f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12e405fd push ecx */
  push32((uint32_t)(ECX));
  /* 12e405fe call 0x12e40910 */
  push32(0x12e40603u); f_12e40910();
  /* 12e40603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e40606:;
  /* 12e40606 jmp 0x12e40858 */
  goto L_12e40858;
L_12e4060b:;
  /* 12e4060b mov edx, dword ptr [0x12e5e7f8] */
  EDX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e40611 mov dword ptr [0x12e5e808], edx */
  w32((uint32_t)(0x12e5e808), (EDX));
  /* 12e40617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4061a push eax */
  push32((uint32_t)(EAX));
  /* 12e4061b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4061e push ecx */
  push32((uint32_t)(ECX));
  /* 12e4061f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e40621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40626 push eax */
  push32((uint32_t)(EAX));
  /* 12e40627 call 0x12e40960 */
  push32(0x12e4062cu); f_12e40960();
  /* 12e4062c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4062f jmp 0x12e40858 */
  goto L_12e40858;
L_12e40634:;
  /* 12e40634 mov ecx, dword ptr [0x12e5e7f8] */
  ECX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e4063a mov dword ptr [0x12e5e808], ecx */
  w32((uint32_t)(0x12e5e808), (ECX));
  /* 12e40640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e40646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e40649 jmp 0x12e4069d */
  goto L_12e4069d;
L_12e4064b:;
  /* 12e4064b mov ecx, dword ptr [0x12e5e7f8] */
  ECX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e40651 mov dword ptr [0x12e5e808], ecx */
  w32((uint32_t)(0x12e5e808), (ECX));
  /* 12e40657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4065a push edx */
  push32((uint32_t)(EDX));
  /* 12e4065b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4065e push eax */
  push32((uint32_t)(EAX));
  /* 12e4065f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e40661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e40667 push edx */
  push32((uint32_t)(EDX));
  /* 12e40668 call 0x12e40960 */
  push32(0x12e4066du); f_12e40960();
  /* 12e4066d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40670 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40675:;
  /* 12e40675 mov eax, dword ptr [0x12e5e7f8] */
  EAX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e4067a mov dword ptr [0x12e5e808], eax */
  w32((uint32_t)(0x12e5e808), (EAX));
  /* 12e4067f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40686 jne 0x12e40691 */
  if (!C.zf) goto L_12e40691;
  /* 12e40688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12e4068f jmp 0x12e4069d */
  goto L_12e4069d;
L_12e40691:;
  /* 12e40691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e40697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e4069a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e4069d:;
  /* 12e4069d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e406a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e406a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e406a6 jge 0x12e406b1 */
  if ((C.sf==C.of)) goto L_12e406b1;
  /* 12e406a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e406af jmp 0x12e406de */
  goto L_12e406de;
L_12e406b1:;
  /* 12e406b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e406b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e406b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e406b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e406bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e406bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e406c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e406c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e406c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e406c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e406ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e406d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e406d3 jl 0x12e406de */
  if ((C.sf!=C.of)) goto L_12e406de;
  /* 12e406d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e406d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e406db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e406de:;
  /* 12e406de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e406e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e406e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e406e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e406e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e406e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e406eb push edx */
  push32((uint32_t)(EDX));
  /* 12e406ec call 0x12e40960 */
  push32(0x12e406f1u); f_12e40960();
  /* 12e406f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e406f4 jmp 0x12e40858 */
  goto L_12e40858;
L_12e406f9:;
  /* 12e406f9 cmp dword ptr [0x12e5e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40700 je 0x12e40730 */
  if (C.zf) goto L_12e40730;
  /* 12e40702 mov dword ptr [0x12e5e7f8], 0 */
  w32((uint32_t)(0x12e5e7f8), (0x0u));
  /* 12e4070c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4070f push eax */
  push32((uint32_t)(EAX));
  /* 12e40710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40713 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40717 push edx */
  push32((uint32_t)(EDX));
  /* 12e40718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4071b push eax */
  push32((uint32_t)(EAX));
  /* 12e4071c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4071f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12e40725 push edx */
  push32((uint32_t)(EDX));
  /* 12e40726 call 0x12e40ac0 */
  push32(0x12e4072bu); f_12e40ac0();
  /* 12e4072b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4072e jmp 0x12e40752 */
  goto L_12e40752;
L_12e40730:;
  /* 12e40730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40733 push eax */
  push32((uint32_t)(EAX));
  /* 12e40734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40737 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4073b push edx */
  push32((uint32_t)(EDX));
  /* 12e4073c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4073f push eax */
  push32((uint32_t)(EAX));
  /* 12e40740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e40749 push edx */
  push32((uint32_t)(EDX));
  /* 12e4074a call 0x12e40ac0 */
  push32(0x12e4074fu); f_12e40ac0();
  /* 12e4074f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e40752:;
  /* 12e40752 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40757:;
  /* 12e40757 mov dword ptr [0x12e5e7f8], 0 */
  w32((uint32_t)(0x12e5e7f8), (0x0u));
  /* 12e40761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40764 push eax */
  push32((uint32_t)(EAX));
  /* 12e40765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40768 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4076c push edx */
  push32((uint32_t)(EDX));
  /* 12e4076d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40770 push eax */
  push32((uint32_t)(EAX));
  /* 12e40771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e4077a push edx */
  push32((uint32_t)(EDX));
  /* 12e4077b call 0x12e40ac0 */
  push32(0x12e40780u); f_12e40ac0();
  /* 12e40780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40783 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40788:;
  /* 12e40788 mov eax, dword ptr [0x12e5e7f8] */
  EAX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e4078d mov dword ptr [0x12e5e808], eax */
  w32((uint32_t)(0x12e5e808), (EAX));
  /* 12e40792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e40798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e40799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e4079e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e407a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e407a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e407a6 push edx */
  push32((uint32_t)(EDX));
  /* 12e407a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e407aa push eax */
  push32((uint32_t)(EAX));
  /* 12e407ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12e407ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e407b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e407b1 call 0x12e40960 */
  push32(0x12e407b6u); f_12e40960();
  /* 12e407b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e407b9 jmp 0x12e40858 */
  goto L_12e40858;
L_12e407be:;
  /* 12e407be mov edx, dword ptr [0x12e5e7f8] */
  EDX = (r32((uint32_t)(0x12e5e7f8)));
  /* 12e407c4 mov dword ptr [0x12e5e808], edx */
  w32((uint32_t)(0x12e5e808), (EDX));
  /* 12e407ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e407cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e407d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e407d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e407d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e407d8 mov ecx, eax */
  ECX = (EAX);
  /* 12e407da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e407dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e407e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e407e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e407e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e407e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12e407ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e407ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e407f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e407f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e407f6 push eax */
  push32((uint32_t)(EAX));
  /* 12e407f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e407fa push ecx */
  push32((uint32_t)(ECX));
  /* 12e407fb push 4 */
  push32((uint32_t)(0x4u));
  /* 12e407fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40800 push edx */
  push32((uint32_t)(EDX));
  /* 12e40801 call 0x12e40960 */
  push32(0x12e40806u); f_12e40960();
  /* 12e40806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40809 jmp 0x12e40858 */
  goto L_12e40858;
L_12e4080b:;
  /* 12e4080b call 0x12e41920 */
  push32(0x12e40810u); f_12e41920();
  /* 12e40810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40813 push eax */
  push32((uint32_t)(EAX));
  /* 12e40814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40817 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4081b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4081d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12e40824 mov ecx, dword ptr [eax*4 + 0x12e5de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5de1c)));
  /* 12e4082b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4082c call 0x12e40910 */
  push32(0x12e40831u); f_12e40910();
  /* 12e40831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40834 jmp 0x12e40858 */
  goto L_12e40858;
L_12e40836:;
  /* 12e40836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e4083b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12e4083e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e4084b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4084e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e40858:;
  /* 12e40858 pop esi */
  ESI = (pop32());
  /* 12e40859 mov esp, ebp */
  ESP = (EBP);
  /* 12e4085b pop ebp */
  EBP = (pop32());
  /* 12e4085c ret  */
  ESPCHK(0x12e402f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12e40910 (72 bytes, 30 insns) */
void f_12e40910(void) {
  FTRACE(0x12e40910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40910 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40911 mov ebp, esp */
  EBP = (ESP);
L_12e40913:;
  /* 12e40913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40919 je 0x12e40956 */
  if (C.zf) goto L_12e40956;
  /* 12e4091b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4091e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e40921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e40923 je 0x12e40956 */
  if (C.zf) goto L_12e40956;
  /* 12e40925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e4092a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4092d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e4092f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e40931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4093c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e4093e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e40947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4094a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e4094c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e4094f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e40954 jmp 0x12e40913 */
  goto L_12e40913;
L_12e40956:;
  /* 12e40956 pop ebp */
  EBP = (pop32());
  /* 12e40957 ret  */
  ESPCHK(0x12e40910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x12e40960 (173 bytes, 64 insns) */
void f_12e40960(void) {
  FTRACE(0x12e40960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40960 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40961 mov ebp, esp */
  EBP = (ESP);
  /* 12e40963 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e4096b cmp dword ptr [0x12e5e808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40972 je 0x12e4098a */
  if (C.zf) goto L_12e4098a;
  /* 12e40974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40977 push eax */
  push32((uint32_t)(EAX));
  /* 12e40978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4097b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4097c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4097f push edx */
  push32((uint32_t)(EDX));
  /* 12e40980 call 0x12e40a10 */
  push32(0x12e40985u); f_12e40a10();
  /* 12e40985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40988 jmp 0x12e40a09 */
  goto L_12e40a09;
L_12e4098a:;
  /* 12e4098a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4098d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40992 jae 0x12e40a00 */
  if (!C.cf) goto L_12e40a00;
  /* 12e40994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e4099a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e4099d jmp 0x12e409a8 */
  goto L_12e409a8;
L_12e4099f:;
  /* 12e4099f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e409a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e409a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12e409a8:;
  /* 12e409a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e409ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e409ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e409b0 je 0x12e409e4 */
  if (C.zf) goto L_12e409e4;
  /* 12e409b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e409b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e409b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e409bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e409bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e409c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e409c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e409c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e409c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12e409cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e409ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e409cf mov ecx, 0xa */
  ECX = (0xau);
  /* 12e409d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e409d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e409d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e409dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e409df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e409e2 jmp 0x12e4099f */
  goto L_12e4099f;
L_12e409e4:;
  /* 12e409e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e409e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e409e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e409ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e409ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e409f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e409f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e409f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e409f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e409fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e409fe jmp 0x12e40a09 */
  goto L_12e40a09;
L_12e40a00:;
  /* 12e40a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e40a09:;
  /* 12e40a09 mov esp, ebp */
  ESP = (EBP);
  /* 12e40a0b pop ebp */
  EBP = (pop32());
  /* 12e40a0c ret  */
  ESPCHK(0x12e40960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12e40a10 (172 bytes, 65 insns) */
void f_12e40a10(void) {
  FTRACE(0x12e40a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40a11 mov ebp, esp */
  EBP = (ESP);
  /* 12e40a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e40a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40a24 jbe 0x12e40a6b */
  if ((C.cf||C.zf)) goto L_12e40a6b;
L_12e40a26:;
  /* 12e40a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e40a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 12e40a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e40a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e40a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e40a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e40a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e40a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e40a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e40a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e40a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40a61 jle 0x12e40a6b */
  if ((C.zf||C.sf!=C.of)) goto L_12e40a6b;
  /* 12e40a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40a69 ja 0x12e40a26 */
  if ((!C.cf&&!C.zf)) goto L_12e40a26;
L_12e40a6b:;
  /* 12e40a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e40a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e40a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e40a84:;
  /* 12e40a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12e40a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e40a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e40a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e40a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e40aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e40aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e40aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e40aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e40ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e40ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40ab6 jb 0x12e40a84 */
  if (C.cf) goto L_12e40a84;
  /* 12e40ab8 mov esp, ebp */
  ESP = (EBP);
  /* 12e40aba pop ebp */
  EBP = (pop32());
  /* 12e40abb ret  */
  ESPCHK(0x12e40a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x12e40ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12e40ac0(void) {
  FTRACE(0x12e40ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12e40ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e40ac6:;
  /* 12e40ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e40acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e40ace je 0x12e40f3c */
  if (C.zf) goto L_12e40f3c;
  /* 12e40ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40ada je 0x12e40f3c */
  if (C.zf) goto L_12e40f3c;
  /* 12e40ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e40ae4 mov dword ptr [0x12e5e808], 0 */
  w32((uint32_t)(0x12e5e808), (0x0u));
  /* 12e40aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e40af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e40afb jmp 0x12e40b06 */
  goto L_12e40b06;
L_12e40afd:;
  /* 12e40afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e40b06:;
  /* 12e40b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e40b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e40b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e40b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40b1d jne 0x12e40b21 */
  if (!C.zf) goto L_12e40b21;
  /* 12e40b1f jmp 0x12e40afd */
  goto L_12e40afd;
L_12e40b21:;
  /* 12e40b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e40b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e40b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e40b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e40b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40b40 ja 0x12e40e90 */
  if ((!C.cf&&!C.zf)) goto L_12e40e90;
  /* 12e40b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e40b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e40b4b mov al, byte ptr [ecx + 0x12e40f6c] */
  AL = (r8((uint32_t)(ECX + 0x12e40f6c)));
  /* 12e40b51 jmp dword ptr [eax*4 + 0x12e40f40] */
  switch (EAX) {
    case 0: goto L_12e40daf;
    case 1: goto L_12e40c93;
    case 2: goto L_12e40c1e;
    case 3: goto L_12e40b58;
    case 4: goto L_12e40b96;
    case 5: goto L_12e40bf7;
    case 6: goto L_12e40c45;
    case 7: goto L_12e40c6c;
    case 8: goto L_12e40cda;
    case 9: goto L_12e40bd4;
    case 10: goto L_12e40e90;
    default: x86_unimpl("switch@0x12e40b51 out of table"); return;
  }
L_12e40b58:;
  /* 12e40b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e40b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e40b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e40b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40b6b ja 0x12e40b91 */
  if ((!C.cf&&!C.zf)) goto L_12e40b91;
  /* 12e40b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e40b70 jmp dword ptr [ecx*4 + 0x12e40fbf] */
  switch (ECX) {
    case 0: goto L_12e40b77;
    case 1: goto L_12e40b81;
    case 2: goto L_12e40b87;
    case 3: goto L_12e40b8d;
    case 4: goto L_12e40bb5;
    case 5: goto L_12e40bbf;
    case 6: goto L_12e40bc5;
    case 7: goto L_12e40bcb;
    default: x86_unimpl("switch@0x12e40b70 out of table"); return;
  }
L_12e40b77:;
  /* 12e40b77 mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40b81:;
  /* 12e40b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12e40b85 jmp 0x12e40b91 */
  goto L_12e40b91;
L_12e40b87:;
  /* 12e40b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12e40b8b jmp 0x12e40b91 */
  goto L_12e40b91;
L_12e40b8d:;
  /* 12e40b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12e40b91:;
  /* 12e40b91 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40b96:;
  /* 12e40b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e40b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e40b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e40ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40ba9 ja 0x12e40bcf */
  if ((!C.cf&&!C.zf)) goto L_12e40bcf;
  /* 12e40bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e40bae jmp dword ptr [ecx*4 + 0x12e40fcf] */
  switch (ECX) {
    case 0: goto L_12e40bb5;
    case 1: goto L_12e40bbf;
    case 2: goto L_12e40bc5;
    case 3: goto L_12e40bcb;
    default: x86_unimpl("switch@0x12e40bae out of table"); return;
  }
L_12e40bb5:;
  /* 12e40bb5 mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40bbf:;
  /* 12e40bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12e40bc3 jmp 0x12e40bcf */
  goto L_12e40bcf;
L_12e40bc5:;
  /* 12e40bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12e40bc9 jmp 0x12e40bcf */
  goto L_12e40bcf;
L_12e40bcb:;
  /* 12e40bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12e40bcf:;
  /* 12e40bcf jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40bd4:;
  /* 12e40bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e40bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40bde je 0x12e40be8 */
  if (C.zf) goto L_12e40be8;
  /* 12e40be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40be4 je 0x12e40bee */
  if (C.zf) goto L_12e40bee;
  /* 12e40be6 jmp 0x12e40bf2 */
  goto L_12e40bf2;
L_12e40be8:;
  /* 12e40be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12e40bec jmp 0x12e40bf2 */
  goto L_12e40bf2;
L_12e40bee:;
  /* 12e40bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12e40bf2:;
  /* 12e40bf2 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40bf7:;
  /* 12e40bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e40bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c01 je 0x12e40c0b */
  if (C.zf) goto L_12e40c0b;
  /* 12e40c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c07 je 0x12e40c15 */
  if (C.zf) goto L_12e40c15;
  /* 12e40c09 jmp 0x12e40c19 */
  goto L_12e40c19;
L_12e40c0b:;
  /* 12e40c0b mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40c15:;
  /* 12e40c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12e40c19:;
  /* 12e40c19 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40c1e:;
  /* 12e40c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e40c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c28 je 0x12e40c32 */
  if (C.zf) goto L_12e40c32;
  /* 12e40c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c2e je 0x12e40c3c */
  if (C.zf) goto L_12e40c3c;
  /* 12e40c30 jmp 0x12e40c40 */
  goto L_12e40c40;
L_12e40c32:;
  /* 12e40c32 mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40c3c:;
  /* 12e40c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12e40c40:;
  /* 12e40c40 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40c45:;
  /* 12e40c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12e40c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c4f je 0x12e40c59 */
  if (C.zf) goto L_12e40c59;
  /* 12e40c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c55 je 0x12e40c63 */
  if (C.zf) goto L_12e40c63;
  /* 12e40c57 jmp 0x12e40c67 */
  goto L_12e40c67;
L_12e40c59:;
  /* 12e40c59 mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40c63:;
  /* 12e40c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12e40c67:;
  /* 12e40c67 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40c6c:;
  /* 12e40c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e40c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c76 je 0x12e40c80 */
  if (C.zf) goto L_12e40c80;
  /* 12e40c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40c7c je 0x12e40c8a */
  if (C.zf) goto L_12e40c8a;
  /* 12e40c7e jmp 0x12e40c8e */
  goto L_12e40c8e;
L_12e40c80:;
  /* 12e40c80 mov dword ptr [0x12e5e808], 1 */
  w32((uint32_t)(0x12e5e808), (0x1u));
L_12e40c8a:;
  /* 12e40c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12e40c8e:;
  /* 12e40c8e jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40c93:;
  /* 12e40c93 push 0x12e5a7fc */
  push32((uint32_t)(0x12e5a7fcu));
  /* 12e40c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40c9b push ecx */
  push32((uint32_t)(ECX));
  /* 12e40c9c call 0x12e414f0 */
  push32(0x12e40ca1u); f_12e414f0();
  /* 12e40ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e40ca6 jne 0x12e40cb3 */
  if (!C.zf) goto L_12e40cb3;
  /* 12e40ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e40cb1 jmp 0x12e40cd1 */
  goto L_12e40cd1;
L_12e40cb3:;
  /* 12e40cb3 push 0x12e5a7f8 */
  push32((uint32_t)(0x12e5a7f8u));
  /* 12e40cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40cbb push eax */
  push32((uint32_t)(EAX));
  /* 12e40cbc call 0x12e414f0 */
  push32(0x12e40cc1u); f_12e414f0();
  /* 12e40cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e40cc6 jne 0x12e40cd1 */
  if (!C.zf) goto L_12e40cd1;
  /* 12e40cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e40cd1:;
  /* 12e40cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12e40cd5 jmp 0x12e40e90 */
  goto L_12e40e90;
L_12e40cda:;
  /* 12e40cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40ce1 jg 0x12e40cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e40cf1;
  /* 12e40ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e40cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e40cef jmp 0x12e40cfd */
  goto L_12e40cfd;
L_12e40cf1:;
  /* 12e40cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e40cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e40cfd:;
  /* 12e40cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40d01 jle 0x12e40da4 */
  if ((C.zf||C.sf!=C.of)) goto L_12e40da4;
  /* 12e40d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40d0d jbe 0x12e40da4 */
  if ((C.cf||C.zf)) goto L_12e40da4;
  /* 12e40d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e40d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40d1a mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e40d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e40d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e40d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e40d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e40d2e je 0x12e40d67 */
  if (C.zf) goto L_12e40d67;
  /* 12e40d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40d36 jbe 0x12e40d67 */
  if ((C.cf||C.zf)) goto L_12e40d67;
  /* 12e40d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e40d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e40d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e40d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e40d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e40d67:;
  /* 12e40d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e40d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e40d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e40d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e40d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e40d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e40d9f jmp 0x12e40cfd */
  goto L_12e40cfd;
L_12e40da4:;
  /* 12e40da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e40daa jmp 0x12e40ac6 */
  goto L_12e40ac6;
L_12e40daf:;
  /* 12e40daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e40db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e40db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e40db7 je 0x12e40e82 */
  if (C.zf) goto L_12e40e82;
  /* 12e40dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e40dc6:;
  /* 12e40dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e40dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e40dce je 0x12e40e80 */
  if (C.zf) goto L_12e40e80;
  /* 12e40dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40dda je 0x12e40e80 */
  if (C.zf) goto L_12e40e80;
  /* 12e40de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e40de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40de9 jne 0x12e40df9 */
  if (!C.zf) goto L_12e40df9;
  /* 12e40deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e40df4 jmp 0x12e40e80 */
  goto L_12e40e80;
L_12e40df9:;
  /* 12e40df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e40dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e40e00 mov edx, dword ptr [0x12e5cc98] */
  EDX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e40e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e40e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e40e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e40e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e40e13 je 0x12e40e4c */
  if (C.zf) goto L_12e40e4c;
  /* 12e40e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40e1b jbe 0x12e40e4c */
  if ((C.cf||C.zf)) goto L_12e40e4c;
  /* 12e40e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e40e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e40e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e40e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e40e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e40e4c:;
  /* 12e40e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e40e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e40e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e40e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e40e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e40e7b jmp 0x12e40dc6 */
  goto L_12e40dc6;
L_12e40e80:;
  /* 12e40e80 jmp 0x12e40e8b */
  goto L_12e40e8b;
L_12e40e82:;
  /* 12e40e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e40e8b:;
  /* 12e40e8b jmp 0x12e40ac6 */
  goto L_12e40ac6;
L_12e40e90:;
  /* 12e40e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e40e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e40e96 je 0x12e40ebc */
  if (C.zf) goto L_12e40ebc;
  /* 12e40e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e40e9b push edx */
  push32((uint32_t)(EDX));
  /* 12e40e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40e9f push eax */
  push32((uint32_t)(EAX));
  /* 12e40ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e40ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e40ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12e40ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e40eab push eax */
  push32((uint32_t)(EAX));
  /* 12e40eac call 0x12e402f0 */
  push32(0x12e40eb1u); f_12e402f0();
  /* 12e40eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e40eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e40eba jmp 0x12e40f37 */
  goto L_12e40f37;
L_12e40ebc:;
  /* 12e40ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e40ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40ec3 mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e40ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e40ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e40ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e40ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e40ed7 je 0x12e40f08 */
  if (C.zf) goto L_12e40f08;
  /* 12e40ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e40ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e40ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e40ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e40efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e40f08:;
  /* 12e40f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e40f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e40f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e40f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e40f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e40f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e40f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e40f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e40f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e40f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e40f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e40f37:;
  /* 12e40f37 jmp 0x12e40ac6 */
  goto L_12e40ac6;
L_12e40f3c:;
  /* 12e40f3c mov esp, ebp */
  ESP = (EBP);
  /* 12e40f3e pop ebp */
  EBP = (pop32());
  /* 12e40f3f ret  */
  ESPCHK(0x12e40ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x12e40fe0 (650 bytes, 178 insns) */
void f_12e40fe0(void) {
  FTRACE(0x12e40fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e40fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e40fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12e40fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e40fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e40fed jne 0x12e41149 */
  if (!C.zf) goto L_12e41149;
  /* 12e40ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e40ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12e40ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12e41002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e4100c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12e41016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e4101e push edx */
  push32((uint32_t)(EDX));
  /* 12e4101f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41022 push eax */
  push32((uint32_t)(EAX));
  /* 12e41023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41026 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4102a push edx */
  push32((uint32_t)(EDX));
  /* 12e4102b call 0x12e42400 */
  push32(0x12e41030u); f_12e42400();
  /* 12e41030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e41036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4103a jne 0x12e410cf */
  if (!C.zf) goto L_12e410cf;
  /* 12e41040 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e41046u);
  /* 12e41046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41049 je 0x12e41050 */
  if (C.zf) goto L_12e41050;
  /* 12e4104b jmp 0x12e4112d */
  goto L_12e4112d;
L_12e41050:;
  /* 12e41050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41052 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41054 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41059 push eax */
  push32((uint32_t)(EAX));
  /* 12e4105a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4105d push ecx */
  push32((uint32_t)(ECX));
  /* 12e4105e call 0x12e42400 */
  push32(0x12e41063u); f_12e42400();
  /* 12e41063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12e4106c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41073 jne 0x12e4107a */
  if (!C.zf) goto L_12e4107a;
  /* 12e41075 jmp 0x12e4112d */
  goto L_12e4112d;
L_12e4107a:;
  /* 12e4107a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12e4107c push 0x12e5a804 */
  push32((uint32_t)(0x12e5a804u));
  /* 12e41081 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e41089 push edx */
  push32((uint32_t)(EDX));
  /* 12e4108a call 0x12e32e20 */
  push32(0x12e4108fu); f_12e32e20();
  /* 12e4108f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e41095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41099 jne 0x12e410a0 */
  if (!C.zf) goto L_12e410a0;
  /* 12e4109b jmp 0x12e4112d */
  goto L_12e4112d;
L_12e410a0:;
  /* 12e410a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e410a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e410a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e410af push eax */
  push32((uint32_t)(EAX));
  /* 12e410b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e410b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e410b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e410b7 push edx */
  push32((uint32_t)(EDX));
  /* 12e410b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e410bb push eax */
  push32((uint32_t)(EAX));
  /* 12e410bc call 0x12e42400 */
  push32(0x12e410c1u); f_12e42400();
  /* 12e410c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e410c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e410c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e410cb jne 0x12e410cf */
  if (!C.zf) goto L_12e410cf;
  /* 12e410cd jmp 0x12e4112d */
  goto L_12e4112d;
L_12e410cf:;
  /* 12e410cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12e410d1 push 0x12e5a804 */
  push32((uint32_t)(0x12e5a804u));
  /* 12e410d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e410d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e410db push ecx */
  push32((uint32_t)(ECX));
  /* 12e410dc call 0x12e32e20 */
  push32(0x12e410e1u); f_12e32e20();
  /* 12e410e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e410e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e410ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e410ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e410f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e410f5 jne 0x12e410f9 */
  if (!C.zf) goto L_12e410f9;
  /* 12e410f7 jmp 0x12e4112d */
  goto L_12e4112d;
L_12e410f9:;
  /* 12e410f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e410fc push ecx */
  push32((uint32_t)(ECX));
  /* 12e410fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41100 push edx */
  push32((uint32_t)(EDX));
  /* 12e41101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e41107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e41109 push ecx */
  push32((uint32_t)(ECX));
  /* 12e4110a call 0x12e36640 */
  push32(0x12e4110fu); f_12e36640();
  /* 12e4110f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41116 je 0x12e41126 */
  if (C.zf) goto L_12e41126;
  /* 12e41118 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e4111a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4111d push edx */
  push32((uint32_t)(EDX));
  /* 12e4111e call 0x12e338b0 */
  push32(0x12e41123u); f_12e338b0();
  /* 12e41123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e41126:;
  /* 12e41126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41128 jmp 0x12e41266 */
  goto L_12e41266;
L_12e4112d:;
  /* 12e4112d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41131 je 0x12e41141 */
  if (C.zf) goto L_12e41141;
  /* 12e41133 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41138 push eax */
  push32((uint32_t)(EAX));
  /* 12e41139 call 0x12e338b0 */
  push32(0x12e4113eu); f_12e338b0();
  /* 12e4113e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e41141:;
  /* 12e41141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e41144 jmp 0x12e41266 */
  goto L_12e41266;
L_12e41149:;
  /* 12e41149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4114d jne 0x12e41263 */
  if (!C.zf) goto L_12e41263;
  /* 12e41153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12e4115d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e41160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12e41166 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e4116e push edx */
  push32((uint32_t)(EDX));
  /* 12e4116f push 0x12e5e720 */
  push32((uint32_t)(0x12e5e720u));
  /* 12e41174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41177 push eax */
  push32((uint32_t)(EAX));
  /* 12e41178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4117b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4117c call 0x12e42260 */
  push32(0x12e41181u); f_12e42260();
  /* 12e41181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e41186 jne 0x12e41190 */
  if (!C.zf) goto L_12e41190;
  /* 12e41188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e4118b jmp 0x12e41266 */
  goto L_12e41266;
L_12e41190:;
  /* 12e41190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e41196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e41199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12e411a3 jmp 0x12e411b4 */
  goto L_12e411b4;
L_12e411a5:;
  /* 12e411a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e411ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e411ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12e411b4:;
  /* 12e411b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e411bb jge 0x12e4125f */
  if ((C.sf==C.of)) goto L_12e4125f;
  /* 12e411c1 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e411c8 jle 0x12e411fb */
  if ((C.zf||C.sf!=C.of)) goto L_12e411fb;
  /* 12e411ca push 4 */
  push32((uint32_t)(0x4u));
  /* 12e411cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e411d2 mov dl, byte ptr [ecx*2 + 0x12e5e720] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e5e720)));
  /* 12e411d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e411df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e411e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e411ea push eax */
  push32((uint32_t)(EAX));
  /* 12e411eb call 0x12e38e30 */
  push32(0x12e411f0u); f_12e38e30();
  /* 12e411f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e411f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12e411f9 jmp 0x12e4122e */
  goto L_12e4122e;
L_12e411fb:;
  /* 12e411fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e41201 mov dl, byte ptr [ecx*2 + 0x12e5e720] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e5e720)));
  /* 12e41208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e4120e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e41214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e41219 mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e4121f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e41225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e41228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12e4122e:;
  /* 12e4122e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41235 je 0x12e41258 */
  if (C.zf) goto L_12e41258;
  /* 12e41237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e4123d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e41240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12e4124a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e4124e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e41254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e41256 jmp 0x12e4125a */
  goto L_12e4125a;
L_12e41258:;
  /* 12e41258 jmp 0x12e4125f */
  goto L_12e4125f;
L_12e4125a:;
  /* 12e4125a jmp 0x12e411a5 */
  goto L_12e411a5;
L_12e4125f:;
  /* 12e4125f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41261 jmp 0x12e41266 */
  goto L_12e41266;
L_12e41263:;
  /* 12e41263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e41266:;
  /* 12e41266 mov esp, ebp */
  ESP = (EBP);
  /* 12e41268 pop ebp */
  EBP = (pop32());
  /* 12e41269 ret  */
  ESPCHK(0x12e40fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x12e41270 (10 bytes, 5 insns) */
void f_12e41270(void) {
  FTRACE(0x12e41270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41270 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41271 mov ebp, esp */
  EBP = (ESP);
  /* 12e41273 mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e41278 pop ebp */
  EBP = (pop32());
  /* 12e41279 ret  */
  ESPCHK(0x12e41270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x12e41280 (575 bytes, 196 insns) */
void f_12e41280(void) {
  FTRACE(0x12e41280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41280 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41281 mov ebp, esp */
  EBP = (ESP);
  /* 12e41283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e41285 push 0x12e5a810 */
  push32((uint32_t)(0x12e5a810u));
  /* 12e4128a push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e4128f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e41295 push eax */
  push32((uint32_t)(EAX));
  /* 12e41296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e4129d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e412a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e412a1 push esi */
  push32((uint32_t)(ESI));
  /* 12e412a2 push edi */
  push32((uint32_t)(EDI));
  /* 12e412a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e412a6 cmp dword ptr [0x12e5e72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e412ad jne 0x12e412fe */
  if (!C.zf) goto L_12e412fe;
  /* 12e412af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12e412b2 push eax */
  push32((uint32_t)(EAX));
  /* 12e412b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e412b5 push 0x12e59f44 */
  push32((uint32_t)(0x12e59f44u));
  /* 12e412ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12e412bc call dword ptr [0x12e60350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60350))), 0x12e412c2u);
  /* 12e412c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e412c4 je 0x12e412d2 */
  if (C.zf) goto L_12e412d2;
  /* 12e412c6 mov dword ptr [0x12e5e72c], 1 */
  w32((uint32_t)(0x12e5e72c), (0x1u));
  /* 12e412d0 jmp 0x12e412fe */
  goto L_12e412fe;
L_12e412d2:;
  /* 12e412d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12e412d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e412d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e412d8 push 0x12e59f40 */
  push32((uint32_t)(0x12e59f40u));
  /* 12e412dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e412df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e412e1 call dword ptr [0x12e6034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6034c))), 0x12e412e7u);
  /* 12e412e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e412e9 je 0x12e412f7 */
  if (C.zf) goto L_12e412f7;
  /* 12e412eb mov dword ptr [0x12e5e72c], 2 */
  w32((uint32_t)(0x12e5e72c), (0x2u));
  /* 12e412f5 jmp 0x12e412fe */
  goto L_12e412fe;
L_12e412f7:;
  /* 12e412f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e412f9 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e412fe:;
  /* 12e412fe cmp dword ptr [0x12e5e72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41305 jne 0x12e41322 */
  if (!C.zf) goto L_12e41322;
  /* 12e41307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4130a push edx */
  push32((uint32_t)(EDX));
  /* 12e4130b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4130e push eax */
  push32((uint32_t)(EAX));
  /* 12e4130f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e41312 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41316 push edx */
  push32((uint32_t)(EDX));
  /* 12e41317 call dword ptr [0x12e60350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60350))), 0x12e4131du);
  /* 12e4131d jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e41322:;
  /* 12e41322 cmp dword ptr [0x12e5e72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41329 jne 0x12e414d7 */
  if (!C.zf) goto L_12e414d7;
  /* 12e4132f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41333 jne 0x12e4133d */
  if (!C.zf) goto L_12e4133d;
  /* 12e41335 mov eax, dword ptr [0x12e5e6a0] */
  EAX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e4133a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12e4133d:;
  /* 12e4133d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4133f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41348 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4134c push edx */
  push32((uint32_t)(EDX));
  /* 12e4134d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e41352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e41355 push eax */
  push32((uint32_t)(EAX));
  /* 12e41356 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e4135cu);
  /* 12e4135c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e4135f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41363 jne 0x12e4136c */
  if (!C.zf) goto L_12e4136c;
  /* 12e41365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41367 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e4136c:;
  /* 12e4136c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e41373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e41376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e4137b call 0x12e35fc0 */
  push32(0x12e41380u); f_12e35fc0();
  /* 12e41380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12e41383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e41386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e41389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e4138c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e4138f push edx */
  push32((uint32_t)(EDX));
  /* 12e41390 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e41395 push eax */
  push32((uint32_t)(EAX));
  /* 12e41396 call 0x12e36b90 */
  push32(0x12e4139bu); f_12e36b90();
  /* 12e4139b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4139e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e413a5 jmp 0x12e413be */
  goto L_12e413be;
  /* 12e413a7 mov eax, 1 */
  EAX = (0x1u);
  /* 12e413ac ret  */
  ESPCHK(0x12e41280u, _esp0);
  ESP += 4; return;
  /* 12e413ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e413b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12e413b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e413be:;
  /* 12e413be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e413c2 jne 0x12e413cb */
  if (!C.zf) goto L_12e413cb;
  /* 12e413c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e413c6 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e413cb:;
  /* 12e413cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e413cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e413cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e413d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e413d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e413d6 push edx */
  push32((uint32_t)(EDX));
  /* 12e413d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e413da push eax */
  push32((uint32_t)(EAX));
  /* 12e413db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e413de push ecx */
  push32((uint32_t)(ECX));
  /* 12e413df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e413e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e413e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e413e8 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e413eeu);
  /* 12e413ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e413f0 jne 0x12e413f9 */
  if (!C.zf) goto L_12e413f9;
  /* 12e413f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e413f4 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e413f9:;
  /* 12e413f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e41400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e41403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12e41407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4140a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e4140c call 0x12e35fc0 */
  push32(0x12e41411u); f_12e35fc0();
  /* 12e41411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12e41414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e41417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e4141a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e4141d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e41424 jmp 0x12e4143d */
  goto L_12e4143d;
  /* 12e41426 mov eax, 1 */
  EAX = (0x1u);
  /* 12e4142b ret  */
  ESPCHK(0x12e41280u, _esp0);
  ESP += 4; return;
  /* 12e4142c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e4142f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e41436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e4143d:;
  /* 12e4143d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41441 jne 0x12e4144a */
  if (!C.zf) goto L_12e4144a;
  /* 12e41443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41445 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e4144a:;
  /* 12e4144a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4144e jne 0x12e41459 */
  if (!C.zf) goto L_12e41459;
  /* 12e41450 mov edx, dword ptr [0x12e5e690] */
  EDX = (r32((uint32_t)(0x12e5e690)));
  /* 12e41456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12e41459:;
  /* 12e41459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4145c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e4145f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12e41465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e4146b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12e41472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e41475 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e41479 push edx */
  push32((uint32_t)(EDX));
  /* 12e4147a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e4147d push eax */
  push32((uint32_t)(EAX));
  /* 12e4147e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41481 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e41485 push edx */
  push32((uint32_t)(EDX));
  /* 12e41486 call dword ptr [0x12e6034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6034c))), 0x12e4148cu);
  /* 12e4148c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e4148f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e41492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e41495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12e4149c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e414a2 je 0x12e414b8 */
  if (C.zf) goto L_12e414b8;
  /* 12e414a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e414a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e414aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e414ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e414b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e414b6 je 0x12e414bc */
  if (C.zf) goto L_12e414bc;
L_12e414b8:;
  /* 12e414b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e414ba jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e414bc:;
  /* 12e414bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e414bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e414c1 push eax */
  push32((uint32_t)(EAX));
  /* 12e414c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e414c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e414c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e414c9 push edx */
  push32((uint32_t)(EDX));
  /* 12e414ca call 0x12e3ad10 */
  push32(0x12e414cfu); f_12e3ad10();
  /* 12e414cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e414d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e414d5 jmp 0x12e414d9 */
  goto L_12e414d9;
L_12e414d7:;
  /* 12e414d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e414d9:;
  /* 12e414d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12e414dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e414df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e414e6 pop edi */
  EDI = (pop32());
  /* 12e414e7 pop esi */
  ESI = (pop32());
  /* 12e414e8 pop ebx */
  EBX = (pop32());
  /* 12e414e9 mov esp, ebp */
  ESP = (EBP);
  /* 12e414eb pop ebp */
  EBP = (pop32());
  /* 12e414ec ret  */
  ESPCHK(0x12e41280u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x12e414f0 (208 bytes, 85 insns) */
void f_12e414f0(void) {
  FTRACE(0x12e414f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e414f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e414f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e414f3 push edi */
  push32((uint32_t)(EDI));
  /* 12e414f4 push esi */
  push32((uint32_t)(ESI));
  /* 12e414f5 push ebx */
  push32((uint32_t)(EBX));
  /* 12e414f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e414f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e414fc lea eax, [0x12e5e688] */
  EAX = ((uint32_t)(0x12e5e688));
  /* 12e41502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41506 jne 0x12e41543 */
  if (!C.zf) goto L_12e41543;
  /* 12e41508 mov al, 0xff */
  AL = (0xffu);
  /* 12e4150a mov edi, edi */
  EDI = (EDI);
L_12e4150c:;
  /* 12e4150c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e4150e je 0x12e4153e */
  if (C.zf) goto L_12e4153e;
  /* 12e41510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e41512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e41513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12e41515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e41516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41518 je 0x12e4150c */
  if (C.zf) goto L_12e4150c;
  /* 12e4151a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e4151c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e4151e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e41520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e41523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e41525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e41527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12e41529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e4152b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e4152d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e4152f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e41532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e41534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e41536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41538 je 0x12e4150c */
  if (C.zf) goto L_12e4150c;
  /* 12e4153a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e4153c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12e4153e:;
  /* 12e4153e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12e41541 jmp 0x12e415bb */
  goto L_12e415bb;
L_12e41543:;
  /* 12e41543 lock inc dword ptr [0x12e5e81c] */
  x86_unimpl("lock inc @ 0x12e41543");
  /* 12e4154a cmp dword ptr [0x12e5e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41551 jg 0x12e41557 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e41557;
  /* 12e41553 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41555 jmp 0x12e4156c */
  goto L_12e4156c;
L_12e41557:;
  /* 12e41557 lock dec dword ptr [0x12e5e81c] */
  x86_unimpl("lock dec @ 0x12e41557");
  /* 12e4155e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e41560 call 0x12e36820 */
  push32(0x12e41565u); f_12e36820();
  /* 12e41565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12e4156c:;
  /* 12e4156c mov eax, 0xff */
  EAX = (0xffu);
  /* 12e41571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e41573 nop  */
  /* nop */
L_12e41574:;
  /* 12e41574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e41576 je 0x12e4159f */
  if (C.zf) goto L_12e4159f;
  /* 12e41578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e4157a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e4157b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e4157d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e4157e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41580 je 0x12e41574 */
  if (C.zf) goto L_12e41574;
  /* 12e41582 push eax */
  push32((uint32_t)(EAX));
  /* 12e41583 push ebx */
  push32((uint32_t)(EBX));
  /* 12e41584 call 0x12e42660 */
  push32(0x12e41589u); f_12e42660();
  /* 12e41589 mov ebx, eax */
  EBX = (EAX);
  /* 12e4158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4158e call 0x12e42660 */
  push32(0x12e41593u); f_12e42660();
  /* 12e41593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41598 je 0x12e41574 */
  if (C.zf) goto L_12e41574;
  /* 12e4159a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e4159c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e4159f:;
  /* 12e4159f mov ebx, eax */
  EBX = (EAX);
  /* 12e415a1 pop eax */
  EAX = (pop32());
  /* 12e415a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e415a4 jne 0x12e415af */
  if (!C.zf) goto L_12e415af;
  /* 12e415a6 lock dec dword ptr [0x12e5e81c] */
  x86_unimpl("lock dec @ 0x12e415a6");
  /* 12e415ad jmp 0x12e415b9 */
  goto L_12e415b9;
L_12e415af:;
  /* 12e415af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e415b1 call 0x12e368c0 */
  push32(0x12e415b6u); f_12e368c0();
  /* 12e415b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e415b9:;
  /* 12e415b9 mov eax, ebx */
  EAX = (EBX);
L_12e415bb:;
  /* 12e415bb pop ebx */
  EBX = (pop32());
  /* 12e415bc pop esi */
  ESI = (pop32());
  /* 12e415bd pop edi */
  EDI = (pop32());
  /* 12e415be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e415bf ret  */
  ESPCHK(0x12e414f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115c0 @ 0x12e415c0 (257 bytes, 103 insns) */
void f_12e415c0(void) {
  FTRACE(0x12e415c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e415c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e415c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e415c3 push edi */
  push32((uint32_t)(EDI));
  /* 12e415c4 push esi */
  push32((uint32_t)(ESI));
  /* 12e415c5 push ebx */
  push32((uint32_t)(EBX));
  /* 12e415c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e415c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e415cb je 0x12e416ba */
  if (C.zf) goto L_12e416ba;
  /* 12e415d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e415d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e415d7 lea eax, [0x12e5e688] */
  EAX = ((uint32_t)(0x12e5e688));
  /* 12e415dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e415e1 jne 0x12e41631 */
  if (!C.zf) goto L_12e41631;
  /* 12e415e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12e415e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12e415e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12e415e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e415ec:;
  /* 12e415ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12e415ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e415f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12e415f2 je 0x12e41615 */
  if (C.zf) goto L_12e41615;
  /* 12e415f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e415f6 je 0x12e41615 */
  if (C.zf) goto L_12e41615;
  /* 12e415f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e415f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e415fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e415fc jb 0x12e41604 */
  if (C.cf) goto L_12e41604;
  /* 12e415fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41600 ja 0x12e41604 */
  if ((!C.cf&&!C.zf)) goto L_12e41604;
  /* 12e41602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12e41604:;
  /* 12e41604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41606 jb 0x12e4160e */
  if (C.cf) goto L_12e4160e;
  /* 12e41608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e4160a ja 0x12e4160e */
  if ((!C.cf&&!C.zf)) goto L_12e4160e;
  /* 12e4160c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12e4160e:;
  /* 12e4160e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41610 jne 0x12e4161f */
  if (!C.zf) goto L_12e4161f;
  /* 12e41612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e41613 jne 0x12e415ec */
  if (!C.zf) goto L_12e415ec;
L_12e41615:;
  /* 12e41615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e41619 je 0x12e416ba */
  if (C.zf) goto L_12e416ba;
L_12e4161f:;
  /* 12e4161f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e41624 jb 0x12e416ba */
  if (C.cf) goto L_12e416ba;
  /* 12e4162a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e4162c jmp 0x12e416ba */
  goto L_12e416ba;
L_12e41631:;
  /* 12e41631 lock inc dword ptr [0x12e5e81c] */
  x86_unimpl("lock inc @ 0x12e41631");
  /* 12e41638 cmp dword ptr [0x12e5e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4163f jg 0x12e41645 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e41645;
  /* 12e41641 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41643 jmp 0x12e4165e */
  goto L_12e4165e;
L_12e41645:;
  /* 12e41645 lock dec dword ptr [0x12e5e81c] */
  x86_unimpl("lock dec @ 0x12e41645");
  /* 12e4164c mov ebx, ecx */
  EBX = (ECX);
  /* 12e4164e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e41650 call 0x12e36820 */
  push32(0x12e41655u); f_12e36820();
  /* 12e41655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12e4165c mov ecx, ebx */
  ECX = (EBX);
L_12e4165e:;
  /* 12e4165e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e41662 mov edi, edi */
  EDI = (EDI);
L_12e41664:;
  /* 12e41664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e41666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e4166a je 0x12e4168f */
  if (C.zf) goto L_12e4168f;
  /* 12e4166c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e4166e je 0x12e4168f */
  if (C.zf) goto L_12e4168f;
  /* 12e41670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e41671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e41672 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41673 push eax */
  push32((uint32_t)(EAX));
  /* 12e41674 push ebx */
  push32((uint32_t)(EBX));
  /* 12e41675 call 0x12e42660 */
  push32(0x12e4167au); f_12e42660();
  /* 12e4167a mov ebx, eax */
  EBX = (EAX);
  /* 12e4167c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4167f call 0x12e42660 */
  push32(0x12e41684u); f_12e42660();
  /* 12e41684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41687 pop ecx */
  ECX = (pop32());
  /* 12e41688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4168a jne 0x12e41695 */
  if (!C.zf) goto L_12e41695;
  /* 12e4168c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e4168d jne 0x12e41664 */
  if (!C.zf) goto L_12e41664;
L_12e4168f:;
  /* 12e4168f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41693 je 0x12e4169e */
  if (C.zf) goto L_12e4169e;
L_12e41695:;
  /* 12e41695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e4169a jb 0x12e4169e */
  if (C.cf) goto L_12e4169e;
  /* 12e4169c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12e4169e:;
  /* 12e4169e pop eax */
  EAX = (pop32());
  /* 12e4169f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e416a1 jne 0x12e416ac */
  if (!C.zf) goto L_12e416ac;
  /* 12e416a3 lock dec dword ptr [0x12e5e81c] */
  x86_unimpl("lock dec @ 0x12e416a3");
  /* 12e416aa jmp 0x12e416ba */
  goto L_12e416ba;
L_12e416ac:;
  /* 12e416ac mov ebx, ecx */
  EBX = (ECX);
  /* 12e416ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e416b0 call 0x12e368c0 */
  push32(0x12e416b5u); f_12e368c0();
  /* 12e416b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e416b8 mov ecx, ebx */
  ECX = (EBX);
L_12e416ba:;
  /* 12e416ba mov eax, ecx */
  EAX = (ECX);
  /* 12e416bc pop ebx */
  EBX = (pop32());
  /* 12e416bd pop esi */
  ESI = (pop32());
  /* 12e416be pop edi */
  EDI = (pop32());
  /* 12e416bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e416c0 ret  */
  ESPCHK(0x12e415c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x12e416d0 (255 bytes, 88 insns) */
void f_12e416d0(void) {
  FTRACE(0x12e416d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e416d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e416d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e416d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e416d6:;
  /* 12e416d6 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e416dd jle 0x12e416f6 */
  if ((C.zf||C.sf!=C.of)) goto L_12e416f6;
  /* 12e416df push 8 */
  push32((uint32_t)(0x8u));
  /* 12e416e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e416e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e416e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e416e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e416e9 call 0x12e38e30 */
  push32(0x12e416eeu); f_12e38e30();
  /* 12e416ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e416f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e416f4 jmp 0x12e4170f */
  goto L_12e4170f;
L_12e416f6:;
  /* 12e416f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e416f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e416fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e416fd mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e41703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41705 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e41709 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e4170c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e4170f:;
  /* 12e4170f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41713 je 0x12e41720 */
  if (C.zf) goto L_12e41720;
  /* 12e41715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4171b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e4171e jmp 0x12e416d6 */
  goto L_12e416d6;
L_12e41720:;
  /* 12e41720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41725 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e41727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e4172a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4172d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41730 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e41733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e41736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41739 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4173d je 0x12e41745 */
  if (C.zf) goto L_12e41745;
  /* 12e4173f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41743 jne 0x12e41758 */
  if (!C.zf) goto L_12e41758;
L_12e41745:;
  /* 12e41745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4174a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e4174c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e4174f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41755 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e41758:;
  /* 12e41758 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e4175f:;
  /* 12e4175f cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41766 jle 0x12e4177b */
  if ((C.zf||C.sf!=C.of)) goto L_12e4177b;
  /* 12e41768 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e4176a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4176d push edx */
  push32((uint32_t)(EDX));
  /* 12e4176e call 0x12e38e30 */
  push32(0x12e41773u); f_12e38e30();
  /* 12e41773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41776 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e41779 jmp 0x12e41790 */
  goto L_12e41790;
L_12e4177b:;
  /* 12e4177b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4177e mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e41784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e4178a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e4178d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e41790:;
  /* 12e41790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41794 je 0x12e417bb */
  if (C.zf) goto L_12e417bb;
  /* 12e41796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e41799 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e4179c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4179f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12e417a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e417a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e417a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e417ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e417ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e417b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e417b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e417b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e417b9 jmp 0x12e4175f */
  goto L_12e4175f;
L_12e417bb:;
  /* 12e417bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e417bf jne 0x12e417c8 */
  if (!C.zf) goto L_12e417c8;
  /* 12e417c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e417c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e417c6 jmp 0x12e417cb */
  goto L_12e417cb;
L_12e417c8:;
  /* 12e417c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e417cb:;
  /* 12e417cb mov esp, ebp */
  ESP = (EBP);
  /* 12e417cd pop ebp */
  EBP = (pop32());
  /* 12e417ce ret  */
  ESPCHK(0x12e416d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x12e417d0 (17 bytes, 8 insns) */
void f_12e417d0(void) {
  FTRACE(0x12e417d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e417d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e417d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e417d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e417d6 push eax */
  push32((uint32_t)(EAX));
  /* 12e417d7 call 0x12e416d0 */
  push32(0x12e417dcu); f_12e416d0();
  /* 12e417dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e417df pop ebp */
  EBP = (pop32());
  /* 12e417e0 ret  */
  ESPCHK(0x12e417d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x12e417f0 (297 bytes, 106 insns) */
void f_12e417f0(void) {
  FTRACE(0x12e417f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e417f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e417f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e417f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e417f6 push esi */
  push32((uint32_t)(ESI));
L_12e417f7:;
  /* 12e417f7 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e417fe jle 0x12e41817 */
  if ((C.zf||C.sf!=C.of)) goto L_12e41817;
  /* 12e41800 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e41802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41807 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e41809 push ecx */
  push32((uint32_t)(ECX));
  /* 12e4180a call 0x12e38e30 */
  push32(0x12e4180fu); f_12e38e30();
  /* 12e4180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41812 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e41815 jmp 0x12e41830 */
  goto L_12e41830;
L_12e41817:;
  /* 12e41817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4181c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e4181e mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e41824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e4182a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e4182d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e41830:;
  /* 12e41830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41834 je 0x12e41841 */
  if (C.zf) goto L_12e41841;
  /* 12e41836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4183c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e4183f jmp 0x12e417f7 */
  goto L_12e417f7;
L_12e41841:;
  /* 12e41841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e41848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e4184b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4184e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41851 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e41854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e41857 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e4185a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4185e je 0x12e41866 */
  if (C.zf) goto L_12e41866;
  /* 12e41860 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41864 jne 0x12e41879 */
  if (!C.zf) goto L_12e41879;
L_12e41866:;
  /* 12e41866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4186b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e4186d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e41870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41876 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e41879:;
  /* 12e41879 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e41880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e41887:;
  /* 12e41887 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4188e jle 0x12e418a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e418a3;
  /* 12e41890 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e41892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e41895 push edx */
  push32((uint32_t)(EDX));
  /* 12e41896 call 0x12e38e30 */
  push32(0x12e4189bu); f_12e38e30();
  /* 12e4189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4189e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e418a1 jmp 0x12e418b8 */
  goto L_12e418b8;
L_12e418a3:;
  /* 12e418a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e418a6 mov ecx, dword ptr [0x12e5cc98] */
  ECX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e418ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e418ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e418b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e418b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12e418b8:;
  /* 12e418b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e418bc je 0x12e418f9 */
  if (C.zf) goto L_12e418f9;
  /* 12e418be push 0 */
  push32((uint32_t)(0x0u));
  /* 12e418c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e418c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e418c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e418c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e418c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e418ca call 0x12e42790 */
  push32(0x12e418cfu); f_12e42790();
  /* 12e418cf mov ecx, eax */
  ECX = (EAX);
  /* 12e418d1 mov esi, edx */
  ESI = (EDX);
  /* 12e418d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e418d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e418d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e418da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e418dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e418de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e418e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12e418e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e418e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e418e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e418eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e418ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e418f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e418f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e418f7 jmp 0x12e41887 */
  goto L_12e41887;
L_12e418f9:;
  /* 12e418f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e418fd jne 0x12e4190e */
  if (!C.zf) goto L_12e4190e;
  /* 12e418ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41902 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e41904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e41907 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4190a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e4190c jmp 0x12e41914 */
  goto L_12e41914;
L_12e4190e:;
  /* 12e4190e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12e41914:;
  /* 12e41914 pop esi */
  ESI = (pop32());
  /* 12e41915 mov esp, ebp */
  ESP = (EBP);
  /* 12e41917 pop ebp */
  EBP = (pop32());
  /* 12e41918 ret  */
  ESPCHK(0x12e417f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011920 @ 0x12e41920 (61 bytes, 18 insns) */
void f_12e41920(void) {
  FTRACE(0x12e41920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41920 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41921 mov ebp, esp */
  EBP = (ESP);
  /* 12e41923 cmp dword ptr [0x12e5e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4192a jne 0x12e4195b */
  if (!C.zf) goto L_12e4195b;
  /* 12e4192c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e4192e call 0x12e36820 */
  push32(0x12e41933u); f_12e36820();
  /* 12e41933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41936 cmp dword ptr [0x12e5e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4193d jne 0x12e41951 */
  if (!C.zf) goto L_12e41951;
  /* 12e4193f call 0x12e41980 */
  push32(0x12e41944u); f_12e41980();
  /* 12e41944 mov eax, dword ptr [0x12e5e7e8] */
  EAX = (r32((uint32_t)(0x12e5e7e8)));
  /* 12e41949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4194c mov dword ptr [0x12e5e7e8], eax */
  w32((uint32_t)(0x12e5e7e8), (EAX));
L_12e41951:;
  /* 12e41951 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e41953 call 0x12e368c0 */
  push32(0x12e41958u); f_12e368c0();
  /* 12e41958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e4195b:;
  /* 12e4195b pop ebp */
  EBP = (pop32());
  /* 12e4195c ret  */
  ESPCHK(0x12e41920u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x12e41960 (30 bytes, 11 insns) */
void f_12e41960(void) {
  FTRACE(0x12e41960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41960 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41961 mov ebp, esp */
  EBP = (ESP);
  /* 12e41963 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e41965 call 0x12e36820 */
  push32(0x12e4196au); f_12e36820();
  /* 12e4196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4196d call 0x12e41980 */
  push32(0x12e41972u); f_12e41980();
  /* 12e41972 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e41974 call 0x12e368c0 */
  push32(0x12e41979u); f_12e368c0();
  /* 12e41979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4197c pop ebp */
  EBP = (pop32());
  /* 12e4197d ret  */
  ESPCHK(0x12e41960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x12e41980 (939 bytes, 266 insns) */
void f_12e41980(void) {
  FTRACE(0x12e41980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41980 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41981 mov ebp, esp */
  EBP = (ESP);
  /* 12e41983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e41986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e4198d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e4198f call 0x12e36820 */
  push32(0x12e41994u); f_12e36820();
  /* 12e41994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41997 mov dword ptr [0x12e5e730], 0 */
  w32((uint32_t)(0x12e5e730), (0x0u));
  /* 12e419a1 mov dword ptr [0x12e5de38], 0xffffffff */
  w32((uint32_t)(0x12e5de38), (0xffffffffu));
  /* 12e419ab mov eax, dword ptr [0x12e5de38] */
  EAX = (r32((uint32_t)(0x12e5de38)));
  /* 12e419b0 mov dword ptr [0x12e5de28], eax */
  w32((uint32_t)(0x12e5de28), (EAX));
  /* 12e419b5 push 0x12e5a870 */
  push32((uint32_t)(0x12e5a870u));
  /* 12e419ba call 0x12e42800 */
  push32(0x12e419bfu); f_12e42800();
  /* 12e419bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e419c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e419c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e419c9 jne 0x12e41b03 */
  if (!C.zf) goto L_12e41b03;
  /* 12e419cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e419d1 call 0x12e368c0 */
  push32(0x12e419d6u); f_12e368c0();
  /* 12e419d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e419d9 push 0x12e5e738 */
  push32((uint32_t)(0x12e5e738u));
  /* 12e419de call dword ptr [0x12e60250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60250))), 0x12e419e4u);
  /* 12e419e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e419e7 je 0x12e41afe */
  if (C.zf) goto L_12e41afe;
  /* 12e419ed mov dword ptr [0x12e5e730], 1 */
  w32((uint32_t)(0x12e5e730), (0x1u));
  /* 12e419f7 mov ecx, dword ptr [0x12e5e738] */
  ECX = (r32((uint32_t)(0x12e5e738)));
  /* 12e419fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41a00 mov dword ptr [0x12e5dd90], ecx */
  w32((uint32_t)(0x12e5dd90), (ECX));
  /* 12e41a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41a08 mov dx, word ptr [0x12e5e77e] */
  DX = (r16((uint32_t)(0x12e5e77e)));
  /* 12e41a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e41a11 je 0x12e41a29 */
  if (C.zf) goto L_12e41a29;
  /* 12e41a13 mov eax, dword ptr [0x12e5e78c] */
  EAX = (r32((uint32_t)(0x12e5e78c)));
  /* 12e41a18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41a1b mov ecx, dword ptr [0x12e5dd90] */
  ECX = (r32((uint32_t)(0x12e5dd90)));
  /* 12e41a21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41a23 mov dword ptr [0x12e5dd90], ecx */
  w32((uint32_t)(0x12e5dd90), (ECX));
L_12e41a29:;
  /* 12e41a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41a2b mov dx, word ptr [0x12e5e7d2] */
  DX = (r16((uint32_t)(0x12e5e7d2)));
  /* 12e41a32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e41a34 je 0x12e41a5e */
  if (C.zf) goto L_12e41a5e;
  /* 12e41a36 cmp dword ptr [0x12e5e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41a3d je 0x12e41a5e */
  if (C.zf) goto L_12e41a5e;
  /* 12e41a3f mov dword ptr [0x12e5dd94], 1 */
  w32((uint32_t)(0x12e5dd94), (0x1u));
  /* 12e41a49 mov eax, dword ptr [0x12e5e7e0] */
  EAX = (r32((uint32_t)(0x12e5e7e0)));
  /* 12e41a4e sub eax, dword ptr [0x12e5e78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5e78c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e41a54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41a57 mov dword ptr [0x12e5dd98], eax */
  w32((uint32_t)(0x12e5dd98), (EAX));
  /* 12e41a5c jmp 0x12e41a72 */
  goto L_12e41a72;
L_12e41a5e:;
  /* 12e41a5e mov dword ptr [0x12e5dd94], 0 */
  w32((uint32_t)(0x12e5dd94), (0x0u));
  /* 12e41a68 mov dword ptr [0x12e5dd98], 0 */
  w32((uint32_t)(0x12e5dd98), (0x0u));
L_12e41a72:;
  /* 12e41a72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e41a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41a78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e41a7a mov edx, dword ptr [0x12e5de1c] */
  EDX = (r32((uint32_t)(0x12e5de1c)));
  /* 12e41a80 push edx */
  push32((uint32_t)(EDX));
  /* 12e41a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e41a83 push 0x12e5e73c */
  push32((uint32_t)(0x12e5e73cu));
  /* 12e41a88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e41a8d mov eax, dword ptr [0x12e5e6a0] */
  EAX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e41a92 push eax */
  push32((uint32_t)(EAX));
  /* 12e41a93 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e41a99u);
  /* 12e41a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e41a9b je 0x12e41aaf */
  if (C.zf) goto L_12e41aaf;
  /* 12e41a9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41aa1 jne 0x12e41aaf */
  if (!C.zf) goto L_12e41aaf;
  /* 12e41aa3 mov ecx, dword ptr [0x12e5de1c] */
  ECX = (r32((uint32_t)(0x12e5de1c)));
  /* 12e41aa9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12e41aad jmp 0x12e41ab8 */
  goto L_12e41ab8;
L_12e41aaf:;
  /* 12e41aaf mov edx, dword ptr [0x12e5de1c] */
  EDX = (r32((uint32_t)(0x12e5de1c)));
  /* 12e41ab5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e41ab8:;
  /* 12e41ab8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e41abb push eax */
  push32((uint32_t)(EAX));
  /* 12e41abc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41abe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e41ac0 mov ecx, dword ptr [0x12e5de20] */
  ECX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41ac7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e41ac9 push 0x12e5e790 */
  push32((uint32_t)(0x12e5e790u));
  /* 12e41ace push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e41ad3 mov edx, dword ptr [0x12e5e6a0] */
  EDX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e41ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12e41ada call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e41ae0u);
  /* 12e41ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e41ae2 je 0x12e41af5 */
  if (C.zf) goto L_12e41af5;
  /* 12e41ae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41ae8 jne 0x12e41af5 */
  if (!C.zf) goto L_12e41af5;
  /* 12e41aea mov eax, dword ptr [0x12e5de20] */
  EAX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41aef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12e41af3 jmp 0x12e41afe */
  goto L_12e41afe;
L_12e41af5:;
  /* 12e41af5 mov ecx, dword ptr [0x12e5de20] */
  ECX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41afb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12e41afe:;
  /* 12e41afe jmp 0x12e41d27 */
  goto L_12e41d27;
L_12e41b03:;
  /* 12e41b03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e41b0b je 0x12e41b2d */
  if (C.zf) goto L_12e41b2d;
  /* 12e41b0d cmp dword ptr [0x12e5e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41b14 je 0x12e41b3c */
  if (C.zf) goto L_12e41b3c;
  /* 12e41b16 mov ecx, dword ptr [0x12e5e7e4] */
  ECX = (r32((uint32_t)(0x12e5e7e4)));
  /* 12e41b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12e41b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41b20 push edx */
  push32((uint32_t)(EDX));
  /* 12e41b21 call 0x12e3eab0 */
  push32(0x12e41b26u); f_12e3eab0();
  /* 12e41b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e41b2b jne 0x12e41b3c */
  if (!C.zf) goto L_12e41b3c;
L_12e41b2d:;
  /* 12e41b2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e41b2f call 0x12e368c0 */
  push32(0x12e41b34u); f_12e368c0();
  /* 12e41b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b37 jmp 0x12e41d27 */
  goto L_12e41d27;
L_12e41b3c:;
  /* 12e41b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41b3e mov eax, dword ptr [0x12e5e7e4] */
  EAX = (r32((uint32_t)(0x12e5e7e4)));
  /* 12e41b43 push eax */
  push32((uint32_t)(EAX));
  /* 12e41b44 call 0x12e338b0 */
  push32(0x12e41b49u); f_12e338b0();
  /* 12e41b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12e41b51 push 0x12e5a868 */
  push32((uint32_t)(0x12e5a868u));
  /* 12e41b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41b5b push ecx */
  push32((uint32_t)(ECX));
  /* 12e41b5c call 0x12e35c50 */
  push32(0x12e41b61u); f_12e35c50();
  /* 12e41b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b67 push eax */
  push32((uint32_t)(EAX));
  /* 12e41b68 call 0x12e32e20 */
  push32(0x12e41b6du); f_12e32e20();
  /* 12e41b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b70 mov dword ptr [0x12e5e7e4], eax */
  w32((uint32_t)(0x12e5e7e4), (EAX));
  /* 12e41b75 cmp dword ptr [0x12e5e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41b7c jne 0x12e41b8d */
  if (!C.zf) goto L_12e41b8d;
  /* 12e41b7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e41b80 call 0x12e368c0 */
  push32(0x12e41b85u); f_12e368c0();
  /* 12e41b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b88 jmp 0x12e41d27 */
  goto L_12e41d27;
L_12e41b8d:;
  /* 12e41b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41b90 push edx */
  push32((uint32_t)(EDX));
  /* 12e41b91 mov eax, dword ptr [0x12e5e7e4] */
  EAX = (r32((uint32_t)(0x12e5e7e4)));
  /* 12e41b96 push eax */
  push32((uint32_t)(EAX));
  /* 12e41b97 call 0x12e35dd0 */
  push32(0x12e41b9cu); f_12e35dd0();
  /* 12e41b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41b9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e41ba1 call 0x12e368c0 */
  push32(0x12e41ba6u); f_12e368c0();
  /* 12e41ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41ba9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e41bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41bae push ecx */
  push32((uint32_t)(ECX));
  /* 12e41baf mov edx, dword ptr [0x12e5de1c] */
  EDX = (r32((uint32_t)(0x12e5de1c)));
  /* 12e41bb5 push edx */
  push32((uint32_t)(EDX));
  /* 12e41bb6 call 0x12e36640 */
  push32(0x12e41bbbu); f_12e36640();
  /* 12e41bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41bbe mov eax, dword ptr [0x12e5de1c] */
  EAX = (r32((uint32_t)(0x12e5de1c)));
  /* 12e41bc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12e41bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41bca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41bcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41bd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41bd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41bd9 jne 0x12e41bed */
  if (!C.zf) goto L_12e41bed;
  /* 12e41bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e41bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41be1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e41be4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41be7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41bea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e41bed:;
  /* 12e41bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41bf0 push eax */
  push32((uint32_t)(EAX));
  /* 12e41bf1 call 0x12e416d0 */
  push32(0x12e41bf6u); f_12e416d0();
  /* 12e41bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41bf9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41bff mov dword ptr [0x12e5dd90], eax */
  w32((uint32_t)(0x12e5dd90), (EAX));
L_12e41c04:;
  /* 12e41c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e41c0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c0d je 0x12e41c25 */
  if (C.zf) goto L_12e41c25;
  /* 12e41c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e41c15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c18 jl 0x12e41c30 */
  if ((C.sf!=C.of)) goto L_12e41c30;
  /* 12e41c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41c20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c23 jg 0x12e41c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e41c30;
L_12e41c25:;
  /* 12e41c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41c2e jmp 0x12e41c04 */
  goto L_12e41c04;
L_12e41c30:;
  /* 12e41c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41c36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c39 jne 0x12e41cd5 */
  if (!C.zf) goto L_12e41cd5;
  /* 12e41c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c4b push edx */
  push32((uint32_t)(EDX));
  /* 12e41c4c call 0x12e416d0 */
  push32(0x12e41c51u); f_12e416d0();
  /* 12e41c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e41c57 mov ecx, dword ptr [0x12e5dd90] */
  ECX = (r32((uint32_t)(0x12e5dd90)));
  /* 12e41c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c5f mov dword ptr [0x12e5dd90], ecx */
  w32((uint32_t)(0x12e5dd90), (ECX));
L_12e41c65:;
  /* 12e41c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41c6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c6e jl 0x12e41c86 */
  if ((C.sf!=C.of)) goto L_12e41c86;
  /* 12e41c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e41c76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c79 jg 0x12e41c86 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e41c86;
  /* 12e41c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e41c84 jmp 0x12e41c65 */
  goto L_12e41c65;
L_12e41c86:;
  /* 12e41c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e41c8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41c8f jne 0x12e41cd5 */
  if (!C.zf) goto L_12e41cd5;
  /* 12e41c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41c97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e41c9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41c9d push ecx */
  push32((uint32_t)(ECX));
  /* 12e41c9e call 0x12e416d0 */
  push32(0x12e41ca3u); f_12e416d0();
  /* 12e41ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41ca6 mov edx, dword ptr [0x12e5dd90] */
  EDX = (r32((uint32_t)(0x12e5dd90)));
  /* 12e41cac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41cae mov dword ptr [0x12e5dd90], edx */
  w32((uint32_t)(0x12e5dd90), (EDX));
L_12e41cb4:;
  /* 12e41cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41cb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e41cba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41cbd jl 0x12e41cd5 */
  if ((C.sf!=C.of)) goto L_12e41cd5;
  /* 12e41cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e41cc5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41cc8 jg 0x12e41cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e41cd5;
  /* 12e41cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e41cd3 jmp 0x12e41cb4 */
  goto L_12e41cb4;
L_12e41cd5:;
  /* 12e41cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41cd9 je 0x12e41ce9 */
  if (C.zf) goto L_12e41ce9;
  /* 12e41cdb mov edx, dword ptr [0x12e5dd90] */
  EDX = (r32((uint32_t)(0x12e5dd90)));
  /* 12e41ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e41ce3 mov dword ptr [0x12e5dd90], edx */
  w32((uint32_t)(0x12e5dd90), (EDX));
L_12e41ce9:;
  /* 12e41ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e41cef mov dword ptr [0x12e5dd94], ecx */
  w32((uint32_t)(0x12e5dd94), (ECX));
  /* 12e41cf5 cmp dword ptr [0x12e5dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41cfc je 0x12e41d1e */
  if (C.zf) goto L_12e41d1e;
  /* 12e41cfe push 3 */
  push32((uint32_t)(0x3u));
  /* 12e41d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e41d03 push edx */
  push32((uint32_t)(EDX));
  /* 12e41d04 mov eax, dword ptr [0x12e5de20] */
  EAX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41d09 push eax */
  push32((uint32_t)(EAX));
  /* 12e41d0a call 0x12e36640 */
  push32(0x12e41d0fu); f_12e36640();
  /* 12e41d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41d12 mov ecx, dword ptr [0x12e5de20] */
  ECX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41d18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12e41d1c jmp 0x12e41d27 */
  goto L_12e41d27;
L_12e41d1e:;
  /* 12e41d1e mov edx, dword ptr [0x12e5de20] */
  EDX = (r32((uint32_t)(0x12e5de20)));
  /* 12e41d24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e41d27:;
  /* 12e41d27 mov esp, ebp */
  ESP = (EBP);
  /* 12e41d29 pop ebp */
  EBP = (pop32());
  /* 12e41d2a ret  */
  ESPCHK(0x12e41980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x12e41d30 (46 bytes, 18 insns) */
void f_12e41d30(void) {
  FTRACE(0x12e41d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41d31 mov ebp, esp */
  EBP = (ESP);
  /* 12e41d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41d34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e41d36 call 0x12e36820 */
  push32(0x12e41d3bu); f_12e36820();
  /* 12e41d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41d41 push eax */
  push32((uint32_t)(EAX));
  /* 12e41d42 call 0x12e41d60 */
  push32(0x12e41d47u); f_12e41d60();
  /* 12e41d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e41d4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e41d4f call 0x12e368c0 */
  push32(0x12e41d54u); f_12e368c0();
  /* 12e41d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e41d5a mov esp, ebp */
  ESP = (EBP);
  /* 12e41d5c pop ebp */
  EBP = (pop32());
  /* 12e41d5d ret  */
  ESPCHK(0x12e41d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x12e41d60 (762 bytes, 246 insns) */
void f_12e41d60(void) {
  FTRACE(0x12e41d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e41d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e41d61 mov ebp, esp */
  EBP = (ESP);
  /* 12e41d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41d64 cmp dword ptr [0x12e5dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41d6b jne 0x12e41d74 */
  if (!C.zf) goto L_12e41d74;
  /* 12e41d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41d6f jmp 0x12e42056 */
  goto L_12e42056;
L_12e41d74:;
  /* 12e41d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41d77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e41d7a cmp ecx, dword ptr [0x12e5de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41d80 jne 0x12e41d94 */
  if (!C.zf) goto L_12e41d94;
  /* 12e41d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e41d88 cmp eax, dword ptr [0x12e5de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41d8e je 0x12e41f5b */
  if (C.zf) goto L_12e41f5b;
L_12e41d94:;
  /* 12e41d94 cmp dword ptr [0x12e5e730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41d9b je 0x12e41f15 */
  if (C.zf) goto L_12e41f15;
  /* 12e41da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41da3 mov cx, word ptr [0x12e5e7d0] */
  CX = (r16((uint32_t)(0x12e5e7d0)));
  /* 12e41daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e41dac jne 0x12e41e09 */
  if (!C.zf) goto L_12e41e09;
  /* 12e41dae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41db0 mov dx, word ptr [0x12e5e7de] */
  DX = (r16((uint32_t)(0x12e5e7de)));
  /* 12e41db7 push edx */
  push32((uint32_t)(EDX));
  /* 12e41db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41dba mov ax, word ptr [0x12e5e7dc] */
  AX = (r16((uint32_t)(0x12e5e7dc)));
  /* 12e41dc0 push eax */
  push32((uint32_t)(EAX));
  /* 12e41dc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41dc3 mov cx, word ptr [0x12e5e7da] */
  CX = (r16((uint32_t)(0x12e5e7da)));
  /* 12e41dca push ecx */
  push32((uint32_t)(ECX));
  /* 12e41dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41dcd mov dx, word ptr [0x12e5e7d8] */
  DX = (r16((uint32_t)(0x12e5e7d8)));
  /* 12e41dd4 push edx */
  push32((uint32_t)(EDX));
  /* 12e41dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41dd9 mov ax, word ptr [0x12e5e7d4] */
  AX = (r16((uint32_t)(0x12e5e7d4)));
  /* 12e41ddf push eax */
  push32((uint32_t)(EAX));
  /* 12e41de0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41de2 mov cx, word ptr [0x12e5e7d6] */
  CX = (r16((uint32_t)(0x12e5e7d6)));
  /* 12e41de9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41dea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41dec mov dx, word ptr [0x12e5e7d2] */
  DX = (r16((uint32_t)(0x12e5e7d2)));
  /* 12e41df3 push edx */
  push32((uint32_t)(EDX));
  /* 12e41df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e41dfa push ecx */
  push32((uint32_t)(ECX));
  /* 12e41dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41dff call 0x12e42060 */
  push32(0x12e41e04u); f_12e42060();
  /* 12e41e04 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41e07 jmp 0x12e41e5a */
  goto L_12e41e5a;
L_12e41e09:;
  /* 12e41e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41e0b mov dx, word ptr [0x12e5e7de] */
  DX = (r16((uint32_t)(0x12e5e7de)));
  /* 12e41e12 push edx */
  push32((uint32_t)(EDX));
  /* 12e41e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41e15 mov ax, word ptr [0x12e5e7dc] */
  AX = (r16((uint32_t)(0x12e5e7dc)));
  /* 12e41e1b push eax */
  push32((uint32_t)(EAX));
  /* 12e41e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41e1e mov cx, word ptr [0x12e5e7da] */
  CX = (r16((uint32_t)(0x12e5e7da)));
  /* 12e41e25 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41e28 mov dx, word ptr [0x12e5e7d8] */
  DX = (r16((uint32_t)(0x12e5e7d8)));
  /* 12e41e2f push edx */
  push32((uint32_t)(EDX));
  /* 12e41e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41e32 mov ax, word ptr [0x12e5e7d6] */
  AX = (r16((uint32_t)(0x12e5e7d6)));
  /* 12e41e38 push eax */
  push32((uint32_t)(EAX));
  /* 12e41e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41e3f mov cx, word ptr [0x12e5e7d2] */
  CX = (r16((uint32_t)(0x12e5e7d2)));
  /* 12e41e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e41e4d push eax */
  push32((uint32_t)(EAX));
  /* 12e41e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41e52 call 0x12e42060 */
  push32(0x12e41e57u); f_12e42060();
  /* 12e41e57 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e41e5a:;
  /* 12e41e5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41e5c mov cx, word ptr [0x12e5e77c] */
  CX = (r16((uint32_t)(0x12e5e77c)));
  /* 12e41e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e41e65 jne 0x12e41ec2 */
  if (!C.zf) goto L_12e41ec2;
  /* 12e41e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41e69 mov dx, word ptr [0x12e5e78a] */
  DX = (r16((uint32_t)(0x12e5e78a)));
  /* 12e41e70 push edx */
  push32((uint32_t)(EDX));
  /* 12e41e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41e73 mov ax, word ptr [0x12e5e788] */
  AX = (r16((uint32_t)(0x12e5e788)));
  /* 12e41e79 push eax */
  push32((uint32_t)(EAX));
  /* 12e41e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41e7c mov cx, word ptr [0x12e5e786] */
  CX = (r16((uint32_t)(0x12e5e786)));
  /* 12e41e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41e86 mov dx, word ptr [0x12e5e784] */
  DX = (r16((uint32_t)(0x12e5e784)));
  /* 12e41e8d push edx */
  push32((uint32_t)(EDX));
  /* 12e41e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41e92 mov ax, word ptr [0x12e5e780] */
  AX = (r16((uint32_t)(0x12e5e780)));
  /* 12e41e98 push eax */
  push32((uint32_t)(EAX));
  /* 12e41e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41e9b mov cx, word ptr [0x12e5e782] */
  CX = (r16((uint32_t)(0x12e5e782)));
  /* 12e41ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41ea5 mov dx, word ptr [0x12e5e77e] */
  DX = (r16((uint32_t)(0x12e5e77e)));
  /* 12e41eac push edx */
  push32((uint32_t)(EDX));
  /* 12e41ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41eb0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e41eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e41eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41eb8 call 0x12e42060 */
  push32(0x12e41ebdu); f_12e42060();
  /* 12e41ebd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41ec0 jmp 0x12e41f13 */
  goto L_12e41f13;
L_12e41ec2:;
  /* 12e41ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41ec4 mov dx, word ptr [0x12e5e78a] */
  DX = (r16((uint32_t)(0x12e5e78a)));
  /* 12e41ecb push edx */
  push32((uint32_t)(EDX));
  /* 12e41ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41ece mov ax, word ptr [0x12e5e788] */
  AX = (r16((uint32_t)(0x12e5e788)));
  /* 12e41ed4 push eax */
  push32((uint32_t)(EAX));
  /* 12e41ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41ed7 mov cx, word ptr [0x12e5e786] */
  CX = (r16((uint32_t)(0x12e5e786)));
  /* 12e41ede push ecx */
  push32((uint32_t)(ECX));
  /* 12e41edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e41ee1 mov dx, word ptr [0x12e5e784] */
  DX = (r16((uint32_t)(0x12e5e784)));
  /* 12e41ee8 push edx */
  push32((uint32_t)(EDX));
  /* 12e41ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41eeb mov ax, word ptr [0x12e5e782] */
  AX = (r16((uint32_t)(0x12e5e782)));
  /* 12e41ef1 push eax */
  push32((uint32_t)(EAX));
  /* 12e41ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e41ef8 mov cx, word ptr [0x12e5e77e] */
  CX = (r16((uint32_t)(0x12e5e77e)));
  /* 12e41eff push ecx */
  push32((uint32_t)(ECX));
  /* 12e41f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e41f06 push eax */
  push32((uint32_t)(EAX));
  /* 12e41f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f0b call 0x12e42060 */
  push32(0x12e41f10u); f_12e42060();
  /* 12e41f10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e41f13:;
  /* 12e41f13 jmp 0x12e41f5b */
  goto L_12e41f5b;
L_12e41f15:;
  /* 12e41f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41f23 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e41f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e41f2b push edx */
  push32((uint32_t)(EDX));
  /* 12e41f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41f30 call 0x12e42060 */
  push32(0x12e41f35u); f_12e42060();
  /* 12e41f35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e41f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e41f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f44 push 5 */
  push32((uint32_t)(0x5u));
  /* 12e41f46 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e41f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e41f4e push ecx */
  push32((uint32_t)(ECX));
  /* 12e41f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e41f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e41f53 call 0x12e42060 */
  push32(0x12e41f58u); f_12e42060();
  /* 12e41f58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e41f5b:;
  /* 12e41f5b mov edx, dword ptr [0x12e5de2c] */
  EDX = (r32((uint32_t)(0x12e5de2c)));
  /* 12e41f61 cmp edx, dword ptr [0x12e5de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41f67 jge 0x12e41fb4 */
  if ((C.sf==C.of)) goto L_12e41fb4;
  /* 12e41f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e41f6f cmp ecx, dword ptr [0x12e5de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41f75 jl 0x12e41f85 */
  if ((C.sf!=C.of)) goto L_12e41f85;
  /* 12e41f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e41f7d cmp eax, dword ptr [0x12e5de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41f83 jle 0x12e41f8c */
  if ((C.zf||C.sf!=C.of)) goto L_12e41f8c;
L_12e41f85:;
  /* 12e41f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41f87 jmp 0x12e42056 */
  goto L_12e42056;
L_12e41f8c:;
  /* 12e41f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e41f92 cmp edx, dword ptr [0x12e5de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41f98 jle 0x12e41fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e41fb2;
  /* 12e41f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41f9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e41fa0 cmp ecx, dword ptr [0x12e5de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41fa6 jge 0x12e41fb2 */
  if ((C.sf==C.of)) goto L_12e41fb2;
  /* 12e41fa8 mov eax, 1 */
  EAX = (0x1u);
  /* 12e41fad jmp 0x12e42056 */
  goto L_12e42056;
L_12e41fb2:;
  /* 12e41fb2 jmp 0x12e41ff7 */
  goto L_12e41ff7;
L_12e41fb4:;
  /* 12e41fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41fb7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e41fba cmp eax, dword ptr [0x12e5de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41fc0 jl 0x12e41fd0 */
  if ((C.sf!=C.of)) goto L_12e41fd0;
  /* 12e41fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41fc5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e41fc8 cmp edx, dword ptr [0x12e5de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41fce jle 0x12e41fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e41fd7;
L_12e41fd0:;
  /* 12e41fd0 mov eax, 1 */
  EAX = (0x1u);
  /* 12e41fd5 jmp 0x12e42056 */
  goto L_12e42056;
L_12e41fd7:;
  /* 12e41fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41fda mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e41fdd cmp ecx, dword ptr [0x12e5de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41fe3 jle 0x12e41ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e41ff7;
  /* 12e41fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41fe8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e41feb cmp eax, dword ptr [0x12e5de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e41ff1 jge 0x12e41ff7 */
  if ((C.sf==C.of)) goto L_12e41ff7;
  /* 12e41ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e41ff5 jmp 0x12e42056 */
  goto L_12e42056;
L_12e41ff7:;
  /* 12e41ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e41ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e41ffd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e42000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e42005 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4200a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e4200d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e42013 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42015 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e4201b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e4201e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42021 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e42024 cmp edx, dword ptr [0x12e5de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4202a jne 0x12e42042 */
  if (!C.zf) goto L_12e42042;
  /* 12e4202c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4202f cmp eax, dword ptr [0x12e5de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42035 jl 0x12e4203e */
  if ((C.sf!=C.of)) goto L_12e4203e;
  /* 12e42037 mov eax, 1 */
  EAX = (0x1u);
  /* 12e4203c jmp 0x12e42056 */
  goto L_12e42056;
L_12e4203e:;
  /* 12e4203e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42040 jmp 0x12e42056 */
  goto L_12e42056;
L_12e42042:;
  /* 12e42042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42045 cmp ecx, dword ptr [0x12e5de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4204b jge 0x12e42054 */
  if ((C.sf==C.of)) goto L_12e42054;
  /* 12e4204d mov eax, 1 */
  EAX = (0x1u);
  /* 12e42052 jmp 0x12e42056 */
  goto L_12e42056;
L_12e42054:;
  /* 12e42054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e42056:;
  /* 12e42056 mov esp, ebp */
  ESP = (EBP);
  /* 12e42058 pop ebp */
  EBP = (pop32());
  /* 12e42059 ret  */
  ESPCHK(0x12e41d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x12e42060 (504 bytes, 145 insns) */
void f_12e42060(void) {
  FTRACE(0x12e42060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42060 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42061 mov ebp, esp */
  EBP = (ESP);
  /* 12e42063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42066 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4206a jne 0x12e4213c */
  if (!C.zf) goto L_12e4213c;
  /* 12e42070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42073 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e42076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42078 jne 0x12e42089 */
  if (!C.zf) goto L_12e42089;
  /* 12e4207a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4207d mov edx, dword ptr [ecx*4 + 0x12e5de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5de4c)));
  /* 12e42084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e42087 jmp 0x12e42096 */
  goto L_12e42096;
L_12e42089:;
  /* 12e42089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4208c mov ecx, dword ptr [eax*4 + 0x12e5de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5de80)));
  /* 12e42093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e42096:;
  /* 12e42096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4209c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e4209f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e420a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e420a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e420ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e420ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e420b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e420b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e420b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12e420b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12e420bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e420be mov ecx, 7 */
  ECX = (0x7u);
  /* 12e420c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e420c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e420c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e420cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e420ce jge 0x12e420e9 */
  if ((C.sf==C.of)) goto L_12e420e9;
  /* 12e420d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e420d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e420d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e420d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e420dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e420df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e420e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e420e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e420e7 jmp 0x12e420fd */
  goto L_12e420fd;
L_12e420e9:;
  /* 12e420e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e420ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e420ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e420f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e420f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e420f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e420fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e420fd:;
  /* 12e420fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42101 jne 0x12e4213a */
  if (!C.zf) goto L_12e4213a;
  /* 12e42103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42106 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12e42109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e4210b jne 0x12e4211c */
  if (!C.zf) goto L_12e4211c;
  /* 12e4210d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42110 mov eax, dword ptr [edx*4 + 0x12e5de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5de50)));
  /* 12e42117 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e4211a jmp 0x12e42129 */
  goto L_12e42129;
L_12e4211c:;
  /* 12e4211c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4211f mov edx, dword ptr [ecx*4 + 0x12e5de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5de84)));
  /* 12e42126 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e42129:;
  /* 12e42129 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4212c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4212f jle 0x12e4213a */
  if ((C.zf||C.sf!=C.of)) goto L_12e4213a;
  /* 12e42131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42134 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42137 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e4213a:;
  /* 12e4213a jmp 0x12e42171 */
  goto L_12e42171;
L_12e4213c:;
  /* 12e4213c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4213f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e42142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42144 jne 0x12e42155 */
  if (!C.zf) goto L_12e42155;
  /* 12e42146 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42149 mov ecx, dword ptr [eax*4 + 0x12e5de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5de4c)));
  /* 12e42150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e42153 jmp 0x12e42162 */
  goto L_12e42162;
L_12e42155:;
  /* 12e42155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42158 mov eax, dword ptr [edx*4 + 0x12e5de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5de80)));
  /* 12e4215f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12e42162:;
  /* 12e42162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e42165 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e42168 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4216b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4216e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e42171:;
  /* 12e42171 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42175 jne 0x12e421b1 */
  if (!C.zf) goto L_12e421b1;
  /* 12e42177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4217a mov dword ptr [0x12e5de2c], eax */
  w32((uint32_t)(0x12e5de2c), (EAX));
  /* 12e4217f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e42182 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e42185 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e42188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4218a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e4218d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e42190 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42192 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e42198 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e4219b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4219d mov dword ptr [0x12e5de30], ecx */
  w32((uint32_t)(0x12e5de30), (ECX));
  /* 12e421a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e421a6 mov dword ptr [0x12e5de28], edx */
  w32((uint32_t)(0x12e5de28), (EDX));
  /* 12e421ac jmp 0x12e42254 */
  goto L_12e42254;
L_12e421b1:;
  /* 12e421b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e421b4 mov dword ptr [0x12e5de3c], eax */
  w32((uint32_t)(0x12e5de3c), (EAX));
  /* 12e421b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e421bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e421bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e421c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e421c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e421c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e421ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e421cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e421d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e421d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e421d7 mov dword ptr [0x12e5de40], ecx */
  w32((uint32_t)(0x12e5de40), (ECX));
  /* 12e421dd mov edx, dword ptr [0x12e5dd98] */
  EDX = (r32((uint32_t)(0x12e5dd98)));
  /* 12e421e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e421e9 mov eax, dword ptr [0x12e5de40] */
  EAX = (r32((uint32_t)(0x12e5de40)));
  /* 12e421ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e421f0 mov dword ptr [0x12e5de40], eax */
  w32((uint32_t)(0x12e5de40), (EAX));
  /* 12e421f5 cmp dword ptr [0x12e5de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e421fc jge 0x12e42221 */
  if ((C.sf==C.of)) goto L_12e42221;
  /* 12e421fe mov ecx, dword ptr [0x12e5de40] */
  ECX = (r32((uint32_t)(0x12e5de40)));
  /* 12e42204 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4220a mov dword ptr [0x12e5de40], ecx */
  w32((uint32_t)(0x12e5de40), (ECX));
  /* 12e42210 mov edx, dword ptr [0x12e5de3c] */
  EDX = (r32((uint32_t)(0x12e5de3c)));
  /* 12e42216 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42219 mov dword ptr [0x12e5de3c], edx */
  w32((uint32_t)(0x12e5de3c), (EDX));
  /* 12e4221f jmp 0x12e4224b */
  goto L_12e4224b;
L_12e42221:;
  /* 12e42221 cmp dword ptr [0x12e5de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12e5de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4222b jl 0x12e4224b */
  if ((C.sf!=C.of)) goto L_12e4224b;
  /* 12e4222d mov eax, dword ptr [0x12e5de40] */
  EAX = (r32((uint32_t)(0x12e5de40)));
  /* 12e42232 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42237 mov dword ptr [0x12e5de40], eax */
  w32((uint32_t)(0x12e5de40), (EAX));
  /* 12e4223c mov ecx, dword ptr [0x12e5de3c] */
  ECX = (r32((uint32_t)(0x12e5de3c)));
  /* 12e42242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42245 mov dword ptr [0x12e5de3c], ecx */
  w32((uint32_t)(0x12e5de3c), (ECX));
L_12e4224b:;
  /* 12e4224b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e4224e mov dword ptr [0x12e5de38], edx */
  w32((uint32_t)(0x12e5de38), (EDX));
L_12e42254:;
  /* 12e42254 mov esp, ebp */
  ESP = (EBP);
  /* 12e42256 pop ebp */
  EBP = (pop32());
  /* 12e42257 ret  */
  ESPCHK(0x12e42060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x12e42260 (382 bytes, 135 insns) */
void f_12e42260(void) {
  FTRACE(0x12e42260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42260 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42261 mov ebp, esp */
  EBP = (ESP);
  /* 12e42263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e42265 push 0x12e5a878 */
  push32((uint32_t)(0x12e5a878u));
  /* 12e4226a push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e4226f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e42275 push eax */
  push32((uint32_t)(EAX));
  /* 12e42276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e4227d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42280 push ebx */
  push32((uint32_t)(EBX));
  /* 12e42281 push esi */
  push32((uint32_t)(ESI));
  /* 12e42282 push edi */
  push32((uint32_t)(EDI));
  /* 12e42283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e42286 cmp dword ptr [0x12e5e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4228d jne 0x12e422d2 */
  if (!C.zf) goto L_12e422d2;
  /* 12e4228f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42291 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42297 call dword ptr [0x12e6024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6024c))), 0x12e4229du);
  /* 12e4229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e4229f je 0x12e422ad */
  if (C.zf) goto L_12e422ad;
  /* 12e422a1 mov dword ptr [0x12e5e7ec], 1 */
  w32((uint32_t)(0x12e5e7ec), (0x1u));
  /* 12e422ab jmp 0x12e422d2 */
  goto L_12e422d2;
L_12e422ad:;
  /* 12e422ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12e422af push 0 */
  push32((uint32_t)(0x0u));
  /* 12e422b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e422b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e422b5 call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e422bbu);
  /* 12e422bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e422bd je 0x12e422cb */
  if (C.zf) goto L_12e422cb;
  /* 12e422bf mov dword ptr [0x12e5e7ec], 2 */
  w32((uint32_t)(0x12e5e7ec), (0x2u));
  /* 12e422c9 jmp 0x12e422d2 */
  goto L_12e422d2;
L_12e422cb:;
  /* 12e422cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e422cd jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e422d2:;
  /* 12e422d2 cmp dword ptr [0x12e5e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e422d9 jne 0x12e422f6 */
  if (!C.zf) goto L_12e422f6;
  /* 12e422db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e422de push eax */
  push32((uint32_t)(EAX));
  /* 12e422df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e422e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e422e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e422e6 push edx */
  push32((uint32_t)(EDX));
  /* 12e422e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e422ea push eax */
  push32((uint32_t)(EAX));
  /* 12e422eb call dword ptr [0x12e6024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6024c))), 0x12e422f1u);
  /* 12e422f1 jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e422f6:;
  /* 12e422f6 cmp dword ptr [0x12e5e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e422fd jne 0x12e423df */
  if (!C.zf) goto L_12e423df;
  /* 12e42303 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42307 jne 0x12e42312 */
  if (!C.zf) goto L_12e42312;
  /* 12e42309 mov ecx, dword ptr [0x12e5e6a0] */
  ECX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e4230f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e42312:;
  /* 12e42312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42314 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42319 push edx */
  push32((uint32_t)(EDX));
  /* 12e4231a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4231d push eax */
  push32((uint32_t)(EAX));
  /* 12e4231e call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e42324u);
  /* 12e42324 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e42327 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4232b jne 0x12e42334 */
  if (!C.zf) goto L_12e42334;
  /* 12e4232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4232f jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e42334:;
  /* 12e42334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e4233b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e4233e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e42343 call 0x12e35fc0 */
  push32(0x12e42348u); f_12e35fc0();
  /* 12e42348 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e4234b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e4234e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e42351 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e42354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e4235b jmp 0x12e42374 */
  goto L_12e42374;
  /* 12e4235d mov eax, 1 */
  EAX = (0x1u);
  /* 12e42362 ret  */
  ESPCHK(0x12e42260u, _esp0);
  ESP += 4; return;
  /* 12e42363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42366 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e4236d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e42374:;
  /* 12e42374 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42378 jne 0x12e4237e */
  if (!C.zf) goto L_12e4237e;
  /* 12e4237a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4237c jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e4237e:;
  /* 12e4237e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e42381 push edx */
  push32((uint32_t)(EDX));
  /* 12e42382 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42385 push eax */
  push32((uint32_t)(EAX));
  /* 12e42386 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42389 push ecx */
  push32((uint32_t)(ECX));
  /* 12e4238a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4238d push edx */
  push32((uint32_t)(EDX));
  /* 12e4238e call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e42394u);
  /* 12e42394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42396 jne 0x12e4239c */
  if (!C.zf) goto L_12e4239c;
  /* 12e42398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4239a jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e4239c:;
  /* 12e4239c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e423a0 jne 0x12e423bd */
  if (!C.zf) goto L_12e423bd;
  /* 12e423a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e423a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e423a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e423a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e423ab push eax */
  push32((uint32_t)(EAX));
  /* 12e423ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12e423ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e423b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e423b2 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e423b8u);
  /* 12e423b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e423bb jmp 0x12e423da */
  goto L_12e423da;
L_12e423bd:;
  /* 12e423bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e423c0 push edx */
  push32((uint32_t)(EDX));
  /* 12e423c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e423c4 push eax */
  push32((uint32_t)(EAX));
  /* 12e423c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e423c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e423ca push ecx */
  push32((uint32_t)(ECX));
  /* 12e423cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e423cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e423d0 push edx */
  push32((uint32_t)(EDX));
  /* 12e423d1 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e423d7u);
  /* 12e423d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e423da:;
  /* 12e423da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e423dd jmp 0x12e423e1 */
  goto L_12e423e1;
L_12e423df:;
  /* 12e423df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e423e1:;
  /* 12e423e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e423e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e423e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e423ee pop edi */
  EDI = (pop32());
  /* 12e423ef pop esi */
  ESI = (pop32());
  /* 12e423f0 pop ebx */
  EBX = (pop32());
  /* 12e423f1 mov esp, ebp */
  ESP = (EBP);
  /* 12e423f3 pop ebp */
  EBP = (pop32());
  /* 12e423f4 ret  */
  ESPCHK(0x12e42260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x12e42400 (398 bytes, 140 insns) */
void f_12e42400(void) {
  FTRACE(0x12e42400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42401 mov ebp, esp */
  EBP = (ESP);
  /* 12e42403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e42405 push 0x12e5a888 */
  push32((uint32_t)(0x12e5a888u));
  /* 12e4240a push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e4240f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e42415 push eax */
  push32((uint32_t)(EAX));
  /* 12e42416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e4241d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42420 push ebx */
  push32((uint32_t)(EBX));
  /* 12e42421 push esi */
  push32((uint32_t)(ESI));
  /* 12e42422 push edi */
  push32((uint32_t)(EDI));
  /* 12e42423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e42426 cmp dword ptr [0x12e5e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4242d jne 0x12e42472 */
  if (!C.zf) goto L_12e42472;
  /* 12e4242f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42431 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42433 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42435 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42437 call dword ptr [0x12e6024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6024c))), 0x12e4243du);
  /* 12e4243d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e4243f je 0x12e4244d */
  if (C.zf) goto L_12e4244d;
  /* 12e42441 mov dword ptr [0x12e5e7f0], 1 */
  w32((uint32_t)(0x12e5e7f0), (0x1u));
  /* 12e4244b jmp 0x12e42472 */
  goto L_12e42472;
L_12e4244d:;
  /* 12e4244d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4244f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42451 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42453 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42455 call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e4245bu);
  /* 12e4245b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e4245d je 0x12e4246b */
  if (C.zf) goto L_12e4246b;
  /* 12e4245f mov dword ptr [0x12e5e7f0], 2 */
  w32((uint32_t)(0x12e5e7f0), (0x2u));
  /* 12e42469 jmp 0x12e42472 */
  goto L_12e42472;
L_12e4246b:;
  /* 12e4246b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4246d jmp 0x12e42591 */
  goto L_12e42591;
L_12e42472:;
  /* 12e42472 cmp dword ptr [0x12e5e7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42479 jne 0x12e42496 */
  if (!C.zf) goto L_12e42496;
  /* 12e4247b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4247e push eax */
  push32((uint32_t)(EAX));
  /* 12e4247f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42482 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42486 push edx */
  push32((uint32_t)(EDX));
  /* 12e42487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4248a push eax */
  push32((uint32_t)(EAX));
  /* 12e4248b call dword ptr [0x12e60264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60264))), 0x12e42491u);
  /* 12e42491 jmp 0x12e42591 */
  goto L_12e42591;
L_12e42496:;
  /* 12e42496 cmp dword ptr [0x12e5e7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4249d jne 0x12e4258f */
  if (!C.zf) goto L_12e4258f;
  /* 12e424a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e424a7 jne 0x12e424b2 */
  if (!C.zf) goto L_12e424b2;
  /* 12e424a9 mov ecx, dword ptr [0x12e5e6a0] */
  ECX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e424af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e424b2:;
  /* 12e424b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e424b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e424b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e424b9 push edx */
  push32((uint32_t)(EDX));
  /* 12e424ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e424bd push eax */
  push32((uint32_t)(EAX));
  /* 12e424be call dword ptr [0x12e6024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6024c))), 0x12e424c4u);
  /* 12e424c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e424c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e424cb jne 0x12e424d4 */
  if (!C.zf) goto L_12e424d4;
  /* 12e424cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e424cf jmp 0x12e42591 */
  goto L_12e42591;
L_12e424d4:;
  /* 12e424d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e424db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e424de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e424e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e424e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e424e5 call 0x12e35fc0 */
  push32(0x12e424eau); f_12e35fc0();
  /* 12e424ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e424ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e424f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e424f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e424f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e424fd jmp 0x12e42516 */
  goto L_12e42516;
  /* 12e424ff mov eax, 1 */
  EAX = (0x1u);
  /* 12e42504 ret  */
  ESPCHK(0x12e42400u, _esp0);
  ESP += 4; return;
  /* 12e42505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42508 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e4250f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e42516:;
  /* 12e42516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4251a jne 0x12e42520 */
  if (!C.zf) goto L_12e42520;
  /* 12e4251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4251e jmp 0x12e42591 */
  goto L_12e42591;
L_12e42520:;
  /* 12e42520 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e42523 push edx */
  push32((uint32_t)(EDX));
  /* 12e42524 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42527 push eax */
  push32((uint32_t)(EAX));
  /* 12e42528 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e4252b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4252c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4252f push edx */
  push32((uint32_t)(EDX));
  /* 12e42530 call dword ptr [0x12e6024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6024c))), 0x12e42536u);
  /* 12e42536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42538 jne 0x12e4253e */
  if (!C.zf) goto L_12e4253e;
  /* 12e4253a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4253c jmp 0x12e42591 */
  goto L_12e42591;
L_12e4253e:;
  /* 12e4253e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42542 jne 0x12e42566 */
  if (!C.zf) goto L_12e42566;
  /* 12e42544 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42548 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4254a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4254c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e4254e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42551 push eax */
  push32((uint32_t)(EAX));
  /* 12e42552 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e42557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e4255a push ecx */
  push32((uint32_t)(ECX));
  /* 12e4255b call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e42561u);
  /* 12e42561 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e42564 jmp 0x12e4258a */
  goto L_12e4258a;
L_12e42566:;
  /* 12e42566 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42568 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4256a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e4256d push edx */
  push32((uint32_t)(EDX));
  /* 12e4256e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42571 push eax */
  push32((uint32_t)(EAX));
  /* 12e42572 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e42574 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42577 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e4257d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42580 push edx */
  push32((uint32_t)(EDX));
  /* 12e42581 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e42587u);
  /* 12e42587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e4258a:;
  /* 12e4258a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e4258d jmp 0x12e42591 */
  goto L_12e42591;
L_12e4258f:;
  /* 12e4258f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e42591:;
  /* 12e42591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e42594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e42597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e4259e pop edi */
  EDI = (pop32());
  /* 12e4259f pop esi */
  ESI = (pop32());
  /* 12e425a0 pop ebx */
  EBX = (pop32());
  /* 12e425a1 mov esp, ebp */
  ESP = (EBP);
  /* 12e425a3 pop ebp */
  EBP = (pop32());
  /* 12e425a4 ret  */
  ESPCHK(0x12e42400u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x12e425b0 (11 bytes, 6 insns) */
void f_12e425b0(void) {
  FTRACE(0x12e425b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e425b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e425b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e425b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e425b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e425b9 pop ebp */
  EBP = (pop32());
  /* 12e425ba ret  */
  ESPCHK(0x12e425b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x12e425c0 (147 bytes, 43 insns) */
void f_12e425c0(void) {
  FTRACE(0x12e425c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e425c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e425c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e425c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e425c4 cmp dword ptr [0x12e5e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e425cb jne 0x12e425e7 */
  if (!C.zf) goto L_12e425e7;
  /* 12e425cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e425d1 jl 0x12e425e2 */
  if ((C.sf!=C.of)) goto L_12e425e2;
  /* 12e425d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e425d7 jg 0x12e425e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e425e2;
  /* 12e425d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e425dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e425df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e425e2:;
  /* 12e425e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e425e5 jmp 0x12e4264f */
  goto L_12e4264f;
L_12e425e7:;
  /* 12e425e7 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e425ec call dword ptr [0x12e602a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a4))), 0x12e425f2u);
  /* 12e425f2 cmp dword ptr [0x12e5e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e425f9 je 0x12e42619 */
  if (C.zf) goto L_12e42619;
  /* 12e425fb push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e42600 call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e42606u);
  /* 12e42606 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e42608 call 0x12e36820 */
  push32(0x12e4260du); f_12e36820();
  /* 12e4260d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e42617 jmp 0x12e42620 */
  goto L_12e42620;
L_12e42619:;
  /* 12e42619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e42620:;
  /* 12e42620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42623 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42624 call 0x12e42660 */
  push32(0x12e42629u); f_12e42660();
  /* 12e42629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4262c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e4262f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42633 je 0x12e42641 */
  if (C.zf) goto L_12e42641;
  /* 12e42635 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e42637 call 0x12e368c0 */
  push32(0x12e4263cu); f_12e368c0();
  /* 12e4263c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4263f jmp 0x12e4264c */
  goto L_12e4264c;
L_12e42641:;
  /* 12e42641 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e42646 call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e4264cu);
L_12e4264c:;
  /* 12e4264c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12e4264f:;
  /* 12e4264f mov esp, ebp */
  ESP = (EBP);
  /* 12e42651 pop ebp */
  EBP = (pop32());
  /* 12e42652 ret  */
  ESPCHK(0x12e425c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x12e42660 (299 bytes, 91 insns) */
void f_12e42660(void) {
  FTRACE(0x12e42660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42660 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42661 mov ebp, esp */
  EBP = (ESP);
  /* 12e42663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42666 cmp dword ptr [0x12e5e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4266d jne 0x12e4268c */
  if (!C.zf) goto L_12e4268c;
  /* 12e4266f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42673 jl 0x12e42684 */
  if ((C.sf!=C.of)) goto L_12e42684;
  /* 12e42675 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42679 jg 0x12e42684 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e42684;
  /* 12e4267b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4267e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42681 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e42684:;
  /* 12e42684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42687 jmp 0x12e42787 */
  goto L_12e42787;
L_12e4268c:;
  /* 12e4268c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42693 jge 0x12e426d3 */
  if ((C.sf==C.of)) goto L_12e426d3;
  /* 12e42695 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4269c jle 0x12e426b1 */
  if ((C.zf||C.sf!=C.of)) goto L_12e426b1;
  /* 12e4269e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e426a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e426a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e426a4 call 0x12e38e30 */
  push32(0x12e426a9u); f_12e38e30();
  /* 12e426a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e426ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e426af jmp 0x12e426c5 */
  goto L_12e426c5;
L_12e426b1:;
  /* 12e426b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e426b4 mov eax, dword ptr [0x12e5cc98] */
  EAX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e426b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e426bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e426bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e426c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e426c5:;
  /* 12e426c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e426c9 jne 0x12e426d3 */
  if (!C.zf) goto L_12e426d3;
  /* 12e426cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e426ce jmp 0x12e42787 */
  goto L_12e42787;
L_12e426d3:;
  /* 12e426d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e426d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e426d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e426df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e426e5 mov eax, dword ptr [0x12e5cc98] */
  EAX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e426ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e426ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e426f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e426f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e426f8 je 0x12e4271c */
  if (C.zf) goto L_12e4271c;
  /* 12e426fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e426fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e42700 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e42706 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12e42709 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e4270c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12e4270f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12e42713 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e4271a jmp 0x12e4272d */
  goto L_12e4272d;
L_12e4271c:;
  /* 12e4271c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e4271f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e42722 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12e42726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12e4272d:;
  /* 12e4272d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e4272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42731 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e42733 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e42736 push edx */
  push32((uint32_t)(EDX));
  /* 12e42737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4273a push eax */
  push32((uint32_t)(EAX));
  /* 12e4273b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e4273e push ecx */
  push32((uint32_t)(ECX));
  /* 12e4273f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e42744 mov edx, dword ptr [0x12e5e690] */
  EDX = (r32((uint32_t)(0x12e5e690)));
  /* 12e4274a push edx */
  push32((uint32_t)(EDX));
  /* 12e4274b call 0x12e3b210 */
  push32(0x12e42750u); f_12e3b210();
  /* 12e42750 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e42756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4275a jne 0x12e42761 */
  if (!C.zf) goto L_12e42761;
  /* 12e4275c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4275f jmp 0x12e42787 */
  goto L_12e42787;
L_12e42761:;
  /* 12e42761 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42765 jne 0x12e42771 */
  if (!C.zf) goto L_12e42771;
  /* 12e42767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4276a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e4276f jmp 0x12e42787 */
  goto L_12e42787;
L_12e42771:;
  /* 12e42771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42779 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12e4277c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e42782 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e42785 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12e42787:;
  /* 12e42787 mov esp, ebp */
  ESP = (EBP);
  /* 12e42789 pop ebp */
  EBP = (pop32());
  /* 12e4278a ret  */
  ESPCHK(0x12e42660u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12e42790 (52 bytes, 19 insns) */
void f_12e42790(void) {
  FTRACE(0x12e42790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42790 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e42794 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e42798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e4279a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e4279e jne 0x12e427a9 */
  if (!C.zf) goto L_12e427a9;
  /* 12e427a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e427a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e427a6 ret 0x10 */
  ESPCHK(0x12e42790u, _esp0);
  ESP += 20; return;
L_12e427a9:;
  /* 12e427a9 push ebx */
  push32((uint32_t)(EBX));
  /* 12e427aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e427ac mov ebx, eax */
  EBX = (EAX);
  /* 12e427ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e427b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e427b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e427b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e427bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e427be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e427c0 pop ebx */
  EBX = (pop32());
  /* 12e427c1 ret 0x10 */
  ESPCHK(0x12e42790u, _esp0);
  ESP += 20; return;
}

/* FUN_100127d0 @ 0x12e427d0 (46 bytes, 18 insns) */
void f_12e427d0(void) {
  FTRACE(0x12e427d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e427d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e427d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e427d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e427d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e427d6 call 0x12e36820 */
  push32(0x12e427dbu); f_12e36820();
  /* 12e427db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e427de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e427e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e427e2 call 0x12e42800 */
  push32(0x12e427e7u); f_12e42800();
  /* 12e427e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e427ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e427ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e427ef call 0x12e368c0 */
  push32(0x12e427f4u); f_12e368c0();
  /* 12e427f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e427f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e427fa mov esp, ebp */
  ESP = (EBP);
  /* 12e427fc pop ebp */
  EBP = (pop32());
  /* 12e427fd ret  */
  ESPCHK(0x12e427d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12e42800 (198 bytes, 69 insns) */
void f_12e42800(void) {
  FTRACE(0x12e42800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42800 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42801 mov ebp, esp */
  EBP = (ESP);
  /* 12e42803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42806 mov eax, dword ptr [0x12e5e4ac] */
  EAX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e4280b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e4280e cmp dword ptr [0x12e5ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42815 jne 0x12e4281e */
  if (!C.zf) goto L_12e4281e;
  /* 12e42817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42819 jmp 0x12e428c2 */
  goto L_12e428c2;
L_12e4281e:;
  /* 12e4281e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42822 jne 0x12e42846 */
  if (!C.zf) goto L_12e42846;
  /* 12e42824 cmp dword ptr [0x12e5e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4282b je 0x12e42846 */
  if (C.zf) goto L_12e42846;
  /* 12e4282d call 0x12e42920 */
  push32(0x12e42832u); f_12e42920();
  /* 12e42832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42834 je 0x12e4283d */
  if (C.zf) goto L_12e4283d;
  /* 12e42836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42838 jmp 0x12e428c2 */
  goto L_12e428c2;
L_12e4283d:;
  /* 12e4283d mov ecx, dword ptr [0x12e5e4ac] */
  ECX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e42843 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e42846:;
  /* 12e42846 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4284a je 0x12e428c0 */
  if (C.zf) goto L_12e428c0;
  /* 12e4284c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42850 je 0x12e428c0 */
  if (C.zf) goto L_12e428c0;
  /* 12e42852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42855 push edx */
  push32((uint32_t)(EDX));
  /* 12e42856 call 0x12e35c50 */
  push32(0x12e4285bu); f_12e35c50();
  /* 12e4285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4285e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e42861:;
  /* 12e42861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42864 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42867 je 0x12e428c0 */
  if (C.zf) goto L_12e428c0;
  /* 12e42869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4286c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e4286e push edx */
  push32((uint32_t)(EDX));
  /* 12e4286f call 0x12e35c50 */
  push32(0x12e42874u); f_12e35c50();
  /* 12e42874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4287a jbe 0x12e428b5 */
  if ((C.cf||C.zf)) goto L_12e428b5;
  /* 12e4287c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4287f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e42881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42884 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12e42888 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4288b jne 0x12e428b5 */
  if (!C.zf) goto L_12e428b5;
  /* 12e4288d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42890 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42894 push edx */
  push32((uint32_t)(EDX));
  /* 12e42895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e4289a push ecx */
  push32((uint32_t)(ECX));
  /* 12e4289b call 0x12e428d0 */
  push32(0x12e428a0u); f_12e428d0();
  /* 12e428a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e428a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e428a5 jne 0x12e428b5 */
  if (!C.zf) goto L_12e428b5;
  /* 12e428a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e428aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e428ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e428af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12e428b3 jmp 0x12e428c2 */
  goto L_12e428c2;
L_12e428b5:;
  /* 12e428b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e428b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e428bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e428be jmp 0x12e42861 */
  goto L_12e42861;
L_12e428c0:;
  /* 12e428c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e428c2:;
  /* 12e428c2 mov esp, ebp */
  ESP = (EBP);
  /* 12e428c4 pop ebp */
  EBP = (pop32());
  /* 12e428c5 ret  */
  ESPCHK(0x12e42800u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12e428d0 (79 bytes, 32 insns) */
void f_12e428d0(void) {
  FTRACE(0x12e428d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e428d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e428d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e428d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e428d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e428d8 jne 0x12e428de */
  if (!C.zf) goto L_12e428de;
  /* 12e428da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e428dc jmp 0x12e4291b */
  goto L_12e4291b;
L_12e428de:;
  /* 12e428de mov eax, dword ptr [0x12e5fb64] */
  EAX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e428e3 push eax */
  push32((uint32_t)(EAX));
  /* 12e428e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e428e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e428e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e428eb push edx */
  push32((uint32_t)(EDX));
  /* 12e428ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e428ef push eax */
  push32((uint32_t)(EAX));
  /* 12e428f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e428f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e428f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e428f6 mov edx, dword ptr [0x12e5fe04] */
  EDX = (r32((uint32_t)(0x12e5fe04)));
  /* 12e428fc push edx */
  push32((uint32_t)(EDX));
  /* 12e428fd call 0x12e429d0 */
  push32(0x12e42902u); f_12e429d0();
  /* 12e42902 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e42908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4290c jne 0x12e42915 */
  if (!C.zf) goto L_12e42915;
  /* 12e4290e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12e42913 jmp 0x12e4291b */
  goto L_12e4291b;
L_12e42915:;
  /* 12e42915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42918 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e4291b:;
  /* 12e4291b mov esp, ebp */
  ESP = (EBP);
  /* 12e4291d pop ebp */
  EBP = (pop32());
  /* 12e4291e ret  */
  ESPCHK(0x12e428d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x12e42920 (174 bytes, 66 insns) */
void f_12e42920(void) {
  FTRACE(0x12e42920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42920 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42921 mov ebp, esp */
  EBP = (ESP);
  /* 12e42923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42926 mov eax, dword ptr [0x12e5e4b4] */
  EAX = (r32((uint32_t)(0x12e5e4b4)));
  /* 12e4292b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e4292e:;
  /* 12e4292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42931 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42934 je 0x12e429c8 */
  if (C.zf) goto L_12e429c8;
  /* 12e4293a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4293c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4293e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42940 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42942 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e42944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42947 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e42949 push eax */
  push32((uint32_t)(EAX));
  /* 12e4294a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4294c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e4294e call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e42954u);
  /* 12e42954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e42957 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4295b jne 0x12e42962 */
  if (!C.zf) goto L_12e42962;
  /* 12e4295d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42960 jmp 0x12e429ca */
  goto L_12e429ca;
L_12e42962:;
  /* 12e42962 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e42964 push 0x12e5a894 */
  push32((uint32_t)(0x12e5a894u));
  /* 12e42969 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e4296b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4296e push ecx */
  push32((uint32_t)(ECX));
  /* 12e4296f call 0x12e32e20 */
  push32(0x12e42974u); f_12e32e20();
  /* 12e42974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e4297a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4297e jne 0x12e42985 */
  if (!C.zf) goto L_12e42985;
  /* 12e42980 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42983 jmp 0x12e429ca */
  goto L_12e429ca;
L_12e42985:;
  /* 12e42985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4298c push edx */
  push32((uint32_t)(EDX));
  /* 12e4298d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42990 push eax */
  push32((uint32_t)(EAX));
  /* 12e42991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e42993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e42998 push edx */
  push32((uint32_t)(EDX));
  /* 12e42999 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e4299b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e4299d call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e429a3u);
  /* 12e429a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e429a5 jne 0x12e429ac */
  if (!C.zf) goto L_12e429ac;
  /* 12e429a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e429aa jmp 0x12e429ca */
  goto L_12e429ca;
L_12e429ac:;
  /* 12e429ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12e429ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e429b1 push eax */
  push32((uint32_t)(EAX));
  /* 12e429b2 call 0x12e42e20 */
  push32(0x12e429b7u); f_12e42e20();
  /* 12e429b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e429ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e429bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e429c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e429c3 jmp 0x12e4292e */
  goto L_12e4292e;
L_12e429c8:;
  /* 12e429c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e429ca:;
  /* 12e429ca mov esp, ebp */
  ESP = (EBP);
  /* 12e429cc pop ebp */
  EBP = (pop32());
  /* 12e429cd ret  */
  ESPCHK(0x12e42920u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x12e429d0 (970 bytes, 340 insns) */
void f_12e429d0(void) {
  FTRACE(0x12e429d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e429d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e429d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e429d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e429d5 push 0x12e5a8e8 */
  push32((uint32_t)(0x12e5a8e8u));
  /* 12e429da push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e429df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e429e5 push eax */
  push32((uint32_t)(EAX));
  /* 12e429e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e429ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e429f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e429f1 push esi */
  push32((uint32_t)(ESI));
  /* 12e429f2 push edi */
  push32((uint32_t)(EDI));
  /* 12e429f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e429f6 cmp dword ptr [0x12e5e7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e429fd jne 0x12e42a56 */
  if (!C.zf) goto L_12e42a56;
  /* 12e429ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42a01 push 0x12e59f44 */
  push32((uint32_t)(0x12e59f44u));
  /* 12e42a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42a08 push 0x12e59f44 */
  push32((uint32_t)(0x12e59f44u));
  /* 12e42a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42a11 call dword ptr [0x12e60248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60248))), 0x12e42a17u);
  /* 12e42a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42a19 je 0x12e42a27 */
  if (C.zf) goto L_12e42a27;
  /* 12e42a1b mov dword ptr [0x12e5e7f4], 1 */
  w32((uint32_t)(0x12e5e7f4), (0x1u));
  /* 12e42a25 jmp 0x12e42a56 */
  goto L_12e42a56;
L_12e42a27:;
  /* 12e42a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42a29 push 0x12e59f40 */
  push32((uint32_t)(0x12e59f40u));
  /* 12e42a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42a30 push 0x12e59f40 */
  push32((uint32_t)(0x12e59f40u));
  /* 12e42a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42a39 call dword ptr [0x12e60254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60254))), 0x12e42a3fu);
  /* 12e42a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42a41 je 0x12e42a4f */
  if (C.zf) goto L_12e42a4f;
  /* 12e42a43 mov dword ptr [0x12e5e7f4], 2 */
  w32((uint32_t)(0x12e5e7f4), (0x2u));
  /* 12e42a4d jmp 0x12e42a56 */
  goto L_12e42a56;
L_12e42a4f:;
  /* 12e42a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42a51 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42a56:;
  /* 12e42a56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42a5a jle 0x12e42a6f */
  if ((C.zf||C.sf!=C.of)) goto L_12e42a6f;
  /* 12e42a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42a5f push eax */
  push32((uint32_t)(EAX));
  /* 12e42a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42a64 call 0x12e42dd0 */
  push32(0x12e42a69u); f_12e42dd0();
  /* 12e42a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42a6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12e42a6f:;
  /* 12e42a6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42a73 jle 0x12e42a88 */
  if ((C.zf||C.sf!=C.of)) goto L_12e42a88;
  /* 12e42a75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e42a78 push edx */
  push32((uint32_t)(EDX));
  /* 12e42a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42a7c push eax */
  push32((uint32_t)(EAX));
  /* 12e42a7d call 0x12e42dd0 */
  push32(0x12e42a82u); f_12e42dd0();
  /* 12e42a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42a85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12e42a88:;
  /* 12e42a88 cmp dword ptr [0x12e5e7f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42a8f jne 0x12e42ab4 */
  if (!C.zf) goto L_12e42ab4;
  /* 12e42a91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e42a94 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42a98 push edx */
  push32((uint32_t)(EDX));
  /* 12e42a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42a9c push eax */
  push32((uint32_t)(EAX));
  /* 12e42a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42aa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42aa4 push edx */
  push32((uint32_t)(EDX));
  /* 12e42aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12e42aa9 call dword ptr [0x12e60254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60254))), 0x12e42aafu);
  /* 12e42aaf jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42ab4:;
  /* 12e42ab4 cmp dword ptr [0x12e5e7f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e7f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42abb jne 0x12e42db2 */
  if (!C.zf) goto L_12e42db2;
  /* 12e42ac1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ac5 jne 0x12e42ad0 */
  if (!C.zf) goto L_12e42ad0;
  /* 12e42ac7 mov ecx, dword ptr [0x12e5e6a0] */
  ECX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e42acd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12e42ad0:;
  /* 12e42ad0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ad4 je 0x12e42ae0 */
  if (C.zf) goto L_12e42ae0;
  /* 12e42ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ada jne 0x12e42c5c */
  if (!C.zf) goto L_12e42c5c;
L_12e42ae0:;
  /* 12e42ae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42ae3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ae6 jne 0x12e42af2 */
  if (!C.zf) goto L_12e42af2;
  /* 12e42ae8 mov eax, 2 */
  EAX = (0x2u);
  /* 12e42aed jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42af2:;
  /* 12e42af2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42af6 jle 0x12e42b02 */
  if ((C.zf||C.sf!=C.of)) goto L_12e42b02;
  /* 12e42af8 mov eax, 1 */
  EAX = (0x1u);
  /* 12e42afd jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42b02:;
  /* 12e42b02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b06 jle 0x12e42b12 */
  if ((C.zf||C.sf!=C.of)) goto L_12e42b12;
  /* 12e42b08 mov eax, 3 */
  EAX = (0x3u);
  /* 12e42b0d jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42b12:;
  /* 12e42b12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12e42b15 push eax */
  push32((uint32_t)(EAX));
  /* 12e42b16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e42b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42b1a call dword ptr [0x12e6033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6033c))), 0x12e42b20u);
  /* 12e42b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42b22 jne 0x12e42b2b */
  if (!C.zf) goto L_12e42b2b;
  /* 12e42b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42b26 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42b2b:;
  /* 12e42b2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b2f jne 0x12e42b37 */
  if (!C.zf) goto L_12e42b37;
  /* 12e42b31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b35 je 0x12e42b64 */
  if (C.zf) goto L_12e42b64;
L_12e42b37:;
  /* 12e42b37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b3b jne 0x12e42b43 */
  if (!C.zf) goto L_12e42b43;
  /* 12e42b3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b41 je 0x12e42b64 */
  if (C.zf) goto L_12e42b64;
L_12e42b43:;
  /* 12e42b43 push 0x12e5a8a8 */
  push32((uint32_t)(0x12e5a8a8u));
  /* 12e42b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42b4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12e42b4f push 0x12e5a8a0 */
  push32((uint32_t)(0x12e5a8a0u));
  /* 12e42b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e42b56 call 0x12e31ee0 */
  push32(0x12e42b5bu); f_12e31ee0();
  /* 12e42b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b61 jne 0x12e42b64 */
  if (!C.zf) goto L_12e42b64;
  /* 12e42b63 int3  */
  x86_unimpl("int3 @ 0x12e42b63");
L_12e42b64:;
  /* 12e42b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e42b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42b68 jne 0x12e42b2b */
  if (!C.zf) goto L_12e42b2b;
  /* 12e42b6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b6e jle 0x12e42be3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e42be3;
  /* 12e42b70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42b74 jae 0x12e42b80 */
  if (!C.cf) goto L_12e42b80;
  /* 12e42b76 mov eax, 3 */
  EAX = (0x3u);
  /* 12e42b7b jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42b80:;
  /* 12e42b80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12e42b83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12e42b86 jmp 0x12e42b91 */
  goto L_12e42b91;
L_12e42b88:;
  /* 12e42b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42b8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42b8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12e42b91:;
  /* 12e42b91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42b96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e42b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42b9a je 0x12e42bd9 */
  if (C.zf) goto L_12e42bd9;
  /* 12e42b9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e42ba1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e42ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42ba6 je 0x12e42bd9 */
  if (C.zf) goto L_12e42bd9;
  /* 12e42ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e42bad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e42baf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42bb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e42bb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42bb8 jl 0x12e42bd7 */
  if ((C.sf!=C.of)) goto L_12e42bd7;
  /* 12e42bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e42bbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e42bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e42bc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e42bc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42bcb jg 0x12e42bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e42bd7;
  /* 12e42bcd mov eax, 2 */
  EAX = (0x2u);
  /* 12e42bd2 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42bd7:;
  /* 12e42bd7 jmp 0x12e42b88 */
  goto L_12e42b88;
L_12e42bd9:;
  /* 12e42bd9 mov eax, 3 */
  EAX = (0x3u);
  /* 12e42bde jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42be3:;
  /* 12e42be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42be7 jle 0x12e42c5c */
  if ((C.zf||C.sf!=C.of)) goto L_12e42c5c;
  /* 12e42be9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42bed jae 0x12e42bf9 */
  if (!C.cf) goto L_12e42bf9;
  /* 12e42bef mov eax, 1 */
  EAX = (0x1u);
  /* 12e42bf4 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42bf9:;
  /* 12e42bf9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12e42bfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12e42bff jmp 0x12e42c0a */
  goto L_12e42c0a;
L_12e42c01:;
  /* 12e42c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42c04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42c07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12e42c0a:;
  /* 12e42c0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e42c0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e42c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42c13 je 0x12e42c52 */
  if (C.zf) goto L_12e42c52;
  /* 12e42c15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42c18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e42c1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e42c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e42c1f je 0x12e42c52 */
  if (C.zf) goto L_12e42c52;
  /* 12e42c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42c26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e42c28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42c2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e42c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e42c2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42c31 jl 0x12e42c50 */
  if ((C.sf!=C.of)) goto L_12e42c50;
  /* 12e42c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e42c38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e42c3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e42c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42c3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e42c42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42c44 jg 0x12e42c50 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e42c50;
  /* 12e42c46 mov eax, 2 */
  EAX = (0x2u);
  /* 12e42c4b jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42c50:;
  /* 12e42c50 jmp 0x12e42c01 */
  goto L_12e42c01;
L_12e42c52:;
  /* 12e42c52 mov eax, 1 */
  EAX = (0x1u);
  /* 12e42c57 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42c5c:;
  /* 12e42c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42c60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42c67 push edx */
  push32((uint32_t)(EDX));
  /* 12e42c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e42c6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e42c6d push eax */
  push32((uint32_t)(EAX));
  /* 12e42c6e call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e42c74u);
  /* 12e42c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e42c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42c7b jne 0x12e42c84 */
  if (!C.zf) goto L_12e42c84;
  /* 12e42c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42c7f jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42c84:;
  /* 12e42c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e42c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e42c8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e42c90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42c93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e42c95 call 0x12e35fc0 */
  push32(0x12e42c9au); f_12e35fc0();
  /* 12e42c9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12e42c9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e42ca0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12e42ca3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e42ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e42cad jmp 0x12e42cc6 */
  goto L_12e42cc6;
  /* 12e42caf mov eax, 1 */
  EAX = (0x1u);
  /* 12e42cb4 ret  */
  ESPCHK(0x12e429d0u, _esp0);
  ESP += 4; return;
  /* 12e42cb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42cb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e42cbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e42cc6:;
  /* 12e42cc6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42cca jne 0x12e42cd3 */
  if (!C.zf) goto L_12e42cd3;
  /* 12e42ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42cce jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42cd3:;
  /* 12e42cd3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e42cd6 push edx */
  push32((uint32_t)(EDX));
  /* 12e42cd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e42cda push eax */
  push32((uint32_t)(EAX));
  /* 12e42cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e42cde push ecx */
  push32((uint32_t)(ECX));
  /* 12e42cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e42ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12e42ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42ce5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e42ce8 push eax */
  push32((uint32_t)(EAX));
  /* 12e42ce9 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e42cefu);
  /* 12e42cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42cf1 jne 0x12e42cfa */
  if (!C.zf) goto L_12e42cfa;
  /* 12e42cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42cf5 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42cfa:;
  /* 12e42cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e42cfe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e42d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42d02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42d05 push edx */
  push32((uint32_t)(EDX));
  /* 12e42d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e42d08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e42d0b push eax */
  push32((uint32_t)(EAX));
  /* 12e42d0c call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e42d12u);
  /* 12e42d12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e42d15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42d19 jne 0x12e42d22 */
  if (!C.zf) goto L_12e42d22;
  /* 12e42d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42d1d jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42d22:;
  /* 12e42d22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e42d29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e42d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e42d33 call 0x12e35fc0 */
  push32(0x12e42d38u); f_12e35fc0();
  /* 12e42d38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12e42d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e42d3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12e42d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e42d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e42d4b jmp 0x12e42d64 */
  goto L_12e42d64;
  /* 12e42d4d mov eax, 1 */
  EAX = (0x1u);
  /* 12e42d52 ret  */
  ESPCHK(0x12e429d0u, _esp0);
  ESP += 4; return;
  /* 12e42d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42d56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e42d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e42d64:;
  /* 12e42d64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42d68 jne 0x12e42d6e */
  if (!C.zf) goto L_12e42d6e;
  /* 12e42d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42d6c jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42d6e:;
  /* 12e42d6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42d71 push edx */
  push32((uint32_t)(EDX));
  /* 12e42d72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e42d75 push eax */
  push32((uint32_t)(EAX));
  /* 12e42d76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e42d79 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42d7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e42d7d push edx */
  push32((uint32_t)(EDX));
  /* 12e42d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e42d80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e42d83 push eax */
  push32((uint32_t)(EAX));
  /* 12e42d84 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e42d8au);
  /* 12e42d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42d8c jne 0x12e42d92 */
  if (!C.zf) goto L_12e42d92;
  /* 12e42d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42d90 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42d92:;
  /* 12e42d92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e42d95 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e42d99 push edx */
  push32((uint32_t)(EDX));
  /* 12e42d9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e42d9d push eax */
  push32((uint32_t)(EAX));
  /* 12e42d9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e42da1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42da5 push edx */
  push32((uint32_t)(EDX));
  /* 12e42da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42da9 push eax */
  push32((uint32_t)(EAX));
  /* 12e42daa call dword ptr [0x12e60248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60248))), 0x12e42db0u);
  /* 12e42db0 jmp 0x12e42db4 */
  goto L_12e42db4;
L_12e42db2:;
  /* 12e42db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e42db4:;
  /* 12e42db4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12e42db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e42dba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e42dc1 pop edi */
  EDI = (pop32());
  /* 12e42dc2 pop esi */
  ESI = (pop32());
  /* 12e42dc3 pop ebx */
  EBX = (pop32());
  /* 12e42dc4 mov esp, ebp */
  ESP = (EBP);
  /* 12e42dc6 pop ebp */
  EBP = (pop32());
  /* 12e42dc7 ret  */
  ESPCHK(0x12e429d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x12e42dd0 (80 bytes, 32 insns) */
void f_12e42dd0(void) {
  FTRACE(0x12e42dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e42dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e42dd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e42ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42ddf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e42de2:;
  /* 12e42de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42de8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e42dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42df0 je 0x12e42e07 */
  if (C.zf) goto L_12e42e07;
  /* 12e42df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42df5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e42df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42dfa je 0x12e42e07 */
  if (C.zf) goto L_12e42e07;
  /* 12e42dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42e02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e42e05 jmp 0x12e42de2 */
  goto L_12e42de2;
L_12e42e07:;
  /* 12e42e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42e0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e42e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e42e0f jne 0x12e42e19 */
  if (!C.zf) goto L_12e42e19;
  /* 12e42e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e42e14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42e17 jmp 0x12e42e1c */
  goto L_12e42e1c;
L_12e42e19:;
  /* 12e42e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12e42e1c:;
  /* 12e42e1c mov esp, ebp */
  ESP = (EBP);
  /* 12e42e1e pop ebp */
  EBP = (pop32());
  /* 12e42e1f ret  */
  ESPCHK(0x12e42dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x12e42e20 (736 bytes, 224 insns) */
void f_12e42e20(void) {
  FTRACE(0x12e42e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e42e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e42e21 mov ebp, esp */
  EBP = (ESP);
  /* 12e42e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42e26 push esi */
  push32((uint32_t)(ESI));
  /* 12e42e27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e2b je 0x12e42e4c */
  if (C.zf) goto L_12e42e4c;
  /* 12e42e2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e42e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42e32 push eax */
  push32((uint32_t)(EAX));
  /* 12e42e33 call 0x12e43270 */
  push32(0x12e42e38u); f_12e43270();
  /* 12e42e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e42e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e42 je 0x12e42e4c */
  if (C.zf) goto L_12e42e4c;
  /* 12e42e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42e47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e4a jne 0x12e42e54 */
  if (!C.zf) goto L_12e42e54;
L_12e42e4c:;
  /* 12e42e4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42e4f jmp 0x12e430fb */
  goto L_12e430fb;
L_12e42e54:;
  /* 12e42e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42e57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e42e5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e42e5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e42e60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e42e63 mov ecx, dword ptr [0x12e5e4ac] */
  ECX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e42e69 cmp ecx, dword ptr [0x12e5e4b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5e4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e6f jne 0x12e42e85 */
  if (!C.zf) goto L_12e42e85;
  /* 12e42e71 mov edx, dword ptr [0x12e5e4ac] */
  EDX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e42e77 push edx */
  push32((uint32_t)(EDX));
  /* 12e42e78 call 0x12e43180 */
  push32(0x12e42e7du); f_12e43180();
  /* 12e42e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42e80 mov dword ptr [0x12e5e4ac], eax */
  w32((uint32_t)(0x12e5e4ac), (EAX));
L_12e42e85:;
  /* 12e42e85 cmp dword ptr [0x12e5e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e8c jne 0x12e42f45 */
  if (!C.zf) goto L_12e42f45;
  /* 12e42e92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e96 je 0x12e42eb7 */
  if (C.zf) goto L_12e42eb7;
  /* 12e42e98 cmp dword ptr [0x12e5e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42e9f je 0x12e42eb7 */
  if (C.zf) goto L_12e42eb7;
  /* 12e42ea1 call 0x12e42920 */
  push32(0x12e42ea6u); f_12e42920();
  /* 12e42ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e42ea8 je 0x12e42eb2 */
  if (C.zf) goto L_12e42eb2;
  /* 12e42eaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42ead jmp 0x12e430fb */
  goto L_12e430fb;
L_12e42eb2:;
  /* 12e42eb2 jmp 0x12e42f45 */
  goto L_12e42f45;
L_12e42eb7:;
  /* 12e42eb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ebb je 0x12e42ec4 */
  if (C.zf) goto L_12e42ec4;
  /* 12e42ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e42ebf jmp 0x12e430fb */
  goto L_12e430fb;
L_12e42ec4:;
  /* 12e42ec4 cmp dword ptr [0x12e5e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42ecb jne 0x12e42f04 */
  if (!C.zf) goto L_12e42f04;
  /* 12e42ecd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12e42ed2 push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e42ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e42ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e42edb call 0x12e32e20 */
  push32(0x12e42ee0u); f_12e32e20();
  /* 12e42ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42ee3 mov dword ptr [0x12e5e4ac], eax */
  w32((uint32_t)(0x12e5e4ac), (EAX));
  /* 12e42ee8 cmp dword ptr [0x12e5e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42eef jne 0x12e42ef9 */
  if (!C.zf) goto L_12e42ef9;
  /* 12e42ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42ef4 jmp 0x12e430fb */
  goto L_12e430fb;
L_12e42ef9:;
  /* 12e42ef9 mov eax, dword ptr [0x12e5e4ac] */
  EAX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e42efe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e42f04:;
  /* 12e42f04 cmp dword ptr [0x12e5e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42f0b jne 0x12e42f45 */
  if (!C.zf) goto L_12e42f45;
  /* 12e42f0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12e42f12 push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e42f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e42f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e42f1b call 0x12e32e20 */
  push32(0x12e42f20u); f_12e32e20();
  /* 12e42f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42f23 mov dword ptr [0x12e5e4b4], eax */
  w32((uint32_t)(0x12e5e4b4), (EAX));
  /* 12e42f28 cmp dword ptr [0x12e5e4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42f2f jne 0x12e42f39 */
  if (!C.zf) goto L_12e42f39;
  /* 12e42f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e42f34 jmp 0x12e430fb */
  goto L_12e430fb;
L_12e42f39:;
  /* 12e42f39 mov ecx, dword ptr [0x12e5e4b4] */
  ECX = (r32((uint32_t)(0x12e5e4b4)));
  /* 12e42f3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12e42f45:;
  /* 12e42f45 mov edx, dword ptr [0x12e5e4ac] */
  EDX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e42f4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e42f4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e42f51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e42f54 push eax */
  push32((uint32_t)(EAX));
  /* 12e42f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42f58 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42f59 call 0x12e43100 */
  push32(0x12e42f5eu); f_12e43100();
  /* 12e42f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e42f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42f68 jl 0x12e43001 */
  if ((C.sf!=C.of)) goto L_12e43001;
  /* 12e42f6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42f71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42f74 je 0x12e43001 */
  if (C.zf) goto L_12e43001;
  /* 12e42f7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42f7e je 0x12e42ff3 */
  if (C.zf) goto L_12e42ff3;
  /* 12e42f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e42f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42f88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e42f8b push edx */
  push32((uint32_t)(EDX));
  /* 12e42f8c call 0x12e338b0 */
  push32(0x12e42f91u); f_12e338b0();
  /* 12e42f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42f94 jmp 0x12e42f9f */
  goto L_12e42f9f;
L_12e42f96:;
  /* 12e42f96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e42f9f:;
  /* 12e42f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42fa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42fa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42fa9 je 0x12e42fc0 */
  if (C.zf) goto L_12e42fc0;
  /* 12e42fab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42fb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42fb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12e42fbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e42fbe jmp 0x12e42f96 */
  goto L_12e42f96;
L_12e42fc0:;
  /* 12e42fc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12e42fc5 push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e42fca push 2 */
  push32((uint32_t)(0x2u));
  /* 12e42fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42fcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e42fd2 push eax */
  push32((uint32_t)(EAX));
  /* 12e42fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e42fd7 call 0x12e332b0 */
  push32(0x12e42fdcu); f_12e332b0();
  /* 12e42fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e42fdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e42fe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e42fe6 je 0x12e42ff1 */
  if (C.zf) goto L_12e42ff1;
  /* 12e42fe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42feb mov dword ptr [0x12e5e4ac], edx */
  w32((uint32_t)(0x12e5e4ac), (EDX));
L_12e42ff1:;
  /* 12e42ff1 jmp 0x12e42fff */
  goto L_12e42fff;
L_12e42ff3:;
  /* 12e42ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e42ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e42ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e42ffc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12e42fff:;
  /* 12e42fff jmp 0x12e43074 */
  goto L_12e43074;
L_12e43001:;
  /* 12e43001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43005 jne 0x12e4306d */
  if (!C.zf) goto L_12e4306d;
  /* 12e43007 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4300b jge 0x12e43015 */
  if ((C.sf==C.of)) goto L_12e43015;
  /* 12e4300d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43010 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e43012 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e43015:;
  /* 12e43015 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12e4301a push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e4301f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e43021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43024 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12e4302b push edx */
  push32((uint32_t)(EDX));
  /* 12e4302c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4302f push eax */
  push32((uint32_t)(EAX));
  /* 12e43030 call 0x12e332b0 */
  push32(0x12e43035u); f_12e332b0();
  /* 12e43035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43038 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e4303b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4303f jne 0x12e43049 */
  if (!C.zf) goto L_12e43049;
  /* 12e43041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e43044 jmp 0x12e430fb */
  goto L_12e430fb;
L_12e43049:;
  /* 12e43049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4304c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43052 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12e43055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4305b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12e43063 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e43066 mov dword ptr [0x12e5e4ac], eax */
  w32((uint32_t)(0x12e5e4ac), (EAX));
  /* 12e4306b jmp 0x12e43074 */
  goto L_12e43074;
L_12e4306d:;
  /* 12e4306d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4306f jmp 0x12e430fb */
  goto L_12e430fb;
L_12e43074:;
  /* 12e43074 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43078 je 0x12e430f9 */
  if (C.zf) goto L_12e430f9;
  /* 12e4307a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12e4307f push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e43084 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e43086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43089 push ecx */
  push32((uint32_t)(ECX));
  /* 12e4308a call 0x12e35c50 */
  push32(0x12e4308fu); f_12e35c50();
  /* 12e4308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43092 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43095 push eax */
  push32((uint32_t)(EAX));
  /* 12e43096 call 0x12e32e20 */
  push32(0x12e4309bu); f_12e32e20();
  /* 12e4309b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4309e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e430a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e430a5 je 0x12e430f9 */
  if (C.zf) goto L_12e430f9;
  /* 12e430a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e430aa push edx */
  push32((uint32_t)(EDX));
  /* 12e430ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e430ae push eax */
  push32((uint32_t)(EAX));
  /* 12e430af call 0x12e35dd0 */
  push32(0x12e430b4u); f_12e35dd0();
  /* 12e430b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e430b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e430ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e430bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e430c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e430c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e430c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e430c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e430cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e430ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e430d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e430d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e430d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e430d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e430db not edx */
  EDX = (~(EDX));
  /* 12e430dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e430e0 push edx */
  push32((uint32_t)(EDX));
  /* 12e430e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e430e4 push eax */
  push32((uint32_t)(EAX));
  /* 12e430e5 call dword ptr [0x12e60244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60244))), 0x12e430ebu);
  /* 12e430eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e430ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e430f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e430f1 call 0x12e338b0 */
  push32(0x12e430f6u); f_12e338b0();
  /* 12e430f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e430f9:;
  /* 12e430f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e430fb:;
  /* 12e430fb pop esi */
  ESI = (pop32());
  /* 12e430fc mov esp, ebp */
  ESP = (EBP);
  /* 12e430fe pop ebp */
  EBP = (pop32());
  /* 12e430ff ret  */
  ESPCHK(0x12e42e20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12e43100 (124 bytes, 47 insns) */
void f_12e43100(void) {
  FTRACE(0x12e43100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e43100 push ebp */
  push32((uint32_t)(EBP));
  /* 12e43101 mov ebp, esp */
  EBP = (ESP);
  /* 12e43103 push ecx */
  push32((uint32_t)(ECX));
  /* 12e43104 mov eax, dword ptr [0x12e5e4ac] */
  EAX = (r32((uint32_t)(0x12e5e4ac)));
  /* 12e43109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e4310c jmp 0x12e43117 */
  goto L_12e43117;
L_12e4310e:;
  /* 12e4310e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e43111 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43114 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e43117:;
  /* 12e43117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4311a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4311d je 0x12e4316a */
  if (C.zf) goto L_12e4316a;
  /* 12e4311f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e43122 push eax */
  push32((uint32_t)(EAX));
  /* 12e43123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e43126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e43128 push edx */
  push32((uint32_t)(EDX));
  /* 12e43129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4312c push eax */
  push32((uint32_t)(EAX));
  /* 12e4312d call 0x12e428d0 */
  push32(0x12e43132u); f_12e428d0();
  /* 12e43132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e43137 jne 0x12e43168 */
  if (!C.zf) goto L_12e43168;
  /* 12e43139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4313c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e4313e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e43141 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12e43145 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43148 je 0x12e4315a */
  if (C.zf) goto L_12e4315a;
  /* 12e4314a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4314d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e4314f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e43152 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12e43156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e43158 jne 0x12e43168 */
  if (!C.zf) goto L_12e43168;
L_12e4315a:;
  /* 12e4315a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4315d sub eax, dword ptr [0x12e5e4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5e4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e43163 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e43166 jmp 0x12e43178 */
  goto L_12e43178;
L_12e43168:;
  /* 12e43168 jmp 0x12e4310e */
  goto L_12e4310e;
L_12e4316a:;
  /* 12e4316a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e4316d sub eax, dword ptr [0x12e5e4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5e4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e43173 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e43176 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12e43178:;
  /* 12e43178 mov esp, ebp */
  ESP = (EBP);
  /* 12e4317a pop ebp */
  EBP = (pop32());
  /* 12e4317b ret  */
  ESPCHK(0x12e43100u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12e43180 (238 bytes, 80 insns) */
void f_12e43180(void) {
  FTRACE(0x12e43180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e43180 push ebp */
  push32((uint32_t)(EBP));
  /* 12e43181 mov ebp, esp */
  EBP = (ESP);
  /* 12e43183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e43186 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e4318d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e43193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43197 jne 0x12e431a0 */
  if (!C.zf) goto L_12e431a0;
  /* 12e43199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e4319b jmp 0x12e4326a */
  goto L_12e4326a;
L_12e431a0:;
  /* 12e431a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e431a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e431a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e431a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e431ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e431ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e431b0 je 0x12e431bd */
  if (C.zf) goto L_12e431bd;
  /* 12e431b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e431b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e431b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e431bb jmp 0x12e431a0 */
  goto L_12e431a0;
L_12e431bd:;
  /* 12e431bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12e431c2 push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e431c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e431c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e431cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12e431d3 push eax */
  push32((uint32_t)(EAX));
  /* 12e431d4 call 0x12e32e20 */
  push32(0x12e431d9u); f_12e32e20();
  /* 12e431d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e431dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e431df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e431e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e431e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e431e9 jne 0x12e431f5 */
  if (!C.zf) goto L_12e431f5;
  /* 12e431eb push 9 */
  push32((uint32_t)(0x9u));
  /* 12e431ed call 0x12e31d90 */
  push32(0x12e431f2u); f_12e31d90();
  /* 12e431f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e431f5:;
  /* 12e431f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e431f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e431fb:;
  /* 12e431fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e431fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43201 je 0x12e4325e */
  if (C.zf) goto L_12e4325e;
  /* 12e43203 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12e43208 push 0x12e5a900 */
  push32((uint32_t)(0x12e5a900u));
  /* 12e4320d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e4320f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e43212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e43214 push edx */
  push32((uint32_t)(EDX));
  /* 12e43215 call 0x12e35c50 */
  push32(0x12e4321au); f_12e35c50();
  /* 12e4321a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4321d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43220 push eax */
  push32((uint32_t)(EAX));
  /* 12e43221 call 0x12e32e20 */
  push32(0x12e43226u); f_12e32e20();
  /* 12e43226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4322c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e4322e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43234 je 0x12e4324a */
  if (C.zf) goto L_12e4324a;
  /* 12e43236 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e43239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e4323b push ecx */
  push32((uint32_t)(ECX));
  /* 12e4323c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e4323f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e43241 push eax */
  push32((uint32_t)(EAX));
  /* 12e43242 call 0x12e35dd0 */
  push32(0x12e43247u); f_12e35dd0();
  /* 12e43247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e4324a:;
  /* 12e4324a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e4324d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e43253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43256 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43259 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e4325c jmp 0x12e431fb */
  goto L_12e431fb;
L_12e4325e:;
  /* 12e4325e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e43261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e43267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e4326a:;
  /* 12e4326a mov esp, ebp */
  ESP = (EBP);
  /* 12e4326c pop ebp */
  EBP = (pop32());
  /* 12e4326d ret  */
  ESPCHK(0x12e43180u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x12e43270 (237 bytes, 81 insns) */
void f_12e43270(void) {
  FTRACE(0x12e43270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e43270 push ebp */
  push32((uint32_t)(EBP));
  /* 12e43271 mov ebp, esp */
  EBP = (ESP);
  /* 12e43273 push ecx */
  push32((uint32_t)(ECX));
  /* 12e43274 cmp dword ptr [0x12e5fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e4327b jne 0x12e43292 */
  if (!C.zf) goto L_12e43292;
  /* 12e4327d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e43280 push eax */
  push32((uint32_t)(EAX));
  /* 12e43281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43284 push ecx */
  push32((uint32_t)(ECX));
  /* 12e43285 call 0x12e43370 */
  push32(0x12e4328au); f_12e43370();
  /* 12e4328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4328d jmp 0x12e43359 */
  goto L_12e43359;
L_12e43292:;
  /* 12e43292 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e43294 call 0x12e36820 */
  push32(0x12e43299u); f_12e36820();
  /* 12e43299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4329c jmp 0x12e432a7 */
  goto L_12e432a7;
L_12e4329e:;
  /* 12e4329e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e432a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e432a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e432a7:;
  /* 12e432a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e432aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12e432ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12e432b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e432b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e432bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e432bd je 0x12e4333b */
  if (C.zf) goto L_12e4333b;
  /* 12e432bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e432c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e432c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e432c9 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e432cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e432d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e432d4 je 0x12e43326 */
  if (C.zf) goto L_12e43326;
  /* 12e432d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e432d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e432dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e432df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e432e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e432e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e432e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e432e8 jne 0x12e432f8 */
  if (!C.zf) goto L_12e432f8;
  /* 12e432ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e432ec call 0x12e368c0 */
  push32(0x12e432f1u); f_12e368c0();
  /* 12e432f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e432f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e432f6 jmp 0x12e43359 */
  goto L_12e43359;
L_12e432f8:;
  /* 12e432f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e432fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e43301 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e43304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e43309 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e4330b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e4330d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43310 jne 0x12e43324 */
  if (!C.zf) goto L_12e43324;
  /* 12e43312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e43314 call 0x12e368c0 */
  push32(0x12e43319u); f_12e368c0();
  /* 12e43319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e4331c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e4331f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e43322 jmp 0x12e43359 */
  goto L_12e43359;
L_12e43324:;
  /* 12e43324 jmp 0x12e43336 */
  goto L_12e43336;
L_12e43326:;
  /* 12e43326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e43329 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e4332f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43332 jne 0x12e43336 */
  if (!C.zf) goto L_12e43336;
  /* 12e43334 jmp 0x12e4333b */
  goto L_12e4333b;
L_12e43336:;
  /* 12e43336 jmp 0x12e4329e */
  goto L_12e4329e;
L_12e4333b:;
  /* 12e4333b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e4333d call 0x12e368c0 */
  push32(0x12e43342u); f_12e368c0();
  /* 12e43342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e43345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e43348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e4334d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e43350 jne 0x12e43357 */
  if (!C.zf) goto L_12e43357;
  /* 12e43352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e43355 jmp 0x12e43359 */
  goto L_12e43359;
L_12e43357:;
  /* 12e43357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e43359:;
  /* 12e43359 mov esp, ebp */
  ESP = (EBP);
  /* 12e4335b pop ebp */
  EBP = (pop32());
  /* 12e4335c ret  */
  ESPCHK(0x12e43270u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12e43370 (193 bytes, 87 insns) */
void f_12e43370(void) {
  FTRACE(0x12e43370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e43370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e43372 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12e43376 push ebx */
  push32((uint32_t)(EBX));
  /* 12e43377 mov ebx, eax */
  EBX = (EAX);
  /* 12e43379 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e4337c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e43380 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e43386 je 0x12e4339b */
  if (C.zf) goto L_12e4339b;
L_12e43388:;
  /* 12e43388 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12e4338a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e4338b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e4338d je 0x12e43360 */
  if (C.zf) { jmp_ind(0x12e43360u); return; }
  /* 12e4338f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12e43391 je 0x12e433e4 */
  if (C.zf) goto L_12e433e4;
  /* 12e43393 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e43399 jne 0x12e43388 */
  if (!C.zf) goto L_12e43388;
L_12e4339b:;
  /* 12e4339b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12e4339d push edi */
  push32((uint32_t)(EDI));
  /* 12e4339e mov eax, ebx */
  EAX = (EBX);
  /* 12e433a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12e433a3 push esi */
  push32((uint32_t)(ESI));
  /* 12e433a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12e433a6:;
  /* 12e433a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12e433a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12e433ad mov eax, ecx */
  EAX = (ECX);
  /* 12e433af mov esi, edi */
  ESI = (EDI);
  /* 12e433b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12e433b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e433b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e433b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e433ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e433bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12e433bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12e433c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e433c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e433ca jne 0x12e433e8 */
  if (!C.zf) goto L_12e433e8;
  /* 12e433cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e433d1 je 0x12e433a6 */
  if (C.zf) goto L_12e433a6;
  /* 12e433d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e433d8 jne 0x12e433e2 */
  if (!C.zf) goto L_12e433e2;
  /* 12e433da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12e433e0 jne 0x12e433a6 */
  if (!C.zf) goto L_12e433a6;
L_12e433e2:;
  /* 12e433e2 pop esi */
  ESI = (pop32());
  /* 12e433e3 pop edi */
  EDI = (pop32());
L_12e433e4:;
  /* 12e433e4 pop ebx */
  EBX = (pop32());
  /* 12e433e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e433e7 ret  */
  ESPCHK(0x12e43370u, _esp0);
  ESP += 4; return;
L_12e433e8:;
  /* 12e433e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12e433eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e433ed je 0x12e43425 */
  if (C.zf) goto L_12e43425;
  /* 12e433ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e433f1 je 0x12e433e2 */
  if (C.zf) goto L_12e433e2;
  /* 12e433f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e433f5 je 0x12e4341e */
  if (C.zf) goto L_12e4341e;
  /* 12e433f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e433f9 je 0x12e433e2 */
  if (C.zf) goto L_12e433e2;
  /* 12e433fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e433fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e43400 je 0x12e43417 */
  if (C.zf) goto L_12e43417;
  /* 12e43402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e43404 je 0x12e433e2 */
  if (C.zf) goto L_12e433e2;
  /* 12e43406 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e43408 je 0x12e43410 */
  if (C.zf) goto L_12e43410;
  /* 12e4340a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e4340c je 0x12e433e2 */
  if (C.zf) goto L_12e433e2;
  /* 12e4340e jmp 0x12e433a6 */
  goto L_12e433a6;
L_12e43410:;
  /* 12e43410 pop esi */
  ESI = (pop32());
  /* 12e43411 pop edi */
  EDI = (pop32());
  /* 12e43412 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12e43415 pop ebx */
  EBX = (pop32());
  /* 12e43416 ret  */
  ESPCHK(0x12e43370u, _esp0);
  ESP += 4; return;
L_12e43417:;
  /* 12e43417 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12e4341a pop esi */
  ESI = (pop32());
  /* 12e4341b pop edi */
  EDI = (pop32());
  /* 12e4341c pop ebx */
  EBX = (pop32());
  /* 12e4341d ret  */
  ESPCHK(0x12e43370u, _esp0);
  ESP += 4; return;
L_12e4341e:;
  /* 12e4341e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12e43421 pop esi */
  ESI = (pop32());
  /* 12e43422 pop edi */
  EDI = (pop32());
  /* 12e43423 pop ebx */
  EBX = (pop32());
  /* 12e43424 ret  */
  ESPCHK(0x12e43370u, _esp0);
  ESP += 4; return;
L_12e43425:;
  /* 12e43425 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12e43428 pop esi */
  ESI = (pop32());
  /* 12e43429 pop edi */
  EDI = (pop32());
  /* 12e4342a pop ebx */
  EBX = (pop32());
  /* 12e4342b ret  */
  ESPCHK(0x12e43370u, _esp0);
  ESP += 4; return;
  /* 12e4342c jmp dword ptr [0x12e60280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e60280)))); return;
}

/* RtlUnwind @ 0x12e4357c (6 bytes, 1 insns) */
void f_12e4357c(void) {
  FTRACE(0x12e4357cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e4357c jmp dword ptr [0x12e6027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e6027c)))); return;
}

