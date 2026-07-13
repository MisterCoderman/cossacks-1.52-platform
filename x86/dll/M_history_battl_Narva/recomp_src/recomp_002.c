#include "recomp.h"

/* __close_lk @ 0x12aaf630 (170 bytes, 59 insns) */
void f_12aaf630(void) {
  FTRACE(0x12aaf630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf630 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf631 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf633 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf634 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf638 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf639 call 0x12aabfa0 */
  push32(0x12aaf63eu); f_12aabfa0();
  /* 12aaf63e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf641 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf644 je 0x12aaf683 */
  if (C.zf) goto L_12aaf683;
  /* 12aaf646 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf64a je 0x12aaf652 */
  if (C.zf) goto L_12aaf652;
  /* 12aaf64c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf650 jne 0x12aaf66c */
  if (!C.zf) goto L_12aaf66c;
L_12aaf652:;
  /* 12aaf652 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaf654 call 0x12aabfa0 */
  push32(0x12aaf659u); f_12aabfa0();
  /* 12aaf659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf65c mov esi, eax */
  ESI = (EAX);
  /* 12aaf65e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aaf660 call 0x12aabfa0 */
  push32(0x12aaf665u); f_12aabfa0();
  /* 12aaf665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf668 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf66a je 0x12aaf683 */
  if (C.zf) goto L_12aaf683;
L_12aaf66c:;
  /* 12aaf66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf66f push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf670 call 0x12aabfa0 */
  push32(0x12aaf675u); f_12aabfa0();
  /* 12aaf675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf678 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf679 call dword ptr [0x12ad0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0240))), 0x12aaf67fu);
  /* 12aaf67f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf681 je 0x12aaf68c */
  if (C.zf) goto L_12aaf68c;
L_12aaf683:;
  /* 12aaf683 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aaf68a jmp 0x12aaf695 */
  goto L_12aaf695;
L_12aaf68c:;
  /* 12aaf68c call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aaf692u);
  /* 12aaf692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aaf695:;
  /* 12aaf695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf698 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf699 call 0x12aabec0 */
  push32(0x12aaf69eu); f_12aabec0();
  /* 12aaf69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf6a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf6a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aaf6a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf6aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf6ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf6b0 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aaf6b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12aaf6bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf6c0 je 0x12aaf6d3 */
  if (C.zf) goto L_12aaf6d3;
  /* 12aaf6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf6c5 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf6c6 call 0x12aaa860 */
  push32(0x12aaf6cbu); f_12aaa860();
  /* 12aaf6cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf6ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf6d1 jmp 0x12aaf6d5 */
  goto L_12aaf6d5;
L_12aaf6d3:;
  /* 12aaf6d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aaf6d5:;
  /* 12aaf6d5 pop esi */
  ESI = (pop32());
  /* 12aaf6d6 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf6d8 pop ebp */
  EBP = (pop32());
  /* 12aaf6d9 ret  */
  ESPCHK(0x12aaf630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6e0 @ 0x12aaf6e0 (146 bytes, 52 insns) */
void f_12aaf6e0(void) {
  FTRACE(0x12aaf6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf6e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12aaf6e4 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf6e5 push edi */
  push32((uint32_t)(EDI));
L_12aaf6e6:;
  /* 12aaf6e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf6ea jne 0x12aaf70a */
  if (!C.zf) goto L_12aaf70a;
  /* 12aaf6ec push 0x12ac9fd8 */
  push32((uint32_t)(0x12ac9fd8u));
  /* 12aaf6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaf6f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12aaf6f5 push 0x12aca6a0 */
  push32((uint32_t)(0x12aca6a0u));
  /* 12aaf6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12aaf6fc call 0x12aa1af0 */
  push32(0x12aaf701u); f_12aa1af0();
  /* 12aaf701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf707 jne 0x12aaf70a */
  if (!C.zf) goto L_12aaf70a;
  /* 12aaf709 int3  */
  x86_unimpl("int3 @ 0x12aaf709");
L_12aaf70a:;
  /* 12aaf70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf70e jne 0x12aaf6e6 */
  if (!C.zf) goto L_12aaf6e6;
  /* 12aaf710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf713 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aaf716 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf71c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaf71e je 0x12aaf76d */
  if (C.zf) goto L_12aaf76d;
  /* 12aaf720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf723 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aaf726 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf729 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaf72b je 0x12aaf76d */
  if (C.zf) goto L_12aaf76d;
  /* 12aaf72d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aaf72f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf732 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aaf735 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf736 call 0x12aa34c0 */
  push32(0x12aaf73bu); f_12aa34c0();
  /* 12aaf73b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf73e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf741 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aaf744 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf74d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aaf750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf753 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12aaf759 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf75c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12aaf763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf766 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12aaf76d:;
  /* 12aaf76d pop edi */
  EDI = (pop32());
  /* 12aaf76e pop esi */
  ESI = (pop32());
  /* 12aaf76f pop ebx */
  EBX = (pop32());
  /* 12aaf770 pop ebp */
  EBP = (pop32());
  /* 12aaf771 ret  */
  ESPCHK(0x12aaf6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x12aaf780 (289 bytes, 97 insns) */
void f_12aaf780(void) {
  FTRACE(0x12aaf780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf780 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf781 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf783 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf786 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf787 mov eax, dword ptr [0x12acdc98] */
  EAX = (r32((uint32_t)(0x12acdc98)));
  /* 12aaf78c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aaf78f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aaf796 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf79d jmp 0x12aaf7a8 */
  goto L_12aaf7a8;
L_12aaf79f:;
  /* 12aaf79f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf7a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aaf7a8:;
  /* 12aaf7a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf7ac jae 0x12aaf7e1 */
  if (!C.cf) goto L_12aaf7e1;
  /* 12aaf7ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf7b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf7b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aaf7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf7b8 call 0x12aa5860 */
  push32(0x12aaf7bdu); f_12aa5860();
  /* 12aaf7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7c0 mov esi, eax */
  ESI = (EAX);
  /* 12aaf7c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf7c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf7c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12aaf7cc push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf7cd call 0x12aa5860 */
  push32(0x12aaf7d2u); f_12aa5860();
  /* 12aaf7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12aaf7dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aaf7df jmp 0x12aaf79f */
  goto L_12aaf79f;
L_12aaf7e1:;
  /* 12aaf7e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf7e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7e7 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf7e8 call 0x12aa2a10 */
  push32(0x12aaf7edu); f_12aa2a10();
  /* 12aaf7ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf7f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaf7f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf7f7 je 0x12aaf899 */
  if (C.zf) goto L_12aaf899;
  /* 12aaf7fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf800 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf803 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf80a jmp 0x12aaf815 */
  goto L_12aaf815;
L_12aaf80c:;
  /* 12aaf80c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf80f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf812 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12aaf815:;
  /* 12aaf815 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf819 jae 0x12aaf88a */
  if (!C.cf) goto L_12aaf88a;
  /* 12aaf81b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf81e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12aaf821 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf824 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf827 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf82a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf82d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf830 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aaf833 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf834 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf837 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf838 call 0x12aa59e0 */
  push32(0x12aaf83du); f_12aa59e0();
  /* 12aaf83d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf840 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf841 call 0x12aa5860 */
  push32(0x12aaf846u); f_12aa5860();
  /* 12aaf846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf849 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf84c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf84e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf851 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf854 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12aaf857 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf85a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf85d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aaf860 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf863 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf866 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12aaf86a push eax */
  push32((uint32_t)(EAX));
  /* 12aaf86b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf86e push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf86f call 0x12aa59e0 */
  push32(0x12aaf874u); f_12aa59e0();
  /* 12aaf874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf877 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf878 call 0x12aa5860 */
  push32(0x12aaf87du); f_12aa5860();
  /* 12aaf87d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf880 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf883 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf885 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aaf888 jmp 0x12aaf80c */
  goto L_12aaf80c;
L_12aaf88a:;
  /* 12aaf88a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf88d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aaf890 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf893 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf896 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12aaf899:;
  /* 12aaf899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf89c pop esi */
  ESI = (pop32());
  /* 12aaf89d mov esp, ebp */
  ESP = (EBP);
  /* 12aaf89f pop ebp */
  EBP = (pop32());
  /* 12aaf8a0 ret  */
  ESPCHK(0x12aaf780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8b0 @ 0x12aaf8b0 (291 bytes, 97 insns) */
void f_12aaf8b0(void) {
  FTRACE(0x12aaf8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf8b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf8b6 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf8b7 mov eax, dword ptr [0x12acdc98] */
  EAX = (r32((uint32_t)(0x12acdc98)));
  /* 12aaf8bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aaf8bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aaf8c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf8cd jmp 0x12aaf8d8 */
  goto L_12aaf8d8;
L_12aaf8cf:;
  /* 12aaf8cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf8d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf8d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aaf8d8:;
  /* 12aaf8d8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf8dc jae 0x12aaf912 */
  if (!C.cf) goto L_12aaf912;
  /* 12aaf8de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf8e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf8e4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12aaf8e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf8e9 call 0x12aa5860 */
  push32(0x12aaf8eeu); f_12aa5860();
  /* 12aaf8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf8f1 mov esi, eax */
  ESI = (EAX);
  /* 12aaf8f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf8f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf8f9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12aaf8fd push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf8fe call 0x12aa5860 */
  push32(0x12aaf903u); f_12aa5860();
  /* 12aaf903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf906 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf909 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12aaf90d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aaf910 jmp 0x12aaf8cf */
  goto L_12aaf8cf;
L_12aaf912:;
  /* 12aaf912 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf915 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf918 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf919 call 0x12aa2a10 */
  push32(0x12aaf91eu); f_12aa2a10();
  /* 12aaf91e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf921 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaf924 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf928 je 0x12aaf9cb */
  if (C.zf) goto L_12aaf9cb;
  /* 12aaf92e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf931 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf934 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf93b jmp 0x12aaf946 */
  goto L_12aaf946;
L_12aaf93d:;
  /* 12aaf93d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf940 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf943 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12aaf946:;
  /* 12aaf946 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf94a jae 0x12aaf9bc */
  if (!C.cf) goto L_12aaf9bc;
  /* 12aaf94c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf94f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12aaf952 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf955 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf958 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf95b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf95e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf961 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12aaf965 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf966 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf969 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf96a call 0x12aa59e0 */
  push32(0x12aaf96fu); f_12aa59e0();
  /* 12aaf96f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf972 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf973 call 0x12aa5860 */
  push32(0x12aaf978u); f_12aa5860();
  /* 12aaf978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf97b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf97e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf980 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aaf983 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf986 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12aaf989 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf98c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf98f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aaf992 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf998 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12aaf99c push eax */
  push32((uint32_t)(EAX));
  /* 12aaf99d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf9a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf9a1 call 0x12aa59e0 */
  push32(0x12aaf9a6u); f_12aa59e0();
  /* 12aaf9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf9a9 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf9aa call 0x12aa5860 */
  push32(0x12aaf9afu); f_12aa5860();
  /* 12aaf9af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf9b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf9b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf9b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aaf9ba jmp 0x12aaf93d */
  goto L_12aaf93d;
L_12aaf9bc:;
  /* 12aaf9bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf9bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aaf9c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aaf9c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf9c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12aaf9cb:;
  /* 12aaf9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf9ce pop esi */
  ESI = (pop32());
  /* 12aaf9cf mov esp, ebp */
  ESP = (EBP);
  /* 12aaf9d1 pop ebp */
  EBP = (pop32());
  /* 12aaf9d2 ret  */
  ESPCHK(0x12aaf8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x12aaf9e0 (878 bytes, 273 insns) */
void f_12aaf9e0(void) {
  FTRACE(0x12aaf9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf9e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf9e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf9e6 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf9e7 mov eax, dword ptr [0x12acdc98] */
  EAX = (r32((uint32_t)(0x12acdc98)));
  /* 12aaf9ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aaf9ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aaf9f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf9fd jmp 0x12aafa08 */
  goto L_12aafa08;
L_12aaf9ff:;
  /* 12aaf9ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aafa08:;
  /* 12aafa08 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafa0c jae 0x12aafa41 */
  if (!C.cf) goto L_12aafa41;
  /* 12aafa0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafa14 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aafa17 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafa18 call 0x12aa5860 */
  push32(0x12aafa1du); f_12aa5860();
  /* 12aafa1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa20 mov esi, eax */
  ESI = (EAX);
  /* 12aafa22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafa28 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12aafa2c push ecx */
  push32((uint32_t)(ECX));
  /* 12aafa2d call 0x12aa5860 */
  push32(0x12aafa32u); f_12aa5860();
  /* 12aafa32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa38 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12aafa3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aafa3f jmp 0x12aaf9ff */
  goto L_12aaf9ff;
L_12aafa41:;
  /* 12aafa41 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aafa48 jmp 0x12aafa53 */
  goto L_12aafa53;
L_12aafa4a:;
  /* 12aafa4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12aafa53:;
  /* 12aafa53 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafa57 jae 0x12aafa8d */
  if (!C.cf) goto L_12aafa8d;
  /* 12aafa59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafa5f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12aafa63 push eax */
  push32((uint32_t)(EAX));
  /* 12aafa64 call 0x12aa5860 */
  push32(0x12aafa69u); f_12aa5860();
  /* 12aafa69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa6c mov esi, eax */
  ESI = (EAX);
  /* 12aafa6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafa71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafa74 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12aafa78 push eax */
  push32((uint32_t)(EAX));
  /* 12aafa79 call 0x12aa5860 */
  push32(0x12aafa7eu); f_12aa5860();
  /* 12aafa7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa81 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa84 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12aafa88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aafa8b jmp 0x12aafa4a */
  goto L_12aafa4a;
L_12aafa8d:;
  /* 12aafa8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafa90 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12aafa96 push eax */
  push32((uint32_t)(EAX));
  /* 12aafa97 call 0x12aa5860 */
  push32(0x12aafa9cu); f_12aa5860();
  /* 12aafa9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafa9f mov esi, eax */
  ESI = (EAX);
  /* 12aafaa1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafaa4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12aafaaa push edx */
  push32((uint32_t)(EDX));
  /* 12aafaab call 0x12aa5860 */
  push32(0x12aafab0u); f_12aa5860();
  /* 12aafab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafab3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafab6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12aafaba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aafabd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafac0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12aafac6 push edx */
  push32((uint32_t)(EDX));
  /* 12aafac7 call 0x12aa5860 */
  push32(0x12aafaccu); f_12aa5860();
  /* 12aafacc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafacf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aafad2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafad6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aafad9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafadc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12aafae2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafae3 call 0x12aa5860 */
  push32(0x12aafae8u); f_12aa5860();
  /* 12aafae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafaeb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aafaee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12aafaf2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aafaf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafaf8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12aafafe push edx */
  push32((uint32_t)(EDX));
  /* 12aafaff call 0x12aa5860 */
  push32(0x12aafb04u); f_12aa5860();
  /* 12aafb04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aafb0a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafb0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aafb11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aafb14 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb19 push eax */
  push32((uint32_t)(EAX));
  /* 12aafb1a call 0x12aa2a10 */
  push32(0x12aafb1fu); f_12aa2a10();
  /* 12aafb1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aafb25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafb29 je 0x12aafd46 */
  if (C.zf) goto L_12aafd46;
  /* 12aafb2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aafb32 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aafb35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aafb38 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb3e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aafb41 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12aafb46 mov eax, dword ptr [0x12acdc98] */
  EAX = (r32((uint32_t)(0x12acdc98)));
  /* 12aafb4b push eax */
  push32((uint32_t)(EAX));
  /* 12aafb4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aafb4f push ecx */
  push32((uint32_t)(ECX));
  /* 12aafb50 call 0x12aa9310 */
  push32(0x12aafb55u); f_12aa9310();
  /* 12aafb55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aafb5f jmp 0x12aafb6a */
  goto L_12aafb6a;
L_12aafb61:;
  /* 12aafb61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafb64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12aafb6a:;
  /* 12aafb6a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafb6e jae 0x12aafbde */
  if (!C.cf) goto L_12aafbde;
  /* 12aafb70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafb73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafb76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafb79 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12aafb7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafb7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafb82 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aafb85 push edx */
  push32((uint32_t)(EDX));
  /* 12aafb86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafb89 push eax */
  push32((uint32_t)(EAX));
  /* 12aafb8a call 0x12aa59e0 */
  push32(0x12aafb8fu); f_12aa59e0();
  /* 12aafb8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb92 push eax */
  push32((uint32_t)(EAX));
  /* 12aafb93 call 0x12aa5860 */
  push32(0x12aafb98u); f_12aa5860();
  /* 12aafb98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafb9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafb9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafba2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aafba5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafba8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafbab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafbae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12aafbb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafbb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafbb8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12aafbbc push edx */
  push32((uint32_t)(EDX));
  /* 12aafbbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafbc0 push eax */
  push32((uint32_t)(EAX));
  /* 12aafbc1 call 0x12aa59e0 */
  push32(0x12aafbc6u); f_12aa59e0();
  /* 12aafbc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafbc9 push eax */
  push32((uint32_t)(EAX));
  /* 12aafbca call 0x12aa5860 */
  push32(0x12aafbcfu); f_12aa5860();
  /* 12aafbcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafbd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafbd5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafbd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aafbdc jmp 0x12aafb61 */
  goto L_12aafb61;
L_12aafbde:;
  /* 12aafbde mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aafbe5 jmp 0x12aafbf0 */
  goto L_12aafbf0;
L_12aafbe7:;
  /* 12aafbe7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafbea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafbed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12aafbf0:;
  /* 12aafbf0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafbf4 jae 0x12aafc66 */
  if (!C.cf) goto L_12aafc66;
  /* 12aafbf6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafbf9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafbfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafbff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12aafc03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafc06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafc09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12aafc0d push eax */
  push32((uint32_t)(EAX));
  /* 12aafc0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc11 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafc12 call 0x12aa59e0 */
  push32(0x12aafc17u); f_12aa59e0();
  /* 12aafc17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc1a push eax */
  push32((uint32_t)(EAX));
  /* 12aafc1b call 0x12aa5860 */
  push32(0x12aafc20u); f_12aa5860();
  /* 12aafc20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc26 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12aafc2a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aafc2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafc30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafc33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc36 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12aafc3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafc3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafc40 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12aafc44 push eax */
  push32((uint32_t)(EAX));
  /* 12aafc45 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc48 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafc49 call 0x12aa59e0 */
  push32(0x12aafc4eu); f_12aa59e0();
  /* 12aafc4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc51 push eax */
  push32((uint32_t)(EAX));
  /* 12aafc52 call 0x12aa5860 */
  push32(0x12aafc57u); f_12aa5860();
  /* 12aafc57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc5d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12aafc61 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aafc64 jmp 0x12aafbe7 */
  goto L_12aafbe7;
L_12aafc66:;
  /* 12aafc66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafc69 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc6c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12aafc72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafc75 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12aafc7b push ecx */
  push32((uint32_t)(ECX));
  /* 12aafc7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc7f push edx */
  push32((uint32_t)(EDX));
  /* 12aafc80 call 0x12aa59e0 */
  push32(0x12aafc85u); f_12aa59e0();
  /* 12aafc85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc88 push eax */
  push32((uint32_t)(EAX));
  /* 12aafc89 call 0x12aa5860 */
  push32(0x12aafc8eu); f_12aa5860();
  /* 12aafc8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafc91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafc94 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafc98 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aafc9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafc9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafca1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12aafca7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafcaa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12aafcb0 push eax */
  push32((uint32_t)(EAX));
  /* 12aafcb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafcb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafcb5 call 0x12aa59e0 */
  push32(0x12aafcbau); f_12aa59e0();
  /* 12aafcba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafcbd push eax */
  push32((uint32_t)(EAX));
  /* 12aafcbe call 0x12aa5860 */
  push32(0x12aafcc3u); f_12aa5860();
  /* 12aafcc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafcc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafcc9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12aafccd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aafcd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafcd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafcd6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12aafcdc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafcdf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12aafce5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafce6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafce9 push edx */
  push32((uint32_t)(EDX));
  /* 12aafcea call 0x12aa59e0 */
  push32(0x12aafcefu); f_12aa59e0();
  /* 12aafcef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafcf2 push eax */
  push32((uint32_t)(EAX));
  /* 12aafcf3 call 0x12aa5860 */
  push32(0x12aafcf8u); f_12aa5860();
  /* 12aafcf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafcfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafcfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aafd02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aafd05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafd08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafd0b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12aafd11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafd14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12aafd1a push eax */
  push32((uint32_t)(EAX));
  /* 12aafd1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafd1e push ecx */
  push32((uint32_t)(ECX));
  /* 12aafd1f call 0x12aa59e0 */
  push32(0x12aafd24u); f_12aa59e0();
  /* 12aafd24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafd27 push eax */
  push32((uint32_t)(EAX));
  /* 12aafd28 call 0x12aa5860 */
  push32(0x12aafd2du); f_12aa5860();
  /* 12aafd2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafd30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafd33 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12aafd37 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aafd3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aafd3d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aafd40 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12aafd46:;
  /* 12aafd46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aafd49 pop esi */
  ESI = (pop32());
  /* 12aafd4a mov esp, ebp */
  ESP = (EBP);
  /* 12aafd4c pop ebp */
  EBP = (pop32());
  /* 12aafd4d ret  */
  ESPCHK(0x12aaf9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x12aafd50 (31 bytes, 15 insns) */
void f_12aafd50(void) {
  FTRACE(0x12aafd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aafd50 push ebp */
  push32((uint32_t)(EBP));
  /* 12aafd51 mov ebp, esp */
  EBP = (ESP);
  /* 12aafd53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aafd55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aafd58 push eax */
  push32((uint32_t)(EAX));
  /* 12aafd59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafd5c push ecx */
  push32((uint32_t)(ECX));
  /* 12aafd5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aafd60 push edx */
  push32((uint32_t)(EDX));
  /* 12aafd61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafd64 push eax */
  push32((uint32_t)(EAX));
  /* 12aafd65 call 0x12aafd70 */
  push32(0x12aafd6au); f_12aafd70();
  /* 12aafd6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafd6d pop ebp */
  EBP = (pop32());
  /* 12aafd6e ret  */
  ESPCHK(0x12aafd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd70 @ 0x12aafd70 (393 bytes, 123 insns) */
void f_12aafd70(void) {
  FTRACE(0x12aafd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aafd70 push ebp */
  push32((uint32_t)(EBP));
  /* 12aafd71 mov ebp, esp */
  EBP = (ESP);
  /* 12aafd73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aafd76 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafd7a jne 0x12aafd86 */
  if (!C.zf) goto L_12aafd86;
  /* 12aafd7c mov eax, dword ptr [0x12acdc98] */
  EAX = (r32((uint32_t)(0x12acdc98)));
  /* 12aafd81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aafd84 jmp 0x12aafd8c */
  goto L_12aafd8c;
L_12aafd86:;
  /* 12aafd86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aafd89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aafd8c:;
  /* 12aafd8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aafd8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aafd92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aafd95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aafd98 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aafd9d call dword ptr [0x12ad0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0278))), 0x12aafda3u);
  /* 12aafda3 cmp dword ptr [0x12ace804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafdaa je 0x12aafdca */
  if (C.zf) goto L_12aafdca;
  /* 12aafdac push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aafdb1 call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aafdb7u);
  /* 12aafdb7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aafdb9 call 0x12aa6430 */
  push32(0x12aafdbeu); f_12aa6430();
  /* 12aafdbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafdc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12aafdc8 jmp 0x12aafdd1 */
  goto L_12aafdd1;
L_12aafdca:;
  /* 12aafdca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12aafdd1:;
  /* 12aafdd1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafdd5 jbe 0x12aafec2 */
  if ((C.cf||C.zf)) goto L_12aafec2;
  /* 12aafddb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafdde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aafde0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12aafde3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aafde7 je 0x12aafdf1 */
  if (C.zf) goto L_12aafdf1;
  /* 12aafde9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aafded je 0x12aafdf6 */
  if (C.zf) goto L_12aafdf6;
  /* 12aafdef jmp 0x12aafe50 */
  goto L_12aafe50;
L_12aafdf1:;
  /* 12aafdf1 jmp 0x12aafec2 */
  goto L_12aafec2;
L_12aafdf6:;
  /* 12aafdf6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafdf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafdfc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12aafdff mov dword ptr [0x12ace7f0], 0 */
  w32((uint32_t)(0x12ace7f0), (0x0u));
  /* 12aafe09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aafe0f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafe12 jne 0x12aafe27 */
  if (!C.zf) goto L_12aafe27;
  /* 12aafe14 mov dword ptr [0x12ace7f0], 1 */
  w32((uint32_t)(0x12ace7f0), (0x1u));
  /* 12aafe1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafe24 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12aafe27:;
  /* 12aafe27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aafe2a push ecx */
  push32((uint32_t)(ECX));
  /* 12aafe2b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12aafe2e push edx */
  push32((uint32_t)(EDX));
  /* 12aafe2f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12aafe32 push eax */
  push32((uint32_t)(EAX));
  /* 12aafe33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aafe36 push ecx */
  push32((uint32_t)(ECX));
  /* 12aafe37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aafe3c push eax */
  push32((uint32_t)(EAX));
  /* 12aafe3d call 0x12aaff00 */
  push32(0x12aafe42u); f_12aaff00();
  /* 12aafe42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafe45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafe4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aafe4e jmp 0x12aafebd */
  goto L_12aafebd;
L_12aafe50:;
  /* 12aafe50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aafe55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aafe57 mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12aafe5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aafe5f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12aafe63 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12aafe69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aafe6b je 0x12aafe98 */
  if (C.zf) goto L_12aafe98;
  /* 12aafe6d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafe71 jbe 0x12aafe98 */
  if ((C.cf||C.zf)) goto L_12aafe98;
  /* 12aafe73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafe76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe79 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aafe7b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aafe7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafe80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafe83 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aafe86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafe8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aafe8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafe92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aafe95 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12aafe98:;
  /* 12aafe98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafe9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafe9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aafea0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aafea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafea5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafea8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aafeab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aafeae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafeb1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aafeb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aafeb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aafeba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12aafebd:;
  /* 12aafebd jmp 0x12aafdd1 */
  goto L_12aafdd1;
L_12aafec2:;
  /* 12aafec2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafec6 je 0x12aafed4 */
  if (C.zf) goto L_12aafed4;
  /* 12aafec8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aafeca call 0x12aa64d0 */
  push32(0x12aafecfu); f_12aa64d0();
  /* 12aafecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafed2 jmp 0x12aafedf */
  goto L_12aafedf;
L_12aafed4:;
  /* 12aafed4 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aafed9 call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aafedfu);
L_12aafedf:;
  /* 12aafedf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafee3 jbe 0x12aafef3 */
  if ((C.cf||C.zf)) goto L_12aafef3;
  /* 12aafee5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aafee8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aafeeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aafeee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aafef1 jmp 0x12aafef5 */
  goto L_12aafef5;
L_12aafef3:;
  /* 12aafef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aafef5:;
  /* 12aafef5 mov esp, ebp */
  ESP = (EBP);
  /* 12aafef7 pop ebp */
  EBP = (pop32());
  /* 12aafef8 ret  */
  ESPCHK(0x12aafd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x12aaff00 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12aaff00(void) {
  FTRACE(0x12aaff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaff00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaff01 mov ebp, esp */
  EBP = (ESP);
  /* 12aaff03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaff06 push esi */
  push32((uint32_t)(ESI));
  /* 12aaff07 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12aaff0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aaff0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaff11 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaff14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aaff17 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaff1b ja 0x12ab0468 */
  if ((!C.cf&&!C.zf)) goto L_12ab0468;
  /* 12aaff21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaff24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaff26 mov dl, byte ptr [eax + 0x12ab04c9] */
  DL = (r8((uint32_t)(EAX + 0x12ab04c9)));
  /* 12aaff2c jmp dword ptr [edx*4 + 0x12ab046d] */
  switch (EDX) {
    case 0: goto L_12ab0446;
    case 1: goto L_12aaff55;
    case 2: goto L_12aaff9b;
    case 3: goto L_12ab00e8;
    case 4: goto L_12ab0110;
    case 5: goto L_12ab01af;
    case 6: goto L_12ab021b;
    case 7: goto L_12ab0244;
    case 8: goto L_12ab0285;
    case 9: goto L_12ab0367;
    case 10: goto L_12ab03ce;
    case 11: goto L_12ab041b;
    case 12: goto L_12aaff33;
    case 13: goto L_12aaff78;
    case 14: goto L_12aaffbe;
    case 15: goto L_12ab00be;
    case 16: goto L_12ab0155;
    case 17: goto L_12ab0182;
    case 18: goto L_12ab01d7;
    case 19: goto L_12ab025b;
    case 20: goto L_12ab0309;
    case 21: goto L_12ab0398;
    case 22: goto L_12ab0468;
    default: x86_unimpl("switch@0x12aaff2c out of table"); return;
  }
L_12aaff33:;
  /* 12aaff33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaff36 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaff37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaff3a push edx */
  push32((uint32_t)(EDX));
  /* 12aaff3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaff3e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12aaff41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaff44 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12aaff47 push eax */
  push32((uint32_t)(EAX));
  /* 12aaff48 call 0x12ab0520 */
  push32(0x12aaff4du); f_12ab0520();
  /* 12aaff4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaff50 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12aaff55:;
  /* 12aaff55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaff58 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaff59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaff5c push edx */
  push32((uint32_t)(EDX));
  /* 12aaff5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaff60 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12aaff63 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaff66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12aaff6a push eax */
  push32((uint32_t)(EAX));
  /* 12aaff6b call 0x12ab0520 */
  push32(0x12aaff70u); f_12ab0520();
  /* 12aaff70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaff73 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12aaff78:;
  /* 12aaff78 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaff7b push ecx */
  push32((uint32_t)(ECX));
  /* 12aaff7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaff7f push edx */
  push32((uint32_t)(EDX));
  /* 12aaff80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaff83 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aaff86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaff89 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12aaff8d push eax */
  push32((uint32_t)(EAX));
  /* 12aaff8e call 0x12ab0520 */
  push32(0x12aaff93u); f_12ab0520();
  /* 12aaff93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaff96 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12aaff9b:;
  /* 12aaff9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaff9e push ecx */
  push32((uint32_t)(ECX));
  /* 12aaff9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaffa2 push edx */
  push32((uint32_t)(EDX));
  /* 12aaffa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaffa6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aaffa9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaffac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12aaffb0 push eax */
  push32((uint32_t)(EAX));
  /* 12aaffb1 call 0x12ab0520 */
  push32(0x12aaffb6u); f_12ab0520();
  /* 12aaffb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaffb9 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12aaffbe:;
  /* 12aaffbe cmp dword ptr [0x12ace7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaffc5 je 0x12ab0046 */
  if (C.zf) goto L_12ab0046;
  /* 12aaffc7 mov dword ptr [0x12ace7f0], 0 */
  w32((uint32_t)(0x12ace7f0), (0x0u));
  /* 12aaffd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaffd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaffd5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaffd8 push edx */
  push32((uint32_t)(EDX));
  /* 12aaffd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaffdc push eax */
  push32((uint32_t)(EAX));
  /* 12aaffdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaffe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaffe1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaffe4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12aaffea push eax */
  push32((uint32_t)(EAX));
  /* 12aaffeb call 0x12ab06d0 */
  push32(0x12aafff0u); f_12ab06d0();
  /* 12aafff0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aafff3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aafff6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aafff9 jne 0x12ab0000 */
  if (!C.zf) goto L_12ab0000;
  /* 12aafffb jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0000:;
  /* 12ab0000 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0003 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0005 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12ab0008 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab000b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab000d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0010 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0013 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab0015 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0018 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab001a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab001d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0020 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab0022 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0025 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0026 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0029 push edx */
  push32((uint32_t)(EDX));
  /* 12ab002a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab002d push eax */
  push32((uint32_t)(EAX));
  /* 12ab002e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0031 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0032 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0035 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12ab003b push eax */
  push32((uint32_t)(EAX));
  /* 12ab003c call 0x12ab06d0 */
  push32(0x12ab0041u); f_12ab06d0();
  /* 12ab0041 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0044 jmp 0x12ab00b9 */
  goto L_12ab00b9;
L_12ab0046:;
  /* 12ab0046 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0049 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab004a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab004d push edx */
  push32((uint32_t)(EDX));
  /* 12ab004e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0051 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0052 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0055 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0056 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0059 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12ab005f push eax */
  push32((uint32_t)(EAX));
  /* 12ab0060 call 0x12ab06d0 */
  push32(0x12ab0065u); f_12ab06d0();
  /* 12ab0065 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0068 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab006b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab006e jne 0x12ab0075 */
  if (!C.zf) goto L_12ab0075;
  /* 12ab0070 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0075:;
  /* 12ab0075 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0078 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab007a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12ab007d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0080 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0082 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0085 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0088 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab008a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab008d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab008f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0092 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0095 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab0097 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab009a push ecx */
  push32((uint32_t)(ECX));
  /* 12ab009b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab009e push edx */
  push32((uint32_t)(EDX));
  /* 12ab009f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab00a2 push eax */
  push32((uint32_t)(EAX));
  /* 12ab00a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab00a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab00a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab00aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12ab00b0 push eax */
  push32((uint32_t)(EAX));
  /* 12ab00b1 call 0x12ab06d0 */
  push32(0x12ab00b6u); f_12ab06d0();
  /* 12ab00b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab00b9:;
  /* 12ab00b9 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab00be:;
  /* 12ab00be mov ecx, dword ptr [0x12ace7f0] */
  ECX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab00c4 mov dword ptr [0x12ace800], ecx */
  w32((uint32_t)(0x12ace800), (ECX));
  /* 12ab00ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab00cd push edx */
  push32((uint32_t)(EDX));
  /* 12ab00ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab00d1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab00d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab00d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab00d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ab00da push edx */
  push32((uint32_t)(EDX));
  /* 12ab00db call 0x12ab0570 */
  push32(0x12ab00e0u); f_12ab0570();
  /* 12ab00e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab00e3 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab00e8:;
  /* 12ab00e8 mov eax, dword ptr [0x12ace7f0] */
  EAX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab00ed mov dword ptr [0x12ace800], eax */
  w32((uint32_t)(0x12ace800), (EAX));
  /* 12ab00f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab00f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab00f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab00f9 push edx */
  push32((uint32_t)(EDX));
  /* 12ab00fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab00fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab00ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ab0102 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0103 call 0x12ab0570 */
  push32(0x12ab0108u); f_12ab0570();
  /* 12ab0108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab010b jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0110:;
  /* 12ab0110 mov edx, dword ptr [0x12ace7f0] */
  EDX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab0116 mov dword ptr [0x12ace800], edx */
  w32((uint32_t)(0x12ace800), (EDX));
  /* 12ab011c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab011f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ab0122 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab0123 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12ab0128 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab012a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab012d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0131 jne 0x12ab013a */
  if (!C.zf) goto L_12ab013a;
  /* 12ab0133 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12ab013a:;
  /* 12ab013a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab013d push edx */
  push32((uint32_t)(EDX));
  /* 12ab013e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0141 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0142 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0147 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0148 call 0x12ab0570 */
  push32(0x12ab014du); f_12ab0570();
  /* 12ab014d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0150 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0155:;
  /* 12ab0155 mov edx, dword ptr [0x12ace7f0] */
  EDX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab015b mov dword ptr [0x12ace800], edx */
  w32((uint32_t)(0x12ace800), (EDX));
  /* 12ab0161 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0164 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0165 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0168 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0169 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ab016b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab016e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ab0171 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0174 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0175 call 0x12ab0570 */
  push32(0x12ab017au); f_12ab0570();
  /* 12ab017a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab017d jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0182:;
  /* 12ab0182 mov ecx, dword ptr [0x12ace7f0] */
  ECX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab0188 mov dword ptr [0x12ace800], ecx */
  w32((uint32_t)(0x12ace800), (ECX));
  /* 12ab018e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0191 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0192 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0195 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0196 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0198 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab019b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ab019e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab01a1 push edx */
  push32((uint32_t)(EDX));
  /* 12ab01a2 call 0x12ab0570 */
  push32(0x12ab01a7u); f_12ab0570();
  /* 12ab01a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab01aa jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab01af:;
  /* 12ab01af mov eax, dword ptr [0x12ace7f0] */
  EAX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab01b4 mov dword ptr [0x12ace800], eax */
  w32((uint32_t)(0x12ace800), (EAX));
  /* 12ab01b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab01bc push ecx */
  push32((uint32_t)(ECX));
  /* 12ab01bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab01c0 push edx */
  push32((uint32_t)(EDX));
  /* 12ab01c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab01c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab01c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ab01c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab01ca call 0x12ab0570 */
  push32(0x12ab01cfu); f_12ab0570();
  /* 12ab01cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab01d2 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab01d7:;
  /* 12ab01d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab01da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab01de jg 0x12ab01fc */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab01fc;
  /* 12ab01e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab01e3 push eax */
  push32((uint32_t)(EAX));
  /* 12ab01e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab01e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab01e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab01eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12ab01f1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab01f2 call 0x12ab0520 */
  push32(0x12ab01f7u); f_12ab0520();
  /* 12ab01f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab01fa jmp 0x12ab0216 */
  goto L_12ab0216;
L_12ab01fc:;
  /* 12ab01fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab01ff push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0200 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0203 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0204 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0207 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12ab020d push ecx */
  push32((uint32_t)(ECX));
  /* 12ab020e call 0x12ab0520 */
  push32(0x12ab0213u); f_12ab0520();
  /* 12ab0213 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab0216:;
  /* 12ab0216 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab021b:;
  /* 12ab021b mov edx, dword ptr [0x12ace7f0] */
  EDX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab0221 mov dword ptr [0x12ace800], edx */
  w32((uint32_t)(0x12ace800), (EDX));
  /* 12ab0227 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab022a push eax */
  push32((uint32_t)(EAX));
  /* 12ab022b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab022e push ecx */
  push32((uint32_t)(ECX));
  /* 12ab022f push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0231 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0234 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0236 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0237 call 0x12ab0570 */
  push32(0x12ab023cu); f_12ab0570();
  /* 12ab023c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab023f jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0244:;
  /* 12ab0244 mov ecx, dword ptr [0x12ace7f0] */
  ECX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab024a mov dword ptr [0x12ace800], ecx */
  w32((uint32_t)(0x12ace800), (ECX));
  /* 12ab0250 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0253 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12ab0256 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab0259 jmp 0x12ab02ad */
  goto L_12ab02ad;
L_12ab025b:;
  /* 12ab025b mov ecx, dword ptr [0x12ace7f0] */
  ECX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab0261 mov dword ptr [0x12ace800], ecx */
  w32((uint32_t)(0x12ace800), (ECX));
  /* 12ab0267 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab026a push edx */
  push32((uint32_t)(EDX));
  /* 12ab026b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab026e push eax */
  push32((uint32_t)(EAX));
  /* 12ab026f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab0271 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0274 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ab0277 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0278 call 0x12ab0570 */
  push32(0x12ab027du); f_12ab0570();
  /* 12ab027d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0280 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0285:;
  /* 12ab0285 mov eax, dword ptr [0x12ace7f0] */
  EAX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab028a mov dword ptr [0x12ace800], eax */
  w32((uint32_t)(0x12ace800), (EAX));
  /* 12ab028f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0292 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0296 jne 0x12ab02a1 */
  if (!C.zf) goto L_12ab02a1;
  /* 12ab0298 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12ab029f jmp 0x12ab02ad */
  goto L_12ab02ad;
L_12ab02a1:;
  /* 12ab02a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab02a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12ab02a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab02aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ab02ad:;
  /* 12ab02ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab02b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ab02b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab02b6 jge 0x12ab02c1 */
  if ((C.sf==C.of)) goto L_12ab02c1;
  /* 12ab02b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab02bf jmp 0x12ab02ee */
  goto L_12ab02ee;
L_12ab02c1:;
  /* 12ab02c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab02c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ab02c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab02c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12ab02cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab02cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab02d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab02d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ab02d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab02d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12ab02de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab02e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab02e3 jl 0x12ab02ee */
  if ((C.sf!=C.of)) goto L_12ab02ee;
  /* 12ab02e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab02e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab02eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ab02ee:;
  /* 12ab02ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab02f1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab02f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab02f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab02f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab02f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab02fb push edx */
  push32((uint32_t)(EDX));
  /* 12ab02fc call 0x12ab0570 */
  push32(0x12ab0301u); f_12ab0570();
  /* 12ab0301 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0304 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0309:;
  /* 12ab0309 cmp dword ptr [0x12ace7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0310 je 0x12ab0340 */
  if (C.zf) goto L_12ab0340;
  /* 12ab0312 mov dword ptr [0x12ace7f0], 0 */
  w32((uint32_t)(0x12ace7f0), (0x0u));
  /* 12ab031c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab031f push eax */
  push32((uint32_t)(EAX));
  /* 12ab0320 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0323 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0324 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0327 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab032b push eax */
  push32((uint32_t)(EAX));
  /* 12ab032c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab032f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12ab0335 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0336 call 0x12ab06d0 */
  push32(0x12ab033bu); f_12ab06d0();
  /* 12ab033b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab033e jmp 0x12ab0362 */
  goto L_12ab0362;
L_12ab0340:;
  /* 12ab0340 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0343 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0344 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0347 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0348 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab034b push edx */
  push32((uint32_t)(EDX));
  /* 12ab034c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab034f push eax */
  push32((uint32_t)(EAX));
  /* 12ab0350 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0353 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12ab0359 push edx */
  push32((uint32_t)(EDX));
  /* 12ab035a call 0x12ab06d0 */
  push32(0x12ab035fu); f_12ab06d0();
  /* 12ab035f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab0362:;
  /* 12ab0362 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0367:;
  /* 12ab0367 mov dword ptr [0x12ace7f0], 0 */
  w32((uint32_t)(0x12ace7f0), (0x0u));
  /* 12ab0371 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0374 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0375 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0378 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0379 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab037c push edx */
  push32((uint32_t)(EDX));
  /* 12ab037d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0380 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0381 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0384 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12ab038a push edx */
  push32((uint32_t)(EDX));
  /* 12ab038b call 0x12ab06d0 */
  push32(0x12ab0390u); f_12ab06d0();
  /* 12ab0390 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0393 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0398:;
  /* 12ab0398 mov eax, dword ptr [0x12ace7f0] */
  EAX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab039d mov dword ptr [0x12ace800], eax */
  w32((uint32_t)(0x12ace800), (EAX));
  /* 12ab03a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab03a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ab03a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab03a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12ab03ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab03b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab03b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab03b6 push edx */
  push32((uint32_t)(EDX));
  /* 12ab03b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab03ba push eax */
  push32((uint32_t)(EAX));
  /* 12ab03bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab03bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab03c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab03c1 call 0x12ab0570 */
  push32(0x12ab03c6u); f_12ab0570();
  /* 12ab03c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab03c9 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab03ce:;
  /* 12ab03ce mov edx, dword ptr [0x12ace7f0] */
  EDX = (r32((uint32_t)(0x12ace7f0)));
  /* 12ab03d4 mov dword ptr [0x12ace800], edx */
  w32((uint32_t)(0x12ace800), (EDX));
  /* 12ab03da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab03dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ab03e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab03e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12ab03e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab03e8 mov ecx, eax */
  ECX = (EAX);
  /* 12ab03ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab03ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab03f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab03f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ab03f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab03f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12ab03fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab03fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0400 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab0403 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0406 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0407 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab040a push ecx */
  push32((uint32_t)(ECX));
  /* 12ab040b push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab040d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0410 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0411 call 0x12ab0570 */
  push32(0x12ab0416u); f_12ab0570();
  /* 12ab0416 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0419 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab041b:;
  /* 12ab041b call 0x12ab1530 */
  push32(0x12ab0420u); f_12ab1530();
  /* 12ab0420 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0423 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0424 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0427 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0428 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab042b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab042d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0431 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12ab0434 mov ecx, dword ptr [eax*4 + 0x12acde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acde1c)));
  /* 12ab043b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab043c call 0x12ab0520 */
  push32(0x12ab0441u); f_12ab0520();
  /* 12ab0441 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0444 jmp 0x12ab0468 */
  goto L_12ab0468;
L_12ab0446:;
  /* 12ab0446 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0449 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab044b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12ab044e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0451 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0456 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0459 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab045b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab045e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0460 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0466 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ab0468:;
  /* 12ab0468 pop esi */
  ESI = (pop32());
  /* 12ab0469 mov esp, ebp */
  ESP = (EBP);
  /* 12ab046b pop ebp */
  EBP = (pop32());
  /* 12ab046c ret  */
  ESPCHK(0x12aaff00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12ab0520 (72 bytes, 30 insns) */
void f_12ab0520(void) {
  FTRACE(0x12ab0520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0520 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0521 mov ebp, esp */
  EBP = (ESP);
L_12ab0523:;
  /* 12ab0523 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0526 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0529 je 0x12ab0566 */
  if (C.zf) goto L_12ab0566;
  /* 12ab052b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab052e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab0531 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab0533 je 0x12ab0566 */
  if (C.zf) goto L_12ab0566;
  /* 12ab0535 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0538 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab053a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab053d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab053f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ab0541 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0544 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0546 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab054c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab054e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0554 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ab0557 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab055a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab055c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab055f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0562 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab0564 jmp 0x12ab0523 */
  goto L_12ab0523;
L_12ab0566:;
  /* 12ab0566 pop ebp */
  EBP = (pop32());
  /* 12ab0567 ret  */
  ESPCHK(0x12ab0520u, _esp0);
  ESP += 4; return;
}

/* FUN_10010570 @ 0x12ab0570 (173 bytes, 64 insns) */
void f_12ab0570(void) {
  FTRACE(0x12ab0570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0570 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0571 mov ebp, esp */
  EBP = (ESP);
  /* 12ab0573 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab057b cmp dword ptr [0x12ace800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0582 je 0x12ab059a */
  if (C.zf) goto L_12ab059a;
  /* 12ab0584 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0587 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab058b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab058c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab058f push edx */
  push32((uint32_t)(EDX));
  /* 12ab0590 call 0x12ab0620 */
  push32(0x12ab0595u); f_12ab0620();
  /* 12ab0595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0598 jmp 0x12ab0619 */
  goto L_12ab0619;
L_12ab059a:;
  /* 12ab059a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab059d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab05a0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab05a2 jae 0x12ab0610 */
  if (!C.cf) goto L_12ab0610;
  /* 12ab05a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab05a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab05aa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12ab05ad jmp 0x12ab05b8 */
  goto L_12ab05b8;
L_12ab05af:;
  /* 12ab05af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab05b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab05b5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12ab05b8:;
  /* 12ab05b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab05bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab05be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab05c0 je 0x12ab05f4 */
  if (C.zf) goto L_12ab05f4;
  /* 12ab05c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab05c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab05c6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12ab05cb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab05cd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab05d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab05d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab05d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab05d8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12ab05db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab05de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab05df mov ecx, 0xa */
  ECX = (0xau);
  /* 12ab05e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab05e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab05e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab05ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab05ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab05f2 jmp 0x12ab05af */
  goto L_12ab05af;
L_12ab05f4:;
  /* 12ab05f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab05f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab05f9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab05fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab05ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ab0601 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0604 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0606 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0609 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab060c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ab060e jmp 0x12ab0619 */
  goto L_12ab0619;
L_12ab0610:;
  /* 12ab0610 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0613 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12ab0619:;
  /* 12ab0619 mov esp, ebp */
  ESP = (EBP);
  /* 12ab061b pop ebp */
  EBP = (pop32());
  /* 12ab061c ret  */
  ESPCHK(0x12ab0570u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12ab0620 (172 bytes, 65 insns) */
void f_12ab0620(void) {
  FTRACE(0x12ab0620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0620 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0621 mov ebp, esp */
  EBP = (ESP);
  /* 12ab0623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0629 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab062b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab062e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0631 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0634 jbe 0x12ab067b */
  if ((C.cf||C.zf)) goto L_12ab067b;
L_12ab0636:;
  /* 12ab0636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0639 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab063a mov ecx, 0xa */
  ECX = (0xau);
  /* 12ab063f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab0641 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0647 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ab0649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab064c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab064f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab0652 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0655 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0657 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab065a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab065d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab065f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0662 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab0663 mov ecx, 0xa */
  ECX = (0xau);
  /* 12ab0668 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab066a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab066d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0671 jle 0x12ab067b */
  if ((C.zf||C.sf!=C.of)) goto L_12ab067b;
  /* 12ab0673 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0676 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0679 ja 0x12ab0636 */
  if ((!C.cf&&!C.zf)) goto L_12ab0636;
L_12ab067b:;
  /* 12ab067b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab067e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0680 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ab0683 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0689 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ab068b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab068e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0691 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ab0694:;
  /* 12ab0694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0697 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab0699 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12ab069c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab069f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab06a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab06a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ab06a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab06a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab06ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab06af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab06b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ab06b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12ab06b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab06ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab06bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ab06c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab06c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab06c6 jb 0x12ab0694 */
  if (C.cf) goto L_12ab0694;
  /* 12ab06c8 mov esp, ebp */
  ESP = (EBP);
  /* 12ab06ca pop ebp */
  EBP = (pop32());
  /* 12ab06cb ret  */
  ESPCHK(0x12ab0620u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x12ab06d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12ab06d0(void) {
  FTRACE(0x12ab06d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab06d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab06d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab06d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12ab06d6:;
  /* 12ab06d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab06d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab06dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab06de je 0x12ab0b4c */
  if (C.zf) goto L_12ab0b4c;
  /* 12ab06e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab06e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab06ea je 0x12ab0b4c */
  if (C.zf) goto L_12ab0b4c;
  /* 12ab06f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ab06f4 mov dword ptr [0x12ace800], 0 */
  w32((uint32_t)(0x12ace800), (0x0u));
  /* 12ab06fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ab0705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0708 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab070b jmp 0x12ab0716 */
  goto L_12ab0716;
L_12ab070d:;
  /* 12ab070d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0710 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0713 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ab0716:;
  /* 12ab0716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0719 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab071c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab071f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab0722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0728 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab072b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab072d jne 0x12ab0731 */
  if (!C.zf) goto L_12ab0731;
  /* 12ab072f jmp 0x12ab070d */
  goto L_12ab070d;
L_12ab0731:;
  /* 12ab0731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0734 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0737 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab073a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab073d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab0740 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ab0743 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ab0746 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0749 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ab074c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0750 ja 0x12ab0aa0 */
  if ((!C.cf&&!C.zf)) goto L_12ab0aa0;
  /* 12ab0756 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ab0759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab075b mov al, byte ptr [ecx + 0x12ab0b7c] */
  AL = (r8((uint32_t)(ECX + 0x12ab0b7c)));
  /* 12ab0761 jmp dword ptr [eax*4 + 0x12ab0b50] */
  switch (EAX) {
    case 0: goto L_12ab09bf;
    case 1: goto L_12ab08a3;
    case 2: goto L_12ab082e;
    case 3: goto L_12ab0768;
    case 4: goto L_12ab07a6;
    case 5: goto L_12ab0807;
    case 6: goto L_12ab0855;
    case 7: goto L_12ab087c;
    case 8: goto L_12ab08ea;
    case 9: goto L_12ab07e4;
    case 10: goto L_12ab0aa0;
    default: x86_unimpl("switch@0x12ab0761 out of table"); return;
  }
L_12ab0768:;
  /* 12ab0768 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab076b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ab076e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab0771 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0774 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ab0777 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab077b ja 0x12ab07a1 */
  if ((!C.cf&&!C.zf)) goto L_12ab07a1;
  /* 12ab077d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab0780 jmp dword ptr [ecx*4 + 0x12ab0bcf] */
  switch (ECX) {
    case 0: goto L_12ab0787;
    case 1: goto L_12ab0791;
    case 2: goto L_12ab0797;
    case 3: goto L_12ab079d;
    case 4: goto L_12ab07c5;
    case 5: goto L_12ab07cf;
    case 6: goto L_12ab07d5;
    case 7: goto L_12ab07db;
    default: x86_unimpl("switch@0x12ab0780 out of table"); return;
  }
L_12ab0787:;
  /* 12ab0787 mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab0791:;
  /* 12ab0791 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12ab0795 jmp 0x12ab07a1 */
  goto L_12ab07a1;
L_12ab0797:;
  /* 12ab0797 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12ab079b jmp 0x12ab07a1 */
  goto L_12ab07a1;
L_12ab079d:;
  /* 12ab079d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12ab07a1:;
  /* 12ab07a1 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab07a6:;
  /* 12ab07a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab07a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ab07ac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab07af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab07b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ab07b5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab07b9 ja 0x12ab07df */
  if ((!C.cf&&!C.zf)) goto L_12ab07df;
  /* 12ab07bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab07be jmp dword ptr [ecx*4 + 0x12ab0bdf] */
  switch (ECX) {
    case 0: goto L_12ab07c5;
    case 1: goto L_12ab07cf;
    case 2: goto L_12ab07d5;
    case 3: goto L_12ab07db;
    default: x86_unimpl("switch@0x12ab07be out of table"); return;
  }
L_12ab07c5:;
  /* 12ab07c5 mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab07cf:;
  /* 12ab07cf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12ab07d3 jmp 0x12ab07df */
  goto L_12ab07df;
L_12ab07d5:;
  /* 12ab07d5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12ab07d9 jmp 0x12ab07df */
  goto L_12ab07df;
L_12ab07db:;
  /* 12ab07db mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12ab07df:;
  /* 12ab07df jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab07e4:;
  /* 12ab07e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab07e7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12ab07ea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab07ee je 0x12ab07f8 */
  if (C.zf) goto L_12ab07f8;
  /* 12ab07f0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab07f4 je 0x12ab07fe */
  if (C.zf) goto L_12ab07fe;
  /* 12ab07f6 jmp 0x12ab0802 */
  goto L_12ab0802;
L_12ab07f8:;
  /* 12ab07f8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12ab07fc jmp 0x12ab0802 */
  goto L_12ab0802;
L_12ab07fe:;
  /* 12ab07fe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12ab0802:;
  /* 12ab0802 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab0807:;
  /* 12ab0807 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab080a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ab080d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0811 je 0x12ab081b */
  if (C.zf) goto L_12ab081b;
  /* 12ab0813 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0817 je 0x12ab0825 */
  if (C.zf) goto L_12ab0825;
  /* 12ab0819 jmp 0x12ab0829 */
  goto L_12ab0829;
L_12ab081b:;
  /* 12ab081b mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab0825:;
  /* 12ab0825 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12ab0829:;
  /* 12ab0829 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab082e:;
  /* 12ab082e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0831 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12ab0834 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0838 je 0x12ab0842 */
  if (C.zf) goto L_12ab0842;
  /* 12ab083a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab083e je 0x12ab084c */
  if (C.zf) goto L_12ab084c;
  /* 12ab0840 jmp 0x12ab0850 */
  goto L_12ab0850;
L_12ab0842:;
  /* 12ab0842 mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab084c:;
  /* 12ab084c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12ab0850:;
  /* 12ab0850 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab0855:;
  /* 12ab0855 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0858 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12ab085b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab085f je 0x12ab0869 */
  if (C.zf) goto L_12ab0869;
  /* 12ab0861 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0865 je 0x12ab0873 */
  if (C.zf) goto L_12ab0873;
  /* 12ab0867 jmp 0x12ab0877 */
  goto L_12ab0877;
L_12ab0869:;
  /* 12ab0869 mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab0873:;
  /* 12ab0873 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12ab0877:;
  /* 12ab0877 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab087c:;
  /* 12ab087c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab087f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12ab0882 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0886 je 0x12ab0890 */
  if (C.zf) goto L_12ab0890;
  /* 12ab0888 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab088c je 0x12ab089a */
  if (C.zf) goto L_12ab089a;
  /* 12ab088e jmp 0x12ab089e */
  goto L_12ab089e;
L_12ab0890:;
  /* 12ab0890 mov dword ptr [0x12ace800], 1 */
  w32((uint32_t)(0x12ace800), (0x1u));
L_12ab089a:;
  /* 12ab089a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12ab089e:;
  /* 12ab089e jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab08a3:;
  /* 12ab08a3 push 0x12aca7d4 */
  push32((uint32_t)(0x12aca7d4u));
  /* 12ab08a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab08ab push ecx */
  push32((uint32_t)(ECX));
  /* 12ab08ac call 0x12ab1100 */
  push32(0x12ab08b1u); f_12ab1100();
  /* 12ab08b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab08b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab08b6 jne 0x12ab08c3 */
  if (!C.zf) goto L_12ab08c3;
  /* 12ab08b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab08bb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab08be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab08c1 jmp 0x12ab08e1 */
  goto L_12ab08e1;
L_12ab08c3:;
  /* 12ab08c3 push 0x12aca7d0 */
  push32((uint32_t)(0x12aca7d0u));
  /* 12ab08c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab08cb push eax */
  push32((uint32_t)(EAX));
  /* 12ab08cc call 0x12ab1100 */
  push32(0x12ab08d1u); f_12ab1100();
  /* 12ab08d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab08d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab08d6 jne 0x12ab08e1 */
  if (!C.zf) goto L_12ab08e1;
  /* 12ab08d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab08db add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab08de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ab08e1:;
  /* 12ab08e1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12ab08e5 jmp 0x12ab0aa0 */
  goto L_12ab0aa0;
L_12ab08ea:;
  /* 12ab08ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab08ed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab08f1 jg 0x12ab0901 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab0901;
  /* 12ab08f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab08f6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12ab08fc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ab08ff jmp 0x12ab090d */
  goto L_12ab090d;
L_12ab0901:;
  /* 12ab0901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0904 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12ab090a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ab090d:;
  /* 12ab090d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0911 jle 0x12ab09b4 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab09b4;
  /* 12ab0917 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab091a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab091d jbe 0x12ab09b4 */
  if ((C.cf||C.zf)) goto L_12ab09b4;
  /* 12ab0923 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab0926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0928 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab092a mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab0930 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab0932 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab0936 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab093c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab093e je 0x12ab0977 */
  if (C.zf) goto L_12ab0977;
  /* 12ab0940 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0943 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0946 jbe 0x12ab0977 */
  if ((C.cf||C.zf)) goto L_12ab0977;
  /* 12ab0948 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab094b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab094d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab0950 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab0952 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12ab0954 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0957 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab095c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab095f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab0961 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab0964 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0967 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ab096a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab096d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab096f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0972 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0975 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ab0977:;
  /* 12ab0977 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab097a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab097c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab097f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab0981 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ab0983 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0986 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0988 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab098b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab098e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab0990 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab0993 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0996 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ab0999 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab099c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab099e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab09a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab09a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab09a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab09a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab09ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ab09af jmp 0x12ab090d */
  goto L_12ab090d;
L_12ab09b4:;
  /* 12ab09b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab09b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab09ba jmp 0x12ab06d6 */
  goto L_12ab06d6;
L_12ab09bf:;
  /* 12ab09bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab09c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab09c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab09c7 je 0x12ab0a92 */
  if (C.zf) goto L_12ab0a92;
  /* 12ab09cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab09d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab09d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12ab09d6:;
  /* 12ab09d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab09d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab09dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab09de je 0x12ab0a90 */
  if (C.zf) goto L_12ab0a90;
  /* 12ab09e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab09e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab09ea je 0x12ab0a90 */
  if (C.zf) goto L_12ab0a90;
  /* 12ab09f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab09f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab09f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab09f9 jne 0x12ab0a09 */
  if (!C.zf) goto L_12ab0a09;
  /* 12ab09fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab09fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a01 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ab0a04 jmp 0x12ab0a90 */
  goto L_12ab0a90;
L_12ab0a09:;
  /* 12ab0a09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab0a0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab0a10 mov edx, dword ptr [0x12accc98] */
  EDX = (r32((uint32_t)(0x12accc98)));
  /* 12ab0a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0a18 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12ab0a1c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab0a23 je 0x12ab0a5c */
  if (C.zf) goto L_12ab0a5c;
  /* 12ab0a25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0a28 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0a2b jbe 0x12ab0a5c */
  if ((C.cf||C.zf)) goto L_12ab0a5c;
  /* 12ab0a2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0a32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab0a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ab0a39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0a3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a41 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ab0a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab0a4f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0a52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0a54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0a57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0a5a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ab0a5c:;
  /* 12ab0a5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab0a66 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12ab0a68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a6b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0a6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0a73 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab0a75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a7b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ab0a7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0a81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0a83 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0a86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0a89 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ab0a8b jmp 0x12ab09d6 */
  goto L_12ab09d6;
L_12ab0a90:;
  /* 12ab0a90 jmp 0x12ab0a9b */
  goto L_12ab0a9b;
L_12ab0a92:;
  /* 12ab0a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0a95 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0a98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ab0a9b:;
  /* 12ab0a9b jmp 0x12ab06d6 */
  goto L_12ab06d6;
L_12ab0aa0:;
  /* 12ab0aa0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ab0aa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab0aa6 je 0x12ab0acc */
  if (C.zf) goto L_12ab0acc;
  /* 12ab0aa8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0aab push edx */
  push32((uint32_t)(EDX));
  /* 12ab0aac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0aaf push eax */
  push32((uint32_t)(EAX));
  /* 12ab0ab0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0ab4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0ab7 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0ab8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12ab0abb push eax */
  push32((uint32_t)(EAX));
  /* 12ab0abc call 0x12aaff00 */
  push32(0x12ab0ac1u); f_12aaff00();
  /* 12ab0ac1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab0ac7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ab0aca jmp 0x12ab0b47 */
  goto L_12ab0b47;
L_12ab0acc:;
  /* 12ab0acc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0ad1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab0ad3 mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab0ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab0adb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab0adf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab0ae5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab0ae7 je 0x12ab0b18 */
  if (C.zf) goto L_12ab0b18;
  /* 12ab0ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0aec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0af1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab0af3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ab0af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0af8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0afa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0afd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0b00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ab0b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0b08 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ab0b0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0b0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0b10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0b13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0b16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12ab0b18:;
  /* 12ab0b18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0b1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab0b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0b20 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab0b22 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ab0b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0b27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0b29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0b2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0b2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ab0b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0b34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0b37 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab0b3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0b3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab0b3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0b42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0b45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ab0b47:;
  /* 12ab0b47 jmp 0x12ab06d6 */
  goto L_12ab06d6;
L_12ab0b4c:;
  /* 12ab0b4c mov esp, ebp */
  ESP = (EBP);
  /* 12ab0b4e pop ebp */
  EBP = (pop32());
  /* 12ab0b4f ret  */
  ESPCHK(0x12ab06d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x12ab0bf0 (650 bytes, 178 insns) */
void f_12ab0bf0(void) {
  FTRACE(0x12ab0bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab0bf3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab0bf9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0bfd jne 0x12ab0d59 */
  if (!C.zf) goto L_12ab0d59;
  /* 12ab0c03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0c06 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12ab0c0c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12ab0c12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab0c15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab0c1c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12ab0c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0c28 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ab0c2e push edx */
  push32((uint32_t)(EDX));
  /* 12ab0c2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0c32 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0c33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0c36 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0c37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0c3a push edx */
  push32((uint32_t)(EDX));
  /* 12ab0c3b call 0x12ab2010 */
  push32(0x12ab0c40u); f_12ab2010();
  /* 12ab0c40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0c43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab0c46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0c4a jne 0x12ab0cdf */
  if (!C.zf) goto L_12ab0cdf;
  /* 12ab0c50 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12ab0c56u);
  /* 12ab0c56 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0c59 je 0x12ab0c60 */
  if (C.zf) goto L_12ab0c60;
  /* 12ab0c5b jmp 0x12ab0d3d */
  goto L_12ab0d3d;
L_12ab0c60:;
  /* 12ab0c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0c69 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0c6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0c6d push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0c6e call 0x12ab2010 */
  push32(0x12ab0c73u); f_12ab2010();
  /* 12ab0c73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0c76 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12ab0c7c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0c83 jne 0x12ab0c8a */
  if (!C.zf) goto L_12ab0c8a;
  /* 12ab0c85 jmp 0x12ab0d3d */
  goto L_12ab0d3d;
L_12ab0c8a:;
  /* 12ab0c8a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12ab0c8c push 0x12aca7dc */
  push32((uint32_t)(0x12aca7dcu));
  /* 12ab0c91 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0c93 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ab0c99 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0c9a call 0x12aa2a30 */
  push32(0x12ab0c9fu); f_12aa2a30();
  /* 12ab0c9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0ca2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab0ca5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0ca9 jne 0x12ab0cb0 */
  if (!C.zf) goto L_12ab0cb0;
  /* 12ab0cab jmp 0x12ab0d3d */
  goto L_12ab0d3d;
L_12ab0cb0:;
  /* 12ab0cb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ab0cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0cb9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ab0cbf push eax */
  push32((uint32_t)(EAX));
  /* 12ab0cc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0cc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0cc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0ccb push eax */
  push32((uint32_t)(EAX));
  /* 12ab0ccc call 0x12ab2010 */
  push32(0x12ab0cd1u); f_12ab2010();
  /* 12ab0cd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0cd4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab0cd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0cdb jne 0x12ab0cdf */
  if (!C.zf) goto L_12ab0cdf;
  /* 12ab0cdd jmp 0x12ab0d3d */
  goto L_12ab0d3d;
L_12ab0cdf:;
  /* 12ab0cdf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12ab0ce1 push 0x12aca7dc */
  push32((uint32_t)(0x12aca7dcu));
  /* 12ab0ce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0ce8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab0ceb push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0cec call 0x12aa2a30 */
  push32(0x12ab0cf1u); f_12aa2a30();
  /* 12ab0cf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0cf4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ab0cfa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ab0cfc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ab0d02 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0d05 jne 0x12ab0d09 */
  if (!C.zf) goto L_12ab0d09;
  /* 12ab0d07 jmp 0x12ab0d3d */
  goto L_12ab0d3d;
L_12ab0d09:;
  /* 12ab0d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab0d0c push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0d0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0d10 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0d11 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ab0d17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab0d19 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0d1a call 0x12aa6250 */
  push32(0x12ab0d1fu); f_12aa6250();
  /* 12ab0d1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0d22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0d26 je 0x12ab0d36 */
  if (C.zf) goto L_12ab0d36;
  /* 12ab0d28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0d2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0d2d push edx */
  push32((uint32_t)(EDX));
  /* 12ab0d2e call 0x12aa34c0 */
  push32(0x12ab0d33u); f_12aa34c0();
  /* 12ab0d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab0d36:;
  /* 12ab0d36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0d38 jmp 0x12ab0e76 */
  goto L_12ab0e76;
L_12ab0d3d:;
  /* 12ab0d3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0d41 je 0x12ab0d51 */
  if (C.zf) goto L_12ab0d51;
  /* 12ab0d43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab0d45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab0d48 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0d49 call 0x12aa34c0 */
  push32(0x12ab0d4eu); f_12aa34c0();
  /* 12ab0d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab0d51:;
  /* 12ab0d51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0d54 jmp 0x12ab0e76 */
  goto L_12ab0e76;
L_12ab0d59:;
  /* 12ab0d59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0d5d jne 0x12ab0e73 */
  if (!C.zf) goto L_12ab0e73;
  /* 12ab0d63 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12ab0d6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0d70 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12ab0d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0d78 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12ab0d7e push edx */
  push32((uint32_t)(EDX));
  /* 12ab0d7f push 0x12ace718 */
  push32((uint32_t)(0x12ace718u));
  /* 12ab0d84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0d87 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0d88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0d8b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0d8c call 0x12ab1e70 */
  push32(0x12ab0d91u); f_12ab1e70();
  /* 12ab0d91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab0d96 jne 0x12ab0da0 */
  if (!C.zf) goto L_12ab0da0;
  /* 12ab0d98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0d9b jmp 0x12ab0e76 */
  goto L_12ab0e76;
L_12ab0da0:;
  /* 12ab0da0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ab0da6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12ab0da9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12ab0db3 jmp 0x12ab0dc4 */
  goto L_12ab0dc4;
L_12ab0db5:;
  /* 12ab0db5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ab0dbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0dbe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12ab0dc4:;
  /* 12ab0dc4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0dcb jge 0x12ab0e6f */
  if ((C.sf==C.of)) goto L_12ab0e6f;
  /* 12ab0dd1 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0dd8 jle 0x12ab0e0b */
  if ((C.zf||C.sf!=C.of)) goto L_12ab0e0b;
  /* 12ab0dda push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab0ddc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ab0de2 mov dl, byte ptr [ecx*2 + 0x12ace718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ace718)));
  /* 12ab0de9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12ab0def mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12ab0df5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0dfa push eax */
  push32((uint32_t)(EAX));
  /* 12ab0dfb call 0x12aa8a40 */
  push32(0x12ab0e00u); f_12aa8a40();
  /* 12ab0e00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0e03 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12ab0e09 jmp 0x12ab0e3e */
  goto L_12ab0e3e;
L_12ab0e0b:;
  /* 12ab0e0b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ab0e11 mov dl, byte ptr [ecx*2 + 0x12ace718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ace718)));
  /* 12ab0e18 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12ab0e1e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12ab0e24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0e29 mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab0e2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab0e31 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab0e35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab0e38 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12ab0e3e:;
  /* 12ab0e3e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0e45 je 0x12ab0e68 */
  if (C.zf) goto L_12ab0e68;
  /* 12ab0e47 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ab0e4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab0e50 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab0e53 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12ab0e5a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12ab0e5e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ab0e64 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ab0e66 jmp 0x12ab0e6a */
  goto L_12ab0e6a;
L_12ab0e68:;
  /* 12ab0e68 jmp 0x12ab0e6f */
  goto L_12ab0e6f;
L_12ab0e6a:;
  /* 12ab0e6a jmp 0x12ab0db5 */
  goto L_12ab0db5;
L_12ab0e6f:;
  /* 12ab0e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0e71 jmp 0x12ab0e76 */
  goto L_12ab0e76;
L_12ab0e73:;
  /* 12ab0e73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ab0e76:;
  /* 12ab0e76 mov esp, ebp */
  ESP = (EBP);
  /* 12ab0e78 pop ebp */
  EBP = (pop32());
  /* 12ab0e79 ret  */
  ESPCHK(0x12ab0bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e80 @ 0x12ab0e80 (10 bytes, 5 insns) */
void f_12ab0e80(void) {
  FTRACE(0x12ab0e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0e81 mov ebp, esp */
  EBP = (ESP);
  /* 12ab0e83 mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12ab0e88 pop ebp */
  EBP = (pop32());
  /* 12ab0e89 ret  */
  ESPCHK(0x12ab0e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x12ab0e90 (575 bytes, 196 insns) */
void f_12ab0e90(void) {
  FTRACE(0x12ab0e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab0e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab0e91 mov ebp, esp */
  EBP = (ESP);
  /* 12ab0e93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab0e95 push 0x12aca7e8 */
  push32((uint32_t)(0x12aca7e8u));
  /* 12ab0e9a push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12ab0e9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ab0ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0ea6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ab0ead add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab0eb1 push esi */
  push32((uint32_t)(ESI));
  /* 12ab0eb2 push edi */
  push32((uint32_t)(EDI));
  /* 12ab0eb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab0eb6 cmp dword ptr [0x12ace724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0ebd jne 0x12ab0f0e */
  if (!C.zf) goto L_12ab0f0e;
  /* 12ab0ebf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12ab0ec2 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab0ec5 push 0x12ac9f1c */
  push32((uint32_t)(0x12ac9f1cu));
  /* 12ab0eca push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab0ecc call dword ptr [0x12ad0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0324))), 0x12ab0ed2u);
  /* 12ab0ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab0ed4 je 0x12ab0ee2 */
  if (C.zf) goto L_12ab0ee2;
  /* 12ab0ed6 mov dword ptr [0x12ace724], 1 */
  w32((uint32_t)(0x12ace724), (0x1u));
  /* 12ab0ee0 jmp 0x12ab0f0e */
  goto L_12ab0f0e;
L_12ab0ee2:;
  /* 12ab0ee2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12ab0ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0ee6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab0ee8 push 0x12ac9f18 */
  push32((uint32_t)(0x12ac9f18u));
  /* 12ab0eed push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab0eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0ef1 call dword ptr [0x12ad0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0320))), 0x12ab0ef7u);
  /* 12ab0ef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab0ef9 je 0x12ab0f07 */
  if (C.zf) goto L_12ab0f07;
  /* 12ab0efb mov dword ptr [0x12ace724], 2 */
  w32((uint32_t)(0x12ace724), (0x2u));
  /* 12ab0f05 jmp 0x12ab0f0e */
  goto L_12ab0f0e;
L_12ab0f07:;
  /* 12ab0f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0f09 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab0f0e:;
  /* 12ab0f0e cmp dword ptr [0x12ace724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0f15 jne 0x12ab0f32 */
  if (!C.zf) goto L_12ab0f32;
  /* 12ab0f17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab0f1a push edx */
  push32((uint32_t)(EDX));
  /* 12ab0f1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0f1e push eax */
  push32((uint32_t)(EAX));
  /* 12ab0f1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0f22 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab0f26 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0f27 call dword ptr [0x12ad0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0324))), 0x12ab0f2du);
  /* 12ab0f2d jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab0f32:;
  /* 12ab0f32 cmp dword ptr [0x12ace724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0f39 jne 0x12ab10e7 */
  if (!C.zf) goto L_12ab10e7;
  /* 12ab0f3f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0f43 jne 0x12ab0f4d */
  if (!C.zf) goto L_12ab0f4d;
  /* 12ab0f45 mov eax, dword ptr [0x12ace698] */
  EAX = (r32((uint32_t)(0x12ace698)));
  /* 12ab0f4a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12ab0f4d:;
  /* 12ab0f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0f55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0f58 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0f59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0f5c push edx */
  push32((uint32_t)(EDX));
  /* 12ab0f5d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab0f62 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0f65 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0f66 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab0f6cu);
  /* 12ab0f6c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ab0f6f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0f73 jne 0x12ab0f7c */
  if (!C.zf) goto L_12ab0f7c;
  /* 12ab0f75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0f77 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab0f7c:;
  /* 12ab0f7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab0f83 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab0f86 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0f89 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab0f8b call 0x12aa5bd0 */
  push32(0x12ab0f90u); f_12aa5bd0();
  /* 12ab0f90 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12ab0f93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab0f96 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ab0f99 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ab0f9c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab0f9f push edx */
  push32((uint32_t)(EDX));
  /* 12ab0fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0fa2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ab0fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12ab0fa6 call 0x12aa67a0 */
  push32(0x12ab0fabu); f_12aa67a0();
  /* 12ab0fab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab0fae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab0fb5 jmp 0x12ab0fce */
  goto L_12ab0fce;
  /* 12ab0fb7 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab0fbc ret  */
  ESPCHK(0x12ab0e90u, _esp0);
  ESP += 4; return;
  /* 12ab0fbd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab0fc0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12ab0fc7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab0fce:;
  /* 12ab0fce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab0fd2 jne 0x12ab0fdb */
  if (!C.zf) goto L_12ab0fdb;
  /* 12ab0fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab0fd6 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab0fdb:;
  /* 12ab0fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab0fdf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab0fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0fe3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ab0fe6 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0fe7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab0fea push eax */
  push32((uint32_t)(EAX));
  /* 12ab0feb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab0fee push ecx */
  push32((uint32_t)(ECX));
  /* 12ab0fef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab0ff4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab0ff7 push edx */
  push32((uint32_t)(EDX));
  /* 12ab0ff8 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab0ffeu);
  /* 12ab0ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab1000 jne 0x12ab1009 */
  if (!C.zf) goto L_12ab1009;
  /* 12ab1002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1004 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab1009:;
  /* 12ab1009 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ab1010 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab1013 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12ab1017 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab101a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab101c call 0x12aa5bd0 */
  push32(0x12ab1021u); f_12aa5bd0();
  /* 12ab1021 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12ab1024 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab1027 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ab102a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ab102d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab1034 jmp 0x12ab104d */
  goto L_12ab104d;
  /* 12ab1036 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab103b ret  */
  ESPCHK(0x12ab0e90u, _esp0);
  ESP += 4; return;
  /* 12ab103c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab103f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ab1046 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab104d:;
  /* 12ab104d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1051 jne 0x12ab105a */
  if (!C.zf) goto L_12ab105a;
  /* 12ab1053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1055 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab105a:;
  /* 12ab105a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab105e jne 0x12ab1069 */
  if (!C.zf) goto L_12ab1069;
  /* 12ab1060 mov edx, dword ptr [0x12ace688] */
  EDX = (r32((uint32_t)(0x12ace688)));
  /* 12ab1066 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12ab1069:;
  /* 12ab1069 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab106c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab106f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12ab1075 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1078 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab107b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12ab1082 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab1085 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1086 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab1089 push edx */
  push32((uint32_t)(EDX));
  /* 12ab108a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ab108d push eax */
  push32((uint32_t)(EAX));
  /* 12ab108e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1091 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1092 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab1095 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1096 call dword ptr [0x12ad0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0320))), 0x12ab109cu);
  /* 12ab109c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ab109f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab10a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab10a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab10a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12ab10ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab10b2 je 0x12ab10c8 */
  if (C.zf) goto L_12ab10c8;
  /* 12ab10b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab10b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab10ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab10bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab10c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab10c6 je 0x12ab10cc */
  if (C.zf) goto L_12ab10cc;
L_12ab10c8:;
  /* 12ab10c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab10ca jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab10cc:;
  /* 12ab10cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab10cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ab10d1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab10d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab10d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab10d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab10d9 push edx */
  push32((uint32_t)(EDX));
  /* 12ab10da call 0x12aaa920 */
  push32(0x12ab10dfu); f_12aaa920();
  /* 12ab10df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab10e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab10e5 jmp 0x12ab10e9 */
  goto L_12ab10e9;
L_12ab10e7:;
  /* 12ab10e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab10e9:;
  /* 12ab10e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12ab10ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab10ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ab10f6 pop edi */
  EDI = (pop32());
  /* 12ab10f7 pop esi */
  ESI = (pop32());
  /* 12ab10f8 pop ebx */
  EBX = (pop32());
  /* 12ab10f9 mov esp, ebp */
  ESP = (EBP);
  /* 12ab10fb pop ebp */
  EBP = (pop32());
  /* 12ab10fc ret  */
  ESPCHK(0x12ab0e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x12ab1100 (208 bytes, 85 insns) */
void f_12ab1100(void) {
  FTRACE(0x12ab1100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1100 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1101 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1103 push edi */
  push32((uint32_t)(EDI));
  /* 12ab1104 push esi */
  push32((uint32_t)(ESI));
  /* 12ab1105 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab1106 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab1109 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab110c lea eax, [0x12ace680] */
  EAX = ((uint32_t)(0x12ace680));
  /* 12ab1112 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1116 jne 0x12ab1153 */
  if (!C.zf) goto L_12ab1153;
  /* 12ab1118 mov al, 0xff */
  AL = (0xffu);
  /* 12ab111a mov edi, edi */
  EDI = (EDI);
L_12ab111c:;
  /* 12ab111c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ab111e je 0x12ab114e */
  if (C.zf) goto L_12ab114e;
  /* 12ab1120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ab1122 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ab1123 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12ab1125 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ab1126 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1128 je 0x12ab111c */
  if (C.zf) goto L_12ab111c;
  /* 12ab112a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ab112c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab112e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ab1130 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12ab1133 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ab1135 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ab1137 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12ab1139 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ab113b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab113d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ab113f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12ab1142 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ab1144 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ab1146 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1148 je 0x12ab111c */
  if (C.zf) goto L_12ab111c;
  /* 12ab114a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ab114c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12ab114e:;
  /* 12ab114e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12ab1151 jmp 0x12ab11cb */
  goto L_12ab11cb;
L_12ab1153:;
  /* 12ab1153 lock inc dword ptr [0x12ace814] */
  x86_unimpl("lock inc @ 0x12ab1153");
  /* 12ab115a cmp dword ptr [0x12ace804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1161 jg 0x12ab1167 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab1167;
  /* 12ab1163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1165 jmp 0x12ab117c */
  goto L_12ab117c;
L_12ab1167:;
  /* 12ab1167 lock dec dword ptr [0x12ace814] */
  x86_unimpl("lock dec @ 0x12ab1167");
  /* 12ab116e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab1170 call 0x12aa6430 */
  push32(0x12ab1175u); f_12aa6430();
  /* 12ab1175 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12ab117c:;
  /* 12ab117c mov eax, 0xff */
  EAX = (0xffu);
  /* 12ab1181 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ab1183 nop  */
  /* nop */
L_12ab1184:;
  /* 12ab1184 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ab1186 je 0x12ab11af */
  if (C.zf) goto L_12ab11af;
  /* 12ab1188 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ab118a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ab118b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12ab118d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ab118e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1190 je 0x12ab1184 */
  if (C.zf) goto L_12ab1184;
  /* 12ab1192 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1193 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab1194 call 0x12ab2270 */
  push32(0x12ab1199u); f_12ab2270();
  /* 12ab1199 mov ebx, eax */
  EBX = (EAX);
  /* 12ab119b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab119e call 0x12ab2270 */
  push32(0x12ab11a3u); f_12ab2270();
  /* 12ab11a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab11a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab11a8 je 0x12ab1184 */
  if (C.zf) goto L_12ab1184;
  /* 12ab11aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab11ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12ab11af:;
  /* 12ab11af mov ebx, eax */
  EBX = (EAX);
  /* 12ab11b1 pop eax */
  EAX = (pop32());
  /* 12ab11b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab11b4 jne 0x12ab11bf */
  if (!C.zf) goto L_12ab11bf;
  /* 12ab11b6 lock dec dword ptr [0x12ace814] */
  x86_unimpl("lock dec @ 0x12ab11b6");
  /* 12ab11bd jmp 0x12ab11c9 */
  goto L_12ab11c9;
L_12ab11bf:;
  /* 12ab11bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab11c1 call 0x12aa64d0 */
  push32(0x12ab11c6u); f_12aa64d0();
  /* 12ab11c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab11c9:;
  /* 12ab11c9 mov eax, ebx */
  EAX = (EBX);
L_12ab11cb:;
  /* 12ab11cb pop ebx */
  EBX = (pop32());
  /* 12ab11cc pop esi */
  ESI = (pop32());
  /* 12ab11cd pop edi */
  EDI = (pop32());
  /* 12ab11ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12ab11cf ret  */
  ESPCHK(0x12ab1100u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x12ab11d0 (257 bytes, 103 insns) */
void f_12ab11d0(void) {
  FTRACE(0x12ab11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab11d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab11d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab11d3 push edi */
  push32((uint32_t)(EDI));
  /* 12ab11d4 push esi */
  push32((uint32_t)(ESI));
  /* 12ab11d5 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab11d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab11d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab11db je 0x12ab12ca */
  if (C.zf) goto L_12ab12ca;
  /* 12ab11e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab11e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab11e7 lea eax, [0x12ace680] */
  EAX = ((uint32_t)(0x12ace680));
  /* 12ab11ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab11f1 jne 0x12ab1241 */
  if (!C.zf) goto L_12ab1241;
  /* 12ab11f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12ab11f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12ab11f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12ab11f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12ab11fc:;
  /* 12ab11fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12ab11fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12ab1200 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12ab1202 je 0x12ab1225 */
  if (C.zf) goto L_12ab1225;
  /* 12ab1204 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ab1206 je 0x12ab1225 */
  if (C.zf) goto L_12ab1225;
  /* 12ab1208 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ab1209 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ab120a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab120c jb 0x12ab1214 */
  if (C.cf) goto L_12ab1214;
  /* 12ab120e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1210 ja 0x12ab1214 */
  if ((!C.cf&&!C.zf)) goto L_12ab1214;
  /* 12ab1212 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12ab1214:;
  /* 12ab1214 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1216 jb 0x12ab121e */
  if (C.cf) goto L_12ab121e;
  /* 12ab1218 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab121a ja 0x12ab121e */
  if ((!C.cf&&!C.zf)) goto L_12ab121e;
  /* 12ab121c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12ab121e:;
  /* 12ab121e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1220 jne 0x12ab122f */
  if (!C.zf) goto L_12ab122f;
  /* 12ab1222 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ab1223 jne 0x12ab11fc */
  if (!C.zf) goto L_12ab11fc;
L_12ab1225:;
  /* 12ab1225 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1227 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab1229 je 0x12ab12ca */
  if (C.zf) goto L_12ab12ca;
L_12ab122f:;
  /* 12ab122f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12ab1234 jb 0x12ab12ca */
  if (C.cf) goto L_12ab12ca;
  /* 12ab123a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab123c jmp 0x12ab12ca */
  goto L_12ab12ca;
L_12ab1241:;
  /* 12ab1241 lock inc dword ptr [0x12ace814] */
  x86_unimpl("lock inc @ 0x12ab1241");
  /* 12ab1248 cmp dword ptr [0x12ace804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab124f jg 0x12ab1255 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab1255;
  /* 12ab1251 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1253 jmp 0x12ab126e */
  goto L_12ab126e;
L_12ab1255:;
  /* 12ab1255 lock dec dword ptr [0x12ace814] */
  x86_unimpl("lock dec @ 0x12ab1255");
  /* 12ab125c mov ebx, ecx */
  EBX = (ECX);
  /* 12ab125e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab1260 call 0x12aa6430 */
  push32(0x12ab1265u); f_12aa6430();
  /* 12ab1265 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12ab126c mov ecx, ebx */
  ECX = (EBX);
L_12ab126e:;
  /* 12ab126e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1270 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ab1272 mov edi, edi */
  EDI = (EDI);
L_12ab1274:;
  /* 12ab1274 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ab1276 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1278 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12ab127a je 0x12ab129f */
  if (C.zf) goto L_12ab129f;
  /* 12ab127c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ab127e je 0x12ab129f */
  if (C.zf) goto L_12ab129f;
  /* 12ab1280 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ab1281 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ab1282 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1283 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1284 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab1285 call 0x12ab2270 */
  push32(0x12ab128au); f_12ab2270();
  /* 12ab128a mov ebx, eax */
  EBX = (EAX);
  /* 12ab128c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab128f call 0x12ab2270 */
  push32(0x12ab1294u); f_12ab2270();
  /* 12ab1294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1297 pop ecx */
  ECX = (pop32());
  /* 12ab1298 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab129a jne 0x12ab12a5 */
  if (!C.zf) goto L_12ab12a5;
  /* 12ab129c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ab129d jne 0x12ab1274 */
  if (!C.zf) goto L_12ab1274;
L_12ab129f:;
  /* 12ab129f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab12a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab12a3 je 0x12ab12ae */
  if (C.zf) goto L_12ab12ae;
L_12ab12a5:;
  /* 12ab12a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12ab12aa jb 0x12ab12ae */
  if (C.cf) goto L_12ab12ae;
  /* 12ab12ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12ab12ae:;
  /* 12ab12ae pop eax */
  EAX = (pop32());
  /* 12ab12af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab12b1 jne 0x12ab12bc */
  if (!C.zf) goto L_12ab12bc;
  /* 12ab12b3 lock dec dword ptr [0x12ace814] */
  x86_unimpl("lock dec @ 0x12ab12b3");
  /* 12ab12ba jmp 0x12ab12ca */
  goto L_12ab12ca;
L_12ab12bc:;
  /* 12ab12bc mov ebx, ecx */
  EBX = (ECX);
  /* 12ab12be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab12c0 call 0x12aa64d0 */
  push32(0x12ab12c5u); f_12aa64d0();
  /* 12ab12c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab12c8 mov ecx, ebx */
  ECX = (EBX);
L_12ab12ca:;
  /* 12ab12ca mov eax, ecx */
  EAX = (ECX);
  /* 12ab12cc pop ebx */
  EBX = (pop32());
  /* 12ab12cd pop esi */
  ESI = (pop32());
  /* 12ab12ce pop edi */
  EDI = (pop32());
  /* 12ab12cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12ab12d0 ret  */
  ESPCHK(0x12ab11d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x12ab12e0 (255 bytes, 88 insns) */
void f_12ab12e0(void) {
  FTRACE(0x12ab12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab12e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab12e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12ab12e6:;
  /* 12ab12e6 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab12ed jle 0x12ab1306 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1306;
  /* 12ab12ef push 8 */
  push32((uint32_t)(0x8u));
  /* 12ab12f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab12f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab12f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab12f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab12f9 call 0x12aa8a40 */
  push32(0x12ab12feu); f_12aa8a40();
  /* 12ab12fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1301 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ab1304 jmp 0x12ab131f */
  goto L_12ab131f;
L_12ab1306:;
  /* 12ab1306 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab130b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab130d mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab1313 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1315 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab1319 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab131c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ab131f:;
  /* 12ab131f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1323 je 0x12ab1330 */
  if (C.zf) goto L_12ab1330;
  /* 12ab1325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1328 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab132b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab132e jmp 0x12ab12e6 */
  goto L_12ab12e6;
L_12ab1330:;
  /* 12ab1330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1333 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1335 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab1337 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab133a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab133d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1340 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab1343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab1346 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab1349 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab134d je 0x12ab1355 */
  if (C.zf) goto L_12ab1355;
  /* 12ab134f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1353 jne 0x12ab1368 */
  if (!C.zf) goto L_12ab1368;
L_12ab1355:;
  /* 12ab1355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab135a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab135c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab135f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1365 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12ab1368:;
  /* 12ab1368 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ab136f:;
  /* 12ab136f cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1376 jle 0x12ab138b */
  if ((C.zf||C.sf!=C.of)) goto L_12ab138b;
  /* 12ab1378 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab137a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab137d push edx */
  push32((uint32_t)(EDX));
  /* 12ab137e call 0x12aa8a40 */
  push32(0x12ab1383u); f_12aa8a40();
  /* 12ab1383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1386 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ab1389 jmp 0x12ab13a0 */
  goto L_12ab13a0;
L_12ab138b:;
  /* 12ab138b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab138e mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab1394 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1396 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab139a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab139d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ab13a0:;
  /* 12ab13a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab13a4 je 0x12ab13cb */
  if (C.zf) goto L_12ab13cb;
  /* 12ab13a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab13a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab13ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab13af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12ab13b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ab13b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab13b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab13bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab13bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab13c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab13c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab13c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ab13c9 jmp 0x12ab136f */
  goto L_12ab136f;
L_12ab13cb:;
  /* 12ab13cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab13cf jne 0x12ab13d8 */
  if (!C.zf) goto L_12ab13d8;
  /* 12ab13d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab13d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab13d6 jmp 0x12ab13db */
  goto L_12ab13db;
L_12ab13d8:;
  /* 12ab13d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12ab13db:;
  /* 12ab13db mov esp, ebp */
  ESP = (EBP);
  /* 12ab13dd pop ebp */
  EBP = (pop32());
  /* 12ab13de ret  */
  ESPCHK(0x12ab12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x12ab13e0 (17 bytes, 8 insns) */
void f_12ab13e0(void) {
  FTRACE(0x12ab13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab13e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab13e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab13e6 push eax */
  push32((uint32_t)(EAX));
  /* 12ab13e7 call 0x12ab12e0 */
  push32(0x12ab13ecu); f_12ab12e0();
  /* 12ab13ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab13ef pop ebp */
  EBP = (pop32());
  /* 12ab13f0 ret  */
  ESPCHK(0x12ab13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x12ab1400 (297 bytes, 106 insns) */
void f_12ab1400(void) {
  FTRACE(0x12ab1400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1400 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1401 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1406 push esi */
  push32((uint32_t)(ESI));
L_12ab1407:;
  /* 12ab1407 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab140e jle 0x12ab1427 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1427;
  /* 12ab1410 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ab1412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1415 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1417 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab1419 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab141a call 0x12aa8a40 */
  push32(0x12ab141fu); f_12aa8a40();
  /* 12ab141f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1422 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ab1425 jmp 0x12ab1440 */
  goto L_12ab1440;
L_12ab1427:;
  /* 12ab1427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab142a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab142c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab142e mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab1434 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1436 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab143a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab143d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ab1440:;
  /* 12ab1440 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1444 je 0x12ab1451 */
  if (C.zf) goto L_12ab1451;
  /* 12ab1446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab144c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab144f jmp 0x12ab1407 */
  goto L_12ab1407;
L_12ab1451:;
  /* 12ab1451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1456 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab1458 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab145b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab145e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1461 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab1464 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab1467 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ab146a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab146e je 0x12ab1476 */
  if (C.zf) goto L_12ab1476;
  /* 12ab1470 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1474 jne 0x12ab1489 */
  if (!C.zf) goto L_12ab1489;
L_12ab1476:;
  /* 12ab1476 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab147b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab147d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab1480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1483 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1486 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12ab1489:;
  /* 12ab1489 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ab1490 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ab1497:;
  /* 12ab1497 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab149e jle 0x12ab14b3 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab14b3;
  /* 12ab14a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab14a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab14a5 push edx */
  push32((uint32_t)(EDX));
  /* 12ab14a6 call 0x12aa8a40 */
  push32(0x12ab14abu); f_12aa8a40();
  /* 12ab14ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab14ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ab14b1 jmp 0x12ab14c8 */
  goto L_12ab14c8;
L_12ab14b3:;
  /* 12ab14b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab14b6 mov ecx, dword ptr [0x12accc98] */
  ECX = (r32((uint32_t)(0x12accc98)));
  /* 12ab14bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab14be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ab14c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab14c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12ab14c8:;
  /* 12ab14c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab14cc je 0x12ab1509 */
  if (C.zf) goto L_12ab1509;
  /* 12ab14ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab14d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ab14d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab14d5 push eax */
  push32((uint32_t)(EAX));
  /* 12ab14d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab14d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab14da call 0x12ab23a0 */
  push32(0x12ab14dfu); f_12ab23a0();
  /* 12ab14df mov ecx, eax */
  ECX = (EAX);
  /* 12ab14e1 mov esi, edx */
  ESI = (EDX);
  /* 12ab14e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab14e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab14e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab14ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab14ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab14ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab14f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12ab14f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab14f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab14f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab14fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab14fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1504 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ab1507 jmp 0x12ab1497 */
  goto L_12ab1497;
L_12ab1509:;
  /* 12ab1509 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab150d jne 0x12ab151e */
  if (!C.zf) goto L_12ab151e;
  /* 12ab150f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1512 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab1514 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1517 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab151a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab151c jmp 0x12ab1524 */
  goto L_12ab1524;
L_12ab151e:;
  /* 12ab151e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1521 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12ab1524:;
  /* 12ab1524 pop esi */
  ESI = (pop32());
  /* 12ab1525 mov esp, ebp */
  ESP = (EBP);
  /* 12ab1527 pop ebp */
  EBP = (pop32());
  /* 12ab1528 ret  */
  ESPCHK(0x12ab1400u, _esp0);
  ESP += 4; return;
}

/* FUN_10011530 @ 0x12ab1530 (61 bytes, 18 insns) */
void f_12ab1530(void) {
  FTRACE(0x12ab1530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1530 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1531 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1533 cmp dword ptr [0x12ace7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab153a jne 0x12ab156b */
  if (!C.zf) goto L_12ab156b;
  /* 12ab153c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab153e call 0x12aa6430 */
  push32(0x12ab1543u); f_12aa6430();
  /* 12ab1543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1546 cmp dword ptr [0x12ace7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab154d jne 0x12ab1561 */
  if (!C.zf) goto L_12ab1561;
  /* 12ab154f call 0x12ab1590 */
  push32(0x12ab1554u); f_12ab1590();
  /* 12ab1554 mov eax, dword ptr [0x12ace7e0] */
  EAX = (r32((uint32_t)(0x12ace7e0)));
  /* 12ab1559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab155c mov dword ptr [0x12ace7e0], eax */
  w32((uint32_t)(0x12ace7e0), (EAX));
L_12ab1561:;
  /* 12ab1561 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab1563 call 0x12aa64d0 */
  push32(0x12ab1568u); f_12aa64d0();
  /* 12ab1568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab156b:;
  /* 12ab156b pop ebp */
  EBP = (pop32());
  /* 12ab156c ret  */
  ESPCHK(0x12ab1530u, _esp0);
  ESP += 4; return;
}

/* FUN_10011570 @ 0x12ab1570 (30 bytes, 11 insns) */
void f_12ab1570(void) {
  FTRACE(0x12ab1570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1570 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1571 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1573 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab1575 call 0x12aa6430 */
  push32(0x12ab157au); f_12aa6430();
  /* 12ab157a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab157d call 0x12ab1590 */
  push32(0x12ab1582u); f_12ab1590();
  /* 12ab1582 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab1584 call 0x12aa64d0 */
  push32(0x12ab1589u); f_12aa64d0();
  /* 12ab1589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab158c pop ebp */
  EBP = (pop32());
  /* 12ab158d ret  */
  ESPCHK(0x12ab1570u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x12ab1590 (939 bytes, 266 insns) */
void f_12ab1590(void) {
  FTRACE(0x12ab1590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1590 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1591 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab159d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab159f call 0x12aa6430 */
  push32(0x12ab15a4u); f_12aa6430();
  /* 12ab15a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab15a7 mov dword ptr [0x12ace728], 0 */
  w32((uint32_t)(0x12ace728), (0x0u));
  /* 12ab15b1 mov dword ptr [0x12acde38], 0xffffffff */
  w32((uint32_t)(0x12acde38), (0xffffffffu));
  /* 12ab15bb mov eax, dword ptr [0x12acde38] */
  EAX = (r32((uint32_t)(0x12acde38)));
  /* 12ab15c0 mov dword ptr [0x12acde28], eax */
  w32((uint32_t)(0x12acde28), (EAX));
  /* 12ab15c5 push 0x12aca848 */
  push32((uint32_t)(0x12aca848u));
  /* 12ab15ca call 0x12ab2410 */
  push32(0x12ab15cfu); f_12ab2410();
  /* 12ab15cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab15d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab15d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab15d9 jne 0x12ab1713 */
  if (!C.zf) goto L_12ab1713;
  /* 12ab15df push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab15e1 call 0x12aa64d0 */
  push32(0x12ab15e6u); f_12aa64d0();
  /* 12ab15e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab15e9 push 0x12ace730 */
  push32((uint32_t)(0x12ace730u));
  /* 12ab15ee call dword ptr [0x12ad023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad023c))), 0x12ab15f4u);
  /* 12ab15f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab15f7 je 0x12ab170e */
  if (C.zf) goto L_12ab170e;
  /* 12ab15fd mov dword ptr [0x12ace728], 1 */
  w32((uint32_t)(0x12ace728), (0x1u));
  /* 12ab1607 mov ecx, dword ptr [0x12ace730] */
  ECX = (r32((uint32_t)(0x12ace730)));
  /* 12ab160d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1610 mov dword ptr [0x12acdd90], ecx */
  w32((uint32_t)(0x12acdd90), (ECX));
  /* 12ab1616 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1618 mov dx, word ptr [0x12ace776] */
  DX = (r16((uint32_t)(0x12ace776)));
  /* 12ab161f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab1621 je 0x12ab1639 */
  if (C.zf) goto L_12ab1639;
  /* 12ab1623 mov eax, dword ptr [0x12ace784] */
  EAX = (r32((uint32_t)(0x12ace784)));
  /* 12ab1628 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab162b mov ecx, dword ptr [0x12acdd90] */
  ECX = (r32((uint32_t)(0x12acdd90)));
  /* 12ab1631 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1633 mov dword ptr [0x12acdd90], ecx */
  w32((uint32_t)(0x12acdd90), (ECX));
L_12ab1639:;
  /* 12ab1639 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab163b mov dx, word ptr [0x12ace7ca] */
  DX = (r16((uint32_t)(0x12ace7ca)));
  /* 12ab1642 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab1644 je 0x12ab166e */
  if (C.zf) goto L_12ab166e;
  /* 12ab1646 cmp dword ptr [0x12ace7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab164d je 0x12ab166e */
  if (C.zf) goto L_12ab166e;
  /* 12ab164f mov dword ptr [0x12acdd94], 1 */
  w32((uint32_t)(0x12acdd94), (0x1u));
  /* 12ab1659 mov eax, dword ptr [0x12ace7d8] */
  EAX = (r32((uint32_t)(0x12ace7d8)));
  /* 12ab165e sub eax, dword ptr [0x12ace784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ace784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1664 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1667 mov dword ptr [0x12acdd98], eax */
  w32((uint32_t)(0x12acdd98), (EAX));
  /* 12ab166c jmp 0x12ab1682 */
  goto L_12ab1682;
L_12ab166e:;
  /* 12ab166e mov dword ptr [0x12acdd94], 0 */
  w32((uint32_t)(0x12acdd94), (0x0u));
  /* 12ab1678 mov dword ptr [0x12acdd98], 0 */
  w32((uint32_t)(0x12acdd98), (0x0u));
L_12ab1682:;
  /* 12ab1682 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12ab1685 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1686 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1688 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12ab168a mov edx, dword ptr [0x12acde1c] */
  EDX = (r32((uint32_t)(0x12acde1c)));
  /* 12ab1690 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1691 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab1693 push 0x12ace734 */
  push32((uint32_t)(0x12ace734u));
  /* 12ab1698 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab169d mov eax, dword ptr [0x12ace698] */
  EAX = (r32((uint32_t)(0x12ace698)));
  /* 12ab16a2 push eax */
  push32((uint32_t)(EAX));
  /* 12ab16a3 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab16a9u);
  /* 12ab16a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab16ab je 0x12ab16bf */
  if (C.zf) goto L_12ab16bf;
  /* 12ab16ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab16b1 jne 0x12ab16bf */
  if (!C.zf) goto L_12ab16bf;
  /* 12ab16b3 mov ecx, dword ptr [0x12acde1c] */
  ECX = (r32((uint32_t)(0x12acde1c)));
  /* 12ab16b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12ab16bd jmp 0x12ab16c8 */
  goto L_12ab16c8;
L_12ab16bf:;
  /* 12ab16bf mov edx, dword ptr [0x12acde1c] */
  EDX = (r32((uint32_t)(0x12acde1c)));
  /* 12ab16c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12ab16c8:;
  /* 12ab16c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12ab16cb push eax */
  push32((uint32_t)(EAX));
  /* 12ab16cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab16ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12ab16d0 mov ecx, dword ptr [0x12acde20] */
  ECX = (r32((uint32_t)(0x12acde20)));
  /* 12ab16d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab16d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab16d9 push 0x12ace788 */
  push32((uint32_t)(0x12ace788u));
  /* 12ab16de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab16e3 mov edx, dword ptr [0x12ace698] */
  EDX = (r32((uint32_t)(0x12ace698)));
  /* 12ab16e9 push edx */
  push32((uint32_t)(EDX));
  /* 12ab16ea call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab16f0u);
  /* 12ab16f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab16f2 je 0x12ab1705 */
  if (C.zf) goto L_12ab1705;
  /* 12ab16f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab16f8 jne 0x12ab1705 */
  if (!C.zf) goto L_12ab1705;
  /* 12ab16fa mov eax, dword ptr [0x12acde20] */
  EAX = (r32((uint32_t)(0x12acde20)));
  /* 12ab16ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12ab1703 jmp 0x12ab170e */
  goto L_12ab170e;
L_12ab1705:;
  /* 12ab1705 mov ecx, dword ptr [0x12acde20] */
  ECX = (r32((uint32_t)(0x12acde20)));
  /* 12ab170b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12ab170e:;
  /* 12ab170e jmp 0x12ab1937 */
  goto L_12ab1937;
L_12ab1713:;
  /* 12ab1713 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1716 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab1719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab171b je 0x12ab173d */
  if (C.zf) goto L_12ab173d;
  /* 12ab171d cmp dword ptr [0x12ace7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1724 je 0x12ab174c */
  if (C.zf) goto L_12ab174c;
  /* 12ab1726 mov ecx, dword ptr [0x12ace7dc] */
  ECX = (r32((uint32_t)(0x12ace7dc)));
  /* 12ab172c push ecx */
  push32((uint32_t)(ECX));
  /* 12ab172d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1730 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1731 call 0x12aae6c0 */
  push32(0x12ab1736u); f_12aae6c0();
  /* 12ab1736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab173b jne 0x12ab174c */
  if (!C.zf) goto L_12ab174c;
L_12ab173d:;
  /* 12ab173d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab173f call 0x12aa64d0 */
  push32(0x12ab1744u); f_12aa64d0();
  /* 12ab1744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1747 jmp 0x12ab1937 */
  goto L_12ab1937;
L_12ab174c:;
  /* 12ab174c push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab174e mov eax, dword ptr [0x12ace7dc] */
  EAX = (r32((uint32_t)(0x12ace7dc)));
  /* 12ab1753 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1754 call 0x12aa34c0 */
  push32(0x12ab1759u); f_12aa34c0();
  /* 12ab1759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab175c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12ab1761 push 0x12aca840 */
  push32((uint32_t)(0x12aca840u));
  /* 12ab1766 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab1768 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab176b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab176c call 0x12aa5860 */
  push32(0x12ab1771u); f_12aa5860();
  /* 12ab1771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1777 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1778 call 0x12aa2a30 */
  push32(0x12ab177du); f_12aa2a30();
  /* 12ab177d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1780 mov dword ptr [0x12ace7dc], eax */
  w32((uint32_t)(0x12ace7dc), (EAX));
  /* 12ab1785 cmp dword ptr [0x12ace7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab178c jne 0x12ab179d */
  if (!C.zf) goto L_12ab179d;
  /* 12ab178e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab1790 call 0x12aa64d0 */
  push32(0x12ab1795u); f_12aa64d0();
  /* 12ab1795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1798 jmp 0x12ab1937 */
  goto L_12ab1937;
L_12ab179d:;
  /* 12ab179d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab17a0 push edx */
  push32((uint32_t)(EDX));
  /* 12ab17a1 mov eax, dword ptr [0x12ace7dc] */
  EAX = (r32((uint32_t)(0x12ace7dc)));
  /* 12ab17a6 push eax */
  push32((uint32_t)(EAX));
  /* 12ab17a7 call 0x12aa59e0 */
  push32(0x12ab17acu); f_12aa59e0();
  /* 12ab17ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17af push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab17b1 call 0x12aa64d0 */
  push32(0x12ab17b6u); f_12aa64d0();
  /* 12ab17b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ab17bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab17be push ecx */
  push32((uint32_t)(ECX));
  /* 12ab17bf mov edx, dword ptr [0x12acde1c] */
  EDX = (r32((uint32_t)(0x12acde1c)));
  /* 12ab17c5 push edx */
  push32((uint32_t)(EDX));
  /* 12ab17c6 call 0x12aa6250 */
  push32(0x12ab17cbu); f_12aa6250();
  /* 12ab17cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17ce mov eax, dword ptr [0x12acde1c] */
  EAX = (r32((uint32_t)(0x12acde1c)));
  /* 12ab17d3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12ab17d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab17da add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab17e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab17e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab17e6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab17e9 jne 0x12ab17fd */
  if (!C.zf) goto L_12ab17fd;
  /* 12ab17eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab17ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab17f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab17f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab17fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ab17fd:;
  /* 12ab17fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1800 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1801 call 0x12ab12e0 */
  push32(0x12ab1806u); f_12ab12e0();
  /* 12ab1806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1809 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab180f mov dword ptr [0x12acdd90], eax */
  w32((uint32_t)(0x12acdd90), (EAX));
L_12ab1814:;
  /* 12ab1814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1817 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab181a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab181d je 0x12ab1835 */
  if (C.zf) goto L_12ab1835;
  /* 12ab181f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1822 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab1825 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1828 jl 0x12ab1840 */
  if ((C.sf!=C.of)) goto L_12ab1840;
  /* 12ab182a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab182d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab1830 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1833 jg 0x12ab1840 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab1840;
L_12ab1835:;
  /* 12ab1835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1838 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab183b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab183e jmp 0x12ab1814 */
  goto L_12ab1814;
L_12ab1840:;
  /* 12ab1840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1843 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab1846 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1849 jne 0x12ab18e5 */
  if (!C.zf) goto L_12ab18e5;
  /* 12ab184f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1852 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1855 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab1858 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab185b push edx */
  push32((uint32_t)(EDX));
  /* 12ab185c call 0x12ab12e0 */
  push32(0x12ab1861u); f_12ab12e0();
  /* 12ab1861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1864 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1867 mov ecx, dword ptr [0x12acdd90] */
  ECX = (r32((uint32_t)(0x12acdd90)));
  /* 12ab186d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab186f mov dword ptr [0x12acdd90], ecx */
  w32((uint32_t)(0x12acdd90), (ECX));
L_12ab1875:;
  /* 12ab1875 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1878 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab187b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab187e jl 0x12ab1896 */
  if ((C.sf!=C.of)) goto L_12ab1896;
  /* 12ab1880 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1883 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab1886 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1889 jg 0x12ab1896 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab1896;
  /* 12ab188b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab188e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1891 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab1894 jmp 0x12ab1875 */
  goto L_12ab1875;
L_12ab1896:;
  /* 12ab1896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1899 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab189c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab189f jne 0x12ab18e5 */
  if (!C.zf) goto L_12ab18e5;
  /* 12ab18a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab18a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab18aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18ad push ecx */
  push32((uint32_t)(ECX));
  /* 12ab18ae call 0x12ab12e0 */
  push32(0x12ab18b3u); f_12ab12e0();
  /* 12ab18b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab18b6 mov edx, dword ptr [0x12acdd90] */
  EDX = (r32((uint32_t)(0x12acdd90)));
  /* 12ab18bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab18be mov dword ptr [0x12acdd90], edx */
  w32((uint32_t)(0x12acdd90), (EDX));
L_12ab18c4:;
  /* 12ab18c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab18ca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab18cd jl 0x12ab18e5 */
  if ((C.sf!=C.of)) goto L_12ab18e5;
  /* 12ab18cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ab18d5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab18d8 jg 0x12ab18e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab18e5;
  /* 12ab18da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab18e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab18e3 jmp 0x12ab18c4 */
  goto L_12ab18c4;
L_12ab18e5:;
  /* 12ab18e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab18e9 je 0x12ab18f9 */
  if (C.zf) goto L_12ab18f9;
  /* 12ab18eb mov edx, dword ptr [0x12acdd90] */
  EDX = (r32((uint32_t)(0x12acdd90)));
  /* 12ab18f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab18f3 mov dword ptr [0x12acdd90], edx */
  w32((uint32_t)(0x12acdd90), (EDX));
L_12ab18f9:;
  /* 12ab18f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab18fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ab18ff mov dword ptr [0x12acdd94], ecx */
  w32((uint32_t)(0x12acdd94), (ECX));
  /* 12ab1905 cmp dword ptr [0x12acdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab190c je 0x12ab192e */
  if (C.zf) goto L_12ab192e;
  /* 12ab190e push 3 */
  push32((uint32_t)(0x3u));
  /* 12ab1910 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1913 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1914 mov eax, dword ptr [0x12acde20] */
  EAX = (r32((uint32_t)(0x12acde20)));
  /* 12ab1919 push eax */
  push32((uint32_t)(EAX));
  /* 12ab191a call 0x12aa6250 */
  push32(0x12ab191fu); f_12aa6250();
  /* 12ab191f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1922 mov ecx, dword ptr [0x12acde20] */
  ECX = (r32((uint32_t)(0x12acde20)));
  /* 12ab1928 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12ab192c jmp 0x12ab1937 */
  goto L_12ab1937;
L_12ab192e:;
  /* 12ab192e mov edx, dword ptr [0x12acde20] */
  EDX = (r32((uint32_t)(0x12acde20)));
  /* 12ab1934 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12ab1937:;
  /* 12ab1937 mov esp, ebp */
  ESP = (EBP);
  /* 12ab1939 pop ebp */
  EBP = (pop32());
  /* 12ab193a ret  */
  ESPCHK(0x12ab1590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x12ab1940 (46 bytes, 18 insns) */
void f_12ab1940(void) {
  FTRACE(0x12ab1940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1940 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1941 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1943 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1944 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab1946 call 0x12aa6430 */
  push32(0x12ab194bu); f_12aa6430();
  /* 12ab194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab194e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1951 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1952 call 0x12ab1970 */
  push32(0x12ab1957u); f_12ab1970();
  /* 12ab1957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab195a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab195d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ab195f call 0x12aa64d0 */
  push32(0x12ab1964u); f_12aa64d0();
  /* 12ab1964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab196a mov esp, ebp */
  ESP = (EBP);
  /* 12ab196c pop ebp */
  EBP = (pop32());
  /* 12ab196d ret  */
  ESPCHK(0x12ab1940u, _esp0);
  ESP += 4; return;
}

/* FUN_10011970 @ 0x12ab1970 (762 bytes, 246 insns) */
void f_12ab1970(void) {
  FTRACE(0x12ab1970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1970 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1971 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1973 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1974 cmp dword ptr [0x12acdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab197b jne 0x12ab1984 */
  if (!C.zf) goto L_12ab1984;
  /* 12ab197d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab197f jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1984:;
  /* 12ab1984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1987 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ab198a cmp ecx, dword ptr [0x12acde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1990 jne 0x12ab19a4 */
  if (!C.zf) goto L_12ab19a4;
  /* 12ab1992 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1995 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ab1998 cmp eax, dword ptr [0x12acde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab199e je 0x12ab1b6b */
  if (C.zf) goto L_12ab1b6b;
L_12ab19a4:;
  /* 12ab19a4 cmp dword ptr [0x12ace728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab19ab je 0x12ab1b25 */
  if (C.zf) goto L_12ab1b25;
  /* 12ab19b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab19b3 mov cx, word ptr [0x12ace7c8] */
  CX = (r16((uint32_t)(0x12ace7c8)));
  /* 12ab19ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab19bc jne 0x12ab1a19 */
  if (!C.zf) goto L_12ab1a19;
  /* 12ab19be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab19c0 mov dx, word ptr [0x12ace7d6] */
  DX = (r16((uint32_t)(0x12ace7d6)));
  /* 12ab19c7 push edx */
  push32((uint32_t)(EDX));
  /* 12ab19c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab19ca mov ax, word ptr [0x12ace7d4] */
  AX = (r16((uint32_t)(0x12ace7d4)));
  /* 12ab19d0 push eax */
  push32((uint32_t)(EAX));
  /* 12ab19d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab19d3 mov cx, word ptr [0x12ace7d2] */
  CX = (r16((uint32_t)(0x12ace7d2)));
  /* 12ab19da push ecx */
  push32((uint32_t)(ECX));
  /* 12ab19db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab19dd mov dx, word ptr [0x12ace7d0] */
  DX = (r16((uint32_t)(0x12ace7d0)));
  /* 12ab19e4 push edx */
  push32((uint32_t)(EDX));
  /* 12ab19e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab19e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab19e9 mov ax, word ptr [0x12ace7cc] */
  AX = (r16((uint32_t)(0x12ace7cc)));
  /* 12ab19ef push eax */
  push32((uint32_t)(EAX));
  /* 12ab19f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab19f2 mov cx, word ptr [0x12ace7ce] */
  CX = (r16((uint32_t)(0x12ace7ce)));
  /* 12ab19f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab19fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab19fc mov dx, word ptr [0x12ace7ca] */
  DX = (r16((uint32_t)(0x12ace7ca)));
  /* 12ab1a03 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1a07 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ab1a0a push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1a0b push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1a0f call 0x12ab1c70 */
  push32(0x12ab1a14u); f_12ab1c70();
  /* 12ab1a14 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1a17 jmp 0x12ab1a6a */
  goto L_12ab1a6a;
L_12ab1a19:;
  /* 12ab1a19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1a1b mov dx, word ptr [0x12ace7d6] */
  DX = (r16((uint32_t)(0x12ace7d6)));
  /* 12ab1a22 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1a25 mov ax, word ptr [0x12ace7d4] */
  AX = (r16((uint32_t)(0x12ace7d4)));
  /* 12ab1a2b push eax */
  push32((uint32_t)(EAX));
  /* 12ab1a2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1a2e mov cx, word ptr [0x12ace7d2] */
  CX = (r16((uint32_t)(0x12ace7d2)));
  /* 12ab1a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1a36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1a38 mov dx, word ptr [0x12ace7d0] */
  DX = (r16((uint32_t)(0x12ace7d0)));
  /* 12ab1a3f push edx */
  push32((uint32_t)(EDX));
  /* 12ab1a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1a42 mov ax, word ptr [0x12ace7ce] */
  AX = (r16((uint32_t)(0x12ace7ce)));
  /* 12ab1a48 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1a4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1a4f mov cx, word ptr [0x12ace7ca] */
  CX = (r16((uint32_t)(0x12ace7ca)));
  /* 12ab1a56 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1a5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ab1a5d push eax */
  push32((uint32_t)(EAX));
  /* 12ab1a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1a60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1a62 call 0x12ab1c70 */
  push32(0x12ab1a67u); f_12ab1c70();
  /* 12ab1a67 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab1a6a:;
  /* 12ab1a6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1a6c mov cx, word ptr [0x12ace774] */
  CX = (r16((uint32_t)(0x12ace774)));
  /* 12ab1a73 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab1a75 jne 0x12ab1ad2 */
  if (!C.zf) goto L_12ab1ad2;
  /* 12ab1a77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1a79 mov dx, word ptr [0x12ace782] */
  DX = (r16((uint32_t)(0x12ace782)));
  /* 12ab1a80 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1a81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1a83 mov ax, word ptr [0x12ace780] */
  AX = (r16((uint32_t)(0x12ace780)));
  /* 12ab1a89 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1a8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1a8c mov cx, word ptr [0x12ace77e] */
  CX = (r16((uint32_t)(0x12ace77e)));
  /* 12ab1a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1a96 mov dx, word ptr [0x12ace77c] */
  DX = (r16((uint32_t)(0x12ace77c)));
  /* 12ab1a9d push edx */
  push32((uint32_t)(EDX));
  /* 12ab1a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1aa2 mov ax, word ptr [0x12ace778] */
  AX = (r16((uint32_t)(0x12ace778)));
  /* 12ab1aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1aa9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1aab mov cx, word ptr [0x12ace77a] */
  CX = (r16((uint32_t)(0x12ace77a)));
  /* 12ab1ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1ab3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1ab5 mov dx, word ptr [0x12ace776] */
  DX = (r16((uint32_t)(0x12ace776)));
  /* 12ab1abc push edx */
  push32((uint32_t)(EDX));
  /* 12ab1abd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1ac0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ab1ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ac8 call 0x12ab1c70 */
  push32(0x12ab1acdu); f_12ab1c70();
  /* 12ab1acd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1ad0 jmp 0x12ab1b23 */
  goto L_12ab1b23;
L_12ab1ad2:;
  /* 12ab1ad2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1ad4 mov dx, word ptr [0x12ace782] */
  DX = (r16((uint32_t)(0x12ace782)));
  /* 12ab1adb push edx */
  push32((uint32_t)(EDX));
  /* 12ab1adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1ade mov ax, word ptr [0x12ace780] */
  AX = (r16((uint32_t)(0x12ace780)));
  /* 12ab1ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1ae5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1ae7 mov cx, word ptr [0x12ace77e] */
  CX = (r16((uint32_t)(0x12ace77e)));
  /* 12ab1aee push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1aef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1af1 mov dx, word ptr [0x12ace77c] */
  DX = (r16((uint32_t)(0x12ace77c)));
  /* 12ab1af8 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1afb mov ax, word ptr [0x12ace77a] */
  AX = (r16((uint32_t)(0x12ace77a)));
  /* 12ab1b01 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1b08 mov cx, word ptr [0x12ace776] */
  CX = (r16((uint32_t)(0x12ace776)));
  /* 12ab1b0f push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1b10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ab1b16 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b1b call 0x12ab1c70 */
  push32(0x12ab1b20u); f_12ab1c70();
  /* 12ab1b20 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab1b23:;
  /* 12ab1b23 jmp 0x12ab1b6b */
  goto L_12ab1b6b;
L_12ab1b25:;
  /* 12ab1b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab1b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1b33 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab1b35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ab1b3b push edx */
  push32((uint32_t)(EDX));
  /* 12ab1b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1b3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1b40 call 0x12ab1c70 */
  push32(0x12ab1b45u); f_12ab1c70();
  /* 12ab1b45 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab1b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b54 push 5 */
  push32((uint32_t)(0x5u));
  /* 12ab1b56 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ab1b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b5b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ab1b5e push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1b5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1b63 call 0x12ab1c70 */
  push32(0x12ab1b68u); f_12ab1c70();
  /* 12ab1b68 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab1b6b:;
  /* 12ab1b6b mov edx, dword ptr [0x12acde2c] */
  EDX = (r32((uint32_t)(0x12acde2c)));
  /* 12ab1b71 cmp edx, dword ptr [0x12acde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1b77 jge 0x12ab1bc4 */
  if ((C.sf==C.of)) goto L_12ab1bc4;
  /* 12ab1b79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b7c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ab1b7f cmp ecx, dword ptr [0x12acde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1b85 jl 0x12ab1b95 */
  if ((C.sf!=C.of)) goto L_12ab1b95;
  /* 12ab1b87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b8a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ab1b8d cmp eax, dword ptr [0x12acde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1b93 jle 0x12ab1b9c */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1b9c;
L_12ab1b95:;
  /* 12ab1b95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1b97 jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1b9c:;
  /* 12ab1b9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1b9f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ab1ba2 cmp edx, dword ptr [0x12acde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1ba8 jle 0x12ab1bc2 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1bc2;
  /* 12ab1baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1bad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ab1bb0 cmp ecx, dword ptr [0x12acde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1bb6 jge 0x12ab1bc2 */
  if ((C.sf==C.of)) goto L_12ab1bc2;
  /* 12ab1bb8 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab1bbd jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1bc2:;
  /* 12ab1bc2 jmp 0x12ab1c07 */
  goto L_12ab1c07;
L_12ab1bc4:;
  /* 12ab1bc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1bc7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ab1bca cmp eax, dword ptr [0x12acde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1bd0 jl 0x12ab1be0 */
  if ((C.sf!=C.of)) goto L_12ab1be0;
  /* 12ab1bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1bd5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ab1bd8 cmp edx, dword ptr [0x12acde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1bde jle 0x12ab1be7 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1be7;
L_12ab1be0:;
  /* 12ab1be0 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab1be5 jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1be7:;
  /* 12ab1be7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1bea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ab1bed cmp ecx, dword ptr [0x12acde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1bf3 jle 0x12ab1c07 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1c07;
  /* 12ab1bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1bf8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ab1bfb cmp eax, dword ptr [0x12acde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1c01 jge 0x12ab1c07 */
  if ((C.sf==C.of)) goto L_12ab1c07;
  /* 12ab1c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1c05 jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1c07:;
  /* 12ab1c07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1c0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ab1c0d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1c13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab1c15 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1c1a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ab1c1d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1c23 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1c25 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab1c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1c31 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ab1c34 cmp edx, dword ptr [0x12acde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1c3a jne 0x12ab1c52 */
  if (!C.zf) goto L_12ab1c52;
  /* 12ab1c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab1c3f cmp eax, dword ptr [0x12acde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1c45 jl 0x12ab1c4e */
  if ((C.sf!=C.of)) goto L_12ab1c4e;
  /* 12ab1c47 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab1c4c jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1c4e:;
  /* 12ab1c4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1c50 jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1c52:;
  /* 12ab1c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab1c55 cmp ecx, dword ptr [0x12acde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1c5b jge 0x12ab1c64 */
  if ((C.sf==C.of)) goto L_12ab1c64;
  /* 12ab1c5d mov eax, 1 */
  EAX = (0x1u);
  /* 12ab1c62 jmp 0x12ab1c66 */
  goto L_12ab1c66;
L_12ab1c64:;
  /* 12ab1c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab1c66:;
  /* 12ab1c66 mov esp, ebp */
  ESP = (EBP);
  /* 12ab1c68 pop ebp */
  EBP = (pop32());
  /* 12ab1c69 ret  */
  ESPCHK(0x12ab1970u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x12ab1c70 (504 bytes, 145 insns) */
void f_12ab1c70(void) {
  FTRACE(0x12ab1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1c71 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1c76 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1c7a jne 0x12ab1d4c */
  if (!C.zf) goto L_12ab1d4c;
  /* 12ab1c80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1c83 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab1c88 jne 0x12ab1c99 */
  if (!C.zf) goto L_12ab1c99;
  /* 12ab1c8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1c8d mov edx, dword ptr [ecx*4 + 0x12acde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acde4c)));
  /* 12ab1c94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ab1c97 jmp 0x12ab1ca6 */
  goto L_12ab1ca6;
L_12ab1c99:;
  /* 12ab1c99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1c9c mov ecx, dword ptr [eax*4 + 0x12acde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acde80)));
  /* 12ab1ca3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ab1ca6:;
  /* 12ab1ca6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab1ca9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1cac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ab1caf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1cb2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1cb5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1cbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1cbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1cc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1cc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1cc6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12ab1cc9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12ab1ccd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ab1cce mov ecx, 7 */
  ECX = (0x7u);
  /* 12ab1cd3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ab1cd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab1cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab1cdb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1cde jge 0x12ab1cf9 */
  if ((C.sf==C.of)) goto L_12ab1cf9;
  /* 12ab1ce0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab1ce3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1ce6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab1ce9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1cec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1cef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1cf2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1cf4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ab1cf7 jmp 0x12ab1d0d */
  goto L_12ab1d0d;
L_12ab1cf9:;
  /* 12ab1cf9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab1cfc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1cff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab1d02 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1d05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1d08 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1d0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ab1d0d:;
  /* 12ab1d0d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1d11 jne 0x12ab1d4a */
  if (!C.zf) goto L_12ab1d4a;
  /* 12ab1d13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1d16 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab1d19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab1d1b jne 0x12ab1d2c */
  if (!C.zf) goto L_12ab1d2c;
  /* 12ab1d1d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1d20 mov eax, dword ptr [edx*4 + 0x12acde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acde50)));
  /* 12ab1d27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ab1d2a jmp 0x12ab1d39 */
  goto L_12ab1d39;
L_12ab1d2c:;
  /* 12ab1d2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1d2f mov edx, dword ptr [ecx*4 + 0x12acde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acde84)));
  /* 12ab1d36 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ab1d39:;
  /* 12ab1d39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1d3c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1d3f jle 0x12ab1d4a */
  if ((C.zf||C.sf!=C.of)) goto L_12ab1d4a;
  /* 12ab1d41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1d44 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1d47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ab1d4a:;
  /* 12ab1d4a jmp 0x12ab1d81 */
  goto L_12ab1d81;
L_12ab1d4c:;
  /* 12ab1d4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1d4f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12ab1d52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab1d54 jne 0x12ab1d65 */
  if (!C.zf) goto L_12ab1d65;
  /* 12ab1d56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1d59 mov ecx, dword ptr [eax*4 + 0x12acde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acde4c)));
  /* 12ab1d60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ab1d63 jmp 0x12ab1d72 */
  goto L_12ab1d72;
L_12ab1d65:;
  /* 12ab1d65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1d68 mov eax, dword ptr [edx*4 + 0x12acde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acde80)));
  /* 12ab1d6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12ab1d72:;
  /* 12ab1d72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ab1d75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ab1d78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1d7b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1d7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ab1d81:;
  /* 12ab1d81 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1d85 jne 0x12ab1dc1 */
  if (!C.zf) goto L_12ab1dc1;
  /* 12ab1d87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1d8a mov dword ptr [0x12acde2c], eax */
  w32((uint32_t)(0x12acde2c), (EAX));
  /* 12ab1d8f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12ab1d92 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1d95 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12ab1d98 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1d9a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1d9d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12ab1da0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1da2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1da8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12ab1dab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1dad mov dword ptr [0x12acde30], ecx */
  w32((uint32_t)(0x12acde30), (ECX));
  /* 12ab1db3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1db6 mov dword ptr [0x12acde28], edx */
  w32((uint32_t)(0x12acde28), (EDX));
  /* 12ab1dbc jmp 0x12ab1e64 */
  goto L_12ab1e64;
L_12ab1dc1:;
  /* 12ab1dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab1dc4 mov dword ptr [0x12acde3c], eax */
  w32((uint32_t)(0x12acde3c), (EAX));
  /* 12ab1dc9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12ab1dcc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1dcf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12ab1dd2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1dd4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1dd7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12ab1dda add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1ddc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1de2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12ab1de5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1de7 mov dword ptr [0x12acde40], ecx */
  w32((uint32_t)(0x12acde40), (ECX));
  /* 12ab1ded mov edx, dword ptr [0x12acdd98] */
  EDX = (r32((uint32_t)(0x12acdd98)));
  /* 12ab1df3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ab1df9 mov eax, dword ptr [0x12acde40] */
  EAX = (r32((uint32_t)(0x12acde40)));
  /* 12ab1dfe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1e00 mov dword ptr [0x12acde40], eax */
  w32((uint32_t)(0x12acde40), (EAX));
  /* 12ab1e05 cmp dword ptr [0x12acde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1e0c jge 0x12ab1e31 */
  if ((C.sf==C.of)) goto L_12ab1e31;
  /* 12ab1e0e mov ecx, dword ptr [0x12acde40] */
  ECX = (r32((uint32_t)(0x12acde40)));
  /* 12ab1e14 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1e1a mov dword ptr [0x12acde40], ecx */
  w32((uint32_t)(0x12acde40), (ECX));
  /* 12ab1e20 mov edx, dword ptr [0x12acde3c] */
  EDX = (r32((uint32_t)(0x12acde3c)));
  /* 12ab1e26 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1e29 mov dword ptr [0x12acde3c], edx */
  w32((uint32_t)(0x12acde3c), (EDX));
  /* 12ab1e2f jmp 0x12ab1e5b */
  goto L_12ab1e5b;
L_12ab1e31:;
  /* 12ab1e31 cmp dword ptr [0x12acde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12acde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1e3b jl 0x12ab1e5b */
  if ((C.sf!=C.of)) goto L_12ab1e5b;
  /* 12ab1e3d mov eax, dword ptr [0x12acde40] */
  EAX = (r32((uint32_t)(0x12acde40)));
  /* 12ab1e42 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab1e47 mov dword ptr [0x12acde40], eax */
  w32((uint32_t)(0x12acde40), (EAX));
  /* 12ab1e4c mov ecx, dword ptr [0x12acde3c] */
  ECX = (r32((uint32_t)(0x12acde3c)));
  /* 12ab1e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1e55 mov dword ptr [0x12acde3c], ecx */
  w32((uint32_t)(0x12acde3c), (ECX));
L_12ab1e5b:;
  /* 12ab1e5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1e5e mov dword ptr [0x12acde38], edx */
  w32((uint32_t)(0x12acde38), (EDX));
L_12ab1e64:;
  /* 12ab1e64 mov esp, ebp */
  ESP = (EBP);
  /* 12ab1e66 pop ebp */
  EBP = (pop32());
  /* 12ab1e67 ret  */
  ESPCHK(0x12ab1c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e70 @ 0x12ab1e70 (382 bytes, 135 insns) */
void f_12ab1e70(void) {
  FTRACE(0x12ab1e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab1e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab1e71 mov ebp, esp */
  EBP = (ESP);
  /* 12ab1e73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab1e75 push 0x12aca850 */
  push32((uint32_t)(0x12aca850u));
  /* 12ab1e7a push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12ab1e7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ab1e85 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1e86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ab1e8d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1e90 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab1e91 push esi */
  push32((uint32_t)(ESI));
  /* 12ab1e92 push edi */
  push32((uint32_t)(EDI));
  /* 12ab1e93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab1e96 cmp dword ptr [0x12ace7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1e9d jne 0x12ab1ee2 */
  if (!C.zf) goto L_12ab1ee2;
  /* 12ab1e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ea7 call dword ptr [0x12ad0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0238))), 0x12ab1eadu);
  /* 12ab1ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab1eaf je 0x12ab1ebd */
  if (C.zf) goto L_12ab1ebd;
  /* 12ab1eb1 mov dword ptr [0x12ace7e4], 1 */
  w32((uint32_t)(0x12ace7e4), (0x1u));
  /* 12ab1ebb jmp 0x12ab1ee2 */
  goto L_12ab1ee2;
L_12ab1ebd:;
  /* 12ab1ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1ec5 call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12ab1ecbu);
  /* 12ab1ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab1ecd je 0x12ab1edb */
  if (C.zf) goto L_12ab1edb;
  /* 12ab1ecf mov dword ptr [0x12ace7e4], 2 */
  w32((uint32_t)(0x12ace7e4), (0x2u));
  /* 12ab1ed9 jmp 0x12ab1ee2 */
  goto L_12ab1ee2;
L_12ab1edb:;
  /* 12ab1edb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1edd jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1ee2:;
  /* 12ab1ee2 cmp dword ptr [0x12ace7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1ee9 jne 0x12ab1f06 */
  if (!C.zf) goto L_12ab1f06;
  /* 12ab1eeb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1eee push eax */
  push32((uint32_t)(EAX));
  /* 12ab1eef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1ef3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab1ef6 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1ef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1efa push eax */
  push32((uint32_t)(EAX));
  /* 12ab1efb call dword ptr [0x12ad0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0238))), 0x12ab1f01u);
  /* 12ab1f01 jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1f06:;
  /* 12ab1f06 cmp dword ptr [0x12ace7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1f0d jne 0x12ab1fef */
  if (!C.zf) goto L_12ab1fef;
  /* 12ab1f13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1f17 jne 0x12ab1f22 */
  if (!C.zf) goto L_12ab1f22;
  /* 12ab1f19 mov ecx, dword ptr [0x12ace698] */
  ECX = (r32((uint32_t)(0x12ace698)));
  /* 12ab1f1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12ab1f22:;
  /* 12ab1f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1f26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab1f29 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1f2d push eax */
  push32((uint32_t)(EAX));
  /* 12ab1f2e call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12ab1f34u);
  /* 12ab1f34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ab1f37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1f3b jne 0x12ab1f44 */
  if (!C.zf) goto L_12ab1f44;
  /* 12ab1f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1f3f jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1f44:;
  /* 12ab1f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab1f4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab1f4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab1f51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab1f53 call 0x12aa5bd0 */
  push32(0x12ab1f58u); f_12aa5bd0();
  /* 12ab1f58 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12ab1f5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab1f5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab1f61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ab1f64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab1f6b jmp 0x12ab1f84 */
  goto L_12ab1f84;
  /* 12ab1f6d mov eax, 1 */
  EAX = (0x1u);
  /* 12ab1f72 ret  */
  ESPCHK(0x12ab1e70u, _esp0);
  ESP += 4; return;
  /* 12ab1f73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab1f76 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ab1f7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab1f84:;
  /* 12ab1f84 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1f88 jne 0x12ab1f8e */
  if (!C.zf) goto L_12ab1f8e;
  /* 12ab1f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1f8c jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1f8e:;
  /* 12ab1f8e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab1f91 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1f92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab1f95 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1f96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab1f99 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1f9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab1f9d push edx */
  push32((uint32_t)(EDX));
  /* 12ab1f9e call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12ab1fa4u);
  /* 12ab1fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab1fa6 jne 0x12ab1fac */
  if (!C.zf) goto L_12ab1fac;
  /* 12ab1fa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab1faa jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1fac:;
  /* 12ab1fac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab1fb0 jne 0x12ab1fcd */
  if (!C.zf) goto L_12ab1fcd;
  /* 12ab1fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab1fb6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab1fb8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab1fbb push eax */
  push32((uint32_t)(EAX));
  /* 12ab1fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1fbe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab1fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1fc2 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab1fc8u);
  /* 12ab1fc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ab1fcb jmp 0x12ab1fea */
  goto L_12ab1fea;
L_12ab1fcd:;
  /* 12ab1fcd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab1fd0 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1fd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab1fd4 push eax */
  push32((uint32_t)(EAX));
  /* 12ab1fd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab1fd7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab1fda push ecx */
  push32((uint32_t)(ECX));
  /* 12ab1fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab1fdd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab1fe0 push edx */
  push32((uint32_t)(EDX));
  /* 12ab1fe1 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab1fe7u);
  /* 12ab1fe7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ab1fea:;
  /* 12ab1fea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab1fed jmp 0x12ab1ff1 */
  goto L_12ab1ff1;
L_12ab1fef:;
  /* 12ab1fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab1ff1:;
  /* 12ab1ff1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12ab1ff4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab1ff7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ab1ffe pop edi */
  EDI = (pop32());
  /* 12ab1fff pop esi */
  ESI = (pop32());
  /* 12ab2000 pop ebx */
  EBX = (pop32());
  /* 12ab2001 mov esp, ebp */
  ESP = (EBP);
  /* 12ab2003 pop ebp */
  EBP = (pop32());
  /* 12ab2004 ret  */
  ESPCHK(0x12ab1e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x12ab2010 (398 bytes, 140 insns) */
void f_12ab2010(void) {
  FTRACE(0x12ab2010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2010 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2011 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab2015 push 0x12aca860 */
  push32((uint32_t)(0x12aca860u));
  /* 12ab201a push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12ab201f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ab2025 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ab202d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2030 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab2031 push esi */
  push32((uint32_t)(ESI));
  /* 12ab2032 push edi */
  push32((uint32_t)(EDI));
  /* 12ab2033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab2036 cmp dword ptr [0x12ace7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab203d jne 0x12ab2082 */
  if (!C.zf) goto L_12ab2082;
  /* 12ab203f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2041 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2043 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2045 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2047 call dword ptr [0x12ad0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0238))), 0x12ab204du);
  /* 12ab204d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab204f je 0x12ab205d */
  if (C.zf) goto L_12ab205d;
  /* 12ab2051 mov dword ptr [0x12ace7e8], 1 */
  w32((uint32_t)(0x12ace7e8), (0x1u));
  /* 12ab205b jmp 0x12ab2082 */
  goto L_12ab2082;
L_12ab205d:;
  /* 12ab205d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab205f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2061 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2065 call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12ab206bu);
  /* 12ab206b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab206d je 0x12ab207b */
  if (C.zf) goto L_12ab207b;
  /* 12ab206f mov dword ptr [0x12ace7e8], 2 */
  w32((uint32_t)(0x12ace7e8), (0x2u));
  /* 12ab2079 jmp 0x12ab2082 */
  goto L_12ab2082;
L_12ab207b:;
  /* 12ab207b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab207d jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab2082:;
  /* 12ab2082 cmp dword ptr [0x12ace7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2089 jne 0x12ab20a6 */
  if (!C.zf) goto L_12ab20a6;
  /* 12ab208b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab208e push eax */
  push32((uint32_t)(EAX));
  /* 12ab208f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab2092 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab2096 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab209a push eax */
  push32((uint32_t)(EAX));
  /* 12ab209b call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12ab20a1u);
  /* 12ab20a1 jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab20a6:;
  /* 12ab20a6 cmp dword ptr [0x12ace7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab20ad jne 0x12ab219f */
  if (!C.zf) goto L_12ab219f;
  /* 12ab20b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab20b7 jne 0x12ab20c2 */
  if (!C.zf) goto L_12ab20c2;
  /* 12ab20b9 mov ecx, dword ptr [0x12ace698] */
  ECX = (r32((uint32_t)(0x12ace698)));
  /* 12ab20bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12ab20c2:;
  /* 12ab20c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab20c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab20c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab20c9 push edx */
  push32((uint32_t)(EDX));
  /* 12ab20ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab20cd push eax */
  push32((uint32_t)(EAX));
  /* 12ab20ce call dword ptr [0x12ad0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0238))), 0x12ab20d4u);
  /* 12ab20d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ab20d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab20db jne 0x12ab20e4 */
  if (!C.zf) goto L_12ab20e4;
  /* 12ab20dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab20df jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab20e4:;
  /* 12ab20e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab20eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab20ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ab20f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab20f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab20f5 call 0x12aa5bd0 */
  push32(0x12ab20fau); f_12aa5bd0();
  /* 12ab20fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12ab20fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab2100 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab2103 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ab2106 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab210d jmp 0x12ab2126 */
  goto L_12ab2126;
  /* 12ab210f mov eax, 1 */
  EAX = (0x1u);
  /* 12ab2114 ret  */
  ESPCHK(0x12ab2010u, _esp0);
  ESP += 4; return;
  /* 12ab2115 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab2118 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ab211f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab2126:;
  /* 12ab2126 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab212a jne 0x12ab2130 */
  if (!C.zf) goto L_12ab2130;
  /* 12ab212c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab212e jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab2130:;
  /* 12ab2130 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab2133 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2134 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab2137 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2138 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab213b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab213c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab213f push edx */
  push32((uint32_t)(EDX));
  /* 12ab2140 call dword ptr [0x12ad0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0238))), 0x12ab2146u);
  /* 12ab2146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2148 jne 0x12ab214e */
  if (!C.zf) goto L_12ab214e;
  /* 12ab214a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab214c jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab214e:;
  /* 12ab214e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2152 jne 0x12ab2176 */
  if (!C.zf) goto L_12ab2176;
  /* 12ab2154 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2156 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2158 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab215a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab215c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab215e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab2161 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2162 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab2167 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab216a push ecx */
  push32((uint32_t)(ECX));
  /* 12ab216b call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab2171u);
  /* 12ab2171 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ab2174 jmp 0x12ab219a */
  goto L_12ab219a;
L_12ab2176:;
  /* 12ab2176 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2178 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab217a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab217d push edx */
  push32((uint32_t)(EDX));
  /* 12ab217e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab2181 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2182 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab2184 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab2187 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2188 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ab218d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab2190 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2191 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab2197u);
  /* 12ab2197 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ab219a:;
  /* 12ab219a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab219d jmp 0x12ab21a1 */
  goto L_12ab21a1;
L_12ab219f:;
  /* 12ab219f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab21a1:;
  /* 12ab21a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12ab21a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab21a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ab21ae pop edi */
  EDI = (pop32());
  /* 12ab21af pop esi */
  ESI = (pop32());
  /* 12ab21b0 pop ebx */
  EBX = (pop32());
  /* 12ab21b1 mov esp, ebp */
  ESP = (EBP);
  /* 12ab21b3 pop ebp */
  EBP = (pop32());
  /* 12ab21b4 ret  */
  ESPCHK(0x12ab2010u, _esp0);
  ESP += 4; return;
}

/* FUN_100121c0 @ 0x12ab21c0 (11 bytes, 6 insns) */
void f_12ab21c0(void) {
  FTRACE(0x12ab21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab21c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab21c1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab21c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab21c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab21c9 pop ebp */
  EBP = (pop32());
  /* 12ab21ca ret  */
  ESPCHK(0x12ab21c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x12ab21d0 (147 bytes, 43 insns) */
void f_12ab21d0(void) {
  FTRACE(0x12ab21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab21d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab21d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab21d4 cmp dword ptr [0x12ace688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab21db jne 0x12ab21f7 */
  if (!C.zf) goto L_12ab21f7;
  /* 12ab21dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab21e1 jl 0x12ab21f2 */
  if ((C.sf!=C.of)) goto L_12ab21f2;
  /* 12ab21e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab21e7 jg 0x12ab21f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab21f2;
  /* 12ab21e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab21ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab21ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ab21f2:;
  /* 12ab21f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab21f5 jmp 0x12ab225f */
  goto L_12ab225f;
L_12ab21f7:;
  /* 12ab21f7 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12ab21fc call dword ptr [0x12ad0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0278))), 0x12ab2202u);
  /* 12ab2202 cmp dword ptr [0x12ace804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2209 je 0x12ab2229 */
  if (C.zf) goto L_12ab2229;
  /* 12ab220b push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12ab2210 call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12ab2216u);
  /* 12ab2216 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab2218 call 0x12aa6430 */
  push32(0x12ab221du); f_12aa6430();
  /* 12ab221d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2220 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ab2227 jmp 0x12ab2230 */
  goto L_12ab2230;
L_12ab2229:;
  /* 12ab2229 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ab2230:;
  /* 12ab2230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2233 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2234 call 0x12ab2270 */
  push32(0x12ab2239u); f_12ab2270();
  /* 12ab2239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab223c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ab223f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2243 je 0x12ab2251 */
  if (C.zf) goto L_12ab2251;
  /* 12ab2245 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ab2247 call 0x12aa64d0 */
  push32(0x12ab224cu); f_12aa64d0();
  /* 12ab224c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab224f jmp 0x12ab225c */
  goto L_12ab225c;
L_12ab2251:;
  /* 12ab2251 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12ab2256 call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12ab225cu);
L_12ab225c:;
  /* 12ab225c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12ab225f:;
  /* 12ab225f mov esp, ebp */
  ESP = (EBP);
  /* 12ab2261 pop ebp */
  EBP = (pop32());
  /* 12ab2262 ret  */
  ESPCHK(0x12ab21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x12ab2270 (299 bytes, 91 insns) */
void f_12ab2270(void) {
  FTRACE(0x12ab2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2270 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2271 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2276 cmp dword ptr [0x12ace688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab227d jne 0x12ab229c */
  if (!C.zf) goto L_12ab229c;
  /* 12ab227f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2283 jl 0x12ab2294 */
  if ((C.sf!=C.of)) goto L_12ab2294;
  /* 12ab2285 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2289 jg 0x12ab2294 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab2294;
  /* 12ab228b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab228e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2291 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ab2294:;
  /* 12ab2294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2297 jmp 0x12ab2397 */
  goto L_12ab2397;
L_12ab229c:;
  /* 12ab229c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab22a3 jge 0x12ab22e3 */
  if ((C.sf==C.of)) goto L_12ab22e3;
  /* 12ab22a5 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab22ac jle 0x12ab22c1 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab22c1;
  /* 12ab22ae push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab22b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab22b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab22b4 call 0x12aa8a40 */
  push32(0x12ab22b9u); f_12aa8a40();
  /* 12ab22b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab22bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ab22bf jmp 0x12ab22d5 */
  goto L_12ab22d5;
L_12ab22c1:;
  /* 12ab22c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab22c4 mov eax, dword ptr [0x12accc98] */
  EAX = (r32((uint32_t)(0x12accc98)));
  /* 12ab22c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab22cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12ab22cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab22d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ab22d5:;
  /* 12ab22d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab22d9 jne 0x12ab22e3 */
  if (!C.zf) goto L_12ab22e3;
  /* 12ab22db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab22de jmp 0x12ab2397 */
  goto L_12ab2397;
L_12ab22e3:;
  /* 12ab22e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab22e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ab22e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab22ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab22f5 mov eax, dword ptr [0x12accc98] */
  EAX = (r32((uint32_t)(0x12accc98)));
  /* 12ab22fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab22fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12ab2300 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab2308 je 0x12ab232c */
  if (C.zf) goto L_12ab232c;
  /* 12ab230a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab230d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ab2310 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2316 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12ab2319 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ab231c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12ab231f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12ab2323 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12ab232a jmp 0x12ab233d */
  goto L_12ab233d;
L_12ab232c:;
  /* 12ab232c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ab232f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12ab2332 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12ab2336 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12ab233d:;
  /* 12ab233d push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab233f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2341 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ab2343 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12ab2346 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2347 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab234a push eax */
  push32((uint32_t)(EAX));
  /* 12ab234b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12ab234e push ecx */
  push32((uint32_t)(ECX));
  /* 12ab234f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12ab2354 mov edx, dword ptr [0x12ace688] */
  EDX = (r32((uint32_t)(0x12ace688)));
  /* 12ab235a push edx */
  push32((uint32_t)(EDX));
  /* 12ab235b call 0x12aaae20 */
  push32(0x12ab2360u); f_12aaae20();
  /* 12ab2360 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2363 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab2366 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab236a jne 0x12ab2371 */
  if (!C.zf) goto L_12ab2371;
  /* 12ab236c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab236f jmp 0x12ab2397 */
  goto L_12ab2397;
L_12ab2371:;
  /* 12ab2371 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2375 jne 0x12ab2381 */
  if (!C.zf) goto L_12ab2381;
  /* 12ab2377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab237a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab237f jmp 0x12ab2397 */
  goto L_12ab2397;
L_12ab2381:;
  /* 12ab2381 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2384 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2389 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12ab238c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2392 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12ab2395 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12ab2397:;
  /* 12ab2397 mov esp, ebp */
  ESP = (EBP);
  /* 12ab2399 pop ebp */
  EBP = (pop32());
  /* 12ab239a ret  */
  ESPCHK(0x12ab2270u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12ab23a0 (52 bytes, 19 insns) */
void f_12ab23a0(void) {
  FTRACE(0x12ab23a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab23a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ab23a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12ab23a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab23aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12ab23ae jne 0x12ab23b9 */
  if (!C.zf) goto L_12ab23b9;
  /* 12ab23b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ab23b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ab23b6 ret 0x10 */
  ESPCHK(0x12ab23a0u, _esp0);
  ESP += 20; return;
L_12ab23b9:;
  /* 12ab23b9 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab23ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ab23bc mov ebx, eax */
  EBX = (EAX);
  /* 12ab23be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ab23c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ab23c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab23c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ab23cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ab23ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab23d0 pop ebx */
  EBX = (pop32());
  /* 12ab23d1 ret 0x10 */
  ESPCHK(0x12ab23a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100123e0 @ 0x12ab23e0 (46 bytes, 18 insns) */
void f_12ab23e0(void) {
  FTRACE(0x12ab23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab23e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab23e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab23e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab23e6 call 0x12aa6430 */
  push32(0x12ab23ebu); f_12aa6430();
  /* 12ab23eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab23ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab23f1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab23f2 call 0x12ab2410 */
  push32(0x12ab23f7u); f_12ab2410();
  /* 12ab23f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab23fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab23fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ab23ff call 0x12aa64d0 */
  push32(0x12ab2404u); f_12aa64d0();
  /* 12ab2404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab240a mov esp, ebp */
  ESP = (EBP);
  /* 12ab240c pop ebp */
  EBP = (pop32());
  /* 12ab240d ret  */
  ESPCHK(0x12ab23e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12ab2410 (198 bytes, 69 insns) */
void f_12ab2410(void) {
  FTRACE(0x12ab2410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2410 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2411 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2416 mov eax, dword ptr [0x12ace4a4] */
  EAX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab241b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab241e cmp dword ptr [0x12acffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2425 jne 0x12ab242e */
  if (!C.zf) goto L_12ab242e;
  /* 12ab2427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2429 jmp 0x12ab24d2 */
  goto L_12ab24d2;
L_12ab242e:;
  /* 12ab242e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2432 jne 0x12ab2456 */
  if (!C.zf) goto L_12ab2456;
  /* 12ab2434 cmp dword ptr [0x12ace4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab243b je 0x12ab2456 */
  if (C.zf) goto L_12ab2456;
  /* 12ab243d call 0x12ab2530 */
  push32(0x12ab2442u); f_12ab2530();
  /* 12ab2442 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2444 je 0x12ab244d */
  if (C.zf) goto L_12ab244d;
  /* 12ab2446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2448 jmp 0x12ab24d2 */
  goto L_12ab24d2;
L_12ab244d:;
  /* 12ab244d mov ecx, dword ptr [0x12ace4a4] */
  ECX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2453 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ab2456:;
  /* 12ab2456 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab245a je 0x12ab24d0 */
  if (C.zf) goto L_12ab24d0;
  /* 12ab245c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2460 je 0x12ab24d0 */
  if (C.zf) goto L_12ab24d0;
  /* 12ab2462 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2465 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2466 call 0x12aa5860 */
  push32(0x12ab246bu); f_12aa5860();
  /* 12ab246b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab246e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ab2471:;
  /* 12ab2471 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2474 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2477 je 0x12ab24d0 */
  if (C.zf) goto L_12ab24d0;
  /* 12ab2479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab247c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab247e push edx */
  push32((uint32_t)(EDX));
  /* 12ab247f call 0x12aa5860 */
  push32(0x12ab2484u); f_12aa5860();
  /* 12ab2484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2487 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab248a jbe 0x12ab24c5 */
  if ((C.cf||C.zf)) goto L_12ab24c5;
  /* 12ab248c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab248f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab2491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2494 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12ab2498 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab249b jne 0x12ab24c5 */
  if (!C.zf) goto L_12ab24c5;
  /* 12ab249d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab24a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab24a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab24a4 push edx */
  push32((uint32_t)(EDX));
  /* 12ab24a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab24a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab24aa push ecx */
  push32((uint32_t)(ECX));
  /* 12ab24ab call 0x12ab24e0 */
  push32(0x12ab24b0u); f_12ab24e0();
  /* 12ab24b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab24b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab24b5 jne 0x12ab24c5 */
  if (!C.zf) goto L_12ab24c5;
  /* 12ab24b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab24ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab24bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab24bf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12ab24c3 jmp 0x12ab24d2 */
  goto L_12ab24d2;
L_12ab24c5:;
  /* 12ab24c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab24c8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab24cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ab24ce jmp 0x12ab2471 */
  goto L_12ab2471;
L_12ab24d0:;
  /* 12ab24d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab24d2:;
  /* 12ab24d2 mov esp, ebp */
  ESP = (EBP);
  /* 12ab24d4 pop ebp */
  EBP = (pop32());
  /* 12ab24d5 ret  */
  ESPCHK(0x12ab2410u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12ab24e0 (79 bytes, 32 insns) */
void f_12ab24e0(void) {
  FTRACE(0x12ab24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab24e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab24e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab24e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab24e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab24e8 jne 0x12ab24ee */
  if (!C.zf) goto L_12ab24ee;
  /* 12ab24ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab24ec jmp 0x12ab252b */
  goto L_12ab252b;
L_12ab24ee:;
  /* 12ab24ee mov eax, dword ptr [0x12acfb64] */
  EAX = (r32((uint32_t)(0x12acfb64)));
  /* 12ab24f3 push eax */
  push32((uint32_t)(EAX));
  /* 12ab24f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab24f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab24f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab24fb push edx */
  push32((uint32_t)(EDX));
  /* 12ab24fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab24ff push eax */
  push32((uint32_t)(EAX));
  /* 12ab2500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2503 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2504 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2506 mov edx, dword ptr [0x12acfe04] */
  EDX = (r32((uint32_t)(0x12acfe04)));
  /* 12ab250c push edx */
  push32((uint32_t)(EDX));
  /* 12ab250d call 0x12ab25e0 */
  push32(0x12ab2512u); f_12ab25e0();
  /* 12ab2512 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab2518 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab251c jne 0x12ab2525 */
  if (!C.zf) goto L_12ab2525;
  /* 12ab251e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12ab2523 jmp 0x12ab252b */
  goto L_12ab252b;
L_12ab2525:;
  /* 12ab2525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2528 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12ab252b:;
  /* 12ab252b mov esp, ebp */
  ESP = (EBP);
  /* 12ab252d pop ebp */
  EBP = (pop32());
  /* 12ab252e ret  */
  ESPCHK(0x12ab24e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x12ab2530 (174 bytes, 66 insns) */
void f_12ab2530(void) {
  FTRACE(0x12ab2530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2530 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2531 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2536 mov eax, dword ptr [0x12ace4ac] */
  EAX = (r32((uint32_t)(0x12ace4ac)));
  /* 12ab253b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ab253e:;
  /* 12ab253e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2541 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2544 je 0x12ab25d8 */
  if (C.zf) goto L_12ab25d8;
  /* 12ab254a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab254c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab254e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2550 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2552 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab2554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2557 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab2559 push eax */
  push32((uint32_t)(EAX));
  /* 12ab255a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab255c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab255e call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab2564u);
  /* 12ab2564 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab2567 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab256b jne 0x12ab2572 */
  if (!C.zf) goto L_12ab2572;
  /* 12ab256d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2570 jmp 0x12ab25da */
  goto L_12ab25da;
L_12ab2572:;
  /* 12ab2572 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12ab2574 push 0x12aca86c */
  push32((uint32_t)(0x12aca86cu));
  /* 12ab2579 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab257b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab257e push ecx */
  push32((uint32_t)(ECX));
  /* 12ab257f call 0x12aa2a30 */
  push32(0x12ab2584u); f_12aa2a30();
  /* 12ab2584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2587 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab258a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab258e jne 0x12ab2595 */
  if (!C.zf) goto L_12ab2595;
  /* 12ab2590 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2593 jmp 0x12ab25da */
  goto L_12ab25da;
L_12ab2595:;
  /* 12ab2595 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab259c push edx */
  push32((uint32_t)(EDX));
  /* 12ab259d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab25a0 push eax */
  push32((uint32_t)(EAX));
  /* 12ab25a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab25a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab25a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab25a8 push edx */
  push32((uint32_t)(EDX));
  /* 12ab25a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab25ab push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab25ad call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12ab25b3u);
  /* 12ab25b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab25b5 jne 0x12ab25bc */
  if (!C.zf) goto L_12ab25bc;
  /* 12ab25b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab25ba jmp 0x12ab25da */
  goto L_12ab25da;
L_12ab25bc:;
  /* 12ab25bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab25be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab25c1 push eax */
  push32((uint32_t)(EAX));
  /* 12ab25c2 call 0x12ab2a30 */
  push32(0x12ab25c7u); f_12ab2a30();
  /* 12ab25c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab25ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab25cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab25d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab25d3 jmp 0x12ab253e */
  goto L_12ab253e;
L_12ab25d8:;
  /* 12ab25d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab25da:;
  /* 12ab25da mov esp, ebp */
  ESP = (EBP);
  /* 12ab25dc pop ebp */
  EBP = (pop32());
  /* 12ab25dd ret  */
  ESPCHK(0x12ab2530u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x12ab25e0 (970 bytes, 340 insns) */
void f_12ab25e0(void) {
  FTRACE(0x12ab25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab25e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab25e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab25e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ab25e5 push 0x12aca8c0 */
  push32((uint32_t)(0x12aca8c0u));
  /* 12ab25ea push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12ab25ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ab25f5 push eax */
  push32((uint32_t)(EAX));
  /* 12ab25f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ab25fd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2600 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab2601 push esi */
  push32((uint32_t)(ESI));
  /* 12ab2602 push edi */
  push32((uint32_t)(EDI));
  /* 12ab2603 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab2606 cmp dword ptr [0x12ace7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab260d jne 0x12ab2666 */
  if (!C.zf) goto L_12ab2666;
  /* 12ab260f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2611 push 0x12ac9f1c */
  push32((uint32_t)(0x12ac9f1cu));
  /* 12ab2616 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2618 push 0x12ac9f1c */
  push32((uint32_t)(0x12ac9f1cu));
  /* 12ab261d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab261f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2621 call dword ptr [0x12ad0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0230))), 0x12ab2627u);
  /* 12ab2627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2629 je 0x12ab2637 */
  if (C.zf) goto L_12ab2637;
  /* 12ab262b mov dword ptr [0x12ace7ec], 1 */
  w32((uint32_t)(0x12ace7ec), (0x1u));
  /* 12ab2635 jmp 0x12ab2666 */
  goto L_12ab2666;
L_12ab2637:;
  /* 12ab2637 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2639 push 0x12ac9f18 */
  push32((uint32_t)(0x12ac9f18u));
  /* 12ab263e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2640 push 0x12ac9f18 */
  push32((uint32_t)(0x12ac9f18u));
  /* 12ab2645 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2649 call dword ptr [0x12ad0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0234))), 0x12ab264fu);
  /* 12ab264f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2651 je 0x12ab265f */
  if (C.zf) goto L_12ab265f;
  /* 12ab2653 mov dword ptr [0x12ace7ec], 2 */
  w32((uint32_t)(0x12ace7ec), (0x2u));
  /* 12ab265d jmp 0x12ab2666 */
  goto L_12ab2666;
L_12ab265f:;
  /* 12ab265f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2661 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2666:;
  /* 12ab2666 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab266a jle 0x12ab267f */
  if ((C.zf||C.sf!=C.of)) goto L_12ab267f;
  /* 12ab266c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab266f push eax */
  push32((uint32_t)(EAX));
  /* 12ab2670 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab2673 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2674 call 0x12ab29e0 */
  push32(0x12ab2679u); f_12ab29e0();
  /* 12ab2679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab267c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12ab267f:;
  /* 12ab267f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2683 jle 0x12ab2698 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab2698;
  /* 12ab2685 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab2688 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2689 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab268c push eax */
  push32((uint32_t)(EAX));
  /* 12ab268d call 0x12ab29e0 */
  push32(0x12ab2692u); f_12ab29e0();
  /* 12ab2692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2695 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12ab2698:;
  /* 12ab2698 cmp dword ptr [0x12ace7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab269f jne 0x12ab26c4 */
  if (!C.zf) goto L_12ab26c4;
  /* 12ab26a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab26a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab26a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab26a8 push edx */
  push32((uint32_t)(EDX));
  /* 12ab26a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab26ac push eax */
  push32((uint32_t)(EAX));
  /* 12ab26ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab26b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab26b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab26b4 push edx */
  push32((uint32_t)(EDX));
  /* 12ab26b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab26b8 push eax */
  push32((uint32_t)(EAX));
  /* 12ab26b9 call dword ptr [0x12ad0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0234))), 0x12ab26bfu);
  /* 12ab26bf jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab26c4:;
  /* 12ab26c4 cmp dword ptr [0x12ace7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab26cb jne 0x12ab29c2 */
  if (!C.zf) goto L_12ab29c2;
  /* 12ab26d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab26d5 jne 0x12ab26e0 */
  if (!C.zf) goto L_12ab26e0;
  /* 12ab26d7 mov ecx, dword ptr [0x12ace698] */
  ECX = (r32((uint32_t)(0x12ace698)));
  /* 12ab26dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12ab26e0:;
  /* 12ab26e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab26e4 je 0x12ab26f0 */
  if (C.zf) goto L_12ab26f0;
  /* 12ab26e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab26ea jne 0x12ab286c */
  if (!C.zf) goto L_12ab286c;
L_12ab26f0:;
  /* 12ab26f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab26f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab26f6 jne 0x12ab2702 */
  if (!C.zf) goto L_12ab2702;
  /* 12ab26f8 mov eax, 2 */
  EAX = (0x2u);
  /* 12ab26fd jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2702:;
  /* 12ab2702 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2706 jle 0x12ab2712 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab2712;
  /* 12ab2708 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab270d jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2712:;
  /* 12ab2712 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2716 jle 0x12ab2722 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab2722;
  /* 12ab2718 mov eax, 3 */
  EAX = (0x3u);
  /* 12ab271d jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2722:;
  /* 12ab2722 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12ab2725 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2726 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ab2729 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab272a call dword ptr [0x12ad0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0310))), 0x12ab2730u);
  /* 12ab2730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2732 jne 0x12ab273b */
  if (!C.zf) goto L_12ab273b;
  /* 12ab2734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2736 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab273b:;
  /* 12ab273b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab273f jne 0x12ab2747 */
  if (!C.zf) goto L_12ab2747;
  /* 12ab2741 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2745 je 0x12ab2774 */
  if (C.zf) goto L_12ab2774;
L_12ab2747:;
  /* 12ab2747 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab274b jne 0x12ab2753 */
  if (!C.zf) goto L_12ab2753;
  /* 12ab274d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2751 je 0x12ab2774 */
  if (C.zf) goto L_12ab2774;
L_12ab2753:;
  /* 12ab2753 push 0x12aca880 */
  push32((uint32_t)(0x12aca880u));
  /* 12ab2758 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab275a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12ab275f push 0x12aca878 */
  push32((uint32_t)(0x12aca878u));
  /* 12ab2764 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2766 call 0x12aa1af0 */
  push32(0x12ab276bu); f_12aa1af0();
  /* 12ab276b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab276e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2771 jne 0x12ab2774 */
  if (!C.zf) goto L_12ab2774;
  /* 12ab2773 int3  */
  x86_unimpl("int3 @ 0x12ab2773");
L_12ab2774:;
  /* 12ab2774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2778 jne 0x12ab273b */
  if (!C.zf) goto L_12ab273b;
  /* 12ab277a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab277e jle 0x12ab27f3 */
  if ((C.zf||C.sf!=C.of)) goto L_12ab27f3;
  /* 12ab2780 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2784 jae 0x12ab2790 */
  if (!C.cf) goto L_12ab2790;
  /* 12ab2786 mov eax, 3 */
  EAX = (0x3u);
  /* 12ab278b jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2790:;
  /* 12ab2790 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12ab2793 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12ab2796 jmp 0x12ab27a1 */
  goto L_12ab27a1;
L_12ab2798:;
  /* 12ab2798 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab279b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab279e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12ab27a1:;
  /* 12ab27a1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab27a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab27a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab27a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab27aa je 0x12ab27e9 */
  if (C.zf) goto L_12ab27e9;
  /* 12ab27ac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab27af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab27b1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12ab27b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab27b6 je 0x12ab27e9 */
  if (C.zf) goto L_12ab27e9;
  /* 12ab27b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab27bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab27bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab27bf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab27c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab27c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab27c6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab27c8 jl 0x12ab27e7 */
  if ((C.sf!=C.of)) goto L_12ab27e7;
  /* 12ab27ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab27cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab27cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab27d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab27d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab27d6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12ab27d9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab27db jg 0x12ab27e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab27e7;
  /* 12ab27dd mov eax, 2 */
  EAX = (0x2u);
  /* 12ab27e2 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab27e7:;
  /* 12ab27e7 jmp 0x12ab2798 */
  goto L_12ab2798;
L_12ab27e9:;
  /* 12ab27e9 mov eax, 3 */
  EAX = (0x3u);
  /* 12ab27ee jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab27f3:;
  /* 12ab27f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab27f7 jle 0x12ab286c */
  if ((C.zf||C.sf!=C.of)) goto L_12ab286c;
  /* 12ab27f9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab27fd jae 0x12ab2809 */
  if (!C.cf) goto L_12ab2809;
  /* 12ab27ff mov eax, 1 */
  EAX = (0x1u);
  /* 12ab2804 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2809:;
  /* 12ab2809 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12ab280c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12ab280f jmp 0x12ab281a */
  goto L_12ab281a;
L_12ab2811:;
  /* 12ab2811 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab2814 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2817 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12ab281a:;
  /* 12ab281a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab281d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab281f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab2821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2823 je 0x12ab2862 */
  if (C.zf) goto L_12ab2862;
  /* 12ab2825 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab2828 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab282a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12ab282d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab282f je 0x12ab2862 */
  if (C.zf) goto L_12ab2862;
  /* 12ab2831 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab2834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2836 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ab2838 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab283b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab283d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ab283f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2841 jl 0x12ab2860 */
  if ((C.sf!=C.of)) goto L_12ab2860;
  /* 12ab2843 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab2846 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2848 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab284a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ab284d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab284f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12ab2852 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2854 jg 0x12ab2860 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ab2860;
  /* 12ab2856 mov eax, 2 */
  EAX = (0x2u);
  /* 12ab285b jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2860:;
  /* 12ab2860 jmp 0x12ab2811 */
  goto L_12ab2811;
L_12ab2862:;
  /* 12ab2862 mov eax, 1 */
  EAX = (0x1u);
  /* 12ab2867 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab286c:;
  /* 12ab286c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab286e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab2870 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab2873 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2874 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab2877 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2878 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ab287a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ab287d push eax */
  push32((uint32_t)(EAX));
  /* 12ab287e call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab2884u);
  /* 12ab2884 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ab2887 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab288b jne 0x12ab2894 */
  if (!C.zf) goto L_12ab2894;
  /* 12ab288d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab288f jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2894:;
  /* 12ab2894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ab289b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab289e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ab28a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab28a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab28a5 call 0x12aa5bd0 */
  push32(0x12ab28aau); f_12aa5bd0();
  /* 12ab28aa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12ab28ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab28b0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12ab28b3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ab28b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab28bd jmp 0x12ab28d6 */
  goto L_12ab28d6;
  /* 12ab28bf mov eax, 1 */
  EAX = (0x1u);
  /* 12ab28c4 ret  */
  ESPCHK(0x12ab25e0u, _esp0);
  ESP += 4; return;
  /* 12ab28c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab28c8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ab28cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab28d6:;
  /* 12ab28d6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab28da jne 0x12ab28e3 */
  if (!C.zf) goto L_12ab28e3;
  /* 12ab28dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab28de jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab28e3:;
  /* 12ab28e3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab28e6 push edx */
  push32((uint32_t)(EDX));
  /* 12ab28e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab28ea push eax */
  push32((uint32_t)(EAX));
  /* 12ab28eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ab28ee push ecx */
  push32((uint32_t)(ECX));
  /* 12ab28ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ab28f2 push edx */
  push32((uint32_t)(EDX));
  /* 12ab28f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab28f5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ab28f8 push eax */
  push32((uint32_t)(EAX));
  /* 12ab28f9 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab28ffu);
  /* 12ab28ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2901 jne 0x12ab290a */
  if (!C.zf) goto L_12ab290a;
  /* 12ab2903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2905 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab290a:;
  /* 12ab290a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab290c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ab290e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab2911 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2912 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab2915 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2916 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ab2918 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ab291b push eax */
  push32((uint32_t)(EAX));
  /* 12ab291c call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab2922u);
  /* 12ab2922 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ab2925 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2929 jne 0x12ab2932 */
  if (!C.zf) goto L_12ab2932;
  /* 12ab292b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab292d jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab2932:;
  /* 12ab2932 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ab2939 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab293c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ab293e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2941 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ab2943 call 0x12aa5bd0 */
  push32(0x12ab2948u); f_12aa5bd0();
  /* 12ab2948 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12ab294b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ab294e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12ab2951 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12ab2954 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ab295b jmp 0x12ab2974 */
  goto L_12ab2974;
  /* 12ab295d mov eax, 1 */
  EAX = (0x1u);
  /* 12ab2962 ret  */
  ESPCHK(0x12ab25e0u, _esp0);
  ESP += 4; return;
  /* 12ab2963 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab2966 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12ab296d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ab2974:;
  /* 12ab2974 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2978 jne 0x12ab297e */
  if (!C.zf) goto L_12ab297e;
  /* 12ab297a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab297c jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab297e:;
  /* 12ab297e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab2981 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2982 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab2985 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2986 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ab2989 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab298a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ab298d push edx */
  push32((uint32_t)(EDX));
  /* 12ab298e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ab2990 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ab2993 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2994 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12ab299au);
  /* 12ab299a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab299c jne 0x12ab29a2 */
  if (!C.zf) goto L_12ab29a2;
  /* 12ab299e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab29a0 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab29a2:;
  /* 12ab29a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ab29a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab29a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ab29a9 push edx */
  push32((uint32_t)(EDX));
  /* 12ab29aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ab29ad push eax */
  push32((uint32_t)(EAX));
  /* 12ab29ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ab29b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab29b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab29b5 push edx */
  push32((uint32_t)(EDX));
  /* 12ab29b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab29b9 push eax */
  push32((uint32_t)(EAX));
  /* 12ab29ba call dword ptr [0x12ad0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0230))), 0x12ab29c0u);
  /* 12ab29c0 jmp 0x12ab29c4 */
  goto L_12ab29c4;
L_12ab29c2:;
  /* 12ab29c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab29c4:;
  /* 12ab29c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12ab29c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab29ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ab29d1 pop edi */
  EDI = (pop32());
  /* 12ab29d2 pop esi */
  ESI = (pop32());
  /* 12ab29d3 pop ebx */
  EBX = (pop32());
  /* 12ab29d4 mov esp, ebp */
  ESP = (EBP);
  /* 12ab29d6 pop ebp */
  EBP = (pop32());
  /* 12ab29d7 ret  */
  ESPCHK(0x12ab25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x12ab29e0 (80 bytes, 32 insns) */
void f_12ab29e0(void) {
  FTRACE(0x12ab29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab29e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ab29e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab29e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab29e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab29ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab29ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ab29f2:;
  /* 12ab29f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab29f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab29f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab29fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab29fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2a00 je 0x12ab2a17 */
  if (C.zf) goto L_12ab2a17;
  /* 12ab2a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2a05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab2a08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2a0a je 0x12ab2a17 */
  if (C.zf) goto L_12ab2a17;
  /* 12ab2a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2a0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2a12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab2a15 jmp 0x12ab29f2 */
  goto L_12ab29f2;
L_12ab2a17:;
  /* 12ab2a17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2a1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ab2a1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2a1f jne 0x12ab2a29 */
  if (!C.zf) goto L_12ab2a29;
  /* 12ab2a21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2a24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2a27 jmp 0x12ab2a2c */
  goto L_12ab2a2c;
L_12ab2a29:;
  /* 12ab2a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12ab2a2c:;
  /* 12ab2a2c mov esp, ebp */
  ESP = (EBP);
  /* 12ab2a2e pop ebp */
  EBP = (pop32());
  /* 12ab2a2f ret  */
  ESPCHK(0x12ab29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a30 @ 0x12ab2a30 (736 bytes, 224 insns) */
void f_12ab2a30(void) {
  FTRACE(0x12ab2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2a31 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2a33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2a36 push esi */
  push32((uint32_t)(ESI));
  /* 12ab2a37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2a3b je 0x12ab2a5c */
  if (C.zf) goto L_12ab2a5c;
  /* 12ab2a3d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12ab2a3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2a42 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2a43 call 0x12ab2e80 */
  push32(0x12ab2a48u); f_12ab2e80();
  /* 12ab2a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2a4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ab2a4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2a52 je 0x12ab2a5c */
  if (C.zf) goto L_12ab2a5c;
  /* 12ab2a54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2a57 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2a5a jne 0x12ab2a64 */
  if (!C.zf) goto L_12ab2a64;
L_12ab2a5c:;
  /* 12ab2a5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2a5f jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2a64:;
  /* 12ab2a64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab2a67 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12ab2a6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab2a6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2a6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12ab2a70 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ab2a73 mov ecx, dword ptr [0x12ace4a4] */
  ECX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2a79 cmp ecx, dword ptr [0x12ace4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ace4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2a7f jne 0x12ab2a95 */
  if (!C.zf) goto L_12ab2a95;
  /* 12ab2a81 mov edx, dword ptr [0x12ace4a4] */
  EDX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2a87 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2a88 call 0x12ab2d90 */
  push32(0x12ab2a8du); f_12ab2d90();
  /* 12ab2a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2a90 mov dword ptr [0x12ace4a4], eax */
  w32((uint32_t)(0x12ace4a4), (EAX));
L_12ab2a95:;
  /* 12ab2a95 cmp dword ptr [0x12ace4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2a9c jne 0x12ab2b55 */
  if (!C.zf) goto L_12ab2b55;
  /* 12ab2aa2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2aa6 je 0x12ab2ac7 */
  if (C.zf) goto L_12ab2ac7;
  /* 12ab2aa8 cmp dword ptr [0x12ace4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2aaf je 0x12ab2ac7 */
  if (C.zf) goto L_12ab2ac7;
  /* 12ab2ab1 call 0x12ab2530 */
  push32(0x12ab2ab6u); f_12ab2530();
  /* 12ab2ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2ab8 je 0x12ab2ac2 */
  if (C.zf) goto L_12ab2ac2;
  /* 12ab2aba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2abd jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2ac2:;
  /* 12ab2ac2 jmp 0x12ab2b55 */
  goto L_12ab2b55;
L_12ab2ac7:;
  /* 12ab2ac7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2acb je 0x12ab2ad4 */
  if (C.zf) goto L_12ab2ad4;
  /* 12ab2acd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2acf jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2ad4:;
  /* 12ab2ad4 cmp dword ptr [0x12ace4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2adb jne 0x12ab2b14 */
  if (!C.zf) goto L_12ab2b14;
  /* 12ab2add push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12ab2ae2 push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2ae9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab2aeb call 0x12aa2a30 */
  push32(0x12ab2af0u); f_12aa2a30();
  /* 12ab2af0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2af3 mov dword ptr [0x12ace4a4], eax */
  w32((uint32_t)(0x12ace4a4), (EAX));
  /* 12ab2af8 cmp dword ptr [0x12ace4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2aff jne 0x12ab2b09 */
  if (!C.zf) goto L_12ab2b09;
  /* 12ab2b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2b04 jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2b09:;
  /* 12ab2b09 mov eax, dword ptr [0x12ace4a4] */
  EAX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2b0e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12ab2b14:;
  /* 12ab2b14 cmp dword ptr [0x12ace4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2b1b jne 0x12ab2b55 */
  if (!C.zf) goto L_12ab2b55;
  /* 12ab2b1d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12ab2b22 push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2b29 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ab2b2b call 0x12aa2a30 */
  push32(0x12ab2b30u); f_12aa2a30();
  /* 12ab2b30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2b33 mov dword ptr [0x12ace4ac], eax */
  w32((uint32_t)(0x12ace4ac), (EAX));
  /* 12ab2b38 cmp dword ptr [0x12ace4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2b3f jne 0x12ab2b49 */
  if (!C.zf) goto L_12ab2b49;
  /* 12ab2b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2b44 jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2b49:;
  /* 12ab2b49 mov ecx, dword ptr [0x12ace4ac] */
  ECX = (r32((uint32_t)(0x12ace4ac)));
  /* 12ab2b4f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12ab2b55:;
  /* 12ab2b55 mov edx, dword ptr [0x12ace4a4] */
  EDX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2b5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ab2b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab2b61 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2b64 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2b68 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2b69 call 0x12ab2d10 */
  push32(0x12ab2b6eu); f_12ab2d10();
  /* 12ab2b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab2b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2b78 jl 0x12ab2c11 */
  if ((C.sf!=C.of)) goto L_12ab2c11;
  /* 12ab2b7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2b81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2b84 je 0x12ab2c11 */
  if (C.zf) goto L_12ab2c11;
  /* 12ab2b8a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2b8e je 0x12ab2c03 */
  if (C.zf) goto L_12ab2c03;
  /* 12ab2b90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2b92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2b95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2b98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ab2b9b push edx */
  push32((uint32_t)(EDX));
  /* 12ab2b9c call 0x12aa34c0 */
  push32(0x12ab2ba1u); f_12aa34c0();
  /* 12ab2ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2ba4 jmp 0x12ab2baf */
  goto L_12ab2baf;
L_12ab2ba6:;
  /* 12ab2ba6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2ba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2bac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ab2baf:;
  /* 12ab2baf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2bb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2bb5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2bb9 je 0x12ab2bd0 */
  if (C.zf) goto L_12ab2bd0;
  /* 12ab2bbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2bbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2bc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2bc4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2bc7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12ab2bcb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12ab2bce jmp 0x12ab2ba6 */
  goto L_12ab2ba6;
L_12ab2bd0:;
  /* 12ab2bd0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12ab2bd5 push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2bda push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2bdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2bdf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ab2be2 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2be3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2be6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2be7 call 0x12aa2ec0 */
  push32(0x12ab2becu); f_12aa2ec0();
  /* 12ab2bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2bef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab2bf2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2bf6 je 0x12ab2c01 */
  if (C.zf) goto L_12ab2c01;
  /* 12ab2bf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2bfb mov dword ptr [0x12ace4a4], edx */
  w32((uint32_t)(0x12ace4a4), (EDX));
L_12ab2c01:;
  /* 12ab2c01 jmp 0x12ab2c0f */
  goto L_12ab2c0f;
L_12ab2c03:;
  /* 12ab2c03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2c06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2c0c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12ab2c0f:;
  /* 12ab2c0f jmp 0x12ab2c84 */
  goto L_12ab2c84;
L_12ab2c11:;
  /* 12ab2c11 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2c15 jne 0x12ab2c7d */
  if (!C.zf) goto L_12ab2c7d;
  /* 12ab2c17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2c1b jge 0x12ab2c25 */
  if ((C.sf==C.of)) goto L_12ab2c25;
  /* 12ab2c1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2c20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab2c22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ab2c25:;
  /* 12ab2c25 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12ab2c2a push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2c31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2c34 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12ab2c3b push edx */
  push32((uint32_t)(EDX));
  /* 12ab2c3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2c3f push eax */
  push32((uint32_t)(EAX));
  /* 12ab2c40 call 0x12aa2ec0 */
  push32(0x12ab2c45u); f_12aa2ec0();
  /* 12ab2c45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2c48 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab2c4b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2c4f jne 0x12ab2c59 */
  if (!C.zf) goto L_12ab2c59;
  /* 12ab2c51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2c54 jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2c59:;
  /* 12ab2c59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2c5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2c62 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12ab2c65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2c68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2c6b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12ab2c73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2c76 mov dword ptr [0x12ace4a4], eax */
  w32((uint32_t)(0x12ace4a4), (EAX));
  /* 12ab2c7b jmp 0x12ab2c84 */
  goto L_12ab2c84;
L_12ab2c7d:;
  /* 12ab2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2c7f jmp 0x12ab2d0b */
  goto L_12ab2d0b;
L_12ab2c84:;
  /* 12ab2c84 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2c88 je 0x12ab2d09 */
  if (C.zf) goto L_12ab2d09;
  /* 12ab2c8a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12ab2c8f push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2c96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2c99 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2c9a call 0x12aa5860 */
  push32(0x12ab2c9fu); f_12aa5860();
  /* 12ab2c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2ca2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2ca5 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2ca6 call 0x12aa2a30 */
  push32(0x12ab2cabu); f_12aa2a30();
  /* 12ab2cab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2cae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ab2cb1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2cb5 je 0x12ab2d09 */
  if (C.zf) goto L_12ab2d09;
  /* 12ab2cb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2cba push edx */
  push32((uint32_t)(EDX));
  /* 12ab2cbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2cbe push eax */
  push32((uint32_t)(EAX));
  /* 12ab2cbf call 0x12aa59e0 */
  push32(0x12ab2cc4u); f_12aa59e0();
  /* 12ab2cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2cc7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ab2cca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2ccd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2cd0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2cd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ab2cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2cd8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ab2cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2cde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2ce1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab2ce4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ab2ce7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ab2ce9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2ceb not edx */
  EDX = (~(EDX));
  /* 12ab2ced and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2cf0 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2cf1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2cf4 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2cf5 call dword ptr [0x12ad022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad022c))), 0x12ab2cfbu);
  /* 12ab2cfb push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2cfd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2d00 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2d01 call 0x12aa34c0 */
  push32(0x12ab2d06u); f_12aa34c0();
  /* 12ab2d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab2d09:;
  /* 12ab2d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab2d0b:;
  /* 12ab2d0b pop esi */
  ESI = (pop32());
  /* 12ab2d0c mov esp, ebp */
  ESP = (EBP);
  /* 12ab2d0e pop ebp */
  EBP = (pop32());
  /* 12ab2d0f ret  */
  ESPCHK(0x12ab2a30u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12ab2d10 (124 bytes, 47 insns) */
void f_12ab2d10(void) {
  FTRACE(0x12ab2d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2d11 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2d14 mov eax, dword ptr [0x12ace4a4] */
  EAX = (r32((uint32_t)(0x12ace4a4)));
  /* 12ab2d19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ab2d1c jmp 0x12ab2d27 */
  goto L_12ab2d27;
L_12ab2d1e:;
  /* 12ab2d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d21 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2d24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ab2d27:;
  /* 12ab2d27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d2a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2d2d je 0x12ab2d7a */
  if (C.zf) goto L_12ab2d7a;
  /* 12ab2d2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab2d32 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab2d38 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2d39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2d3c push eax */
  push32((uint32_t)(EAX));
  /* 12ab2d3d call 0x12ab24e0 */
  push32(0x12ab2d42u); f_12ab24e0();
  /* 12ab2d42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ab2d47 jne 0x12ab2d78 */
  if (!C.zf) goto L_12ab2d78;
  /* 12ab2d49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab2d4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab2d51 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12ab2d55 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2d58 je 0x12ab2d6a */
  if (C.zf) goto L_12ab2d6a;
  /* 12ab2d5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d5d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab2d5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab2d62 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12ab2d66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2d68 jne 0x12ab2d78 */
  if (!C.zf) goto L_12ab2d78;
L_12ab2d6a:;
  /* 12ab2d6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d6d sub eax, dword ptr [0x12ace4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ace4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2d73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ab2d76 jmp 0x12ab2d88 */
  goto L_12ab2d88;
L_12ab2d78:;
  /* 12ab2d78 jmp 0x12ab2d1e */
  goto L_12ab2d1e;
L_12ab2d7a:;
  /* 12ab2d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2d7d sub eax, dword ptr [0x12ace4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ace4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2d83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ab2d86 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12ab2d88:;
  /* 12ab2d88 mov esp, ebp */
  ESP = (EBP);
  /* 12ab2d8a pop ebp */
  EBP = (pop32());
  /* 12ab2d8b ret  */
  ESPCHK(0x12ab2d10u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12ab2d90 (238 bytes, 80 insns) */
void f_12ab2d90(void) {
  FTRACE(0x12ab2d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2d91 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2d96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ab2d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2da0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab2da3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2da7 jne 0x12ab2db0 */
  if (!C.zf) goto L_12ab2db0;
  /* 12ab2da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2dab jmp 0x12ab2e7a */
  goto L_12ab2e7a;
L_12ab2db0:;
  /* 12ab2db0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2db3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab2db5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2db8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2dbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ab2dbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2dc0 je 0x12ab2dcd */
  if (C.zf) goto L_12ab2dcd;
  /* 12ab2dc2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2dc8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ab2dcb jmp 0x12ab2db0 */
  goto L_12ab2db0;
L_12ab2dcd:;
  /* 12ab2dcd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12ab2dd2 push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2dd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2dd9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ab2ddc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12ab2de3 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2de4 call 0x12aa2a30 */
  push32(0x12ab2de9u); f_12aa2a30();
  /* 12ab2de9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2dec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ab2def mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2df2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ab2df5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2df9 jne 0x12ab2e05 */
  if (!C.zf) goto L_12ab2e05;
  /* 12ab2dfb push 9 */
  push32((uint32_t)(0x9u));
  /* 12ab2dfd call 0x12aa19a0 */
  push32(0x12ab2e02u); f_12aa19a0();
  /* 12ab2e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab2e05:;
  /* 12ab2e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2e08 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ab2e0b:;
  /* 12ab2e0b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2e0e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2e11 je 0x12ab2e6e */
  if (C.zf) goto L_12ab2e6e;
  /* 12ab2e13 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12ab2e18 push 0x12aca8d8 */
  push32((uint32_t)(0x12aca8d8u));
  /* 12ab2e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12ab2e1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2e22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ab2e24 push edx */
  push32((uint32_t)(EDX));
  /* 12ab2e25 call 0x12aa5860 */
  push32(0x12ab2e2au); f_12aa5860();
  /* 12ab2e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e30 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2e31 call 0x12aa2a30 */
  push32(0x12ab2e36u); f_12aa2a30();
  /* 12ab2e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2e3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ab2e3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2e41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2e44 je 0x12ab2e5a */
  if (C.zf) goto L_12ab2e5a;
  /* 12ab2e46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2e49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ab2e4b push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2e4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2e4f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ab2e51 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2e52 call 0x12aa59e0 */
  push32(0x12ab2e57u); f_12aa59e0();
  /* 12ab2e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ab2e5a:;
  /* 12ab2e5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ab2e5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ab2e63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2e66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ab2e6c jmp 0x12ab2e0b */
  goto L_12ab2e0b;
L_12ab2e6e:;
  /* 12ab2e6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ab2e71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ab2e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ab2e7a:;
  /* 12ab2e7a mov esp, ebp */
  ESP = (EBP);
  /* 12ab2e7c pop ebp */
  EBP = (pop32());
  /* 12ab2e7d ret  */
  ESPCHK(0x12ab2d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e80 @ 0x12ab2e80 (237 bytes, 81 insns) */
void f_12ab2e80(void) {
  FTRACE(0x12ab2e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12ab2e81 mov ebp, esp */
  EBP = (ESP);
  /* 12ab2e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2e84 cmp dword ptr [0x12acfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2e8b jne 0x12ab2ea2 */
  if (!C.zf) goto L_12ab2ea2;
  /* 12ab2e8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ab2e90 push eax */
  push32((uint32_t)(EAX));
  /* 12ab2e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2e94 push ecx */
  push32((uint32_t)(ECX));
  /* 12ab2e95 call 0x12ab2f80 */
  push32(0x12ab2e9au); f_12ab2f80();
  /* 12ab2e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2e9d jmp 0x12ab2f69 */
  goto L_12ab2f69;
L_12ab2ea2:;
  /* 12ab2ea2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ab2ea4 call 0x12aa6430 */
  push32(0x12ab2ea9u); f_12aa6430();
  /* 12ab2ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2eac jmp 0x12ab2eb7 */
  goto L_12ab2eb7;
L_12ab2eae:;
  /* 12ab2eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2eb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2eb4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12ab2eb7:;
  /* 12ab2eb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2eba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12ab2ebe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12ab2ec2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2ec5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2ecb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ab2ecd je 0x12ab2f4b */
  if (C.zf) goto L_12ab2f4b;
  /* 12ab2ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2ed2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2ed7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2ed9 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12ab2edf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2ee2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab2ee4 je 0x12ab2f36 */
  if (C.zf) goto L_12ab2f36;
  /* 12ab2ee6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2ee9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2eec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ab2eef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2ef2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2ef4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab2ef6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ab2ef8 jne 0x12ab2f08 */
  if (!C.zf) goto L_12ab2f08;
  /* 12ab2efa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ab2efc call 0x12aa64d0 */
  push32(0x12ab2f01u); f_12aa64d0();
  /* 12ab2f01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2f06 jmp 0x12ab2f69 */
  goto L_12ab2f69;
L_12ab2f08:;
  /* 12ab2f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2f0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2f11 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ab2f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2f17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2f19 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ab2f1b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2f1d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2f20 jne 0x12ab2f34 */
  if (!C.zf) goto L_12ab2f34;
  /* 12ab2f22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ab2f24 call 0x12aa64d0 */
  push32(0x12ab2f29u); f_12aa64d0();
  /* 12ab2f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2f2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2f2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ab2f32 jmp 0x12ab2f69 */
  goto L_12ab2f69;
L_12ab2f34:;
  /* 12ab2f34 jmp 0x12ab2f46 */
  goto L_12ab2f46;
L_12ab2f36:;
  /* 12ab2f36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2f39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ab2f3f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2f42 jne 0x12ab2f46 */
  if (!C.zf) goto L_12ab2f46;
  /* 12ab2f44 jmp 0x12ab2f4b */
  goto L_12ab2f4b;
L_12ab2f46:;
  /* 12ab2f46 jmp 0x12ab2eae */
  goto L_12ab2eae;
L_12ab2f4b:;
  /* 12ab2f4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ab2f4d call 0x12aa64d0 */
  push32(0x12ab2f52u); f_12aa64d0();
  /* 12ab2f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ab2f58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2f5d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ab2f60 jne 0x12ab2f67 */
  if (!C.zf) goto L_12ab2f67;
  /* 12ab2f62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ab2f65 jmp 0x12ab2f69 */
  goto L_12ab2f69;
L_12ab2f67:;
  /* 12ab2f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ab2f69:;
  /* 12ab2f69 mov esp, ebp */
  ESP = (EBP);
  /* 12ab2f6b pop ebp */
  EBP = (pop32());
  /* 12ab2f6c ret  */
  ESPCHK(0x12ab2e80u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12ab2f80 (193 bytes, 87 insns) */
void f_12ab2f80(void) {
  FTRACE(0x12ab2f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab2f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2f82 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12ab2f86 push ebx */
  push32((uint32_t)(EBX));
  /* 12ab2f87 mov ebx, eax */
  EBX = (EAX);
  /* 12ab2f89 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12ab2f8c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ab2f90 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12ab2f96 je 0x12ab2fab */
  if (C.zf) goto L_12ab2fab;
L_12ab2f98:;
  /* 12ab2f98 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12ab2f9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12ab2f9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab2f9d je 0x12ab2f70 */
  if (C.zf) { jmp_ind(0x12ab2f70u); return; }
  /* 12ab2f9f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12ab2fa1 je 0x12ab2ff4 */
  if (C.zf) goto L_12ab2ff4;
  /* 12ab2fa3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12ab2fa9 jne 0x12ab2f98 */
  if (!C.zf) goto L_12ab2f98;
L_12ab2fab:;
  /* 12ab2fab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12ab2fad push edi */
  push32((uint32_t)(EDI));
  /* 12ab2fae mov eax, ebx */
  EAX = (EBX);
  /* 12ab2fb0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12ab2fb3 push esi */
  push32((uint32_t)(ESI));
  /* 12ab2fb4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12ab2fb6:;
  /* 12ab2fb6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12ab2fb8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12ab2fbd mov eax, ecx */
  EAX = (ECX);
  /* 12ab2fbf mov esi, edi */
  ESI = (EDI);
  /* 12ab2fc1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2fc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2fc5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2fc7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2fca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2fcd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2fcf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2fd1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ab2fd4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12ab2fda jne 0x12ab2ff8 */
  if (!C.zf) goto L_12ab2ff8;
  /* 12ab2fdc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2fe1 je 0x12ab2fb6 */
  if (C.zf) goto L_12ab2fb6;
  /* 12ab2fe3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2fe8 jne 0x12ab2ff2 */
  if (!C.zf) goto L_12ab2ff2;
  /* 12ab2fea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12ab2ff0 jne 0x12ab2fb6 */
  if (!C.zf) goto L_12ab2fb6;
L_12ab2ff2:;
  /* 12ab2ff2 pop esi */
  ESI = (pop32());
  /* 12ab2ff3 pop edi */
  EDI = (pop32());
L_12ab2ff4:;
  /* 12ab2ff4 pop ebx */
  EBX = (pop32());
  /* 12ab2ff5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ab2ff7 ret  */
  ESPCHK(0x12ab2f80u, _esp0);
  ESP += 4; return;
L_12ab2ff8:;
  /* 12ab2ff8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12ab2ffb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab2ffd je 0x12ab3035 */
  if (C.zf) goto L_12ab3035;
  /* 12ab2fff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ab3001 je 0x12ab2ff2 */
  if (C.zf) goto L_12ab2ff2;
  /* 12ab3003 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab3005 je 0x12ab302e */
  if (C.zf) goto L_12ab302e;
  /* 12ab3007 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ab3009 je 0x12ab2ff2 */
  if (C.zf) goto L_12ab2ff2;
  /* 12ab300b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ab300e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab3010 je 0x12ab3027 */
  if (C.zf) goto L_12ab3027;
  /* 12ab3012 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ab3014 je 0x12ab2ff2 */
  if (C.zf) goto L_12ab2ff2;
  /* 12ab3016 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ab3018 je 0x12ab3020 */
  if (C.zf) goto L_12ab3020;
  /* 12ab301a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ab301c je 0x12ab2ff2 */
  if (C.zf) goto L_12ab2ff2;
  /* 12ab301e jmp 0x12ab2fb6 */
  goto L_12ab2fb6;
L_12ab3020:;
  /* 12ab3020 pop esi */
  ESI = (pop32());
  /* 12ab3021 pop edi */
  EDI = (pop32());
  /* 12ab3022 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12ab3025 pop ebx */
  EBX = (pop32());
  /* 12ab3026 ret  */
  ESPCHK(0x12ab2f80u, _esp0);
  ESP += 4; return;
L_12ab3027:;
  /* 12ab3027 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12ab302a pop esi */
  ESI = (pop32());
  /* 12ab302b pop edi */
  EDI = (pop32());
  /* 12ab302c pop ebx */
  EBX = (pop32());
  /* 12ab302d ret  */
  ESPCHK(0x12ab2f80u, _esp0);
  ESP += 4; return;
L_12ab302e:;
  /* 12ab302e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12ab3031 pop esi */
  ESI = (pop32());
  /* 12ab3032 pop edi */
  EDI = (pop32());
  /* 12ab3033 pop ebx */
  EBX = (pop32());
  /* 12ab3034 ret  */
  ESPCHK(0x12ab2f80u, _esp0);
  ESP += 4; return;
L_12ab3035:;
  /* 12ab3035 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12ab3038 pop esi */
  ESI = (pop32());
  /* 12ab3039 pop edi */
  EDI = (pop32());
  /* 12ab303a pop ebx */
  EBX = (pop32());
  /* 12ab303b ret  */
  ESPCHK(0x12ab2f80u, _esp0);
  ESP += 4; return;
  /* 12ab303c jmp dword ptr [0x12ad0254] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ad0254)))); return;
}

/* RtlUnwind @ 0x12ab318c (6 bytes, 1 insns) */
void f_12ab318c(void) {
  FTRACE(0x12ab318cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ab318c jmp dword ptr [0x12ad0330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ad0330)))); return;
}

