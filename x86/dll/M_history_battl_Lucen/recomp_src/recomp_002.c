#include "recomp.h"

/* FUN_1000f640 @ 0x129cf640 (135 bytes, 48 insns) */
void f_129cf640(void) {
  FTRACE(0x129cf640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf640 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf641 mov ebp, esp */
  EBP = (ESP);
  /* 129cf643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf646 push esi */
  push32((uint32_t)(ESI));
  /* 129cf647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf64a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cf64f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cf654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cf659 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 129cf65c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cf661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cf664 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cf666 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 129cf669 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf66a push 1 */
  push32((uint32_t)(0x1u));
  /* 129cf66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cf66f push edx */
  push32((uint32_t)(EDX));
  /* 129cf670 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf676u);
  /* 129cf676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf678 jne 0x129cf67e */
  if (!C.zf) goto L_129cf67e;
  /* 129cf67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cf67c jmp 0x129cf6c2 */
  goto L_129cf6c2;
L_129cf67e:;
  /* 129cf67e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 129cf681 push eax */
  push32((uint32_t)(EAX));
  /* 129cf682 call 0x129cf8b0 */
  push32(0x129cf687u); f_129cf8b0();
  /* 129cf687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf68a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf68d je 0x129cf6bd */
  if (C.zf) goto L_129cf6bd;
  /* 129cf68f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf693 je 0x129cf6bd */
  if (C.zf) goto L_129cf6bd;
  /* 129cf695 mov ecx, dword ptr [0x129ee70c] */
  ECX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf69b push ecx */
  push32((uint32_t)(ECX));
  /* 129cf69c call 0x129cf930 */
  push32(0x129cf6a1u); f_129cf930();
  /* 129cf6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf6a4 mov esi, eax */
  ESI = (EAX);
  /* 129cf6a6 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf6ac push edx */
  push32((uint32_t)(EDX));
  /* 129cf6ad call 0x129c5c50 */
  push32(0x129cf6b2u); f_129c5c50();
  /* 129cf6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf6b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf6b7 jne 0x129cf6bd */
  if (!C.zf) goto L_129cf6bd;
  /* 129cf6b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cf6bb jmp 0x129cf6c2 */
  goto L_129cf6c2;
L_129cf6bd:;
  /* 129cf6bd mov eax, 1 */
  EAX = (0x1u);
L_129cf6c2:;
  /* 129cf6c2 pop esi */
  ESI = (pop32());
  /* 129cf6c3 mov esp, ebp */
  ESP = (EBP);
  /* 129cf6c5 pop ebp */
  EBP = (pop32());
  /* 129cf6c6 ret  */
  ESPCHK(0x129cf640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x129cf6d0 (77 bytes, 18 insns) */
void f_129cf6d0(void) {
  FTRACE(0x129cf6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf6d1 mov ebp, esp */
  EBP = (ESP);
  /* 129cf6d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf6d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 129cf6e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 129cf6e9 push eax */
  push32((uint32_t)(EAX));
  /* 129cf6ea call dword ptr [0x129f0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0258))), 0x129cf6f0u);
  /* 129cf6f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf6f2 je 0x129cf709 */
  if (C.zf) goto L_129cf709;
  /* 129cf6f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf6fb jne 0x129cf709 */
  if (!C.zf) goto L_129cf709;
  /* 129cf6fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 129cf707 jmp 0x129cf713 */
  goto L_129cf713;
L_129cf709:;
  /* 129cf709 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_129cf713:;
  /* 129cf713 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 129cf719 mov esp, ebp */
  ESP = (EBP);
  /* 129cf71b pop ebp */
  EBP = (pop32());
  /* 129cf71c ret  */
  ESPCHK(0x129cf6d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x129cf720 (388 bytes, 118 insns) */
void f_129cf720(void) {
  FTRACE(0x129cf720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf720 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf721 mov ebp, esp */
  EBP = (ESP);
  /* 129cf723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cf72d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 129cf734 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129cf73b:;
  /* 129cf73b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cf73e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf741 jg 0x129cf888 */
  if ((!C.zf&&C.sf==C.of)) goto L_129cf888;
  /* 129cf747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cf74a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf74d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129cf74e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf750 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129cf752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cf755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf758 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf75e cmp edx, dword ptr [ecx + 0x129ed520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x129ed520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf764 jne 0x129cf85e */
  if (!C.zf) goto L_129cf85e;
  /* 129cf76a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cf76d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129cf770 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf774 ja 0x129cf797 */
  if ((!C.cf&&!C.zf)) goto L_129cf797;
  /* 129cf776 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf77a je 0x129cf809 */
  if (C.zf) goto L_129cf809;
  /* 129cf780 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf784 je 0x129cf7b4 */
  if (C.zf) goto L_129cf7b4;
  /* 129cf786 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf78a je 0x129cf7d6 */
  if (C.zf) goto L_129cf7d6;
  /* 129cf78c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf790 je 0x129cf7f8 */
  if (C.zf) goto L_129cf7f8;
  /* 129cf792 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf797:;
  /* 129cf797 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf79e je 0x129cf7c5 */
  if (C.zf) goto L_129cf7c5;
  /* 129cf7a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf7a7 je 0x129cf7e7 */
  if (C.zf) goto L_129cf7e7;
  /* 129cf7a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf7b0 je 0x129cf81a */
  if (C.zf) goto L_129cf81a;
  /* 129cf7b2 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf7b4:;
  /* 129cf7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf7b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf7ba add ecx, 0x129ed524 */
  { uint32_t _a=(ECX),_b=(0x129ed524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf7c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cf7c3 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf7c5:;
  /* 129cf7c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf7c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf7cb mov eax, dword ptr [edx + 0x129ed52c] */
  EAX = (r32((uint32_t)(EDX + 0x129ed52c)));
  /* 129cf7d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cf7d4 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf7d6:;
  /* 129cf7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf7d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf7dc add ecx, 0x129ed530 */
  { uint32_t _a=(ECX),_b=(0x129ed530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf7e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cf7e5 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf7e7:;
  /* 129cf7e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf7ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf7ed mov eax, dword ptr [edx + 0x129ed534] */
  EAX = (r32((uint32_t)(EDX + 0x129ed534)));
  /* 129cf7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cf7f6 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf7f8:;
  /* 129cf7f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf7fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf7fe add ecx, 0x129ed538 */
  { uint32_t _a=(ECX),_b=(0x129ed538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cf807 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf809:;
  /* 129cf809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf80c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf80f add edx, 0x129ed53c */
  { uint32_t _a=(EDX),_b=(0x129ed53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cf818 jmp 0x129cf828 */
  goto L_129cf828;
L_129cf81a:;
  /* 129cf81a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf81d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf820 add eax, 0x129ed544 */
  { uint32_t _a=(EAX),_b=(0x129ed544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129cf828:;
  /* 129cf828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf82c je 0x129cf834 */
  if (C.zf) goto L_129cf834;
  /* 129cf82e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf832 jge 0x129cf836 */
  if ((C.sf==C.of)) goto L_129cf836;
L_129cf834:;
  /* 129cf834 jmp 0x129cf888 */
  goto L_129cf888;
L_129cf836:;
  /* 129cf836 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cf839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf83c push ecx */
  push32((uint32_t)(ECX));
  /* 129cf83d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cf840 push edx */
  push32((uint32_t)(EDX));
  /* 129cf841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cf844 push eax */
  push32((uint32_t)(EAX));
  /* 129cf845 call 0x129c6640 */
  push32(0x129cf84au); f_129c6640();
  /* 129cf84a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf84d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cf850 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf853 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 129cf857 mov eax, 1 */
  EAX = (0x1u);
  /* 129cf85c jmp 0x129cf89e */
  goto L_129cf89e;
L_129cf85e:;
  /* 129cf85e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf861 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf867 cmp eax, dword ptr [edx + 0x129ed520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x129ed520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf86d jae 0x129cf87a */
  if (!C.cf) goto L_129cf87a;
  /* 129cf86f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf872 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129cf878 jmp 0x129cf883 */
  goto L_129cf883;
L_129cf87a:;
  /* 129cf87a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cf87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf880 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129cf883:;
  /* 129cf883 jmp 0x129cf73b */
  goto L_129cf73b;
L_129cf888:;
  /* 129cf888 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cf88b push eax */
  push32((uint32_t)(EAX));
  /* 129cf88c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cf88f push ecx */
  push32((uint32_t)(ECX));
  /* 129cf890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cf893 push edx */
  push32((uint32_t)(EDX));
  /* 129cf894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf897 push eax */
  push32((uint32_t)(EAX));
  /* 129cf898 call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129cf89eu);
L_129cf89e:;
  /* 129cf89e mov esp, ebp */
  ESP = (EBP);
  /* 129cf8a0 pop ebp */
  EBP = (pop32());
  /* 129cf8a1 ret 0x10 */
  ESPCHK(0x129cf720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f8b0 @ 0x129cf8b0 (118 bytes, 42 insns) */
void f_129cf8b0(void) {
  FTRACE(0x129cf8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf8b1 mov ebp, esp */
  EBP = (ESP);
  /* 129cf8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf8b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129cf8bd:;
  /* 129cf8bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf8c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129cf8c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 129cf8c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf8cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf8cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129cf8d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cf8d4 je 0x129cf91f */
  if (C.zf) goto L_129cf91f;
  /* 129cf8d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf8da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf8dd jl 0x129cf8f2 */
  if ((C.sf!=C.of)) goto L_129cf8f2;
  /* 129cf8df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf8e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf8e6 jg 0x129cf8f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_129cf8f2;
  /* 129cf8e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 129cf8eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129cf8ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 129cf8f0 jmp 0x129cf90c */
  goto L_129cf90c;
L_129cf8f2:;
  /* 129cf8f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf8f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf8f9 jl 0x129cf90c */
  if ((C.sf!=C.of)) goto L_129cf90c;
  /* 129cf8fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf8ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf902 jg 0x129cf90c */
  if ((!C.zf&&C.sf==C.of)) goto L_129cf90c;
  /* 129cf904 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 129cf907 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129cf909 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_129cf90c:;
  /* 129cf90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cf90f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129cf912 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cf916 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 129cf91a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cf91d jmp 0x129cf8bd */
  goto L_129cf8bd;
L_129cf91f:;
  /* 129cf91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cf922 mov esp, ebp */
  ESP = (EBP);
  /* 129cf924 pop ebp */
  EBP = (pop32());
  /* 129cf925 ret  */
  ESPCHK(0x129cf8b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x129cf930 (101 bytes, 36 insns) */
void f_129cf930(void) {
  FTRACE(0x129cf930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf930 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf931 mov ebp, esp */
  EBP = (ESP);
  /* 129cf933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cf93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129cf942 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 129cf945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf94b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_129cf94e:;
  /* 129cf94e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 129cf952 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf955 jl 0x129cf960 */
  if ((C.sf!=C.of)) goto L_129cf960;
  /* 129cf957 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 129cf95b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf95e jle 0x129cf972 */
  if ((C.zf||C.sf!=C.of)) goto L_129cf972;
L_129cf960:;
  /* 129cf960 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 129cf964 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf967 jl 0x129cf98e */
  if ((C.sf!=C.of)) goto L_129cf98e;
  /* 129cf969 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 129cf96d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf970 jg 0x129cf98e */
  if ((!C.zf&&C.sf==C.of)) goto L_129cf98e;
L_129cf972:;
  /* 129cf972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cf975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cf97b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf97e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129cf980 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 129cf983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf986 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf989 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129cf98c jmp 0x129cf94e */
  goto L_129cf94e;
L_129cf98e:;
  /* 129cf98e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cf991 mov esp, ebp */
  ESP = (EBP);
  /* 129cf993 pop ebp */
  EBP = (pop32());
  /* 129cf994 ret  */
  ESPCHK(0x129cf930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x129cf9a0 (122 bytes, 39 insns) */
void f_129cf9a0(void) {
  FTRACE(0x129cf9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf9a1 mov ebp, esp */
  EBP = (ESP);
  /* 129cf9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf9a7 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf9ad jae 0x129cf9d1 */
  if (!C.cf) goto L_129cf9d1;
  /* 129cf9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf9b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cf9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf9b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cf9bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cf9be mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cf9c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cf9ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cf9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cf9cf jne 0x129cf9ec */
  if (!C.zf) goto L_129cf9ec;
L_129cf9d1:;
  /* 129cf9d1 call 0x129cacf0 */
  push32(0x129cf9d6u); f_129cacf0();
  /* 129cf9d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cf9dc call 0x129cad00 */
  push32(0x129cf9e1u); f_129cad00();
  /* 129cf9e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cf9e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cf9ea jmp 0x129cfa16 */
  goto L_129cfa16;
L_129cf9ec:;
  /* 129cf9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf9ef push edx */
  push32((uint32_t)(EDX));
  /* 129cf9f0 call 0x129cc510 */
  push32(0x129cf9f5u); f_129cc510();
  /* 129cf9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf9f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf9fb push eax */
  push32((uint32_t)(EAX));
  /* 129cf9fc call 0x129cfa20 */
  push32(0x129cfa01u); f_129cfa20();
  /* 129cfa01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cfa07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa0a push ecx */
  push32((uint32_t)(ECX));
  /* 129cfa0b call 0x129cc5a0 */
  push32(0x129cfa10u); f_129cc5a0();
  /* 129cfa10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cfa16:;
  /* 129cfa16 mov esp, ebp */
  ESP = (EBP);
  /* 129cfa18 pop ebp */
  EBP = (pop32());
  /* 129cfa19 ret  */
  ESPCHK(0x129cf9a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x129cfa20 (170 bytes, 59 insns) */
void f_129cfa20(void) {
  FTRACE(0x129cfa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cfa20 push ebp */
  push32((uint32_t)(EBP));
  /* 129cfa21 mov ebp, esp */
  EBP = (ESP);
  /* 129cfa23 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfa24 push esi */
  push32((uint32_t)(ESI));
  /* 129cfa25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa28 push eax */
  push32((uint32_t)(EAX));
  /* 129cfa29 call 0x129cc390 */
  push32(0x129cfa2eu); f_129cc390();
  /* 129cfa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfa34 je 0x129cfa73 */
  if (C.zf) goto L_129cfa73;
  /* 129cfa36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfa3a je 0x129cfa42 */
  if (C.zf) goto L_129cfa42;
  /* 129cfa3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfa40 jne 0x129cfa5c */
  if (!C.zf) goto L_129cfa5c;
L_129cfa42:;
  /* 129cfa42 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cfa44 call 0x129cc390 */
  push32(0x129cfa49u); f_129cc390();
  /* 129cfa49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa4c mov esi, eax */
  ESI = (EAX);
  /* 129cfa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 129cfa50 call 0x129cc390 */
  push32(0x129cfa55u); f_129cc390();
  /* 129cfa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfa5a je 0x129cfa73 */
  if (C.zf) goto L_129cfa73;
L_129cfa5c:;
  /* 129cfa5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa5f push ecx */
  push32((uint32_t)(ECX));
  /* 129cfa60 call 0x129cc390 */
  push32(0x129cfa65u); f_129cc390();
  /* 129cfa65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa68 push eax */
  push32((uint32_t)(EAX));
  /* 129cfa69 call dword ptr [0x129f0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0260))), 0x129cfa6fu);
  /* 129cfa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cfa71 je 0x129cfa7c */
  if (C.zf) goto L_129cfa7c;
L_129cfa73:;
  /* 129cfa73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cfa7a jmp 0x129cfa85 */
  goto L_129cfa85;
L_129cfa7c:;
  /* 129cfa7c call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cfa82u);
  /* 129cfa82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cfa85:;
  /* 129cfa85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa88 push edx */
  push32((uint32_t)(EDX));
  /* 129cfa89 call 0x129cc2b0 */
  push32(0x129cfa8eu); f_129cc2b0();
  /* 129cfa8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfa91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cfa97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfa9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cfa9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cfaa0 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cfaa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 129cfaac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfab0 je 0x129cfac3 */
  if (C.zf) goto L_129cfac3;
  /* 129cfab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cfab5 push eax */
  push32((uint32_t)(EAX));
  /* 129cfab6 call 0x129cac50 */
  push32(0x129cfabbu); f_129cac50();
  /* 129cfabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfabe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cfac1 jmp 0x129cfac5 */
  goto L_129cfac5;
L_129cfac3:;
  /* 129cfac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cfac5:;
  /* 129cfac5 pop esi */
  ESI = (pop32());
  /* 129cfac6 mov esp, ebp */
  ESP = (EBP);
  /* 129cfac8 pop ebp */
  EBP = (pop32());
  /* 129cfac9 ret  */
  ESPCHK(0x129cfa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x129cfad0 (146 bytes, 52 insns) */
void f_129cfad0(void) {
  FTRACE(0x129cfad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cfad0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cfad1 mov ebp, esp */
  EBP = (ESP);
  /* 129cfad3 push ebx */
  push32((uint32_t)(EBX));
  /* 129cfad4 push esi */
  push32((uint32_t)(ESI));
  /* 129cfad5 push edi */
  push32((uint32_t)(EDI));
L_129cfad6:;
  /* 129cfad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfada jne 0x129cfafa */
  if (!C.zf) goto L_129cfafa;
  /* 129cfadc push 0x129ea000 */
  push32((uint32_t)(0x129ea000u));
  /* 129cfae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cfae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 129cfae5 push 0x129ea6c8 */
  push32((uint32_t)(0x129ea6c8u));
  /* 129cfaea push 2 */
  push32((uint32_t)(0x2u));
  /* 129cfaec call 0x129c1ee0 */
  push32(0x129cfaf1u); f_129c1ee0();
  /* 129cfaf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfaf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfaf7 jne 0x129cfafa */
  if (!C.zf) goto L_129cfafa;
  /* 129cfaf9 int3  */
  x86_unimpl("int3 @ 0x129cfaf9");
L_129cfafa:;
  /* 129cfafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cfafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cfafe jne 0x129cfad6 */
  if (!C.zf) goto L_129cfad6;
  /* 129cfb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cfb06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 129cfb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cfb0e je 0x129cfb5d */
  if (C.zf) goto L_129cfb5d;
  /* 129cfb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cfb16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 129cfb19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cfb1b je 0x129cfb5d */
  if (C.zf) goto L_129cfb5d;
  /* 129cfb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cfb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129cfb25 push eax */
  push32((uint32_t)(EAX));
  /* 129cfb26 call 0x129c38b0 */
  push32(0x129cfb2bu); f_129c38b0();
  /* 129cfb2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cfb34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 129cfb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129cfb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 129cfb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 129cfb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cfb56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_129cfb5d:;
  /* 129cfb5d pop edi */
  EDI = (pop32());
  /* 129cfb5e pop esi */
  ESI = (pop32());
  /* 129cfb5f pop ebx */
  EBX = (pop32());
  /* 129cfb60 pop ebp */
  EBP = (pop32());
  /* 129cfb61 ret  */
  ESPCHK(0x129cfad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x129cfb70 (289 bytes, 97 insns) */
void f_129cfb70(void) {
  FTRACE(0x129cfb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cfb70 push ebp */
  push32((uint32_t)(EBP));
  /* 129cfb71 mov ebp, esp */
  EBP = (ESP);
  /* 129cfb73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cfb76 push esi */
  push32((uint32_t)(ESI));
  /* 129cfb77 mov eax, dword ptr [0x129edc98] */
  EAX = (r32((uint32_t)(0x129edc98)));
  /* 129cfb7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cfb7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cfb86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfb8d jmp 0x129cfb98 */
  goto L_129cfb98;
L_129cfb8f:;
  /* 129cfb8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfb92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfb95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129cfb98:;
  /* 129cfb98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfb9c jae 0x129cfbd1 */
  if (!C.cf) goto L_129cfbd1;
  /* 129cfb9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cfba7 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfba8 call 0x129c5c50 */
  push32(0x129cfbadu); f_129c5c50();
  /* 129cfbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfbb0 mov esi, eax */
  ESI = (EAX);
  /* 129cfbb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfbb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfbb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 129cfbbc push ecx */
  push32((uint32_t)(ECX));
  /* 129cfbbd call 0x129c5c50 */
  push32(0x129cfbc2u); f_129c5c50();
  /* 129cfbc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfbc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfbc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 129cfbcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cfbcf jmp 0x129cfb8f */
  goto L_129cfb8f;
L_129cfbd1:;
  /* 129cfbd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cfbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfbd7 push eax */
  push32((uint32_t)(EAX));
  /* 129cfbd8 call 0x129c2e00 */
  push32(0x129cfbddu); f_129c2e00();
  /* 129cfbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfbe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cfbe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfbe7 je 0x129cfc89 */
  if (C.zf) goto L_129cfc89;
  /* 129cfbed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cfbf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfbf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfbfa jmp 0x129cfc05 */
  goto L_129cfc05;
L_129cfbfc:;
  /* 129cfbfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfbff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129cfc05:;
  /* 129cfc05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfc09 jae 0x129cfc7a */
  if (!C.cf) goto L_129cfc7a;
  /* 129cfc0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 129cfc11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfc1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfc1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfc20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cfc23 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfc24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc27 push edx */
  push32((uint32_t)(EDX));
  /* 129cfc28 call 0x129c5dd0 */
  push32(0x129cfc2du); f_129c5dd0();
  /* 129cfc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc30 push eax */
  push32((uint32_t)(EAX));
  /* 129cfc31 call 0x129c5c50 */
  push32(0x129cfc36u); f_129c5c50();
  /* 129cfc36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfc41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 129cfc47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129cfc50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfc53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfc56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 129cfc5a push eax */
  push32((uint32_t)(EAX));
  /* 129cfc5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc5e push ecx */
  push32((uint32_t)(ECX));
  /* 129cfc5f call 0x129c5dd0 */
  push32(0x129cfc64u); f_129c5dd0();
  /* 129cfc64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc67 push eax */
  push32((uint32_t)(EAX));
  /* 129cfc68 call 0x129c5c50 */
  push32(0x129cfc6du); f_129c5c50();
  /* 129cfc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129cfc78 jmp 0x129cfbfc */
  goto L_129cfbfc;
L_129cfc7a:;
  /* 129cfc7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129cfc80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfc83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfc86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129cfc89:;
  /* 129cfc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cfc8c pop esi */
  ESI = (pop32());
  /* 129cfc8d mov esp, ebp */
  ESP = (EBP);
  /* 129cfc8f pop ebp */
  EBP = (pop32());
  /* 129cfc90 ret  */
  ESPCHK(0x129cfb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x129cfca0 (291 bytes, 97 insns) */
void f_129cfca0(void) {
  FTRACE(0x129cfca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cfca0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cfca1 mov ebp, esp */
  EBP = (ESP);
  /* 129cfca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cfca6 push esi */
  push32((uint32_t)(ESI));
  /* 129cfca7 mov eax, dword ptr [0x129edc98] */
  EAX = (r32((uint32_t)(0x129edc98)));
  /* 129cfcac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cfcaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cfcb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfcbd jmp 0x129cfcc8 */
  goto L_129cfcc8;
L_129cfcbf:;
  /* 129cfcbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfcc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfcc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129cfcc8:;
  /* 129cfcc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfccc jae 0x129cfd02 */
  if (!C.cf) goto L_129cfd02;
  /* 129cfcce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfcd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 129cfcd8 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfcd9 call 0x129c5c50 */
  push32(0x129cfcdeu); f_129c5c50();
  /* 129cfcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfce1 mov esi, eax */
  ESI = (EAX);
  /* 129cfce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 129cfced push ecx */
  push32((uint32_t)(ECX));
  /* 129cfcee call 0x129c5c50 */
  push32(0x129cfcf3u); f_129c5c50();
  /* 129cfcf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfcf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfcf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 129cfcfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cfd00 jmp 0x129cfcbf */
  goto L_129cfcbf;
L_129cfd02:;
  /* 129cfd02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cfd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd08 push eax */
  push32((uint32_t)(EAX));
  /* 129cfd09 call 0x129c2e00 */
  push32(0x129cfd0eu); f_129c2e00();
  /* 129cfd0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cfd14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfd18 je 0x129cfdbb */
  if (C.zf) goto L_129cfdbb;
  /* 129cfd1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cfd21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfd24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfd2b jmp 0x129cfd36 */
  goto L_129cfd36;
L_129cfd2d:;
  /* 129cfd2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfd30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129cfd36:;
  /* 129cfd36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfd3a jae 0x129cfdac */
  if (!C.cf) goto L_129cfdac;
  /* 129cfd3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 129cfd42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfd4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfd4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfd51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 129cfd55 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfd56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd59 push edx */
  push32((uint32_t)(EDX));
  /* 129cfd5a call 0x129c5dd0 */
  push32(0x129cfd5fu); f_129c5dd0();
  /* 129cfd5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd62 push eax */
  push32((uint32_t)(EAX));
  /* 129cfd63 call 0x129c5c50 */
  push32(0x129cfd68u); f_129c5c50();
  /* 129cfd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129cfd73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 129cfd79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129cfd82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfd85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfd88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129cfd8c push eax */
  push32((uint32_t)(EAX));
  /* 129cfd8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfd90 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfd91 call 0x129c5dd0 */
  push32(0x129cfd96u); f_129c5dd0();
  /* 129cfd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfd99 push eax */
  push32((uint32_t)(EAX));
  /* 129cfd9a call 0x129c5c50 */
  push32(0x129cfd9fu); f_129c5c50();
  /* 129cfd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfda2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfda5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfda7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129cfdaa jmp 0x129cfd2d */
  goto L_129cfd2d;
L_129cfdac:;
  /* 129cfdac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfdaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129cfdb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cfdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfdb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129cfdbb:;
  /* 129cfdbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cfdbe pop esi */
  ESI = (pop32());
  /* 129cfdbf mov esp, ebp */
  ESP = (EBP);
  /* 129cfdc1 pop ebp */
  EBP = (pop32());
  /* 129cfdc2 ret  */
  ESPCHK(0x129cfca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x129cfdd0 (878 bytes, 273 insns) */
void f_129cfdd0(void) {
  FTRACE(0x129cfdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cfdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cfdd1 mov ebp, esp */
  EBP = (ESP);
  /* 129cfdd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cfdd6 push esi */
  push32((uint32_t)(ESI));
  /* 129cfdd7 mov eax, dword ptr [0x129edc98] */
  EAX = (r32((uint32_t)(0x129edc98)));
  /* 129cfddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cfddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cfde6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfded jmp 0x129cfdf8 */
  goto L_129cfdf8;
L_129cfdef:;
  /* 129cfdef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfdf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfdf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129cfdf8:;
  /* 129cfdf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfdfc jae 0x129cfe31 */
  if (!C.cf) goto L_129cfe31;
  /* 129cfdfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfe01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cfe07 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfe08 call 0x129c5c50 */
  push32(0x129cfe0du); f_129c5c50();
  /* 129cfe0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe10 mov esi, eax */
  ESI = (EAX);
  /* 129cfe12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfe15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 129cfe1c push ecx */
  push32((uint32_t)(ECX));
  /* 129cfe1d call 0x129c5c50 */
  push32(0x129cfe22u); f_129c5c50();
  /* 129cfe22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 129cfe2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cfe2f jmp 0x129cfdef */
  goto L_129cfdef;
L_129cfe31:;
  /* 129cfe31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cfe38 jmp 0x129cfe43 */
  goto L_129cfe43;
L_129cfe3a:;
  /* 129cfe3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfe3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_129cfe43:;
  /* 129cfe43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cfe47 jae 0x129cfe7d */
  if (!C.cf) goto L_129cfe7d;
  /* 129cfe49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfe4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 129cfe53 push eax */
  push32((uint32_t)(EAX));
  /* 129cfe54 call 0x129c5c50 */
  push32(0x129cfe59u); f_129c5c50();
  /* 129cfe59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe5c mov esi, eax */
  ESI = (EAX);
  /* 129cfe5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfe61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129cfe68 push eax */
  push32((uint32_t)(EAX));
  /* 129cfe69 call 0x129c5c50 */
  push32(0x129cfe6eu); f_129c5c50();
  /* 129cfe6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 129cfe78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cfe7b jmp 0x129cfe3a */
  goto L_129cfe3a;
L_129cfe7d:;
  /* 129cfe7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 129cfe86 push eax */
  push32((uint32_t)(EAX));
  /* 129cfe87 call 0x129c5c50 */
  push32(0x129cfe8cu); f_129c5c50();
  /* 129cfe8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfe8f mov esi, eax */
  ESI = (EAX);
  /* 129cfe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfe94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 129cfe9a push edx */
  push32((uint32_t)(EDX));
  /* 129cfe9b call 0x129c5c50 */
  push32(0x129cfea0u); f_129c5c50();
  /* 129cfea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 129cfeaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cfead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfeb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 129cfeb6 push edx */
  push32((uint32_t)(EDX));
  /* 129cfeb7 call 0x129c5c50 */
  push32(0x129cfebcu); f_129c5c50();
  /* 129cfebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cfec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129cfec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cfec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 129cfed2 push ecx */
  push32((uint32_t)(ECX));
  /* 129cfed3 call 0x129c5c50 */
  push32(0x129cfed8u); f_129c5c50();
  /* 129cfed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfedb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cfede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 129cfee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cfee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 129cfeee push edx */
  push32((uint32_t)(EDX));
  /* 129cfeef call 0x129c5c50 */
  push32(0x129cfef4u); f_129c5c50();
  /* 129cfef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cfef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cfefa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129cfefe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cff01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cff04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff09 push eax */
  push32((uint32_t)(EAX));
  /* 129cff0a call 0x129c2e00 */
  push32(0x129cff0fu); f_129c2e00();
  /* 129cff0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cff15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cff19 je 0x129d0136 */
  if (C.zf) goto L_129d0136;
  /* 129cff1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cff22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129cff25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cff28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129cff31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 129cff36 mov eax, dword ptr [0x129edc98] */
  EAX = (r32((uint32_t)(0x129edc98)));
  /* 129cff3b push eax */
  push32((uint32_t)(EAX));
  /* 129cff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cff3f push ecx */
  push32((uint32_t)(ECX));
  /* 129cff40 call 0x129c9700 */
  push32(0x129cff45u); f_129c9700();
  /* 129cff45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cff4f jmp 0x129cff5a */
  goto L_129cff5a;
L_129cff51:;
  /* 129cff51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cff54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129cff5a:;
  /* 129cff5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cff5e jae 0x129cffce */
  if (!C.cf) goto L_129cffce;
  /* 129cff60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cff63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129cff66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cff69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 129cff6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cff6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cff72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cff75 push edx */
  push32((uint32_t)(EDX));
  /* 129cff76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cff79 push eax */
  push32((uint32_t)(EAX));
  /* 129cff7a call 0x129c5dd0 */
  push32(0x129cff7fu); f_129c5dd0();
  /* 129cff7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff82 push eax */
  push32((uint32_t)(EAX));
  /* 129cff83 call 0x129c5c50 */
  push32(0x129cff88u); f_129c5c50();
  /* 129cff88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cff8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cff8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129cff92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129cff95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cff98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129cff9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cff9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 129cffa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cffa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cffa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 129cffac push edx */
  push32((uint32_t)(EDX));
  /* 129cffad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cffb0 push eax */
  push32((uint32_t)(EAX));
  /* 129cffb1 call 0x129c5dd0 */
  push32(0x129cffb6u); f_129c5dd0();
  /* 129cffb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cffb9 push eax */
  push32((uint32_t)(EAX));
  /* 129cffba call 0x129c5c50 */
  push32(0x129cffbfu); f_129c5c50();
  /* 129cffbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cffc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cffc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129cffc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129cffcc jmp 0x129cff51 */
  goto L_129cff51;
L_129cffce:;
  /* 129cffce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cffd5 jmp 0x129cffe0 */
  goto L_129cffe0;
L_129cffd7:;
  /* 129cffd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cffda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cffdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_129cffe0:;
  /* 129cffe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cffe4 jae 0x129d0056 */
  if (!C.cf) goto L_129d0056;
  /* 129cffe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cffe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129cffec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129cffef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 129cfff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cfff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cfff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 129cfffd push eax */
  push32((uint32_t)(EAX));
  /* 129cfffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0001 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0002 call 0x129c5dd0 */
  push32(0x129d0007u); f_129c5dd0();
  /* 129d0007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d000a push eax */
  push32((uint32_t)(EAX));
  /* 129d000b call 0x129c5c50 */
  push32(0x129d0010u); f_129c5c50();
  /* 129d0010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 129d001a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d001d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d0023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 129d002a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d002d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129d0034 push eax */
  push32((uint32_t)(EAX));
  /* 129d0035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0038 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0039 call 0x129c5dd0 */
  push32(0x129d003eu); f_129c5dd0();
  /* 129d003e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0041 push eax */
  push32((uint32_t)(EAX));
  /* 129d0042 call 0x129c5c50 */
  push32(0x129d0047u); f_129c5c50();
  /* 129d0047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d004a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d004d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 129d0051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d0054 jmp 0x129cffd7 */
  goto L_129cffd7;
L_129d0056:;
  /* 129d0056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d0059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d005c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 129d0062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 129d006b push ecx */
  push32((uint32_t)(ECX));
  /* 129d006c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d006f push edx */
  push32((uint32_t)(EDX));
  /* 129d0070 call 0x129c5dd0 */
  push32(0x129d0075u); f_129c5dd0();
  /* 129d0075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0078 push eax */
  push32((uint32_t)(EAX));
  /* 129d0079 call 0x129c5c50 */
  push32(0x129d007eu); f_129c5c50();
  /* 129d007e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129d0088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129d008b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d008e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 129d0097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d009a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 129d00a0 push eax */
  push32((uint32_t)(EAX));
  /* 129d00a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00a4 push ecx */
  push32((uint32_t)(ECX));
  /* 129d00a5 call 0x129c5dd0 */
  push32(0x129d00aau); f_129c5dd0();
  /* 129d00aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d00ad push eax */
  push32((uint32_t)(EAX));
  /* 129d00ae call 0x129c5c50 */
  push32(0x129d00b3u); f_129c5c50();
  /* 129d00b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d00b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 129d00bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d00c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d00c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 129d00cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d00cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 129d00d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129d00d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00d9 push edx */
  push32((uint32_t)(EDX));
  /* 129d00da call 0x129c5dd0 */
  push32(0x129d00dfu); f_129c5dd0();
  /* 129d00df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d00e2 push eax */
  push32((uint32_t)(EAX));
  /* 129d00e3 call 0x129c5c50 */
  push32(0x129d00e8u); f_129c5c50();
  /* 129d00e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d00eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129d00f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129d00f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d00f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d00fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 129d0101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 129d010a push eax */
  push32((uint32_t)(EAX));
  /* 129d010b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d010e push ecx */
  push32((uint32_t)(ECX));
  /* 129d010f call 0x129c5dd0 */
  push32(0x129d0114u); f_129c5dd0();
  /* 129d0114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0117 push eax */
  push32((uint32_t)(EAX));
  /* 129d0118 call 0x129c5c50 */
  push32(0x129d011du); f_129c5c50();
  /* 129d011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 129d0127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d012a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d012d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_129d0136:;
  /* 129d0136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0139 pop esi */
  ESI = (pop32());
  /* 129d013a mov esp, ebp */
  ESP = (EBP);
  /* 129d013c pop ebp */
  EBP = (pop32());
  /* 129d013d ret  */
  ESPCHK(0x129cfdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x129d0140 (31 bytes, 15 insns) */
void f_129d0140(void) {
  FTRACE(0x129d0140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0140 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0141 mov ebp, esp */
  EBP = (ESP);
  /* 129d0143 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d0145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0148 push eax */
  push32((uint32_t)(EAX));
  /* 129d0149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d014c push ecx */
  push32((uint32_t)(ECX));
  /* 129d014d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0150 push edx */
  push32((uint32_t)(EDX));
  /* 129d0151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0154 push eax */
  push32((uint32_t)(EAX));
  /* 129d0155 call 0x129d0160 */
  push32(0x129d015au); f_129d0160();
  /* 129d015a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d015d pop ebp */
  EBP = (pop32());
  /* 129d015e ret  */
  ESPCHK(0x129d0140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x129d0160 (393 bytes, 123 insns) */
void f_129d0160(void) {
  FTRACE(0x129d0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0160 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0161 mov ebp, esp */
  EBP = (ESP);
  /* 129d0163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0166 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d016a jne 0x129d0176 */
  if (!C.zf) goto L_129d0176;
  /* 129d016c mov eax, dword ptr [0x129edc98] */
  EAX = (r32((uint32_t)(0x129edc98)));
  /* 129d0171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129d0174 jmp 0x129d017c */
  goto L_129d017c;
L_129d0176:;
  /* 129d0176 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129d017c:;
  /* 129d017c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d017f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d0182 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d0188 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d018d call dword ptr [0x129f02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a4))), 0x129d0193u);
  /* 129d0193 cmp dword ptr [0x129ee80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d019a je 0x129d01ba */
  if (C.zf) goto L_129d01ba;
  /* 129d019c push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d01a1 call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129d01a7u);
  /* 129d01a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d01a9 call 0x129c6820 */
  push32(0x129d01aeu); f_129c6820();
  /* 129d01ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d01b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 129d01b8 jmp 0x129d01c1 */
  goto L_129d01c1;
L_129d01ba:;
  /* 129d01ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129d01c1:;
  /* 129d01c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d01c5 jbe 0x129d02b2 */
  if ((C.cf||C.zf)) goto L_129d02b2;
  /* 129d01cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d01ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d01d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 129d01d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d01d7 je 0x129d01e1 */
  if (C.zf) goto L_129d01e1;
  /* 129d01d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d01dd je 0x129d01e6 */
  if (C.zf) goto L_129d01e6;
  /* 129d01df jmp 0x129d0240 */
  goto L_129d0240;
L_129d01e1:;
  /* 129d01e1 jmp 0x129d02b2 */
  goto L_129d02b2;
L_129d01e6:;
  /* 129d01e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d01e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d01ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 129d01ef mov dword ptr [0x129ee7f8], 0 */
  w32((uint32_t)(0x129ee7f8), (0x0u));
  /* 129d01f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d01fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d01ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0202 jne 0x129d0217 */
  if (!C.zf) goto L_129d0217;
  /* 129d0204 mov dword ptr [0x129ee7f8], 1 */
  w32((uint32_t)(0x129ee7f8), (0x1u));
  /* 129d020e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0214 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_129d0217:;
  /* 129d0217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d021a push ecx */
  push32((uint32_t)(ECX));
  /* 129d021b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 129d021e push edx */
  push32((uint32_t)(EDX));
  /* 129d021f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 129d0222 push eax */
  push32((uint32_t)(EAX));
  /* 129d0223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0226 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d022a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d022c push eax */
  push32((uint32_t)(EAX));
  /* 129d022d call 0x129d02f0 */
  push32(0x129d0232u); f_129d02f0();
  /* 129d0232 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d023b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129d023e jmp 0x129d02ad */
  goto L_129d02ad;
L_129d0240:;
  /* 129d0240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d0245 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0247 mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d024d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d024f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d0253 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 129d0259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d025b je 0x129d0288 */
  if (C.zf) goto L_129d0288;
  /* 129d025d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0261 jbe 0x129d0288 */
  if ((C.cf||C.zf)) goto L_129d0288;
  /* 129d0263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0269 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d026b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129d026d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0273 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d0276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d027c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129d027f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0282 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0285 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129d0288:;
  /* 129d0288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d028b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d028e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d0290 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129d0292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d029b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d029e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d02a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129d02a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d02a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d02aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129d02ad:;
  /* 129d02ad jmp 0x129d01c1 */
  goto L_129d01c1;
L_129d02b2:;
  /* 129d02b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d02b6 je 0x129d02c4 */
  if (C.zf) goto L_129d02c4;
  /* 129d02b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d02ba call 0x129c68c0 */
  push32(0x129d02bfu); f_129c68c0();
  /* 129d02bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d02c2 jmp 0x129d02cf */
  goto L_129d02cf;
L_129d02c4:;
  /* 129d02c4 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d02c9 call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129d02cfu);
L_129d02cf:;
  /* 129d02cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d02d3 jbe 0x129d02e3 */
  if ((C.cf||C.zf)) goto L_129d02e3;
  /* 129d02d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d02d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129d02db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d02de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d02e1 jmp 0x129d02e5 */
  goto L_129d02e5;
L_129d02e3:;
  /* 129d02e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d02e5:;
  /* 129d02e5 mov esp, ebp */
  ESP = (EBP);
  /* 129d02e7 pop ebp */
  EBP = (pop32());
  /* 129d02e8 ret  */
  ESPCHK(0x129d0160u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x129d02f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_129d02f0(void) {
  FTRACE(0x129d02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d02f1 mov ebp, esp */
  EBP = (ESP);
  /* 129d02f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d02f6 push esi */
  push32((uint32_t)(ESI));
  /* 129d02f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 129d02fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d02fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d0307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d030b ja 0x129d0858 */
  if ((!C.cf&&!C.zf)) goto L_129d0858;
  /* 129d0311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d0316 mov dl, byte ptr [eax + 0x129d08b9] */
  DL = (r8((uint32_t)(EAX + 0x129d08b9)));
  /* 129d031c jmp dword ptr [edx*4 + 0x129d085d] */
  switch (EDX) {
    case 0: goto L_129d0836;
    case 1: goto L_129d0345;
    case 2: goto L_129d038b;
    case 3: goto L_129d04d8;
    case 4: goto L_129d0500;
    case 5: goto L_129d059f;
    case 6: goto L_129d060b;
    case 7: goto L_129d0634;
    case 8: goto L_129d0675;
    case 9: goto L_129d0757;
    case 10: goto L_129d07be;
    case 11: goto L_129d080b;
    case 12: goto L_129d0323;
    case 13: goto L_129d0368;
    case 14: goto L_129d03ae;
    case 15: goto L_129d04ae;
    case 16: goto L_129d0545;
    case 17: goto L_129d0572;
    case 18: goto L_129d05c7;
    case 19: goto L_129d064b;
    case 20: goto L_129d06f9;
    case 21: goto L_129d0788;
    case 22: goto L_129d0858;
    default: x86_unimpl("switch@0x129d031c out of table"); return;
  }
L_129d0323:;
  /* 129d0323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0326 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d032a push edx */
  push32((uint32_t)(EDX));
  /* 129d032b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d032e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 129d0331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 129d0337 push eax */
  push32((uint32_t)(EAX));
  /* 129d0338 call 0x129d0910 */
  push32(0x129d033du); f_129d0910();
  /* 129d033d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0340 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0345:;
  /* 129d0345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0348 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d034c push edx */
  push32((uint32_t)(EDX));
  /* 129d034d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 129d0353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 129d035a push eax */
  push32((uint32_t)(EAX));
  /* 129d035b call 0x129d0910 */
  push32(0x129d0360u); f_129d0910();
  /* 129d0360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0363 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0368:;
  /* 129d0368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d036b push ecx */
  push32((uint32_t)(ECX));
  /* 129d036c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d036f push edx */
  push32((uint32_t)(EDX));
  /* 129d0370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129d0376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 129d037d push eax */
  push32((uint32_t)(EAX));
  /* 129d037e call 0x129d0910 */
  push32(0x129d0383u); f_129d0910();
  /* 129d0383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0386 jmp 0x129d0858 */
  goto L_129d0858;
L_129d038b:;
  /* 129d038b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d038e push ecx */
  push32((uint32_t)(ECX));
  /* 129d038f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0392 push edx */
  push32((uint32_t)(EDX));
  /* 129d0393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129d0399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d039c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 129d03a0 push eax */
  push32((uint32_t)(EAX));
  /* 129d03a1 call 0x129d0910 */
  push32(0x129d03a6u); f_129d0910();
  /* 129d03a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d03a9 jmp 0x129d0858 */
  goto L_129d0858;
L_129d03ae:;
  /* 129d03ae cmp dword ptr [0x129ee7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d03b5 je 0x129d0436 */
  if (C.zf) goto L_129d0436;
  /* 129d03b7 mov dword ptr [0x129ee7f8], 0 */
  w32((uint32_t)(0x129ee7f8), (0x0u));
  /* 129d03c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d03c4 push ecx */
  push32((uint32_t)(ECX));
  /* 129d03c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d03c8 push edx */
  push32((uint32_t)(EDX));
  /* 129d03c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d03cc push eax */
  push32((uint32_t)(EAX));
  /* 129d03cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d03d0 push ecx */
  push32((uint32_t)(ECX));
  /* 129d03d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d03d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 129d03da push eax */
  push32((uint32_t)(EAX));
  /* 129d03db call 0x129d0ac0 */
  push32(0x129d03e0u); f_129d0ac0();
  /* 129d03e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d03e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d03e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d03e9 jne 0x129d03f0 */
  if (!C.zf) goto L_129d03f0;
  /* 129d03eb jmp 0x129d0858 */
  goto L_129d0858;
L_129d03f0:;
  /* 129d03f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d03f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d03f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 129d03f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d03fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d03fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d0405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d040a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d040d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d0412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0415 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0419 push edx */
  push32((uint32_t)(EDX));
  /* 129d041a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d041d push eax */
  push32((uint32_t)(EAX));
  /* 129d041e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0421 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 129d042b push eax */
  push32((uint32_t)(EAX));
  /* 129d042c call 0x129d0ac0 */
  push32(0x129d0431u); f_129d0ac0();
  /* 129d0431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0434 jmp 0x129d04a9 */
  goto L_129d04a9;
L_129d0436:;
  /* 129d0436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0439 push ecx */
  push32((uint32_t)(ECX));
  /* 129d043a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d043d push edx */
  push32((uint32_t)(EDX));
  /* 129d043e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0441 push eax */
  push32((uint32_t)(EAX));
  /* 129d0442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0445 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 129d044f push eax */
  push32((uint32_t)(EAX));
  /* 129d0450 call 0x129d0ac0 */
  push32(0x129d0455u); f_129d0ac0();
  /* 129d0455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d045b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d045e jne 0x129d0465 */
  if (!C.zf) goto L_129d0465;
  /* 129d0460 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0465:;
  /* 129d0465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d046a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 129d046d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d047a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d047d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d047f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d0487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d048a push ecx */
  push32((uint32_t)(ECX));
  /* 129d048b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d048e push edx */
  push32((uint32_t)(EDX));
  /* 129d048f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0492 push eax */
  push32((uint32_t)(EAX));
  /* 129d0493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0496 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d049a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 129d04a0 push eax */
  push32((uint32_t)(EAX));
  /* 129d04a1 call 0x129d0ac0 */
  push32(0x129d04a6u); f_129d0ac0();
  /* 129d04a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d04a9:;
  /* 129d04a9 jmp 0x129d0858 */
  goto L_129d0858;
L_129d04ae:;
  /* 129d04ae mov ecx, dword ptr [0x129ee7f8] */
  ECX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d04b4 mov dword ptr [0x129ee808], ecx */
  w32((uint32_t)(0x129ee808), (ECX));
  /* 129d04ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d04bd push edx */
  push32((uint32_t)(EDX));
  /* 129d04be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d04c1 push eax */
  push32((uint32_t)(EAX));
  /* 129d04c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d04c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d04c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129d04ca push edx */
  push32((uint32_t)(EDX));
  /* 129d04cb call 0x129d0960 */
  push32(0x129d04d0u); f_129d0960();
  /* 129d04d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d04d3 jmp 0x129d0858 */
  goto L_129d0858;
L_129d04d8:;
  /* 129d04d8 mov eax, dword ptr [0x129ee7f8] */
  EAX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d04dd mov dword ptr [0x129ee808], eax */
  w32((uint32_t)(0x129ee808), (EAX));
  /* 129d04e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d04e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129d04e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d04e9 push edx */
  push32((uint32_t)(EDX));
  /* 129d04ea push 2 */
  push32((uint32_t)(0x2u));
  /* 129d04ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d04ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129d04f2 push ecx */
  push32((uint32_t)(ECX));
  /* 129d04f3 call 0x129d0960 */
  push32(0x129d04f8u); f_129d0960();
  /* 129d04f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d04fb jmp 0x129d0858 */
  goto L_129d0858;
L_129d0500:;
  /* 129d0500 mov edx, dword ptr [0x129ee7f8] */
  EDX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d0506 mov dword ptr [0x129ee808], edx */
  w32((uint32_t)(0x129ee808), (EDX));
  /* 129d050c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d050f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 129d0512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d0513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 129d0518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d051a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d051d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0521 jne 0x129d052a */
  if (!C.zf) goto L_129d052a;
  /* 129d0523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_129d052a:;
  /* 129d052a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d052d push edx */
  push32((uint32_t)(EDX));
  /* 129d052e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0531 push eax */
  push32((uint32_t)(EAX));
  /* 129d0532 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d0534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0537 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0538 call 0x129d0960 */
  push32(0x129d053du); f_129d0960();
  /* 129d053d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0540 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0545:;
  /* 129d0545 mov edx, dword ptr [0x129ee7f8] */
  EDX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d054b mov dword ptr [0x129ee808], edx */
  w32((uint32_t)(0x129ee808), (EDX));
  /* 129d0551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0554 push eax */
  push32((uint32_t)(EAX));
  /* 129d0555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0558 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0559 push 3 */
  push32((uint32_t)(0x3u));
  /* 129d055b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d055e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129d0561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0564 push eax */
  push32((uint32_t)(EAX));
  /* 129d0565 call 0x129d0960 */
  push32(0x129d056au); f_129d0960();
  /* 129d056a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d056d jmp 0x129d0858 */
  goto L_129d0858;
L_129d0572:;
  /* 129d0572 mov ecx, dword ptr [0x129ee7f8] */
  ECX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d0578 mov dword ptr [0x129ee808], ecx */
  w32((uint32_t)(0x129ee808), (ECX));
  /* 129d057e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0581 push edx */
  push32((uint32_t)(EDX));
  /* 129d0582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0585 push eax */
  push32((uint32_t)(EAX));
  /* 129d0586 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d0588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d058b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129d058e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0591 push edx */
  push32((uint32_t)(EDX));
  /* 129d0592 call 0x129d0960 */
  push32(0x129d0597u); f_129d0960();
  /* 129d0597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d059a jmp 0x129d0858 */
  goto L_129d0858;
L_129d059f:;
  /* 129d059f mov eax, dword ptr [0x129ee7f8] */
  EAX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d05a4 mov dword ptr [0x129ee808], eax */
  w32((uint32_t)(0x129ee808), (EAX));
  /* 129d05a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d05ac push ecx */
  push32((uint32_t)(ECX));
  /* 129d05ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d05b0 push edx */
  push32((uint32_t)(EDX));
  /* 129d05b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d05b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d05b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129d05b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129d05ba call 0x129d0960 */
  push32(0x129d05bfu); f_129d0960();
  /* 129d05bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d05c2 jmp 0x129d0858 */
  goto L_129d0858;
L_129d05c7:;
  /* 129d05c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d05ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d05ce jg 0x129d05ec */
  if ((!C.zf&&C.sf==C.of)) goto L_129d05ec;
  /* 129d05d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d05d3 push eax */
  push32((uint32_t)(EAX));
  /* 129d05d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d05d7 push ecx */
  push32((uint32_t)(ECX));
  /* 129d05d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d05db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 129d05e1 push eax */
  push32((uint32_t)(EAX));
  /* 129d05e2 call 0x129d0910 */
  push32(0x129d05e7u); f_129d0910();
  /* 129d05e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d05ea jmp 0x129d0606 */
  goto L_129d0606;
L_129d05ec:;
  /* 129d05ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d05ef push ecx */
  push32((uint32_t)(ECX));
  /* 129d05f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d05f3 push edx */
  push32((uint32_t)(EDX));
  /* 129d05f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d05f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 129d05fd push ecx */
  push32((uint32_t)(ECX));
  /* 129d05fe call 0x129d0910 */
  push32(0x129d0603u); f_129d0910();
  /* 129d0603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d0606:;
  /* 129d0606 jmp 0x129d0858 */
  goto L_129d0858;
L_129d060b:;
  /* 129d060b mov edx, dword ptr [0x129ee7f8] */
  EDX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d0611 mov dword ptr [0x129ee808], edx */
  w32((uint32_t)(0x129ee808), (EDX));
  /* 129d0617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d061a push eax */
  push32((uint32_t)(EAX));
  /* 129d061b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d061e push ecx */
  push32((uint32_t)(ECX));
  /* 129d061f push 2 */
  push32((uint32_t)(0x2u));
  /* 129d0621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0626 push eax */
  push32((uint32_t)(EAX));
  /* 129d0627 call 0x129d0960 */
  push32(0x129d062cu); f_129d0960();
  /* 129d062c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d062f jmp 0x129d0858 */
  goto L_129d0858;
L_129d0634:;
  /* 129d0634 mov ecx, dword ptr [0x129ee7f8] */
  ECX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d063a mov dword ptr [0x129ee808], ecx */
  w32((uint32_t)(0x129ee808), (ECX));
  /* 129d0640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 129d0646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d0649 jmp 0x129d069d */
  goto L_129d069d;
L_129d064b:;
  /* 129d064b mov ecx, dword ptr [0x129ee7f8] */
  ECX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d0651 mov dword ptr [0x129ee808], ecx */
  w32((uint32_t)(0x129ee808), (ECX));
  /* 129d0657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d065a push edx */
  push32((uint32_t)(EDX));
  /* 129d065b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d065e push eax */
  push32((uint32_t)(EAX));
  /* 129d065f push 1 */
  push32((uint32_t)(0x1u));
  /* 129d0661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129d0667 push edx */
  push32((uint32_t)(EDX));
  /* 129d0668 call 0x129d0960 */
  push32(0x129d066du); f_129d0960();
  /* 129d066d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0670 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0675:;
  /* 129d0675 mov eax, dword ptr [0x129ee7f8] */
  EAX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d067a mov dword ptr [0x129ee808], eax */
  w32((uint32_t)(0x129ee808), (EAX));
  /* 129d067f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0686 jne 0x129d0691 */
  if (!C.zf) goto L_129d0691;
  /* 129d0688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 129d068f jmp 0x129d069d */
  goto L_129d069d;
L_129d0691:;
  /* 129d0691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 129d0697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d069a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129d069d:;
  /* 129d069d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d06a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129d06a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d06a6 jge 0x129d06b1 */
  if ((C.sf==C.of)) goto L_129d06b1;
  /* 129d06a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d06af jmp 0x129d06de */
  goto L_129d06de;
L_129d06b1:;
  /* 129d06b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d06b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129d06b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d06b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 129d06bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d06bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d06c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d06c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129d06c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d06c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 129d06ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d06d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d06d3 jl 0x129d06de */
  if ((C.sf!=C.of)) goto L_129d06de;
  /* 129d06d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d06d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d06db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129d06de:;
  /* 129d06de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d06e1 push eax */
  push32((uint32_t)(EAX));
  /* 129d06e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d06e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129d06e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d06e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d06eb push edx */
  push32((uint32_t)(EDX));
  /* 129d06ec call 0x129d0960 */
  push32(0x129d06f1u); f_129d0960();
  /* 129d06f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d06f4 jmp 0x129d0858 */
  goto L_129d0858;
L_129d06f9:;
  /* 129d06f9 cmp dword ptr [0x129ee7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0700 je 0x129d0730 */
  if (C.zf) goto L_129d0730;
  /* 129d0702 mov dword ptr [0x129ee7f8], 0 */
  w32((uint32_t)(0x129ee7f8), (0x0u));
  /* 129d070c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d070f push eax */
  push32((uint32_t)(EAX));
  /* 129d0710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0713 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0717 push edx */
  push32((uint32_t)(EDX));
  /* 129d0718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d071b push eax */
  push32((uint32_t)(EAX));
  /* 129d071c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d071f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 129d0725 push edx */
  push32((uint32_t)(EDX));
  /* 129d0726 call 0x129d0ac0 */
  push32(0x129d072bu); f_129d0ac0();
  /* 129d072b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d072e jmp 0x129d0752 */
  goto L_129d0752;
L_129d0730:;
  /* 129d0730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0733 push eax */
  push32((uint32_t)(EAX));
  /* 129d0734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0737 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d073b push edx */
  push32((uint32_t)(EDX));
  /* 129d073c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d073f push eax */
  push32((uint32_t)(EAX));
  /* 129d0740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 129d0749 push edx */
  push32((uint32_t)(EDX));
  /* 129d074a call 0x129d0ac0 */
  push32(0x129d074fu); f_129d0ac0();
  /* 129d074f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d0752:;
  /* 129d0752 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0757:;
  /* 129d0757 mov dword ptr [0x129ee7f8], 0 */
  w32((uint32_t)(0x129ee7f8), (0x0u));
  /* 129d0761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0764 push eax */
  push32((uint32_t)(EAX));
  /* 129d0765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0768 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d076c push edx */
  push32((uint32_t)(EDX));
  /* 129d076d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0770 push eax */
  push32((uint32_t)(EAX));
  /* 129d0771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 129d077a push edx */
  push32((uint32_t)(EDX));
  /* 129d077b call 0x129d0ac0 */
  push32(0x129d0780u); f_129d0ac0();
  /* 129d0780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0783 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0788:;
  /* 129d0788 mov eax, dword ptr [0x129ee7f8] */
  EAX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d078d mov dword ptr [0x129ee808], eax */
  w32((uint32_t)(0x129ee808), (EAX));
  /* 129d0792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129d0798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d0799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 129d079e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d07a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d07a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d07a6 push edx */
  push32((uint32_t)(EDX));
  /* 129d07a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d07aa push eax */
  push32((uint32_t)(EAX));
  /* 129d07ab push 2 */
  push32((uint32_t)(0x2u));
  /* 129d07ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d07b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129d07b1 call 0x129d0960 */
  push32(0x129d07b6u); f_129d0960();
  /* 129d07b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d07b9 jmp 0x129d0858 */
  goto L_129d0858;
L_129d07be:;
  /* 129d07be mov edx, dword ptr [0x129ee7f8] */
  EDX = (r32((uint32_t)(0x129ee7f8)));
  /* 129d07c4 mov dword ptr [0x129ee808], edx */
  w32((uint32_t)(0x129ee808), (EDX));
  /* 129d07ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d07cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 129d07d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d07d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 129d07d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d07d8 mov ecx, eax */
  ECX = (EAX);
  /* 129d07da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d07dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d07e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d07e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129d07e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d07e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 129d07ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d07ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d07f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d07f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d07f6 push eax */
  push32((uint32_t)(EAX));
  /* 129d07f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d07fa push ecx */
  push32((uint32_t)(ECX));
  /* 129d07fb push 4 */
  push32((uint32_t)(0x4u));
  /* 129d07fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0800 push edx */
  push32((uint32_t)(EDX));
  /* 129d0801 call 0x129d0960 */
  push32(0x129d0806u); f_129d0960();
  /* 129d0806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0809 jmp 0x129d0858 */
  goto L_129d0858;
L_129d080b:;
  /* 129d080b call 0x129d1920 */
  push32(0x129d0810u); f_129d1920();
  /* 129d0810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0813 push eax */
  push32((uint32_t)(EAX));
  /* 129d0814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0817 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d081b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d081d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 129d0824 mov ecx, dword ptr [eax*4 + 0x129ede1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ede1c)));
  /* 129d082b push ecx */
  push32((uint32_t)(ECX));
  /* 129d082c call 0x129d0910 */
  push32(0x129d0831u); f_129d0910();
  /* 129d0831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0834 jmp 0x129d0858 */
  goto L_129d0858;
L_129d0836:;
  /* 129d0836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d083b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 129d083e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d084b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d084e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129d0858:;
  /* 129d0858 pop esi */
  ESI = (pop32());
  /* 129d0859 mov esp, ebp */
  ESP = (EBP);
  /* 129d085b pop ebp */
  EBP = (pop32());
  /* 129d085c ret  */
  ESPCHK(0x129d02f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x129d0910 (72 bytes, 30 insns) */
void f_129d0910(void) {
  FTRACE(0x129d0910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0910 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0911 mov ebp, esp */
  EBP = (ESP);
L_129d0913:;
  /* 129d0913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0919 je 0x129d0956 */
  if (C.zf) goto L_129d0956;
  /* 129d091b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d091e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d0921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d0923 je 0x129d0956 */
  if (C.zf) goto L_129d0956;
  /* 129d0925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d092a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d092d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d092f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129d0931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d093c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d093e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129d0947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d094a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d094c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d094f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d0954 jmp 0x129d0913 */
  goto L_129d0913;
L_129d0956:;
  /* 129d0956 pop ebp */
  EBP = (pop32());
  /* 129d0957 ret  */
  ESPCHK(0x129d0910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x129d0960 (173 bytes, 64 insns) */
void f_129d0960(void) {
  FTRACE(0x129d0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0960 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0961 mov ebp, esp */
  EBP = (ESP);
  /* 129d0963 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d096b cmp dword ptr [0x129ee808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0972 je 0x129d098a */
  if (C.zf) goto L_129d098a;
  /* 129d0974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0977 push eax */
  push32((uint32_t)(EAX));
  /* 129d0978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d097b push ecx */
  push32((uint32_t)(ECX));
  /* 129d097c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d097f push edx */
  push32((uint32_t)(EDX));
  /* 129d0980 call 0x129d0a10 */
  push32(0x129d0985u); f_129d0a10();
  /* 129d0985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0988 jmp 0x129d0a09 */
  goto L_129d0a09;
L_129d098a:;
  /* 129d098a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d098d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0992 jae 0x129d0a00 */
  if (!C.cf) goto L_129d0a00;
  /* 129d0994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d099a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129d099d jmp 0x129d09a8 */
  goto L_129d09a8;
L_129d099f:;
  /* 129d099f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d09a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d09a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_129d09a8:;
  /* 129d09a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d09ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d09ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d09b0 je 0x129d09e4 */
  if (C.zf) goto L_129d09e4;
  /* 129d09b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d09b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d09b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 129d09bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d09bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d09c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d09c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d09c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d09c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 129d09cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d09ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d09cf mov ecx, 0xa */
  ECX = (0xau);
  /* 129d09d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d09d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d09d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d09dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d09df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d09e2 jmp 0x129d099f */
  goto L_129d099f;
L_129d09e4:;
  /* 129d09e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d09e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d09e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d09ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d09ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129d09f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d09f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d09f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d09f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d09fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129d09fe jmp 0x129d0a09 */
  goto L_129d0a09;
L_129d0a00:;
  /* 129d0a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_129d0a09:;
  /* 129d0a09 mov esp, ebp */
  ESP = (EBP);
  /* 129d0a0b pop ebp */
  EBP = (pop32());
  /* 129d0a0c ret  */
  ESPCHK(0x129d0960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x129d0a10 (172 bytes, 65 insns) */
void f_129d0a10(void) {
  FTRACE(0x129d0a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0a10 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0a11 mov ebp, esp */
  EBP = (ESP);
  /* 129d0a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d0a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0a24 jbe 0x129d0a6b */
  if ((C.cf||C.zf)) goto L_129d0a6b;
L_129d0a26:;
  /* 129d0a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d0a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 129d0a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d0a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129d0a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d0a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d0a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d0a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 129d0a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d0a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d0a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0a61 jle 0x129d0a6b */
  if ((C.zf||C.sf!=C.of)) goto L_129d0a6b;
  /* 129d0a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0a69 ja 0x129d0a26 */
  if ((!C.cf&&!C.zf)) goto L_129d0a26;
L_129d0a6b:;
  /* 129d0a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129d0a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129d0a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129d0a84:;
  /* 129d0a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 129d0a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d0a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129d0a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d0a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d0aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 129d0aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 129d0aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d0aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129d0ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d0ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0ab6 jb 0x129d0a84 */
  if (C.cf) goto L_129d0a84;
  /* 129d0ab8 mov esp, ebp */
  ESP = (EBP);
  /* 129d0aba pop ebp */
  EBP = (pop32());
  /* 129d0abb ret  */
  ESPCHK(0x129d0a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x129d0ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_129d0ac0(void) {
  FTRACE(0x129d0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 129d0ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_129d0ac6:;
  /* 129d0ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d0acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d0ace je 0x129d0f3c */
  if (C.zf) goto L_129d0f3c;
  /* 129d0ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0ada je 0x129d0f3c */
  if (C.zf) goto L_129d0f3c;
  /* 129d0ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 129d0ae4 mov dword ptr [0x129ee808], 0 */
  w32((uint32_t)(0x129ee808), (0x0u));
  /* 129d0aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129d0af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d0afb jmp 0x129d0b06 */
  goto L_129d0b06;
L_129d0afd:;
  /* 129d0afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_129d0b06:;
  /* 129d0b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d0b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d0b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d0b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0b1d jne 0x129d0b21 */
  if (!C.zf) goto L_129d0b21;
  /* 129d0b1f jmp 0x129d0afd */
  goto L_129d0afd;
L_129d0b21:;
  /* 129d0b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d0b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d0b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129d0b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129d0b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0b40 ja 0x129d0e90 */
  if ((!C.cf&&!C.zf)) goto L_129d0e90;
  /* 129d0b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d0b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d0b4b mov al, byte ptr [ecx + 0x129d0f6c] */
  AL = (r8((uint32_t)(ECX + 0x129d0f6c)));
  /* 129d0b51 jmp dword ptr [eax*4 + 0x129d0f40] */
  switch (EAX) {
    case 0: goto L_129d0daf;
    case 1: goto L_129d0c93;
    case 2: goto L_129d0c1e;
    case 3: goto L_129d0b58;
    case 4: goto L_129d0b96;
    case 5: goto L_129d0bf7;
    case 6: goto L_129d0c45;
    case 7: goto L_129d0c6c;
    case 8: goto L_129d0cda;
    case 9: goto L_129d0bd4;
    case 10: goto L_129d0e90;
    default: x86_unimpl("switch@0x129d0b51 out of table"); return;
  }
L_129d0b58:;
  /* 129d0b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129d0b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d0b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129d0b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0b6b ja 0x129d0b91 */
  if ((!C.cf&&!C.zf)) goto L_129d0b91;
  /* 129d0b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d0b70 jmp dword ptr [ecx*4 + 0x129d0fbf] */
  switch (ECX) {
    case 0: goto L_129d0b77;
    case 1: goto L_129d0b81;
    case 2: goto L_129d0b87;
    case 3: goto L_129d0b8d;
    case 4: goto L_129d0bb5;
    case 5: goto L_129d0bbf;
    case 6: goto L_129d0bc5;
    case 7: goto L_129d0bcb;
    default: x86_unimpl("switch@0x129d0b70 out of table"); return;
  }
L_129d0b77:;
  /* 129d0b77 mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0b81:;
  /* 129d0b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 129d0b85 jmp 0x129d0b91 */
  goto L_129d0b91;
L_129d0b87:;
  /* 129d0b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 129d0b8b jmp 0x129d0b91 */
  goto L_129d0b91;
L_129d0b8d:;
  /* 129d0b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_129d0b91:;
  /* 129d0b91 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0b96:;
  /* 129d0b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129d0b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d0b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129d0ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0ba9 ja 0x129d0bcf */
  if ((!C.cf&&!C.zf)) goto L_129d0bcf;
  /* 129d0bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d0bae jmp dword ptr [ecx*4 + 0x129d0fcf] */
  switch (ECX) {
    case 0: goto L_129d0bb5;
    case 1: goto L_129d0bbf;
    case 2: goto L_129d0bc5;
    case 3: goto L_129d0bcb;
    default: x86_unimpl("switch@0x129d0bae out of table"); return;
  }
L_129d0bb5:;
  /* 129d0bb5 mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0bbf:;
  /* 129d0bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 129d0bc3 jmp 0x129d0bcf */
  goto L_129d0bcf;
L_129d0bc5:;
  /* 129d0bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 129d0bc9 jmp 0x129d0bcf */
  goto L_129d0bcf;
L_129d0bcb:;
  /* 129d0bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_129d0bcf:;
  /* 129d0bcf jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0bd4:;
  /* 129d0bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129d0bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0bde je 0x129d0be8 */
  if (C.zf) goto L_129d0be8;
  /* 129d0be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0be4 je 0x129d0bee */
  if (C.zf) goto L_129d0bee;
  /* 129d0be6 jmp 0x129d0bf2 */
  goto L_129d0bf2;
L_129d0be8:;
  /* 129d0be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 129d0bec jmp 0x129d0bf2 */
  goto L_129d0bf2;
L_129d0bee:;
  /* 129d0bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_129d0bf2:;
  /* 129d0bf2 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0bf7:;
  /* 129d0bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129d0bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c01 je 0x129d0c0b */
  if (C.zf) goto L_129d0c0b;
  /* 129d0c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c07 je 0x129d0c15 */
  if (C.zf) goto L_129d0c15;
  /* 129d0c09 jmp 0x129d0c19 */
  goto L_129d0c19;
L_129d0c0b:;
  /* 129d0c0b mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0c15:;
  /* 129d0c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_129d0c19:;
  /* 129d0c19 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0c1e:;
  /* 129d0c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 129d0c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c28 je 0x129d0c32 */
  if (C.zf) goto L_129d0c32;
  /* 129d0c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c2e je 0x129d0c3c */
  if (C.zf) goto L_129d0c3c;
  /* 129d0c30 jmp 0x129d0c40 */
  goto L_129d0c40;
L_129d0c32:;
  /* 129d0c32 mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0c3c:;
  /* 129d0c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_129d0c40:;
  /* 129d0c40 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0c45:;
  /* 129d0c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 129d0c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c4f je 0x129d0c59 */
  if (C.zf) goto L_129d0c59;
  /* 129d0c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c55 je 0x129d0c63 */
  if (C.zf) goto L_129d0c63;
  /* 129d0c57 jmp 0x129d0c67 */
  goto L_129d0c67;
L_129d0c59:;
  /* 129d0c59 mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0c63:;
  /* 129d0c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_129d0c67:;
  /* 129d0c67 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0c6c:;
  /* 129d0c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 129d0c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c76 je 0x129d0c80 */
  if (C.zf) goto L_129d0c80;
  /* 129d0c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0c7c je 0x129d0c8a */
  if (C.zf) goto L_129d0c8a;
  /* 129d0c7e jmp 0x129d0c8e */
  goto L_129d0c8e;
L_129d0c80:;
  /* 129d0c80 mov dword ptr [0x129ee808], 1 */
  w32((uint32_t)(0x129ee808), (0x1u));
L_129d0c8a:;
  /* 129d0c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_129d0c8e:;
  /* 129d0c8e jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0c93:;
  /* 129d0c93 push 0x129ea7fc */
  push32((uint32_t)(0x129ea7fcu));
  /* 129d0c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0c9b push ecx */
  push32((uint32_t)(ECX));
  /* 129d0c9c call 0x129d14f0 */
  push32(0x129d0ca1u); f_129d14f0();
  /* 129d0ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d0ca6 jne 0x129d0cb3 */
  if (!C.zf) goto L_129d0cb3;
  /* 129d0ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d0cb1 jmp 0x129d0cd1 */
  goto L_129d0cd1;
L_129d0cb3:;
  /* 129d0cb3 push 0x129ea7f8 */
  push32((uint32_t)(0x129ea7f8u));
  /* 129d0cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0cbb push eax */
  push32((uint32_t)(EAX));
  /* 129d0cbc call 0x129d14f0 */
  push32(0x129d0cc1u); f_129d14f0();
  /* 129d0cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d0cc6 jne 0x129d0cd1 */
  if (!C.zf) goto L_129d0cd1;
  /* 129d0cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129d0cd1:;
  /* 129d0cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 129d0cd5 jmp 0x129d0e90 */
  goto L_129d0e90;
L_129d0cda:;
  /* 129d0cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0ce1 jg 0x129d0cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d0cf1;
  /* 129d0ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 129d0cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129d0cef jmp 0x129d0cfd */
  goto L_129d0cfd;
L_129d0cf1:;
  /* 129d0cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 129d0cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_129d0cfd:;
  /* 129d0cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0d01 jle 0x129d0da4 */
  if ((C.zf||C.sf!=C.of)) goto L_129d0da4;
  /* 129d0d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0d0d jbe 0x129d0da4 */
  if ((C.cf||C.zf)) goto L_129d0da4;
  /* 129d0d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d0d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0d1a mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d0d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d0d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d0d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 129d0d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d0d2e je 0x129d0d67 */
  if (C.zf) goto L_129d0d67;
  /* 129d0d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0d36 jbe 0x129d0d67 */
  if ((C.cf||C.zf)) goto L_129d0d67;
  /* 129d0d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d0d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129d0d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d0d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129d0d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129d0d67:;
  /* 129d0d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129d0d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d0d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d0d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129d0d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d0d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129d0d9f jmp 0x129d0cfd */
  goto L_129d0cfd;
L_129d0da4:;
  /* 129d0da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d0daa jmp 0x129d0ac6 */
  goto L_129d0ac6;
L_129d0daf:;
  /* 129d0daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d0db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129d0db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d0db7 je 0x129d0e82 */
  if (C.zf) goto L_129d0e82;
  /* 129d0dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_129d0dc6:;
  /* 129d0dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d0dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d0dce je 0x129d0e80 */
  if (C.zf) goto L_129d0e80;
  /* 129d0dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0dda je 0x129d0e80 */
  if (C.zf) goto L_129d0e80;
  /* 129d0de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d0de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0de9 jne 0x129d0df9 */
  if (!C.zf) goto L_129d0df9;
  /* 129d0deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129d0df4 jmp 0x129d0e80 */
  goto L_129d0e80;
L_129d0df9:;
  /* 129d0df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d0dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d0e00 mov edx, dword ptr [0x129ecc98] */
  EDX = (r32((uint32_t)(0x129ecc98)));
  /* 129d0e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d0e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 129d0e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 129d0e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d0e13 je 0x129d0e4c */
  if (C.zf) goto L_129d0e4c;
  /* 129d0e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0e1b jbe 0x129d0e4c */
  if ((C.cf||C.zf)) goto L_129d0e4c;
  /* 129d0e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d0e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129d0e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129d0e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d0e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129d0e4c:;
  /* 129d0e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d0e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129d0e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d0e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129d0e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129d0e7b jmp 0x129d0dc6 */
  goto L_129d0dc6;
L_129d0e80:;
  /* 129d0e80 jmp 0x129d0e8b */
  goto L_129d0e8b;
L_129d0e82:;
  /* 129d0e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129d0e8b:;
  /* 129d0e8b jmp 0x129d0ac6 */
  goto L_129d0ac6;
L_129d0e90:;
  /* 129d0e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129d0e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d0e96 je 0x129d0ebc */
  if (C.zf) goto L_129d0ebc;
  /* 129d0e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d0e9b push edx */
  push32((uint32_t)(EDX));
  /* 129d0e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0e9f push eax */
  push32((uint32_t)(EAX));
  /* 129d0ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d0ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d0ea7 push edx */
  push32((uint32_t)(EDX));
  /* 129d0ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 129d0eab push eax */
  push32((uint32_t)(EAX));
  /* 129d0eac call 0x129d02f0 */
  push32(0x129d0eb1u); f_129d02f0();
  /* 129d0eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d0eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129d0eba jmp 0x129d0f37 */
  goto L_129d0f37;
L_129d0ebc:;
  /* 129d0ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d0ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0ec3 mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d0ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d0ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d0ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 129d0ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d0ed7 je 0x129d0f08 */
  if (C.zf) goto L_129d0f08;
  /* 129d0ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d0ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129d0ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129d0ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129d0efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_129d0f08:;
  /* 129d0f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d0f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d0f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129d0f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d0f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d0f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129d0f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d0f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d0f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d0f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d0f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129d0f37:;
  /* 129d0f37 jmp 0x129d0ac6 */
  goto L_129d0ac6;
L_129d0f3c:;
  /* 129d0f3c mov esp, ebp */
  ESP = (EBP);
  /* 129d0f3e pop ebp */
  EBP = (pop32());
  /* 129d0f3f ret  */
  ESPCHK(0x129d0ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x129d0fe0 (650 bytes, 178 insns) */
void f_129d0fe0(void) {
  FTRACE(0x129d0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 129d0fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d0fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d0fed jne 0x129d1149 */
  if (!C.zf) goto L_129d1149;
  /* 129d0ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d0ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 129d0ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 129d1002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d100c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 129d1016 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 129d101e push edx */
  push32((uint32_t)(EDX));
  /* 129d101f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1022 push eax */
  push32((uint32_t)(EAX));
  /* 129d1023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1026 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d102a push edx */
  push32((uint32_t)(EDX));
  /* 129d102b call 0x129d2400 */
  push32(0x129d1030u); f_129d2400();
  /* 129d1030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d1036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d103a jne 0x129d10cf */
  if (!C.zf) goto L_129d10cf;
  /* 129d1040 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129d1046u);
  /* 129d1046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1049 je 0x129d1050 */
  if (C.zf) goto L_129d1050;
  /* 129d104b jmp 0x129d112d */
  goto L_129d112d;
L_129d1050:;
  /* 129d1050 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1052 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1054 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1059 push eax */
  push32((uint32_t)(EAX));
  /* 129d105a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d105d push ecx */
  push32((uint32_t)(ECX));
  /* 129d105e call 0x129d2400 */
  push32(0x129d1063u); f_129d2400();
  /* 129d1063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 129d106c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1073 jne 0x129d107a */
  if (!C.zf) goto L_129d107a;
  /* 129d1075 jmp 0x129d112d */
  goto L_129d112d;
L_129d107a:;
  /* 129d107a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 129d107c push 0x129ea804 */
  push32((uint32_t)(0x129ea804u));
  /* 129d1081 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 129d1089 push edx */
  push32((uint32_t)(EDX));
  /* 129d108a call 0x129c2e20 */
  push32(0x129d108fu); f_129c2e20();
  /* 129d108f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d1095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1099 jne 0x129d10a0 */
  if (!C.zf) goto L_129d10a0;
  /* 129d109b jmp 0x129d112d */
  goto L_129d112d;
L_129d10a0:;
  /* 129d10a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129d10a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d10a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 129d10af push eax */
  push32((uint32_t)(EAX));
  /* 129d10b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d10b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d10b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d10b7 push edx */
  push32((uint32_t)(EDX));
  /* 129d10b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d10bb push eax */
  push32((uint32_t)(EAX));
  /* 129d10bc call 0x129d2400 */
  push32(0x129d10c1u); f_129d2400();
  /* 129d10c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d10c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d10c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d10cb jne 0x129d10cf */
  if (!C.zf) goto L_129d10cf;
  /* 129d10cd jmp 0x129d112d */
  goto L_129d112d;
L_129d10cf:;
  /* 129d10cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 129d10d1 push 0x129ea804 */
  push32((uint32_t)(0x129ea804u));
  /* 129d10d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d10d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d10db push ecx */
  push32((uint32_t)(ECX));
  /* 129d10dc call 0x129c2e20 */
  push32(0x129d10e1u); f_129c2e20();
  /* 129d10e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d10e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 129d10ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129d10ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 129d10f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d10f5 jne 0x129d10f9 */
  if (!C.zf) goto L_129d10f9;
  /* 129d10f7 jmp 0x129d112d */
  goto L_129d112d;
L_129d10f9:;
  /* 129d10f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d10fc push ecx */
  push32((uint32_t)(ECX));
  /* 129d10fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1100 push edx */
  push32((uint32_t)(EDX));
  /* 129d1101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 129d1107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d1109 push ecx */
  push32((uint32_t)(ECX));
  /* 129d110a call 0x129c6640 */
  push32(0x129d110fu); f_129c6640();
  /* 129d110f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1116 je 0x129d1126 */
  if (C.zf) goto L_129d1126;
  /* 129d1118 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d111a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d111d push edx */
  push32((uint32_t)(EDX));
  /* 129d111e call 0x129c38b0 */
  push32(0x129d1123u); f_129c38b0();
  /* 129d1123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d1126:;
  /* 129d1126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1128 jmp 0x129d1266 */
  goto L_129d1266;
L_129d112d:;
  /* 129d112d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1131 je 0x129d1141 */
  if (C.zf) goto L_129d1141;
  /* 129d1133 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1138 push eax */
  push32((uint32_t)(EAX));
  /* 129d1139 call 0x129c38b0 */
  push32(0x129d113eu); f_129c38b0();
  /* 129d113e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d1141:;
  /* 129d1141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d1144 jmp 0x129d1266 */
  goto L_129d1266;
L_129d1149:;
  /* 129d1149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d114d jne 0x129d1263 */
  if (!C.zf) goto L_129d1263;
  /* 129d1153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 129d115d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d1160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 129d1166 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 129d116e push edx */
  push32((uint32_t)(EDX));
  /* 129d116f push 0x129ee720 */
  push32((uint32_t)(0x129ee720u));
  /* 129d1174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1177 push eax */
  push32((uint32_t)(EAX));
  /* 129d1178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d117b push ecx */
  push32((uint32_t)(ECX));
  /* 129d117c call 0x129d2260 */
  push32(0x129d1181u); f_129d2260();
  /* 129d1181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d1186 jne 0x129d1190 */
  if (!C.zf) goto L_129d1190;
  /* 129d1188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d118b jmp 0x129d1266 */
  goto L_129d1266;
L_129d1190:;
  /* 129d1190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129d1196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129d1199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 129d11a3 jmp 0x129d11b4 */
  goto L_129d11b4;
L_129d11a5:;
  /* 129d11a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129d11ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d11ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_129d11b4:;
  /* 129d11b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d11bb jge 0x129d125f */
  if ((C.sf==C.of)) goto L_129d125f;
  /* 129d11c1 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d11c8 jle 0x129d11fb */
  if ((C.zf||C.sf!=C.of)) goto L_129d11fb;
  /* 129d11ca push 4 */
  push32((uint32_t)(0x4u));
  /* 129d11cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129d11d2 mov dl, byte ptr [ecx*2 + 0x129ee720] */
  DL = (r8((uint32_t)(ECX*2 + 0x129ee720)));
  /* 129d11d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 129d11df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 129d11e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d11ea push eax */
  push32((uint32_t)(EAX));
  /* 129d11eb call 0x129c8e30 */
  push32(0x129d11f0u); f_129c8e30();
  /* 129d11f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d11f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 129d11f9 jmp 0x129d122e */
  goto L_129d122e;
L_129d11fb:;
  /* 129d11fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129d1201 mov dl, byte ptr [ecx*2 + 0x129ee720] */
  DL = (r8((uint32_t)(ECX*2 + 0x129ee720)));
  /* 129d1208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 129d120e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 129d1214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d1219 mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d121f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d1225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129d1228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_129d122e:;
  /* 129d122e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1235 je 0x129d1258 */
  if (C.zf) goto L_129d1258;
  /* 129d1237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129d123d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d1240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 129d124a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 129d124e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129d1254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129d1256 jmp 0x129d125a */
  goto L_129d125a;
L_129d1258:;
  /* 129d1258 jmp 0x129d125f */
  goto L_129d125f;
L_129d125a:;
  /* 129d125a jmp 0x129d11a5 */
  goto L_129d11a5;
L_129d125f:;
  /* 129d125f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1261 jmp 0x129d1266 */
  goto L_129d1266;
L_129d1263:;
  /* 129d1263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129d1266:;
  /* 129d1266 mov esp, ebp */
  ESP = (EBP);
  /* 129d1268 pop ebp */
  EBP = (pop32());
  /* 129d1269 ret  */
  ESPCHK(0x129d0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x129d1270 (10 bytes, 5 insns) */
void f_129d1270(void) {
  FTRACE(0x129d1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1270 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1271 mov ebp, esp */
  EBP = (ESP);
  /* 129d1273 mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129d1278 pop ebp */
  EBP = (pop32());
  /* 129d1279 ret  */
  ESPCHK(0x129d1270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x129d1280 (575 bytes, 196 insns) */
void f_129d1280(void) {
  FTRACE(0x129d1280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1280 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1281 mov ebp, esp */
  EBP = (ESP);
  /* 129d1283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d1285 push 0x129ea810 */
  push32((uint32_t)(0x129ea810u));
  /* 129d128a push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129d128f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129d1295 push eax */
  push32((uint32_t)(EAX));
  /* 129d1296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129d129d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d12a0 push ebx */
  push32((uint32_t)(EBX));
  /* 129d12a1 push esi */
  push32((uint32_t)(ESI));
  /* 129d12a2 push edi */
  push32((uint32_t)(EDI));
  /* 129d12a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d12a6 cmp dword ptr [0x129ee72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d12ad jne 0x129d12fe */
  if (!C.zf) goto L_129d12fe;
  /* 129d12af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 129d12b2 push eax */
  push32((uint32_t)(EAX));
  /* 129d12b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d12b5 push 0x129e9f44 */
  push32((uint32_t)(0x129e9f44u));
  /* 129d12ba push 1 */
  push32((uint32_t)(0x1u));
  /* 129d12bc call dword ptr [0x129f0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0350))), 0x129d12c2u);
  /* 129d12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d12c4 je 0x129d12d2 */
  if (C.zf) goto L_129d12d2;
  /* 129d12c6 mov dword ptr [0x129ee72c], 1 */
  w32((uint32_t)(0x129ee72c), (0x1u));
  /* 129d12d0 jmp 0x129d12fe */
  goto L_129d12fe;
L_129d12d2:;
  /* 129d12d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 129d12d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129d12d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d12d8 push 0x129e9f40 */
  push32((uint32_t)(0x129e9f40u));
  /* 129d12dd push 1 */
  push32((uint32_t)(0x1u));
  /* 129d12df push 0 */
  push32((uint32_t)(0x0u));
  /* 129d12e1 call dword ptr [0x129f034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f034c))), 0x129d12e7u);
  /* 129d12e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d12e9 je 0x129d12f7 */
  if (C.zf) goto L_129d12f7;
  /* 129d12eb mov dword ptr [0x129ee72c], 2 */
  w32((uint32_t)(0x129ee72c), (0x2u));
  /* 129d12f5 jmp 0x129d12fe */
  goto L_129d12fe;
L_129d12f7:;
  /* 129d12f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d12f9 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d12fe:;
  /* 129d12fe cmp dword ptr [0x129ee72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1305 jne 0x129d1322 */
  if (!C.zf) goto L_129d1322;
  /* 129d1307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d130a push edx */
  push32((uint32_t)(EDX));
  /* 129d130b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d130e push eax */
  push32((uint32_t)(EAX));
  /* 129d130f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d1312 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1316 push edx */
  push32((uint32_t)(EDX));
  /* 129d1317 call dword ptr [0x129f0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0350))), 0x129d131du);
  /* 129d131d jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d1322:;
  /* 129d1322 cmp dword ptr [0x129ee72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1329 jne 0x129d14d7 */
  if (!C.zf) goto L_129d14d7;
  /* 129d132f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1333 jne 0x129d133d */
  if (!C.zf) goto L_129d133d;
  /* 129d1335 mov eax, dword ptr [0x129ee6a0] */
  EAX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d133a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_129d133d:;
  /* 129d133d push 0 */
  push32((uint32_t)(0x0u));
  /* 129d133f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1341 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1343 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1348 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d134c push edx */
  push32((uint32_t)(EDX));
  /* 129d134d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d1352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d1355 push eax */
  push32((uint32_t)(EAX));
  /* 129d1356 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d135cu);
  /* 129d135c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129d135f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1363 jne 0x129d136c */
  if (!C.zf) goto L_129d136c;
  /* 129d1365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1367 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d136c:;
  /* 129d136c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d1373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d1376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d137b call 0x129c5fc0 */
  push32(0x129d1380u); f_129c5fc0();
  /* 129d1380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 129d1383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d1386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129d1389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129d138c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d138f push edx */
  push32((uint32_t)(EDX));
  /* 129d1390 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129d1395 push eax */
  push32((uint32_t)(EAX));
  /* 129d1396 call 0x129c6b90 */
  push32(0x129d139bu); f_129c6b90();
  /* 129d139b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d139e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d13a5 jmp 0x129d13be */
  goto L_129d13be;
  /* 129d13a7 mov eax, 1 */
  EAX = (0x1u);
  /* 129d13ac ret  */
  ESPCHK(0x129d1280u, _esp0);
  ESP += 4; return;
  /* 129d13ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d13b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 129d13b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d13be:;
  /* 129d13be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d13c2 jne 0x129d13cb */
  if (!C.zf) goto L_129d13cb;
  /* 129d13c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d13c6 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d13cb:;
  /* 129d13cb push 0 */
  push32((uint32_t)(0x0u));
  /* 129d13cd push 0 */
  push32((uint32_t)(0x0u));
  /* 129d13cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d13d2 push ecx */
  push32((uint32_t)(ECX));
  /* 129d13d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129d13d6 push edx */
  push32((uint32_t)(EDX));
  /* 129d13d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d13da push eax */
  push32((uint32_t)(EAX));
  /* 129d13db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d13de push ecx */
  push32((uint32_t)(ECX));
  /* 129d13df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d13e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d13e7 push edx */
  push32((uint32_t)(EDX));
  /* 129d13e8 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d13eeu);
  /* 129d13ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d13f0 jne 0x129d13f9 */
  if (!C.zf) goto L_129d13f9;
  /* 129d13f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d13f4 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d13f9:;
  /* 129d13f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129d1400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d1403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 129d1407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d140a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d140c call 0x129c5fc0 */
  push32(0x129d1411u); f_129c5fc0();
  /* 129d1411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 129d1414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d1417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 129d141a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129d141d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d1424 jmp 0x129d143d */
  goto L_129d143d;
  /* 129d1426 mov eax, 1 */
  EAX = (0x1u);
  /* 129d142b ret  */
  ESPCHK(0x129d1280u, _esp0);
  ESP += 4; return;
  /* 129d142c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d142f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129d1436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d143d:;
  /* 129d143d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1441 jne 0x129d144a */
  if (!C.zf) goto L_129d144a;
  /* 129d1443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1445 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d144a:;
  /* 129d144a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d144e jne 0x129d1459 */
  if (!C.zf) goto L_129d1459;
  /* 129d1450 mov edx, dword ptr [0x129ee690] */
  EDX = (r32((uint32_t)(0x129ee690)));
  /* 129d1456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_129d1459:;
  /* 129d1459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d145c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d145f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 129d1465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d146b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 129d1472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d1475 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d1479 push edx */
  push32((uint32_t)(EDX));
  /* 129d147a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129d147d push eax */
  push32((uint32_t)(EAX));
  /* 129d147e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1481 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d1485 push edx */
  push32((uint32_t)(EDX));
  /* 129d1486 call dword ptr [0x129f034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f034c))), 0x129d148cu);
  /* 129d148c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129d148f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d1492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d1495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 129d149c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d14a2 je 0x129d14b8 */
  if (C.zf) goto L_129d14b8;
  /* 129d14a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d14a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d14aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d14ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d14b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d14b6 je 0x129d14bc */
  if (C.zf) goto L_129d14bc;
L_129d14b8:;
  /* 129d14b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d14ba jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d14bc:;
  /* 129d14bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d14bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129d14c1 push eax */
  push32((uint32_t)(EAX));
  /* 129d14c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d14c5 push ecx */
  push32((uint32_t)(ECX));
  /* 129d14c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d14c9 push edx */
  push32((uint32_t)(EDX));
  /* 129d14ca call 0x129cad10 */
  push32(0x129d14cfu); f_129cad10();
  /* 129d14cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d14d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d14d5 jmp 0x129d14d9 */
  goto L_129d14d9;
L_129d14d7:;
  /* 129d14d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d14d9:;
  /* 129d14d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 129d14dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d14df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129d14e6 pop edi */
  EDI = (pop32());
  /* 129d14e7 pop esi */
  ESI = (pop32());
  /* 129d14e8 pop ebx */
  EBX = (pop32());
  /* 129d14e9 mov esp, ebp */
  ESP = (EBP);
  /* 129d14eb pop ebp */
  EBP = (pop32());
  /* 129d14ec ret  */
  ESPCHK(0x129d1280u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x129d14f0 (208 bytes, 85 insns) */
void f_129d14f0(void) {
  FTRACE(0x129d14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d14f1 mov ebp, esp */
  EBP = (ESP);
  /* 129d14f3 push edi */
  push32((uint32_t)(EDI));
  /* 129d14f4 push esi */
  push32((uint32_t)(ESI));
  /* 129d14f5 push ebx */
  push32((uint32_t)(EBX));
  /* 129d14f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129d14f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 129d14fc lea eax, [0x129ee688] */
  EAX = ((uint32_t)(0x129ee688));
  /* 129d1502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1506 jne 0x129d1543 */
  if (!C.zf) goto L_129d1543;
  /* 129d1508 mov al, 0xff */
  AL = (0xffu);
  /* 129d150a mov edi, edi */
  EDI = (EDI);
L_129d150c:;
  /* 129d150c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129d150e je 0x129d153e */
  if (C.zf) goto L_129d153e;
  /* 129d1510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129d1512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129d1513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 129d1515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129d1516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1518 je 0x129d150c */
  if (C.zf) goto L_129d150c;
  /* 129d151a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129d151c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d151e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129d1520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 129d1523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129d1525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129d1527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 129d1529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129d152b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d152d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129d152f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 129d1532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129d1534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129d1536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1538 je 0x129d150c */
  if (C.zf) goto L_129d150c;
  /* 129d153a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129d153c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_129d153e:;
  /* 129d153e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 129d1541 jmp 0x129d15bb */
  goto L_129d15bb;
L_129d1543:;
  /* 129d1543 lock inc dword ptr [0x129ee81c] */
  x86_unimpl("lock inc @ 0x129d1543");
  /* 129d154a cmp dword ptr [0x129ee80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1551 jg 0x129d1557 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d1557;
  /* 129d1553 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1555 jmp 0x129d156c */
  goto L_129d156c;
L_129d1557:;
  /* 129d1557 lock dec dword ptr [0x129ee81c] */
  x86_unimpl("lock dec @ 0x129d1557");
  /* 129d155e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d1560 call 0x129c6820 */
  push32(0x129d1565u); f_129c6820();
  /* 129d1565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_129d156c:;
  /* 129d156c mov eax, 0xff */
  EAX = (0xffu);
  /* 129d1571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129d1573 nop  */
  /* nop */
L_129d1574:;
  /* 129d1574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129d1576 je 0x129d159f */
  if (C.zf) goto L_129d159f;
  /* 129d1578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129d157a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129d157b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 129d157d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129d157e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1580 je 0x129d1574 */
  if (C.zf) goto L_129d1574;
  /* 129d1582 push eax */
  push32((uint32_t)(EAX));
  /* 129d1583 push ebx */
  push32((uint32_t)(EBX));
  /* 129d1584 call 0x129d2660 */
  push32(0x129d1589u); f_129d2660();
  /* 129d1589 mov ebx, eax */
  EBX = (EAX);
  /* 129d158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d158e call 0x129d2660 */
  push32(0x129d1593u); f_129d2660();
  /* 129d1593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1598 je 0x129d1574 */
  if (C.zf) goto L_129d1574;
  /* 129d159a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d159c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129d159f:;
  /* 129d159f mov ebx, eax */
  EBX = (EAX);
  /* 129d15a1 pop eax */
  EAX = (pop32());
  /* 129d15a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d15a4 jne 0x129d15af */
  if (!C.zf) goto L_129d15af;
  /* 129d15a6 lock dec dword ptr [0x129ee81c] */
  x86_unimpl("lock dec @ 0x129d15a6");
  /* 129d15ad jmp 0x129d15b9 */
  goto L_129d15b9;
L_129d15af:;
  /* 129d15af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d15b1 call 0x129c68c0 */
  push32(0x129d15b6u); f_129c68c0();
  /* 129d15b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d15b9:;
  /* 129d15b9 mov eax, ebx */
  EAX = (EBX);
L_129d15bb:;
  /* 129d15bb pop ebx */
  EBX = (pop32());
  /* 129d15bc pop esi */
  ESI = (pop32());
  /* 129d15bd pop edi */
  EDI = (pop32());
  /* 129d15be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129d15bf ret  */
  ESPCHK(0x129d14f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115c0 @ 0x129d15c0 (257 bytes, 103 insns) */
void f_129d15c0(void) {
  FTRACE(0x129d15c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d15c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d15c1 mov ebp, esp */
  EBP = (ESP);
  /* 129d15c3 push edi */
  push32((uint32_t)(EDI));
  /* 129d15c4 push esi */
  push32((uint32_t)(ESI));
  /* 129d15c5 push ebx */
  push32((uint32_t)(EBX));
  /* 129d15c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d15c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d15cb je 0x129d16ba */
  if (C.zf) goto L_129d16ba;
  /* 129d15d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 129d15d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 129d15d7 lea eax, [0x129ee688] */
  EAX = ((uint32_t)(0x129ee688));
  /* 129d15dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d15e1 jne 0x129d1631 */
  if (!C.zf) goto L_129d1631;
  /* 129d15e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 129d15e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 129d15e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 129d15e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129d15ec:;
  /* 129d15ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 129d15ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 129d15f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 129d15f2 je 0x129d1615 */
  if (C.zf) goto L_129d1615;
  /* 129d15f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129d15f6 je 0x129d1615 */
  if (C.zf) goto L_129d1615;
  /* 129d15f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129d15f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129d15fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d15fc jb 0x129d1604 */
  if (C.cf) goto L_129d1604;
  /* 129d15fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1600 ja 0x129d1604 */
  if ((!C.cf&&!C.zf)) goto L_129d1604;
  /* 129d1602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_129d1604:;
  /* 129d1604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1606 jb 0x129d160e */
  if (C.cf) goto L_129d160e;
  /* 129d1608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d160a ja 0x129d160e */
  if ((!C.cf&&!C.zf)) goto L_129d160e;
  /* 129d160c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_129d160e:;
  /* 129d160e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1610 jne 0x129d161f */
  if (!C.zf) goto L_129d161f;
  /* 129d1612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129d1613 jne 0x129d15ec */
  if (!C.zf) goto L_129d15ec;
L_129d1615:;
  /* 129d1615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d1619 je 0x129d16ba */
  if (C.zf) goto L_129d16ba;
L_129d161f:;
  /* 129d161f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 129d1624 jb 0x129d16ba */
  if (C.cf) goto L_129d16ba;
  /* 129d162a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d162c jmp 0x129d16ba */
  goto L_129d16ba;
L_129d1631:;
  /* 129d1631 lock inc dword ptr [0x129ee81c] */
  x86_unimpl("lock inc @ 0x129d1631");
  /* 129d1638 cmp dword ptr [0x129ee80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d163f jg 0x129d1645 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d1645;
  /* 129d1641 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1643 jmp 0x129d165e */
  goto L_129d165e;
L_129d1645:;
  /* 129d1645 lock dec dword ptr [0x129ee81c] */
  x86_unimpl("lock dec @ 0x129d1645");
  /* 129d164c mov ebx, ecx */
  EBX = (ECX);
  /* 129d164e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d1650 call 0x129c6820 */
  push32(0x129d1655u); f_129c6820();
  /* 129d1655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 129d165c mov ecx, ebx */
  ECX = (EBX);
L_129d165e:;
  /* 129d165e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129d1662 mov edi, edi */
  EDI = (EDI);
L_129d1664:;
  /* 129d1664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129d1666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 129d166a je 0x129d168f */
  if (C.zf) goto L_129d168f;
  /* 129d166c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129d166e je 0x129d168f */
  if (C.zf) goto L_129d168f;
  /* 129d1670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129d1671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129d1672 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1673 push eax */
  push32((uint32_t)(EAX));
  /* 129d1674 push ebx */
  push32((uint32_t)(EBX));
  /* 129d1675 call 0x129d2660 */
  push32(0x129d167au); f_129d2660();
  /* 129d167a mov ebx, eax */
  EBX = (EAX);
  /* 129d167c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d167f call 0x129d2660 */
  push32(0x129d1684u); f_129d2660();
  /* 129d1684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1687 pop ecx */
  ECX = (pop32());
  /* 129d1688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d168a jne 0x129d1695 */
  if (!C.zf) goto L_129d1695;
  /* 129d168c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129d168d jne 0x129d1664 */
  if (!C.zf) goto L_129d1664;
L_129d168f:;
  /* 129d168f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1693 je 0x129d169e */
  if (C.zf) goto L_129d169e;
L_129d1695:;
  /* 129d1695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 129d169a jb 0x129d169e */
  if (C.cf) goto L_129d169e;
  /* 129d169c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_129d169e:;
  /* 129d169e pop eax */
  EAX = (pop32());
  /* 129d169f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d16a1 jne 0x129d16ac */
  if (!C.zf) goto L_129d16ac;
  /* 129d16a3 lock dec dword ptr [0x129ee81c] */
  x86_unimpl("lock dec @ 0x129d16a3");
  /* 129d16aa jmp 0x129d16ba */
  goto L_129d16ba;
L_129d16ac:;
  /* 129d16ac mov ebx, ecx */
  EBX = (ECX);
  /* 129d16ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d16b0 call 0x129c68c0 */
  push32(0x129d16b5u); f_129c68c0();
  /* 129d16b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d16b8 mov ecx, ebx */
  ECX = (EBX);
L_129d16ba:;
  /* 129d16ba mov eax, ecx */
  EAX = (ECX);
  /* 129d16bc pop ebx */
  EBX = (pop32());
  /* 129d16bd pop esi */
  ESI = (pop32());
  /* 129d16be pop edi */
  EDI = (pop32());
  /* 129d16bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129d16c0 ret  */
  ESPCHK(0x129d15c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x129d16d0 (255 bytes, 88 insns) */
void f_129d16d0(void) {
  FTRACE(0x129d16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d16d1 mov ebp, esp */
  EBP = (ESP);
  /* 129d16d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_129d16d6:;
  /* 129d16d6 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d16dd jle 0x129d16f6 */
  if ((C.zf||C.sf!=C.of)) goto L_129d16f6;
  /* 129d16df push 8 */
  push32((uint32_t)(0x8u));
  /* 129d16e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d16e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d16e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d16e8 push ecx */
  push32((uint32_t)(ECX));
  /* 129d16e9 call 0x129c8e30 */
  push32(0x129d16eeu); f_129c8e30();
  /* 129d16ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d16f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129d16f4 jmp 0x129d170f */
  goto L_129d170f;
L_129d16f6:;
  /* 129d16f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d16f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d16fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d16fd mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d1703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1705 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d1709 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 129d170c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129d170f:;
  /* 129d170f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1713 je 0x129d1720 */
  if (C.zf) goto L_129d1720;
  /* 129d1715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d171b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d171e jmp 0x129d16d6 */
  goto L_129d16d6;
L_129d1720:;
  /* 129d1720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1725 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d1727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d172a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d172d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1730 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d1733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d1736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1739 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d173d je 0x129d1745 */
  if (C.zf) goto L_129d1745;
  /* 129d173f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1743 jne 0x129d1758 */
  if (!C.zf) goto L_129d1758;
L_129d1745:;
  /* 129d1745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d174a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d174c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d174f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1755 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129d1758:;
  /* 129d1758 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129d175f:;
  /* 129d175f cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1766 jle 0x129d177b */
  if ((C.zf||C.sf!=C.of)) goto L_129d177b;
  /* 129d1768 push 4 */
  push32((uint32_t)(0x4u));
  /* 129d176a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d176d push edx */
  push32((uint32_t)(EDX));
  /* 129d176e call 0x129c8e30 */
  push32(0x129d1773u); f_129c8e30();
  /* 129d1773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1776 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d1779 jmp 0x129d1790 */
  goto L_129d1790;
L_129d177b:;
  /* 129d177b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d177e mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d1784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d178a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129d178d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129d1790:;
  /* 129d1790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1794 je 0x129d17bb */
  if (C.zf) goto L_129d17bb;
  /* 129d1796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d1799 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d179c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d179f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 129d17a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129d17a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d17a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d17ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d17ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d17b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d17b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d17b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129d17b9 jmp 0x129d175f */
  goto L_129d175f;
L_129d17bb:;
  /* 129d17bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d17bf jne 0x129d17c8 */
  if (!C.zf) goto L_129d17c8;
  /* 129d17c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d17c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d17c6 jmp 0x129d17cb */
  goto L_129d17cb;
L_129d17c8:;
  /* 129d17c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129d17cb:;
  /* 129d17cb mov esp, ebp */
  ESP = (EBP);
  /* 129d17cd pop ebp */
  EBP = (pop32());
  /* 129d17ce ret  */
  ESPCHK(0x129d16d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x129d17d0 (17 bytes, 8 insns) */
void f_129d17d0(void) {
  FTRACE(0x129d17d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d17d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d17d1 mov ebp, esp */
  EBP = (ESP);
  /* 129d17d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d17d6 push eax */
  push32((uint32_t)(EAX));
  /* 129d17d7 call 0x129d16d0 */
  push32(0x129d17dcu); f_129d16d0();
  /* 129d17dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d17df pop ebp */
  EBP = (pop32());
  /* 129d17e0 ret  */
  ESPCHK(0x129d17d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x129d17f0 (297 bytes, 106 insns) */
void f_129d17f0(void) {
  FTRACE(0x129d17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d17f1 mov ebp, esp */
  EBP = (ESP);
  /* 129d17f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d17f6 push esi */
  push32((uint32_t)(ESI));
L_129d17f7:;
  /* 129d17f7 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d17fe jle 0x129d1817 */
  if ((C.zf||C.sf!=C.of)) goto L_129d1817;
  /* 129d1800 push 8 */
  push32((uint32_t)(0x8u));
  /* 129d1802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1807 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d1809 push ecx */
  push32((uint32_t)(ECX));
  /* 129d180a call 0x129c8e30 */
  push32(0x129d180fu); f_129c8e30();
  /* 129d180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1812 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d1815 jmp 0x129d1830 */
  goto L_129d1830;
L_129d1817:;
  /* 129d1817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d181c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d181e mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d1824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d182a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 129d182d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129d1830:;
  /* 129d1830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1834 je 0x129d1841 */
  if (C.zf) goto L_129d1841;
  /* 129d1836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d183c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d183f jmp 0x129d17f7 */
  goto L_129d17f7;
L_129d1841:;
  /* 129d1841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d1848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d184b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d184e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1851 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d1854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d1857 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129d185a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d185e je 0x129d1866 */
  if (C.zf) goto L_129d1866;
  /* 129d1860 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1864 jne 0x129d1879 */
  if (!C.zf) goto L_129d1879;
L_129d1866:;
  /* 129d1866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d186b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d186d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d1870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1876 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129d1879:;
  /* 129d1879 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129d1880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129d1887:;
  /* 129d1887 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d188e jle 0x129d18a3 */
  if ((C.zf||C.sf!=C.of)) goto L_129d18a3;
  /* 129d1890 push 4 */
  push32((uint32_t)(0x4u));
  /* 129d1892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d1895 push edx */
  push32((uint32_t)(EDX));
  /* 129d1896 call 0x129c8e30 */
  push32(0x129d189bu); f_129c8e30();
  /* 129d189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d189e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129d18a1 jmp 0x129d18b8 */
  goto L_129d18b8;
L_129d18a3:;
  /* 129d18a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d18a6 mov ecx, dword ptr [0x129ecc98] */
  ECX = (r32((uint32_t)(0x129ecc98)));
  /* 129d18ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d18ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129d18b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129d18b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_129d18b8:;
  /* 129d18b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d18bc je 0x129d18f9 */
  if (C.zf) goto L_129d18f9;
  /* 129d18be push 0 */
  push32((uint32_t)(0x0u));
  /* 129d18c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 129d18c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d18c5 push eax */
  push32((uint32_t)(EAX));
  /* 129d18c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d18c9 push ecx */
  push32((uint32_t)(ECX));
  /* 129d18ca call 0x129d2790 */
  push32(0x129d18cfu); f_129d2790();
  /* 129d18cf mov ecx, eax */
  ECX = (EAX);
  /* 129d18d1 mov esi, edx */
  ESI = (EDX);
  /* 129d18d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d18d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d18d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d18da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d18dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129d18de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d18e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 129d18e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d18e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d18e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d18eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d18ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d18f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d18f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129d18f7 jmp 0x129d1887 */
  goto L_129d1887;
L_129d18f9:;
  /* 129d18f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d18fd jne 0x129d190e */
  if (!C.zf) goto L_129d190e;
  /* 129d18ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1902 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d1904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d1907 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d190a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d190c jmp 0x129d1914 */
  goto L_129d1914;
L_129d190e:;
  /* 129d190e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_129d1914:;
  /* 129d1914 pop esi */
  ESI = (pop32());
  /* 129d1915 mov esp, ebp */
  ESP = (EBP);
  /* 129d1917 pop ebp */
  EBP = (pop32());
  /* 129d1918 ret  */
  ESPCHK(0x129d17f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011920 @ 0x129d1920 (61 bytes, 18 insns) */
void f_129d1920(void) {
  FTRACE(0x129d1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1920 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1921 mov ebp, esp */
  EBP = (ESP);
  /* 129d1923 cmp dword ptr [0x129ee7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d192a jne 0x129d195b */
  if (!C.zf) goto L_129d195b;
  /* 129d192c push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d192e call 0x129c6820 */
  push32(0x129d1933u); f_129c6820();
  /* 129d1933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1936 cmp dword ptr [0x129ee7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d193d jne 0x129d1951 */
  if (!C.zf) goto L_129d1951;
  /* 129d193f call 0x129d1980 */
  push32(0x129d1944u); f_129d1980();
  /* 129d1944 mov eax, dword ptr [0x129ee7e8] */
  EAX = (r32((uint32_t)(0x129ee7e8)));
  /* 129d1949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d194c mov dword ptr [0x129ee7e8], eax */
  w32((uint32_t)(0x129ee7e8), (EAX));
L_129d1951:;
  /* 129d1951 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d1953 call 0x129c68c0 */
  push32(0x129d1958u); f_129c68c0();
  /* 129d1958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d195b:;
  /* 129d195b pop ebp */
  EBP = (pop32());
  /* 129d195c ret  */
  ESPCHK(0x129d1920u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x129d1960 (30 bytes, 11 insns) */
void f_129d1960(void) {
  FTRACE(0x129d1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1960 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1961 mov ebp, esp */
  EBP = (ESP);
  /* 129d1963 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d1965 call 0x129c6820 */
  push32(0x129d196au); f_129c6820();
  /* 129d196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d196d call 0x129d1980 */
  push32(0x129d1972u); f_129d1980();
  /* 129d1972 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d1974 call 0x129c68c0 */
  push32(0x129d1979u); f_129c68c0();
  /* 129d1979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d197c pop ebp */
  EBP = (pop32());
  /* 129d197d ret  */
  ESPCHK(0x129d1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x129d1980 (939 bytes, 266 insns) */
void f_129d1980(void) {
  FTRACE(0x129d1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1980 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1981 mov ebp, esp */
  EBP = (ESP);
  /* 129d1983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d1986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d198d push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d198f call 0x129c6820 */
  push32(0x129d1994u); f_129c6820();
  /* 129d1994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1997 mov dword ptr [0x129ee730], 0 */
  w32((uint32_t)(0x129ee730), (0x0u));
  /* 129d19a1 mov dword ptr [0x129ede38], 0xffffffff */
  w32((uint32_t)(0x129ede38), (0xffffffffu));
  /* 129d19ab mov eax, dword ptr [0x129ede38] */
  EAX = (r32((uint32_t)(0x129ede38)));
  /* 129d19b0 mov dword ptr [0x129ede28], eax */
  w32((uint32_t)(0x129ede28), (EAX));
  /* 129d19b5 push 0x129ea870 */
  push32((uint32_t)(0x129ea870u));
  /* 129d19ba call 0x129d2800 */
  push32(0x129d19bfu); f_129d2800();
  /* 129d19bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d19c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d19c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d19c9 jne 0x129d1b03 */
  if (!C.zf) goto L_129d1b03;
  /* 129d19cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d19d1 call 0x129c68c0 */
  push32(0x129d19d6u); f_129c68c0();
  /* 129d19d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d19d9 push 0x129ee738 */
  push32((uint32_t)(0x129ee738u));
  /* 129d19de call dword ptr [0x129f0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0250))), 0x129d19e4u);
  /* 129d19e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d19e7 je 0x129d1afe */
  if (C.zf) goto L_129d1afe;
  /* 129d19ed mov dword ptr [0x129ee730], 1 */
  w32((uint32_t)(0x129ee730), (0x1u));
  /* 129d19f7 mov ecx, dword ptr [0x129ee738] */
  ECX = (r32((uint32_t)(0x129ee738)));
  /* 129d19fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1a00 mov dword ptr [0x129edd90], ecx */
  w32((uint32_t)(0x129edd90), (ECX));
  /* 129d1a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1a08 mov dx, word ptr [0x129ee77e] */
  DX = (r16((uint32_t)(0x129ee77e)));
  /* 129d1a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d1a11 je 0x129d1a29 */
  if (C.zf) goto L_129d1a29;
  /* 129d1a13 mov eax, dword ptr [0x129ee78c] */
  EAX = (r32((uint32_t)(0x129ee78c)));
  /* 129d1a18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1a1b mov ecx, dword ptr [0x129edd90] */
  ECX = (r32((uint32_t)(0x129edd90)));
  /* 129d1a21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1a23 mov dword ptr [0x129edd90], ecx */
  w32((uint32_t)(0x129edd90), (ECX));
L_129d1a29:;
  /* 129d1a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1a2b mov dx, word ptr [0x129ee7d2] */
  DX = (r16((uint32_t)(0x129ee7d2)));
  /* 129d1a32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d1a34 je 0x129d1a5e */
  if (C.zf) goto L_129d1a5e;
  /* 129d1a36 cmp dword ptr [0x129ee7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1a3d je 0x129d1a5e */
  if (C.zf) goto L_129d1a5e;
  /* 129d1a3f mov dword ptr [0x129edd94], 1 */
  w32((uint32_t)(0x129edd94), (0x1u));
  /* 129d1a49 mov eax, dword ptr [0x129ee7e0] */
  EAX = (r32((uint32_t)(0x129ee7e0)));
  /* 129d1a4e sub eax, dword ptr [0x129ee78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ee78c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d1a54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1a57 mov dword ptr [0x129edd98], eax */
  w32((uint32_t)(0x129edd98), (EAX));
  /* 129d1a5c jmp 0x129d1a72 */
  goto L_129d1a72;
L_129d1a5e:;
  /* 129d1a5e mov dword ptr [0x129edd94], 0 */
  w32((uint32_t)(0x129edd94), (0x0u));
  /* 129d1a68 mov dword ptr [0x129edd98], 0 */
  w32((uint32_t)(0x129edd98), (0x0u));
L_129d1a72:;
  /* 129d1a72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 129d1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1a78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129d1a7a mov edx, dword ptr [0x129ede1c] */
  EDX = (r32((uint32_t)(0x129ede1c)));
  /* 129d1a80 push edx */
  push32((uint32_t)(EDX));
  /* 129d1a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d1a83 push 0x129ee73c */
  push32((uint32_t)(0x129ee73cu));
  /* 129d1a88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d1a8d mov eax, dword ptr [0x129ee6a0] */
  EAX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d1a92 push eax */
  push32((uint32_t)(EAX));
  /* 129d1a93 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d1a99u);
  /* 129d1a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d1a9b je 0x129d1aaf */
  if (C.zf) goto L_129d1aaf;
  /* 129d1a9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1aa1 jne 0x129d1aaf */
  if (!C.zf) goto L_129d1aaf;
  /* 129d1aa3 mov ecx, dword ptr [0x129ede1c] */
  ECX = (r32((uint32_t)(0x129ede1c)));
  /* 129d1aa9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 129d1aad jmp 0x129d1ab8 */
  goto L_129d1ab8;
L_129d1aaf:;
  /* 129d1aaf mov edx, dword ptr [0x129ede1c] */
  EDX = (r32((uint32_t)(0x129ede1c)));
  /* 129d1ab5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_129d1ab8:;
  /* 129d1ab8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129d1abb push eax */
  push32((uint32_t)(EAX));
  /* 129d1abc push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1abe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129d1ac0 mov ecx, dword ptr [0x129ede20] */
  ECX = (r32((uint32_t)(0x129ede20)));
  /* 129d1ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1ac7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d1ac9 push 0x129ee790 */
  push32((uint32_t)(0x129ee790u));
  /* 129d1ace push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d1ad3 mov edx, dword ptr [0x129ee6a0] */
  EDX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d1ad9 push edx */
  push32((uint32_t)(EDX));
  /* 129d1ada call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d1ae0u);
  /* 129d1ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d1ae2 je 0x129d1af5 */
  if (C.zf) goto L_129d1af5;
  /* 129d1ae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1ae8 jne 0x129d1af5 */
  if (!C.zf) goto L_129d1af5;
  /* 129d1aea mov eax, dword ptr [0x129ede20] */
  EAX = (r32((uint32_t)(0x129ede20)));
  /* 129d1aef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 129d1af3 jmp 0x129d1afe */
  goto L_129d1afe;
L_129d1af5:;
  /* 129d1af5 mov ecx, dword ptr [0x129ede20] */
  ECX = (r32((uint32_t)(0x129ede20)));
  /* 129d1afb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_129d1afe:;
  /* 129d1afe jmp 0x129d1d27 */
  goto L_129d1d27;
L_129d1b03:;
  /* 129d1b03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d1b0b je 0x129d1b2d */
  if (C.zf) goto L_129d1b2d;
  /* 129d1b0d cmp dword ptr [0x129ee7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1b14 je 0x129d1b3c */
  if (C.zf) goto L_129d1b3c;
  /* 129d1b16 mov ecx, dword ptr [0x129ee7e4] */
  ECX = (r32((uint32_t)(0x129ee7e4)));
  /* 129d1b1c push ecx */
  push32((uint32_t)(ECX));
  /* 129d1b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1b20 push edx */
  push32((uint32_t)(EDX));
  /* 129d1b21 call 0x129ceab0 */
  push32(0x129d1b26u); f_129ceab0();
  /* 129d1b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d1b2b jne 0x129d1b3c */
  if (!C.zf) goto L_129d1b3c;
L_129d1b2d:;
  /* 129d1b2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d1b2f call 0x129c68c0 */
  push32(0x129d1b34u); f_129c68c0();
  /* 129d1b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b37 jmp 0x129d1d27 */
  goto L_129d1d27;
L_129d1b3c:;
  /* 129d1b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1b3e mov eax, dword ptr [0x129ee7e4] */
  EAX = (r32((uint32_t)(0x129ee7e4)));
  /* 129d1b43 push eax */
  push32((uint32_t)(EAX));
  /* 129d1b44 call 0x129c38b0 */
  push32(0x129d1b49u); f_129c38b0();
  /* 129d1b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 129d1b51 push 0x129ea868 */
  push32((uint32_t)(0x129ea868u));
  /* 129d1b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1b5b push ecx */
  push32((uint32_t)(ECX));
  /* 129d1b5c call 0x129c5c50 */
  push32(0x129d1b61u); f_129c5c50();
  /* 129d1b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b67 push eax */
  push32((uint32_t)(EAX));
  /* 129d1b68 call 0x129c2e20 */
  push32(0x129d1b6du); f_129c2e20();
  /* 129d1b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b70 mov dword ptr [0x129ee7e4], eax */
  w32((uint32_t)(0x129ee7e4), (EAX));
  /* 129d1b75 cmp dword ptr [0x129ee7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1b7c jne 0x129d1b8d */
  if (!C.zf) goto L_129d1b8d;
  /* 129d1b7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d1b80 call 0x129c68c0 */
  push32(0x129d1b85u); f_129c68c0();
  /* 129d1b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b88 jmp 0x129d1d27 */
  goto L_129d1d27;
L_129d1b8d:;
  /* 129d1b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1b90 push edx */
  push32((uint32_t)(EDX));
  /* 129d1b91 mov eax, dword ptr [0x129ee7e4] */
  EAX = (r32((uint32_t)(0x129ee7e4)));
  /* 129d1b96 push eax */
  push32((uint32_t)(EAX));
  /* 129d1b97 call 0x129c5dd0 */
  push32(0x129d1b9cu); f_129c5dd0();
  /* 129d1b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1b9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d1ba1 call 0x129c68c0 */
  push32(0x129d1ba6u); f_129c68c0();
  /* 129d1ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1ba9 push 3 */
  push32((uint32_t)(0x3u));
  /* 129d1bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1bae push ecx */
  push32((uint32_t)(ECX));
  /* 129d1baf mov edx, dword ptr [0x129ede1c] */
  EDX = (r32((uint32_t)(0x129ede1c)));
  /* 129d1bb5 push edx */
  push32((uint32_t)(EDX));
  /* 129d1bb6 call 0x129c6640 */
  push32(0x129d1bbbu); f_129c6640();
  /* 129d1bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1bbe mov eax, dword ptr [0x129ede1c] */
  EAX = (r32((uint32_t)(0x129ede1c)));
  /* 129d1bc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 129d1bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1bca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1bcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1bd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1bd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1bd9 jne 0x129d1bed */
  if (!C.zf) goto L_129d1bed;
  /* 129d1bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d1bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1be1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d1be4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1be7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1bea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129d1bed:;
  /* 129d1bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1bf0 push eax */
  push32((uint32_t)(EAX));
  /* 129d1bf1 call 0x129d16d0 */
  push32(0x129d1bf6u); f_129d16d0();
  /* 129d1bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1bf9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1bff mov dword ptr [0x129edd90], eax */
  w32((uint32_t)(0x129edd90), (EAX));
L_129d1c04:;
  /* 129d1c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d1c0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c0d je 0x129d1c25 */
  if (C.zf) goto L_129d1c25;
  /* 129d1c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d1c15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c18 jl 0x129d1c30 */
  if ((C.sf!=C.of)) goto L_129d1c30;
  /* 129d1c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1c20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c23 jg 0x129d1c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d1c30;
L_129d1c25:;
  /* 129d1c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1c2e jmp 0x129d1c04 */
  goto L_129d1c04;
L_129d1c30:;
  /* 129d1c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1c36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c39 jne 0x129d1cd5 */
  if (!C.zf) goto L_129d1cd5;
  /* 129d1c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c4b push edx */
  push32((uint32_t)(EDX));
  /* 129d1c4c call 0x129d16d0 */
  push32(0x129d1c51u); f_129d16d0();
  /* 129d1c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d1c57 mov ecx, dword ptr [0x129edd90] */
  ECX = (r32((uint32_t)(0x129edd90)));
  /* 129d1c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c5f mov dword ptr [0x129edd90], ecx */
  w32((uint32_t)(0x129edd90), (ECX));
L_129d1c65:;
  /* 129d1c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1c6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c6e jl 0x129d1c86 */
  if ((C.sf!=C.of)) goto L_129d1c86;
  /* 129d1c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d1c76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c79 jg 0x129d1c86 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d1c86;
  /* 129d1c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d1c84 jmp 0x129d1c65 */
  goto L_129d1c65;
L_129d1c86:;
  /* 129d1c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d1c8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1c8f jne 0x129d1cd5 */
  if (!C.zf) goto L_129d1cd5;
  /* 129d1c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1c97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d1c9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1c9d push ecx */
  push32((uint32_t)(ECX));
  /* 129d1c9e call 0x129d16d0 */
  push32(0x129d1ca3u); f_129d16d0();
  /* 129d1ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1ca6 mov edx, dword ptr [0x129edd90] */
  EDX = (r32((uint32_t)(0x129edd90)));
  /* 129d1cac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1cae mov dword ptr [0x129edd90], edx */
  w32((uint32_t)(0x129edd90), (EDX));
L_129d1cb4:;
  /* 129d1cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1cb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d1cba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1cbd jl 0x129d1cd5 */
  if ((C.sf!=C.of)) goto L_129d1cd5;
  /* 129d1cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129d1cc5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1cc8 jg 0x129d1cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d1cd5;
  /* 129d1cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d1cd3 jmp 0x129d1cb4 */
  goto L_129d1cb4;
L_129d1cd5:;
  /* 129d1cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1cd9 je 0x129d1ce9 */
  if (C.zf) goto L_129d1ce9;
  /* 129d1cdb mov edx, dword ptr [0x129edd90] */
  EDX = (r32((uint32_t)(0x129edd90)));
  /* 129d1ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d1ce3 mov dword ptr [0x129edd90], edx */
  w32((uint32_t)(0x129edd90), (EDX));
L_129d1ce9:;
  /* 129d1ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129d1cef mov dword ptr [0x129edd94], ecx */
  w32((uint32_t)(0x129edd94), (ECX));
  /* 129d1cf5 cmp dword ptr [0x129edd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129edd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1cfc je 0x129d1d1e */
  if (C.zf) goto L_129d1d1e;
  /* 129d1cfe push 3 */
  push32((uint32_t)(0x3u));
  /* 129d1d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d1d03 push edx */
  push32((uint32_t)(EDX));
  /* 129d1d04 mov eax, dword ptr [0x129ede20] */
  EAX = (r32((uint32_t)(0x129ede20)));
  /* 129d1d09 push eax */
  push32((uint32_t)(EAX));
  /* 129d1d0a call 0x129c6640 */
  push32(0x129d1d0fu); f_129c6640();
  /* 129d1d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1d12 mov ecx, dword ptr [0x129ede20] */
  ECX = (r32((uint32_t)(0x129ede20)));
  /* 129d1d18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 129d1d1c jmp 0x129d1d27 */
  goto L_129d1d27;
L_129d1d1e:;
  /* 129d1d1e mov edx, dword ptr [0x129ede20] */
  EDX = (r32((uint32_t)(0x129ede20)));
  /* 129d1d24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_129d1d27:;
  /* 129d1d27 mov esp, ebp */
  ESP = (EBP);
  /* 129d1d29 pop ebp */
  EBP = (pop32());
  /* 129d1d2a ret  */
  ESPCHK(0x129d1980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x129d1d30 (46 bytes, 18 insns) */
void f_129d1d30(void) {
  FTRACE(0x129d1d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1d30 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1d31 mov ebp, esp */
  EBP = (ESP);
  /* 129d1d33 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1d34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d1d36 call 0x129c6820 */
  push32(0x129d1d3bu); f_129c6820();
  /* 129d1d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1d41 push eax */
  push32((uint32_t)(EAX));
  /* 129d1d42 call 0x129d1d60 */
  push32(0x129d1d47u); f_129d1d60();
  /* 129d1d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d1d4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 129d1d4f call 0x129c68c0 */
  push32(0x129d1d54u); f_129c68c0();
  /* 129d1d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d1d5a mov esp, ebp */
  ESP = (EBP);
  /* 129d1d5c pop ebp */
  EBP = (pop32());
  /* 129d1d5d ret  */
  ESPCHK(0x129d1d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x129d1d60 (762 bytes, 246 insns) */
void f_129d1d60(void) {
  FTRACE(0x129d1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 129d1d61 mov ebp, esp */
  EBP = (ESP);
  /* 129d1d63 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1d64 cmp dword ptr [0x129edd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129edd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1d6b jne 0x129d1d74 */
  if (!C.zf) goto L_129d1d74;
  /* 129d1d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1d6f jmp 0x129d2056 */
  goto L_129d2056;
L_129d1d74:;
  /* 129d1d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1d77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129d1d7a cmp ecx, dword ptr [0x129ede28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ede28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1d80 jne 0x129d1d94 */
  if (!C.zf) goto L_129d1d94;
  /* 129d1d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129d1d88 cmp eax, dword ptr [0x129ede38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ede38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1d8e je 0x129d1f5b */
  if (C.zf) goto L_129d1f5b;
L_129d1d94:;
  /* 129d1d94 cmp dword ptr [0x129ee730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1d9b je 0x129d1f15 */
  if (C.zf) goto L_129d1f15;
  /* 129d1da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1da3 mov cx, word ptr [0x129ee7d0] */
  CX = (r16((uint32_t)(0x129ee7d0)));
  /* 129d1daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d1dac jne 0x129d1e09 */
  if (!C.zf) goto L_129d1e09;
  /* 129d1dae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1db0 mov dx, word ptr [0x129ee7de] */
  DX = (r16((uint32_t)(0x129ee7de)));
  /* 129d1db7 push edx */
  push32((uint32_t)(EDX));
  /* 129d1db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1dba mov ax, word ptr [0x129ee7dc] */
  AX = (r16((uint32_t)(0x129ee7dc)));
  /* 129d1dc0 push eax */
  push32((uint32_t)(EAX));
  /* 129d1dc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1dc3 mov cx, word ptr [0x129ee7da] */
  CX = (r16((uint32_t)(0x129ee7da)));
  /* 129d1dca push ecx */
  push32((uint32_t)(ECX));
  /* 129d1dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1dcd mov dx, word ptr [0x129ee7d8] */
  DX = (r16((uint32_t)(0x129ee7d8)));
  /* 129d1dd4 push edx */
  push32((uint32_t)(EDX));
  /* 129d1dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1dd9 mov ax, word ptr [0x129ee7d4] */
  AX = (r16((uint32_t)(0x129ee7d4)));
  /* 129d1ddf push eax */
  push32((uint32_t)(EAX));
  /* 129d1de0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1de2 mov cx, word ptr [0x129ee7d6] */
  CX = (r16((uint32_t)(0x129ee7d6)));
  /* 129d1de9 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1dea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1dec mov dx, word ptr [0x129ee7d2] */
  DX = (r16((uint32_t)(0x129ee7d2)));
  /* 129d1df3 push edx */
  push32((uint32_t)(EDX));
  /* 129d1df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129d1dfa push ecx */
  push32((uint32_t)(ECX));
  /* 129d1dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1dff call 0x129d2060 */
  push32(0x129d1e04u); f_129d2060();
  /* 129d1e04 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1e07 jmp 0x129d1e5a */
  goto L_129d1e5a;
L_129d1e09:;
  /* 129d1e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1e0b mov dx, word ptr [0x129ee7de] */
  DX = (r16((uint32_t)(0x129ee7de)));
  /* 129d1e12 push edx */
  push32((uint32_t)(EDX));
  /* 129d1e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1e15 mov ax, word ptr [0x129ee7dc] */
  AX = (r16((uint32_t)(0x129ee7dc)));
  /* 129d1e1b push eax */
  push32((uint32_t)(EAX));
  /* 129d1e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1e1e mov cx, word ptr [0x129ee7da] */
  CX = (r16((uint32_t)(0x129ee7da)));
  /* 129d1e25 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1e28 mov dx, word ptr [0x129ee7d8] */
  DX = (r16((uint32_t)(0x129ee7d8)));
  /* 129d1e2f push edx */
  push32((uint32_t)(EDX));
  /* 129d1e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1e32 mov ax, word ptr [0x129ee7d6] */
  AX = (r16((uint32_t)(0x129ee7d6)));
  /* 129d1e38 push eax */
  push32((uint32_t)(EAX));
  /* 129d1e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1e3f mov cx, word ptr [0x129ee7d2] */
  CX = (r16((uint32_t)(0x129ee7d2)));
  /* 129d1e46 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129d1e4d push eax */
  push32((uint32_t)(EAX));
  /* 129d1e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1e52 call 0x129d2060 */
  push32(0x129d1e57u); f_129d2060();
  /* 129d1e57 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d1e5a:;
  /* 129d1e5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1e5c mov cx, word ptr [0x129ee77c] */
  CX = (r16((uint32_t)(0x129ee77c)));
  /* 129d1e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d1e65 jne 0x129d1ec2 */
  if (!C.zf) goto L_129d1ec2;
  /* 129d1e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1e69 mov dx, word ptr [0x129ee78a] */
  DX = (r16((uint32_t)(0x129ee78a)));
  /* 129d1e70 push edx */
  push32((uint32_t)(EDX));
  /* 129d1e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1e73 mov ax, word ptr [0x129ee788] */
  AX = (r16((uint32_t)(0x129ee788)));
  /* 129d1e79 push eax */
  push32((uint32_t)(EAX));
  /* 129d1e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1e7c mov cx, word ptr [0x129ee786] */
  CX = (r16((uint32_t)(0x129ee786)));
  /* 129d1e83 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1e86 mov dx, word ptr [0x129ee784] */
  DX = (r16((uint32_t)(0x129ee784)));
  /* 129d1e8d push edx */
  push32((uint32_t)(EDX));
  /* 129d1e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1e92 mov ax, word ptr [0x129ee780] */
  AX = (r16((uint32_t)(0x129ee780)));
  /* 129d1e98 push eax */
  push32((uint32_t)(EAX));
  /* 129d1e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1e9b mov cx, word ptr [0x129ee782] */
  CX = (r16((uint32_t)(0x129ee782)));
  /* 129d1ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1ea5 mov dx, word ptr [0x129ee77e] */
  DX = (r16((uint32_t)(0x129ee77e)));
  /* 129d1eac push edx */
  push32((uint32_t)(EDX));
  /* 129d1ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1eb0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129d1eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d1eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1eb8 call 0x129d2060 */
  push32(0x129d1ebdu); f_129d2060();
  /* 129d1ebd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1ec0 jmp 0x129d1f13 */
  goto L_129d1f13;
L_129d1ec2:;
  /* 129d1ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1ec4 mov dx, word ptr [0x129ee78a] */
  DX = (r16((uint32_t)(0x129ee78a)));
  /* 129d1ecb push edx */
  push32((uint32_t)(EDX));
  /* 129d1ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1ece mov ax, word ptr [0x129ee788] */
  AX = (r16((uint32_t)(0x129ee788)));
  /* 129d1ed4 push eax */
  push32((uint32_t)(EAX));
  /* 129d1ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1ed7 mov cx, word ptr [0x129ee786] */
  CX = (r16((uint32_t)(0x129ee786)));
  /* 129d1ede push ecx */
  push32((uint32_t)(ECX));
  /* 129d1edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d1ee1 mov dx, word ptr [0x129ee784] */
  DX = (r16((uint32_t)(0x129ee784)));
  /* 129d1ee8 push edx */
  push32((uint32_t)(EDX));
  /* 129d1ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1eeb mov ax, word ptr [0x129ee782] */
  AX = (r16((uint32_t)(0x129ee782)));
  /* 129d1ef1 push eax */
  push32((uint32_t)(EAX));
  /* 129d1ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d1ef8 mov cx, word ptr [0x129ee77e] */
  CX = (r16((uint32_t)(0x129ee77e)));
  /* 129d1eff push ecx */
  push32((uint32_t)(ECX));
  /* 129d1f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129d1f06 push eax */
  push32((uint32_t)(EAX));
  /* 129d1f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f0b call 0x129d2060 */
  push32(0x129d1f10u); f_129d2060();
  /* 129d1f10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d1f13:;
  /* 129d1f13 jmp 0x129d1f5b */
  goto L_129d1f5b;
L_129d1f15:;
  /* 129d1f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1f23 push 4 */
  push32((uint32_t)(0x4u));
  /* 129d1f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129d1f2b push edx */
  push32((uint32_t)(EDX));
  /* 129d1f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1f30 call 0x129d2060 */
  push32(0x129d1f35u); f_129d2060();
  /* 129d1f35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d1f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 129d1f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f44 push 5 */
  push32((uint32_t)(0x5u));
  /* 129d1f46 push 0xa */
  push32((uint32_t)(0xau));
  /* 129d1f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129d1f4e push ecx */
  push32((uint32_t)(ECX));
  /* 129d1f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 129d1f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d1f53 call 0x129d2060 */
  push32(0x129d1f58u); f_129d2060();
  /* 129d1f58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d1f5b:;
  /* 129d1f5b mov edx, dword ptr [0x129ede2c] */
  EDX = (r32((uint32_t)(0x129ede2c)));
  /* 129d1f61 cmp edx, dword ptr [0x129ede3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ede3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1f67 jge 0x129d1fb4 */
  if ((C.sf==C.of)) goto L_129d1fb4;
  /* 129d1f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129d1f6f cmp ecx, dword ptr [0x129ede2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ede2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1f75 jl 0x129d1f85 */
  if ((C.sf!=C.of)) goto L_129d1f85;
  /* 129d1f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129d1f7d cmp eax, dword ptr [0x129ede3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ede3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1f83 jle 0x129d1f8c */
  if ((C.zf||C.sf!=C.of)) goto L_129d1f8c;
L_129d1f85:;
  /* 129d1f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1f87 jmp 0x129d2056 */
  goto L_129d2056;
L_129d1f8c:;
  /* 129d1f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129d1f92 cmp edx, dword ptr [0x129ede2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ede2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1f98 jle 0x129d1fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_129d1fb2;
  /* 129d1f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1f9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129d1fa0 cmp ecx, dword ptr [0x129ede3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ede3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1fa6 jge 0x129d1fb2 */
  if ((C.sf==C.of)) goto L_129d1fb2;
  /* 129d1fa8 mov eax, 1 */
  EAX = (0x1u);
  /* 129d1fad jmp 0x129d2056 */
  goto L_129d2056;
L_129d1fb2:;
  /* 129d1fb2 jmp 0x129d1ff7 */
  goto L_129d1ff7;
L_129d1fb4:;
  /* 129d1fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1fb7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129d1fba cmp eax, dword ptr [0x129ede3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ede3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1fc0 jl 0x129d1fd0 */
  if ((C.sf!=C.of)) goto L_129d1fd0;
  /* 129d1fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1fc5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129d1fc8 cmp edx, dword ptr [0x129ede2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ede2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1fce jle 0x129d1fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_129d1fd7;
L_129d1fd0:;
  /* 129d1fd0 mov eax, 1 */
  EAX = (0x1u);
  /* 129d1fd5 jmp 0x129d2056 */
  goto L_129d2056;
L_129d1fd7:;
  /* 129d1fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1fda mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129d1fdd cmp ecx, dword ptr [0x129ede3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ede3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1fe3 jle 0x129d1ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_129d1ff7;
  /* 129d1fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1fe8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129d1feb cmp eax, dword ptr [0x129ede2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ede2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d1ff1 jge 0x129d1ff7 */
  if ((C.sf==C.of)) goto L_129d1ff7;
  /* 129d1ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d1ff5 jmp 0x129d2056 */
  goto L_129d2056;
L_129d1ff7:;
  /* 129d1ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d1ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129d1ffd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d2000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d2005 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d200a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129d200d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d2013 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2015 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d201b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d201e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2021 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129d2024 cmp edx, dword ptr [0x129ede2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ede2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d202a jne 0x129d2042 */
  if (!C.zf) goto L_129d2042;
  /* 129d202c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d202f cmp eax, dword ptr [0x129ede30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ede30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2035 jl 0x129d203e */
  if ((C.sf!=C.of)) goto L_129d203e;
  /* 129d2037 mov eax, 1 */
  EAX = (0x1u);
  /* 129d203c jmp 0x129d2056 */
  goto L_129d2056;
L_129d203e:;
  /* 129d203e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2040 jmp 0x129d2056 */
  goto L_129d2056;
L_129d2042:;
  /* 129d2042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2045 cmp ecx, dword ptr [0x129ede40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ede40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d204b jge 0x129d2054 */
  if ((C.sf==C.of)) goto L_129d2054;
  /* 129d204d mov eax, 1 */
  EAX = (0x1u);
  /* 129d2052 jmp 0x129d2056 */
  goto L_129d2056;
L_129d2054:;
  /* 129d2054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d2056:;
  /* 129d2056 mov esp, ebp */
  ESP = (EBP);
  /* 129d2058 pop ebp */
  EBP = (pop32());
  /* 129d2059 ret  */
  ESPCHK(0x129d1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x129d2060 (504 bytes, 145 insns) */
void f_129d2060(void) {
  FTRACE(0x129d2060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2060 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2061 mov ebp, esp */
  EBP = (ESP);
  /* 129d2063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2066 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d206a jne 0x129d213c */
  if (!C.zf) goto L_129d213c;
  /* 129d2070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2073 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129d2076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2078 jne 0x129d2089 */
  if (!C.zf) goto L_129d2089;
  /* 129d207a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d207d mov edx, dword ptr [ecx*4 + 0x129ede4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129ede4c)));
  /* 129d2084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129d2087 jmp 0x129d2096 */
  goto L_129d2096;
L_129d2089:;
  /* 129d2089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d208c mov ecx, dword ptr [eax*4 + 0x129ede80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ede80)));
  /* 129d2093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_129d2096:;
  /* 129d2096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d209c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129d209f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d20a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d20a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d20ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d20ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d20b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d20b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d20b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 129d20b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 129d20bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129d20be mov ecx, 7 */
  ECX = (0x7u);
  /* 129d20c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129d20c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d20c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d20cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d20ce jge 0x129d20e9 */
  if ((C.sf==C.of)) goto L_129d20e9;
  /* 129d20d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d20d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d20d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d20d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d20dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d20df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d20e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d20e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129d20e7 jmp 0x129d20fd */
  goto L_129d20fd;
L_129d20e9:;
  /* 129d20e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d20ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d20ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d20f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d20f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d20f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d20fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129d20fd:;
  /* 129d20fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2101 jne 0x129d213a */
  if (!C.zf) goto L_129d213a;
  /* 129d2103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2106 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 129d2109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d210b jne 0x129d211c */
  if (!C.zf) goto L_129d211c;
  /* 129d210d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2110 mov eax, dword ptr [edx*4 + 0x129ede50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ede50)));
  /* 129d2117 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129d211a jmp 0x129d2129 */
  goto L_129d2129;
L_129d211c:;
  /* 129d211c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d211f mov edx, dword ptr [ecx*4 + 0x129ede84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129ede84)));
  /* 129d2126 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129d2129:;
  /* 129d2129 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d212c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d212f jle 0x129d213a */
  if ((C.zf||C.sf!=C.of)) goto L_129d213a;
  /* 129d2131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2134 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2137 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129d213a:;
  /* 129d213a jmp 0x129d2171 */
  goto L_129d2171;
L_129d213c:;
  /* 129d213c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d213f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129d2142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2144 jne 0x129d2155 */
  if (!C.zf) goto L_129d2155;
  /* 129d2146 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2149 mov ecx, dword ptr [eax*4 + 0x129ede4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ede4c)));
  /* 129d2150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129d2153 jmp 0x129d2162 */
  goto L_129d2162;
L_129d2155:;
  /* 129d2155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2158 mov eax, dword ptr [edx*4 + 0x129ede80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ede80)));
  /* 129d215f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_129d2162:;
  /* 129d2162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d2165 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129d2168 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d216b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d216e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129d2171:;
  /* 129d2171 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2175 jne 0x129d21b1 */
  if (!C.zf) goto L_129d21b1;
  /* 129d2177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d217a mov dword ptr [0x129ede2c], eax */
  w32((uint32_t)(0x129ede2c), (EAX));
  /* 129d217f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 129d2182 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d2185 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 129d2188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d218a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d218d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 129d2190 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2192 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d2198 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 129d219b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d219d mov dword ptr [0x129ede30], ecx */
  w32((uint32_t)(0x129ede30), (ECX));
  /* 129d21a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d21a6 mov dword ptr [0x129ede28], edx */
  w32((uint32_t)(0x129ede28), (EDX));
  /* 129d21ac jmp 0x129d2254 */
  goto L_129d2254;
L_129d21b1:;
  /* 129d21b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d21b4 mov dword ptr [0x129ede3c], eax */
  w32((uint32_t)(0x129ede3c), (EAX));
  /* 129d21b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 129d21bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d21bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 129d21c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d21c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d21c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 129d21ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d21cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d21d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 129d21d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d21d7 mov dword ptr [0x129ede40], ecx */
  w32((uint32_t)(0x129ede40), (ECX));
  /* 129d21dd mov edx, dword ptr [0x129edd98] */
  EDX = (r32((uint32_t)(0x129edd98)));
  /* 129d21e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129d21e9 mov eax, dword ptr [0x129ede40] */
  EAX = (r32((uint32_t)(0x129ede40)));
  /* 129d21ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d21f0 mov dword ptr [0x129ede40], eax */
  w32((uint32_t)(0x129ede40), (EAX));
  /* 129d21f5 cmp dword ptr [0x129ede40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ede40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d21fc jge 0x129d2221 */
  if ((C.sf==C.of)) goto L_129d2221;
  /* 129d21fe mov ecx, dword ptr [0x129ede40] */
  ECX = (r32((uint32_t)(0x129ede40)));
  /* 129d2204 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d220a mov dword ptr [0x129ede40], ecx */
  w32((uint32_t)(0x129ede40), (ECX));
  /* 129d2210 mov edx, dword ptr [0x129ede3c] */
  EDX = (r32((uint32_t)(0x129ede3c)));
  /* 129d2216 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2219 mov dword ptr [0x129ede3c], edx */
  w32((uint32_t)(0x129ede3c), (EDX));
  /* 129d221f jmp 0x129d224b */
  goto L_129d224b;
L_129d2221:;
  /* 129d2221 cmp dword ptr [0x129ede40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x129ede40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d222b jl 0x129d224b */
  if ((C.sf!=C.of)) goto L_129d224b;
  /* 129d222d mov eax, dword ptr [0x129ede40] */
  EAX = (r32((uint32_t)(0x129ede40)));
  /* 129d2232 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2237 mov dword ptr [0x129ede40], eax */
  w32((uint32_t)(0x129ede40), (EAX));
  /* 129d223c mov ecx, dword ptr [0x129ede3c] */
  ECX = (r32((uint32_t)(0x129ede3c)));
  /* 129d2242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2245 mov dword ptr [0x129ede3c], ecx */
  w32((uint32_t)(0x129ede3c), (ECX));
L_129d224b:;
  /* 129d224b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d224e mov dword ptr [0x129ede38], edx */
  w32((uint32_t)(0x129ede38), (EDX));
L_129d2254:;
  /* 129d2254 mov esp, ebp */
  ESP = (EBP);
  /* 129d2256 pop ebp */
  EBP = (pop32());
  /* 129d2257 ret  */
  ESPCHK(0x129d2060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x129d2260 (382 bytes, 135 insns) */
void f_129d2260(void) {
  FTRACE(0x129d2260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2260 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2261 mov ebp, esp */
  EBP = (ESP);
  /* 129d2263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d2265 push 0x129ea878 */
  push32((uint32_t)(0x129ea878u));
  /* 129d226a push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129d226f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129d2275 push eax */
  push32((uint32_t)(EAX));
  /* 129d2276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129d227d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2280 push ebx */
  push32((uint32_t)(EBX));
  /* 129d2281 push esi */
  push32((uint32_t)(ESI));
  /* 129d2282 push edi */
  push32((uint32_t)(EDI));
  /* 129d2283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d2286 cmp dword ptr [0x129ee7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d228d jne 0x129d22d2 */
  if (!C.zf) goto L_129d22d2;
  /* 129d228f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2291 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2293 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2295 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2297 call dword ptr [0x129f024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f024c))), 0x129d229du);
  /* 129d229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d229f je 0x129d22ad */
  if (C.zf) goto L_129d22ad;
  /* 129d22a1 mov dword ptr [0x129ee7ec], 1 */
  w32((uint32_t)(0x129ee7ec), (0x1u));
  /* 129d22ab jmp 0x129d22d2 */
  goto L_129d22d2;
L_129d22ad:;
  /* 129d22ad push 0 */
  push32((uint32_t)(0x0u));
  /* 129d22af push 0 */
  push32((uint32_t)(0x0u));
  /* 129d22b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d22b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d22b5 call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129d22bbu);
  /* 129d22bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d22bd je 0x129d22cb */
  if (C.zf) goto L_129d22cb;
  /* 129d22bf mov dword ptr [0x129ee7ec], 2 */
  w32((uint32_t)(0x129ee7ec), (0x2u));
  /* 129d22c9 jmp 0x129d22d2 */
  goto L_129d22d2;
L_129d22cb:;
  /* 129d22cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d22cd jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d22d2:;
  /* 129d22d2 cmp dword ptr [0x129ee7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d22d9 jne 0x129d22f6 */
  if (!C.zf) goto L_129d22f6;
  /* 129d22db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d22de push eax */
  push32((uint32_t)(EAX));
  /* 129d22df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d22e2 push ecx */
  push32((uint32_t)(ECX));
  /* 129d22e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d22e6 push edx */
  push32((uint32_t)(EDX));
  /* 129d22e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d22ea push eax */
  push32((uint32_t)(EAX));
  /* 129d22eb call dword ptr [0x129f024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f024c))), 0x129d22f1u);
  /* 129d22f1 jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d22f6:;
  /* 129d22f6 cmp dword ptr [0x129ee7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d22fd jne 0x129d23df */
  if (!C.zf) goto L_129d23df;
  /* 129d2303 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2307 jne 0x129d2312 */
  if (!C.zf) goto L_129d2312;
  /* 129d2309 mov ecx, dword ptr [0x129ee6a0] */
  ECX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d230f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_129d2312:;
  /* 129d2312 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2314 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2319 push edx */
  push32((uint32_t)(EDX));
  /* 129d231a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d231d push eax */
  push32((uint32_t)(EAX));
  /* 129d231e call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129d2324u);
  /* 129d2324 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129d2327 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d232b jne 0x129d2334 */
  if (!C.zf) goto L_129d2334;
  /* 129d232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d232f jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d2334:;
  /* 129d2334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d233b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d233e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d2343 call 0x129c5fc0 */
  push32(0x129d2348u); f_129c5fc0();
  /* 129d2348 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 129d234b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d234e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d2351 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129d2354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d235b jmp 0x129d2374 */
  goto L_129d2374;
  /* 129d235d mov eax, 1 */
  EAX = (0x1u);
  /* 129d2362 ret  */
  ESPCHK(0x129d2260u, _esp0);
  ESP += 4; return;
  /* 129d2363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2366 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129d236d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d2374:;
  /* 129d2374 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2378 jne 0x129d237e */
  if (!C.zf) goto L_129d237e;
  /* 129d237a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d237c jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d237e:;
  /* 129d237e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d2381 push edx */
  push32((uint32_t)(EDX));
  /* 129d2382 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2385 push eax */
  push32((uint32_t)(EAX));
  /* 129d2386 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2389 push ecx */
  push32((uint32_t)(ECX));
  /* 129d238a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d238d push edx */
  push32((uint32_t)(EDX));
  /* 129d238e call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129d2394u);
  /* 129d2394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2396 jne 0x129d239c */
  if (!C.zf) goto L_129d239c;
  /* 129d2398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d239a jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d239c:;
  /* 129d239c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d23a0 jne 0x129d23bd */
  if (!C.zf) goto L_129d23bd;
  /* 129d23a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d23a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d23a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d23a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d23ab push eax */
  push32((uint32_t)(EAX));
  /* 129d23ac push 1 */
  push32((uint32_t)(0x1u));
  /* 129d23ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d23b1 push ecx */
  push32((uint32_t)(ECX));
  /* 129d23b2 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d23b8u);
  /* 129d23b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129d23bb jmp 0x129d23da */
  goto L_129d23da;
L_129d23bd:;
  /* 129d23bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d23c0 push edx */
  push32((uint32_t)(EDX));
  /* 129d23c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d23c4 push eax */
  push32((uint32_t)(EAX));
  /* 129d23c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d23c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d23ca push ecx */
  push32((uint32_t)(ECX));
  /* 129d23cb push 1 */
  push32((uint32_t)(0x1u));
  /* 129d23cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d23d0 push edx */
  push32((uint32_t)(EDX));
  /* 129d23d1 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d23d7u);
  /* 129d23d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129d23da:;
  /* 129d23da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d23dd jmp 0x129d23e1 */
  goto L_129d23e1;
L_129d23df:;
  /* 129d23df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d23e1:;
  /* 129d23e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 129d23e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d23e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129d23ee pop edi */
  EDI = (pop32());
  /* 129d23ef pop esi */
  ESI = (pop32());
  /* 129d23f0 pop ebx */
  EBX = (pop32());
  /* 129d23f1 mov esp, ebp */
  ESP = (EBP);
  /* 129d23f3 pop ebp */
  EBP = (pop32());
  /* 129d23f4 ret  */
  ESPCHK(0x129d2260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x129d2400 (398 bytes, 140 insns) */
void f_129d2400(void) {
  FTRACE(0x129d2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2400 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2401 mov ebp, esp */
  EBP = (ESP);
  /* 129d2403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d2405 push 0x129ea888 */
  push32((uint32_t)(0x129ea888u));
  /* 129d240a push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129d240f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129d2415 push eax */
  push32((uint32_t)(EAX));
  /* 129d2416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129d241d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2420 push ebx */
  push32((uint32_t)(EBX));
  /* 129d2421 push esi */
  push32((uint32_t)(ESI));
  /* 129d2422 push edi */
  push32((uint32_t)(EDI));
  /* 129d2423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d2426 cmp dword ptr [0x129ee7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d242d jne 0x129d2472 */
  if (!C.zf) goto L_129d2472;
  /* 129d242f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2431 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2433 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2435 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2437 call dword ptr [0x129f024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f024c))), 0x129d243du);
  /* 129d243d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d243f je 0x129d244d */
  if (C.zf) goto L_129d244d;
  /* 129d2441 mov dword ptr [0x129ee7f0], 1 */
  w32((uint32_t)(0x129ee7f0), (0x1u));
  /* 129d244b jmp 0x129d2472 */
  goto L_129d2472;
L_129d244d:;
  /* 129d244d push 0 */
  push32((uint32_t)(0x0u));
  /* 129d244f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2451 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2453 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2455 call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129d245bu);
  /* 129d245b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d245d je 0x129d246b */
  if (C.zf) goto L_129d246b;
  /* 129d245f mov dword ptr [0x129ee7f0], 2 */
  w32((uint32_t)(0x129ee7f0), (0x2u));
  /* 129d2469 jmp 0x129d2472 */
  goto L_129d2472;
L_129d246b:;
  /* 129d246b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d246d jmp 0x129d2591 */
  goto L_129d2591;
L_129d2472:;
  /* 129d2472 cmp dword ptr [0x129ee7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2479 jne 0x129d2496 */
  if (!C.zf) goto L_129d2496;
  /* 129d247b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d247e push eax */
  push32((uint32_t)(EAX));
  /* 129d247f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2482 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2486 push edx */
  push32((uint32_t)(EDX));
  /* 129d2487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d248a push eax */
  push32((uint32_t)(EAX));
  /* 129d248b call dword ptr [0x129f0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0264))), 0x129d2491u);
  /* 129d2491 jmp 0x129d2591 */
  goto L_129d2591;
L_129d2496:;
  /* 129d2496 cmp dword ptr [0x129ee7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d249d jne 0x129d258f */
  if (!C.zf) goto L_129d258f;
  /* 129d24a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d24a7 jne 0x129d24b2 */
  if (!C.zf) goto L_129d24b2;
  /* 129d24a9 mov ecx, dword ptr [0x129ee6a0] */
  ECX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d24af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_129d24b2:;
  /* 129d24b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d24b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d24b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d24b9 push edx */
  push32((uint32_t)(EDX));
  /* 129d24ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d24bd push eax */
  push32((uint32_t)(EAX));
  /* 129d24be call dword ptr [0x129f024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f024c))), 0x129d24c4u);
  /* 129d24c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129d24c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d24cb jne 0x129d24d4 */
  if (!C.zf) goto L_129d24d4;
  /* 129d24cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d24cf jmp 0x129d2591 */
  goto L_129d2591;
L_129d24d4:;
  /* 129d24d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d24db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d24de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129d24e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d24e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d24e5 call 0x129c5fc0 */
  push32(0x129d24eau); f_129c5fc0();
  /* 129d24ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 129d24ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d24f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d24f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129d24f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d24fd jmp 0x129d2516 */
  goto L_129d2516;
  /* 129d24ff mov eax, 1 */
  EAX = (0x1u);
  /* 129d2504 ret  */
  ESPCHK(0x129d2400u, _esp0);
  ESP += 4; return;
  /* 129d2505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2508 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129d250f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d2516:;
  /* 129d2516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d251a jne 0x129d2520 */
  if (!C.zf) goto L_129d2520;
  /* 129d251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d251e jmp 0x129d2591 */
  goto L_129d2591;
L_129d2520:;
  /* 129d2520 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d2523 push edx */
  push32((uint32_t)(EDX));
  /* 129d2524 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2527 push eax */
  push32((uint32_t)(EAX));
  /* 129d2528 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d252b push ecx */
  push32((uint32_t)(ECX));
  /* 129d252c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d252f push edx */
  push32((uint32_t)(EDX));
  /* 129d2530 call dword ptr [0x129f024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f024c))), 0x129d2536u);
  /* 129d2536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2538 jne 0x129d253e */
  if (!C.zf) goto L_129d253e;
  /* 129d253a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d253c jmp 0x129d2591 */
  goto L_129d2591;
L_129d253e:;
  /* 129d253e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2542 jne 0x129d2566 */
  if (!C.zf) goto L_129d2566;
  /* 129d2544 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2546 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2548 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d254a push 0 */
  push32((uint32_t)(0x0u));
  /* 129d254c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d254e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2551 push eax */
  push32((uint32_t)(EAX));
  /* 129d2552 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d2557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d255a push ecx */
  push32((uint32_t)(ECX));
  /* 129d255b call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d2561u);
  /* 129d2561 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129d2564 jmp 0x129d258a */
  goto L_129d258a;
L_129d2566:;
  /* 129d2566 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2568 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d256a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d256d push edx */
  push32((uint32_t)(EDX));
  /* 129d256e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2571 push eax */
  push32((uint32_t)(EAX));
  /* 129d2572 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d2574 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2577 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129d257d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2580 push edx */
  push32((uint32_t)(EDX));
  /* 129d2581 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d2587u);
  /* 129d2587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129d258a:;
  /* 129d258a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d258d jmp 0x129d2591 */
  goto L_129d2591;
L_129d258f:;
  /* 129d258f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d2591:;
  /* 129d2591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 129d2594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d2597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129d259e pop edi */
  EDI = (pop32());
  /* 129d259f pop esi */
  ESI = (pop32());
  /* 129d25a0 pop ebx */
  EBX = (pop32());
  /* 129d25a1 mov esp, ebp */
  ESP = (EBP);
  /* 129d25a3 pop ebp */
  EBP = (pop32());
  /* 129d25a4 ret  */
  ESPCHK(0x129d2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x129d25b0 (11 bytes, 6 insns) */
void f_129d25b0(void) {
  FTRACE(0x129d25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d25b1 mov ebp, esp */
  EBP = (ESP);
  /* 129d25b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d25b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d25b9 pop ebp */
  EBP = (pop32());
  /* 129d25ba ret  */
  ESPCHK(0x129d25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x129d25c0 (147 bytes, 43 insns) */
void f_129d25c0(void) {
  FTRACE(0x129d25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d25c1 mov ebp, esp */
  EBP = (ESP);
  /* 129d25c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d25c4 cmp dword ptr [0x129ee690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d25cb jne 0x129d25e7 */
  if (!C.zf) goto L_129d25e7;
  /* 129d25cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d25d1 jl 0x129d25e2 */
  if ((C.sf!=C.of)) goto L_129d25e2;
  /* 129d25d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d25d7 jg 0x129d25e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d25e2;
  /* 129d25d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d25dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d25df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129d25e2:;
  /* 129d25e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d25e5 jmp 0x129d264f */
  goto L_129d264f;
L_129d25e7:;
  /* 129d25e7 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d25ec call dword ptr [0x129f02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a4))), 0x129d25f2u);
  /* 129d25f2 cmp dword ptr [0x129ee80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d25f9 je 0x129d2619 */
  if (C.zf) goto L_129d2619;
  /* 129d25fb push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d2600 call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129d2606u);
  /* 129d2606 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d2608 call 0x129c6820 */
  push32(0x129d260du); f_129c6820();
  /* 129d260d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129d2617 jmp 0x129d2620 */
  goto L_129d2620;
L_129d2619:;
  /* 129d2619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129d2620:;
  /* 129d2620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2623 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2624 call 0x129d2660 */
  push32(0x129d2629u); f_129d2660();
  /* 129d2629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d262c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129d262f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2633 je 0x129d2641 */
  if (C.zf) goto L_129d2641;
  /* 129d2635 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129d2637 call 0x129c68c0 */
  push32(0x129d263cu); f_129c68c0();
  /* 129d263c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d263f jmp 0x129d264c */
  goto L_129d264c;
L_129d2641:;
  /* 129d2641 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129d2646 call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129d264cu);
L_129d264c:;
  /* 129d264c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_129d264f:;
  /* 129d264f mov esp, ebp */
  ESP = (EBP);
  /* 129d2651 pop ebp */
  EBP = (pop32());
  /* 129d2652 ret  */
  ESPCHK(0x129d25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x129d2660 (299 bytes, 91 insns) */
void f_129d2660(void) {
  FTRACE(0x129d2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2660 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2661 mov ebp, esp */
  EBP = (ESP);
  /* 129d2663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2666 cmp dword ptr [0x129ee690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d266d jne 0x129d268c */
  if (!C.zf) goto L_129d268c;
  /* 129d266f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2673 jl 0x129d2684 */
  if ((C.sf!=C.of)) goto L_129d2684;
  /* 129d2675 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2679 jg 0x129d2684 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d2684;
  /* 129d267b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d267e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2681 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129d2684:;
  /* 129d2684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2687 jmp 0x129d2787 */
  goto L_129d2787;
L_129d268c:;
  /* 129d268c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2693 jge 0x129d26d3 */
  if ((C.sf==C.of)) goto L_129d26d3;
  /* 129d2695 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d269c jle 0x129d26b1 */
  if ((C.zf||C.sf!=C.of)) goto L_129d26b1;
  /* 129d269e push 1 */
  push32((uint32_t)(0x1u));
  /* 129d26a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d26a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d26a4 call 0x129c8e30 */
  push32(0x129d26a9u); f_129c8e30();
  /* 129d26a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d26ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129d26af jmp 0x129d26c5 */
  goto L_129d26c5;
L_129d26b1:;
  /* 129d26b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d26b4 mov eax, dword ptr [0x129ecc98] */
  EAX = (r32((uint32_t)(0x129ecc98)));
  /* 129d26b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d26bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129d26bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129d26c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129d26c5:;
  /* 129d26c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d26c9 jne 0x129d26d3 */
  if (!C.zf) goto L_129d26d3;
  /* 129d26cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d26ce jmp 0x129d2787 */
  goto L_129d2787;
L_129d26d3:;
  /* 129d26d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d26d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129d26d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d26df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d26e5 mov eax, dword ptr [0x129ecc98] */
  EAX = (r32((uint32_t)(0x129ecc98)));
  /* 129d26ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d26ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129d26f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 129d26f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d26f8 je 0x129d271c */
  if (C.zf) goto L_129d271c;
  /* 129d26fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d26fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129d2700 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d2706 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 129d2709 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 129d270c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 129d270f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 129d2713 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 129d271a jmp 0x129d272d */
  goto L_129d272d;
L_129d271c:;
  /* 129d271c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 129d271f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 129d2722 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 129d2726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_129d272d:;
  /* 129d272d push 1 */
  push32((uint32_t)(0x1u));
  /* 129d272f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2731 push 3 */
  push32((uint32_t)(0x3u));
  /* 129d2733 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 129d2736 push edx */
  push32((uint32_t)(EDX));
  /* 129d2737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d273a push eax */
  push32((uint32_t)(EAX));
  /* 129d273b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 129d273e push ecx */
  push32((uint32_t)(ECX));
  /* 129d273f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129d2744 mov edx, dword ptr [0x129ee690] */
  EDX = (r32((uint32_t)(0x129ee690)));
  /* 129d274a push edx */
  push32((uint32_t)(EDX));
  /* 129d274b call 0x129cb210 */
  push32(0x129d2750u); f_129cb210();
  /* 129d2750 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d2756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d275a jne 0x129d2761 */
  if (!C.zf) goto L_129d2761;
  /* 129d275c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d275f jmp 0x129d2787 */
  goto L_129d2787;
L_129d2761:;
  /* 129d2761 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2765 jne 0x129d2771 */
  if (!C.zf) goto L_129d2771;
  /* 129d2767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d276a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d276f jmp 0x129d2787 */
  goto L_129d2787;
L_129d2771:;
  /* 129d2771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2779 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 129d277c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129d2782 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129d2785 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_129d2787:;
  /* 129d2787 mov esp, ebp */
  ESP = (EBP);
  /* 129d2789 pop ebp */
  EBP = (pop32());
  /* 129d278a ret  */
  ESPCHK(0x129d2660u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x129d2790 (52 bytes, 19 insns) */
void f_129d2790(void) {
  FTRACE(0x129d2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2790 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129d2794 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129d2798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129d279a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129d279e jne 0x129d27a9 */
  if (!C.zf) goto L_129d27a9;
  /* 129d27a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 129d27a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129d27a6 ret 0x10 */
  ESPCHK(0x129d2790u, _esp0);
  ESP += 20; return;
L_129d27a9:;
  /* 129d27a9 push ebx */
  push32((uint32_t)(EBX));
  /* 129d27aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129d27ac mov ebx, eax */
  EBX = (EAX);
  /* 129d27ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129d27b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129d27b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d27b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129d27bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129d27be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d27c0 pop ebx */
  EBX = (pop32());
  /* 129d27c1 ret 0x10 */
  ESPCHK(0x129d2790u, _esp0);
  ESP += 20; return;
}

/* FUN_100127d0 @ 0x129d27d0 (46 bytes, 18 insns) */
void f_129d27d0(void) {
  FTRACE(0x129d27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d27d1 mov ebp, esp */
  EBP = (ESP);
  /* 129d27d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d27d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d27d6 call 0x129c6820 */
  push32(0x129d27dbu); f_129c6820();
  /* 129d27db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d27de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d27e1 push eax */
  push32((uint32_t)(EAX));
  /* 129d27e2 call 0x129d2800 */
  push32(0x129d27e7u); f_129d2800();
  /* 129d27e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d27ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d27ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 129d27ef call 0x129c68c0 */
  push32(0x129d27f4u); f_129c68c0();
  /* 129d27f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d27f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d27fa mov esp, ebp */
  ESP = (EBP);
  /* 129d27fc pop ebp */
  EBP = (pop32());
  /* 129d27fd ret  */
  ESPCHK(0x129d27d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x129d2800 (198 bytes, 69 insns) */
void f_129d2800(void) {
  FTRACE(0x129d2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2800 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2801 mov ebp, esp */
  EBP = (ESP);
  /* 129d2803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2806 mov eax, dword ptr [0x129ee4ac] */
  EAX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d280b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d280e cmp dword ptr [0x129effa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2815 jne 0x129d281e */
  if (!C.zf) goto L_129d281e;
  /* 129d2817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2819 jmp 0x129d28c2 */
  goto L_129d28c2;
L_129d281e:;
  /* 129d281e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2822 jne 0x129d2846 */
  if (!C.zf) goto L_129d2846;
  /* 129d2824 cmp dword ptr [0x129ee4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d282b je 0x129d2846 */
  if (C.zf) goto L_129d2846;
  /* 129d282d call 0x129d2920 */
  push32(0x129d2832u); f_129d2920();
  /* 129d2832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2834 je 0x129d283d */
  if (C.zf) goto L_129d283d;
  /* 129d2836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2838 jmp 0x129d28c2 */
  goto L_129d28c2;
L_129d283d:;
  /* 129d283d mov ecx, dword ptr [0x129ee4ac] */
  ECX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d2843 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129d2846:;
  /* 129d2846 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d284a je 0x129d28c0 */
  if (C.zf) goto L_129d28c0;
  /* 129d284c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2850 je 0x129d28c0 */
  if (C.zf) goto L_129d28c0;
  /* 129d2852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2855 push edx */
  push32((uint32_t)(EDX));
  /* 129d2856 call 0x129c5c50 */
  push32(0x129d285bu); f_129c5c50();
  /* 129d285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d285e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129d2861:;
  /* 129d2861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2864 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2867 je 0x129d28c0 */
  if (C.zf) goto L_129d28c0;
  /* 129d2869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d286c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d286e push edx */
  push32((uint32_t)(EDX));
  /* 129d286f call 0x129c5c50 */
  push32(0x129d2874u); f_129c5c50();
  /* 129d2874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d287a jbe 0x129d28b5 */
  if ((C.cf||C.zf)) goto L_129d28b5;
  /* 129d287c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d287f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d2881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2884 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 129d2888 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d288b jne 0x129d28b5 */
  if (!C.zf) goto L_129d28b5;
  /* 129d288d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2890 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2894 push edx */
  push32((uint32_t)(EDX));
  /* 129d2895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d289a push ecx */
  push32((uint32_t)(ECX));
  /* 129d289b call 0x129d28d0 */
  push32(0x129d28a0u); f_129d28d0();
  /* 129d28a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d28a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d28a5 jne 0x129d28b5 */
  if (!C.zf) goto L_129d28b5;
  /* 129d28a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d28aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d28ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d28af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 129d28b3 jmp 0x129d28c2 */
  goto L_129d28c2;
L_129d28b5:;
  /* 129d28b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d28b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d28bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129d28be jmp 0x129d2861 */
  goto L_129d2861;
L_129d28c0:;
  /* 129d28c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d28c2:;
  /* 129d28c2 mov esp, ebp */
  ESP = (EBP);
  /* 129d28c4 pop ebp */
  EBP = (pop32());
  /* 129d28c5 ret  */
  ESPCHK(0x129d2800u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x129d28d0 (79 bytes, 32 insns) */
void f_129d28d0(void) {
  FTRACE(0x129d28d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d28d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d28d1 mov ebp, esp */
  EBP = (ESP);
  /* 129d28d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d28d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d28d8 jne 0x129d28de */
  if (!C.zf) goto L_129d28de;
  /* 129d28da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d28dc jmp 0x129d291b */
  goto L_129d291b;
L_129d28de:;
  /* 129d28de mov eax, dword ptr [0x129efb64] */
  EAX = (r32((uint32_t)(0x129efb64)));
  /* 129d28e3 push eax */
  push32((uint32_t)(EAX));
  /* 129d28e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d28e7 push ecx */
  push32((uint32_t)(ECX));
  /* 129d28e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d28eb push edx */
  push32((uint32_t)(EDX));
  /* 129d28ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d28ef push eax */
  push32((uint32_t)(EAX));
  /* 129d28f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d28f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129d28f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d28f6 mov edx, dword ptr [0x129efe04] */
  EDX = (r32((uint32_t)(0x129efe04)));
  /* 129d28fc push edx */
  push32((uint32_t)(EDX));
  /* 129d28fd call 0x129d29d0 */
  push32(0x129d2902u); f_129d29d0();
  /* 129d2902 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d2908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d290c jne 0x129d2915 */
  if (!C.zf) goto L_129d2915;
  /* 129d290e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 129d2913 jmp 0x129d291b */
  goto L_129d291b;
L_129d2915:;
  /* 129d2915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2918 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129d291b:;
  /* 129d291b mov esp, ebp */
  ESP = (EBP);
  /* 129d291d pop ebp */
  EBP = (pop32());
  /* 129d291e ret  */
  ESPCHK(0x129d28d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x129d2920 (174 bytes, 66 insns) */
void f_129d2920(void) {
  FTRACE(0x129d2920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2920 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2921 mov ebp, esp */
  EBP = (ESP);
  /* 129d2923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2926 mov eax, dword ptr [0x129ee4b4] */
  EAX = (r32((uint32_t)(0x129ee4b4)));
  /* 129d292b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129d292e:;
  /* 129d292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2931 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2934 je 0x129d29c8 */
  if (C.zf) goto L_129d29c8;
  /* 129d293a push 0 */
  push32((uint32_t)(0x0u));
  /* 129d293c push 0 */
  push32((uint32_t)(0x0u));
  /* 129d293e push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2940 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2942 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d2944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2947 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d2949 push eax */
  push32((uint32_t)(EAX));
  /* 129d294a push 0 */
  push32((uint32_t)(0x0u));
  /* 129d294c push 1 */
  push32((uint32_t)(0x1u));
  /* 129d294e call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d2954u);
  /* 129d2954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d2957 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d295b jne 0x129d2962 */
  if (!C.zf) goto L_129d2962;
  /* 129d295d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2960 jmp 0x129d29ca */
  goto L_129d29ca;
L_129d2962:;
  /* 129d2962 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 129d2964 push 0x129ea894 */
  push32((uint32_t)(0x129ea894u));
  /* 129d2969 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d296b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d296e push ecx */
  push32((uint32_t)(ECX));
  /* 129d296f call 0x129c2e20 */
  push32(0x129d2974u); f_129c2e20();
  /* 129d2974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d297a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d297e jne 0x129d2985 */
  if (!C.zf) goto L_129d2985;
  /* 129d2980 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2983 jmp 0x129d29ca */
  goto L_129d29ca;
L_129d2985:;
  /* 129d2985 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2987 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d298c push edx */
  push32((uint32_t)(EDX));
  /* 129d298d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2990 push eax */
  push32((uint32_t)(EAX));
  /* 129d2991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d2993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d2998 push edx */
  push32((uint32_t)(EDX));
  /* 129d2999 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d299b push 1 */
  push32((uint32_t)(0x1u));
  /* 129d299d call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129d29a3u);
  /* 129d29a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d29a5 jne 0x129d29ac */
  if (!C.zf) goto L_129d29ac;
  /* 129d29a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d29aa jmp 0x129d29ca */
  goto L_129d29ca;
L_129d29ac:;
  /* 129d29ac push 0 */
  push32((uint32_t)(0x0u));
  /* 129d29ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d29b1 push eax */
  push32((uint32_t)(EAX));
  /* 129d29b2 call 0x129d2e20 */
  push32(0x129d29b7u); f_129d2e20();
  /* 129d29b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d29ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d29bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d29c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d29c3 jmp 0x129d292e */
  goto L_129d292e;
L_129d29c8:;
  /* 129d29c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d29ca:;
  /* 129d29ca mov esp, ebp */
  ESP = (EBP);
  /* 129d29cc pop ebp */
  EBP = (pop32());
  /* 129d29cd ret  */
  ESPCHK(0x129d2920u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x129d29d0 (970 bytes, 340 insns) */
void f_129d29d0(void) {
  FTRACE(0x129d29d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d29d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d29d1 mov ebp, esp */
  EBP = (ESP);
  /* 129d29d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129d29d5 push 0x129ea8e8 */
  push32((uint32_t)(0x129ea8e8u));
  /* 129d29da push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129d29df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129d29e5 push eax */
  push32((uint32_t)(EAX));
  /* 129d29e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129d29ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d29f0 push ebx */
  push32((uint32_t)(EBX));
  /* 129d29f1 push esi */
  push32((uint32_t)(ESI));
  /* 129d29f2 push edi */
  push32((uint32_t)(EDI));
  /* 129d29f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d29f6 cmp dword ptr [0x129ee7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d29fd jne 0x129d2a56 */
  if (!C.zf) goto L_129d2a56;
  /* 129d29ff push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2a01 push 0x129e9f44 */
  push32((uint32_t)(0x129e9f44u));
  /* 129d2a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2a08 push 0x129e9f44 */
  push32((uint32_t)(0x129e9f44u));
  /* 129d2a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2a11 call dword ptr [0x129f0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0248))), 0x129d2a17u);
  /* 129d2a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2a19 je 0x129d2a27 */
  if (C.zf) goto L_129d2a27;
  /* 129d2a1b mov dword ptr [0x129ee7f4], 1 */
  w32((uint32_t)(0x129ee7f4), (0x1u));
  /* 129d2a25 jmp 0x129d2a56 */
  goto L_129d2a56;
L_129d2a27:;
  /* 129d2a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2a29 push 0x129e9f40 */
  push32((uint32_t)(0x129e9f40u));
  /* 129d2a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2a30 push 0x129e9f40 */
  push32((uint32_t)(0x129e9f40u));
  /* 129d2a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2a39 call dword ptr [0x129f0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0254))), 0x129d2a3fu);
  /* 129d2a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2a41 je 0x129d2a4f */
  if (C.zf) goto L_129d2a4f;
  /* 129d2a43 mov dword ptr [0x129ee7f4], 2 */
  w32((uint32_t)(0x129ee7f4), (0x2u));
  /* 129d2a4d jmp 0x129d2a56 */
  goto L_129d2a56;
L_129d2a4f:;
  /* 129d2a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2a51 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2a56:;
  /* 129d2a56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2a5a jle 0x129d2a6f */
  if ((C.zf||C.sf!=C.of)) goto L_129d2a6f;
  /* 129d2a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2a5f push eax */
  push32((uint32_t)(EAX));
  /* 129d2a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2a64 call 0x129d2dd0 */
  push32(0x129d2a69u); f_129d2dd0();
  /* 129d2a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2a6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_129d2a6f:;
  /* 129d2a6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2a73 jle 0x129d2a88 */
  if ((C.zf||C.sf!=C.of)) goto L_129d2a88;
  /* 129d2a75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d2a78 push edx */
  push32((uint32_t)(EDX));
  /* 129d2a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2a7c push eax */
  push32((uint32_t)(EAX));
  /* 129d2a7d call 0x129d2dd0 */
  push32(0x129d2a82u); f_129d2dd0();
  /* 129d2a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2a85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_129d2a88:;
  /* 129d2a88 cmp dword ptr [0x129ee7f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2a8f jne 0x129d2ab4 */
  if (!C.zf) goto L_129d2ab4;
  /* 129d2a91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d2a94 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2a98 push edx */
  push32((uint32_t)(EDX));
  /* 129d2a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2a9c push eax */
  push32((uint32_t)(EAX));
  /* 129d2a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2aa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2aa4 push edx */
  push32((uint32_t)(EDX));
  /* 129d2aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2aa8 push eax */
  push32((uint32_t)(EAX));
  /* 129d2aa9 call dword ptr [0x129f0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0254))), 0x129d2aafu);
  /* 129d2aaf jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2ab4:;
  /* 129d2ab4 cmp dword ptr [0x129ee7f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee7f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2abb jne 0x129d2db2 */
  if (!C.zf) goto L_129d2db2;
  /* 129d2ac1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ac5 jne 0x129d2ad0 */
  if (!C.zf) goto L_129d2ad0;
  /* 129d2ac7 mov ecx, dword ptr [0x129ee6a0] */
  ECX = (r32((uint32_t)(0x129ee6a0)));
  /* 129d2acd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_129d2ad0:;
  /* 129d2ad0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ad4 je 0x129d2ae0 */
  if (C.zf) goto L_129d2ae0;
  /* 129d2ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ada jne 0x129d2c5c */
  if (!C.zf) goto L_129d2c5c;
L_129d2ae0:;
  /* 129d2ae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2ae3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ae6 jne 0x129d2af2 */
  if (!C.zf) goto L_129d2af2;
  /* 129d2ae8 mov eax, 2 */
  EAX = (0x2u);
  /* 129d2aed jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2af2:;
  /* 129d2af2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2af6 jle 0x129d2b02 */
  if ((C.zf||C.sf!=C.of)) goto L_129d2b02;
  /* 129d2af8 mov eax, 1 */
  EAX = (0x1u);
  /* 129d2afd jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2b02:;
  /* 129d2b02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b06 jle 0x129d2b12 */
  if ((C.zf||C.sf!=C.of)) goto L_129d2b12;
  /* 129d2b08 mov eax, 3 */
  EAX = (0x3u);
  /* 129d2b0d jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2b12:;
  /* 129d2b12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 129d2b15 push eax */
  push32((uint32_t)(EAX));
  /* 129d2b16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 129d2b19 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2b1a call dword ptr [0x129f033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f033c))), 0x129d2b20u);
  /* 129d2b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2b22 jne 0x129d2b2b */
  if (!C.zf) goto L_129d2b2b;
  /* 129d2b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2b26 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2b2b:;
  /* 129d2b2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b2f jne 0x129d2b37 */
  if (!C.zf) goto L_129d2b37;
  /* 129d2b31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b35 je 0x129d2b64 */
  if (C.zf) goto L_129d2b64;
L_129d2b37:;
  /* 129d2b37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b3b jne 0x129d2b43 */
  if (!C.zf) goto L_129d2b43;
  /* 129d2b3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b41 je 0x129d2b64 */
  if (C.zf) goto L_129d2b64;
L_129d2b43:;
  /* 129d2b43 push 0x129ea8a8 */
  push32((uint32_t)(0x129ea8a8u));
  /* 129d2b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2b4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 129d2b4f push 0x129ea8a0 */
  push32((uint32_t)(0x129ea8a0u));
  /* 129d2b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d2b56 call 0x129c1ee0 */
  push32(0x129d2b5bu); f_129c1ee0();
  /* 129d2b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b61 jne 0x129d2b64 */
  if (!C.zf) goto L_129d2b64;
  /* 129d2b63 int3  */
  x86_unimpl("int3 @ 0x129d2b63");
L_129d2b64:;
  /* 129d2b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d2b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2b68 jne 0x129d2b2b */
  if (!C.zf) goto L_129d2b2b;
  /* 129d2b6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b6e jle 0x129d2be3 */
  if ((C.zf||C.sf!=C.of)) goto L_129d2be3;
  /* 129d2b70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2b74 jae 0x129d2b80 */
  if (!C.cf) goto L_129d2b80;
  /* 129d2b76 mov eax, 3 */
  EAX = (0x3u);
  /* 129d2b7b jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2b80:;
  /* 129d2b80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 129d2b83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 129d2b86 jmp 0x129d2b91 */
  goto L_129d2b91;
L_129d2b88:;
  /* 129d2b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2b8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2b8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_129d2b91:;
  /* 129d2b91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2b96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d2b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2b9a je 0x129d2bd9 */
  if (C.zf) goto L_129d2bd9;
  /* 129d2b9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d2ba1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129d2ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2ba6 je 0x129d2bd9 */
  if (C.zf) goto L_129d2bd9;
  /* 129d2ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d2bad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d2baf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2bb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d2bb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2bb8 jl 0x129d2bd7 */
  if ((C.sf!=C.of)) goto L_129d2bd7;
  /* 129d2bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d2bbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d2bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d2bc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129d2bc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2bcb jg 0x129d2bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d2bd7;
  /* 129d2bcd mov eax, 2 */
  EAX = (0x2u);
  /* 129d2bd2 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2bd7:;
  /* 129d2bd7 jmp 0x129d2b88 */
  goto L_129d2b88;
L_129d2bd9:;
  /* 129d2bd9 mov eax, 3 */
  EAX = (0x3u);
  /* 129d2bde jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2be3:;
  /* 129d2be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2be7 jle 0x129d2c5c */
  if ((C.zf||C.sf!=C.of)) goto L_129d2c5c;
  /* 129d2be9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2bed jae 0x129d2bf9 */
  if (!C.cf) goto L_129d2bf9;
  /* 129d2bef mov eax, 1 */
  EAX = (0x1u);
  /* 129d2bf4 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2bf9:;
  /* 129d2bf9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 129d2bfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 129d2bff jmp 0x129d2c0a */
  goto L_129d2c0a;
L_129d2c01:;
  /* 129d2c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2c04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2c07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_129d2c0a:;
  /* 129d2c0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d2c0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d2c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2c13 je 0x129d2c52 */
  if (C.zf) goto L_129d2c52;
  /* 129d2c15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2c18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d2c1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129d2c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d2c1f je 0x129d2c52 */
  if (C.zf) goto L_129d2c52;
  /* 129d2c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2c26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129d2c28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2c2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129d2c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129d2c2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2c31 jl 0x129d2c50 */
  if ((C.sf!=C.of)) goto L_129d2c50;
  /* 129d2c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d2c38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d2c3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129d2c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2c3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129d2c42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2c44 jg 0x129d2c50 */
  if ((!C.zf&&C.sf==C.of)) goto L_129d2c50;
  /* 129d2c46 mov eax, 2 */
  EAX = (0x2u);
  /* 129d2c4b jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2c50:;
  /* 129d2c50 jmp 0x129d2c01 */
  goto L_129d2c01;
L_129d2c52:;
  /* 129d2c52 mov eax, 1 */
  EAX = (0x1u);
  /* 129d2c57 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2c5c:;
  /* 129d2c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2c60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2c63 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2c67 push edx */
  push32((uint32_t)(EDX));
  /* 129d2c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 129d2c6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129d2c6d push eax */
  push32((uint32_t)(EAX));
  /* 129d2c6e call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d2c74u);
  /* 129d2c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129d2c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2c7b jne 0x129d2c84 */
  if (!C.zf) goto L_129d2c84;
  /* 129d2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2c7f jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2c84:;
  /* 129d2c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129d2c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d2c8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129d2c90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2c93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d2c95 call 0x129c5fc0 */
  push32(0x129d2c9au); f_129c5fc0();
  /* 129d2c9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 129d2c9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d2ca0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 129d2ca3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129d2ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d2cad jmp 0x129d2cc6 */
  goto L_129d2cc6;
  /* 129d2caf mov eax, 1 */
  EAX = (0x1u);
  /* 129d2cb4 ret  */
  ESPCHK(0x129d29d0u, _esp0);
  ESP += 4; return;
  /* 129d2cb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2cb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129d2cbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d2cc6:;
  /* 129d2cc6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2cca jne 0x129d2cd3 */
  if (!C.zf) goto L_129d2cd3;
  /* 129d2ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2cce jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2cd3:;
  /* 129d2cd3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d2cd6 push edx */
  push32((uint32_t)(EDX));
  /* 129d2cd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d2cda push eax */
  push32((uint32_t)(EAX));
  /* 129d2cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129d2cde push ecx */
  push32((uint32_t)(ECX));
  /* 129d2cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129d2ce2 push edx */
  push32((uint32_t)(EDX));
  /* 129d2ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2ce5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129d2ce8 push eax */
  push32((uint32_t)(EAX));
  /* 129d2ce9 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d2cefu);
  /* 129d2cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2cf1 jne 0x129d2cfa */
  if (!C.zf) goto L_129d2cfa;
  /* 129d2cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2cf5 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2cfa:;
  /* 129d2cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 129d2cfe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d2d01 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2d02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2d05 push edx */
  push32((uint32_t)(EDX));
  /* 129d2d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 129d2d08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129d2d0b push eax */
  push32((uint32_t)(EAX));
  /* 129d2d0c call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d2d12u);
  /* 129d2d12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129d2d15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2d19 jne 0x129d2d22 */
  if (!C.zf) goto L_129d2d22;
  /* 129d2d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2d1d jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2d22:;
  /* 129d2d22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129d2d29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129d2d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129d2d33 call 0x129c5fc0 */
  push32(0x129d2d38u); f_129c5fc0();
  /* 129d2d38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 129d2d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129d2d3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 129d2d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 129d2d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129d2d4b jmp 0x129d2d64 */
  goto L_129d2d64;
  /* 129d2d4d mov eax, 1 */
  EAX = (0x1u);
  /* 129d2d52 ret  */
  ESPCHK(0x129d29d0u, _esp0);
  ESP += 4; return;
  /* 129d2d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2d56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 129d2d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129d2d64:;
  /* 129d2d64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2d68 jne 0x129d2d6e */
  if (!C.zf) goto L_129d2d6e;
  /* 129d2d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2d6c jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2d6e:;
  /* 129d2d6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2d71 push edx */
  push32((uint32_t)(EDX));
  /* 129d2d72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d2d75 push eax */
  push32((uint32_t)(EAX));
  /* 129d2d76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129d2d79 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2d7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129d2d7d push edx */
  push32((uint32_t)(EDX));
  /* 129d2d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 129d2d80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129d2d83 push eax */
  push32((uint32_t)(EAX));
  /* 129d2d84 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129d2d8au);
  /* 129d2d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2d8c jne 0x129d2d92 */
  if (!C.zf) goto L_129d2d92;
  /* 129d2d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2d90 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2d92:;
  /* 129d2d92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129d2d95 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129d2d99 push edx */
  push32((uint32_t)(EDX));
  /* 129d2d9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129d2d9d push eax */
  push32((uint32_t)(EAX));
  /* 129d2d9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129d2da1 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2da5 push edx */
  push32((uint32_t)(EDX));
  /* 129d2da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2da9 push eax */
  push32((uint32_t)(EAX));
  /* 129d2daa call dword ptr [0x129f0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0248))), 0x129d2db0u);
  /* 129d2db0 jmp 0x129d2db4 */
  goto L_129d2db4;
L_129d2db2:;
  /* 129d2db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d2db4:;
  /* 129d2db4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 129d2db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d2dba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129d2dc1 pop edi */
  EDI = (pop32());
  /* 129d2dc2 pop esi */
  ESI = (pop32());
  /* 129d2dc3 pop ebx */
  EBX = (pop32());
  /* 129d2dc4 mov esp, ebp */
  ESP = (EBP);
  /* 129d2dc6 pop ebp */
  EBP = (pop32());
  /* 129d2dc7 ret  */
  ESPCHK(0x129d29d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x129d2dd0 (80 bytes, 32 insns) */
void f_129d2dd0(void) {
  FTRACE(0x129d2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 129d2dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d2dd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d2ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2ddf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129d2de2:;
  /* 129d2de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2de8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d2dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2df0 je 0x129d2e07 */
  if (C.zf) goto L_129d2e07;
  /* 129d2df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2df5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d2df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2dfa je 0x129d2e07 */
  if (C.zf) goto L_129d2e07;
  /* 129d2dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2e02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d2e05 jmp 0x129d2de2 */
  goto L_129d2de2;
L_129d2e07:;
  /* 129d2e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2e0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129d2e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d2e0f jne 0x129d2e19 */
  if (!C.zf) goto L_129d2e19;
  /* 129d2e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d2e14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2e17 jmp 0x129d2e1c */
  goto L_129d2e1c;
L_129d2e19:;
  /* 129d2e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_129d2e1c:;
  /* 129d2e1c mov esp, ebp */
  ESP = (EBP);
  /* 129d2e1e pop ebp */
  EBP = (pop32());
  /* 129d2e1f ret  */
  ESPCHK(0x129d2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x129d2e20 (736 bytes, 224 insns) */
void f_129d2e20(void) {
  FTRACE(0x129d2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 129d2e21 mov ebp, esp */
  EBP = (ESP);
  /* 129d2e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2e26 push esi */
  push32((uint32_t)(ESI));
  /* 129d2e27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e2b je 0x129d2e4c */
  if (C.zf) goto L_129d2e4c;
  /* 129d2e2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 129d2e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2e32 push eax */
  push32((uint32_t)(EAX));
  /* 129d2e33 call 0x129d3270 */
  push32(0x129d2e38u); f_129d3270();
  /* 129d2e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129d2e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e42 je 0x129d2e4c */
  if (C.zf) goto L_129d2e4c;
  /* 129d2e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2e47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e4a jne 0x129d2e54 */
  if (!C.zf) goto L_129d2e54;
L_129d2e4c:;
  /* 129d2e4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2e4f jmp 0x129d30fb */
  goto L_129d30fb;
L_129d2e54:;
  /* 129d2e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2e57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129d2e5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d2e5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 129d2e60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129d2e63 mov ecx, dword ptr [0x129ee4ac] */
  ECX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d2e69 cmp ecx, dword ptr [0x129ee4b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ee4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e6f jne 0x129d2e85 */
  if (!C.zf) goto L_129d2e85;
  /* 129d2e71 mov edx, dword ptr [0x129ee4ac] */
  EDX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d2e77 push edx */
  push32((uint32_t)(EDX));
  /* 129d2e78 call 0x129d3180 */
  push32(0x129d2e7du); f_129d3180();
  /* 129d2e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2e80 mov dword ptr [0x129ee4ac], eax */
  w32((uint32_t)(0x129ee4ac), (EAX));
L_129d2e85:;
  /* 129d2e85 cmp dword ptr [0x129ee4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e8c jne 0x129d2f45 */
  if (!C.zf) goto L_129d2f45;
  /* 129d2e92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e96 je 0x129d2eb7 */
  if (C.zf) goto L_129d2eb7;
  /* 129d2e98 cmp dword ptr [0x129ee4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2e9f je 0x129d2eb7 */
  if (C.zf) goto L_129d2eb7;
  /* 129d2ea1 call 0x129d2920 */
  push32(0x129d2ea6u); f_129d2920();
  /* 129d2ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d2ea8 je 0x129d2eb2 */
  if (C.zf) goto L_129d2eb2;
  /* 129d2eaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2ead jmp 0x129d30fb */
  goto L_129d30fb;
L_129d2eb2:;
  /* 129d2eb2 jmp 0x129d2f45 */
  goto L_129d2f45;
L_129d2eb7:;
  /* 129d2eb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ebb je 0x129d2ec4 */
  if (C.zf) goto L_129d2ec4;
  /* 129d2ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d2ebf jmp 0x129d30fb */
  goto L_129d30fb;
L_129d2ec4:;
  /* 129d2ec4 cmp dword ptr [0x129ee4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2ecb jne 0x129d2f04 */
  if (!C.zf) goto L_129d2f04;
  /* 129d2ecd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 129d2ed2 push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d2ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d2ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 129d2edb call 0x129c2e20 */
  push32(0x129d2ee0u); f_129c2e20();
  /* 129d2ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2ee3 mov dword ptr [0x129ee4ac], eax */
  w32((uint32_t)(0x129ee4ac), (EAX));
  /* 129d2ee8 cmp dword ptr [0x129ee4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2eef jne 0x129d2ef9 */
  if (!C.zf) goto L_129d2ef9;
  /* 129d2ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2ef4 jmp 0x129d30fb */
  goto L_129d30fb;
L_129d2ef9:;
  /* 129d2ef9 mov eax, dword ptr [0x129ee4ac] */
  EAX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d2efe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_129d2f04:;
  /* 129d2f04 cmp dword ptr [0x129ee4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2f0b jne 0x129d2f45 */
  if (!C.zf) goto L_129d2f45;
  /* 129d2f0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 129d2f12 push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d2f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d2f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 129d2f1b call 0x129c2e20 */
  push32(0x129d2f20u); f_129c2e20();
  /* 129d2f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2f23 mov dword ptr [0x129ee4b4], eax */
  w32((uint32_t)(0x129ee4b4), (EAX));
  /* 129d2f28 cmp dword ptr [0x129ee4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2f2f jne 0x129d2f39 */
  if (!C.zf) goto L_129d2f39;
  /* 129d2f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d2f34 jmp 0x129d30fb */
  goto L_129d30fb;
L_129d2f39:;
  /* 129d2f39 mov ecx, dword ptr [0x129ee4b4] */
  ECX = (r32((uint32_t)(0x129ee4b4)));
  /* 129d2f3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_129d2f45:;
  /* 129d2f45 mov edx, dword ptr [0x129ee4ac] */
  EDX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d2f4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129d2f4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d2f51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d2f54 push eax */
  push32((uint32_t)(EAX));
  /* 129d2f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2f58 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2f59 call 0x129d3100 */
  push32(0x129d2f5eu); f_129d3100();
  /* 129d2f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d2f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2f68 jl 0x129d3001 */
  if ((C.sf!=C.of)) goto L_129d3001;
  /* 129d2f6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2f71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2f74 je 0x129d3001 */
  if (C.zf) goto L_129d3001;
  /* 129d2f7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2f7e je 0x129d2ff3 */
  if (C.zf) goto L_129d2ff3;
  /* 129d2f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d2f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2f88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129d2f8b push edx */
  push32((uint32_t)(EDX));
  /* 129d2f8c call 0x129c38b0 */
  push32(0x129d2f91u); f_129c38b0();
  /* 129d2f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2f94 jmp 0x129d2f9f */
  goto L_129d2f9f;
L_129d2f96:;
  /* 129d2f96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129d2f9f:;
  /* 129d2f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2fa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2fa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2fa9 je 0x129d2fc0 */
  if (C.zf) goto L_129d2fc0;
  /* 129d2fab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2fb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2fb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 129d2fbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 129d2fbe jmp 0x129d2f96 */
  goto L_129d2f96;
L_129d2fc0:;
  /* 129d2fc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 129d2fc5 push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d2fca push 2 */
  push32((uint32_t)(0x2u));
  /* 129d2fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2fcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 129d2fd2 push eax */
  push32((uint32_t)(EAX));
  /* 129d2fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 129d2fd7 call 0x129c32b0 */
  push32(0x129d2fdcu); f_129c32b0();
  /* 129d2fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d2fdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d2fe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d2fe6 je 0x129d2ff1 */
  if (C.zf) goto L_129d2ff1;
  /* 129d2fe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2feb mov dword ptr [0x129ee4ac], edx */
  w32((uint32_t)(0x129ee4ac), (EDX));
L_129d2ff1:;
  /* 129d2ff1 jmp 0x129d2fff */
  goto L_129d2fff;
L_129d2ff3:;
  /* 129d2ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d2ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d2ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d2ffc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_129d2fff:;
  /* 129d2fff jmp 0x129d3074 */
  goto L_129d3074;
L_129d3001:;
  /* 129d3001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3005 jne 0x129d306d */
  if (!C.zf) goto L_129d306d;
  /* 129d3007 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d300b jge 0x129d3015 */
  if ((C.sf==C.of)) goto L_129d3015;
  /* 129d300d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3010 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d3012 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129d3015:;
  /* 129d3015 push 0xce */
  push32((uint32_t)(0xceu));
  /* 129d301a push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d301f push 2 */
  push32((uint32_t)(0x2u));
  /* 129d3021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3024 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 129d302b push edx */
  push32((uint32_t)(EDX));
  /* 129d302c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d302f push eax */
  push32((uint32_t)(EAX));
  /* 129d3030 call 0x129c32b0 */
  push32(0x129d3035u); f_129c32b0();
  /* 129d3035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3038 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d303b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d303f jne 0x129d3049 */
  if (!C.zf) goto L_129d3049;
  /* 129d3041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d3044 jmp 0x129d30fb */
  goto L_129d30fb;
L_129d3049:;
  /* 129d3049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d304c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3052 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 129d3055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d305b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 129d3063 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d3066 mov dword ptr [0x129ee4ac], eax */
  w32((uint32_t)(0x129ee4ac), (EAX));
  /* 129d306b jmp 0x129d3074 */
  goto L_129d3074;
L_129d306d:;
  /* 129d306d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d306f jmp 0x129d30fb */
  goto L_129d30fb;
L_129d3074:;
  /* 129d3074 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3078 je 0x129d30f9 */
  if (C.zf) goto L_129d30f9;
  /* 129d307a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 129d307f push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d3084 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d3086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3089 push ecx */
  push32((uint32_t)(ECX));
  /* 129d308a call 0x129c5c50 */
  push32(0x129d308fu); f_129c5c50();
  /* 129d308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3092 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3095 push eax */
  push32((uint32_t)(EAX));
  /* 129d3096 call 0x129c2e20 */
  push32(0x129d309bu); f_129c2e20();
  /* 129d309b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d309e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129d30a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d30a5 je 0x129d30f9 */
  if (C.zf) goto L_129d30f9;
  /* 129d30a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d30aa push edx */
  push32((uint32_t)(EDX));
  /* 129d30ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d30ae push eax */
  push32((uint32_t)(EAX));
  /* 129d30af call 0x129c5dd0 */
  push32(0x129d30b4u); f_129c5dd0();
  /* 129d30b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d30b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129d30ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d30bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d30c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d30c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129d30c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d30c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129d30cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d30ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d30d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d30d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129d30d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129d30d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d30db not edx */
  EDX = (~(EDX));
  /* 129d30dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 129d30e0 push edx */
  push32((uint32_t)(EDX));
  /* 129d30e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d30e4 push eax */
  push32((uint32_t)(EAX));
  /* 129d30e5 call dword ptr [0x129f0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0244))), 0x129d30ebu);
  /* 129d30eb push 2 */
  push32((uint32_t)(0x2u));
  /* 129d30ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d30f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129d30f1 call 0x129c38b0 */
  push32(0x129d30f6u); f_129c38b0();
  /* 129d30f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d30f9:;
  /* 129d30f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d30fb:;
  /* 129d30fb pop esi */
  ESI = (pop32());
  /* 129d30fc mov esp, ebp */
  ESP = (EBP);
  /* 129d30fe pop ebp */
  EBP = (pop32());
  /* 129d30ff ret  */
  ESPCHK(0x129d2e20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x129d3100 (124 bytes, 47 insns) */
void f_129d3100(void) {
  FTRACE(0x129d3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d3100 push ebp */
  push32((uint32_t)(EBP));
  /* 129d3101 mov ebp, esp */
  EBP = (ESP);
  /* 129d3103 push ecx */
  push32((uint32_t)(ECX));
  /* 129d3104 mov eax, dword ptr [0x129ee4ac] */
  EAX = (r32((uint32_t)(0x129ee4ac)));
  /* 129d3109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129d310c jmp 0x129d3117 */
  goto L_129d3117;
L_129d310e:;
  /* 129d310e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d3111 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3114 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129d3117:;
  /* 129d3117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d311a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d311d je 0x129d316a */
  if (C.zf) goto L_129d316a;
  /* 129d311f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d3122 push eax */
  push32((uint32_t)(EAX));
  /* 129d3123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d3126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d3128 push edx */
  push32((uint32_t)(EDX));
  /* 129d3129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d312c push eax */
  push32((uint32_t)(EAX));
  /* 129d312d call 0x129d28d0 */
  push32(0x129d3132u); f_129d28d0();
  /* 129d3132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129d3137 jne 0x129d3168 */
  if (!C.zf) goto L_129d3168;
  /* 129d3139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d313c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d313e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d3141 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 129d3145 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3148 je 0x129d315a */
  if (C.zf) goto L_129d315a;
  /* 129d314a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d314d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d314f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d3152 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 129d3156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d3158 jne 0x129d3168 */
  if (!C.zf) goto L_129d3168;
L_129d315a:;
  /* 129d315a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d315d sub eax, dword ptr [0x129ee4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ee4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d3163 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 129d3166 jmp 0x129d3178 */
  goto L_129d3178;
L_129d3168:;
  /* 129d3168 jmp 0x129d310e */
  goto L_129d310e;
L_129d316a:;
  /* 129d316a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d316d sub eax, dword ptr [0x129ee4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ee4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d3173 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 129d3176 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_129d3178:;
  /* 129d3178 mov esp, ebp */
  ESP = (EBP);
  /* 129d317a pop ebp */
  EBP = (pop32());
  /* 129d317b ret  */
  ESPCHK(0x129d3100u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x129d3180 (238 bytes, 80 insns) */
void f_129d3180(void) {
  FTRACE(0x129d3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d3180 push ebp */
  push32((uint32_t)(EBP));
  /* 129d3181 mov ebp, esp */
  EBP = (ESP);
  /* 129d3183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d3186 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129d318d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d3193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3197 jne 0x129d31a0 */
  if (!C.zf) goto L_129d31a0;
  /* 129d3199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d319b jmp 0x129d326a */
  goto L_129d326a;
L_129d31a0:;
  /* 129d31a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d31a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d31a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d31a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d31ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129d31ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d31b0 je 0x129d31bd */
  if (C.zf) goto L_129d31bd;
  /* 129d31b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d31b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d31b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129d31bb jmp 0x129d31a0 */
  goto L_129d31a0;
L_129d31bd:;
  /* 129d31bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 129d31c2 push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d31c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129d31c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129d31cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 129d31d3 push eax */
  push32((uint32_t)(EAX));
  /* 129d31d4 call 0x129c2e20 */
  push32(0x129d31d9u); f_129c2e20();
  /* 129d31d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d31dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129d31df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d31e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129d31e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d31e9 jne 0x129d31f5 */
  if (!C.zf) goto L_129d31f5;
  /* 129d31eb push 9 */
  push32((uint32_t)(0x9u));
  /* 129d31ed call 0x129c1d90 */
  push32(0x129d31f2u); f_129c1d90();
  /* 129d31f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d31f5:;
  /* 129d31f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d31f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129d31fb:;
  /* 129d31fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d31fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3201 je 0x129d325e */
  if (C.zf) goto L_129d325e;
  /* 129d3203 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 129d3208 push 0x129ea900 */
  push32((uint32_t)(0x129ea900u));
  /* 129d320d push 2 */
  push32((uint32_t)(0x2u));
  /* 129d320f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d3212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129d3214 push edx */
  push32((uint32_t)(EDX));
  /* 129d3215 call 0x129c5c50 */
  push32(0x129d321au); f_129c5c50();
  /* 129d321a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d321d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3220 push eax */
  push32((uint32_t)(EAX));
  /* 129d3221 call 0x129c2e20 */
  push32(0x129d3226u); f_129c2e20();
  /* 129d3226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d322c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129d322e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3234 je 0x129d324a */
  if (C.zf) goto L_129d324a;
  /* 129d3236 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d3239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129d323b push ecx */
  push32((uint32_t)(ECX));
  /* 129d323c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d323f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129d3241 push eax */
  push32((uint32_t)(EAX));
  /* 129d3242 call 0x129c5dd0 */
  push32(0x129d3247u); f_129c5dd0();
  /* 129d3247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129d324a:;
  /* 129d324a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129d324d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129d3253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3256 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3259 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129d325c jmp 0x129d31fb */
  goto L_129d31fb;
L_129d325e:;
  /* 129d325e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129d3261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129d3267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129d326a:;
  /* 129d326a mov esp, ebp */
  ESP = (EBP);
  /* 129d326c pop ebp */
  EBP = (pop32());
  /* 129d326d ret  */
  ESPCHK(0x129d3180u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x129d3270 (237 bytes, 81 insns) */
void f_129d3270(void) {
  FTRACE(0x129d3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d3270 push ebp */
  push32((uint32_t)(EBP));
  /* 129d3271 mov ebp, esp */
  EBP = (ESP);
  /* 129d3273 push ecx */
  push32((uint32_t)(ECX));
  /* 129d3274 cmp dword ptr [0x129efbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d327b jne 0x129d3292 */
  if (!C.zf) goto L_129d3292;
  /* 129d327d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129d3280 push eax */
  push32((uint32_t)(EAX));
  /* 129d3281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3284 push ecx */
  push32((uint32_t)(ECX));
  /* 129d3285 call 0x129d3370 */
  push32(0x129d328au); f_129d3370();
  /* 129d328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d328d jmp 0x129d3359 */
  goto L_129d3359;
L_129d3292:;
  /* 129d3292 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129d3294 call 0x129c6820 */
  push32(0x129d3299u); f_129c6820();
  /* 129d3299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d329c jmp 0x129d32a7 */
  goto L_129d32a7;
L_129d329e:;
  /* 129d329e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d32a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d32a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_129d32a7:;
  /* 129d32a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d32aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 129d32ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 129d32b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d32b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d32bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129d32bd je 0x129d333b */
  if (C.zf) goto L_129d333b;
  /* 129d32bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d32c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d32c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d32c9 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129d32cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129d32d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d32d4 je 0x129d3326 */
  if (C.zf) goto L_129d3326;
  /* 129d32d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d32d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d32dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129d32df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d32e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d32e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d32e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129d32e8 jne 0x129d32f8 */
  if (!C.zf) goto L_129d32f8;
  /* 129d32ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129d32ec call 0x129c68c0 */
  push32(0x129d32f1u); f_129c68c0();
  /* 129d32f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d32f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d32f6 jmp 0x129d3359 */
  goto L_129d3359;
L_129d32f8:;
  /* 129d32f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d32fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d3301 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129d3304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129d3309 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129d330b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129d330d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3310 jne 0x129d3324 */
  if (!C.zf) goto L_129d3324;
  /* 129d3312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129d3314 call 0x129c68c0 */
  push32(0x129d3319u); f_129c68c0();
  /* 129d3319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d331c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d331f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129d3322 jmp 0x129d3359 */
  goto L_129d3359;
L_129d3324:;
  /* 129d3324 jmp 0x129d3336 */
  goto L_129d3336;
L_129d3326:;
  /* 129d3326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d3329 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129d332f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3332 jne 0x129d3336 */
  if (!C.zf) goto L_129d3336;
  /* 129d3334 jmp 0x129d333b */
  goto L_129d333b;
L_129d3336:;
  /* 129d3336 jmp 0x129d329e */
  goto L_129d329e;
L_129d333b:;
  /* 129d333b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129d333d call 0x129c68c0 */
  push32(0x129d3342u); f_129c68c0();
  /* 129d3342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129d3345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129d3348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d334d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129d3350 jne 0x129d3357 */
  if (!C.zf) goto L_129d3357;
  /* 129d3352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129d3355 jmp 0x129d3359 */
  goto L_129d3359;
L_129d3357:;
  /* 129d3357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129d3359:;
  /* 129d3359 mov esp, ebp */
  ESP = (EBP);
  /* 129d335b pop ebp */
  EBP = (pop32());
  /* 129d335c ret  */
  ESPCHK(0x129d3270u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x129d3370 (193 bytes, 87 insns) */
void f_129d3370(void) {
  FTRACE(0x129d3370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d3370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d3372 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 129d3376 push ebx */
  push32((uint32_t)(EBX));
  /* 129d3377 mov ebx, eax */
  EBX = (EAX);
  /* 129d3379 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129d337c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 129d3380 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129d3386 je 0x129d339b */
  if (C.zf) goto L_129d339b;
L_129d3388:;
  /* 129d3388 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 129d338a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129d338b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d338d je 0x129d3360 */
  if (C.zf) { jmp_ind(0x129d3360u); return; }
  /* 129d338f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 129d3391 je 0x129d33e4 */
  if (C.zf) goto L_129d33e4;
  /* 129d3393 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129d3399 jne 0x129d3388 */
  if (!C.zf) goto L_129d3388;
L_129d339b:;
  /* 129d339b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 129d339d push edi */
  push32((uint32_t)(EDI));
  /* 129d339e mov eax, ebx */
  EAX = (EBX);
  /* 129d33a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 129d33a3 push esi */
  push32((uint32_t)(ESI));
  /* 129d33a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_129d33a6:;
  /* 129d33a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 129d33a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 129d33ad mov eax, ecx */
  EAX = (ECX);
  /* 129d33af mov esi, edi */
  ESI = (EDI);
  /* 129d33b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 129d33b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129d33b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129d33b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129d33ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129d33bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 129d33bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 129d33c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129d33c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 129d33ca jne 0x129d33e8 */
  if (!C.zf) goto L_129d33e8;
  /* 129d33cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 129d33d1 je 0x129d33a6 */
  if (C.zf) goto L_129d33a6;
  /* 129d33d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 129d33d8 jne 0x129d33e2 */
  if (!C.zf) goto L_129d33e2;
  /* 129d33da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 129d33e0 jne 0x129d33a6 */
  if (!C.zf) goto L_129d33a6;
L_129d33e2:;
  /* 129d33e2 pop esi */
  ESI = (pop32());
  /* 129d33e3 pop edi */
  EDI = (pop32());
L_129d33e4:;
  /* 129d33e4 pop ebx */
  EBX = (pop32());
  /* 129d33e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129d33e7 ret  */
  ESPCHK(0x129d3370u, _esp0);
  ESP += 4; return;
L_129d33e8:;
  /* 129d33e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 129d33eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d33ed je 0x129d3425 */
  if (C.zf) goto L_129d3425;
  /* 129d33ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129d33f1 je 0x129d33e2 */
  if (C.zf) goto L_129d33e2;
  /* 129d33f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d33f5 je 0x129d341e */
  if (C.zf) goto L_129d341e;
  /* 129d33f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129d33f9 je 0x129d33e2 */
  if (C.zf) goto L_129d33e2;
  /* 129d33fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129d33fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d3400 je 0x129d3417 */
  if (C.zf) goto L_129d3417;
  /* 129d3402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129d3404 je 0x129d33e2 */
  if (C.zf) goto L_129d33e2;
  /* 129d3406 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129d3408 je 0x129d3410 */
  if (C.zf) goto L_129d3410;
  /* 129d340a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129d340c je 0x129d33e2 */
  if (C.zf) goto L_129d33e2;
  /* 129d340e jmp 0x129d33a6 */
  goto L_129d33a6;
L_129d3410:;
  /* 129d3410 pop esi */
  ESI = (pop32());
  /* 129d3411 pop edi */
  EDI = (pop32());
  /* 129d3412 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 129d3415 pop ebx */
  EBX = (pop32());
  /* 129d3416 ret  */
  ESPCHK(0x129d3370u, _esp0);
  ESP += 4; return;
L_129d3417:;
  /* 129d3417 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 129d341a pop esi */
  ESI = (pop32());
  /* 129d341b pop edi */
  EDI = (pop32());
  /* 129d341c pop ebx */
  EBX = (pop32());
  /* 129d341d ret  */
  ESPCHK(0x129d3370u, _esp0);
  ESP += 4; return;
L_129d341e:;
  /* 129d341e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 129d3421 pop esi */
  ESI = (pop32());
  /* 129d3422 pop edi */
  EDI = (pop32());
  /* 129d3423 pop ebx */
  EBX = (pop32());
  /* 129d3424 ret  */
  ESPCHK(0x129d3370u, _esp0);
  ESP += 4; return;
L_129d3425:;
  /* 129d3425 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 129d3428 pop esi */
  ESI = (pop32());
  /* 129d3429 pop edi */
  EDI = (pop32());
  /* 129d342a pop ebx */
  EBX = (pop32());
  /* 129d342b ret  */
  ESPCHK(0x129d3370u, _esp0);
  ESP += 4; return;
  /* 129d342c jmp dword ptr [0x129f0280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x129f0280)))); return;
}

/* RtlUnwind @ 0x129d357c (6 bytes, 1 insns) */
void f_129d357c(void) {
  FTRACE(0x129d357cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129d357c jmp dword ptr [0x129f027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x129f027c)))); return;
}

