#include "recomp.h"

/* FUN_1001c6b0 @ 0x1047c6b0 (362 bytes, 116 insns) */
void f_1047c6b0(void) {
  FTRACE(0x1047c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047c6b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c6b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047c6b7 push esi */
  push32((uint32_t)(ESI));
  /* 1047c6b8 push edi */
  push32((uint32_t)(EDI));
  /* 1047c6b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c6bd jne 0x1047c6ea */
  if (!C.zf) goto L_1047c6ea;
L_1047c6bf:;
  /* 1047c6bf push 0x10029984 */
  push32((uint32_t)(0x10029984u));
  /* 1047c6c4 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c6c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c6cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c6cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c6cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c6d1 call 0x10479fd0 */
  push32(0x1047c6d6u); f_10479fd0();
  /* 1047c6d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c6d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c6dc jne 0x1047c6df */
  if (!C.zf) goto L_1047c6df;
  /* 1047c6de int3  */
  x86_unimpl("int3 @ 0x1047c6de");
L_1047c6df:;
  /* 1047c6df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c6e3 jne 0x1047c6bf */
  if (!C.zf) goto L_1047c6bf;
  /* 1047c6e5 jmp 0x1047c813 */
  goto L_1047c813;
L_1047c6ea:;
  /* 1047c6ea push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c6ec call 0x1047e910 */
  push32(0x1047c6f1u); f_1047e910();
  /* 1047c6f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c6f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c6f7 mov edx, dword ptr [0x1002e4cc] */
  EDX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047c6fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1047c6ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047c706 jmp 0x1047c711 */
  goto L_1047c711;
L_1047c708:;
  /* 1047c708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c70b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c70e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047c711:;
  /* 1047c711 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c715 jge 0x1047c735 */
  if ((C.sf==C.of)) goto L_1047c735;
  /* 1047c717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c71a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c71d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 1047c725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c728 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c72b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 1047c733 jmp 0x1047c708 */
  goto L_1047c708;
L_1047c735:;
  /* 1047c735 mov edx, dword ptr [0x1002e4cc] */
  EDX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047c73b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1047c73e jmp 0x1047c748 */
  goto L_1047c748;
L_1047c740:;
  /* 1047c740 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047c745 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1047c748:;
  /* 1047c748 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c74c je 0x1047c7f1 */
  if (C.zf) goto L_1047c7f1;
  /* 1047c752 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c755 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047c758 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c75d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c75f jl 0x1047c7c7 */
  if ((C.sf!=C.of)) goto L_1047c7c7;
  /* 1047c761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c764 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047c767 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047c76d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c770 jge 0x1047c7c7 */
  if ((C.sf==C.of)) goto L_1047c7c7;
  /* 1047c772 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c775 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047c778 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c781 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 1047c785 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c788 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c78b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047c78e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047c794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c797 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1047c79b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c79e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047c7a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c7a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c7a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1047c7ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c7b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c7b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c7b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047c7b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c7c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1047c7c5 jmp 0x1047c7ec */
  goto L_1047c7ec;
L_1047c7c7:;
  /* 1047c7c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c7ca push edx */
  push32((uint32_t)(EDX));
  /* 1047c7cb push 0x10029960 */
  push32((uint32_t)(0x10029960u));
  /* 1047c7d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c7d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c7d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c7d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c7d8 call 0x10479fd0 */
  push32(0x1047c7ddu); f_10479fd0();
  /* 1047c7dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c7e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c7e3 jne 0x1047c7e6 */
  if (!C.zf) goto L_1047c7e6;
  /* 1047c7e5 int3  */
  x86_unimpl("int3 @ 0x1047c7e5");
L_1047c7e6:;
  /* 1047c7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c7ea jne 0x1047c7c7 */
  if (!C.zf) goto L_1047c7c7;
L_1047c7ec:;
  /* 1047c7ec jmp 0x1047c740 */
  goto L_1047c740;
L_1047c7f1:;
  /* 1047c7f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c7f4 mov edx, dword ptr [0x1002e4d4] */
  EDX = (r32((uint32_t)(0x1002e4d4)));
  /* 1047c7fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1047c7fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c800 mov ecx, dword ptr [0x1002e4c8] */
  ECX = (r32((uint32_t)(0x1002e4c8)));
  /* 1047c806 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 1047c809 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c80b call 0x1047e9b0 */
  push32(0x1047c810u); f_1047e9b0();
  /* 1047c810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047c813:;
  /* 1047c813 pop edi */
  EDI = (pop32());
  /* 1047c814 pop esi */
  ESI = (pop32());
  /* 1047c815 pop ebx */
  EBX = (pop32());
  /* 1047c816 mov esp, ebp */
  ESP = (EBP);
  /* 1047c818 pop ebp */
  EBP = (pop32());
  /* 1047c819 ret  */
  ESPCHK(0x1047c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c820 @ 0x1047c820 (291 bytes, 95 insns) */
void f_1047c820(void) {
  FTRACE(0x1047c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c821 mov ebp, esp */
  EBP = (ESP);
  /* 1047c823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c826 push ebx */
  push32((uint32_t)(EBX));
  /* 1047c827 push esi */
  push32((uint32_t)(ESI));
  /* 1047c828 push edi */
  push32((uint32_t)(EDI));
  /* 1047c829 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047c830 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c834 je 0x1047c842 */
  if (C.zf) goto L_1047c842;
  /* 1047c836 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c83a je 0x1047c842 */
  if (C.zf) goto L_1047c842;
  /* 1047c83c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c840 jne 0x1047c870 */
  if (!C.zf) goto L_1047c870;
L_1047c842:;
  /* 1047c842 push 0x100299ac */
  push32((uint32_t)(0x100299acu));
  /* 1047c847 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c84c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c84e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c850 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c852 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c854 call 0x10479fd0 */
  push32(0x1047c859u); f_10479fd0();
  /* 1047c859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c85c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c85f jne 0x1047c862 */
  if (!C.zf) goto L_1047c862;
  /* 1047c861 int3  */
  x86_unimpl("int3 @ 0x1047c861");
L_1047c862:;
  /* 1047c862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c866 jne 0x1047c842 */
  if (!C.zf) goto L_1047c842;
  /* 1047c868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c86b jmp 0x1047c93c */
  goto L_1047c93c;
L_1047c870:;
  /* 1047c870 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047c877 jmp 0x1047c882 */
  goto L_1047c882;
L_1047c879:;
  /* 1047c879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c87c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c87f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047c882:;
  /* 1047c882 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c886 jge 0x1047c90c */
  if ((C.sf==C.of)) goto L_1047c90c;
  /* 1047c88c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c88f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c895 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c898 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1047c89c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c8a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c8a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1047c8aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c8b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c8b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1047c8ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c8be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c8c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 1047c8c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c8ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c8d3 jne 0x1047c8e2 */
  if (!C.zf) goto L_1047c8e2;
  /* 1047c8d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c8db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c8e0 je 0x1047c907 */
  if (C.zf) goto L_1047c907;
L_1047c8e2:;
  /* 1047c8e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c8e6 je 0x1047c907 */
  if (C.zf) goto L_1047c907;
  /* 1047c8e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c8ec jne 0x1047c900 */
  if (!C.zf) goto L_1047c900;
  /* 1047c8ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c8f2 jne 0x1047c907 */
  if (!C.zf) goto L_1047c907;
  /* 1047c8f4 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047c8f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1047c8fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c8fe je 0x1047c907 */
  if (C.zf) goto L_1047c907;
L_1047c900:;
  /* 1047c900 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1047c907:;
  /* 1047c907 jmp 0x1047c879 */
  goto L_1047c879;
L_1047c90c:;
  /* 1047c90c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c90f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c912 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1047c915 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c918 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c91b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1047c91e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c921 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c924 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 1047c927 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c92a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c92d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 1047c930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c933 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047c939 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1047c93c:;
  /* 1047c93c pop edi */
  EDI = (pop32());
  /* 1047c93d pop esi */
  ESI = (pop32());
  /* 1047c93e pop ebx */
  EBX = (pop32());
  /* 1047c93f mov esp, ebp */
  ESP = (EBP);
  /* 1047c941 pop ebp */
  EBP = (pop32());
  /* 1047c942 ret  */
  ESPCHK(0x1047c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c950 @ 0x1047c950 (697 bytes, 253 insns) */
void f_1047c950(void) {
  FTRACE(0x1047c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c951 mov ebp, esp */
  EBP = (ESP);
  /* 1047c953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c956 push ebx */
  push32((uint32_t)(EBX));
  /* 1047c957 push esi */
  push32((uint32_t)(ESI));
  /* 1047c958 push edi */
  push32((uint32_t)(EDI));
  /* 1047c959 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047c960 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c962 call 0x1047e910 */
  push32(0x1047c967u); f_1047e910();
  /* 1047c967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047c96a:;
  /* 1047c96a push 0x10029aa4 */
  push32((uint32_t)(0x10029aa4u));
  /* 1047c96f push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c974 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c976 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c97a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c97c call 0x10479fd0 */
  push32(0x1047c981u); f_10479fd0();
  /* 1047c981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c987 jne 0x1047c98a */
  if (!C.zf) goto L_1047c98a;
  /* 1047c989 int3  */
  x86_unimpl("int3 @ 0x1047c989");
L_1047c98a:;
  /* 1047c98a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c98c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c98e jne 0x1047c96a */
  if (!C.zf) goto L_1047c96a;
  /* 1047c990 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c994 je 0x1047c99e */
  if (C.zf) goto L_1047c99e;
  /* 1047c996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c999 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047c99b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1047c99e:;
  /* 1047c99e mov eax, dword ptr [0x1002e4cc] */
  EAX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047c9a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047c9a6 jmp 0x1047c9b0 */
  goto L_1047c9b0;
L_1047c9a8:;
  /* 1047c9a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c9ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047c9ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047c9b0:;
  /* 1047c9b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c9b4 je 0x1047cbd2 */
  if (C.zf) goto L_1047cbd2;
  /* 1047c9ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c9bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c9c0 je 0x1047cbd2 */
  if (C.zf) goto L_1047cbd2;
  /* 1047c9c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c9c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047c9cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047c9d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c9d5 je 0x1047ca04 */
  if (C.zf) goto L_1047ca04;
  /* 1047c9d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c9da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047c9dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c9e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c9e5 je 0x1047ca04 */
  if (C.zf) goto L_1047ca04;
  /* 1047c9e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c9ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047c9ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c9f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c9f5 jne 0x1047ca09 */
  if (!C.zf) goto L_1047ca09;
  /* 1047c9f7 mov ecx, dword ptr [0x1002ca84] */
  ECX = (r32((uint32_t)(0x1002ca84)));
  /* 1047c9fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1047ca00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047ca02 jne 0x1047ca09 */
  if (!C.zf) goto L_1047ca09;
L_1047ca04:;
  /* 1047ca04 jmp 0x1047cbcd */
  goto L_1047cbcd;
L_1047ca09:;
  /* 1047ca09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca0c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ca10 je 0x1047ca82 */
  if (C.zf) goto L_1047ca82;
  /* 1047ca12 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca14 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047ca16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047ca1c push ecx */
  push32((uint32_t)(ECX));
  /* 1047ca1d call 0x1047c4c0 */
  push32(0x1047ca22u); f_1047c4c0();
  /* 1047ca22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ca25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ca27 jne 0x1047ca53 */
  if (!C.zf) goto L_1047ca53;
L_1047ca29:;
  /* 1047ca29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1047ca2f push eax */
  push32((uint32_t)(EAX));
  /* 1047ca30 push 0x10029a90 */
  push32((uint32_t)(0x10029a90u));
  /* 1047ca35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca3d call 0x10479fd0 */
  push32(0x1047ca42u); f_10479fd0();
  /* 1047ca42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ca45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ca48 jne 0x1047ca4b */
  if (!C.zf) goto L_1047ca4b;
  /* 1047ca4a int3  */
  x86_unimpl("int3 @ 0x1047ca4a");
L_1047ca4b:;
  /* 1047ca4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047ca4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047ca4f jne 0x1047ca29 */
  if (!C.zf) goto L_1047ca29;
  /* 1047ca51 jmp 0x1047ca82 */
  goto L_1047ca82;
L_1047ca53:;
  /* 1047ca53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca56 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1047ca59 push eax */
  push32((uint32_t)(EAX));
  /* 1047ca5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca5d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1047ca60 push edx */
  push32((uint32_t)(EDX));
  /* 1047ca61 push 0x10029a84 */
  push32((uint32_t)(0x10029a84u));
  /* 1047ca66 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca6e call 0x10479fd0 */
  push32(0x1047ca73u); f_10479fd0();
  /* 1047ca73 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ca76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ca79 jne 0x1047ca7c */
  if (!C.zf) goto L_1047ca7c;
  /* 1047ca7b int3  */
  x86_unimpl("int3 @ 0x1047ca7b");
L_1047ca7c:;
  /* 1047ca7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ca7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ca80 jne 0x1047ca53 */
  if (!C.zf) goto L_1047ca53;
L_1047ca82:;
  /* 1047ca82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ca85 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1047ca88 push edx */
  push32((uint32_t)(EDX));
  /* 1047ca89 push 0x10029a7c */
  push32((uint32_t)(0x10029a7cu));
  /* 1047ca8e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca92 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca94 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ca96 call 0x10479fd0 */
  push32(0x1047ca9bu); f_10479fd0();
  /* 1047ca9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ca9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047caa1 jne 0x1047caa4 */
  if (!C.zf) goto L_1047caa4;
  /* 1047caa3 int3  */
  x86_unimpl("int3 @ 0x1047caa3");
L_1047caa4:;
  /* 1047caa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047caa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047caa8 jne 0x1047ca82 */
  if (!C.zf) goto L_1047ca82;
  /* 1047caaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047caad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047cab0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047cab6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cab9 jne 0x1047cb2c */
  if (!C.zf) goto L_1047cb2c;
L_1047cabb:;
  /* 1047cabb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cabe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047cac1 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cac2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cac5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047cac8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1047cacb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047cad0 push eax */
  push32((uint32_t)(EAX));
  /* 1047cad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cad4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cad7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cad8 push 0x10029a48 */
  push32((uint32_t)(0x10029a48u));
  /* 1047cadd push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cadf push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cae5 call 0x10479fd0 */
  push32(0x1047caeau); f_10479fd0();
  /* 1047caea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047caed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047caf0 jne 0x1047caf3 */
  if (!C.zf) goto L_1047caf3;
  /* 1047caf2 int3  */
  x86_unimpl("int3 @ 0x1047caf2");
L_1047caf3:;
  /* 1047caf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047caf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047caf7 jne 0x1047cabb */
  if (!C.zf) goto L_1047cabb;
  /* 1047caf9 cmp dword ptr [0x1002fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cb00 je 0x1047cb1b */
  if (C.zf) goto L_1047cb1b;
  /* 1047cb02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb05 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047cb08 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cb09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb0c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb0f push edx */
  push32((uint32_t)(EDX));
  /* 1047cb10 call dword ptr [0x1002fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002fe38))), 0x1047cb16u);
  /* 1047cb16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb19 jmp 0x1047cb27 */
  goto L_1047cb27;
L_1047cb1b:;
  /* 1047cb1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb1e push eax */
  push32((uint32_t)(EAX));
  /* 1047cb1f call 0x1047cc10 */
  push32(0x1047cb24u); f_1047cc10();
  /* 1047cb24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047cb27:;
  /* 1047cb27 jmp 0x1047cbcd */
  goto L_1047cbcd;
L_1047cb2c:;
  /* 1047cb2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb2f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cb33 jne 0x1047cb72 */
  if (!C.zf) goto L_1047cb72;
L_1047cb35:;
  /* 1047cb35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb38 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047cb3b push eax */
  push32((uint32_t)(EAX));
  /* 1047cb3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb3f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb42 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cb43 push 0x10029a20 */
  push32((uint32_t)(0x10029a20u));
  /* 1047cb48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cb4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cb4c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cb4e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cb50 call 0x10479fd0 */
  push32(0x1047cb55u); f_10479fd0();
  /* 1047cb55 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cb5b jne 0x1047cb5e */
  if (!C.zf) goto L_1047cb5e;
  /* 1047cb5d int3  */
  x86_unimpl("int3 @ 0x1047cb5d");
L_1047cb5e:;
  /* 1047cb5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047cb60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047cb62 jne 0x1047cb35 */
  if (!C.zf) goto L_1047cb35;
  /* 1047cb64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb67 push eax */
  push32((uint32_t)(EAX));
  /* 1047cb68 call 0x1047cc10 */
  push32(0x1047cb6du); f_1047cc10();
  /* 1047cb6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb70 jmp 0x1047cbcd */
  goto L_1047cbcd;
L_1047cb72:;
  /* 1047cb72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb75 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047cb78 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047cb7e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cb81 jne 0x1047cbcd */
  if (!C.zf) goto L_1047cbcd;
L_1047cb83:;
  /* 1047cb83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047cb89 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cb8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047cb90 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1047cb93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047cb98 push eax */
  push32((uint32_t)(EAX));
  /* 1047cb99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cb9c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cb9f push ecx */
  push32((uint32_t)(ECX));
  /* 1047cba0 push 0x100299ec */
  push32((uint32_t)(0x100299ecu));
  /* 1047cba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbab push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbad call 0x10479fd0 */
  push32(0x1047cbb2u); f_10479fd0();
  /* 1047cbb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cbb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cbb8 jne 0x1047cbbb */
  if (!C.zf) goto L_1047cbbb;
  /* 1047cbba int3  */
  x86_unimpl("int3 @ 0x1047cbba");
L_1047cbbb:;
  /* 1047cbbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047cbbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047cbbf jne 0x1047cb83 */
  if (!C.zf) goto L_1047cb83;
  /* 1047cbc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cbc4 push eax */
  push32((uint32_t)(EAX));
  /* 1047cbc5 call 0x1047cc10 */
  push32(0x1047cbcau); f_1047cc10();
  /* 1047cbca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047cbcd:;
  /* 1047cbcd jmp 0x1047c9a8 */
  goto L_1047c9a8;
L_1047cbd2:;
  /* 1047cbd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047cbd4 call 0x1047e9b0 */
  push32(0x1047cbd9u); f_1047e9b0();
  /* 1047cbd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047cbdc:;
  /* 1047cbdc push 0x100299d4 */
  push32((uint32_t)(0x100299d4u));
  /* 1047cbe1 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047cbe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbea push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbec push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cbee call 0x10479fd0 */
  push32(0x1047cbf3u); f_10479fd0();
  /* 1047cbf3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cbf6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cbf9 jne 0x1047cbfc */
  if (!C.zf) goto L_1047cbfc;
  /* 1047cbfb int3  */
  x86_unimpl("int3 @ 0x1047cbfb");
L_1047cbfc:;
  /* 1047cbfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047cbfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047cc00 jne 0x1047cbdc */
  if (!C.zf) goto L_1047cbdc;
  /* 1047cc02 pop edi */
  EDI = (pop32());
  /* 1047cc03 pop esi */
  ESI = (pop32());
  /* 1047cc04 pop ebx */
  EBX = (pop32());
  /* 1047cc05 mov esp, ebp */
  ESP = (EBP);
  /* 1047cc07 pop ebp */
  EBP = (pop32());
  /* 1047cc08 ret  */
  ESPCHK(0x1047c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc10 @ 0x1047cc10 (276 bytes, 89 insns) */
void f_1047cc10(void) {
  FTRACE(0x1047cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1047cc11 mov ebp, esp */
  EBP = (ESP);
  /* 1047cc13 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047cc16 push ebx */
  push32((uint32_t)(EBX));
  /* 1047cc17 push esi */
  push32((uint32_t)(ESI));
  /* 1047cc18 push edi */
  push32((uint32_t)(EDI));
  /* 1047cc19 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 1047cc20 jmp 0x1047cc2b */
  goto L_1047cc2b;
L_1047cc22:;
  /* 1047cc22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047cc25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cc28 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1047cc2b:;
  /* 1047cc2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047cc2e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cc32 jge 0x1047cc3f */
  if ((C.sf==C.of)) goto L_1047cc3f;
  /* 1047cc34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047cc37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047cc3a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1047cc3d jmp 0x1047cc46 */
  goto L_1047cc46;
L_1047cc3f:;
  /* 1047cc3f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_1047cc46:;
  /* 1047cc46 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047cc49 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cc4c jge 0x1047ccec */
  if ((C.sf==C.of)) goto L_1047ccec;
  /* 1047cc52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047cc55 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cc58 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1047cc5b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1047cc5e cmp dword ptr [0x1002cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cc65 jle 0x1047cc83 */
  if ((C.zf||C.sf!=C.of)) goto L_1047cc83;
  /* 1047cc67 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1047cc6c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047cc6f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047cc75 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cc76 call 0x10480f20 */
  push32(0x1047cc7bu); f_10480f20();
  /* 1047cc7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cc7e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 1047cc81 jmp 0x1047cca0 */
  goto L_1047cca0;
L_1047cc83:;
  /* 1047cc83 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047cc86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047cc8c mov eax, dword ptr [0x1002cc98] */
  EAX = (r32((uint32_t)(0x1002cc98)));
  /* 1047cc91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047cc93 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1047cc97 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1047cc9d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_1047cca0:;
  /* 1047cca0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cca4 je 0x1047ccb4 */
  if (C.zf) goto L_1047ccb4;
  /* 1047cca6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047cca9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047ccaf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 1047ccb2 jmp 0x1047ccbb */
  goto L_1047ccbb;
L_1047ccb4:;
  /* 1047ccb4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1047ccbb:;
  /* 1047ccbb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047ccbe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 1047ccc1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 1047ccc5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ccc8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047ccce push edx */
  push32((uint32_t)(EDX));
  /* 1047cccf push 0x10029ac8 */
  push32((uint32_t)(0x10029ac8u));
  /* 1047ccd4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047ccd7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ccda lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1047ccde push ecx */
  push32((uint32_t)(ECX));
  /* 1047ccdf call 0x10480e20 */
  push32(0x1047cce4u); f_10480e20();
  /* 1047cce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cce7 jmp 0x1047cc22 */
  goto L_1047cc22;
L_1047ccec:;
  /* 1047ccec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047ccef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_1047ccf4:;
  /* 1047ccf4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1047ccf7 push eax */
  push32((uint32_t)(EAX));
  /* 1047ccf8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1047ccfb push ecx */
  push32((uint32_t)(ECX));
  /* 1047ccfc push 0x10029ab8 */
  push32((uint32_t)(0x10029ab8u));
  /* 1047cd01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd09 call 0x10479fd0 */
  push32(0x1047cd0eu); f_10479fd0();
  /* 1047cd0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cd11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cd14 jne 0x1047cd17 */
  if (!C.zf) goto L_1047cd17;
  /* 1047cd16 int3  */
  x86_unimpl("int3 @ 0x1047cd16");
L_1047cd17:;
  /* 1047cd17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047cd19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047cd1b jne 0x1047ccf4 */
  if (!C.zf) goto L_1047ccf4;
  /* 1047cd1d pop edi */
  EDI = (pop32());
  /* 1047cd1e pop esi */
  ESI = (pop32());
  /* 1047cd1f pop ebx */
  EBX = (pop32());
  /* 1047cd20 mov esp, ebp */
  ESP = (EBP);
  /* 1047cd22 pop ebp */
  EBP = (pop32());
  /* 1047cd23 ret  */
  ESPCHK(0x1047cc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cd30 @ 0x1047cd30 (116 bytes, 46 insns) */
void f_1047cd30(void) {
  FTRACE(0x1047cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1047cd31 mov ebp, esp */
  EBP = (ESP);
  /* 1047cd33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047cd36 push ebx */
  push32((uint32_t)(EBX));
  /* 1047cd37 push esi */
  push32((uint32_t)(ESI));
  /* 1047cd38 push edi */
  push32((uint32_t)(EDI));
  /* 1047cd39 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1047cd3c push eax */
  push32((uint32_t)(EAX));
  /* 1047cd3d call 0x1047c6b0 */
  push32(0x1047cd42u); f_1047c6b0();
  /* 1047cd42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cd45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cd49 jne 0x1047cd64 */
  if (!C.zf) goto L_1047cd64;
  /* 1047cd4b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cd4f jne 0x1047cd64 */
  if (!C.zf) goto L_1047cd64;
  /* 1047cd51 mov ecx, dword ptr [0x1002ca84] */
  ECX = (r32((uint32_t)(0x1002ca84)));
  /* 1047cd57 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1047cd5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047cd5c je 0x1047cd9b */
  if (C.zf) goto L_1047cd9b;
  /* 1047cd5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cd62 je 0x1047cd9b */
  if (C.zf) goto L_1047cd9b;
L_1047cd64:;
  /* 1047cd64 push 0x10029ad0 */
  push32((uint32_t)(0x10029ad0u));
  /* 1047cd69 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047cd6e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd72 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd74 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd76 call 0x10479fd0 */
  push32(0x1047cd7bu); f_10479fd0();
  /* 1047cd7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cd7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cd81 jne 0x1047cd84 */
  if (!C.zf) goto L_1047cd84;
  /* 1047cd83 int3  */
  x86_unimpl("int3 @ 0x1047cd83");
L_1047cd84:;
  /* 1047cd84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047cd86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047cd88 jne 0x1047cd64 */
  if (!C.zf) goto L_1047cd64;
  /* 1047cd8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cd8c call 0x1047c950 */
  push32(0x1047cd91u); f_1047c950();
  /* 1047cd91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cd94 mov eax, 1 */
  EAX = (0x1u);
  /* 1047cd99 jmp 0x1047cd9d */
  goto L_1047cd9d;
L_1047cd9b:;
  /* 1047cd9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047cd9d:;
  /* 1047cd9d pop edi */
  EDI = (pop32());
  /* 1047cd9e pop esi */
  ESI = (pop32());
  /* 1047cd9f pop ebx */
  EBX = (pop32());
  /* 1047cda0 mov esp, ebp */
  ESP = (EBP);
  /* 1047cda2 pop ebp */
  EBP = (pop32());
  /* 1047cda3 ret  */
  ESPCHK(0x1047cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cdb0 @ 0x1047cdb0 (197 bytes, 79 insns) */
void f_1047cdb0(void) {
  FTRACE(0x1047cdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047cdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047cdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1047cdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 1047cdb5 push esi */
  push32((uint32_t)(ESI));
  /* 1047cdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1047cdb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cdbb jne 0x1047cdc2 */
  if (!C.zf) goto L_1047cdc2;
  /* 1047cdbd jmp 0x1047ce6e */
  goto L_1047ce6e;
L_1047cdc2:;
  /* 1047cdc2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047cdc9 jmp 0x1047cdd4 */
  goto L_1047cdd4;
L_1047cdcb:;
  /* 1047cdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cdce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cdd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047cdd4:;
  /* 1047cdd4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cdd8 jge 0x1047ce1e */
  if ((C.sf==C.of)) goto L_1047ce1e;
L_1047cdda:;
  /* 1047cdda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cddd mov edx, dword ptr [ecx*4 + 0x1002ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca94)));
  /* 1047cde4 push edx */
  push32((uint32_t)(EDX));
  /* 1047cde5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cde8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047cdeb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1047cdef push edx */
  push32((uint32_t)(EDX));
  /* 1047cdf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cdf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047cdf6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1047cdfa push edx */
  push32((uint32_t)(EDX));
  /* 1047cdfb push 0x10029b2c */
  push32((uint32_t)(0x10029b2cu));
  /* 1047ce00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce02 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce08 call 0x10479fd0 */
  push32(0x1047ce0du); f_10479fd0();
  /* 1047ce0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ce10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ce13 jne 0x1047ce16 */
  if (!C.zf) goto L_1047ce16;
  /* 1047ce15 int3  */
  x86_unimpl("int3 @ 0x1047ce15");
L_1047ce16:;
  /* 1047ce16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ce18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ce1a jne 0x1047cdda */
  if (!C.zf) goto L_1047cdda;
  /* 1047ce1c jmp 0x1047cdcb */
  goto L_1047cdcb;
L_1047ce1e:;
  /* 1047ce1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ce21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1047ce24 push edx */
  push32((uint32_t)(EDX));
  /* 1047ce25 push 0x10029b08 */
  push32((uint32_t)(0x10029b08u));
  /* 1047ce2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce32 call 0x10479fd0 */
  push32(0x1047ce37u); f_10479fd0();
  /* 1047ce37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ce3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ce3d jne 0x1047ce40 */
  if (!C.zf) goto L_1047ce40;
  /* 1047ce3f int3  */
  x86_unimpl("int3 @ 0x1047ce3f");
L_1047ce40:;
  /* 1047ce40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ce42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ce44 jne 0x1047ce1e */
  if (!C.zf) goto L_1047ce1e;
L_1047ce46:;
  /* 1047ce46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ce49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1047ce4c push edx */
  push32((uint32_t)(EDX));
  /* 1047ce4d push 0x10029ae8 */
  push32((uint32_t)(0x10029ae8u));
  /* 1047ce52 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce56 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ce5a call 0x10479fd0 */
  push32(0x1047ce5fu); f_10479fd0();
  /* 1047ce5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ce62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ce65 jne 0x1047ce68 */
  if (!C.zf) goto L_1047ce68;
  /* 1047ce67 int3  */
  x86_unimpl("int3 @ 0x1047ce67");
L_1047ce68:;
  /* 1047ce68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ce6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ce6c jne 0x1047ce46 */
  if (!C.zf) goto L_1047ce46;
L_1047ce6e:;
  /* 1047ce6e pop edi */
  EDI = (pop32());
  /* 1047ce6f pop esi */
  ESI = (pop32());
  /* 1047ce70 pop ebx */
  EBX = (pop32());
  /* 1047ce71 mov esp, ebp */
  ESP = (EBP);
  /* 1047ce73 pop ebp */
  EBP = (pop32());
  /* 1047ce74 ret  */
  ESPCHK(0x1047cdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce80 @ 0x1047ce80 (329 bytes, 102 insns) */
void f_1047ce80(void) {
  FTRACE(0x1047ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ce81 mov ebp, esp */
  EBP = (ESP);
  /* 1047ce83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ce86 cmp dword ptr [0x1002ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ce8d jne 0x1047ce94 */
  if (!C.zf) goto L_1047ce94;
  /* 1047ce8f call 0x104817c0 */
  push32(0x1047ce94u); f_104817c0();
L_1047ce94:;
  /* 1047ce94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047ce9b mov eax, dword ptr [0x1002e468] */
  EAX = (r32((uint32_t)(0x1002e468)));
  /* 1047cea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047cea3:;
  /* 1047cea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cea6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047cea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047ceab je 0x1047ced9 */
  if (C.zf) goto L_1047ced9;
  /* 1047cead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ceb0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047ceb3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ceb6 je 0x1047cec1 */
  if (C.zf) goto L_1047cec1;
  /* 1047ceb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047cebb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cebe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1047cec1:;
  /* 1047cec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cec4 push eax */
  push32((uint32_t)(EAX));
  /* 1047cec5 call 0x1047dd40 */
  push32(0x1047cecau); f_1047dd40();
  /* 1047ceca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ced0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1047ced4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047ced7 jmp 0x1047cea3 */
  goto L_1047cea3;
L_1047ced9:;
  /* 1047ced9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1047cedb push 0x10029b4c */
  push32((uint32_t)(0x10029b4cu));
  /* 1047cee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047cee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047cee5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1047ceec push ecx */
  push32((uint32_t)(ECX));
  /* 1047ceed call 0x1047af10 */
  push32(0x1047cef2u); f_1047af10();
  /* 1047cef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cef5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047cef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cefb mov dword ptr [0x1002e49c], edx */
  w32((uint32_t)(0x1002e49c), (EDX));
  /* 1047cf01 cmp dword ptr [0x1002e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cf08 jne 0x1047cf14 */
  if (!C.zf) goto L_1047cf14;
  /* 1047cf0a push 9 */
  push32((uint32_t)(0x9u));
  /* 1047cf0c call 0x10479e80 */
  push32(0x1047cf11u); f_10479e80();
  /* 1047cf11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047cf14:;
  /* 1047cf14 mov eax, dword ptr [0x1002e468] */
  EAX = (r32((uint32_t)(0x1002e468)));
  /* 1047cf19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047cf1c jmp 0x1047cf27 */
  goto L_1047cf27;
L_1047cf1e:;
  /* 1047cf1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cf21 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047cf27:;
  /* 1047cf27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cf2a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047cf2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047cf2f je 0x1047cf97 */
  if (C.zf) goto L_1047cf97;
  /* 1047cf31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cf34 push ecx */
  push32((uint32_t)(ECX));
  /* 1047cf35 call 0x1047dd40 */
  push32(0x1047cf3au); f_1047dd40();
  /* 1047cf3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047cf43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cf46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047cf49 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cf4c je 0x1047cf95 */
  if (C.zf) goto L_1047cf95;
  /* 1047cf4e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1047cf50 push 0x10029b4c */
  push32((uint32_t)(0x10029b4cu));
  /* 1047cf55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047cf57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047cf5a push ecx */
  push32((uint32_t)(ECX));
  /* 1047cf5b call 0x1047af10 */
  push32(0x1047cf60u); f_1047af10();
  /* 1047cf60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cf66 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047cf68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cf6b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cf6e jne 0x1047cf7a */
  if (!C.zf) goto L_1047cf7a;
  /* 1047cf70 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047cf72 call 0x10479e80 */
  push32(0x1047cf77u); f_10479e80();
  /* 1047cf77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047cf7a:;
  /* 1047cf7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047cf7d push ecx */
  push32((uint32_t)(ECX));
  /* 1047cf7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cf81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047cf83 push eax */
  push32((uint32_t)(EAX));
  /* 1047cf84 call 0x1047dec0 */
  push32(0x1047cf89u); f_1047dec0();
  /* 1047cf89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cf8f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cf92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1047cf95:;
  /* 1047cf95 jmp 0x1047cf1e */
  goto L_1047cf1e;
L_1047cf97:;
  /* 1047cf97 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047cf99 mov edx, dword ptr [0x1002e468] */
  EDX = (r32((uint32_t)(0x1002e468)));
  /* 1047cf9f push edx */
  push32((uint32_t)(EDX));
  /* 1047cfa0 call 0x1047b9a0 */
  push32(0x1047cfa5u); f_1047b9a0();
  /* 1047cfa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047cfa8 mov dword ptr [0x1002e468], 0 */
  w32((uint32_t)(0x1002e468), (0x0u));
  /* 1047cfb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047cfb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047cfbb mov dword ptr [0x1002ffa0], 1 */
  w32((uint32_t)(0x1002ffa0), (0x1u));
  /* 1047cfc5 mov esp, ebp */
  ESP = (EBP);
  /* 1047cfc7 pop ebp */
  EBP = (pop32());
  /* 1047cfc8 ret  */
  ESPCHK(0x1047ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cfd0 @ 0x1047cfd0 (216 bytes, 69 insns) */
void f_1047cfd0(void) {
  FTRACE(0x1047cfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047cfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047cfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1047cfd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047cfd6 cmp dword ptr [0x1002ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047cfdd jne 0x1047cfe4 */
  if (!C.zf) goto L_1047cfe4;
  /* 1047cfdf call 0x104817c0 */
  push32(0x1047cfe4u); f_104817c0();
L_1047cfe4:;
  /* 1047cfe4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1047cfe9 push 0x1002e4d8 */
  push32((uint32_t)(0x1002e4d8u));
  /* 1047cfee push 0 */
  push32((uint32_t)(0x0u));
  /* 1047cff0 call dword ptr [0x10030298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030298))), 0x1047cff6u);
  /* 1047cff6 mov dword ptr [0x1002e4ac], 0x1002e4d8 */
  w32((uint32_t)(0x1002e4ac), (0x1002e4d8u));
  /* 1047d000 mov eax, dword ptr [0x1002ffcc] */
  EAX = (r32((uint32_t)(0x1002ffcc)));
  /* 1047d005 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d008 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047d00a jne 0x1047d017 */
  if (!C.zf) goto L_1047d017;
  /* 1047d00c mov edx, dword ptr [0x1002e4ac] */
  EDX = (r32((uint32_t)(0x1002e4ac)));
  /* 1047d012 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1047d015 jmp 0x1047d01f */
  goto L_1047d01f;
L_1047d017:;
  /* 1047d017 mov eax, dword ptr [0x1002ffcc] */
  EAX = (r32((uint32_t)(0x1002ffcc)));
  /* 1047d01c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1047d01f:;
  /* 1047d01f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d022 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047d025 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1047d028 push edx */
  push32((uint32_t)(EDX));
  /* 1047d029 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1047d02c push eax */
  push32((uint32_t)(EAX));
  /* 1047d02d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d02f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d031 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d034 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d035 call 0x1047d0b0 */
  push32(0x1047d03au); f_1047d0b0();
  /* 1047d03a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d03d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1047d042 push 0x10029b58 */
  push32((uint32_t)(0x10029b58u));
  /* 1047d047 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047d049 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d04f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 1047d052 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d053 call 0x1047af10 */
  push32(0x1047d058u); f_1047af10();
  /* 1047d058 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d05b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047d05e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d062 jne 0x1047d06e */
  if (!C.zf) goto L_1047d06e;
  /* 1047d064 push 8 */
  push32((uint32_t)(0x8u));
  /* 1047d066 call 0x10479e80 */
  push32(0x1047d06bu); f_10479e80();
  /* 1047d06b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047d06e:;
  /* 1047d06e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1047d071 push edx */
  push32((uint32_t)(EDX));
  /* 1047d072 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1047d075 push eax */
  push32((uint32_t)(EAX));
  /* 1047d076 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d079 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d07c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1047d07f push eax */
  push32((uint32_t)(EAX));
  /* 1047d080 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d083 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d084 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d087 push edx */
  push32((uint32_t)(EDX));
  /* 1047d088 call 0x1047d0b0 */
  push32(0x1047d08du); f_1047d0b0();
  /* 1047d08d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d090 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d093 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d096 mov dword ptr [0x1002e490], eax */
  w32((uint32_t)(0x1002e490), (EAX));
  /* 1047d09b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d09e mov dword ptr [0x1002e494], ecx */
  w32((uint32_t)(0x1002e494), (ECX));
  /* 1047d0a4 mov esp, ebp */
  ESP = (EBP);
  /* 1047d0a6 pop ebp */
  EBP = (pop32());
  /* 1047d0a7 ret  */
  ESPCHK(0x1047cfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d0b0 @ 0x1047d0b0 (1060 bytes, 360 insns) */
void f_1047d0b0(void) {
  FTRACE(0x1047d0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047d0b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d0b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d0b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047d0bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047d0c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 1047d0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047d0cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047d0ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d0d2 je 0x1047d0e5 */
  if (C.zf) goto L_1047d0e5;
  /* 1047d0d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d0d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d0da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1047d0dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d0df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d0e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_1047d0e5:;
  /* 1047d0e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d0e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d0eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d0ee jne 0x1047d1bd */
  if (!C.zf) goto L_1047d1bd;
L_1047d0f4:;
  /* 1047d0f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d0f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d0fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047d0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d100 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d103 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d106 je 0x1047d182 */
  if (C.zf) goto L_1047d182;
  /* 1047d108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d10b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047d10e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d110 je 0x1047d182 */
  if (C.zf) goto L_1047d182;
  /* 1047d112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d115 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d117 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047d119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d11b mov al, byte ptr [edx + 0x1002fd01] */
  AL = (r8((uint32_t)(EDX + 0x1002fd01)));
  /* 1047d121 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047d124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d126 je 0x1047d157 */
  if (C.zf) goto L_1047d157;
  /* 1047d128 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d12b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047d12d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d130 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047d135 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d139 je 0x1047d157 */
  if (C.zf) goto L_1047d157;
  /* 1047d13b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d141 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047d143 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1047d145 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d14b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1047d14e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d151 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d154 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047d157:;
  /* 1047d157 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d15a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d15c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d15f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d162 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1047d164 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d168 je 0x1047d17d */
  if (C.zf) goto L_1047d17d;
  /* 1047d16a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d16d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d170 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047d172 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047d174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d177 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d17a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1047d17d:;
  /* 1047d17d jmp 0x1047d0f4 */
  goto L_1047d0f4;
L_1047d182:;
  /* 1047d182 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d185 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047d187 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d18a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d18d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047d18f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d193 je 0x1047d1a4 */
  if (C.zf) goto L_1047d1a4;
  /* 1047d195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d198 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1047d19b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d19e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d1a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1047d1a4:;
  /* 1047d1a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d1a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d1aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d1ad jne 0x1047d1b8 */
  if (!C.zf) goto L_1047d1b8;
  /* 1047d1af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d1b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d1b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047d1b8:;
  /* 1047d1b8 jmp 0x1047d28c */
  goto L_1047d28c;
L_1047d1bd:;
  /* 1047d1bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d1c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d1c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d1c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d1c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1047d1ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d1ce je 0x1047d1e3 */
  if (C.zf) goto L_1047d1e3;
  /* 1047d1d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d1d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d1d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047d1d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047d1da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d1dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d1e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1047d1e3:;
  /* 1047d1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d1e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047d1e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1047d1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d1ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d1f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047d1f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d1f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047d1fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d1ff mov dl, byte ptr [ecx + 0x1002fd01] */
  DL = (r8((uint32_t)(ECX + 0x1002fd01)));
  /* 1047d205 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1047d208 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d20a je 0x1047d23b */
  if (C.zf) goto L_1047d23b;
  /* 1047d20c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d20f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d211 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d214 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d217 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1047d219 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d21d je 0x1047d232 */
  if (C.zf) goto L_1047d232;
  /* 1047d21f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d225 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047d227 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047d229 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d22c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d22f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1047d232:;
  /* 1047d232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d238 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047d23b:;
  /* 1047d23b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d23e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047d244 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d247 je 0x1047d267 */
  if (C.zf) goto L_1047d267;
  /* 1047d249 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d24c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047d251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d253 je 0x1047d267 */
  if (C.zf) goto L_1047d267;
  /* 1047d255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d258 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047d25e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d261 jne 0x1047d1bd */
  if (!C.zf) goto L_1047d1bd;
L_1047d267:;
  /* 1047d267 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d26a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047d270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d272 jne 0x1047d27f */
  if (!C.zf) goto L_1047d27f;
  /* 1047d274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d277 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d27a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047d27d jmp 0x1047d28c */
  goto L_1047d28c;
L_1047d27f:;
  /* 1047d27f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d283 je 0x1047d28c */
  if (C.zf) goto L_1047d28c;
  /* 1047d285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d288 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1047d28c:;
  /* 1047d28c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1047d293:;
  /* 1047d293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d296 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047d299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d29b je 0x1047d2be */
  if (C.zf) goto L_1047d2be;
L_1047d29d:;
  /* 1047d29d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d2a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047d2a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d2a6 je 0x1047d2b3 */
  if (C.zf) goto L_1047d2b3;
  /* 1047d2a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d2ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d2ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d2b1 jne 0x1047d2be */
  if (!C.zf) goto L_1047d2be;
L_1047d2b3:;
  /* 1047d2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d2b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d2b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047d2bc jmp 0x1047d29d */
  goto L_1047d29d;
L_1047d2be:;
  /* 1047d2be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d2c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d2c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047d2c6 jne 0x1047d2cd */
  if (!C.zf) goto L_1047d2cd;
  /* 1047d2c8 jmp 0x1047d4ab */
  goto L_1047d4ab;
L_1047d2cd:;
  /* 1047d2cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d2d1 je 0x1047d2e4 */
  if (C.zf) goto L_1047d2e4;
  /* 1047d2d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d2d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d2d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047d2db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d2de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d2e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1047d2e4:;
  /* 1047d2e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047d2e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047d2e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d2ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047d2ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1047d2f1:;
  /* 1047d2f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1047d2f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1047d2ff:;
  /* 1047d2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047d305 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d308 jne 0x1047d31e */
  if (!C.zf) goto L_1047d31e;
  /* 1047d30a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d30d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d310 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047d313 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d316 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d319 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1047d31c jmp 0x1047d2ff */
  goto L_1047d2ff;
L_1047d31e:;
  /* 1047d31e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d321 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d324 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d327 jne 0x1047d37a */
  if (!C.zf) goto L_1047d37a;
  /* 1047d329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d32c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d32e mov ecx, 2 */
  ECX = (0x2u);
  /* 1047d333 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1047d335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d337 jne 0x1047d372 */
  if (!C.zf) goto L_1047d372;
  /* 1047d339 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d33d je 0x1047d35f */
  if (C.zf) goto L_1047d35f;
  /* 1047d33f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d342 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1047d346 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d349 jne 0x1047d356 */
  if (!C.zf) goto L_1047d356;
  /* 1047d34b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d34e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d351 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047d354 jmp 0x1047d35d */
  goto L_1047d35d;
L_1047d356:;
  /* 1047d356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1047d35d:;
  /* 1047d35d jmp 0x1047d366 */
  goto L_1047d366;
L_1047d35f:;
  /* 1047d35f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1047d366:;
  /* 1047d366 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d368 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d36c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1047d36f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1047d372:;
  /* 1047d372 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d375 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1047d377 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1047d37a:;
  /* 1047d37a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d37d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d380 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d383 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1047d386 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047d388 je 0x1047d3ae */
  if (C.zf) goto L_1047d3ae;
  /* 1047d38a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d38e je 0x1047d39f */
  if (C.zf) goto L_1047d39f;
  /* 1047d390 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d393 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 1047d396 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d399 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d39c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1047d39f:;
  /* 1047d39f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d3a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047d3a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d3a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d3aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047d3ac jmp 0x1047d37a */
  goto L_1047d37a;
L_1047d3ae:;
  /* 1047d3ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d3b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047d3b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d3b6 je 0x1047d3d4 */
  if (C.zf) goto L_1047d3d4;
  /* 1047d3b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d3bc jne 0x1047d3d9 */
  if (!C.zf) goto L_1047d3d9;
  /* 1047d3be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d3c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047d3c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d3c7 je 0x1047d3d4 */
  if (C.zf) goto L_1047d3d4;
  /* 1047d3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d3cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047d3cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d3d2 jne 0x1047d3d9 */
  if (!C.zf) goto L_1047d3d9;
L_1047d3d4:;
  /* 1047d3d4 jmp 0x1047d484 */
  goto L_1047d484;
L_1047d3d9:;
  /* 1047d3d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d3dd je 0x1047d476 */
  if (C.zf) goto L_1047d476;
  /* 1047d3e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d3e7 je 0x1047d43d */
  if (C.zf) goto L_1047d43d;
  /* 1047d3e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d3ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d3ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047d3f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047d3f2 mov cl, byte ptr [eax + 0x1002fd01] */
  CL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 1047d3f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1047d3fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047d3fd je 0x1047d428 */
  if (C.zf) goto L_1047d428;
  /* 1047d3ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d405 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1047d407 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1047d409 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d40c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d40f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 1047d412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d415 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d418 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047d41b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d41e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047d420 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d423 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d426 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1047d428:;
  /* 1047d428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d42e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047d430 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1047d432 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d438 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1047d43b jmp 0x1047d469 */
  goto L_1047d469;
L_1047d43d:;
  /* 1047d43d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d442 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047d444 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047d446 mov cl, byte ptr [eax + 0x1002fd01] */
  CL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 1047d44c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1047d44f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047d451 je 0x1047d469 */
  if (C.zf) goto L_1047d469;
  /* 1047d453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d456 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d459 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047d45c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d45f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d461 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d464 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d467 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047d469:;
  /* 1047d469 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d46c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d46e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d474 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047d476:;
  /* 1047d476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d47c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047d47f jmp 0x1047d2f1 */
  goto L_1047d2f1;
L_1047d484:;
  /* 1047d484 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d488 je 0x1047d499 */
  if (C.zf) goto L_1047d499;
  /* 1047d48a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d48d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1047d490 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047d493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d496 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1047d499:;
  /* 1047d499 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d49c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047d49e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d4a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047d4a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1047d4a6 jmp 0x1047d293 */
  goto L_1047d293;
L_1047d4ab:;
  /* 1047d4ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d4af je 0x1047d4c3 */
  if (C.zf) goto L_1047d4c3;
  /* 1047d4b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d4b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047d4ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047d4bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d4c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1047d4c3:;
  /* 1047d4c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047d4c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047d4c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d4cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047d4ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047d4d0 mov esp, ebp */
  ESP = (EBP);
  /* 1047d4d2 pop ebp */
  EBP = (pop32());
  /* 1047d4d3 ret  */
  ESPCHK(0x1047d0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d4e0 @ 0x1047d4e0 (537 bytes, 173 insns) */
void f_1047d4e0(void) {
  FTRACE(0x1047d4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1047d4e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d4e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1047d4ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1047d4f4 cmp dword ptr [0x1002e5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d4fb jne 0x1047d53a */
  if (!C.zf) goto L_1047d53a;
  /* 1047d4fd call dword ptr [0x100302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f4))), 0x1047d503u);
  /* 1047d503 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1047d506 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d50a je 0x1047d518 */
  if (C.zf) goto L_1047d518;
  /* 1047d50c mov dword ptr [0x1002e5dc], 1 */
  w32((uint32_t)(0x1002e5dc), (0x1u));
  /* 1047d516 jmp 0x1047d53a */
  goto L_1047d53a;
L_1047d518:;
  /* 1047d518 call dword ptr [0x100302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f0))), 0x1047d51eu);
  /* 1047d51e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047d521 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d525 je 0x1047d533 */
  if (C.zf) goto L_1047d533;
  /* 1047d527 mov dword ptr [0x1002e5dc], 2 */
  w32((uint32_t)(0x1002e5dc), (0x2u));
  /* 1047d531 jmp 0x1047d53a */
  goto L_1047d53a;
L_1047d533:;
  /* 1047d533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d535 jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d53a:;
  /* 1047d53a cmp dword ptr [0x1002e5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d541 jne 0x1047d63e */
  if (!C.zf) goto L_1047d63e;
  /* 1047d547 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d54b jne 0x1047d563 */
  if (!C.zf) goto L_1047d563;
  /* 1047d54d call dword ptr [0x100302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f4))), 0x1047d553u);
  /* 1047d553 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1047d556 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d55a jne 0x1047d563 */
  if (!C.zf) goto L_1047d563;
  /* 1047d55c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d55e jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d563:;
  /* 1047d563 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d566 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047d569:;
  /* 1047d569 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d56c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d56e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1047d571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d573 je 0x1047d595 */
  if (C.zf) goto L_1047d595;
  /* 1047d575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d578 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d57b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047d57e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047d583 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1047d586 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d588 jne 0x1047d593 */
  if (!C.zf) goto L_1047d593;
  /* 1047d58a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d58d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d590 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047d593:;
  /* 1047d593 jmp 0x1047d569 */
  goto L_1047d569;
L_1047d595:;
  /* 1047d595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d598 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d59b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1047d59d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d5a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047d5a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d5ae push edx */
  push32((uint32_t)(EDX));
  /* 1047d5af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d5b2 push eax */
  push32((uint32_t)(EAX));
  /* 1047d5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5b7 call dword ptr [0x100302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ec))), 0x1047d5bdu);
  /* 1047d5bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047d5c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d5c4 je 0x1047d5e4 */
  if (C.zf) goto L_1047d5e4;
  /* 1047d5c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1047d5c8 push 0x10029b64 */
  push32((uint32_t)(0x10029b64u));
  /* 1047d5cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1047d5cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d5d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d5d3 call 0x1047af10 */
  push32(0x1047d5d8u); f_1047af10();
  /* 1047d5d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d5db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047d5de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d5e2 jne 0x1047d5f5 */
  if (!C.zf) goto L_1047d5f5;
L_1047d5e4:;
  /* 1047d5e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d5e7 push edx */
  push32((uint32_t)(EDX));
  /* 1047d5e8 call dword ptr [0x100302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302e8))), 0x1047d5eeu);
  /* 1047d5ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d5f0 jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d5f5:;
  /* 1047d5f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d5f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d5fc push eax */
  push32((uint32_t)(EAX));
  /* 1047d5fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d600 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d604 push edx */
  push32((uint32_t)(EDX));
  /* 1047d605 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d608 push eax */
  push32((uint32_t)(EAX));
  /* 1047d609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d60b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d60d call dword ptr [0x100302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ec))), 0x1047d613u);
  /* 1047d613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d615 jne 0x1047d62c */
  if (!C.zf) goto L_1047d62c;
  /* 1047d617 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047d619 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d61c push ecx */
  push32((uint32_t)(ECX));
  /* 1047d61d call 0x1047b9a0 */
  push32(0x1047d622u); f_1047b9a0();
  /* 1047d622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d625 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1047d62c:;
  /* 1047d62c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047d62f push edx */
  push32((uint32_t)(EDX));
  /* 1047d630 call dword ptr [0x100302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302e8))), 0x1047d636u);
  /* 1047d636 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d639 jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d63e:;
  /* 1047d63e cmp dword ptr [0x1002e5dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d645 jne 0x1047d6f3 */
  if (!C.zf) goto L_1047d6f3;
  /* 1047d64b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d64f jne 0x1047d667 */
  if (!C.zf) goto L_1047d667;
  /* 1047d651 call dword ptr [0x100302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f0))), 0x1047d657u);
  /* 1047d657 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047d65a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d65e jne 0x1047d667 */
  if (!C.zf) goto L_1047d667;
  /* 1047d660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d662 jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d667:;
  /* 1047d667 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d66a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1047d66d:;
  /* 1047d66d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d670 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047d673 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d675 je 0x1047d695 */
  if (C.zf) goto L_1047d695;
  /* 1047d677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d67a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d67d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047d680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d683 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047d686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047d688 jne 0x1047d693 */
  if (!C.zf) goto L_1047d693;
  /* 1047d68a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d68d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d690 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1047d693:;
  /* 1047d693 jmp 0x1047d66d */
  goto L_1047d66d;
L_1047d695:;
  /* 1047d695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d698 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d69b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d69e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047d6a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 1047d6a6 push 0x10029b64 */
  push32((uint32_t)(0x10029b64u));
  /* 1047d6ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1047d6ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1047d6b1 call 0x1047af10 */
  push32(0x1047d6b6u); f_1047af10();
  /* 1047d6b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d6b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047d6bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d6c0 jne 0x1047d6d0 */
  if (!C.zf) goto L_1047d6d0;
  /* 1047d6c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d6c5 push eax */
  push32((uint32_t)(EAX));
  /* 1047d6c6 call dword ptr [0x10030238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030238))), 0x1047d6ccu);
  /* 1047d6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d6ce jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d6d0:;
  /* 1047d6d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047d6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d6d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1047d6d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d6db push eax */
  push32((uint32_t)(EAX));
  /* 1047d6dc call 0x104817f0 */
  push32(0x1047d6e1u); f_104817f0();
  /* 1047d6e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d6e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047d6e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d6e8 call dword ptr [0x10030238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030238))), 0x1047d6eeu);
  /* 1047d6ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d6f1 jmp 0x1047d6f5 */
  goto L_1047d6f5;
L_1047d6f3:;
  /* 1047d6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047d6f5:;
  /* 1047d6f5 mov esp, ebp */
  ESP = (EBP);
  /* 1047d6f7 pop ebp */
  EBP = (pop32());
  /* 1047d6f8 ret  */
  ESPCHK(0x1047d4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d700 @ 0x1047d700 (77 bytes, 25 insns) */
void f_1047d700(void) {
  FTRACE(0x1047d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d700 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d701 mov ebp, esp */
  EBP = (ESP);
  /* 1047d703 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d705 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1047d70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d70c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d710 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1047d713 push eax */
  push32((uint32_t)(EAX));
  /* 1047d714 call dword ptr [0x100302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302fc))), 0x1047d71au);
  /* 1047d71a mov dword ptr [0x1002fe2c], eax */
  w32((uint32_t)(0x1002fe2c), (EAX));
  /* 1047d71f cmp dword ptr [0x1002fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d726 jne 0x1047d72c */
  if (!C.zf) goto L_1047d72c;
  /* 1047d728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d72a jmp 0x1047d74b */
  goto L_1047d74b;
L_1047d72c:;
  /* 1047d72c call 0x1047f1b0 */
  push32(0x1047d731u); f_1047f1b0();
  /* 1047d731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d733 jne 0x1047d746 */
  if (!C.zf) goto L_1047d746;
  /* 1047d735 mov ecx, dword ptr [0x1002fe2c] */
  ECX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047d73b push ecx */
  push32((uint32_t)(ECX));
  /* 1047d73c call dword ptr [0x100302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f8))), 0x1047d742u);
  /* 1047d742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047d744 jmp 0x1047d74b */
  goto L_1047d74b;
L_1047d746:;
  /* 1047d746 mov eax, 1 */
  EAX = (0x1u);
L_1047d74b:;
  /* 1047d74b pop ebp */
  EBP = (pop32());
  /* 1047d74c ret  */
  ESPCHK(0x1047d700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d750 @ 0x1047d750 (156 bytes, 48 insns) */
void f_1047d750(void) {
  FTRACE(0x1047d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d750 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d751 mov ebp, esp */
  EBP = (ESP);
  /* 1047d753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d756 mov eax, dword ptr [0x1002fe28] */
  EAX = (r32((uint32_t)(0x1002fe28)));
  /* 1047d75b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047d75e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047d765 jmp 0x1047d770 */
  goto L_1047d770;
L_1047d767:;
  /* 1047d767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d76a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d76d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047d770:;
  /* 1047d770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047d773 cmp edx, dword ptr [0x1002fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d779 jge 0x1047d7c6 */
  if ((C.sf==C.of)) goto L_1047d7c6;
  /* 1047d77b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1047d780 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1047d785 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d788 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1047d78b push ecx */
  push32((uint32_t)(ECX));
  /* 1047d78c call dword ptr [0x10030304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030304))), 0x1047d792u);
  /* 1047d792 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1047d797 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d799 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d79c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1047d79f push eax */
  push32((uint32_t)(EAX));
  /* 1047d7a0 call dword ptr [0x10030304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030304))), 0x1047d7a6u);
  /* 1047d7a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d7a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047d7ac push edx */
  push32((uint32_t)(EDX));
  /* 1047d7ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d7af mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047d7b4 push eax */
  push32((uint32_t)(EAX));
  /* 1047d7b5 call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x1047d7bbu);
  /* 1047d7bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d7be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d7c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047d7c4 jmp 0x1047d767 */
  goto L_1047d767;
L_1047d7c6:;
  /* 1047d7c6 mov edx, dword ptr [0x1002fe28] */
  EDX = (r32((uint32_t)(0x1002fe28)));
  /* 1047d7cc push edx */
  push32((uint32_t)(EDX));
  /* 1047d7cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d7cf mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047d7d4 push eax */
  push32((uint32_t)(EAX));
  /* 1047d7d5 call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x1047d7dbu);
  /* 1047d7db mov ecx, dword ptr [0x1002fe2c] */
  ECX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047d7e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d7e2 call dword ptr [0x100302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302f8))), 0x1047d7e8u);
  /* 1047d7e8 mov esp, ebp */
  ESP = (EBP);
  /* 1047d7ea pop ebp */
  EBP = (pop32());
  /* 1047d7eb ret  */
  ESPCHK(0x1047d750u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1047d7f0 (73 bytes, 19 insns) */
void f_1047d7f0(void) {
  FTRACE(0x1047d7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047d7f3 cmp dword ptr [0x1002e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d7fa je 0x1047d80e */
  if (C.zf) goto L_1047d80e;
  /* 1047d7fc cmp dword ptr [0x1002e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d803 jne 0x1047d837 */
  if (!C.zf) goto L_1047d837;
  /* 1047d805 cmp dword ptr [0x1002e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d80c jne 0x1047d837 */
  if (!C.zf) goto L_1047d837;
L_1047d80e:;
  /* 1047d80e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1047d813 call 0x1047d840 */
  push32(0x1047d818u); f_1047d840();
  /* 1047d818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d81b cmp dword ptr [0x1002e5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d822 je 0x1047d82a */
  if (C.zf) goto L_1047d82a;
  /* 1047d824 call dword ptr [0x1002e5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e5e0))), 0x1047d82au);
L_1047d82a:;
  /* 1047d82a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1047d82f call 0x1047d840 */
  push32(0x1047d834u); f_1047d840();
  /* 1047d834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047d837:;
  /* 1047d837 pop ebp */
  EBP = (pop32());
  /* 1047d838 ret  */
  ESPCHK(0x1047d7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d840 @ 0x1047d840 (447 bytes, 131 insns) */
void f_1047d840(void) {
  FTRACE(0x1047d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047d840 push ebp */
  push32((uint32_t)(EBP));
  /* 1047d841 mov ebp, esp */
  EBP = (ESP);
  /* 1047d843 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047d849 push ebx */
  push32((uint32_t)(EBX));
  /* 1047d84a push esi */
  push32((uint32_t)(ESI));
  /* 1047d84b push edi */
  push32((uint32_t)(EDI));
  /* 1047d84c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047d853 jmp 0x1047d85e */
  goto L_1047d85e;
L_1047d855:;
  /* 1047d855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d858 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d85b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047d85e:;
  /* 1047d85e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d862 jae 0x1047d877 */
  if (!C.cf) goto L_1047d877;
  /* 1047d864 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047d86a cmp edx, dword ptr [ecx*8 + 0x1002cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1002cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d871 jne 0x1047d875 */
  if (!C.zf) goto L_1047d875;
  /* 1047d873 jmp 0x1047d877 */
  goto L_1047d877;
L_1047d875:;
  /* 1047d875 jmp 0x1047d855 */
  goto L_1047d855;
L_1047d877:;
  /* 1047d877 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d87a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047d87d cmp ecx, dword ptr [eax*8 + 0x1002cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1002cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d884 jne 0x1047d9f8 */
  if (!C.zf) goto L_1047d9f8;
  /* 1047d88a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d891 je 0x1047d8b4 */
  if (C.zf) goto L_1047d8b4;
  /* 1047d893 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d896 mov eax, dword ptr [edx*8 + 0x1002cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1002cab4)));
  /* 1047d89d push eax */
  push32((uint32_t)(EAX));
  /* 1047d89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d8a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d8a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047d8a6 call 0x10479fd0 */
  push32(0x1047d8abu); f_10479fd0();
  /* 1047d8ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d8ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d8b1 jne 0x1047d8b4 */
  if (!C.zf) goto L_1047d8b4;
  /* 1047d8b3 int3  */
  x86_unimpl("int3 @ 0x1047d8b3");
L_1047d8b4:;
  /* 1047d8b4 cmp dword ptr [0x1002e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d8bb je 0x1047d8cf */
  if (C.zf) goto L_1047d8cf;
  /* 1047d8bd cmp dword ptr [0x1002e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d8c4 jne 0x1047d908 */
  if (!C.zf) goto L_1047d908;
  /* 1047d8c6 cmp dword ptr [0x1002e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d8cd jne 0x1047d908 */
  if (!C.zf) goto L_1047d908;
L_1047d8cf:;
  /* 1047d8cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d8d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1047d8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d8d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d8d8 mov eax, dword ptr [edx*8 + 0x1002cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1002cab4)));
  /* 1047d8df push eax */
  push32((uint32_t)(EAX));
  /* 1047d8e0 call 0x1047dd40 */
  push32(0x1047d8e5u); f_1047dd40();
  /* 1047d8e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1047d8e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d8ec mov edx, dword ptr [ecx*8 + 0x1002cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1002cab4)));
  /* 1047d8f3 push edx */
  push32((uint32_t)(EDX));
  /* 1047d8f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1047d8f6 call dword ptr [0x1003027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003027c))), 0x1047d8fcu);
  /* 1047d8fc push eax */
  push32((uint32_t)(EAX));
  /* 1047d8fd call dword ptr [0x10030280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030280))), 0x1047d903u);
  /* 1047d903 jmp 0x1047d9f8 */
  goto L_1047d9f8;
L_1047d908:;
  /* 1047d908 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d90f je 0x1047d9f8 */
  if (C.zf) goto L_1047d9f8;
  /* 1047d915 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1047d91a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1047d920 push eax */
  push32((uint32_t)(EAX));
  /* 1047d921 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047d923 call dword ptr [0x10030298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030298))), 0x1047d929u);
  /* 1047d929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047d92b jne 0x1047d941 */
  if (!C.zf) goto L_1047d941;
  /* 1047d92d push 0x100293cc */
  push32((uint32_t)(0x100293ccu));
  /* 1047d932 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1047d938 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d939 call 0x1047dec0 */
  push32(0x1047d93eu); f_1047dec0();
  /* 1047d93e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047d941:;
  /* 1047d941 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1047d947 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047d94a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d94d push eax */
  push32((uint32_t)(EAX));
  /* 1047d94e call 0x1047dd40 */
  push32(0x1047d953u); f_1047dd40();
  /* 1047d953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d956 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d959 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047d95c jbe 0x1047d98a */
  if ((C.cf||C.zf)) goto L_1047d98a;
  /* 1047d95e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1047d964 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d965 call 0x1047dd40 */
  push32(0x1047d96au); f_1047dd40();
  /* 1047d96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d96d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d970 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1047d974 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047d977 push 3 */
  push32((uint32_t)(0x3u));
  /* 1047d979 push 0x100293c8 */
  push32((uint32_t)(0x100293c8u));
  /* 1047d97e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d981 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d982 call 0x1047e730 */
  push32(0x1047d987u); f_1047e730();
  /* 1047d987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047d98a:;
  /* 1047d98a push 0x10029e20 */
  push32((uint32_t)(0x10029e20u));
  /* 1047d98f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1047d995 push edx */
  push32((uint32_t)(EDX));
  /* 1047d996 call 0x1047dec0 */
  push32(0x1047d99bu); f_1047dec0();
  /* 1047d99b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d99e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047d9a1 push eax */
  push32((uint32_t)(EAX));
  /* 1047d9a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1047d9a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1047d9a9 call 0x1047ded0 */
  push32(0x1047d9aeu); f_1047ded0();
  /* 1047d9ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d9b1 push 0x10029340 */
  push32((uint32_t)(0x10029340u));
  /* 1047d9b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1047d9bc push edx */
  push32((uint32_t)(EDX));
  /* 1047d9bd call 0x1047ded0 */
  push32(0x1047d9c2u); f_1047ded0();
  /* 1047d9c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d9c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047d9c8 mov ecx, dword ptr [eax*8 + 0x1002cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1002cab4)));
  /* 1047d9cf push ecx */
  push32((uint32_t)(ECX));
  /* 1047d9d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1047d9d6 push edx */
  push32((uint32_t)(EDX));
  /* 1047d9d7 call 0x1047ded0 */
  push32(0x1047d9dcu); f_1047ded0();
  /* 1047d9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047d9df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1047d9e4 push 0x10029df8 */
  push32((uint32_t)(0x10029df8u));
  /* 1047d9e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1047d9ef push eax */
  push32((uint32_t)(EAX));
  /* 1047d9f0 call 0x1047e670 */
  push32(0x1047d9f5u); f_1047e670();
  /* 1047d9f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047d9f8:;
  /* 1047d9f8 pop edi */
  EDI = (pop32());
  /* 1047d9f9 pop esi */
  ESI = (pop32());
  /* 1047d9fa pop ebx */
  EBX = (pop32());
  /* 1047d9fb mov esp, ebp */
  ESP = (EBP);
  /* 1047d9fd pop ebp */
  EBP = (pop32());
  /* 1047d9fe ret  */
  ESPCHK(0x1047d840u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1047da00 (80 bytes, 27 insns) */
void f_1047da00(void) {
  FTRACE(0x1047da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047da00 push ebp */
  push32((uint32_t)(EBP));
  /* 1047da01 mov ebp, esp */
  EBP = (ESP);
  /* 1047da03 push ecx */
  push32((uint32_t)(ECX));
  /* 1047da04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047da0b jmp 0x1047da16 */
  goto L_1047da16;
L_1047da0d:;
  /* 1047da0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047da10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047da13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047da16:;
  /* 1047da16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047da1a jae 0x1047da2f */
  if (!C.cf) goto L_1047da2f;
  /* 1047da1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047da1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047da22 cmp edx, dword ptr [ecx*8 + 0x1002cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1002cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047da29 jne 0x1047da2d */
  if (!C.zf) goto L_1047da2d;
  /* 1047da2b jmp 0x1047da2f */
  goto L_1047da2f;
L_1047da2d:;
  /* 1047da2d jmp 0x1047da0d */
  goto L_1047da0d;
L_1047da2f:;
  /* 1047da2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047da32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047da35 cmp ecx, dword ptr [eax*8 + 0x1002cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1002cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047da3c jne 0x1047da4a */
  if (!C.zf) goto L_1047da4a;
  /* 1047da3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047da41 mov eax, dword ptr [edx*8 + 0x1002cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1002cab4)));
  /* 1047da48 jmp 0x1047da4c */
  goto L_1047da4c;
L_1047da4a:;
  /* 1047da4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047da4c:;
  /* 1047da4c mov esp, ebp */
  ESP = (EBP);
  /* 1047da4e pop ebp */
  EBP = (pop32());
  /* 1047da4f ret  */
  ESPCHK(0x1047da00u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1047da50 (66 bytes, 28 insns) */
void f_1047da50(void) {
  FTRACE(0x1047da50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047da50 push ebp */
  push32((uint32_t)(EBP));
  /* 1047da51 mov ebp, esp */
  EBP = (ESP);
  /* 1047da53 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047da57 jne 0x1047da77 */
  if (!C.zf) goto L_1047da77;
  /* 1047da59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047da5d jge 0x1047da77 */
  if ((C.sf==C.of)) goto L_1047da77;
  /* 1047da5f push 1 */
  push32((uint32_t)(0x1u));
  /* 1047da61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047da64 push eax */
  push32((uint32_t)(EAX));
  /* 1047da65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047da68 push ecx */
  push32((uint32_t)(ECX));
  /* 1047da69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047da6c push edx */
  push32((uint32_t)(EDX));
  /* 1047da6d call 0x1047daa0 */
  push32(0x1047da72u); f_1047daa0();
  /* 1047da72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047da75 jmp 0x1047da8d */
  goto L_1047da8d;
L_1047da77:;
  /* 1047da77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047da79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047da7c push eax */
  push32((uint32_t)(EAX));
  /* 1047da7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047da80 push ecx */
  push32((uint32_t)(ECX));
  /* 1047da81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047da84 push edx */
  push32((uint32_t)(EDX));
  /* 1047da85 call 0x1047daa0 */
  push32(0x1047da8au); f_1047daa0();
  /* 1047da8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047da8d:;
  /* 1047da8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047da90 pop ebp */
  EBP = (pop32());
  /* 1047da91 ret  */
  ESPCHK(0x1047da50u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1047daa0 (194 bytes, 71 insns) */
void f_1047daa0(void) {
  FTRACE(0x1047daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1047daa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047daa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047daa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047daac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dab0 je 0x1047dac9 */
  if (C.zf) goto L_1047dac9;
  /* 1047dab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dab5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1047dab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dabb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dabe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047dac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dac4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047dac6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1047dac9:;
  /* 1047dac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dacc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1047dacf:;
  /* 1047dacf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dad2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047dad4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1047dad7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047dada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dadd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047dadf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1047dae2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047dae5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dae9 jbe 0x1047db01 */
  if ((C.cf||C.zf)) goto L_1047db01;
  /* 1047daeb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047daee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047daf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047daf4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047daf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047daf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dafc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047daff jmp 0x1047db15 */
  goto L_1047db15;
L_1047db01:;
  /* 1047db01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047db04 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047db07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047db0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047db12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047db15:;
  /* 1047db15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047db19 ja 0x1047dacf */
  if ((!C.cf&&!C.zf)) goto L_1047dacf;
  /* 1047db1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db1e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1047db21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047db27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047db2a:;
  /* 1047db2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047db2f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1047db32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047db38 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047db3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047db3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047db3f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1047db42 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1047db44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047db4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047db4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047db50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047db53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047db56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047db59 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047db5c jb 0x1047db2a */
  if (C.cf) goto L_1047db2a;
  /* 1047db5e mov esp, ebp */
  ESP = (EBP);
  /* 1047db60 pop ebp */
  EBP = (pop32());
  /* 1047db61 ret  */
  ESPCHK(0x1047daa0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1047db70 (63 bytes, 24 insns) */
void f_1047db70(void) {
  FTRACE(0x1047db70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047db70 push ebp */
  push32((uint32_t)(EBP));
  /* 1047db71 mov ebp, esp */
  EBP = (ESP);
  /* 1047db73 push ecx */
  push32((uint32_t)(ECX));
  /* 1047db74 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047db78 jne 0x1047db89 */
  if (!C.zf) goto L_1047db89;
  /* 1047db7a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047db7e jge 0x1047db89 */
  if ((C.sf==C.of)) goto L_1047db89;
  /* 1047db80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1047db87 jmp 0x1047db90 */
  goto L_1047db90;
L_1047db89:;
  /* 1047db89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047db90:;
  /* 1047db90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047db93 push eax */
  push32((uint32_t)(EAX));
  /* 1047db94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047db97 push ecx */
  push32((uint32_t)(ECX));
  /* 1047db98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047db9b push edx */
  push32((uint32_t)(EDX));
  /* 1047db9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047db9f push eax */
  push32((uint32_t)(EAX));
  /* 1047dba0 call 0x1047daa0 */
  push32(0x1047dba5u); f_1047daa0();
  /* 1047dba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dba8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dbab mov esp, ebp */
  ESP = (EBP);
  /* 1047dbad pop ebp */
  EBP = (pop32());
  /* 1047dbae ret  */
  ESPCHK(0x1047db70u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1047dbb0 (30 bytes, 14 insns) */
void f_1047dbb0(void) {
  FTRACE(0x1047dbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047dbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1047dbb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dbb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dbb8 push eax */
  push32((uint32_t)(EAX));
  /* 1047dbb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dbbc push ecx */
  push32((uint32_t)(ECX));
  /* 1047dbbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dbc0 push edx */
  push32((uint32_t)(EDX));
  /* 1047dbc1 call 0x1047daa0 */
  push32(0x1047dbc6u); f_1047daa0();
  /* 1047dbc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dbc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dbcc pop ebp */
  EBP = (pop32());
  /* 1047dbcd ret  */
  ESPCHK(0x1047dbb0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1047dbd0 (72 bytes, 28 insns) */
void f_1047dbd0(void) {
  FTRACE(0x1047dbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047dbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1047dbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047dbd4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dbd8 jne 0x1047dbf1 */
  if (!C.zf) goto L_1047dbf1;
  /* 1047dbda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dbde jg 0x1047dbf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1047dbf1;
  /* 1047dbe0 jl 0x1047dbe8 */
  if ((C.sf!=C.of)) goto L_1047dbe8;
  /* 1047dbe2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dbe6 jae 0x1047dbf1 */
  if (!C.cf) goto L_1047dbf1;
L_1047dbe8:;
  /* 1047dbe8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1047dbef jmp 0x1047dbf8 */
  goto L_1047dbf8;
L_1047dbf1:;
  /* 1047dbf1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047dbf8:;
  /* 1047dbf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dbfb push eax */
  push32((uint32_t)(EAX));
  /* 1047dbfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047dbff push ecx */
  push32((uint32_t)(ECX));
  /* 1047dc00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dc03 push edx */
  push32((uint32_t)(EDX));
  /* 1047dc04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dc07 push eax */
  push32((uint32_t)(EAX));
  /* 1047dc08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dc0b push ecx */
  push32((uint32_t)(ECX));
  /* 1047dc0c call 0x1047dc20 */
  push32(0x1047dc11u); f_1047dc20();
  /* 1047dc11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dc14 mov esp, ebp */
  ESP = (EBP);
  /* 1047dc16 pop ebp */
  EBP = (pop32());
  /* 1047dc17 ret  */
  ESPCHK(0x1047dbd0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1047dc20 (242 bytes, 91 insns) */
void f_1047dc20(void) {
  FTRACE(0x1047dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1047dc21 mov ebp, esp */
  EBP = (ESP);
  /* 1047dc23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dc26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dc29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047dc2c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dc30 je 0x1047dc54 */
  if (C.zf) goto L_1047dc54;
  /* 1047dc32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dc35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1047dc38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dc3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dc3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047dc41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dc44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047dc46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dc49 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dc4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047dc4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047dc51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1047dc54:;
  /* 1047dc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dc57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1047dc5a:;
  /* 1047dc5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047dc5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047dc5f push ecx */
  push32((uint32_t)(ECX));
  /* 1047dc60 push eax */
  push32((uint32_t)(EAX));
  /* 1047dc61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dc64 push edx */
  push32((uint32_t)(EDX));
  /* 1047dc65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dc68 push eax */
  push32((uint32_t)(EAX));
  /* 1047dc69 call 0x10481ba0 */
  push32(0x1047dc6eu); f_10481ba0();
  /* 1047dc6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047dc71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047dc74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047dc76 push edx */
  push32((uint32_t)(EDX));
  /* 1047dc77 push ecx */
  push32((uint32_t)(ECX));
  /* 1047dc78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dc7b push eax */
  push32((uint32_t)(EAX));
  /* 1047dc7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dc7f push ecx */
  push32((uint32_t)(ECX));
  /* 1047dc80 call 0x10481b30 */
  push32(0x1047dc85u); f_10481b30();
  /* 1047dc85 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047dc88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1047dc8b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dc8f jbe 0x1047dca7 */
  if ((C.cf||C.zf)) goto L_1047dca7;
  /* 1047dc91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047dc94 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dc97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dc9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047dc9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dc9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dca2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047dca5 jmp 0x1047dcbb */
  goto L_1047dcbb;
L_1047dca7:;
  /* 1047dca7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047dcaa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dcad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dcb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047dcb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dcb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dcb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047dcbb:;
  /* 1047dcbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dcbf ja 0x1047dc5a */
  if ((!C.cf&&!C.zf)) goto L_1047dc5a;
  /* 1047dcc1 jb 0x1047dcc9 */
  if (C.cf) goto L_1047dcc9;
  /* 1047dcc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dcc7 ja 0x1047dc5a */
  if ((!C.cf&&!C.zf)) goto L_1047dc5a;
L_1047dcc9:;
  /* 1047dcc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dccc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1047dccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dcd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dcd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047dcd8:;
  /* 1047dcd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dcdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047dcdd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1047dce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dce3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047dce6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047dce8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047dcea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047dced mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1047dcf0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1047dcf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047dcf5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dcf8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047dcfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047dcfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dd01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047dd04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047dd07 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dd0a jb 0x1047dcd8 */
  if (C.cf) goto L_1047dcd8;
  /* 1047dd0c mov esp, ebp */
  ESP = (EBP);
  /* 1047dd0e pop ebp */
  EBP = (pop32());
  /* 1047dd0f ret 0x14 */
  ESPCHK(0x1047dc20u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1047dd20 (31 bytes, 15 insns) */
void f_1047dd20(void) {
  FTRACE(0x1047dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1047dd21 mov ebp, esp */
  EBP = (ESP);
  /* 1047dd23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dd25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047dd28 push eax */
  push32((uint32_t)(EAX));
  /* 1047dd29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dd2c push ecx */
  push32((uint32_t)(ECX));
  /* 1047dd2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047dd30 push edx */
  push32((uint32_t)(EDX));
  /* 1047dd31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047dd34 push eax */
  push32((uint32_t)(EAX));
  /* 1047dd35 call 0x1047dc20 */
  push32(0x1047dd3au); f_1047dc20();
  /* 1047dd3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047dd3d pop ebp */
  EBP = (pop32());
  /* 1047dd3e ret  */
  ESPCHK(0x1047dd20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1047dd40 (123 bytes, 44 insns) */
void f_1047dd40(void) {
  FTRACE(0x1047dd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dd40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047dd44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047dd4a je 0x1047dd60 */
  if (C.zf) goto L_1047dd60;
L_1047dd4c:;
  /* 1047dd4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1047dd4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1047dd4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047dd51 je 0x1047dd93 */
  if (C.zf) goto L_1047dd93;
  /* 1047dd53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047dd59 jne 0x1047dd4c */
  if (!C.zf) goto L_1047dd4c;
  /* 1047dd5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1047dd60:;
  /* 1047dd60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1047dd62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1047dd67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dd69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047dd6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047dd6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dd71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1047dd76 je 0x1047dd60 */
  if (C.zf) goto L_1047dd60;
  /* 1047dd78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1047dd7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047dd7d je 0x1047ddb1 */
  if (C.zf) goto L_1047ddb1;
  /* 1047dd7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1047dd81 je 0x1047dda7 */
  if (C.zf) goto L_1047dda7;
  /* 1047dd83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1047dd88 je 0x1047dd9d */
  if (C.zf) goto L_1047dd9d;
  /* 1047dd8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1047dd8f je 0x1047dd93 */
  if (C.zf) goto L_1047dd93;
  /* 1047dd91 jmp 0x1047dd60 */
  goto L_1047dd60;
L_1047dd93:;
  /* 1047dd93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1047dd96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047dd9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dd9c ret  */
  ESPCHK(0x1047dd40u, _esp0);
  ESP += 4; return;
L_1047dd9d:;
  /* 1047dd9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1047dda0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047dda4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dda6 ret  */
  ESPCHK(0x1047dd40u, _esp0);
  ESP += 4; return;
L_1047dda7:;
  /* 1047dda7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1047ddaa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047ddae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ddb0 ret  */
  ESPCHK(0x1047dd40u, _esp0);
  ESP += 4; return;
L_1047ddb1:;
  /* 1047ddb1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1047ddb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047ddb8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ddba ret  */
  ESPCHK(0x1047dd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ddc0 @ 0x1047ddc0 (249 bytes, 93 insns) */
void f_1047ddc0(void) {
  FTRACE(0x1047ddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ddc1 mov ebp, esp */
  EBP = (ESP);
  /* 1047ddc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ddc6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047ddc7 push esi */
  push32((uint32_t)(ESI));
  /* 1047ddc8 push edi */
  push32((uint32_t)(EDI));
  /* 1047ddc9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1047ddcc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1047ddcf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1047ddd2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1047ddd5:;
  /* 1047ddd5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ddd9 jne 0x1047ddf9 */
  if (!C.zf) goto L_1047ddf9;
  /* 1047dddb push 0x10029e58 */
  push32((uint32_t)(0x10029e58u));
  /* 1047dde0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dde2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1047dde4 push 0x10029e4c */
  push32((uint32_t)(0x10029e4cu));
  /* 1047dde9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047ddeb call 0x10479fd0 */
  push32(0x1047ddf0u); f_10479fd0();
  /* 1047ddf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ddf3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ddf6 jne 0x1047ddf9 */
  if (!C.zf) goto L_1047ddf9;
  /* 1047ddf8 int3  */
  x86_unimpl("int3 @ 0x1047ddf8");
L_1047ddf9:;
  /* 1047ddf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047ddfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047ddfd jne 0x1047ddd5 */
  if (!C.zf) goto L_1047ddd5;
L_1047ddff:;
  /* 1047ddff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047de03 jne 0x1047de23 */
  if (!C.zf) goto L_1047de23;
  /* 1047de05 push 0x10029e3c */
  push32((uint32_t)(0x10029e3cu));
  /* 1047de0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047de0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1047de0e push 0x10029e4c */
  push32((uint32_t)(0x10029e4cu));
  /* 1047de13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047de15 call 0x10479fd0 */
  push32(0x1047de1au); f_10479fd0();
  /* 1047de1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047de1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047de20 jne 0x1047de23 */
  if (!C.zf) goto L_1047de23;
  /* 1047de22 int3  */
  x86_unimpl("int3 @ 0x1047de22");
L_1047de23:;
  /* 1047de23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047de25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047de27 jne 0x1047ddff */
  if (!C.zf) goto L_1047ddff;
  /* 1047de29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1047de33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047de39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1047de3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047de42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1047de44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047de4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1047de4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047de50 push edx */
  push32((uint32_t)(EDX));
  /* 1047de51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047de54 push eax */
  push32((uint32_t)(EAX));
  /* 1047de55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de58 push ecx */
  push32((uint32_t)(ECX));
  /* 1047de59 call 0x10481ea0 */
  push32(0x1047de5eu); f_10481ea0();
  /* 1047de5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047de61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1047de64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047de6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047de6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1047de73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047de7a jl 0x1047de9e */
  if ((C.sf!=C.of)) goto L_1047de9e;
  /* 1047de7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047de81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1047de84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047de86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047de8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1047de8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047de94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047de97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047de9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1047de9c jmp 0x1047deaf */
  goto L_1047deaf;
L_1047de9e:;
  /* 1047de9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047dea1 push eax */
  push32((uint32_t)(EAX));
  /* 1047dea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dea4 call 0x10481c20 */
  push32(0x1047dea9u); f_10481c20();
  /* 1047dea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047deac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1047deaf:;
  /* 1047deaf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047deb2 pop edi */
  EDI = (pop32());
  /* 1047deb3 pop esi */
  ESI = (pop32());
  /* 1047deb4 pop ebx */
  EBX = (pop32());
  /* 1047deb5 mov esp, ebp */
  ESP = (EBP);
  /* 1047deb7 pop ebp */
  EBP = (pop32());
  /* 1047deb8 ret  */
  ESPCHK(0x1047ddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dec0 @ 0x1047dec0 (7 bytes, 3 insns) */
void f_1047dec0(void) {
  FTRACE(0x1047dec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dec0 push edi */
  push32((uint32_t)(EDI));
  /* 1047dec1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1047dec5 jmp 0x1047df31 */
  jmp_ind(0x1047df31u); return;
}

/* FUN_1001ded0 @ 0x1047ded0 (224 bytes, 84 insns) */
void f_1047ded0(void) {
  FTRACE(0x1047ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ded0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047ded4 push edi */
  push32((uint32_t)(EDI));
  /* 1047ded5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047dedb je 0x1047deec */
  if (C.zf) goto L_1047deec;
L_1047dedd:;
  /* 1047dedd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1047dedf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1047dee0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047dee2 je 0x1047df1f */
  if (C.zf) goto L_1047df1f;
  /* 1047dee4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047deea jne 0x1047dedd */
  if (!C.zf) goto L_1047dedd;
L_1047deec:;
  /* 1047deec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1047deee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1047def3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047def5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047def8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047defa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047defd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1047df02 je 0x1047deec */
  if (C.zf) goto L_1047deec;
  /* 1047df04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1047df07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047df09 je 0x1047df2e */
  if (C.zf) goto L_1047df2e;
  /* 1047df0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1047df0d je 0x1047df29 */
  if (C.zf) goto L_1047df29;
  /* 1047df0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1047df14 je 0x1047df24 */
  if (C.zf) goto L_1047df24;
  /* 1047df16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1047df1b je 0x1047df1f */
  if (C.zf) goto L_1047df1f;
  /* 1047df1d jmp 0x1047deec */
  goto L_1047deec;
L_1047df1f:;
  /* 1047df1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1047df22 jmp 0x1047df31 */
  goto L_1047df31;
L_1047df24:;
  /* 1047df24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1047df27 jmp 0x1047df31 */
  goto L_1047df31;
L_1047df29:;
  /* 1047df29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1047df2c jmp 0x1047df31 */
  goto L_1047df31;
L_1047df2e:;
  /* 1047df2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1047df31:;
  /* 1047df31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1047df35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047df3b je 0x1047df56 */
  if (C.zf) goto L_1047df56;
L_1047df3d:;
  /* 1047df3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047df3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1047df40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1047df42 je 0x1047dfa8 */
  if (C.zf) goto L_1047dfa8;
  /* 1047df44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1047df46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047df47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1047df4d jne 0x1047df3d */
  if (!C.zf) goto L_1047df3d;
  /* 1047df4f jmp 0x1047df56 */
  goto L_1047df56;
L_1047df51:;
  /* 1047df51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047df53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1047df56:;
  /* 1047df56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1047df5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1047df5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047df5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047df62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047df64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047df66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047df69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1047df6e je 0x1047df51 */
  if (C.zf) goto L_1047df51;
  /* 1047df70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1047df72 je 0x1047dfa8 */
  if (C.zf) goto L_1047dfa8;
  /* 1047df74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1047df76 je 0x1047df9f */
  if (C.zf) goto L_1047df9f;
  /* 1047df78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1047df7e je 0x1047df92 */
  if (C.zf) goto L_1047df92;
  /* 1047df80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1047df86 je 0x1047df8a */
  if (C.zf) goto L_1047df8a;
  /* 1047df88 jmp 0x1047df51 */
  goto L_1047df51;
L_1047df8a:;
  /* 1047df8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047df8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047df90 pop edi */
  EDI = (pop32());
  /* 1047df91 ret  */
  ESPCHK(0x1047ded0u, _esp0);
  ESP += 4; return;
L_1047df92:;
  /* 1047df92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1047df95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047df99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1047df9d pop edi */
  EDI = (pop32());
  /* 1047df9e ret  */
  ESPCHK(0x1047ded0u, _esp0);
  ESP += 4; return;
L_1047df9f:;
  /* 1047df9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1047dfa2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047dfa6 pop edi */
  EDI = (pop32());
  /* 1047dfa7 ret  */
  ESPCHK(0x1047ded0u, _esp0);
  ESP += 4; return;
L_1047dfa8:;
  /* 1047dfa8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1047dfaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047dfae pop edi */
  EDI = (pop32());
  /* 1047dfaf ret  */
  ESPCHK(0x1047ded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dfb0 @ 0x1047dfb0 (243 bytes, 91 insns) */
void f_1047dfb0(void) {
  FTRACE(0x1047dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1047dfb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047dfb6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047dfb7 push esi */
  push32((uint32_t)(ESI));
  /* 1047dfb8 push edi */
  push32((uint32_t)(EDI));
  /* 1047dfb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1047dfbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1047dfbf:;
  /* 1047dfbf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dfc3 jne 0x1047dfe3 */
  if (!C.zf) goto L_1047dfe3;
  /* 1047dfc5 push 0x10029e58 */
  push32((uint32_t)(0x10029e58u));
  /* 1047dfca push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dfcc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1047dfce push 0x10029e68 */
  push32((uint32_t)(0x10029e68u));
  /* 1047dfd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047dfd5 call 0x10479fd0 */
  push32(0x1047dfdau); f_10479fd0();
  /* 1047dfda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047dfdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dfe0 jne 0x1047dfe3 */
  if (!C.zf) goto L_1047dfe3;
  /* 1047dfe2 int3  */
  x86_unimpl("int3 @ 0x1047dfe2");
L_1047dfe3:;
  /* 1047dfe3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047dfe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047dfe7 jne 0x1047dfbf */
  if (!C.zf) goto L_1047dfbf;
L_1047dfe9:;
  /* 1047dfe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047dfed jne 0x1047e00d */
  if (!C.zf) goto L_1047e00d;
  /* 1047dfef push 0x10029e3c */
  push32((uint32_t)(0x10029e3cu));
  /* 1047dff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047dff6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1047dff8 push 0x10029e68 */
  push32((uint32_t)(0x10029e68u));
  /* 1047dffd push 2 */
  push32((uint32_t)(0x2u));
  /* 1047dfff call 0x10479fd0 */
  push32(0x1047e004u); f_10479fd0();
  /* 1047e004 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e007 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e00a jne 0x1047e00d */
  if (!C.zf) goto L_1047e00d;
  /* 1047e00c int3  */
  x86_unimpl("int3 @ 0x1047e00c");
L_1047e00d:;
  /* 1047e00d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047e00f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047e011 jne 0x1047dfe9 */
  if (!C.zf) goto L_1047dfe9;
  /* 1047e013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e016 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1047e01d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e023 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1047e026 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e02c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1047e02e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e034 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1047e037 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047e03a push ecx */
  push32((uint32_t)(ECX));
  /* 1047e03b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047e03e push edx */
  push32((uint32_t)(EDX));
  /* 1047e03f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e042 push eax */
  push32((uint32_t)(EAX));
  /* 1047e043 call 0x10481ea0 */
  push32(0x1047e048u); f_10481ea0();
  /* 1047e048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e04b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1047e04e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e051 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047e054 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e057 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e05a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1047e05d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e060 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e064 jl 0x1047e088 */
  if ((C.sf!=C.of)) goto L_1047e088;
  /* 1047e066 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e069 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047e06b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1047e06e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047e070 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047e076 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1047e079 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e07c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047e07e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e081 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e084 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047e086 jmp 0x1047e099 */
  goto L_1047e099;
L_1047e088:;
  /* 1047e088 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047e08b push edx */
  push32((uint32_t)(EDX));
  /* 1047e08c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047e08e call 0x10481c20 */
  push32(0x1047e093u); f_10481c20();
  /* 1047e093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e096 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1047e099:;
  /* 1047e099 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047e09c pop edi */
  EDI = (pop32());
  /* 1047e09d pop esi */
  ESI = (pop32());
  /* 1047e09e pop ebx */
  EBX = (pop32());
  /* 1047e09f mov esp, ebp */
  ESP = (EBP);
  /* 1047e0a1 pop ebp */
  EBP = (pop32());
  /* 1047e0a2 ret  */
  ESPCHK(0x1047dfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e0b0 @ 0x1047e0b0 (47 bytes, 17 insns) */
void f_1047e0b0(void) {
  FTRACE(0x1047e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e0b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e0b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1047e0ba jb 0x1047e0d0 */
  if (C.cf) goto L_1047e0d0;
L_1047e0bc:;
  /* 1047e0bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e0c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e0c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1047e0c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e0ce jae 0x1047e0bc */
  if (!C.cf) goto L_1047e0bc;
L_1047e0d0:;
  /* 1047e0d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e0d2 mov eax, esp */
  EAX = (ESP);
  /* 1047e0d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1047e0d6 mov esp, ecx */
  ESP = (ECX);
  /* 1047e0d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047e0da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047e0dd push eax */
  push32((uint32_t)(EAX));
  /* 1047e0de ret  */
  ESPCHK(0x1047e0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e0e0 @ 0x1047e0e0 (431 bytes, 151 insns) */
void f_1047e0e0(void) {
  FTRACE(0x1047e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e0e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e0e6 push esi */
  push32((uint32_t)(ESI));
  /* 1047e0e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e0eb je 0x1047e0f3 */
  if (C.zf) goto L_1047e0f3;
  /* 1047e0ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e0f1 jne 0x1047e0f8 */
  if (!C.zf) goto L_1047e0f8;
L_1047e0f3:;
  /* 1047e0f3 jmp 0x1047e2c8 */
  goto L_1047e2c8;
L_1047e0f8:;
  /* 1047e0f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e0fc je 0x1047e114 */
  if (C.zf) goto L_1047e114;
  /* 1047e0fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e102 je 0x1047e114 */
  if (C.zf) goto L_1047e114;
  /* 1047e104 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e108 je 0x1047e114 */
  if (C.zf) goto L_1047e114;
  /* 1047e10a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e10e jne 0x1047e1f1 */
  if (!C.zf) goto L_1047e1f1;
L_1047e114:;
  /* 1047e114 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e116 call 0x1047e910 */
  push32(0x1047e11bu); f_1047e910();
  /* 1047e11b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e11e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e122 je 0x1047e12a */
  if (C.zf) goto L_1047e12a;
  /* 1047e124 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e128 jne 0x1047e16f */
  if (!C.zf) goto L_1047e16f;
L_1047e12a:;
  /* 1047e12a cmp dword ptr [0x1002e5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e131 jne 0x1047e16f */
  if (!C.zf) goto L_1047e16f;
  /* 1047e133 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e135 push 0x10006310 */
  push32((uint32_t)(0x10006310u));
  /* 1047e13a call dword ptr [0x10030308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030308))), 0x1047e140u);
  /* 1047e140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e143 jne 0x1047e151 */
  if (!C.zf) goto L_1047e151;
  /* 1047e145 mov dword ptr [0x1002e5f4], 1 */
  w32((uint32_t)(0x1002e5f4), (0x1u));
  /* 1047e14f jmp 0x1047e16f */
  goto L_1047e16f;
L_1047e151:;
  /* 1047e151 call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x1047e157u);
  /* 1047e157 mov esi, eax */
  ESI = (EAX);
  /* 1047e159 call 0x10482df0 */
  push32(0x1047e15eu); f_10482df0();
  /* 1047e15e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1047e160 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e162 call 0x1047e9b0 */
  push32(0x1047e167u); f_1047e9b0();
  /* 1047e167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e16a jmp 0x1047e2c8 */
  goto L_1047e2c8;
L_1047e16f:;
  /* 1047e16f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e172 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047e175 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047e178 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e17b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047e17e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e182 ja 0x1047e1e2 */
  if ((!C.cf&&!C.zf)) goto L_1047e1e2;
  /* 1047e184 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047e187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047e189 mov dl, byte ptr [eax + 0x100062ef] */
  DL = (r8((uint32_t)(EAX + 0x100062ef)));
  /* 1047e18f jmp dword ptr [edx*4 + 0x100062db] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x100062db)))); return;
  /* 1047e196 mov ecx, dword ptr [0x1002e5e4] */
  ECX = (r32((uint32_t)(0x1002e5e4)));
  /* 1047e19c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047e19f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e1a2 mov dword ptr [0x1002e5e4], edx */
  w32((uint32_t)(0x1002e5e4), (EDX));
  /* 1047e1a8 jmp 0x1047e1e2 */
  goto L_1047e1e2;
  /* 1047e1aa mov eax, dword ptr [0x1002e5e8] */
  EAX = (r32((uint32_t)(0x1002e5e8)));
  /* 1047e1af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e1b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e1b5 mov dword ptr [0x1002e5e8], ecx */
  w32((uint32_t)(0x1002e5e8), (ECX));
  /* 1047e1bb jmp 0x1047e1e2 */
  goto L_1047e1e2;
  /* 1047e1bd mov edx, dword ptr [0x1002e5ec] */
  EDX = (r32((uint32_t)(0x1002e5ec)));
  /* 1047e1c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047e1c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e1c9 mov dword ptr [0x1002e5ec], eax */
  w32((uint32_t)(0x1002e5ec), (EAX));
  /* 1047e1ce jmp 0x1047e1e2 */
  goto L_1047e1e2;
  /* 1047e1d0 mov ecx, dword ptr [0x1002e5f0] */
  ECX = (r32((uint32_t)(0x1002e5f0)));
  /* 1047e1d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047e1d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e1dc mov dword ptr [0x1002e5f0], edx */
  w32((uint32_t)(0x1002e5f0), (EDX));
L_1047e1e2:;
  /* 1047e1e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e1e4 call 0x1047e9b0 */
  push32(0x1047e1e9u); f_1047e9b0();
  /* 1047e1e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e1ec jmp 0x1047e2c3 */
  goto L_1047e2c3;
L_1047e1f1:;
  /* 1047e1f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e1f5 je 0x1047e208 */
  if (C.zf) goto L_1047e208;
  /* 1047e1f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e1fb je 0x1047e208 */
  if (C.zf) goto L_1047e208;
  /* 1047e1fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e201 je 0x1047e208 */
  if (C.zf) goto L_1047e208;
  /* 1047e203 jmp 0x1047e2c8 */
  goto L_1047e2c8;
L_1047e208:;
  /* 1047e208 call 0x1047a950 */
  push32(0x1047e20du); f_1047a950();
  /* 1047e20d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047e210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e213 cmp dword ptr [eax + 0x50], 0x1002cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1002cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e21a jne 0x1047e265 */
  if (!C.zf) goto L_1047e265;
  /* 1047e21c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1047e221 push 0x10029e74 */
  push32((uint32_t)(0x10029e74u));
  /* 1047e226 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047e228 mov ecx, dword ptr [0x1002cc80] */
  ECX = (r32((uint32_t)(0x1002cc80)));
  /* 1047e22e push ecx */
  push32((uint32_t)(ECX));
  /* 1047e22f call 0x1047af10 */
  push32(0x1047e234u); f_1047af10();
  /* 1047e234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e23a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1047e23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e240 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e244 je 0x1047e263 */
  if (C.zf) goto L_1047e263;
  /* 1047e246 mov ecx, dword ptr [0x1002cc80] */
  ECX = (r32((uint32_t)(0x1002cc80)));
  /* 1047e24c push ecx */
  push32((uint32_t)(ECX));
  /* 1047e24d push 0x1002cc00 */
  push32((uint32_t)(0x1002cc00u));
  /* 1047e252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e255 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1047e258 push eax */
  push32((uint32_t)(EAX));
  /* 1047e259 call 0x104817f0 */
  push32(0x1047e25eu); f_104817f0();
  /* 1047e25e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e261 jmp 0x1047e265 */
  goto L_1047e265;
L_1047e263:;
  /* 1047e263 jmp 0x1047e2c8 */
  goto L_1047e2c8;
L_1047e265:;
  /* 1047e265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e268 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1047e26b push edx */
  push32((uint32_t)(EDX));
  /* 1047e26c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e26f push eax */
  push32((uint32_t)(EAX));
  /* 1047e270 call 0x1047e5f0 */
  push32(0x1047e275u); f_1047e5f0();
  /* 1047e275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e278 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047e27b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e27f jne 0x1047e283 */
  if (!C.zf) goto L_1047e283;
  /* 1047e281 jmp 0x1047e2c8 */
  goto L_1047e2c8;
L_1047e283:;
  /* 1047e283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e286 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1047e289 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1047e28c:;
  /* 1047e28c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e28f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047e292 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e295 jne 0x1047e2c3 */
  if (!C.zf) goto L_1047e2c3;
  /* 1047e297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e29a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e29d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1047e2a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e2a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e2a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047e2a9 mov edx, dword ptr [0x1002cc84] */
  EDX = (r32((uint32_t)(0x1002cc84)));
  /* 1047e2af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047e2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e2b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1047e2b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e2ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e2bd jb 0x1047e2c1 */
  if (C.cf) goto L_1047e2c1;
  /* 1047e2bf jmp 0x1047e2c3 */
  goto L_1047e2c3;
L_1047e2c1:;
  /* 1047e2c1 jmp 0x1047e28c */
  goto L_1047e28c;
L_1047e2c3:;
  /* 1047e2c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047e2c6 jmp 0x1047e2d6 */
  goto L_1047e2d6;
L_1047e2c8:;
  /* 1047e2c8 call 0x10482de0 */
  push32(0x1047e2cdu); f_10482de0();
  /* 1047e2cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1047e2d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1047e2d6:;
  /* 1047e2d6 pop esi */
  ESI = (pop32());
  /* 1047e2d7 mov esp, ebp */
  ESP = (EBP);
  /* 1047e2d9 pop ebp */
  EBP = (pop32());
  /* 1047e2da ret  */
  ESPCHK(0x1047e0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e310 @ 0x1047e310 (146 bytes, 45 insns) */
void f_1047e310(void) {
  FTRACE(0x1047e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e311 mov ebp, esp */
  EBP = (ESP);
  /* 1047e313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e316 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e318 call 0x1047e910 */
  push32(0x1047e31du); f_1047e910();
  /* 1047e31d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e320 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e324 jne 0x1047e33e */
  if (!C.zf) goto L_1047e33e;
  /* 1047e326 mov dword ptr [ebp - 8], 0x1002e5e4 */
  w32((uint32_t)(EBP + -0x8), (0x1002e5e4u));
  /* 1047e32d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e330 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047e332 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047e335 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1047e33c jmp 0x1047e354 */
  goto L_1047e354;
L_1047e33e:;
  /* 1047e33e mov dword ptr [ebp - 8], 0x1002e5e8 */
  w32((uint32_t)(EBP + -0x8), (0x1002e5e8u));
  /* 1047e345 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e348 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047e34a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e34d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1047e354:;
  /* 1047e354 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e358 jne 0x1047e368 */
  if (!C.zf) goto L_1047e368;
  /* 1047e35a push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e35c call 0x1047e9b0 */
  push32(0x1047e361u); f_1047e9b0();
  /* 1047e361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047e366 jmp 0x1047e39c */
  goto L_1047e39c;
L_1047e368:;
  /* 1047e368 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e36c je 0x1047e38d */
  if (C.zf) goto L_1047e38d;
  /* 1047e36e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e371 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1047e377 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e379 call 0x1047e9b0 */
  push32(0x1047e37eu); f_1047e9b0();
  /* 1047e37e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e384 push edx */
  push32((uint32_t)(EDX));
  /* 1047e385 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1047e388u);
  /* 1047e388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e38b jmp 0x1047e397 */
  goto L_1047e397;
L_1047e38d:;
  /* 1047e38d push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e38f call 0x1047e9b0 */
  push32(0x1047e394u); f_1047e9b0();
  /* 1047e394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e397:;
  /* 1047e397 mov eax, 1 */
  EAX = (0x1u);
L_1047e39c:;
  /* 1047e39c mov esp, ebp */
  ESP = (EBP);
  /* 1047e39e pop ebp */
  EBP = (pop32());
  /* 1047e39f ret 4 */
  ESPCHK(0x1047e310u, _esp0);
  ESP += 8; return;
}

/* FUN_1001e3b0 @ 0x1047e3b0 (68 bytes, 162 insns) */
void f_1047e3b0(void) {
  FTRACE(0x1047e3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e3b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e3b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1047e3bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e3c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1047e3c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047e3c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e3c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1047e3cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e3d0 ja 0x1047e47e */
  if ((!C.cf&&!C.zf)) goto L_1047e47e;
  /* 1047e3d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047e3d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047e3db mov dl, byte ptr [eax + 0x100065d2] */
  DL = (r8((uint32_t)(EAX + 0x100065d2)));
  /* 1047e3e1 jmp dword ptr [edx*4 + 0x100065ba] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x100065ba)))); return;
  /* 1047e3e8 mov dword ptr [ebp - 0x18], 0x1002e5e4 */
  w32((uint32_t)(EBP + -0x18), (0x1002e5e4u));
  /* 1047e3ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e3f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047e3f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047e3f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047e3fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e3fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e400 jmp 0x1047e486 */
  goto L_1047e486;
  /* 1047e405 mov dword ptr [ebp - 0x18], 0x1002e5e8 */
  w32((uint32_t)(EBP + -0x18), (0x1002e5e8u));
  /* 1047e40c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e40f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047e411 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047e414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047e417 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e41a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e41d jmp 0x1047e486 */
  goto L_1047e486;
  /* 1047e41f mov dword ptr [ebp - 0x18], 0x1002e5ec */
  w32((uint32_t)(EBP + -0x18), (0x1002e5ecu));
  /* 1047e426 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e429 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047e42b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047e42e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047e431 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e434 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e437 jmp 0x1047e486 */
  goto L_1047e486;
  /* 1047e439 mov dword ptr [ebp - 0x18], 0x1002e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1002e5f0u));
  /* 1047e440 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e443 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047e445 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047e448 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047e44b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e44e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047e451 jmp 0x1047e486 */
  goto L_1047e486;
  /* 1047e453 call 0x1047a950 */
  push32(0x1047e458u); f_1047a950();
  /* 1047e458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047e45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e45e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1047e461 push edx */
  push32((uint32_t)(EDX));
  /* 1047e462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e465 push eax */
  push32((uint32_t)(EAX));
  /* 1047e466 call 0x1047e5f0 */
  push32(0x1047e46bu); f_1047e5f0();
  /* 1047e46b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e46e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e471 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047e474 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e477 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047e479 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047e47c jmp 0x1047e486 */
  goto L_1047e486;
L_1047e47e:;
  /* 1047e47e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047e481 jmp 0x1047e5b6 */
  goto L_1047e5b6;
L_1047e486:;
  /* 1047e486 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e48a je 0x1047e496 */
  if (C.zf) goto L_1047e496;
  /* 1047e48c push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e48e call 0x1047e910 */
  push32(0x1047e493u); f_1047e910();
  /* 1047e493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e496:;
  /* 1047e496 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e49a jne 0x1047e4b3 */
  if (!C.zf) goto L_1047e4b3;
  /* 1047e49c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4a0 je 0x1047e4ac */
  if (C.zf) goto L_1047e4ac;
  /* 1047e4a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e4a4 call 0x1047e9b0 */
  push32(0x1047e4a9u); f_1047e9b0();
  /* 1047e4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e4ac:;
  /* 1047e4ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047e4ae jmp 0x1047e5b6 */
  goto L_1047e5b6;
L_1047e4b3:;
  /* 1047e4b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4b7 jne 0x1047e4d0 */
  if (!C.zf) goto L_1047e4d0;
  /* 1047e4b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4bd je 0x1047e4c9 */
  if (C.zf) goto L_1047e4c9;
  /* 1047e4bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e4c1 call 0x1047e9b0 */
  push32(0x1047e4c6u); f_1047e9b0();
  /* 1047e4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e4c9:;
  /* 1047e4c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1047e4cb call 0x1047a6d0 */
  push32(0x1047e4d0u); f_1047a6d0();
L_1047e4d0:;
  /* 1047e4d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4d4 je 0x1047e4e2 */
  if (C.zf) goto L_1047e4e2;
  /* 1047e4d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4da je 0x1047e4e2 */
  if (C.zf) goto L_1047e4e2;
  /* 1047e4dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4e0 jne 0x1047e50e */
  if (!C.zf) goto L_1047e50e;
L_1047e4e2:;
  /* 1047e4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e4e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1047e4e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1047e4eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e4ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1047e4f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e4f9 jne 0x1047e50e */
  if (!C.zf) goto L_1047e50e;
  /* 1047e4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e4fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1047e501 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047e504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e507 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1047e50e:;
  /* 1047e50e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e512 jne 0x1047e550 */
  if (!C.zf) goto L_1047e550;
  /* 1047e514 mov eax, dword ptr [0x1002cc78] */
  EAX = (r32((uint32_t)(0x1002cc78)));
  /* 1047e519 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047e51c jmp 0x1047e527 */
  goto L_1047e527;
L_1047e51e:;
  /* 1047e51e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047e521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e524 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1047e527:;
  /* 1047e527 mov edx, dword ptr [0x1002cc78] */
  EDX = (r32((uint32_t)(0x1002cc78)));
  /* 1047e52d add edx, dword ptr [0x1002cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e533 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e536 jge 0x1047e54e */
  if ((C.sf==C.of)) goto L_1047e54e;
  /* 1047e538 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047e53b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047e53e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e541 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1047e544 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1047e54c jmp 0x1047e51e */
  goto L_1047e51e;
L_1047e54e:;
  /* 1047e54e jmp 0x1047e559 */
  goto L_1047e559;
L_1047e550:;
  /* 1047e550 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047e553 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1047e559:;
  /* 1047e559 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e55d je 0x1047e569 */
  if (C.zf) goto L_1047e569;
  /* 1047e55f push 1 */
  push32((uint32_t)(0x1u));
  /* 1047e561 call 0x1047e9b0 */
  push32(0x1047e566u); f_1047e9b0();
  /* 1047e566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e569:;
  /* 1047e569 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e56d jne 0x1047e580 */
  if (!C.zf) goto L_1047e580;
  /* 1047e56f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e572 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1047e575 push edx */
  push32((uint32_t)(EDX));
  /* 1047e576 push 8 */
  push32((uint32_t)(0x8u));
  /* 1047e578 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1047e57bu);
  /* 1047e57b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e57e jmp 0x1047e58a */
  goto L_1047e58a;
L_1047e580:;
  /* 1047e580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e583 push eax */
  push32((uint32_t)(EAX));
  /* 1047e584 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1047e587u);
  /* 1047e587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e58a:;
  /* 1047e58a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e58e je 0x1047e59c */
  if (C.zf) goto L_1047e59c;
  /* 1047e590 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e594 je 0x1047e59c */
  if (C.zf) goto L_1047e59c;
  /* 1047e596 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e59a jne 0x1047e5b4 */
  if (!C.zf) goto L_1047e5b4;
L_1047e59c:;
  /* 1047e59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e59f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047e5a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1047e5a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e5a9 jne 0x1047e5b4 */
  if (!C.zf) goto L_1047e5b4;
  /* 1047e5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e5ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e5b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1047e5b4:;
  /* 1047e5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047e5b6:;
  /* 1047e5b6 mov esp, ebp */
  ESP = (EBP);
  /* 1047e5b8 pop ebp */
  EBP = (pop32());
  /* 1047e5b9 ret  */
  ESPCHK(0x1047e3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e5f0 @ 0x1047e5f0 (91 bytes, 35 insns) */
void f_1047e5f0(void) {
  FTRACE(0x1047e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e5f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e5f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047e5fa:;
  /* 1047e5fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e5fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047e600 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e603 je 0x1047e623 */
  if (C.zf) goto L_1047e623;
  /* 1047e605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e608 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e60b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047e60e mov ecx, dword ptr [0x1002cc84] */
  ECX = (r32((uint32_t)(0x1002cc84)));
  /* 1047e614 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047e617 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e61a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e61c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e61f jae 0x1047e623 */
  if (!C.cf) goto L_1047e623;
  /* 1047e621 jmp 0x1047e5fa */
  goto L_1047e5fa;
L_1047e623:;
  /* 1047e623 mov eax, dword ptr [0x1002cc84] */
  EAX = (r32((uint32_t)(0x1002cc84)));
  /* 1047e628 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047e62b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e62e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e630 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e633 jae 0x1047e645 */
  if (!C.cf) goto L_1047e645;
  /* 1047e635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e638 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047e63b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e63e jne 0x1047e645 */
  if (!C.zf) goto L_1047e645;
  /* 1047e640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e643 jmp 0x1047e647 */
  goto L_1047e647;
L_1047e645:;
  /* 1047e645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047e647:;
  /* 1047e647 mov esp, ebp */
  ESP = (EBP);
  /* 1047e649 pop ebp */
  EBP = (pop32());
  /* 1047e64a ret  */
  ESPCHK(0x1047e5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e650 @ 0x1047e650 (13 bytes, 6 insns) */
void f_1047e650(void) {
  FTRACE(0x1047e650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e650 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e651 mov ebp, esp */
  EBP = (ESP);
  /* 1047e653 call 0x1047a950 */
  push32(0x1047e658u); f_1047a950();
  /* 1047e658 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e65b pop ebp */
  EBP = (pop32());
  /* 1047e65c ret  */
  ESPCHK(0x1047e650u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e660 @ 0x1047e660 (13 bytes, 6 insns) */
void f_1047e660(void) {
  FTRACE(0x1047e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e660 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e661 mov ebp, esp */
  EBP = (ESP);
  /* 1047e663 call 0x1047a950 */
  push32(0x1047e668u); f_1047a950();
  /* 1047e668 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e66b pop ebp */
  EBP = (pop32());
  /* 1047e66c ret  */
  ESPCHK(0x1047e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e670 @ 0x1047e670 (187 bytes, 54 insns) */
void f_1047e670(void) {
  FTRACE(0x1047e670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e670 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e671 mov ebp, esp */
  EBP = (ESP);
  /* 1047e673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e676 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047e67d cmp dword ptr [0x1002e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e684 jne 0x1047e6e3 */
  if (!C.zf) goto L_1047e6e3;
  /* 1047e686 push 0x100292a0 */
  push32((uint32_t)(0x100292a0u));
  /* 1047e68b call dword ptr [0x10030290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030290))), 0x1047e691u);
  /* 1047e691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047e694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e698 je 0x1047e6b7 */
  if (C.zf) goto L_1047e6b7;
  /* 1047e69a push 0x10029ea4 */
  push32((uint32_t)(0x10029ea4u));
  /* 1047e69f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e6a2 push eax */
  push32((uint32_t)(EAX));
  /* 1047e6a3 call dword ptr [0x1003028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003028c))), 0x1047e6a9u);
  /* 1047e6a9 mov dword ptr [0x1002e5f8], eax */
  w32((uint32_t)(0x1002e5f8), (EAX));
  /* 1047e6ae cmp dword ptr [0x1002e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e6b5 jne 0x1047e6bb */
  if (!C.zf) goto L_1047e6bb;
L_1047e6b7:;
  /* 1047e6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047e6b9 jmp 0x1047e727 */
  goto L_1047e727;
L_1047e6bb:;
  /* 1047e6bb push 0x10029e94 */
  push32((uint32_t)(0x10029e94u));
  /* 1047e6c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e6c4 call dword ptr [0x1003028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003028c))), 0x1047e6cau);
  /* 1047e6ca mov dword ptr [0x1002e5fc], eax */
  w32((uint32_t)(0x1002e5fc), (EAX));
  /* 1047e6cf push 0x10029e80 */
  push32((uint32_t)(0x10029e80u));
  /* 1047e6d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047e6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1047e6d8 call dword ptr [0x1003028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003028c))), 0x1047e6deu);
  /* 1047e6de mov dword ptr [0x1002e600], eax */
  w32((uint32_t)(0x1002e600), (EAX));
L_1047e6e3:;
  /* 1047e6e3 cmp dword ptr [0x1002e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e6ea je 0x1047e6f5 */
  if (C.zf) goto L_1047e6f5;
  /* 1047e6ec call dword ptr [0x1002e5fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e5fc))), 0x1047e6f2u);
  /* 1047e6f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047e6f5:;
  /* 1047e6f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e6f9 je 0x1047e711 */
  if (C.zf) goto L_1047e711;
  /* 1047e6fb cmp dword ptr [0x1002e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e702 je 0x1047e711 */
  if (C.zf) goto L_1047e711;
  /* 1047e704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e707 push eax */
  push32((uint32_t)(EAX));
  /* 1047e708 call dword ptr [0x1002e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e600))), 0x1047e70eu);
  /* 1047e70e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047e711:;
  /* 1047e711 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047e714 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e715 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047e718 push edx */
  push32((uint32_t)(EDX));
  /* 1047e719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e71c push eax */
  push32((uint32_t)(EAX));
  /* 1047e71d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e720 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e721 call dword ptr [0x1002e5f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e5f8))), 0x1047e727u);
L_1047e727:;
  /* 1047e727 mov esp, ebp */
  ESP = (EBP);
  /* 1047e729 pop ebp */
  EBP = (pop32());
  /* 1047e72a ret  */
  ESPCHK(0x1047e670u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1047e730 (254 bytes, 109 insns) */
void f_1047e730(void) {
  FTRACE(0x1047e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e730 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1047e734 push edi */
  push32((uint32_t)(EDI));
  /* 1047e735 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047e737 je 0x1047e7b3 */
  if (C.zf) goto L_1047e7b3;
  /* 1047e739 push esi */
  push32((uint32_t)(ESI));
  /* 1047e73a push ebx */
  push32((uint32_t)(EBX));
  /* 1047e73b mov ebx, ecx */
  EBX = (ECX);
  /* 1047e73d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1047e741 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1047e747 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1047e74b jne 0x1047e754 */
  if (!C.zf) goto L_1047e754;
  /* 1047e74d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1047e750 jne 0x1047e7c1 */
  if (!C.zf) goto L_1047e7c1;
  /* 1047e752 jmp 0x1047e775 */
  goto L_1047e775;
L_1047e754:;
  /* 1047e754 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1047e756 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1047e757 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047e759 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047e75a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047e75b je 0x1047e782 */
  if (C.zf) goto L_1047e782;
  /* 1047e75d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047e75f je 0x1047e78a */
  if (C.zf) goto L_1047e78a;
  /* 1047e761 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1047e767 jne 0x1047e754 */
  if (!C.zf) goto L_1047e754;
  /* 1047e769 mov ebx, ecx */
  EBX = (ECX);
  /* 1047e76b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1047e76e jne 0x1047e7c1 */
  if (!C.zf) goto L_1047e7c1;
L_1047e770:;
  /* 1047e770 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1047e773 je 0x1047e782 */
  if (C.zf) goto L_1047e782;
L_1047e775:;
  /* 1047e775 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1047e777 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1047e778 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047e77a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047e77b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1047e77d je 0x1047e7ae */
  if (C.zf) goto L_1047e7ae;
  /* 1047e77f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1047e780 jne 0x1047e775 */
  if (!C.zf) goto L_1047e775;
L_1047e782:;
  /* 1047e782 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1047e786 pop ebx */
  EBX = (pop32());
  /* 1047e787 pop esi */
  ESI = (pop32());
  /* 1047e788 pop edi */
  EDI = (pop32());
  /* 1047e789 ret  */
  ESPCHK(0x1047e730u, _esp0);
  ESP += 4; return;
L_1047e78a:;
  /* 1047e78a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1047e790 je 0x1047e7a4 */
  if (C.zf) goto L_1047e7a4;
L_1047e792:;
  /* 1047e792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047e794 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047e795 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047e796 je 0x1047e826 */
  if (C.zf) goto L_1047e826;
  /* 1047e79c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1047e7a2 jne 0x1047e792 */
  if (!C.zf) goto L_1047e792;
L_1047e7a4:;
  /* 1047e7a4 mov ebx, ecx */
  EBX = (ECX);
  /* 1047e7a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1047e7a9 jne 0x1047e817 */
  if (!C.zf) goto L_1047e817;
L_1047e7ab:;
  /* 1047e7ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047e7ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1047e7ae:;
  /* 1047e7ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1047e7af jne 0x1047e7ab */
  if (!C.zf) goto L_1047e7ab;
  /* 1047e7b1 pop ebx */
  EBX = (pop32());
  /* 1047e7b2 pop esi */
  ESI = (pop32());
L_1047e7b3:;
  /* 1047e7b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047e7b7 pop edi */
  EDI = (pop32());
  /* 1047e7b8 ret  */
  ESPCHK(0x1047e730u, _esp0);
  ESP += 4; return;
L_1047e7b9:;
  /* 1047e7b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047e7bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e7be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047e7bf je 0x1047e770 */
  if (C.zf) goto L_1047e770;
L_1047e7c1:;
  /* 1047e7c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1047e7c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1047e7c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e7ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047e7cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047e7cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1047e7d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e7d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1047e7d9 je 0x1047e7b9 */
  if (C.zf) goto L_1047e7b9;
  /* 1047e7db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1047e7dd je 0x1047e80b */
  if (C.zf) goto L_1047e80b;
  /* 1047e7df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1047e7e1 je 0x1047e801 */
  if (C.zf) goto L_1047e801;
  /* 1047e7e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1047e7e9 je 0x1047e7f7 */
  if (C.zf) goto L_1047e7f7;
  /* 1047e7eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1047e7f1 jne 0x1047e7b9 */
  if (!C.zf) goto L_1047e7b9;
  /* 1047e7f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047e7f5 jmp 0x1047e80f */
  goto L_1047e80f;
L_1047e7f7:;
  /* 1047e7f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047e7fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047e7ff jmp 0x1047e80f */
  goto L_1047e80f;
L_1047e801:;
  /* 1047e801 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047e807 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1047e809 jmp 0x1047e80f */
  goto L_1047e80f;
L_1047e80b:;
  /* 1047e80b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047e80d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1047e80f:;
  /* 1047e80f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047e814 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047e815 je 0x1047e821 */
  if (C.zf) goto L_1047e821;
L_1047e817:;
  /* 1047e817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047e819:;
  /* 1047e819 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1047e81b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e81e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047e81f jne 0x1047e819 */
  if (!C.zf) goto L_1047e819;
L_1047e821:;
  /* 1047e821 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1047e824 jne 0x1047e7ab */
  if (!C.zf) goto L_1047e7ab;
L_1047e826:;
  /* 1047e826 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1047e82a pop ebx */
  EBX = (pop32());
  /* 1047e82b pop esi */
  ESI = (pop32());
  /* 1047e82c pop edi */
  EDI = (pop32());
  /* 1047e82d ret  */
  ESPCHK(0x1047e730u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e830 @ 0x1047e830 (55 bytes, 16 insns) */
void f_1047e830(void) {
  FTRACE(0x1047e830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e830 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e831 mov ebp, esp */
  EBP = (ESP);
  /* 1047e833 mov eax, dword ptr [0x1002cb84] */
  EAX = (r32((uint32_t)(0x1002cb84)));
  /* 1047e838 push eax */
  push32((uint32_t)(EAX));
  /* 1047e839 call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x1047e83fu);
  /* 1047e83f mov ecx, dword ptr [0x1002cb74] */
  ECX = (r32((uint32_t)(0x1002cb74)));
  /* 1047e845 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e846 call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x1047e84cu);
  /* 1047e84c mov edx, dword ptr [0x1002cb64] */
  EDX = (r32((uint32_t)(0x1002cb64)));
  /* 1047e852 push edx */
  push32((uint32_t)(EDX));
  /* 1047e853 call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x1047e859u);
  /* 1047e859 mov eax, dword ptr [0x1002cb44] */
  EAX = (r32((uint32_t)(0x1002cb44)));
  /* 1047e85e push eax */
  push32((uint32_t)(EAX));
  /* 1047e85f call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x1047e865u);
  /* 1047e865 pop ebp */
  EBP = (pop32());
  /* 1047e866 ret  */
  ESPCHK(0x1047e830u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e870 @ 0x1047e870 (159 bytes, 47 insns) */
void f_1047e870(void) {
  FTRACE(0x1047e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e871 mov ebp, esp */
  EBP = (ESP);
  /* 1047e873 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047e87b jmp 0x1047e886 */
  goto L_1047e886;
L_1047e87d:;
  /* 1047e87d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e883 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047e886:;
  /* 1047e886 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e88a jge 0x1047e8d9 */
  if ((C.sf==C.of)) goto L_1047e8d9;
  /* 1047e88c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e88f cmp dword ptr [ecx*4 + 0x1002cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1002cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e897 je 0x1047e8d7 */
  if (C.zf) goto L_1047e8d7;
  /* 1047e899 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e89d je 0x1047e8d7 */
  if (C.zf) goto L_1047e8d7;
  /* 1047e89f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e8a3 je 0x1047e8d7 */
  if (C.zf) goto L_1047e8d7;
  /* 1047e8a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e8a9 je 0x1047e8d7 */
  if (C.zf) goto L_1047e8d7;
  /* 1047e8ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e8af je 0x1047e8d7 */
  if (C.zf) goto L_1047e8d7;
  /* 1047e8b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e8b4 mov eax, dword ptr [edx*4 + 0x1002cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002cb40)));
  /* 1047e8bb push eax */
  push32((uint32_t)(EAX));
  /* 1047e8bc call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047e8c2u);
  /* 1047e8c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047e8c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e8c7 mov edx, dword ptr [ecx*4 + 0x1002cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002cb40)));
  /* 1047e8ce push edx */
  push32((uint32_t)(EDX));
  /* 1047e8cf call 0x1047b9a0 */
  push32(0x1047e8d4u); f_1047b9a0();
  /* 1047e8d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e8d7:;
  /* 1047e8d7 jmp 0x1047e87d */
  goto L_1047e87d;
L_1047e8d9:;
  /* 1047e8d9 mov eax, dword ptr [0x1002cb64] */
  EAX = (r32((uint32_t)(0x1002cb64)));
  /* 1047e8de push eax */
  push32((uint32_t)(EAX));
  /* 1047e8df call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047e8e5u);
  /* 1047e8e5 mov ecx, dword ptr [0x1002cb74] */
  ECX = (r32((uint32_t)(0x1002cb74)));
  /* 1047e8eb push ecx */
  push32((uint32_t)(ECX));
  /* 1047e8ec call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047e8f2u);
  /* 1047e8f2 mov edx, dword ptr [0x1002cb84] */
  EDX = (r32((uint32_t)(0x1002cb84)));
  /* 1047e8f8 push edx */
  push32((uint32_t)(EDX));
  /* 1047e8f9 call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047e8ffu);
  /* 1047e8ff mov eax, dword ptr [0x1002cb44] */
  EAX = (r32((uint32_t)(0x1002cb44)));
  /* 1047e904 push eax */
  push32((uint32_t)(EAX));
  /* 1047e905 call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047e90bu);
  /* 1047e90b mov esp, ebp */
  ESP = (EBP);
  /* 1047e90d pop ebp */
  EBP = (pop32());
  /* 1047e90e ret  */
  ESPCHK(0x1047e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e910 @ 0x1047e910 (151 bytes, 46 insns) */
void f_1047e910(void) {
  FTRACE(0x1047e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e910 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e911 mov ebp, esp */
  EBP = (ESP);
  /* 1047e913 push ecx */
  push32((uint32_t)(ECX));
  /* 1047e914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e917 cmp dword ptr [eax*4 + 0x1002cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1002cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e91f jne 0x1047e992 */
  if (!C.zf) goto L_1047e992;
  /* 1047e921 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1047e926 push 0x10029eb0 */
  push32((uint32_t)(0x10029eb0u));
  /* 1047e92b push 2 */
  push32((uint32_t)(0x2u));
  /* 1047e92d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1047e92f call 0x1047af10 */
  push32(0x1047e934u); f_1047af10();
  /* 1047e934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e937 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047e93a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e93e jne 0x1047e94a */
  if (!C.zf) goto L_1047e94a;
  /* 1047e940 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1047e942 call 0x10479e80 */
  push32(0x1047e947u); f_10479e80();
  /* 1047e947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e94a:;
  /* 1047e94a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1047e94c call 0x1047e910 */
  push32(0x1047e951u); f_1047e910();
  /* 1047e951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047e954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e957 cmp dword ptr [ecx*4 + 0x1002cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1002cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047e95f jne 0x1047e97a */
  if (!C.zf) goto L_1047e97a;
  /* 1047e961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e964 push edx */
  push32((uint32_t)(EDX));
  /* 1047e965 call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x1047e96bu);
  /* 1047e96b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e96e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e971 mov dword ptr [eax*4 + 0x1002cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1002cb40), (ECX));
  /* 1047e978 jmp 0x1047e988 */
  goto L_1047e988;
L_1047e97a:;
  /* 1047e97a push 2 */
  push32((uint32_t)(0x2u));
  /* 1047e97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047e97f push edx */
  push32((uint32_t)(EDX));
  /* 1047e980 call 0x1047b9a0 */
  push32(0x1047e985u); f_1047b9a0();
  /* 1047e985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e988:;
  /* 1047e988 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1047e98a call 0x1047e9b0 */
  push32(0x1047e98fu); f_1047e9b0();
  /* 1047e98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047e992:;
  /* 1047e992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e995 mov ecx, dword ptr [eax*4 + 0x1002cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002cb40)));
  /* 1047e99c push ecx */
  push32((uint32_t)(ECX));
  /* 1047e99d call dword ptr [0x10030310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030310))), 0x1047e9a3u);
  /* 1047e9a3 mov esp, ebp */
  ESP = (EBP);
  /* 1047e9a5 pop ebp */
  EBP = (pop32());
  /* 1047e9a6 ret  */
  ESPCHK(0x1047e910u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e9b0 @ 0x1047e9b0 (22 bytes, 8 insns) */
void f_1047e9b0(void) {
  FTRACE(0x1047e9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e9b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e9b6 mov ecx, dword ptr [eax*4 + 0x1002cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002cb40)));
  /* 1047e9bd push ecx */
  push32((uint32_t)(ECX));
  /* 1047e9be call dword ptr [0x10030314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030314))), 0x1047e9c4u);
  /* 1047e9c4 pop ebp */
  EBP = (pop32());
  /* 1047e9c5 ret  */
  ESPCHK(0x1047e9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e9d0 @ 0x1047e9d0 (26 bytes, 10 insns) */
void f_1047e9d0(void) {
  FTRACE(0x1047e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047e9d6 push eax */
  push32((uint32_t)(EAX));
  /* 1047e9d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047e9d9 call dword ptr [0x10030318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030318))), 0x1047e9dfu);
  /* 1047e9df push 0xff */
  push32((uint32_t)(0xffu));
  /* 1047e9e4 call dword ptr [0x1003029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003029c))), 0x1047e9eau);
  /* 1047e9ea pop ebp */
  EBP = (pop32());
  /* 1047e9eb ret  */
  ESPCHK(0x1047e9d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1047e9f0 (446 bytes, 130 insns) */
void f_1047e9f0(void) {
  FTRACE(0x1047e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047e9f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047e9f6 call 0x1047a950 */
  push32(0x1047e9fbu); f_1047a950();
  /* 1047e9fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047e9fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ea01 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1047ea04 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ea05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ea08 push edx */
  push32((uint32_t)(EDX));
  /* 1047ea09 call 0x1047ebb0 */
  push32(0x1047ea0eu); f_1047ebb0();
  /* 1047ea0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ea11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047ea14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ea18 je 0x1047ea23 */
  if (C.zf) goto L_1047ea23;
  /* 1047ea1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ea21 jne 0x1047ea32 */
  if (!C.zf) goto L_1047ea32;
L_1047ea23:;
  /* 1047ea23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ea27 call dword ptr [0x100302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302e0))), 0x1047ea2du);
  /* 1047ea2d jmp 0x1047ebaa */
  goto L_1047ebaa;
L_1047ea32:;
  /* 1047ea32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea35 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ea39 jne 0x1047ea4f */
  if (!C.zf) goto L_1047ea4f;
  /* 1047ea3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea3e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1047ea45 mov eax, 1 */
  EAX = (0x1u);
  /* 1047ea4a jmp 0x1047ebaa */
  goto L_1047ebaa;
L_1047ea4f:;
  /* 1047ea4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea52 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ea56 jne 0x1047ea60 */
  if (!C.zf) goto L_1047ea60;
  /* 1047ea58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047ea5b jmp 0x1047ebaa */
  goto L_1047ebaa;
L_1047ea60:;
  /* 1047ea60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea63 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1047ea66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ea69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ea6c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1047ea6f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1047ea72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ea75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ea78 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1047ea7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ea7e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ea82 jne 0x1047eb87 */
  if (!C.zf) goto L_1047eb87;
  /* 1047ea88 mov eax, dword ptr [0x1002cc78] */
  EAX = (r32((uint32_t)(0x1002cc78)));
  /* 1047ea8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1047ea90 jmp 0x1047ea9b */
  goto L_1047ea9b;
L_1047ea92:;
  /* 1047ea92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047ea95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ea98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1047ea9b:;
  /* 1047ea9b mov edx, dword ptr [0x1002cc78] */
  EDX = (r32((uint32_t)(0x1002cc78)));
  /* 1047eaa1 add edx, dword ptr [0x1002cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eaa7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eaaa jge 0x1047eac2 */
  if ((C.sf==C.of)) goto L_1047eac2;
  /* 1047eaac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047eaaf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047eab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eab5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1047eab8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1047eac0 jmp 0x1047ea92 */
  goto L_1047ea92;
L_1047eac2:;
  /* 1047eac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eac5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1047eac8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047eacb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eace cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ead4 jne 0x1047eae5 */
  if (!C.zf) goto L_1047eae5;
  /* 1047ead6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ead9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1047eae0 jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eae5:;
  /* 1047eae5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eae8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eaee jne 0x1047eafc */
  if (!C.zf) goto L_1047eafc;
  /* 1047eaf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eaf3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1047eafa jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eafc:;
  /* 1047eafc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eaff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eb05 jne 0x1047eb13 */
  if (!C.zf) goto L_1047eb13;
  /* 1047eb07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb0a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1047eb11 jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eb13:;
  /* 1047eb13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb16 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eb1c jne 0x1047eb2a */
  if (!C.zf) goto L_1047eb2a;
  /* 1047eb1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb21 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1047eb28 jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eb2a:;
  /* 1047eb2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb2d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eb33 jne 0x1047eb41 */
  if (!C.zf) goto L_1047eb41;
  /* 1047eb35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb38 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1047eb3f jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eb41:;
  /* 1047eb41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb44 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eb4a jne 0x1047eb58 */
  if (!C.zf) goto L_1047eb58;
  /* 1047eb4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb4f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1047eb56 jmp 0x1047eb6d */
  goto L_1047eb6d;
L_1047eb58:;
  /* 1047eb58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb5b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eb61 jne 0x1047eb6d */
  if (!C.zf) goto L_1047eb6d;
  /* 1047eb63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb66 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1047eb6d:;
  /* 1047eb6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb70 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1047eb73 push edx */
  push32((uint32_t)(EDX));
  /* 1047eb74 push 8 */
  push32((uint32_t)(0x8u));
  /* 1047eb76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1047eb79u);
  /* 1047eb79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eb7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eb7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047eb82 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1047eb85 jmp 0x1047eb9e */
  goto L_1047eb9e;
L_1047eb87:;
  /* 1047eb87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb8a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1047eb91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047eb94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047eb97 push ecx */
  push32((uint32_t)(ECX));
  /* 1047eb98 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1047eb9bu);
  /* 1047eb9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047eb9e:;
  /* 1047eb9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047eba1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047eba4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1047eba7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1047ebaa:;
  /* 1047ebaa mov esp, ebp */
  ESP = (EBP);
  /* 1047ebac pop ebp */
  EBP = (pop32());
  /* 1047ebad ret  */
  ESPCHK(0x1047e9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ebb0 @ 0x1047ebb0 (89 bytes, 35 insns) */
void f_1047ebb0(void) {
  FTRACE(0x1047ebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ebb1 mov ebp, esp */
  EBP = (ESP);
  /* 1047ebb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ebb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ebb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047ebba:;
  /* 1047ebba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ebbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047ebbf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ebc2 je 0x1047ebe2 */
  if (C.zf) goto L_1047ebe2;
  /* 1047ebc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ebc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ebca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ebcd mov ecx, dword ptr [0x1002cc84] */
  ECX = (r32((uint32_t)(0x1002cc84)));
  /* 1047ebd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ebd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ebd9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ebdb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ebde jae 0x1047ebe2 */
  if (!C.cf) goto L_1047ebe2;
  /* 1047ebe0 jmp 0x1047ebba */
  goto L_1047ebba;
L_1047ebe2:;
  /* 1047ebe2 mov eax, dword ptr [0x1002cc84] */
  EAX = (r32((uint32_t)(0x1002cc84)));
  /* 1047ebe7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ebea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ebed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ebef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ebf2 jae 0x1047ebfe */
  if (!C.cf) goto L_1047ebfe;
  /* 1047ebf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ebf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047ebf9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ebfc je 0x1047ec02 */
  if (C.zf) goto L_1047ec02;
L_1047ebfe:;
  /* 1047ebfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ec00 jmp 0x1047ec05 */
  goto L_1047ec05;
L_1047ec02:;
  /* 1047ec02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1047ec05:;
  /* 1047ec05 mov esp, ebp */
  ESP = (EBP);
  /* 1047ec07 pop ebp */
  EBP = (pop32());
  /* 1047ec08 ret  */
  ESPCHK(0x1047ebb0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1047ec10 (48 bytes, 17 insns) */
void f_1047ec10(void) {
  FTRACE(0x1047ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ec11 mov ebp, esp */
  EBP = (ESP);
  /* 1047ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ec14 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ec16 call 0x1047e910 */
  push32(0x1047ec1bu); f_1047e910();
  /* 1047ec1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ec1e mov eax, dword ptr [0x1002e66c] */
  EAX = (r32((uint32_t)(0x1002e66c)));
  /* 1047ec23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ec26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ec29 mov dword ptr [0x1002e66c], ecx */
  w32((uint32_t)(0x1002e66c), (ECX));
  /* 1047ec2f push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ec31 call 0x1047e9b0 */
  push32(0x1047ec36u); f_1047e9b0();
  /* 1047ec36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ec39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ec3c mov esp, ebp */
  ESP = (EBP);
  /* 1047ec3e pop ebp */
  EBP = (pop32());
  /* 1047ec3f ret  */
  ESPCHK(0x1047ec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec40 @ 0x1047ec40 (10 bytes, 5 insns) */
void f_1047ec40(void) {
  FTRACE(0x1047ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ec41 mov ebp, esp */
  EBP = (ESP);
  /* 1047ec43 mov eax, dword ptr [0x1002e66c] */
  EAX = (r32((uint32_t)(0x1002e66c)));
  /* 1047ec48 pop ebp */
  EBP = (pop32());
  /* 1047ec49 ret  */
  ESPCHK(0x1047ec40u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1047ec50 (45 bytes, 19 insns) */
void f_1047ec50(void) {
  FTRACE(0x1047ec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ec50 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ec51 mov ebp, esp */
  EBP = (ESP);
  /* 1047ec53 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ec54 mov eax, dword ptr [0x1002e66c] */
  EAX = (r32((uint32_t)(0x1002e66c)));
  /* 1047ec59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ec5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ec60 je 0x1047ec70 */
  if (C.zf) goto L_1047ec70;
  /* 1047ec62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ec65 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ec66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1047ec69u);
  /* 1047ec69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ec6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ec6e jne 0x1047ec74 */
  if (!C.zf) goto L_1047ec74;
L_1047ec70:;
  /* 1047ec70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ec72 jmp 0x1047ec79 */
  goto L_1047ec79;
L_1047ec74:;
  /* 1047ec74 mov eax, 1 */
  EAX = (0x1u);
L_1047ec79:;
  /* 1047ec79 mov esp, ebp */
  ESP = (EBP);
  /* 1047ec7b pop ebp */
  EBP = (pop32());
  /* 1047ec7c ret  */
  ESPCHK(0x1047ec50u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1047ec80 (88 bytes, 40 insns) */
void f_1047ec80(void) {
  FTRACE(0x1047ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ec80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1047ec84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047ec88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047ec8a je 0x1047ecd3 */
  if (C.zf) goto L_1047ecd3;
  /* 1047ec8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ec8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1047ec92 push edi */
  push32((uint32_t)(EDI));
  /* 1047ec93 mov edi, ecx */
  EDI = (ECX);
  /* 1047ec95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ec98 jb 0x1047ecc7 */
  if (C.cf) goto L_1047ecc7;
  /* 1047ec9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047ec9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1047ec9f je 0x1047eca9 */
  if (C.zf) goto L_1047eca9;
  /* 1047eca1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1047eca3:;
  /* 1047eca3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047eca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047eca6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047eca7 jne 0x1047eca3 */
  if (!C.zf) goto L_1047eca3;
L_1047eca9:;
  /* 1047eca9 mov ecx, eax */
  ECX = (EAX);
  /* 1047ecab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1047ecae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ecb0 mov ecx, eax */
  ECX = (EAX);
  /* 1047ecb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1047ecb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ecb7 mov ecx, edx */
  ECX = (EDX);
  /* 1047ecb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1047ecbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1047ecbf je 0x1047ecc7 */
  if (C.zf) goto L_1047ecc7;
  /* 1047ecc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1047ecc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047ecc5 je 0x1047eccd */
  if (C.zf) goto L_1047eccd;
L_1047ecc7:;
  /* 1047ecc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1047ecc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047ecca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1047eccb jne 0x1047ecc7 */
  if (!C.zf) goto L_1047ecc7;
L_1047eccd:;
  /* 1047eccd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1047ecd1 pop edi */
  EDI = (pop32());
  /* 1047ecd2 ret  */
  ESPCHK(0x1047ec80u, _esp0);
  ESP += 4; return;
L_1047ecd3:;
  /* 1047ecd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1047ecd7 ret  */
  ESPCHK(0x1047ec80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ece0 @ 0x1047ece0 (23 bytes, 10 insns) */
void f_1047ece0(void) {
  FTRACE(0x1047ece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ece0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ece1 mov ebp, esp */
  EBP = (ESP);
  /* 1047ece3 mov eax, dword ptr [0x1002e668] */
  EAX = (r32((uint32_t)(0x1002e668)));
  /* 1047ece8 push eax */
  push32((uint32_t)(EAX));
  /* 1047ece9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ecec push ecx */
  push32((uint32_t)(ECX));
  /* 1047eced call 0x1047ed00 */
  push32(0x1047ecf2u); f_1047ed00();
  /* 1047ecf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ecf5 pop ebp */
  EBP = (pop32());
  /* 1047ecf6 ret  */
  ESPCHK(0x1047ece0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1047ed00 (87 bytes, 34 insns) */
void f_1047ed00(void) {
  FTRACE(0x1047ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ed01 mov ebp, esp */
  EBP = (ESP);
  /* 1047ed03 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ed04 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed08 jbe 0x1047ed0e */
  if ((C.cf||C.zf)) goto L_1047ed0e;
  /* 1047ed0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ed0c jmp 0x1047ed53 */
  goto L_1047ed53;
L_1047ed0e:;
  /* 1047ed0e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed12 ja 0x1047ed25 */
  if ((!C.cf&&!C.zf)) goto L_1047ed25;
  /* 1047ed14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ed17 push eax */
  push32((uint32_t)(EAX));
  /* 1047ed18 call 0x1047ed60 */
  push32(0x1047ed1du); f_1047ed60();
  /* 1047ed1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ed20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ed23 jmp 0x1047ed2c */
  goto L_1047ed2c;
L_1047ed25:;
  /* 1047ed25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047ed2c:;
  /* 1047ed2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed30 jne 0x1047ed38 */
  if (!C.zf) goto L_1047ed38;
  /* 1047ed32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed36 jne 0x1047ed3d */
  if (!C.zf) goto L_1047ed3d;
L_1047ed38:;
  /* 1047ed38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ed3b jmp 0x1047ed53 */
  goto L_1047ed53;
L_1047ed3d:;
  /* 1047ed3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ed40 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ed41 call 0x1047ec50 */
  push32(0x1047ed46u); f_1047ec50();
  /* 1047ed46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ed49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ed4b jne 0x1047ed51 */
  if (!C.zf) goto L_1047ed51;
  /* 1047ed4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ed4f jmp 0x1047ed53 */
  goto L_1047ed53;
L_1047ed51:;
  /* 1047ed51 jmp 0x1047ed0e */
  goto L_1047ed0e;
L_1047ed53:;
  /* 1047ed53 mov esp, ebp */
  ESP = (EBP);
  /* 1047ed55 pop ebp */
  EBP = (pop32());
  /* 1047ed56 ret  */
  ESPCHK(0x1047ed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ed60 @ 0x1047ed60 (109 bytes, 37 insns) */
void f_1047ed60(void) {
  FTRACE(0x1047ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ed61 mov ebp, esp */
  EBP = (ESP);
  /* 1047ed63 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ed64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ed67 cmp eax, dword ptr [0x1002cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed6d ja 0x1047ed9d */
  if ((!C.cf&&!C.zf)) goto L_1047ed9d;
  /* 1047ed6f push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ed71 call 0x1047e910 */
  push32(0x1047ed76u); f_1047e910();
  /* 1047ed76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ed79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ed7c push ecx */
  push32((uint32_t)(ECX));
  /* 1047ed7d call 0x1047f8a0 */
  push32(0x1047ed82u); f_1047f8a0();
  /* 1047ed82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ed85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ed88 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ed8a call 0x1047e9b0 */
  push32(0x1047ed8fu); f_1047e9b0();
  /* 1047ed8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ed92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ed96 je 0x1047ed9d */
  if (C.zf) goto L_1047ed9d;
  /* 1047ed98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ed9b jmp 0x1047edc9 */
  goto L_1047edc9;
L_1047ed9d:;
  /* 1047ed9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eda1 jne 0x1047edaa */
  if (!C.zf) goto L_1047edaa;
  /* 1047eda3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1047edaa:;
  /* 1047edaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047edad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047edb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1047edb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1047edb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047edb9 push eax */
  push32((uint32_t)(EAX));
  /* 1047edba push 0 */
  push32((uint32_t)(0x0u));
  /* 1047edbc mov ecx, dword ptr [0x1002fe2c] */
  ECX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047edc2 push ecx */
  push32((uint32_t)(ECX));
  /* 1047edc3 call dword ptr [0x10030320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030320))), 0x1047edc9u);
L_1047edc9:;
  /* 1047edc9 mov esp, ebp */
  ESP = (EBP);
  /* 1047edcb pop ebp */
  EBP = (pop32());
  /* 1047edcc ret  */
  ESPCHK(0x1047ed60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001edd0 @ 0x1047edd0 (10 bytes, 5 insns) */
void f_1047edd0(void) {
  FTRACE(0x1047edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047edd1 mov ebp, esp */
  EBP = (ESP);
  /* 1047edd3 mov eax, 1 */
  EAX = (0x1u);
  /* 1047edd8 pop ebp */
  EBP = (pop32());
  /* 1047edd9 ret  */
  ESPCHK(0x1047edd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ede0 @ 0x1047ede0 (173 bytes, 59 insns) */
void f_1047ede0(void) {
  FTRACE(0x1047ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ede1 mov ebp, esp */
  EBP = (ESP);
  /* 1047ede3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ede6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047edea jbe 0x1047edf3 */
  if ((C.cf||C.zf)) goto L_1047edf3;
  /* 1047edec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047edee jmp 0x1047ee89 */
  goto L_1047ee89;
L_1047edf3:;
  /* 1047edf3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047edf5 call 0x1047e910 */
  push32(0x1047edfau); f_1047e910();
  /* 1047edfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047edfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ee00 push eax */
  push32((uint32_t)(EAX));
  /* 1047ee01 call 0x1047f210 */
  push32(0x1047ee06u); f_1047f210();
  /* 1047ee06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ee09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047ee0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ee10 je 0x1047ee51 */
  if (C.zf) goto L_1047ee51;
  /* 1047ee12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047ee19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ee1c cmp ecx, dword ptr [0x1002cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ee22 ja 0x1047ee42 */
  if ((!C.cf&&!C.zf)) goto L_1047ee42;
  /* 1047ee24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ee27 push edx */
  push32((uint32_t)(EDX));
  /* 1047ee28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ee2b push eax */
  push32((uint32_t)(EAX));
  /* 1047ee2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ee2f push ecx */
  push32((uint32_t)(ECX));
  /* 1047ee30 call 0x104800e0 */
  push32(0x1047ee35u); f_104800e0();
  /* 1047ee35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ee38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ee3a je 0x1047ee42 */
  if (C.zf) goto L_1047ee42;
  /* 1047ee3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ee3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047ee42:;
  /* 1047ee42 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ee44 call 0x1047e9b0 */
  push32(0x1047ee49u); f_1047e9b0();
  /* 1047ee49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ee4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ee4f jmp 0x1047ee89 */
  goto L_1047ee89;
L_1047ee51:;
  /* 1047ee51 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047ee53 call 0x1047e9b0 */
  push32(0x1047ee58u); f_1047e9b0();
  /* 1047ee58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ee5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ee5f jne 0x1047ee68 */
  if (!C.zf) goto L_1047ee68;
  /* 1047ee61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1047ee68:;
  /* 1047ee68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ee6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ee6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1047ee70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1047ee73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ee76 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ee77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ee7a push edx */
  push32((uint32_t)(EDX));
  /* 1047ee7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1047ee7d mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047ee82 push eax */
  push32((uint32_t)(EAX));
  /* 1047ee83 call dword ptr [0x10030324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030324))), 0x1047ee89u);
L_1047ee89:;
  /* 1047ee89 mov esp, ebp */
  ESP = (EBP);
  /* 1047ee8b pop ebp */
  EBP = (pop32());
  /* 1047ee8c ret  */
  ESPCHK(0x1047ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee90 @ 0x1047ee90 (490 bytes, 165 insns) */
void f_1047ee90(void) {
  FTRACE(0x1047ee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ee90 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ee91 mov ebp, esp */
  EBP = (ESP);
  /* 1047ee93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ee96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ee9a jne 0x1047eead */
  if (!C.zf) goto L_1047eead;
  /* 1047ee9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ee9f push eax */
  push32((uint32_t)(EAX));
  /* 1047eea0 call 0x1047ece0 */
  push32(0x1047eea5u); f_1047ece0();
  /* 1047eea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eea8 jmp 0x1047f076 */
  goto L_1047f076;
L_1047eead:;
  /* 1047eead cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eeb1 jne 0x1047eec6 */
  if (!C.zf) goto L_1047eec6;
  /* 1047eeb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047eeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1047eeb7 call 0x1047f080 */
  push32(0x1047eebcu); f_1047f080();
  /* 1047eebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047eec1 jmp 0x1047f076 */
  goto L_1047f076;
L_1047eec6:;
  /* 1047eec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047eecd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eed1 ja 0x1047f049 */
  if ((!C.cf&&!C.zf)) goto L_1047f049;
  /* 1047eed7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047eed9 call 0x1047e910 */
  push32(0x1047eedeu); f_1047e910();
  /* 1047eede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047eee4 push edx */
  push32((uint32_t)(EDX));
  /* 1047eee5 call 0x1047f210 */
  push32(0x1047eeeau); f_1047f210();
  /* 1047eeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eeed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047eef0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047eef4 je 0x1047f00c */
  if (C.zf) goto L_1047f00c;
  /* 1047eefa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047eefd cmp eax, dword ptr [0x1002cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ef03 ja 0x1047ef80 */
  if ((!C.cf&&!C.zf)) goto L_1047ef80;
  /* 1047ef05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ef08 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ef09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ef0c push edx */
  push32((uint32_t)(EDX));
  /* 1047ef0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047ef10 push eax */
  push32((uint32_t)(EAX));
  /* 1047ef11 call 0x104800e0 */
  push32(0x1047ef16u); f_104800e0();
  /* 1047ef16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ef19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ef1b je 0x1047ef25 */
  if (C.zf) goto L_1047ef25;
  /* 1047ef1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ef20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047ef23 jmp 0x1047ef80 */
  goto L_1047ef80;
L_1047ef25:;
  /* 1047ef25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ef28 push edx */
  push32((uint32_t)(EDX));
  /* 1047ef29 call 0x1047f8a0 */
  push32(0x1047ef2eu); f_1047f8a0();
  /* 1047ef2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ef31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047ef34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ef38 je 0x1047ef80 */
  if (C.zf) goto L_1047ef80;
  /* 1047ef3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ef3d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1047ef40 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ef43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047ef46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ef49 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ef4c jae 0x1047ef56 */
  if (!C.cf) goto L_1047ef56;
  /* 1047ef4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ef51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047ef54 jmp 0x1047ef5c */
  goto L_1047ef5c;
L_1047ef56:;
  /* 1047ef56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ef59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1047ef5c:;
  /* 1047ef5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ef5f push edx */
  push32((uint32_t)(EDX));
  /* 1047ef60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ef63 push eax */
  push32((uint32_t)(EAX));
  /* 1047ef64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ef67 push ecx */
  push32((uint32_t)(ECX));
  /* 1047ef68 call 0x104817f0 */
  push32(0x1047ef6du); f_104817f0();
  /* 1047ef6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ef70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ef73 push edx */
  push32((uint32_t)(EDX));
  /* 1047ef74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047ef77 push eax */
  push32((uint32_t)(EAX));
  /* 1047ef78 call 0x1047f2d0 */
  push32(0x1047ef7du); f_1047f2d0();
  /* 1047ef7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047ef80:;
  /* 1047ef80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ef84 jne 0x1047f000 */
  if (!C.zf) goto L_1047f000;
  /* 1047ef86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ef8a jne 0x1047ef93 */
  if (!C.zf) goto L_1047ef93;
  /* 1047ef8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1047ef93:;
  /* 1047ef93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ef96 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ef99 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1047ef9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1047ef9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047efa2 push edx */
  push32((uint32_t)(EDX));
  /* 1047efa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047efa5 mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047efaa push eax */
  push32((uint32_t)(EAX));
  /* 1047efab call dword ptr [0x10030320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030320))), 0x1047efb1u);
  /* 1047efb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047efb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047efb8 je 0x1047f000 */
  if (C.zf) goto L_1047f000;
  /* 1047efba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047efbd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1047efc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047efc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047efc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047efc9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047efcc jae 0x1047efd6 */
  if (!C.cf) goto L_1047efd6;
  /* 1047efce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047efd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1047efd4 jmp 0x1047efdc */
  goto L_1047efdc;
L_1047efd6:;
  /* 1047efd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047efd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1047efdc:;
  /* 1047efdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047efdf push eax */
  push32((uint32_t)(EAX));
  /* 1047efe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047efe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047efe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047efe7 push edx */
  push32((uint32_t)(EDX));
  /* 1047efe8 call 0x104817f0 */
  push32(0x1047efedu); f_104817f0();
  /* 1047efed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047eff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047eff3 push eax */
  push32((uint32_t)(EAX));
  /* 1047eff4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047eff7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047eff8 call 0x1047f2d0 */
  push32(0x1047effdu); f_1047f2d0();
  /* 1047effd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047f000:;
  /* 1047f000 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f002 call 0x1047e9b0 */
  push32(0x1047f007u); f_1047e9b0();
  /* 1047f007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f00a jmp 0x1047f049 */
  goto L_1047f049;
L_1047f00c:;
  /* 1047f00c push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f00e call 0x1047e9b0 */
  push32(0x1047f013u); f_1047e9b0();
  /* 1047f013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f016 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f01a jne 0x1047f023 */
  if (!C.zf) goto L_1047f023;
  /* 1047f01c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1047f023:;
  /* 1047f023 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f026 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f029 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1047f02c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1047f02f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f032 push eax */
  push32((uint32_t)(EAX));
  /* 1047f033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f036 push ecx */
  push32((uint32_t)(ECX));
  /* 1047f037 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f039 mov edx, dword ptr [0x1002fe2c] */
  EDX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047f03f push edx */
  push32((uint32_t)(EDX));
  /* 1047f040 call dword ptr [0x10030324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030324))), 0x1047f046u);
  /* 1047f046 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047f049:;
  /* 1047f049 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f04d jne 0x1047f058 */
  if (!C.zf) goto L_1047f058;
  /* 1047f04f cmp dword ptr [0x1002e668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f056 jne 0x1047f05d */
  if (!C.zf) goto L_1047f05d;
L_1047f058:;
  /* 1047f058 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f05b jmp 0x1047f076 */
  goto L_1047f076;
L_1047f05d:;
  /* 1047f05d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f060 push eax */
  push32((uint32_t)(EAX));
  /* 1047f061 call 0x1047ec50 */
  push32(0x1047f066u); f_1047ec50();
  /* 1047f066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047f06b jne 0x1047f071 */
  if (!C.zf) goto L_1047f071;
  /* 1047f06d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f06f jmp 0x1047f076 */
  goto L_1047f076;
L_1047f071:;
  /* 1047f071 jmp 0x1047eec6 */
  goto L_1047eec6;
L_1047f076:;
  /* 1047f076 mov esp, ebp */
  ESP = (EBP);
  /* 1047f078 pop ebp */
  EBP = (pop32());
  /* 1047f079 ret  */
  ESPCHK(0x1047ee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f080 @ 0x1047f080 (104 bytes, 38 insns) */
void f_1047f080(void) {
  FTRACE(0x1047f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f080 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f081 mov ebp, esp */
  EBP = (ESP);
  /* 1047f083 push ecx */
  push32((uint32_t)(ECX));
  /* 1047f084 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f088 jne 0x1047f08c */
  if (!C.zf) goto L_1047f08c;
  /* 1047f08a jmp 0x1047f0e4 */
  goto L_1047f0e4;
L_1047f08c:;
  /* 1047f08c push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f08e call 0x1047e910 */
  push32(0x1047f093u); f_1047e910();
  /* 1047f093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f099 push eax */
  push32((uint32_t)(EAX));
  /* 1047f09a call 0x1047f210 */
  push32(0x1047f09fu); f_1047f210();
  /* 1047f09f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f0a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047f0a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f0a9 je 0x1047f0c7 */
  if (C.zf) goto L_1047f0c7;
  /* 1047f0ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f0ae push ecx */
  push32((uint32_t)(ECX));
  /* 1047f0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f0b2 push edx */
  push32((uint32_t)(EDX));
  /* 1047f0b3 call 0x1047f2d0 */
  push32(0x1047f0b8u); f_1047f2d0();
  /* 1047f0b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f0bb push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f0bd call 0x1047e9b0 */
  push32(0x1047f0c2u); f_1047e9b0();
  /* 1047f0c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f0c5 jmp 0x1047f0e4 */
  goto L_1047f0e4;
L_1047f0c7:;
  /* 1047f0c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f0c9 call 0x1047e9b0 */
  push32(0x1047f0ceu); f_1047e9b0();
  /* 1047f0ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f0d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f0d4 push eax */
  push32((uint32_t)(EAX));
  /* 1047f0d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f0d7 mov ecx, dword ptr [0x1002fe2c] */
  ECX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047f0dd push ecx */
  push32((uint32_t)(ECX));
  /* 1047f0de call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x1047f0e4u);
L_1047f0e4:;
  /* 1047f0e4 mov esp, ebp */
  ESP = (EBP);
  /* 1047f0e6 pop ebp */
  EBP = (pop32());
  /* 1047f0e7 ret  */
  ESPCHK(0x1047f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f0f0 @ 0x1047f0f0 (116 bytes, 34 insns) */
void f_1047f0f0(void) {
  FTRACE(0x1047f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047f0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047f0f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1047f0fb push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f0fd call 0x1047e910 */
  push32(0x1047f102u); f_1047e910();
  /* 1047f102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f105 call 0x10480800 */
  push32(0x1047f10au); f_10480800();
  /* 1047f10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047f10c jge 0x1047f115 */
  if ((C.sf==C.of)) goto L_1047f115;
  /* 1047f10e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1047f115:;
  /* 1047f115 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047f117 call 0x1047e9b0 */
  push32(0x1047f11cu); f_1047e9b0();
  /* 1047f11c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f11f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f121 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f123 mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047f128 push eax */
  push32((uint32_t)(EAX));
  /* 1047f129 call dword ptr [0x10030234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030234))), 0x1047f12fu);
  /* 1047f12f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047f131 jne 0x1047f15d */
  if (!C.zf) goto L_1047f15d;
  /* 1047f133 call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x1047f139u);
  /* 1047f139 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f13c jne 0x1047f156 */
  if (!C.zf) goto L_1047f156;
  /* 1047f13e call 0x10482df0 */
  push32(0x1047f143u); f_10482df0();
  /* 1047f143 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1047f149 call 0x10482de0 */
  push32(0x1047f14eu); f_10482de0();
  /* 1047f14e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1047f154 jmp 0x1047f15d */
  goto L_1047f15d;
L_1047f156:;
  /* 1047f156 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1047f15d:;
  /* 1047f15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f160 mov esp, ebp */
  ESP = (EBP);
  /* 1047f162 pop ebp */
  EBP = (pop32());
  /* 1047f163 ret  */
  ESPCHK(0x1047f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f170 @ 0x1047f170 (10 bytes, 5 insns) */
void f_1047f170(void) {
  FTRACE(0x1047f170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f170 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f171 mov ebp, esp */
  EBP = (ESP);
  /* 1047f173 call 0x1047f0f0 */
  push32(0x1047f178u); f_1047f0f0();
  /* 1047f178 pop ebp */
  EBP = (pop32());
  /* 1047f179 ret  */
  ESPCHK(0x1047f170u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f180 @ 0x1047f180 (10 bytes, 5 insns) */
void f_1047f180(void) {
  FTRACE(0x1047f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f180 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f181 mov ebp, esp */
  EBP = (ESP);
  /* 1047f183 mov eax, dword ptr [0x1002cc94] */
  EAX = (r32((uint32_t)(0x1002cc94)));
  /* 1047f188 pop ebp */
  EBP = (pop32());
  /* 1047f189 ret  */
  ESPCHK(0x1047f180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f190 @ 0x1047f190 (31 bytes, 11 insns) */
void f_1047f190(void) {
  FTRACE(0x1047f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f191 mov ebp, esp */
  EBP = (ESP);
  /* 1047f193 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f19a jbe 0x1047f1a0 */
  if ((C.cf||C.zf)) goto L_1047f1a0;
  /* 1047f19c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f19e jmp 0x1047f1ad */
  goto L_1047f1ad;
L_1047f1a0:;
  /* 1047f1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f1a3 mov dword ptr [0x1002cc94], eax */
  w32((uint32_t)(0x1002cc94), (EAX));
  /* 1047f1a8 mov eax, 1 */
  EAX = (0x1u);
L_1047f1ad:;
  /* 1047f1ad pop ebp */
  EBP = (pop32());
  /* 1047f1ae ret  */
  ESPCHK(0x1047f190u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f1b0 @ 0x1047f1b0 (89 bytes, 20 insns) */
void f_1047f1b0(void) {
  FTRACE(0x1047f1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047f1b3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1047f1b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f1ba mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047f1bf push eax */
  push32((uint32_t)(EAX));
  /* 1047f1c0 call dword ptr [0x10030320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030320))), 0x1047f1c6u);
  /* 1047f1c6 mov dword ptr [0x1002fe28], eax */
  w32((uint32_t)(0x1002fe28), (EAX));
  /* 1047f1cb cmp dword ptr [0x1002fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f1d2 jne 0x1047f1d8 */
  if (!C.zf) goto L_1047f1d8;
  /* 1047f1d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f1d6 jmp 0x1047f207 */
  goto L_1047f207;
L_1047f1d8:;
  /* 1047f1d8 mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f1de mov dword ptr [0x1002fe1c], ecx */
  w32((uint32_t)(0x1002fe1c), (ECX));
  /* 1047f1e4 mov dword ptr [0x1002fe20], 0 */
  w32((uint32_t)(0x1002fe20), (0x0u));
  /* 1047f1ee mov dword ptr [0x1002fe24], 0 */
  w32((uint32_t)(0x1002fe24), (0x0u));
  /* 1047f1f8 mov dword ptr [0x1002fe08], 0x10 */
  w32((uint32_t)(0x1002fe08), (0x10u));
  /* 1047f202 mov eax, 1 */
  EAX = (0x1u);
L_1047f207:;
  /* 1047f207 pop ebp */
  EBP = (pop32());
  /* 1047f208 ret  */
  ESPCHK(0x1047f1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f210 @ 0x1047f210 (85 bytes, 29 insns) */
void f_1047f210(void) {
  FTRACE(0x1047f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f210 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f211 mov ebp, esp */
  EBP = (ESP);
  /* 1047f213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f216 mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1047f21b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047f21e mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f224 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f226 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047f229 mov edx, dword ptr [0x1002fe28] */
  EDX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f22f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1047f232:;
  /* 1047f232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f235 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f238 jae 0x1047f25f */
  if (!C.cf) goto L_1047f25f;
  /* 1047f23a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f240 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f243 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047f246 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f24d jae 0x1047f254 */
  if (!C.cf) goto L_1047f254;
  /* 1047f24f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f252 jmp 0x1047f261 */
  goto L_1047f261;
L_1047f254:;
  /* 1047f254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f257 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f25a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047f25d jmp 0x1047f232 */
  goto L_1047f232;
L_1047f25f:;
  /* 1047f25f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047f261:;
  /* 1047f261 mov esp, ebp */
  ESP = (EBP);
  /* 1047f263 pop ebp */
  EBP = (pop32());
  /* 1047f264 ret  */
  ESPCHK(0x1047f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f270 @ 0x1047f270 (95 bytes, 33 insns) */
void f_1047f270(void) {
  FTRACE(0x1047f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f271 mov ebp, esp */
  EBP = (ESP);
  /* 1047f273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f279 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f27c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f27f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047f282 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f285 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1047f288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047f28b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f293 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f298 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1047f29b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047f29d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047f29f jne 0x1047f2c1 */
  if (!C.zf) goto L_1047f2c1;
  /* 1047f2a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f2a4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1047f2a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047f2a9 jne 0x1047f2c1 */
  if (!C.zf) goto L_1047f2c1;
  /* 1047f2ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f2ae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047f2b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f2b6 je 0x1047f2c1 */
  if (C.zf) goto L_1047f2c1;
  /* 1047f2b8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1047f2bf jmp 0x1047f2c8 */
  goto L_1047f2c8;
L_1047f2c1:;
  /* 1047f2c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1047f2c8:;
  /* 1047f2c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047f2cb mov esp, ebp */
  ESP = (EBP);
  /* 1047f2cd pop ebp */
  EBP = (pop32());
  /* 1047f2ce ret  */
  ESPCHK(0x1047f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f2d0 @ 0x1047f2d0 (1485 bytes, 453 insns) */
void f_1047f2d0(void) {
  FTRACE(0x1047f2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1047f2d3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f2d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047f2dc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1047f2df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f2e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f2e5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f2e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047f2eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047f2ee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1047f2f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047f2f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f2f7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047f2fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f300 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1047f307 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047f30a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047f30d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f310 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047f313 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f316 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047f318 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f31b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1047f31e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f321 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f324 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1047f327 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f32a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047f32c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1047f32f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f332 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1047f335 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047f338 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047f33b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1047f33e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f340 jne 0x1047f468 */
  if (!C.zf) goto L_1047f468;
  /* 1047f346 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047f349 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1047f34c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f34f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1047f352 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f356 jbe 0x1047f35f */
  if ((C.cf||C.zf)) goto L_1047f35f;
  /* 1047f358 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1047f35f:;
  /* 1047f35f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f362 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f365 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047f368 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f36b jne 0x1047f441 */
  if (!C.zf) goto L_1047f441;
  /* 1047f371 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f375 jae 0x1047f3d6 */
  if (!C.cf) goto L_1047f3d6;
  /* 1047f377 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f37c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f37f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f381 not eax */
  EAX = (~(EAX));
  /* 1047f383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f386 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f389 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1047f38d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f38f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f392 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f395 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1047f399 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f39c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f39f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1047f3a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047f3a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f3a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f3ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1047f3ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f3b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f3b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1047f3b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047f3ba jne 0x1047f3d4 */
  if (!C.zf) goto L_1047f3d4;
  /* 1047f3bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f3c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f3c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f3c6 not eax */
  EAX = (~(EAX));
  /* 1047f3c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f3cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047f3cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047f3cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f3d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1047f3d4:;
  /* 1047f3d4 jmp 0x1047f441 */
  goto L_1047f441;
L_1047f3d6:;
  /* 1047f3d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f3d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f3dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f3e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f3e3 not edx */
  EDX = (~(EDX));
  /* 1047f3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f3e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f3eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1047f3f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f3f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f3f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f3fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1047f401 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f404 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f407 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047f40a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047f40d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f410 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f413 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1047f416 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f419 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f41c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1047f420 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f422 jne 0x1047f441 */
  if (!C.zf) goto L_1047f441;
  /* 1047f424 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f427 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f42a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f42f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f431 not edx */
  EDX = (~(EDX));
  /* 1047f433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f436 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047f439 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f43b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f43e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1047f441:;
  /* 1047f441 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f444 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047f447 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f44a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047f44d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1047f450 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f453 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f456 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047f459 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047f45c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1047f45f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f462 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f465 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1047f468:;
  /* 1047f468 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f46b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1047f46e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f471 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1047f474 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f478 jbe 0x1047f481 */
  if ((C.cf||C.zf)) goto L_1047f481;
  /* 1047f47a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1047f481:;
  /* 1047f481 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047f484 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1047f487 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f489 jne 0x1047f5e5 */
  if (!C.zf) goto L_1047f5e5;
  /* 1047f48f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f492 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f495 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1047f498 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047f49b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1047f49e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f4a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1047f4a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f4a8 jbe 0x1047f4b1 */
  if ((C.cf||C.zf)) goto L_1047f4b1;
  /* 1047f4aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1047f4b1:;
  /* 1047f4b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f4b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f4b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1047f4ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f4bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1047f4c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f4c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1047f4c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f4ca jbe 0x1047f4d3 */
  if ((C.cf||C.zf)) goto L_1047f4d3;
  /* 1047f4cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1047f4d3:;
  /* 1047f4d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f4d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f4d9 je 0x1047f5df */
  if (C.zf) goto L_1047f5df;
  /* 1047f4df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f4e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f4e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f4e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f4eb jne 0x1047f5c1 */
  if (!C.zf) goto L_1047f5c1;
  /* 1047f4f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f4f5 jae 0x1047f556 */
  if (!C.cf) goto L_1047f556;
  /* 1047f4f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f4fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f4ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f501 not edx */
  EDX = (~(EDX));
  /* 1047f503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f506 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f509 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1047f50d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f50f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f512 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f515 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1047f519 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f51c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f51f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047f522 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047f525 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f528 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f52b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1047f52e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f531 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f534 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1047f538 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f53a jne 0x1047f554 */
  if (!C.zf) goto L_1047f554;
  /* 1047f53c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f544 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f546 not edx */
  EDX = (~(EDX));
  /* 1047f548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f54b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047f54d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f54f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f552 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047f554:;
  /* 1047f554 jmp 0x1047f5c1 */
  goto L_1047f5c1;
L_1047f556:;
  /* 1047f556 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f559 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f55c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f561 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f563 not eax */
  EAX = (~(EAX));
  /* 1047f565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f568 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f56b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1047f572 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f577 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f57a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1047f581 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f584 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f587 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1047f58a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047f58d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f590 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f593 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1047f596 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f599 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f59c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1047f5a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047f5a2 jne 0x1047f5c1 */
  if (!C.zf) goto L_1047f5c1;
  /* 1047f5a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f5a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f5aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f5af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f5b1 not eax */
  EAX = (~(EAX));
  /* 1047f5b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f5b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f5b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047f5bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f5be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1047f5c1:;
  /* 1047f5c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f5c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1047f5c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f5ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047f5cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1047f5d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f5d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047f5d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f5d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1047f5dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1047f5df:;
  /* 1047f5df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f5e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1047f5e5:;
  /* 1047f5e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047f5e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1047f5eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f5ed jne 0x1047f5fb */
  if (!C.zf) goto L_1047f5fb;
  /* 1047f5ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047f5f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f5f5 je 0x1047f70b */
  if (C.zf) goto L_1047f70b;
L_1047f5fb:;
  /* 1047f5fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f5fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f601 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1047f604 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1047f607 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f60a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047f60d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f610 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1047f613 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f616 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047f619 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1047f61c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047f61f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f622 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1047f625 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f628 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f62b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f62e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1047f631 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f634 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f637 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047f63a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f63d jne 0x1047f70b */
  if (!C.zf) goto L_1047f70b;
  /* 1047f643 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f647 jae 0x1047f6a4 */
  if (!C.cf) goto L_1047f6a4;
  /* 1047f649 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f64c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f64f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1047f653 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f656 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f659 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047f65c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1047f65f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f662 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f665 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1047f668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047f66a jne 0x1047f682 */
  if (!C.zf) goto L_1047f682;
  /* 1047f66c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f671 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f674 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f679 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047f67b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f67d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f680 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047f682:;
  /* 1047f682 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f687 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f68a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f68c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f68f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f692 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1047f696 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f69b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f69e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1047f6a2 jmp 0x1047f70b */
  goto L_1047f70b;
L_1047f6a4:;
  /* 1047f6a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f6a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f6aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1047f6ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f6b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f6b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047f6b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1047f6ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f6bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f6c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1047f6c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047f6c5 jne 0x1047f6e2 */
  if (!C.zf) goto L_1047f6e2;
  /* 1047f6c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f6ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f6cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f6d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f6d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047f6da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f6dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f6df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1047f6e2:;
  /* 1047f6e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f6e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f6e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047f6ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f6ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f6f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f6f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1047f6fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f6fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f701 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1047f704 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1047f70b:;
  /* 1047f70b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f70e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f711 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1047f713 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047f716 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f719 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047f71c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1047f71f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f722 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047f724 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f72a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047f72c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047f72f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f732 jne 0x1047f899 */
  if (!C.zf) goto L_1047f899;
  /* 1047f738 cmp dword ptr [0x1002fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f73f je 0x1047f888 */
  if (C.zf) goto L_1047f888;
  /* 1047f745 mov eax, dword ptr [0x1002fe18] */
  EAX = (r32((uint32_t)(0x1002fe18)));
  /* 1047f74a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1047f74d mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f753 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1047f756 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f758 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1047f75b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1047f760 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1047f765 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f768 push eax */
  push32((uint32_t)(EAX));
  /* 1047f769 call dword ptr [0x10030304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030304))), 0x1047f76fu);
  /* 1047f76f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047f774 mov ecx, dword ptr [0x1002fe18] */
  ECX = (r32((uint32_t)(0x1002fe18)));
  /* 1047f77a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f77c mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f781 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047f784 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f786 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f78c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1047f78f mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f794 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047f797 mov edx, dword ptr [0x1002fe18] */
  EDX = (r32((uint32_t)(0x1002fe18)));
  /* 1047f79d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1047f7a8 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047f7b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1047f7b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047f7b6 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047f7be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1047f7c1 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047f7ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1047f7ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f7d0 jne 0x1047f7e6 */
  if (!C.zf) goto L_1047f7e6;
  /* 1047f7d2 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047f7db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1047f7dd mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1047f7e6:;
  /* 1047f7e6 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f7ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f7f0 jne 0x1047f888 */
  if (!C.zf) goto L_1047f888;
  /* 1047f7f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1047f7fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f7fd mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f802 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1047f805 push ecx */
  push32((uint32_t)(ECX));
  /* 1047f806 call dword ptr [0x10030304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030304))), 0x1047f80cu);
  /* 1047f80c mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f812 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047f815 push eax */
  push32((uint32_t)(EAX));
  /* 1047f816 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047f818 mov ecx, dword ptr [0x1002fe2c] */
  ECX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047f81e push ecx */
  push32((uint32_t)(ECX));
  /* 1047f81f call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x1047f825u);
  /* 1047f825 mov edx, dword ptr [0x1002fe24] */
  EDX = (r32((uint32_t)(0x1002fe24)));
  /* 1047f82b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047f82e mov eax, dword ptr [0x1002fe28] */
  EAX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f833 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f835 mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f83b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f83e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f840 push eax */
  push32((uint32_t)(EAX));
  /* 1047f841 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f847 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f84a push edx */
  push32((uint32_t)(EDX));
  /* 1047f84b mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1047f850 push eax */
  push32((uint32_t)(EAX));
  /* 1047f851 call 0x10482e00 */
  push32(0x1047f856u); f_10482e00();
  /* 1047f856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f859 mov ecx, dword ptr [0x1002fe24] */
  ECX = (r32((uint32_t)(0x1002fe24)));
  /* 1047f85f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f862 mov dword ptr [0x1002fe24], ecx */
  w32((uint32_t)(0x1002fe24), (ECX));
  /* 1047f868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f86b cmp edx, dword ptr [0x1002fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f871 jbe 0x1047f87c */
  if ((C.cf||C.zf)) goto L_1047f87c;
  /* 1047f873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f876 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f879 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1047f87c:;
  /* 1047f87c mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f882 mov dword ptr [0x1002fe1c], ecx */
  w32((uint32_t)(0x1002fe1c), (ECX));
L_1047f888:;
  /* 1047f888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f88b mov dword ptr [0x1002fe20], edx */
  w32((uint32_t)(0x1002fe20), (EDX));
  /* 1047f891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047f894 mov dword ptr [0x1002fe18], eax */
  w32((uint32_t)(0x1002fe18), (EAX));
L_1047f899:;
  /* 1047f899 mov esp, ebp */
  ESP = (EBP);
  /* 1047f89b pop ebp */
  EBP = (pop32());
  /* 1047f89c ret  */
  ESPCHK(0x1047f2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f8a0 @ 0x1047f8a0 (1334 bytes, 427 insns) */
void f_1047f8a0(void) {
  FTRACE(0x1047f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1047f8a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f8a6 push esi */
  push32((uint32_t)(ESI));
  /* 1047f8a7 mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1047f8ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047f8af mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f8b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f8b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1047f8ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047f8bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f8c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1047f8c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1047f8c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047f8c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1047f8cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f8cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1047f8d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f8d6 jge 0x1047f8ec */
  if ((C.sf==C.of)) goto L_1047f8ec;
  /* 1047f8d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047f8db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047f8de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047f8e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1047f8e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1047f8ea jmp 0x1047f901 */
  goto L_1047f901;
L_1047f8ec:;
  /* 1047f8ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1047f8f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047f8f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047f8f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047f8fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047f8fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1047f901:;
  /* 1047f901 mov ecx, dword ptr [0x1002fe1c] */
  ECX = (r32((uint32_t)(0x1002fe1c)));
  /* 1047f907 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1047f90a:;
  /* 1047f90a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f90d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f910 jae 0x1047f936 */
  if (!C.cf) goto L_1047f936;
  /* 1047f912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f915 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f918 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1047f91a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f91d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f920 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1047f923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047f925 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047f927 je 0x1047f92b */
  if (C.zf) goto L_1047f92b;
  /* 1047f929 jmp 0x1047f936 */
  goto L_1047f936;
L_1047f92b:;
  /* 1047f92b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f92e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f931 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1047f934 jmp 0x1047f90a */
  goto L_1047f90a;
L_1047f936:;
  /* 1047f936 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f939 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f93c jne 0x1047fa1d */
  if (!C.zf) goto L_1047fa1d;
  /* 1047f942 mov eax, dword ptr [0x1002fe28] */
  EAX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f947 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1047f94a:;
  /* 1047f94a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f94d cmp ecx, dword ptr [0x1002fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f953 jae 0x1047f979 */
  if (!C.cf) goto L_1047f979;
  /* 1047f955 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f958 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047f95b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1047f95d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f960 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047f963 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1047f966 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047f96a je 0x1047f96e */
  if (C.zf) goto L_1047f96e;
  /* 1047f96c jmp 0x1047f979 */
  goto L_1047f979;
L_1047f96e:;
  /* 1047f96e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f971 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f974 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047f977 jmp 0x1047f94a */
  goto L_1047f94a;
L_1047f979:;
  /* 1047f979 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f97c cmp ecx, dword ptr [0x1002fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f982 jne 0x1047fa1d */
  if (!C.zf) goto L_1047fa1d;
L_1047f988:;
  /* 1047f988 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f98b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f98e jae 0x1047f9a6 */
  if (!C.cf) goto L_1047f9a6;
  /* 1047f990 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f993 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f997 je 0x1047f99b */
  if (C.zf) goto L_1047f99b;
  /* 1047f999 jmp 0x1047f9a6 */
  goto L_1047f9a6;
L_1047f99b:;
  /* 1047f99b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f99e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f9a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1047f9a4 jmp 0x1047f988 */
  goto L_1047f988;
L_1047f9a6:;
  /* 1047f9a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f9ac jne 0x1047f9f7 */
  if (!C.zf) goto L_1047f9f7;
  /* 1047f9ae mov eax, dword ptr [0x1002fe28] */
  EAX = (r32((uint32_t)(0x1002fe28)));
  /* 1047f9b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1047f9b6:;
  /* 1047f9b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9b9 cmp ecx, dword ptr [0x1002fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f9bf jae 0x1047f9d7 */
  if (!C.cf) goto L_1047f9d7;
  /* 1047f9c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f9c8 je 0x1047f9cc */
  if (C.zf) goto L_1047f9cc;
  /* 1047f9ca jmp 0x1047f9d7 */
  goto L_1047f9d7;
L_1047f9cc:;
  /* 1047f9cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047f9d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047f9d5 jmp 0x1047f9b6 */
  goto L_1047f9b6;
L_1047f9d7:;
  /* 1047f9d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9da cmp ecx, dword ptr [0x1002fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f9e0 jne 0x1047f9f7 */
  if (!C.zf) goto L_1047f9f7;
  /* 1047f9e2 call 0x1047fde0 */
  push32(0x1047f9e7u); f_1047fde0();
  /* 1047f9e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047f9ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047f9ee jne 0x1047f9f7 */
  if (!C.zf) goto L_1047f9f7;
  /* 1047f9f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047f9f2 jmp 0x1047fdd1 */
  goto L_1047fdd1;
L_1047f9f7:;
  /* 1047f9f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047f9fa push edx */
  push32((uint32_t)(EDX));
  /* 1047f9fb call 0x1047fef0 */
  push32(0x1047fa00u); f_1047fef0();
  /* 1047fa00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fa03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fa06 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047fa09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047fa0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fa0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047fa11 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fa14 jne 0x1047fa1d */
  if (!C.zf) goto L_1047fa1d;
  /* 1047fa16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fa18 jmp 0x1047fdd1 */
  goto L_1047fdd1;
L_1047fa1d:;
  /* 1047fa1d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fa20 mov dword ptr [0x1002fe1c], edx */
  w32((uint32_t)(0x1002fe1c), (EDX));
  /* 1047fa26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fa29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047fa2c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1047fa2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fa32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047fa34 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1047fa37 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fa3b je 0x1047fa60 */
  if (C.zf) goto L_1047fa60;
  /* 1047fa3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fa43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047fa46 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1047fa4a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fa50 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1047fa53 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1047fa5a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1047fa5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047fa5e jne 0x1047fa95 */
  if (!C.zf) goto L_1047fa95;
L_1047fa60:;
  /* 1047fa60 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1047fa67:;
  /* 1047fa67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa6a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fa6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047fa70 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1047fa74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fa7a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1047fa7d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1047fa84 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1047fa86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047fa88 jne 0x1047fa95 */
  if (!C.zf) goto L_1047fa95;
  /* 1047fa8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fa90 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1047fa93 jmp 0x1047fa67 */
  goto L_1047fa67;
L_1047fa95:;
  /* 1047fa95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fa98 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047fa9e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047faa1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1047faa8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047faab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1047fab2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fab5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fab8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047fabb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1047fabf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1047fac2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fac6 jne 0x1047fae2 */
  if (!C.zf) goto L_1047fae2;
  /* 1047fac8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1047facf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fad2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fad5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047fad8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1047fadf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1047fae2:;
  /* 1047fae2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fae6 jl 0x1047fafb */
  if ((C.sf!=C.of)) goto L_1047fafb;
  /* 1047fae8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047faeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1047faed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1047faf0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047faf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047faf6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1047faf9 jmp 0x1047fae2 */
  goto L_1047fae2;
L_1047fafb:;
  /* 1047fafb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047fafe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fb01 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1047fb05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047fb08 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fb0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047fb0d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fb10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047fb13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047fb16 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1047fb19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fb1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1047fb1f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fb23 jle 0x1047fb2c */
  if ((C.zf||C.sf!=C.of)) goto L_1047fb2c;
  /* 1047fb25 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1047fb2c:;
  /* 1047fb2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fb2f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fb32 je 0x1047fd50 */
  if (C.zf) goto L_1047fd50;
  /* 1047fb38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fb3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fb3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047fb41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fb44 jne 0x1047fc1a */
  if (!C.zf) goto L_1047fc1a;
  /* 1047fb4a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fb4e jge 0x1047fbaf */
  if ((C.sf==C.of)) goto L_1047fbaf;
  /* 1047fb50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047fb55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047fb58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047fb5a not eax */
  EAX = (~(EAX));
  /* 1047fb5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fb5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fb62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1047fb66 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047fb68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fb6b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fb6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1047fb72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fb75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fb78 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1047fb7b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047fb7e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fb81 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fb84 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1047fb87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fb8a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fb8d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1047fb91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047fb93 jne 0x1047fbad */
  if (!C.zf) goto L_1047fbad;
  /* 1047fb95 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047fb9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047fb9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047fb9f not eax */
  EAX = (~(EAX));
  /* 1047fba1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fba4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047fba6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047fba8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fbab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1047fbad:;
  /* 1047fbad jmp 0x1047fc1a */
  goto L_1047fc1a;
L_1047fbaf:;
  /* 1047fbaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047fbb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fbb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047fbba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047fbbc not edx */
  EDX = (~(EDX));
  /* 1047fbbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fbc1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fbc4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1047fbcb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fbcd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fbd0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fbd3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1047fbda mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fbdd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fbe0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047fbe3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047fbe6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fbe9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fbec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1047fbef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fbf2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fbf5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1047fbf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047fbfb jne 0x1047fc1a */
  if (!C.zf) goto L_1047fc1a;
  /* 1047fbfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047fc00 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fc03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047fc08 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047fc0a not edx */
  EDX = (~(EDX));
  /* 1047fc0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fc0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047fc12 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1047fc14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fc17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1047fc1a:;
  /* 1047fc1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc1d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047fc20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047fc26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1047fc29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047fc2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc32 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047fc35 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1047fc38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fc3c je 0x1047fd50 */
  if (C.zf) goto L_1047fd50;
  /* 1047fc42 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fc45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fc48 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1047fc4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1047fc4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047fc54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047fc57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1047fc5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047fc60 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1047fc63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047fc66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc69 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1047fc6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047fc72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc75 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1047fc78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fc7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047fc81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fc84 jne 0x1047fd50 */
  if (!C.zf) goto L_1047fd50;
  /* 1047fc8a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fc8e jge 0x1047fcea */
  if ((C.sf==C.of)) goto L_1047fcea;
  /* 1047fc90 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fc93 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fc96 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1047fc9a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fc9d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fca0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1047fca3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1047fca5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fca8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fcab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1047fcae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047fcb0 jne 0x1047fcc8 */
  if (!C.zf) goto L_1047fcc8;
  /* 1047fcb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047fcb7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fcba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047fcbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fcbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047fcc1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047fcc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fcc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1047fcc8:;
  /* 1047fcc8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047fccd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fcd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047fcd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fcd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fcd8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1047fcdc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fcde mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fce1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fce4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1047fce8 jmp 0x1047fd50 */
  goto L_1047fd50;
L_1047fcea:;
  /* 1047fcea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fced add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fcf0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1047fcf4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fcf7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fcfa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1047fcfd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1047fcff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fd02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd05 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1047fd08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047fd0a jne 0x1047fd27 */
  if (!C.zf) goto L_1047fd27;
  /* 1047fd0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fd0f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fd12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1047fd17 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1047fd19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fd1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047fd1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1047fd21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fd24 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1047fd27:;
  /* 1047fd27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047fd2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fd2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1047fd32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1047fd34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fd37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fd3a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1047fd41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fd43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fd46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fd49 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1047fd50:;
  /* 1047fd50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fd54 je 0x1047fd6a */
  if (C.zf) goto L_1047fd6a;
  /* 1047fd56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fd59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047fd5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1047fd5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fd61 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047fd67 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1047fd6a:;
  /* 1047fd6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fd6d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047fd73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047fd76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fd7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047fd7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047fd81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fd87 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd8a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1047fd8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fd90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047fd92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fd95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047fd97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fd9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fd9d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047fd9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047fda1 jne 0x1047fdc3 */
  if (!C.zf) goto L_1047fdc3;
  /* 1047fda3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fda6 cmp eax, dword ptr [0x1002fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fdac jne 0x1047fdc3 */
  if (!C.zf) goto L_1047fdc3;
  /* 1047fdae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fdb1 cmp ecx, dword ptr [0x1002fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fdb7 jne 0x1047fdc3 */
  if (!C.zf) goto L_1047fdc3;
  /* 1047fdb9 mov dword ptr [0x1002fe20], 0 */
  w32((uint32_t)(0x1002fe20), (0x0u));
L_1047fdc3:;
  /* 1047fdc3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1047fdc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1047fdc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047fdcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047fdce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1047fdd1:;
  /* 1047fdd1 pop esi */
  ESI = (pop32());
  /* 1047fdd2 mov esp, ebp */
  ESP = (EBP);
  /* 1047fdd4 pop ebp */
  EBP = (pop32());
  /* 1047fdd5 ret  */
  ESPCHK(0x1047f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fde0 @ 0x1047fde0 (271 bytes, 78 insns) */
void f_1047fde0(void) {
  FTRACE(0x1047fde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047fde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047fde1 mov ebp, esp */
  EBP = (ESP);
  /* 1047fde3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047fde4 mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1047fde9 cmp eax, dword ptr [0x1002fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fdef jne 0x1047fe3b */
  if (!C.zf) goto L_1047fe3b;
  /* 1047fdf1 mov ecx, dword ptr [0x1002fe08] */
  ECX = (r32((uint32_t)(0x1002fe08)));
  /* 1047fdf7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fdfa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047fdfd push ecx */
  push32((uint32_t)(ECX));
  /* 1047fdfe mov edx, dword ptr [0x1002fe28] */
  EDX = (r32((uint32_t)(0x1002fe28)));
  /* 1047fe04 push edx */
  push32((uint32_t)(EDX));
  /* 1047fe05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047fe07 mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047fe0c push eax */
  push32((uint32_t)(EAX));
  /* 1047fe0d call dword ptr [0x10030324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030324))), 0x1047fe13u);
  /* 1047fe13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047fe16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fe1a jne 0x1047fe23 */
  if (!C.zf) goto L_1047fe23;
  /* 1047fe1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fe1e jmp 0x1047feeb */
  goto L_1047feeb;
L_1047fe23:;
  /* 1047fe23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe26 mov dword ptr [0x1002fe28], ecx */
  w32((uint32_t)(0x1002fe28), (ECX));
  /* 1047fe2c mov edx, dword ptr [0x1002fe08] */
  EDX = (r32((uint32_t)(0x1002fe08)));
  /* 1047fe32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fe35 mov dword ptr [0x1002fe08], edx */
  w32((uint32_t)(0x1002fe08), (EDX));
L_1047fe3b:;
  /* 1047fe3b mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1047fe40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047fe43 mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 1047fe49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fe4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047fe4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1047fe53 push 8 */
  push32((uint32_t)(0x8u));
  /* 1047fe55 mov edx, dword ptr [0x1002fe2c] */
  EDX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047fe5b push edx */
  push32((uint32_t)(EDX));
  /* 1047fe5c call dword ptr [0x10030320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030320))), 0x1047fe62u);
  /* 1047fe62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1047fe68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fe6f jne 0x1047fe75 */
  if (!C.zf) goto L_1047fe75;
  /* 1047fe71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047fe73 jmp 0x1047feeb */
  goto L_1047feeb;
L_1047fe75:;
  /* 1047fe75 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047fe77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1047fe7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1047fe81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047fe83 call dword ptr [0x10030328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030328))), 0x1047fe89u);
  /* 1047fe89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1047fe8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047fe96 jne 0x1047feb2 */
  if (!C.zf) goto L_1047feb2;
  /* 1047fe98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fe9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047fe9e push ecx */
  push32((uint32_t)(ECX));
  /* 1047fe9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047fea1 mov edx, dword ptr [0x1002fe2c] */
  EDX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047fea7 push edx */
  push32((uint32_t)(EDX));
  /* 1047fea8 call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x1047feaeu);
  /* 1047feae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047feb0 jmp 0x1047feeb */
  goto L_1047feeb;
L_1047feb2:;
  /* 1047feb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047feb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047febb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047febe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1047fec5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fec8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1047fecf mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1047fed4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047fed7 mov dword ptr [0x1002fe24], eax */
  w32((uint32_t)(0x1002fe24), (EAX));
  /* 1047fedc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047fedf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047fee2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1047fee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1047feeb:;
  /* 1047feeb mov esp, ebp */
  ESP = (EBP);
  /* 1047feed pop ebp */
  EBP = (pop32());
  /* 1047feee ret  */
  ESPCHK(0x1047fde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fef0 @ 0x1047fef0 (494 bytes, 149 insns) */
void f_1047fef0(void) {
  FTRACE(0x1047fef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047fef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047fef1 mov ebp, esp */
  EBP = (ESP);
  /* 1047fef3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047fef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047fef9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047fefc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1047feff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ff02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1047ff05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047ff08 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1047ff0f:;
  /* 1047ff0f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ff13 jl 0x1047ff28 */
  if ((C.sf!=C.of)) goto L_1047ff28;
  /* 1047ff15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ff18 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1047ff1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1047ff1d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047ff20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ff23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1047ff26 jmp 0x1047ff0f */
  goto L_1047ff0f;
L_1047ff28:;
  /* 1047ff28 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047ff2b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ff31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047ff34 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1047ff3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047ff3e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1047ff45 jmp 0x1047ff50 */
  goto L_1047ff50;
L_1047ff47:;
  /* 1047ff47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047ff4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ff4d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1047ff50:;
  /* 1047ff50 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ff54 jge 0x1047ff76 */
  if ((C.sf==C.of)) goto L_1047ff76;
  /* 1047ff56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047ff59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047ff5c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1047ff5f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047ff62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047ff65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047ff68 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1047ff6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047ff6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047ff71 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1047ff74 jmp 0x1047ff47 */
  goto L_1047ff47;
L_1047ff76:;
  /* 1047ff76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047ff79 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1047ff7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ff7f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1047ff82 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ff84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047ff87 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047ff89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1047ff8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1047ff93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ff96 push edx */
  push32((uint32_t)(EDX));
  /* 1047ff97 call dword ptr [0x10030328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030328))), 0x1047ff9du);
  /* 1047ff9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ff9f jne 0x1047ffa9 */
  if (!C.zf) goto L_1047ffa9;
  /* 1047ffa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047ffa4 jmp 0x104800da */
  goto L_104800da;
L_1047ffa9:;
  /* 1047ffa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ffac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ffb1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1047ffb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047ffb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047ffba jmp 0x1047ffc8 */
  goto L_1047ffc8;
L_1047ffbc:;
  /* 1047ffbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ffbf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ffc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047ffc8:;
  /* 1047ffc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ffcb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ffce ja 0x1048002d */
  if ((!C.cf&&!C.zf)) goto L_1048002d;
  /* 1047ffd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ffd3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1047ffda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ffdd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1047ffe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ffea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ffed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1047fff0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fff3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1047fff9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047fffc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480002 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480005 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10480008 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1048000b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480011 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480014 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10480017 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1048001a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048001f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10480022 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480025 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1048002b jmp 0x1047ffbc */
  goto L_1047ffbc;
L_1048002d:;
  /* 1048002d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10480030 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480036 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10480039 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1048003c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048003f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480042 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10480045 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480048 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1048004b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1048004e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480051 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480054 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10480057 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1048005a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048005d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480060 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10480063 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480066 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10480069 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1048006c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1048006f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480072 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10480075 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480078 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048007b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10480083 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480086 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480089 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10480094 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480097 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1048009b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048009e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 104800a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104800a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104800a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 104800aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104800ac jne 0x104800bd */
  if (!C.zf) goto L_104800bd;
  /* 104800ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104800b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104800b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104800bd:;
  /* 104800bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104800c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104800c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104800c7 not edx */
  EDX = (~(EDX));
  /* 104800c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104800cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104800d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104800d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_104800da:;
  /* 104800da mov esp, ebp */
  ESP = (EBP);
  /* 104800dc pop ebp */
  EBP = (pop32());
  /* 104800dd ret  */
  ESPCHK(0x1047fef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100200e0 @ 0x104800e0 (1515 bytes, 489 insns) */
void f_104800e0(void) {
  FTRACE(0x104800e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104800e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104800e1 mov ebp, esp */
  EBP = (ESP);
  /* 104800e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104800e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104800e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104800ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104800ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104800f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104800f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104800fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104800fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10480100 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480103 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10480106 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10480109 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1048010c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1048010f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480112 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10480118 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048011b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10480122 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10480125 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10480128 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048012b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1048012e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480131 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10480133 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480136 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10480139 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1048013c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048013f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10480142 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480145 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10480147 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1048014a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1048014d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480150 jle 0x10480406 */
  if ((C.zf||C.sf!=C.of)) goto L_10480406;
  /* 10480156 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480159 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1048015c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048015e jne 0x1048016b */
  if (!C.zf) goto L_1048016b;
  /* 10480160 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480163 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480166 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480169 jle 0x10480172 */
  if ((C.zf||C.sf!=C.of)) goto L_10480172;
L_1048016b:;
  /* 1048016b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048016d jmp 0x104806c7 */
  goto L_104806c7;
L_10480172:;
  /* 10480172 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480175 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10480178 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048017b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1048017e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480182 jbe 0x1048018b */
  if ((C.cf||C.zf)) goto L_1048018b;
  /* 10480184 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1048018b:;
  /* 1048018b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048018e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480191 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480194 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480197 jne 0x1048026d */
  if (!C.zf) goto L_1048026d;
  /* 1048019d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104801a1 jae 0x10480202 */
  if (!C.cf) goto L_10480202;
  /* 104801a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104801a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104801ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104801ad not edx */
  EDX = (~(EDX));
  /* 104801af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104801b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104801b5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104801b9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104801bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104801be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104801c1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104801c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104801c8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104801cb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104801ce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104801d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104801d4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104801d7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104801da mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104801dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104801e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104801e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104801e6 jne 0x10480200 */
  if (!C.zf) goto L_10480200;
  /* 104801e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104801ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104801f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104801f2 not edx */
  EDX = (~(EDX));
  /* 104801f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104801f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104801f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104801fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104801fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10480200:;
  /* 10480200 jmp 0x1048026d */
  goto L_1048026d;
L_10480202:;
  /* 10480202 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10480205 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480208 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1048020d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1048020f not eax */
  EAX = (~(EAX));
  /* 10480211 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480214 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480217 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1048021e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10480220 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480223 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480226 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1048022d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480230 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480233 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10480236 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10480239 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048023c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048023f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10480242 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480245 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480248 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1048024c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048024e jne 0x1048026d */
  if (!C.zf) goto L_1048026d;
  /* 10480250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10480253 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480256 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1048025b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1048025d not eax */
  EAX = (~(EAX));
  /* 1048025f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480262 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480265 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10480267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048026a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1048026d:;
  /* 1048026d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480270 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10480273 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480276 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10480279 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1048027c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048027f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10480282 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480285 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10480288 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1048028b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1048028e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480291 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480294 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10480297 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048029b jle 0x104803e7 */
  if ((C.zf||C.sf!=C.of)) goto L_104803e7;
  /* 104802a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104802a4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104802a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104802aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104802ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104802b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104802b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104802b6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104802ba jbe 0x104802c3 */
  if ((C.cf||C.zf)) goto L_104802c3;
  /* 104802bc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104802c3:;
  /* 104802c3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104802c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104802c9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104802cc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104802cf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104802d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104802d8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104802db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104802e1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104802e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104802e7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802ea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104802ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104802f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802f6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104802f9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104802ff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480302 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480305 jne 0x104803d3 */
  if (!C.zf) goto L_104803d3;
  /* 1048030b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048030f jae 0x1048036c */
  if (!C.cf) goto L_1048036c;
  /* 10480311 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480314 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480317 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1048031b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048031e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480321 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10480324 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10480327 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048032a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048032d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10480330 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10480332 jne 0x1048034a */
  if (!C.zf) goto L_1048034a;
  /* 10480334 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480339 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048033c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1048033e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480341 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10480343 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10480345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480348 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1048034a:;
  /* 1048034a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1048034f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10480352 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10480354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480357 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048035a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1048035e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10480360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480363 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480366 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1048036a jmp 0x104803d3 */
  goto L_104803d3;
L_1048036c:;
  /* 1048036c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048036f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480372 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10480376 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480379 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048037c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1048037f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10480382 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480385 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480388 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1048038b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048038d jne 0x104803aa */
  if (!C.zf) goto L_104803aa;
  /* 1048038f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10480392 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480395 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1048039a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1048039c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048039f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104803a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104803a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104803a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104803aa:;
  /* 104803aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104803ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104803b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104803b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104803b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104803ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104803bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104803c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104803c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104803c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104803cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104803d3:;
  /* 104803d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104803d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104803d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104803db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104803de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104803e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104803e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_104803e7:;
  /* 104803e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104803ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104803ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104803f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104803f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104803f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104803f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104803fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104803fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10480401 jmp 0x104806c2 */
  goto L_104806c2;
L_10480406:;
  /* 10480406 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10480409 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048040c jge 0x104806c2 */
  if ((C.sf==C.of)) goto L_104806c2;
  /* 10480412 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10480415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480418 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1048041b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1048041d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10480420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480423 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480426 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480429 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1048042c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1048042f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480432 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10480435 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480438 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048043b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1048043e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480441 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10480444 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480447 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1048044a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048044e jbe 0x10480457 */
  if ((C.cf||C.zf)) goto L_10480457;
  /* 10480450 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10480457:;
  /* 10480457 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1048045a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1048045d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048045f jne 0x104805a0 */
  if (!C.zf) goto L_104805a0;
  /* 10480465 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480468 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1048046b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048046e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10480471 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480475 jbe 0x1048047e */
  if ((C.cf||C.zf)) goto L_1048047e;
  /* 10480477 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1048047e:;
  /* 1048047e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480481 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480484 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480487 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048048a jne 0x10480560 */
  if (!C.zf) goto L_10480560;
  /* 10480490 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480494 jae 0x104804f5 */
  if (!C.cf) goto L_104804f5;
  /* 10480496 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1048049b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048049e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104804a0 not edx */
  EDX = (~(EDX));
  /* 104804a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104804a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104804a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104804ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104804ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104804b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104804b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104804b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104804bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104804be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104804c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104804c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104804c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104804ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104804cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104804d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104804d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104804d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104804d9 jne 0x104804f3 */
  if (!C.zf) goto L_104804f3;
  /* 104804db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104804e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104804e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104804e5 not edx */
  EDX = (~(EDX));
  /* 104804e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104804ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104804ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104804ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104804f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104804f3:;
  /* 104804f3 jmp 0x10480560 */
  goto L_10480560;
L_104804f5:;
  /* 104804f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104804f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104804fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10480500 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10480502 not eax */
  EAX = (~(EAX));
  /* 10480504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480507 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048050a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10480511 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10480513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480516 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480519 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10480520 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480523 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480526 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10480529 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1048052c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048052f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480532 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10480535 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480538 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048053b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1048053f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10480541 jne 0x10480560 */
  if (!C.zf) goto L_10480560;
  /* 10480543 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10480546 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480549 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1048054e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10480550 not eax */
  EAX = (~(EAX));
  /* 10480552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480555 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480558 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1048055a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048055d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10480560:;
  /* 10480560 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480563 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10480566 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480569 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1048056c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1048056f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480572 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10480575 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480578 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1048057b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1048057e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480581 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480584 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10480587 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1048058a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1048058d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480590 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10480593 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480597 jbe 0x104805a0 */
  if ((C.cf||C.zf)) goto L_104805a0;
  /* 10480599 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104805a0:;
  /* 104805a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104805a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104805a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104805a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104805ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104805b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104805b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104805b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104805be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104805c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104805c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104805ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104805d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104805d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104805dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104805df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104805e2 jne 0x104806ae */
  if (!C.zf) goto L_104806ae;
  /* 104805e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104805ec jae 0x10480648 */
  if (!C.cf) goto L_10480648;
  /* 104805ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104805f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104805f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104805f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104805fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104805fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10480601 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10480603 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480606 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480609 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1048060c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048060e jne 0x10480626 */
  if (!C.zf) goto L_10480626;
  /* 10480610 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10480615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480618 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1048061a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048061d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1048061f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10480621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480624 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10480626:;
  /* 10480626 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1048062b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048062e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480633 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480636 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1048063a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1048063c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048063f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480642 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10480646 jmp 0x104806ae */
  goto L_104806ae;
L_10480648:;
  /* 10480648 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048064b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048064e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10480652 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480655 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480658 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1048065b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1048065d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480660 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480663 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10480666 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10480668 jne 0x10480685 */
  if (!C.zf) goto L_10480685;
  /* 1048066a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048066d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480670 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10480675 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10480677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048067a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1048067d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1048067f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480682 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10480685:;
  /* 10480685 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480688 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048068b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480695 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10480698 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1048069f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104806a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104806a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104806a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104806ae:;
  /* 104806ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104806b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104806b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104806b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104806b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104806bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104806bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104806c2:;
  /* 104806c2 mov eax, 1 */
  EAX = (0x1u);
L_104806c7:;
  /* 104806c7 mov esp, ebp */
  ESP = (EBP);
  /* 104806c9 pop ebp */
  EBP = (pop32());
  /* 104806ca ret  */
  ESPCHK(0x104800e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100206d0 @ 0x104806d0 (304 bytes, 79 insns) */
void f_104806d0(void) {
  FTRACE(0x104806d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104806d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104806d1 mov ebp, esp */
  EBP = (ESP);
  /* 104806d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104806d4 cmp dword ptr [0x1002fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104806db je 0x104807fc */
  if (C.zf) goto L_104807fc;
  /* 104806e1 mov eax, dword ptr [0x1002fe18] */
  EAX = (r32((uint32_t)(0x1002fe18)));
  /* 104806e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104806e9 mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 104806ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104806f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104806f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104806f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104806fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10480701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480704 push eax */
  push32((uint32_t)(EAX));
  /* 10480705 call dword ptr [0x10030304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030304))), 0x1048070bu);
  /* 1048070b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480710 mov ecx, dword ptr [0x1002fe18] */
  ECX = (r32((uint32_t)(0x1002fe18)));
  /* 10480716 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480718 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1048071d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10480720 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10480722 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 10480728 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1048072b mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 10480730 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10480733 mov edx, dword ptr [0x1002fe18] */
  EDX = (r32((uint32_t)(0x1002fe18)));
  /* 10480739 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10480744 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 10480749 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1048074c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1048074f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10480752 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 10480757 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1048075a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1048075d mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 10480763 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10480766 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1048076a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048076c jne 0x10480782 */
  if (!C.zf) goto L_10480782;
  /* 1048076e mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 10480774 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10480777 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10480779 mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 1048077f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10480782:;
  /* 10480782 mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 10480788 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048078c jne 0x104807f2 */
  if (!C.zf) goto L_104807f2;
  /* 1048078e cmp dword ptr [0x1002fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480795 jle 0x104807f2 */
  if ((C.zf||C.sf!=C.of)) goto L_104807f2;
  /* 10480797 mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 1048079c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1048079f push ecx */
  push32((uint32_t)(ECX));
  /* 104807a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104807a2 mov edx, dword ptr [0x1002fe2c] */
  EDX = (r32((uint32_t)(0x1002fe2c)));
  /* 104807a8 push edx */
  push32((uint32_t)(EDX));
  /* 104807a9 call dword ptr [0x10030300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030300))), 0x104807afu);
  /* 104807af mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 104807b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104807b7 mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 104807bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104807bf mov edx, dword ptr [0x1002fe20] */
  EDX = (r32((uint32_t)(0x1002fe20)));
  /* 104807c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104807c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104807ca push ecx */
  push32((uint32_t)(ECX));
  /* 104807cb mov eax, dword ptr [0x1002fe20] */
  EAX = (r32((uint32_t)(0x1002fe20)));
  /* 104807d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104807d3 push eax */
  push32((uint32_t)(EAX));
  /* 104807d4 mov ecx, dword ptr [0x1002fe20] */
  ECX = (r32((uint32_t)(0x1002fe20)));
  /* 104807da push ecx */
  push32((uint32_t)(ECX));
  /* 104807db call 0x10482e00 */
  push32(0x104807e0u); f_10482e00();
  /* 104807e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104807e3 mov edx, dword ptr [0x1002fe24] */
  EDX = (r32((uint32_t)(0x1002fe24)));
  /* 104807e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104807ec mov dword ptr [0x1002fe24], edx */
  w32((uint32_t)(0x1002fe24), (EDX));
L_104807f2:;
  /* 104807f2 mov dword ptr [0x1002fe20], 0 */
  w32((uint32_t)(0x1002fe20), (0x0u));
L_104807fc:;
  /* 104807fc mov esp, ebp */
  ESP = (EBP);
  /* 104807fe pop ebp */
  EBP = (pop32());
  /* 104807ff ret  */
  ESPCHK(0x104806d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020800 @ 0x10480800 (1565 bytes, 343 insns) */
void f_10480800(void) {
  FTRACE(0x10480800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10480800 push ebp */
  push32((uint32_t)(EBP));
  /* 10480801 mov ebp, esp */
  EBP = (ESP);
  /* 10480803 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480809 mov eax, dword ptr [0x1002fe24] */
  EAX = (r32((uint32_t)(0x1002fe24)));
  /* 1048080e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10480811 push eax */
  push32((uint32_t)(EAX));
  /* 10480812 mov ecx, dword ptr [0x1002fe28] */
  ECX = (r32((uint32_t)(0x1002fe28)));
  /* 10480818 push ecx */
  push32((uint32_t)(ECX));
  /* 10480819 call dword ptr [0x100302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d8))), 0x1048081fu);
  /* 1048081f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480821 je 0x1048082b */
  if (C.zf) goto L_1048082b;
  /* 10480823 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10480826 jmp 0x10480e19 */
  goto L_10480e19;
L_1048082b:;
  /* 1048082b mov edx, dword ptr [0x1002fe28] */
  EDX = (r32((uint32_t)(0x1002fe28)));
  /* 10480831 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10480837 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10480841 jmp 0x10480852 */
  goto L_10480852;
L_10480843:;
  /* 10480843 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10480849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048084c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10480852:;
  /* 10480852 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10480858 cmp ecx, dword ptr [0x1002fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048085e jge 0x10480e17 */
  if ((C.sf==C.of)) goto L_10480e17;
  /* 10480864 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1048086a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1048086d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10480873 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10480878 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1048087e push ecx */
  push32((uint32_t)(ECX));
  /* 1048087f call dword ptr [0x100302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d8))), 0x10480885u);
  /* 10480885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480887 je 0x10480893 */
  if (C.zf) goto L_10480893;
  /* 10480889 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1048088e jmp 0x10480e19 */
  goto L_10480e19;
L_10480893:;
  /* 10480893 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10480899 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1048089c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 104808a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104808a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104808ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104808b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104808b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104808ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104808bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 104808c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 104808d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104808d8 jmp 0x104808e3 */
  goto L_104808e3;
L_104808da:;
  /* 104808da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104808dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104808e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104808e3:;
  /* 104808e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104808e7 jge 0x10480ddb */
  if ((C.sf==C.of)) goto L_10480ddb;
  /* 104808ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 104808f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10480901 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1048090b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10480915 jmp 0x10480926 */
  goto L_10480926;
L_10480917:;
  /* 10480917 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1048091d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480920 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10480926:;
  /* 10480926 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048092d jge 0x10480942 */
  if ((C.sf==C.of)) goto L_10480942;
  /* 1048092f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10480935 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10480940 jmp 0x10480917 */
  goto L_10480917;
L_10480942:;
  /* 10480942 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480946 jl 0x10480d7d */
  if ((C.sf!=C.of)) goto L_10480d7d;
  /* 1048094c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10480951 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10480957 push ecx */
  push32((uint32_t)(ECX));
  /* 10480958 call dword ptr [0x100302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d8))), 0x1048095eu);
  /* 1048095e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480960 je 0x1048096c */
  if (C.zf) goto L_1048096c;
  /* 10480962 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10480967 jmp 0x10480e19 */
  goto L_10480e19;
L_1048096c:;
  /* 1048096c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10480972 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10480975 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1048097f jmp 0x10480990 */
  goto L_10480990;
L_10480981:;
  /* 10480981 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10480987 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048098a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10480990:;
  /* 10480990 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480997 jge 0x10480b14 */
  if ((C.sf==C.of)) goto L_10480b14;
  /* 1048099d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104809a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104809a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 104809a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104809af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104809b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 104809bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104809c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104809c5 jne 0x104809d2 */
  if (!C.zf) goto L_104809d2;
  /* 104809c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 104809cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104809d0 je 0x104809dc */
  if (C.zf) goto L_104809dc;
L_104809d2:;
  /* 104809d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 104809d7 jmp 0x10480e19 */
  goto L_10480e19;
L_104809dc:;
  /* 104809dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104809e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104809e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104809ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 104809f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 104809f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 104809fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104809ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10480a01 je 0x10480a39 */
  if (C.zf) goto L_10480a39;
  /* 10480a03 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10480a09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480a0c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10480a12 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480a1c jle 0x10480a28 */
  if ((C.zf||C.sf!=C.of)) goto L_10480a28;
  /* 10480a1e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10480a23 jmp 0x10480e19 */
  goto L_10480e19;
L_10480a28:;
  /* 10480a28 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10480a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480a31 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10480a37 jmp 0x10480a7b */
  goto L_10480a7b;
L_10480a39:;
  /* 10480a39 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10480a3f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10480a42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480a45 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10480a4b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480a52 jle 0x10480a5e */
  if ((C.zf||C.sf!=C.of)) goto L_10480a5e;
  /* 10480a54 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10480a5e:;
  /* 10480a5e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10480a64 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10480a6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480a6e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10480a74 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10480a7b:;
  /* 10480a7b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480a82 jl 0x10480a9d */
  if ((C.sf!=C.of)) goto L_10480a9d;
  /* 10480a84 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10480a8a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10480a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480a8f jne 0x10480a9d */
  if (!C.zf) goto L_10480a9d;
  /* 10480a91 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480a9b jle 0x10480aa7 */
  if ((C.zf||C.sf!=C.of)) goto L_10480aa7;
L_10480a9d:;
  /* 10480a9d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10480aa2 jmp 0x10480e19 */
  goto L_10480e19;
L_10480aa7:;
  /* 10480aa7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480aad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ab3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10480ab6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480abc je 0x10480ac8 */
  if (C.zf) goto L_10480ac8;
  /* 10480abe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10480ac3 jmp 0x10480e19 */
  goto L_10480e19;
L_10480ac8:;
  /* 10480ac8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480ace add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ad4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10480ada mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480ae0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480ae6 jb 0x104809dc */
  if (C.cf) goto L_104809dc;
  /* 10480aec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480af2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480af8 je 0x10480b04 */
  if (C.zf) goto L_10480b04;
  /* 10480afa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10480aff jmp 0x10480e19 */
  goto L_10480e19;
L_10480b04:;
  /* 10480b04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10480b07 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480b0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10480b0f jmp 0x10480981 */
  goto L_10480981;
L_10480b14:;
  /* 10480b14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480b17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10480b19 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480b1f je 0x10480b2b */
  if (C.zf) goto L_10480b2b;
  /* 10480b21 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10480b26 jmp 0x10480e19 */
  goto L_10480e19;
L_10480b2b:;
  /* 10480b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480b2e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10480b34 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10480b3b jmp 0x10480b46 */
  goto L_10480b46;
L_10480b3d:;
  /* 10480b3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480b40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480b43 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10480b46:;
  /* 10480b46 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480b4a jge 0x10480d7d */
  if ((C.sf==C.of)) goto L_10480d7d;
  /* 10480b50 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10480b5a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10480b60 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10480b66:;
  /* 10480b66 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480b6c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10480b6f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10480b75 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480b7b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480b81 je 0x10480caa */
  if (C.zf) goto L_10480caa;
  /* 10480b87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480b8a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10480b90 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480b97 je 0x10480caa */
  if (C.zf) goto L_10480caa;
  /* 10480b9d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480ba3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480ba9 jb 0x10480bbe */
  if (C.cf) goto L_10480bbe;
  /* 10480bab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10480bb1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480bb6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480bbc jb 0x10480bc8 */
  if (C.cf) goto L_10480bc8;
L_10480bbe:;
  /* 10480bbe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10480bc3 jmp 0x10480e19 */
  goto L_10480e19;
L_10480bc8:;
  /* 10480bc8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480bce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10480bd4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10480bda mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10480be0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480be3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10480be6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480be9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480bee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10480bf4:;
  /* 10480bf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480bf7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480bfd je 0x10480c1e */
  if (C.zf) goto L_10480c1e;
  /* 10480bff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480c02 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480c08 jne 0x10480c0c */
  if (!C.zf) goto L_10480c0c;
  /* 10480c0a jmp 0x10480c1e */
  goto L_10480c1e;
L_10480c0c:;
  /* 10480c0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10480c11 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10480c14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480c17 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480c19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10480c1c jmp 0x10480bf4 */
  goto L_10480bf4;
L_10480c1e:;
  /* 10480c1e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10480c21 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480c27 jne 0x10480c33 */
  if (!C.zf) goto L_10480c33;
  /* 10480c29 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10480c2e jmp 0x10480e19 */
  goto L_10480e19;
L_10480c33:;
  /* 10480c33 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480c39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10480c3b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10480c3e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480c41 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10480c47 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480c4e jle 0x10480c5a */
  if ((C.zf||C.sf!=C.of)) goto L_10480c5a;
  /* 10480c50 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10480c5a:;
  /* 10480c5a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10480c60 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480c63 je 0x10480c6f */
  if (C.zf) goto L_10480c6f;
  /* 10480c65 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10480c6a jmp 0x10480e19 */
  goto L_10480e19;
L_10480c6f:;
  /* 10480c6f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480c75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10480c78 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480c7e je 0x10480c8a */
  if (C.zf) goto L_10480c8a;
  /* 10480c80 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10480c85 jmp 0x10480e19 */
  goto L_10480e19;
L_10480c8a:;
  /* 10480c8a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10480c90 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10480c96 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10480c9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480c9f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10480ca5 jmp 0x10480b66 */
  goto L_10480b66;
L_10480caa:;
  /* 10480caa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480cb1 je 0x10480d21 */
  if (C.zf) goto L_10480d21;
  /* 10480cb3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480cb7 jge 0x10480ceb */
  if ((C.sf==C.of)) goto L_10480ceb;
  /* 10480cb9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480cbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480cc1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480cc3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10480cc9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10480ccb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10480cd1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480cd6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480cd9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480cdb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10480ce1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10480ce3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10480ce9 jmp 0x10480d21 */
  goto L_10480d21;
L_10480ceb:;
  /* 10480ceb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480cee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480cf1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480cf6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480cf8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10480cfe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10480d00 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10480d06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480d09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480d0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10480d11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10480d13 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10480d19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10480d1b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10480d21:;
  /* 10480d21 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10480d27 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480d2a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480d30 jne 0x10480d44 */
  if (!C.zf) goto L_10480d44;
  /* 10480d32 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10480d35 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10480d3b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480d42 je 0x10480d4e */
  if (C.zf) goto L_10480d4e;
L_10480d44:;
  /* 10480d44 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10480d49 jmp 0x10480e19 */
  goto L_10480e19;
L_10480d4e:;
  /* 10480d4e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10480d54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10480d57 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480d5d je 0x10480d69 */
  if (C.zf) goto L_10480d69;
  /* 10480d5f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10480d64 jmp 0x10480e19 */
  goto L_10480e19;
L_10480d69:;
  /* 10480d69 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10480d6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480d72 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10480d78 jmp 0x10480b3d */
  goto L_10480b3d;
L_10480d7d:;
  /* 10480d7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10480d80 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10480d86 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10480d8c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480d90 jne 0x10480daa */
  if (!C.zf) goto L_10480daa;
  /* 10480d92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10480d95 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10480d9b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10480da1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480da8 je 0x10480db1 */
  if (C.zf) goto L_10480db1;
L_10480daa:;
  /* 10480daa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10480daf jmp 0x10480e19 */
  goto L_10480e19;
L_10480db1:;
  /* 10480db1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10480db7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480dbd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10480dc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10480dc6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480dcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10480dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480dd1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10480dd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10480dd6 jmp 0x104808da */
  goto L_104808da;
L_10480ddb:;
  /* 10480ddb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10480de1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10480de7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480de9 jne 0x10480dfc */
  if (!C.zf) goto L_10480dfc;
  /* 10480deb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10480df1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10480df7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480dfa je 0x10480e03 */
  if (C.zf) goto L_10480e03;
L_10480dfc:;
  /* 10480dfc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10480e01 jmp 0x10480e19 */
  goto L_10480e19;
L_10480e03:;
  /* 10480e03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10480e09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480e0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10480e12 jmp 0x10480843 */
  goto L_10480843;
L_10480e17:;
  /* 10480e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10480e19:;
  /* 10480e19 mov esp, ebp */
  ESP = (EBP);
  /* 10480e1b pop ebp */
  EBP = (pop32());
  /* 10480e1c ret  */
  ESPCHK(0x10480800u, _esp0);
  ESP += 4; return;
}

/* FUN_10020e20 @ 0x10480e20 (250 bytes, 92 insns) */
void f_10480e20(void) {
  FTRACE(0x10480e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10480e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10480e21 mov ebp, esp */
  EBP = (ESP);
  /* 10480e23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480e26 push ebx */
  push32((uint32_t)(EBX));
  /* 10480e27 push esi */
  push32((uint32_t)(ESI));
  /* 10480e28 push edi */
  push32((uint32_t)(EDI));
  /* 10480e29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10480e2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10480e2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10480e32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10480e35:;
  /* 10480e35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480e39 jne 0x10480e59 */
  if (!C.zf) goto L_10480e59;
  /* 10480e3b push 0x10029e58 */
  push32((uint32_t)(0x10029e58u));
  /* 10480e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10480e42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10480e44 push 0x10029e4c */
  push32((uint32_t)(0x10029e4cu));
  /* 10480e49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10480e4b call 0x10479fd0 */
  push32(0x10480e50u); f_10479fd0();
  /* 10480e50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480e53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480e56 jne 0x10480e59 */
  if (!C.zf) goto L_10480e59;
  /* 10480e58 int3  */
  x86_unimpl("int3 @ 0x10480e58");
L_10480e59:;
  /* 10480e59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10480e5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10480e5d jne 0x10480e35 */
  if (!C.zf) goto L_10480e35;
L_10480e5f:;
  /* 10480e5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480e63 jne 0x10480e83 */
  if (!C.zf) goto L_10480e83;
  /* 10480e65 push 0x10029e3c */
  push32((uint32_t)(0x10029e3cu));
  /* 10480e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10480e6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10480e6e push 0x10029e4c */
  push32((uint32_t)(0x10029e4cu));
  /* 10480e73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10480e75 call 0x10479fd0 */
  push32(0x10480e7au); f_10479fd0();
  /* 10480e7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480e7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480e80 jne 0x10480e83 */
  if (!C.zf) goto L_10480e83;
  /* 10480e82 int3  */
  x86_unimpl("int3 @ 0x10480e82");
L_10480e83:;
  /* 10480e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10480e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480e87 jne 0x10480e5f */
  if (!C.zf) goto L_10480e5f;
  /* 10480e89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480e8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10480e93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480e99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10480e9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480ea2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10480ea4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ea7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10480eae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10480eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10480eb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10480eb5 push edx */
  push32((uint32_t)(EDX));
  /* 10480eb6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10480eba call 0x10481ea0 */
  push32(0x10480ebfu); f_10481ea0();
  /* 10480ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ec2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10480ec5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ec8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10480ecb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480ece mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ed1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10480ed4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ed7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480edb jl 0x10480eff */
  if ((C.sf!=C.of)) goto L_10480eff;
  /* 10480edd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ee0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10480ee2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10480ee5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10480ee7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10480eed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10480ef0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480ef3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10480ef5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ef8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480efb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10480efd jmp 0x10480f10 */
  goto L_10480f10;
L_10480eff:;
  /* 10480eff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10480f02 push edx */
  push32((uint32_t)(EDX));
  /* 10480f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10480f05 call 0x10481c20 */
  push32(0x10480f0au); f_10481c20();
  /* 10480f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480f0d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10480f10:;
  /* 10480f10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10480f13 pop edi */
  EDI = (pop32());
  /* 10480f14 pop esi */
  ESI = (pop32());
  /* 10480f15 pop ebx */
  EBX = (pop32());
  /* 10480f16 mov esp, ebp */
  ESP = (EBP);
  /* 10480f18 pop ebp */
  EBP = (pop32());
  /* 10480f19 ret  */
  ESPCHK(0x10480e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10020f20 @ 0x10480f20 (183 bytes, 58 insns) */
void f_10480f20(void) {
  FTRACE(0x10480f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10480f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10480f21 mov ebp, esp */
  EBP = (ESP);
  /* 10480f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10480f2c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10480f31 ja 0x10480f4a */
  if ((!C.cf&&!C.zf)) goto L_10480f4a;
  /* 10480f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480f36 mov edx, dword ptr [0x1002cc98] */
  EDX = (r32((uint32_t)(0x1002cc98)));
  /* 10480f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10480f3e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10480f42 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10480f45 jmp 0x10480fd3 */
  goto L_10480fd3;
L_10480f4a:;
  /* 10480f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480f4d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10480f50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10480f56 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10480f5c mov edx, dword ptr [0x1002cc98] */
  EDX = (r32((uint32_t)(0x1002cc98)));
  /* 10480f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10480f64 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10480f68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10480f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480f6f je 0x10480f93 */
  if (C.zf) goto L_10480f93;
  /* 10480f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480f74 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10480f77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10480f7d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10480f80 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10480f83 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10480f86 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10480f8a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10480f91 jmp 0x10480fa4 */
  goto L_10480fa4;
L_10480f93:;
  /* 10480f93 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10480f96 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10480f99 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10480f9d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10480fa4:;
  /* 10480fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10480fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10480fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10480faa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10480fad push ecx */
  push32((uint32_t)(ECX));
  /* 10480fae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10480fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10480fb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10480fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10480fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10480fb8 call 0x10483140 */
  push32(0x10480fbdu); f_10483140();
  /* 10480fbd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10480fc2 jne 0x10480fc8 */
  if (!C.zf) goto L_10480fc8;
  /* 10480fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10480fc6 jmp 0x10480fd3 */
  goto L_10480fd3;
L_10480fc8:;
  /* 10480fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10480fcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10480fd0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10480fd3:;
  /* 10480fd3 mov esp, ebp */
  ESP = (EBP);
  /* 10480fd5 pop ebp */
  EBP = (pop32());
  /* 10480fd6 ret  */
  ESPCHK(0x10480f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10020fe0 @ 0x10480fe0 (836 bytes, 238 insns) */
void f_10480fe0(void) {
  FTRACE(0x10480fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10480fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10480fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10480fe3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10480fe6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10480fe8 call 0x1047e910 */
  push32(0x10480fedu); f_1047e910();
  /* 10480fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10480ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10480ff4 call 0x10481330 */
  push32(0x10480ff9u); f_10481330();
  /* 10480ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10480ffc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10480fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481002 cmp ecx, dword ptr [0x1002fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481008 jne 0x1048101b */
  if (!C.zf) goto L_1048101b;
  /* 1048100a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1048100c call 0x1047e9b0 */
  push32(0x10481011u); f_1047e9b0();
  /* 10481011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481016 jmp 0x10481320 */
  goto L_10481320;
L_1048101b:;
  /* 1048101b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048101f jne 0x1048103c */
  if (!C.zf) goto L_1048103c;
  /* 10481021 call 0x10481410 */
  push32(0x10481026u); f_10481410();
  /* 10481026 call 0x10481490 */
  push32(0x1048102bu); f_10481490();
  /* 1048102b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1048102d call 0x1047e9b0 */
  push32(0x10481032u); f_1047e9b0();
  /* 10481032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481035 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481037 jmp 0x10481320 */
  goto L_10481320;
L_1048103c:;
  /* 1048103c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10481043 jmp 0x1048104e */
  goto L_1048104e;
L_10481045:;
  /* 10481045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048104b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1048104e:;
  /* 1048104e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481052 jae 0x1048119f */
  if (!C.cf) goto L_1048119f;
  /* 10481058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048105b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048105e mov ecx, dword ptr [eax + 0x1002ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1002ceb8)));
  /* 10481064 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481067 jne 0x1048119a */
  if (!C.zf) goto L_1048119a;
  /* 1048106d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10481074 jmp 0x1048107f */
  goto L_1048107f;
L_10481076:;
  /* 10481076 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481079 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048107c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1048107f:;
  /* 1048107f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481086 jae 0x10481094 */
  if (!C.cf) goto L_10481094;
  /* 10481088 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048108b mov byte ptr [eax + 0x1002fd00], 0 */
  w8((uint32_t)(EAX + 0x1002fd00), (0x0u));
  /* 10481092 jmp 0x10481076 */
  goto L_10481076;
L_10481094:;
  /* 10481094 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1048109b jmp 0x104810a6 */
  goto L_104810a6;
L_1048109d:;
  /* 1048109d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104810a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104810a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104810a6:;
  /* 104810a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104810aa jae 0x10481127 */
  if (!C.cf) goto L_10481127;
  /* 104810ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104810af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104810b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104810b5 lea ecx, [edx + eax*8 + 0x1002cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1002cec8));
  /* 104810bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104810bf jmp 0x104810ca */
  goto L_104810ca;
L_104810c1:;
  /* 104810c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104810c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104810c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104810ca:;
  /* 104810ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104810cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104810cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104810d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104810d3 je 0x10481122 */
  if (C.zf) goto L_10481122;
  /* 104810d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104810d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104810da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104810dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104810df je 0x10481122 */
  if (C.zf) goto L_10481122;
  /* 104810e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104810e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104810e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104810e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104810eb jmp 0x104810f6 */
  goto L_104810f6;
L_104810ed:;
  /* 104810ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104810f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104810f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104810f6:;
  /* 104810f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104810f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104810fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104810fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481101 ja 0x10481120 */
  if ((!C.cf&&!C.zf)) goto L_10481120;
  /* 10481103 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481106 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10481109 mov dl, byte ptr [eax + 0x1002fd01] */
  DL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 1048110f or dl, byte ptr [ecx + 0x1002ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1002ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10481115 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481118 mov byte ptr [eax + 0x1002fd01], dl */
  w8((uint32_t)(EAX + 0x1002fd01), (DL));
  /* 1048111e jmp 0x104810ed */
  goto L_104810ed;
L_10481120:;
  /* 10481120 jmp 0x104810c1 */
  goto L_104810c1;
L_10481122:;
  /* 10481122 jmp 0x1048109d */
  goto L_1048109d;
L_10481127:;
  /* 10481127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048112a mov dword ptr [0x1002fb64], ecx */
  w32((uint32_t)(0x1002fb64), (ECX));
  /* 10481130 mov dword ptr [0x1002fbec], 1 */
  w32((uint32_t)(0x1002fbec), (0x1u));
  /* 1048113a mov edx, dword ptr [0x1002fb64] */
  EDX = (r32((uint32_t)(0x1002fb64)));
  /* 10481140 push edx */
  push32((uint32_t)(EDX));
  /* 10481141 call 0x10481390 */
  push32(0x10481146u); f_10481390();
  /* 10481146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481149 mov dword ptr [0x1002fe04], eax */
  w32((uint32_t)(0x1002fe04), (EAX));
  /* 1048114e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10481155 jmp 0x10481160 */
  goto L_10481160;
L_10481157:;
  /* 10481157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048115a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048115d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10481160:;
  /* 10481160 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481164 jae 0x10481184 */
  if (!C.cf) goto L_10481184;
  /* 10481166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481169 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048116c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048116f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10481172 mov cx, word ptr [ecx + eax*2 + 0x1002cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1002cebc)));
  /* 1048117a mov word ptr [edx*2 + 0x1002fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x1002fbe0), (CX));
  /* 10481182 jmp 0x10481157 */
  goto L_10481157;
L_10481184:;
  /* 10481184 call 0x10481490 */
  push32(0x10481189u); f_10481490();
  /* 10481189 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1048118b call 0x1047e9b0 */
  push32(0x10481190u); f_1047e9b0();
  /* 10481190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481195 jmp 0x10481320 */
  goto L_10481320;
L_1048119a:;
  /* 1048119a jmp 0x10481045 */
  goto L_10481045;
L_1048119f:;
  /* 1048119f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 104811a2 push edx */
  push32((uint32_t)(EDX));
  /* 104811a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104811a6 push eax */
  push32((uint32_t)(EAX));
  /* 104811a7 call dword ptr [0x1003032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003032c))), 0x104811adu);
  /* 104811ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104811b0 jne 0x104812f2 */
  if (!C.zf) goto L_104812f2;
  /* 104811b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104811bd jmp 0x104811c8 */
  goto L_104811c8;
L_104811bf:;
  /* 104811bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104811c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104811c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104811c8:;
  /* 104811c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104811cf jae 0x104811dd */
  if (!C.cf) goto L_104811dd;
  /* 104811d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104811d4 mov byte ptr [edx + 0x1002fd00], 0 */
  w8((uint32_t)(EDX + 0x1002fd00), (0x0u));
  /* 104811db jmp 0x104811bf */
  goto L_104811bf;
L_104811dd:;
  /* 104811dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104811e0 mov dword ptr [0x1002fb64], eax */
  w32((uint32_t)(0x1002fb64), (EAX));
  /* 104811e5 mov dword ptr [0x1002fe04], 0 */
  w32((uint32_t)(0x1002fe04), (0x0u));
  /* 104811ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104811f3 jbe 0x104812ae */
  if ((C.cf||C.zf)) goto L_104812ae;
  /* 104811f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 104811fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104811ff jmp 0x1048120a */
  goto L_1048120a;
L_10481201:;
  /* 10481201 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10481204 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481207 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1048120a:;
  /* 1048120a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1048120d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048120f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10481211 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10481213 je 0x1048125c */
  if (C.zf) goto L_1048125c;
  /* 10481215 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10481218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048121a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1048121d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048121f je 0x1048125c */
  if (C.zf) goto L_1048125c;
  /* 10481221 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10481224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481226 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10481228 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1048122b jmp 0x10481236 */
  goto L_10481236;
L_1048122d:;
  /* 1048122d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481233 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10481236:;
  /* 10481236 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10481239 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1048123b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1048123e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481241 ja 0x1048125a */
  if ((!C.cf&&!C.zf)) goto L_1048125a;
  /* 10481243 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481246 mov cl, byte ptr [eax + 0x1002fd01] */
  CL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 1048124c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1048124f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481252 mov byte ptr [edx + 0x1002fd01], cl */
  w8((uint32_t)(EDX + 0x1002fd01), (CL));
  /* 10481258 jmp 0x1048122d */
  goto L_1048122d;
L_1048125a:;
  /* 1048125a jmp 0x10481201 */
  goto L_10481201;
L_1048125c:;
  /* 1048125c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10481263 jmp 0x1048126e */
  goto L_1048126e;
L_10481265:;
  /* 10481265 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048126b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1048126e:;
  /* 1048126e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481275 jae 0x1048128e */
  if (!C.cf) goto L_1048128e;
  /* 10481277 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048127a mov dl, byte ptr [ecx + 0x1002fd01] */
  DL = (r8((uint32_t)(ECX + 0x1002fd01)));
  /* 10481280 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10481283 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10481286 mov byte ptr [eax + 0x1002fd01], dl */
  w8((uint32_t)(EAX + 0x1002fd01), (DL));
  /* 1048128c jmp 0x10481265 */
  goto L_10481265;
L_1048128e:;
  /* 1048128e mov ecx, dword ptr [0x1002fb64] */
  ECX = (r32((uint32_t)(0x1002fb64)));
  /* 10481294 push ecx */
  push32((uint32_t)(ECX));
  /* 10481295 call 0x10481390 */
  push32(0x1048129au); f_10481390();
  /* 1048129a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048129d mov dword ptr [0x1002fe04], eax */
  w32((uint32_t)(0x1002fe04), (EAX));
  /* 104812a2 mov dword ptr [0x1002fbec], 1 */
  w32((uint32_t)(0x1002fbec), (0x1u));
  /* 104812ac jmp 0x104812b8 */
  goto L_104812b8;
L_104812ae:;
  /* 104812ae mov dword ptr [0x1002fbec], 0 */
  w32((uint32_t)(0x1002fbec), (0x0u));
L_104812b8:;
  /* 104812b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104812bf jmp 0x104812ca */
  goto L_104812ca;
L_104812c1:;
  /* 104812c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104812c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104812c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104812ca:;
  /* 104812ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104812ce jae 0x104812df */
  if (!C.cf) goto L_104812df;
  /* 104812d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104812d3 mov word ptr [eax*2 + 0x1002fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1002fbe0), (0x0u));
  /* 104812dd jmp 0x104812c1 */
  goto L_104812c1;
L_104812df:;
  /* 104812df call 0x10481490 */
  push32(0x104812e4u); f_10481490();
  /* 104812e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104812e6 call 0x1047e9b0 */
  push32(0x104812ebu); f_1047e9b0();
  /* 104812eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104812ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104812f0 jmp 0x10481320 */
  goto L_10481320;
L_104812f2:;
  /* 104812f2 cmp dword ptr [0x1002e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104812f9 je 0x10481313 */
  if (C.zf) goto L_10481313;
  /* 104812fb call 0x10481410 */
  push32(0x10481300u); f_10481410();
  /* 10481300 call 0x10481490 */
  push32(0x10481305u); f_10481490();
  /* 10481305 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10481307 call 0x1047e9b0 */
  push32(0x1048130cu); f_1047e9b0();
  /* 1048130c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048130f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481311 jmp 0x10481320 */
  goto L_10481320;
L_10481313:;
  /* 10481313 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10481315 call 0x1047e9b0 */
  push32(0x1048131au); f_1047e9b0();
  /* 1048131a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048131d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10481320:;
  /* 10481320 mov esp, ebp */
  ESP = (EBP);
  /* 10481322 pop ebp */
  EBP = (pop32());
  /* 10481323 ret  */
  ESPCHK(0x10480fe0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10481330 (89 bytes, 21 insns) */
void f_10481330(void) {
  FTRACE(0x10481330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481330 push ebp */
  push32((uint32_t)(EBP));
  /* 10481331 mov ebp, esp */
  EBP = (ESP);
  /* 10481333 mov dword ptr [0x1002e670], 0 */
  w32((uint32_t)(0x1002e670), (0x0u));
  /* 1048133d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481341 jne 0x10481355 */
  if (!C.zf) goto L_10481355;
  /* 10481343 mov dword ptr [0x1002e670], 1 */
  w32((uint32_t)(0x1002e670), (0x1u));
  /* 1048134d call dword ptr [0x10030334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030334))), 0x10481353u);
  /* 10481353 jmp 0x10481387 */
  goto L_10481387;
L_10481355:;
  /* 10481355 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481359 jne 0x1048136d */
  if (!C.zf) goto L_1048136d;
  /* 1048135b mov dword ptr [0x1002e670], 1 */
  w32((uint32_t)(0x1002e670), (0x1u));
  /* 10481365 call dword ptr [0x10030330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030330))), 0x1048136bu);
  /* 1048136b jmp 0x10481387 */
  goto L_10481387;
L_1048136d:;
  /* 1048136d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481371 jne 0x10481384 */
  if (!C.zf) goto L_10481384;
  /* 10481373 mov dword ptr [0x1002e670], 1 */
  w32((uint32_t)(0x1002e670), (0x1u));
  /* 1048137d mov eax, dword ptr [0x1002e690] */
  EAX = (r32((uint32_t)(0x1002e690)));
  /* 10481382 jmp 0x10481387 */
  goto L_10481387;
L_10481384:;
  /* 10481384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10481387:;
  /* 10481387 pop ebp */
  EBP = (pop32());
  /* 10481388 ret  */
  ESPCHK(0x10481330u, _esp0);
  ESP += 4; return;
}

/* FUN_10021390 @ 0x10481390 (52 bytes, 26 insns) */
void f_10481390(void) {
  FTRACE(0x10481390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481390 push ebp */
  push32((uint32_t)(EBP));
  /* 10481391 mov ebp, esp */
  EBP = (ESP);
  /* 10481393 push ecx */
  push32((uint32_t)(ECX));
  /* 10481394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481397 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048139a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048139d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104813a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104813a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104813aa ja 0x104813da */
  if ((!C.cf&&!C.zf)) goto L_104813da;
  /* 104813ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104813af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104813b1 mov dl, byte ptr [eax + 0x100093f4] */
  DL = (r8((uint32_t)(EAX + 0x100093f4)));
  /* 104813b7 jmp dword ptr [edx*4 + 0x100093e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x100093e0)))); return;
  /* 104813be mov eax, 0x411 */
  EAX = (0x411u);
  /* 104813c3 jmp 0x104813dc */
  goto L_104813dc;
  /* 104813c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 104813ca jmp 0x104813dc */
  goto L_104813dc;
  /* 104813cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 104813d1 jmp 0x104813dc */
  goto L_104813dc;
  /* 104813d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 104813d8 jmp 0x104813dc */
  goto L_104813dc;
L_104813da:;
  /* 104813da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104813dc:;
  /* 104813dc mov esp, ebp */
  ESP = (EBP);
  /* 104813de pop ebp */
  EBP = (pop32());
  /* 104813df ret  */
  ESPCHK(0x10481390u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10481410 (116 bytes, 29 insns) */
void f_10481410(void) {
  FTRACE(0x10481410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481410 push ebp */
  push32((uint32_t)(EBP));
  /* 10481411 mov ebp, esp */
  EBP = (ESP);
  /* 10481413 push ecx */
  push32((uint32_t)(ECX));
  /* 10481414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1048141b jmp 0x10481426 */
  goto L_10481426;
L_1048141d:;
  /* 1048141d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10481426:;
  /* 10481426 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048142d jge 0x1048143b */
  if ((C.sf==C.of)) goto L_1048143b;
  /* 1048142f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481432 mov byte ptr [ecx + 0x1002fd00], 0 */
  w8((uint32_t)(ECX + 0x1002fd00), (0x0u));
  /* 10481439 jmp 0x1048141d */
  goto L_1048141d;
L_1048143b:;
  /* 1048143b mov dword ptr [0x1002fb64], 0 */
  w32((uint32_t)(0x1002fb64), (0x0u));
  /* 10481445 mov dword ptr [0x1002fbec], 0 */
  w32((uint32_t)(0x1002fbec), (0x0u));
  /* 1048144f mov dword ptr [0x1002fe04], 0 */
  w32((uint32_t)(0x1002fe04), (0x0u));
  /* 10481459 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10481460 jmp 0x1048146b */
  goto L_1048146b;
L_10481462:;
  /* 10481462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481465 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481468 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1048146b:;
  /* 1048146b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048146f jge 0x10481480 */
  if ((C.sf==C.of)) goto L_10481480;
  /* 10481471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481474 mov word ptr [eax*2 + 0x1002fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1002fbe0), (0x0u));
  /* 1048147e jmp 0x10481462 */
  goto L_10481462;
L_10481480:;
  /* 10481480 mov esp, ebp */
  ESP = (EBP);
  /* 10481482 pop ebp */
  EBP = (pop32());
  /* 10481483 ret  */
  ESPCHK(0x10481410u, _esp0);
  ESP += 4; return;
}

/* FUN_10021490 @ 0x10481490 (770 bytes, 175 insns) */
void f_10481490(void) {
  FTRACE(0x10481490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481490 push ebp */
  push32((uint32_t)(EBP));
  /* 10481491 mov ebp, esp */
  EBP = (ESP);
  /* 10481493 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481499 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1048149f push eax */
  push32((uint32_t)(EAX));
  /* 104814a0 mov ecx, dword ptr [0x1002fb64] */
  ECX = (r32((uint32_t)(0x1002fb64)));
  /* 104814a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104814a7 call dword ptr [0x1003032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003032c))), 0x104814adu);
  /* 104814ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104814b0 jne 0x104816c9 */
  if (!C.zf) goto L_104816c9;
  /* 104814b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104814c0 jmp 0x104814d1 */
  goto L_104814d1;
L_104814c2:;
  /* 104814c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104814c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104814cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104814d1:;
  /* 104814d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104814db jae 0x104814f2 */
  if (!C.cf) goto L_104814f2;
  /* 104814dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104814e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 104814e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 104814f0 jmp 0x104814c2 */
  goto L_104814c2;
L_104814f2:;
  /* 104814f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 104814f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 104814ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10481502 jmp 0x1048150d */
  goto L_1048150d;
L_10481504:;
  /* 10481504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481507 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048150a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1048150d:;
  /* 1048150d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481510 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481512 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10481514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481516 je 0x10481558 */
  if (C.zf) goto L_10481558;
  /* 10481518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048151b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048151d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1048151f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10481525 jmp 0x10481536 */
  goto L_10481536;
L_10481527:;
  /* 10481527 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048152d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481530 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10481536:;
  /* 10481536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048153b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1048153e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481544 ja 0x10481556 */
  if ((!C.cf&&!C.zf)) goto L_10481556;
  /* 10481546 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048154c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10481554 jmp 0x10481527 */
  goto L_10481527;
L_10481556:;
  /* 10481556 jmp 0x10481504 */
  goto L_10481504;
L_10481558:;
  /* 10481558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048155a mov eax, dword ptr [0x1002fe04] */
  EAX = (r32((uint32_t)(0x1002fe04)));
  /* 1048155f push eax */
  push32((uint32_t)(EAX));
  /* 10481560 mov ecx, dword ptr [0x1002fb64] */
  ECX = (r32((uint32_t)(0x1002fb64)));
  /* 10481566 push ecx */
  push32((uint32_t)(ECX));
  /* 10481567 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1048156d push edx */
  push32((uint32_t)(EDX));
  /* 1048156e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10481573 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10481579 push eax */
  push32((uint32_t)(EAX));
  /* 1048157a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048157c call 0x10483140 */
  push32(0x10481581u); f_10483140();
  /* 10481581 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10481586 mov ecx, dword ptr [0x1002fb64] */
  ECX = (r32((uint32_t)(0x1002fb64)));
  /* 1048158c push ecx */
  push32((uint32_t)(ECX));
  /* 1048158d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10481592 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10481598 push edx */
  push32((uint32_t)(EDX));
  /* 10481599 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1048159e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104815a4 push eax */
  push32((uint32_t)(EAX));
  /* 104815a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104815aa mov ecx, dword ptr [0x1002fe04] */
  ECX = (r32((uint32_t)(0x1002fe04)));
  /* 104815b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104815b1 call 0x10483300 */
  push32(0x104815b6u); f_10483300();
  /* 104815b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104815b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104815bb mov edx, dword ptr [0x1002fb64] */
  EDX = (r32((uint32_t)(0x1002fb64)));
  /* 104815c1 push edx */
  push32((uint32_t)(EDX));
  /* 104815c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104815c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 104815cd push eax */
  push32((uint32_t)(EAX));
  /* 104815ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104815d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 104815d9 push ecx */
  push32((uint32_t)(ECX));
  /* 104815da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 104815df mov edx, dword ptr [0x1002fe04] */
  EDX = (r32((uint32_t)(0x1002fe04)));
  /* 104815e5 push edx */
  push32((uint32_t)(EDX));
  /* 104815e6 call 0x10483300 */
  push32(0x104815ebu); f_10483300();
  /* 104815eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104815ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104815f8 jmp 0x10481609 */
  goto L_10481609;
L_104815fa:;
  /* 104815fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481603 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10481609:;
  /* 10481609 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481613 jae 0x104816c4 */
  if (!C.cf) goto L_104816c4;
  /* 10481619 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048161f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481621 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10481629 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1048162c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048162e je 0x10481666 */
  if (C.zf) goto L_10481666;
  /* 10481630 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481636 mov cl, byte ptr [eax + 0x1002fd01] */
  CL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 1048163c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1048163f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481645 mov byte ptr [edx + 0x1002fd01], cl */
  w8((uint32_t)(EDX + 0x1002fd01), (CL));
  /* 1048164b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481651 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481657 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1048165e mov byte ptr [eax + 0x1002fc00], dl */
  w8((uint32_t)(EAX + 0x1002fc00), (DL));
  /* 10481664 jmp 0x104816bf */
  goto L_104816bf;
L_10481666:;
  /* 10481666 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048166c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048166e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10481676 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10481679 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048167b je 0x104816b2 */
  if (C.zf) goto L_104816b2;
  /* 1048167d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481683 mov al, byte ptr [edx + 0x1002fd01] */
  AL = (r8((uint32_t)(EDX + 0x1002fd01)));
  /* 10481689 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1048168b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481691 mov byte ptr [ecx + 0x1002fd01], al */
  w8((uint32_t)(ECX + 0x1002fd01), (AL));
  /* 10481697 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048169d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104816a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 104816aa mov byte ptr [edx + 0x1002fc00], cl */
  w8((uint32_t)(EDX + 0x1002fc00), (CL));
  /* 104816b0 jmp 0x104816bf */
  goto L_104816bf;
L_104816b2:;
  /* 104816b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104816b8 mov byte ptr [edx + 0x1002fc00], 0 */
  w8((uint32_t)(EDX + 0x1002fc00), (0x0u));
L_104816bf:;
  /* 104816bf jmp 0x104815fa */
  goto L_104815fa;
L_104816c4:;
  /* 104816c4 jmp 0x1048178e */
  goto L_1048178e;
L_104816c9:;
  /* 104816c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104816d3 jmp 0x104816e4 */
  goto L_104816e4;
L_104816d5:;
  /* 104816d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104816db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104816de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104816e4:;
  /* 104816e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104816ee jae 0x1048178e */
  if (!C.cf) goto L_1048178e;
  /* 104816f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104816fb jb 0x10481738 */
  if (C.cf) goto L_10481738;
  /* 104816fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481704 ja 0x10481738 */
  if ((!C.cf&&!C.zf)) goto L_10481738;
  /* 10481706 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048170c mov dl, byte ptr [ecx + 0x1002fd01] */
  DL = (r8((uint32_t)(ECX + 0x1002fd01)));
  /* 10481712 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10481715 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048171b mov byte ptr [eax + 0x1002fd01], dl */
  w8((uint32_t)(EAX + 0x1002fd01), (DL));
  /* 10481721 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481727 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048172a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481730 mov byte ptr [edx + 0x1002fc00], cl */
  w8((uint32_t)(EDX + 0x1002fc00), (CL));
  /* 10481736 jmp 0x10481789 */
  goto L_10481789;
L_10481738:;
  /* 10481738 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048173f jb 0x1048177c */
  if (C.cf) goto L_1048177c;
  /* 10481741 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481748 ja 0x1048177c */
  if ((!C.cf&&!C.zf)) goto L_1048177c;
  /* 1048174a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481750 mov cl, byte ptr [eax + 0x1002fd01] */
  CL = (r8((uint32_t)(EAX + 0x1002fd01)));
  /* 10481756 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10481759 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048175f mov byte ptr [edx + 0x1002fd01], cl */
  w8((uint32_t)(EDX + 0x1002fd01), (CL));
  /* 10481765 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1048176b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048176e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481774 mov byte ptr [ecx + 0x1002fc00], al */
  w8((uint32_t)(ECX + 0x1002fc00), (AL));
  /* 1048177a jmp 0x10481789 */
  goto L_10481789;
L_1048177c:;
  /* 1048177c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10481782 mov byte ptr [edx + 0x1002fc00], 0 */
  w8((uint32_t)(EDX + 0x1002fc00), (0x0u));
L_10481789:;
  /* 10481789 jmp 0x104816d5 */
  goto L_104816d5;
L_1048178e:;
  /* 1048178e mov esp, ebp */
  ESP = (EBP);
  /* 10481790 pop ebp */
  EBP = (pop32());
  /* 10481791 ret  */
  ESPCHK(0x10481490u, _esp0);
  ESP += 4; return;
}

/* FUN_100217a0 @ 0x104817a0 (23 bytes, 9 insns) */
void f_104817a0(void) {
  FTRACE(0x104817a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104817a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104817a1 mov ebp, esp */
  EBP = (ESP);
  /* 104817a3 cmp dword ptr [0x1002fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104817aa je 0x104817b3 */
  if (C.zf) goto L_104817b3;
  /* 104817ac mov eax, dword ptr [0x1002fb64] */
  EAX = (r32((uint32_t)(0x1002fb64)));
  /* 104817b1 jmp 0x104817b5 */
  goto L_104817b5;
L_104817b3:;
  /* 104817b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104817b5:;
  /* 104817b5 pop ebp */
  EBP = (pop32());
  /* 104817b6 ret  */
  ESPCHK(0x104817a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100217c0 @ 0x104817c0 (34 bytes, 10 insns) */
void f_104817c0(void) {
  FTRACE(0x104817c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104817c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104817c1 mov ebp, esp */
  EBP = (ESP);
  /* 104817c3 cmp dword ptr [0x1002ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104817ca jne 0x104817e0 */
  if (!C.zf) goto L_104817e0;
  /* 104817cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 104817ce call 0x10480fe0 */
  push32(0x104817d3u); f_10480fe0();
  /* 104817d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104817d6 mov dword ptr [0x1002ffb0], 1 */
  w32((uint32_t)(0x1002ffb0), (0x1u));
L_104817e0:;
  /* 104817e0 pop ebp */
  EBP = (pop32());
  /* 104817e1 ret  */
  ESPCHK(0x104817c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100217f0 @ 0x104817f0 (176 bytes, 187 insns) */
void f_104817f0(void) {
  FTRACE(0x104817f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104817f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104817f1 mov ebp, esp */
  EBP = (ESP);
  /* 104817f3 push edi */
  push32((uint32_t)(EDI));
  /* 104817f4 push esi */
  push32((uint32_t)(ESI));
  /* 104817f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104817f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104817fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104817fe mov eax, ecx */
  EAX = (ECX);
  /* 10481800 mov edx, ecx */
  EDX = (ECX);
  /* 10481802 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481804 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481806 jbe 0x10481810 */
  if ((C.cf||C.zf)) goto L_10481810;
  /* 10481808 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048180a jb 0x10481988 */
  if (C.cf) goto L_10481988;
L_10481810:;
  /* 10481810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10481816 jne 0x1048182c */
  if (!C.zf) goto L_1048182c;
  /* 10481818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1048181b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1048181e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481821 jb 0x1048184c */
  if (C.cf) goto L_1048184c;
  /* 10481823 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10481825 jmp dword ptr [edx*4 + 0x10009938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009938)))); return;
L_1048182c:;
  /* 1048182c mov eax, edi */
  EAX = (EDI);
  /* 1048182e mov edx, 3 */
  EDX = (0x3u);
  /* 10481833 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481836 jb 0x10481844 */
  if (C.cf) goto L_10481844;
  /* 10481838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1048183b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048183d jmp dword ptr [eax*4 + 0x10009850] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x10009850)))); return;
L_10481844:;
  /* 10481844 jmp dword ptr [ecx*4 + 0x10009948] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10009948)))); return;
  /* 1048184b nop  */
  /* nop */
L_1048184c:;
  /* 1048184c jmp dword ptr [ecx*4 + 0x100098cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100098cc)))); return;
  /* 10481853 nop  */
  /* nop */
  /* 10481854 pushal  */
  x86_unimpl("pushal @ 0x10481854");
  /* 10481855 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 10481856 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10481858 mov word ptr [eax - 0x674ff000], ds */
  w16((uint32_t)(EAX + -0x674ff000), (C.seg_ds));
  /* 1048185e add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10481860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10481862 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10481864 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10481866 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10481869 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1048186c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1048186f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10481872 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10481875 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10481878 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1048187b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048187e jb 0x1048184c */
  if (C.cf) goto L_1048184c;
  /* 10481880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10481882 jmp dword ptr [edx*4 + 0x10009938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009938)))); return;
  /* 10481889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1048188c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1048188e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10481890 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10481892 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10481895 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10481898 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1048189b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1048189e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104818a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104818a4 jb 0x1048184c */
  if (C.cf) goto L_1048184c;
  /* 104818a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104818a8 jmp dword ptr [edx*4 + 0x10009938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009938)))); return;
  /* 104818af nop  */
  /* nop */
  /* 104818b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104818b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104818b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104818b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104818b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104818ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104818bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104818be jb 0x1048184c */
  if (C.cf) goto L_1048184c;
  /* 104818c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104818c2 jmp dword ptr [edx*4 + 0x10009938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009938)))); return;
  /* 104818c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104818cc das  */
  x86_unimpl("das @ 0x104818cc");
  /* 104818cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104818ce add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818d0 sbb al, 0x99 */
  { uint32_t _a=(AL),_b=(0x99u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104818d2 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818d4 adc al, 0x99 */
  { uint32_t _a=(AL),_b=(0x99u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104818d6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818d8 or al, 0x99 */
  { uint32_t _r=(AL)|(0x99u); AL = (_r); fl_logic(_r,8); }
  /* 104818da add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818dc add al, 0x99 */
  { uint32_t _a=(AL),_b=(0x99u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104818de add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818e0 cld  */
  C.df=0;
  /* 104818e1 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104818e2 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818e4 hlt  */
  x86_unimpl("hlt @ 0x104818e4");
  /* 104818e5 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104818e6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818e8 in al, dx */
  x86_unimpl("in @ 0x104818e8");
  /* 104818e9 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104818ea add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104818ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 104818f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
  /* 104818f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 104818f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
  /* 104818fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10481900 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
  /* 10481904 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10481908 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
  /* 1048190c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10481910 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
  /* 10481914 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10481918 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
  /* 1048191c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10481920 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10481924 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1048192b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1048192d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1048192f jmp dword ptr [edx*4 + 0x10009938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009938)))); return;
  /* 10481936 mov edi, edi */
  EDI = (EDI);
  /* 10481938 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10481939 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1048193a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048193c push eax */
  push32((uint32_t)(EAX));
  /* 1048193d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1048193e add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10481940 pop esp */
  ESP = (pop32());
  /* 10481941 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10481942 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10481944 jo 0x104818df */
  if (C.of) goto L_104818df;
  /* 10481946 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10481948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048194b pop esi */
  ESI = (pop32());
  /* 1048194c pop edi */
  EDI = (pop32());
  /* 1048194d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1048194e ret  */
  ESPCHK(0x104817f0u, _esp0);
  ESP += 4; return;
  /* 1048194f nop  */
  /* nop */
  /* 10481950 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10481952 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10481954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481957 pop esi */
  ESI = (pop32());
  /* 10481958 pop edi */
  EDI = (pop32());
  /* 10481959 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1048195a ret  */
  ESPCHK(0x104817f0u, _esp0);
  ESP += 4; return;
  /* 1048195b nop  */
  /* nop */
  /* 1048195c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1048195e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10481960 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10481963 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10481966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481969 pop esi */
  ESI = (pop32());
  /* 1048196a pop edi */
  EDI = (pop32());
  /* 1048196b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1048196c ret  */
  ESPCHK(0x104817f0u, _esp0);
  ESP += 4; return;
  /* 1048196d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10481970 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10481972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10481974 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10481977 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1048197a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1048197d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10481980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481983 pop esi */
  ESI = (pop32());
  /* 10481984 pop edi */
  EDI = (pop32());
  /* 10481985 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10481986 ret  */
  ESPCHK(0x104817f0u, _esp0);
  ESP += 4; return;
  /* 10481987 nop  */
  /* nop */
L_10481988:;
  /* 10481988 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1048198c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10481990 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10481996 jne 0x104819bc */
  if (!C.zf) goto L_104819bc;
  /* 10481998 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1048199b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1048199e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104819a1 jb 0x104819b0 */
  if (C.cf) goto L_104819b0;
  /* 104819a3 std  */
  C.df=1;
  /* 104819a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104819a6 cld  */
  C.df=0;
  /* 104819a7 jmp dword ptr [edx*4 + 0x10009ad0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10009ad0)))); return;
  /* 104819ae mov edi, edi */
  EDI = (EDI);
L_104819b0:;
  /* 104819b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104819b2 jmp dword ptr [ecx*4 + 0x10009a80] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10009a80)))); return;
  /* 104819b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104819bc:;
  /* 104819bc mov eax, edi */
  EAX = (EDI);
  /* 104819be mov edx, 3 */
  EDX = (0x3u);
  /* 104819c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104819c6 jb 0x104819d4 */
  if (C.cf) goto L_104819d4;
  /* 104819c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104819cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104819cd jmp dword ptr [eax*4 + 0x100099d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x100099d8)))); return;
L_104819d4:;
  /* 104819d4 jmp dword ptr [ecx*4 + 0x10009ad0] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10009ad0)))); return;
L_104818df: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x104818df (unresolved jump table)"); return;
}

/* __aulldiv @ 0x10481b30 (104 bytes, 43 insns) */
void f_10481b30(void) {
  FTRACE(0x10481b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481b30 push ebx */
  push32((uint32_t)(EBX));
  /* 10481b31 push esi */
  push32((uint32_t)(ESI));
  /* 10481b32 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10481b36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481b38 jne 0x10481b52 */
  if (!C.zf) goto L_10481b52;
  /* 10481b3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10481b3e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10481b42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481b44 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481b46 mov ebx, eax */
  EBX = (EAX);
  /* 10481b48 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10481b4c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481b4e mov edx, ebx */
  EDX = (EBX);
  /* 10481b50 jmp 0x10481b93 */
  goto L_10481b93;
L_10481b52:;
  /* 10481b52 mov ecx, eax */
  ECX = (EAX);
  /* 10481b54 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10481b58 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10481b5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10481b60:;
  /* 10481b60 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10481b62 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10481b64 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10481b66 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10481b68 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10481b6a jne 0x10481b60 */
  if (!C.zf) goto L_10481b60;
  /* 10481b6c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481b6e mov esi, eax */
  ESI = (EAX);
  /* 10481b70 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10481b74 mov ecx, eax */
  ECX = (EAX);
  /* 10481b76 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10481b7a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10481b7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481b7e jb 0x10481b8e */
  if (C.cf) goto L_10481b8e;
  /* 10481b80 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481b84 ja 0x10481b8e */
  if ((!C.cf&&!C.zf)) goto L_10481b8e;
  /* 10481b86 jb 0x10481b8f */
  if (C.cf) goto L_10481b8f;
  /* 10481b88 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481b8c jbe 0x10481b8f */
  if ((C.cf||C.zf)) goto L_10481b8f;
L_10481b8e:;
  /* 10481b8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10481b8f:;
  /* 10481b8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481b91 mov eax, esi */
  EAX = (ESI);
L_10481b93:;
  /* 10481b93 pop esi */
  ESI = (pop32());
  /* 10481b94 pop ebx */
  EBX = (pop32());
  /* 10481b95 ret 0x10 */
  ESPCHK(0x10481b30u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10481ba0 (117 bytes, 44 insns) */
void f_10481ba0(void) {
  FTRACE(0x10481ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 10481ba1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10481ba5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481ba7 jne 0x10481bc1 */
  if (!C.zf) goto L_10481bc1;
  /* 10481ba9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10481bad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10481bb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481bb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481bb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10481bb9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481bbb mov eax, edx */
  EAX = (EDX);
  /* 10481bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10481bbf jmp 0x10481c11 */
  goto L_10481c11;
L_10481bc1:;
  /* 10481bc1 mov ecx, eax */
  ECX = (EAX);
  /* 10481bc3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10481bc7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10481bcb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10481bcf:;
  /* 10481bcf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10481bd1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10481bd3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10481bd5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10481bd7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10481bd9 jne 0x10481bcf */
  if (!C.zf) goto L_10481bcf;
  /* 10481bdb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10481bdd mov ecx, eax */
  ECX = (EAX);
  /* 10481bdf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10481be3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10481be4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10481be8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481bea jb 0x10481bfa */
  if (C.cf) goto L_10481bfa;
  /* 10481bec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481bf0 ja 0x10481bfa */
  if ((!C.cf&&!C.zf)) goto L_10481bfa;
  /* 10481bf2 jb 0x10481c02 */
  if (C.cf) goto L_10481c02;
  /* 10481bf4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481bf8 jbe 0x10481c02 */
  if ((C.cf||C.zf)) goto L_10481c02;
L_10481bfa:;
  /* 10481bfa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481bfe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10481c02:;
  /* 10481c02 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481c06 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481c0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10481c0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10481c0e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10481c11:;
  /* 10481c11 pop ebx */
  EBX = (pop32());
  /* 10481c12 ret 0x10 */
  ESPCHK(0x10481ba0u, _esp0);
  ESP += 20; return;
}

/* FUN_10021c20 @ 0x10481c20 (628 bytes, 214 insns) */
void f_10481c20(void) {
  FTRACE(0x10481c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10481c21 mov ebp, esp */
  EBP = (ESP);
  /* 10481c23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10481c27 push esi */
  push32((uint32_t)(ESI));
  /* 10481c28 push edi */
  push32((uint32_t)(EDI));
L_10481c29:;
  /* 10481c29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481c2d jne 0x10481c4d */
  if (!C.zf) goto L_10481c4d;
  /* 10481c2f push 0x10029f04 */
  push32((uint32_t)(0x10029f04u));
  /* 10481c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10481c36 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10481c38 push 0x10029ef8 */
  push32((uint32_t)(0x10029ef8u));
  /* 10481c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10481c3f call 0x10479fd0 */
  push32(0x10481c44u); f_10479fd0();
  /* 10481c44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481c47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481c4a jne 0x10481c4d */
  if (!C.zf) goto L_10481c4d;
  /* 10481c4c int3  */
  x86_unimpl("int3 @ 0x10481c4c");
L_10481c4d:;
  /* 10481c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481c51 jne 0x10481c29 */
  if (!C.zf) goto L_10481c29;
  /* 10481c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10481c56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10481c59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10481c5f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10481c62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481c68 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10481c6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481c70 je 0x10481c7f */
  if (C.zf) goto L_10481c7f;
  /* 10481c72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c75 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10481c78 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10481c7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10481c7d je 0x10481c95 */
  if (C.zf) goto L_10481c95;
L_10481c7f:;
  /* 10481c7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c82 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10481c85 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10481c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c8a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10481c8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10481c90 jmp 0x10481e8d */
  goto L_10481e8d;
L_10481c95:;
  /* 10481c95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481c98 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10481c9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10481c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481ca0 je 0x10481cec */
  if (C.zf) goto L_10481cec;
  /* 10481ca2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481ca5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10481cac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481caf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10481cb2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10481cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481cb7 je 0x10481cd5 */
  if (C.zf) goto L_10481cd5;
  /* 10481cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cbf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10481cc2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10481cc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481cca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10481ccd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cd0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10481cd3 jmp 0x10481cec */
  goto L_10481cec;
L_10481cd5:;
  /* 10481cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cd8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481cdb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10481cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481ce1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10481ce4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10481ce7 jmp 0x10481e8d */
  goto L_10481e8d;
L_10481cec:;
  /* 10481cec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481cf2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10481cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cf8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10481cfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481cfe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481d01 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10481d04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d07 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10481d0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d0d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10481d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10481d1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481d1e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10481d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10481d27 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10481d2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10481d2f jne 0x10481d5f */
  if (!C.zf) goto L_10481d5f;
  /* 10481d31 cmp dword ptr [ebp - 8], 0x1002d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1002d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481d38 je 0x10481d43 */
  if (C.zf) goto L_10481d43;
  /* 10481d3a cmp dword ptr [ebp - 8], 0x1002d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1002d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481d41 jne 0x10481d53 */
  if (!C.zf) goto L_10481d53;
L_10481d43:;
  /* 10481d43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481d46 push edx */
  push32((uint32_t)(EDX));
  /* 10481d47 call 0x10483b90 */
  push32(0x10481d4cu); f_10483b90();
  /* 10481d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481d51 jne 0x10481d5f */
  if (!C.zf) goto L_10481d5f;
L_10481d53:;
  /* 10481d53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d56 push eax */
  push32((uint32_t)(EAX));
  /* 10481d57 call 0x10483ac0 */
  push32(0x10481d5cu); f_10483ac0();
  /* 10481d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10481d5f:;
  /* 10481d5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d62 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10481d65 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10481d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481d6d je 0x10481e4b */
  if (C.zf) goto L_10481e4b;
L_10481d73:;
  /* 10481d73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481d79 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10481d7b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481d7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481d80 jge 0x10481da3 */
  if ((C.sf==C.of)) goto L_10481da3;
  /* 10481d82 push 0x10029eb8 */
  push32((uint32_t)(0x10029eb8u));
  /* 10481d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10481d89 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10481d8e push 0x10029ef8 */
  push32((uint32_t)(0x10029ef8u));
  /* 10481d93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10481d95 call 0x10479fd0 */
  push32(0x10481d9au); f_10479fd0();
  /* 10481d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481da0 jne 0x10481da3 */
  if (!C.zf) goto L_10481da3;
  /* 10481da2 int3  */
  x86_unimpl("int3 @ 0x10481da2");
L_10481da3:;
  /* 10481da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481da7 jne 0x10481d73 */
  if (!C.zf) goto L_10481d73;
  /* 10481da9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481dac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481daf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10481db1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481db4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10481db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481dba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10481dbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481dc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481dc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10481dc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481dc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10481dcb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481dce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481dd1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10481dd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481dd8 jle 0x10481df6 */
  if ((C.zf||C.sf!=C.of)) goto L_10481df6;
  /* 10481dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10481dde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481de1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10481de4 push eax */
  push32((uint32_t)(EAX));
  /* 10481de5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10481de9 call 0x104837b0 */
  push32(0x10481deeu); f_104837b0();
  /* 10481dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481df1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10481df4 jmp 0x10481e3e */
  goto L_10481e3e;
L_10481df6:;
  /* 10481df6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481dfa je 0x10481e19 */
  if (C.zf) goto L_10481e19;
  /* 10481dfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481dff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10481e02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481e05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10481e08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10481e0b mov ecx, dword ptr [edx*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 10481e12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481e14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10481e17 jmp 0x10481e20 */
  goto L_10481e20;
L_10481e19:;
  /* 10481e19 mov dword ptr [ebp - 0x14], 0x1002ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1002ca60u));
L_10481e20:;
  /* 10481e20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10481e23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10481e27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10481e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481e2c je 0x10481e3e */
  if (C.zf) goto L_10481e3e;
  /* 10481e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10481e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10481e32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10481e36 call 0x10483660 */
  push32(0x10481e3bu); f_10483660();
  /* 10481e3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10481e3e:;
  /* 10481e3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481e41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10481e44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10481e47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10481e49 jmp 0x10481e69 */
  goto L_10481e69;
L_10481e4b:;
  /* 10481e4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10481e52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10481e55 push edx */
  push32((uint32_t)(EDX));
  /* 10481e56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10481e59 push eax */
  push32((uint32_t)(EAX));
  /* 10481e5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10481e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10481e5e call 0x104837b0 */
  push32(0x10481e63u); f_104837b0();
  /* 10481e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481e66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10481e69:;
  /* 10481e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10481e6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481e6f je 0x10481e85 */
  if (C.zf) goto L_10481e85;
  /* 10481e71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481e74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10481e77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10481e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10481e7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10481e80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10481e83 jmp 0x10481e8d */
  goto L_10481e8d;
L_10481e85:;
  /* 10481e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481e88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10481e8d:;
  /* 10481e8d pop edi */
  EDI = (pop32());
  /* 10481e8e pop esi */
  ESI = (pop32());
  /* 10481e8f pop ebx */
  EBX = (pop32());
  /* 10481e90 mov esp, ebp */
  ESP = (EBP);
  /* 10481e92 pop ebp */
  EBP = (pop32());
  /* 10481e93 ret  */
  ESPCHK(0x10481c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10021ea0 @ 0x10481ea0 (210 bytes, 821 insns) */
void f_10481ea0(void) {
  FTRACE(0x10481ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10481ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10481ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10481ea3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10481ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 10481eaa push esi */
  push32((uint32_t)(ESI));
  /* 10481eab push edi */
  push32((uint32_t)(EDI));
  /* 10481eac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10481eb3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10481ebd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10481ec4:;
  /* 10481ec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10481ec7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10481ec9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10481ecc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481ed0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10481ed3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481ed6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10481ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481edb je 0x10482ab7 */
  if (C.zf) goto L_10482ab7;
  /* 10481ee1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481ee8 jl 0x10482ab7 */
  if ((C.sf!=C.of)) goto L_10482ab7;
  /* 10481eee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481ef2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481ef5 jl 0x10481f16 */
  if ((C.sf!=C.of)) goto L_10481f16;
  /* 10481ef7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481efb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481efe jg 0x10481f16 */
  if ((!C.zf&&C.sf==C.of)) goto L_10481f16;
  /* 10481f00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481f04 movsx ecx, byte ptr [eax + 0x10029ef0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10029ef0))));
  /* 10481f0b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10481f0e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10481f14 jmp 0x10481f20 */
  goto L_10481f20;
L_10481f16:;
  /* 10481f16 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10481f20:;
  /* 10481f20 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10481f26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10481f29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10481f2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10481f2f movsx edx, byte ptr [ecx + eax*8 + 0x10029f10] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10029f10))));
  /* 10481f37 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10481f3a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10481f3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10481f40 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10481f46 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481f4d ja 0x10482ab2 */
  if ((!C.cf&&!C.zf)) goto L_10482ab2;
  /* 10481f53 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10481f59 jmp dword ptr [ecx*4 + 0x1000aac4] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000aac4)))); return;
L_10481f60:;
  /* 10481f60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10481f67 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10481f6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10481f70 mov eax, dword ptr [0x1002cc98] */
  EAX = (r32((uint32_t)(0x1002cc98)));
  /* 10481f75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10481f77 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10481f7b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10481f81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10481f83 je 0x10481fdd */
  if (C.zf) goto L_10481fdd;
  /* 10481f85 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10481f8b push edx */
  push32((uint32_t)(EDX));
  /* 10481f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481f8f push eax */
  push32((uint32_t)(EAX));
  /* 10481f90 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10481f95 call 0x10482bd0 */
  push32(0x10481f9au); f_10482bd0();
  /* 10481f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10481fa0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10481fa2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10481fa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10481fa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10481fab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10481fae:;
  /* 10481fae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481fb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10481fb4 jne 0x10481fd7 */
  if (!C.zf) goto L_10481fd7;
  /* 10481fb6 push 0x10029f90 */
  push32((uint32_t)(0x10029f90u));
  /* 10481fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10481fbd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10481fc2 push 0x10029f84 */
  push32((uint32_t)(0x10029f84u));
  /* 10481fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10481fc9 call 0x10479fd0 */
  push32(0x10481fceu); f_10479fd0();
  /* 10481fce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481fd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10481fd4 jne 0x10481fd7 */
  if (!C.zf) goto L_10481fd7;
  /* 10481fd6 int3  */
  x86_unimpl("int3 @ 0x10481fd6");
L_10481fd7:;
  /* 10481fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10481fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10481fdb jne 0x10481fae */
  if (!C.zf) goto L_10481fae;
L_10481fdd:;
  /* 10481fdd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10481fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10481fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10481fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10481fe8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10481fec push eax */
  push32((uint32_t)(EAX));
  /* 10481fed call 0x10482bd0 */
  push32(0x10481ff2u); f_10482bd0();
  /* 10481ff2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10481ff5 jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 10481ffa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10482001 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10482004 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1048200a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10482010 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10482016 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1048201c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1048201f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10482026 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10482030 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10482037 jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 1048203c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10482040 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10482046 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1048204c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048204f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10482055 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048205c ja 0x104820a6 */
  if ((!C.cf&&!C.zf)) goto L_104820a6;
  /* 1048205e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10482064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10482066 mov al, byte ptr [ecx + 0x1000aafc] */
  AL = (r8((uint32_t)(ECX + 0x1000aafc)));
  /* 1048206c jmp dword ptr [eax*4 + 0x1000aae4] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000aae4)))); return;
  /* 10482073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482076 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10482079 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1048207c jmp 0x104820a6 */
  goto L_104820a6;
  /* 1048207e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482081 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10482083 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10482086 jmp 0x104820a6 */
  goto L_104820a6;
  /* 10482088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048208b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1048208e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10482091 jmp 0x104820a6 */
  goto L_104820a6;
  /* 10482093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482096 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10482099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1048209c jmp 0x104820a6 */
  goto L_104820a6;
  /* 1048209e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104820a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 104820a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104820a6:;
  /* 104820a6 jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 104820ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104820af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104820b2 jne 0x104820e7 */
  if (!C.zf) goto L_104820e7;
  /* 104820b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104820b7 push edx */
  push32((uint32_t)(EDX));
  /* 104820b8 call 0x10482ce0 */
  push32(0x104820bdu); f_10482ce0();
  /* 104820bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104820c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 104820c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104820cd jge 0x104820e5 */
  if ((C.sf==C.of)) goto L_104820e5;
  /* 104820cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104820d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104820d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104820d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 104820dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104820df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104820e5:;
  /* 104820e5 jmp 0x104820fe */
  goto L_104820fe;
L_104820e7:;
  /* 104820e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 104820ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104820f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104820f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 104820f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104820fe:;
  /* 104820fe jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 10482103 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1048210d jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 10482112 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10482116 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482119 jne 0x10482142 */
  if (!C.zf) goto L_10482142;
  /* 1048211b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1048211e push eax */
  push32((uint32_t)(EAX));
  /* 1048211f call 0x10482ce0 */
  push32(0x10482124u); f_10482ce0();
  /* 10482124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482127 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1048212d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482134 jge 0x10482140 */
  if ((C.sf==C.of)) goto L_10482140;
  /* 10482136 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10482140:;
  /* 10482140 jmp 0x10482159 */
  goto L_10482159;
L_10482142:;
  /* 10482142 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10482148 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048214b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1048214f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10482153 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10482159:;
  /* 10482159 jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 1048215e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10482162 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10482168 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1048216e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482171 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10482177 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048217e ja 0x104821ec */
  if ((!C.cf&&!C.zf)) goto L_104821ec;
  /* 10482180 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10482186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10482188 mov al, byte ptr [ecx + 0x1000ab21] */
  AL = (r8((uint32_t)(ECX + 0x1000ab21)));
  /* 1048218e jmp dword ptr [eax*4 + 0x1000ab0d] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000ab0d)))); return;
  /* 10482195 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482198 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1048219b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1048219e jmp 0x104821ec */
  goto L_104821ec;
  /* 104821a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104821a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104821a6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104821a9 jne 0x104821cb */
  if (!C.zf) goto L_104821cb;
  /* 104821ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104821ae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104821b2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104821b5 jne 0x104821cb */
  if (!C.zf) goto L_104821cb;
  /* 104821b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104821ba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104821bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104821c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104821c3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104821c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104821c9 jmp 0x104821d7 */
  goto L_104821d7;
L_104821cb:;
  /* 104821cb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104821d2 jmp 0x10481f60 */
  goto L_10481f60;
L_104821d7:;
  /* 104821d7 jmp 0x104821ec */
  goto L_104821ec;
  /* 104821d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104821dc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104821de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104821e1 jmp 0x104821ec */
  goto L_104821ec;
  /* 104821e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104821e6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104821e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104821ec:;
  /* 104821ec jmp 0x10482ab2 */
  goto L_10482ab2;
  /* 104821f1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104821f5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 104821fb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10482201 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482204 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1048220a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482211 ja 0x104828d7 */
  if ((!C.cf&&!C.zf)) goto L_104828d7;
  /* 10482217 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1048221d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048221f mov cl, byte ptr [edx + 0x1000ab8c] */
  CL = (r8((uint32_t)(EDX + 0x1000ab8c)));
  /* 10482225 jmp dword ptr [ecx*4 + 0x1000ab50] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000ab50)))); return;
  /* 1048222c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048222f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10482234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10482236 jne 0x10482241 */
  if (!C.zf) goto L_10482241;
  /* 10482238 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048223b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1048223e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10482241:;
  /* 10482241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482244 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1048224a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048224c je 0x10482287 */
  if (C.zf) goto L_10482287;
  /* 1048224e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10482251 push eax */
  push32((uint32_t)(EAX));
  /* 10482252 call 0x10482d20 */
  push32(0x10482257u); f_10482d20();
  /* 10482257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048225a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1048225e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10482262 push ecx */
  push32((uint32_t)(ECX));
  /* 10482263 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10482269 push edx */
  push32((uint32_t)(EDX));
  /* 1048226a call 0x10483e00 */
  push32(0x1048226fu); f_10483e00();
  /* 1048226f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482272 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10482275 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482279 jge 0x10482285 */
  if ((C.sf==C.of)) goto L_10482285;
  /* 1048227b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10482285:;
  /* 10482285 jmp 0x104822ad */
  goto L_104822ad;
L_10482287:;
  /* 10482287 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1048228a push eax */
  push32((uint32_t)(EAX));
  /* 1048228b call 0x10482ce0 */
  push32(0x10482290u); f_10482ce0();
  /* 10482290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482293 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1048229a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 104822a0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 104822a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_104822ad:;
  /* 104822ad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 104822b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104822b6 jmp 0x104828d7 */
  goto L_104828d7;
  /* 104822bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104822be push eax */
  push32((uint32_t)(EAX));
  /* 104822bf call 0x10482ce0 */
  push32(0x104822c4u); f_10482ce0();
  /* 104822c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104822c7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 104822cd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104822d4 je 0x104822e2 */
  if (C.zf) goto L_104822e2;
  /* 104822d6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104822dc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104822e0 jne 0x104822fc */
  if (!C.zf) goto L_104822fc;
L_104822e2:;
  /* 104822e2 mov edx, dword ptr [0x1002cfb0] */
  EDX = (r32((uint32_t)(0x1002cfb0)));
  /* 104822e8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104822eb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104822ee push eax */
  push32((uint32_t)(EAX));
  /* 104822ef call 0x1047dd40 */
  push32(0x104822f4u); f_1047dd40();
  /* 104822f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104822f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104822fa jmp 0x1048234b */
  goto L_1048234b;
L_104822fc:;
  /* 104822fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104822ff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10482305 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10482307 je 0x1048232c */
  if (C.zf) goto L_1048232c;
  /* 10482309 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1048230f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10482312 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10482315 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1048231b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1048231e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10482320 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10482323 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1048232a jmp 0x1048234b */
  goto L_1048234b;
L_1048232c:;
  /* 1048232c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10482333 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10482339 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1048233c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1048233f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10482345 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10482348 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1048234b:;
  /* 1048234b jmp 0x104828d7 */
  goto L_104828d7;
  /* 10482350 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482353 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10482359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048235b jne 0x10482366 */
  if (!C.zf) goto L_10482366;
  /* 1048235d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482360 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10482363 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10482366:;
  /* 10482366 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048236d jne 0x1048237b */
  if (!C.zf) goto L_1048237b;
  /* 1048236f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10482379 jmp 0x10482387 */
  goto L_10482387;
L_1048237b:;
  /* 1048237b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10482381 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10482387:;
  /* 10482387 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1048238d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10482393 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10482396 push edx */
  push32((uint32_t)(EDX));
  /* 10482397 call 0x10482ce0 */
  push32(0x1048239cu); f_10482ce0();
  /* 1048239c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048239f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104823a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104823a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 104823aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104823ac je 0x10482416 */
  if (C.zf) goto L_10482416;
  /* 104823ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104823b2 jne 0x104823bd */
  if (!C.zf) goto L_104823bd;
  /* 104823b4 mov ecx, dword ptr [0x1002cfb4] */
  ECX = (r32((uint32_t)(0x1002cfb4)));
  /* 104823ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104823bd:;
  /* 104823bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 104823c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104823c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_104823cd:;
  /* 104823cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 104823d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 104823d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104823dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 104823e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104823e4 je 0x10482406 */
  if (C.zf) goto L_10482406;
  /* 104823e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 104823ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104823ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104823f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104823f3 je 0x10482406 */
  if (C.zf) goto L_10482406;
  /* 104823f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 104823fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104823fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10482404 jmp 0x104823cd */
  goto L_104823cd;
L_10482406:;
  /* 10482406 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1048240c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048240f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10482411 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10482414 jmp 0x10482470 */
  goto L_10482470;
L_10482416:;
  /* 10482416 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048241a jne 0x10482424 */
  if (!C.zf) goto L_10482424;
  /* 1048241c mov eax, dword ptr [0x1002cfb0] */
  EAX = (r32((uint32_t)(0x1002cfb0)));
  /* 10482421 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10482424:;
  /* 10482424 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10482427 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1048242d:;
  /* 1048242d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10482433 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10482439 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048243c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10482442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482444 je 0x10482464 */
  if (C.zf) goto L_10482464;
  /* 10482446 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1048244c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1048244f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482451 je 0x10482464 */
  if (C.zf) goto L_10482464;
  /* 10482453 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10482459 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048245c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10482462 jmp 0x1048242d */
  goto L_1048242d;
L_10482464:;
  /* 10482464 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1048246a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048246d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10482470:;
  /* 10482470 jmp 0x104828d7 */
  goto L_104828d7;
  /* 10482475 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10482478 push edx */
  push32((uint32_t)(EDX));
  /* 10482479 call 0x10482ce0 */
  push32(0x1048247eu); f_10482ce0();
  /* 1048247e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482481 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10482487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048248a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1048248d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048248f je 0x104824a3 */
  if (C.zf) goto L_104824a3;
  /* 10482491 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10482497 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1048249e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 104824a1 jmp 0x104824b1 */
  goto L_104824b1;
L_104824a3:;
  /* 104824a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 104824a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 104824af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_104824b1:;
  /* 104824b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 104824bb jmp 0x104828d7 */
  goto L_104828d7;
  /* 104824c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104824c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 104824ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 104824cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
  /* 104824d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104824d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104824d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104824d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 104824de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104824e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104824e8 jge 0x104824f6 */
  if ((C.sf==C.of)) goto L_104824f6;
  /* 104824ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 104824f4 jmp 0x10482512 */
  goto L_10482512;
L_104824f6:;
  /* 104824f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104824fd jne 0x10482512 */
  if (!C.zf) goto L_10482512;
  /* 104824ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10482503 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482506 jne 0x10482512 */
  if (!C.zf) goto L_10482512;
  /* 10482508 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10482512:;
  /* 10482512 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482515 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482518 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1048251b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1048251e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10482523 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10482526 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1048252c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10482532 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10482535 push ecx */
  push32((uint32_t)(ECX));
  /* 10482536 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1048253c push edx */
  push32((uint32_t)(EDX));
  /* 1048253d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10482541 push eax */
  push32((uint32_t)(EAX));
  /* 10482542 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10482545 push ecx */
  push32((uint32_t)(ECX));
  /* 10482546 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1048254c push edx */
  push32((uint32_t)(EDX));
  /* 1048254d call dword ptr [0x1002d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002d3a0))), 0x10482553u);
  /* 10482553 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482559 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1048255e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10482560 je 0x10482578 */
  if (C.zf) goto L_10482578;
  /* 10482562 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482569 jne 0x10482578 */
  if (!C.zf) goto L_10482578;
  /* 1048256b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048256e push ecx */
  push32((uint32_t)(ECX));
  /* 1048256f call dword ptr [0x1002d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002d3ac))), 0x10482575u);
  /* 10482575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10482578:;
  /* 10482578 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1048257c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048257f jne 0x1048259a */
  if (!C.zf) goto L_1048259a;
  /* 10482581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482584 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10482589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048258b jne 0x1048259a */
  if (!C.zf) goto L_1048259a;
  /* 1048258d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10482590 push ecx */
  push32((uint32_t)(ECX));
  /* 10482591 call dword ptr [0x1002d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002d3a4))), 0x10482597u);
  /* 10482597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1048259a:;
  /* 1048259a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048259d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104825a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104825a3 jne 0x104825b7 */
  if (!C.zf) goto L_104825b7;
  /* 104825a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104825a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104825ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104825ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104825b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104825b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104825b7:;
  /* 104825b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104825ba push eax */
  push32((uint32_t)(EAX));
  /* 104825bb call 0x1047dd40 */
  push32(0x104825c0u); f_1047dd40();
  /* 104825c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104825c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104825c6 jmp 0x104828d7 */
  goto L_104828d7;
  /* 104825cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104825ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 104825d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104825d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104825de jmp 0x10482665 */
  goto L_10482665;
  /* 104825e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104825ed jmp 0x10482665 */
  goto L_10482665;
  /* 104825ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
  /* 104825f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10482603 jmp 0x1048260f */
  goto L_1048260f;
  /* 10482605 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1048260f:;
  /* 1048260f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10482619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048261c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10482622 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482624 je 0x10482643 */
  if (C.zf) goto L_10482643;
  /* 10482626 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1048262d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10482633 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482636 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1048263c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10482643:;
  /* 10482643 jmp 0x10482665 */
  goto L_10482665;
  /* 10482645 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1048264f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482652 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10482658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048265a je 0x10482665 */
  if (C.zf) goto L_10482665;
  /* 1048265c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048265f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10482662 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10482665:;
  /* 10482665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482668 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1048266d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048266f je 0x1048268e */
  if (C.zf) goto L_1048268e;
  /* 10482671 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10482674 push ecx */
  push32((uint32_t)(ECX));
  /* 10482675 call 0x10482d00 */
  push32(0x1048267au); f_10482d00();
  /* 1048267a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048267d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10482683 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10482689 jmp 0x1048271f */
  goto L_1048271f;
L_1048268e:;
  /* 1048268e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482691 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10482694 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482696 je 0x104826e0 */
  if (C.zf) goto L_104826e0;
  /* 10482698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048269b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1048269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104826a0 je 0x104826c0 */
  if (C.zf) goto L_104826c0;
  /* 104826a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104826a5 push ecx */
  push32((uint32_t)(ECX));
  /* 104826a6 call 0x10482ce0 */
  push32(0x104826abu); f_10482ce0();
  /* 104826ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104826ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 104826b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104826b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104826b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104826be jmp 0x104826de */
  goto L_104826de;
L_104826c0:;
  /* 104826c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104826c3 push edx */
  push32((uint32_t)(EDX));
  /* 104826c4 call 0x10482ce0 */
  push32(0x104826c9u); f_10482ce0();
  /* 104826c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104826cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104826d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104826d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104826d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_104826de:;
  /* 104826de jmp 0x1048271f */
  goto L_1048271f;
L_104826e0:;
  /* 104826e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104826e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104826e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104826e8 je 0x10482705 */
  if (C.zf) goto L_10482705;
  /* 104826ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104826ed push ecx */
  push32((uint32_t)(ECX));
  /* 104826ee call 0x10482ce0 */
  push32(0x104826f3u); f_10482ce0();
  /* 104826f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104826f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104826f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104826fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10482703 jmp 0x1048271f */
  goto L_1048271f;
L_10482705:;
  /* 10482705 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10482708 push edx */
  push32((uint32_t)(EDX));
  /* 10482709 call 0x10482ce0 */
  push32(0x1048270eu); f_10482ce0();
  /* 1048270e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482711 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10482713 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10482719 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1048271f:;
  /* 1048271f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482722 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10482725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482727 je 0x10482767 */
  if (C.zf) goto L_10482767;
  /* 10482729 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482730 jg 0x10482767 */
  if ((!C.zf&&C.sf==C.of)) goto L_10482767;
  /* 10482732 jl 0x1048273d */
  if ((C.sf!=C.of)) goto L_1048273d;
  /* 10482734 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048273b jae 0x10482767 */
  if (!C.cf) goto L_10482767;
L_1048273d:;
  /* 1048273d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10482743 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10482745 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1048274b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048274e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10482750 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10482756 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1048275c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048275f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10482762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10482765 jmp 0x1048277f */
  goto L_1048277f;
L_10482767:;
  /* 10482767 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1048276d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10482773 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10482779 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1048277f:;
  /* 1048277f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482782 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10482788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048278a jne 0x104827a7 */
  if (!C.zf) goto L_104827a7;
  /* 1048278c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10482792 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10482798 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1048279b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104827a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_104827a7:;
  /* 104827a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104827ae jge 0x104827bc */
  if ((C.sf==C.of)) goto L_104827bc;
  /* 104827b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 104827ba jmp 0x104827c5 */
  goto L_104827c5;
L_104827bc:;
  /* 104827bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104827bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 104827c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104827c5:;
  /* 104827c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104827cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 104827d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104827d3 jne 0x104827dc */
  if (!C.zf) goto L_104827dc;
  /* 104827d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104827dc:;
  /* 104827dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 104827df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104827e2:;
  /* 104827e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 104827e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 104827ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104827f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 104827f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104827f9 jg 0x1048280f */
  if ((!C.zf&&C.sf==C.of)) goto L_1048280f;
  /* 104827fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10482801 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10482807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10482809 je 0x10482890 */
  if (C.zf) goto L_10482890;
L_1048280f:;
  /* 1048280f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10482815 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10482816 push edx */
  push32((uint32_t)(EDX));
  /* 10482817 push eax */
  push32((uint32_t)(EAX));
  /* 10482818 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1048281e push edx */
  push32((uint32_t)(EDX));
  /* 1048281f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10482825 push eax */
  push32((uint32_t)(EAX));
  /* 10482826 call 0x10481ba0 */
  push32(0x1048282bu); f_10481ba0();
  /* 1048282b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048282e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10482834 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1048283a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1048283b push edx */
  push32((uint32_t)(EDX));
  /* 1048283c push eax */
  push32((uint32_t)(EAX));
  /* 1048283d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10482843 push ecx */
  push32((uint32_t)(ECX));
  /* 10482844 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1048284a push edx */
  push32((uint32_t)(EDX));
  /* 1048284b call 0x10481b30 */
  push32(0x10482850u); f_10481b30();
  /* 10482850 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10482856 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1048285c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482863 jle 0x10482877 */
  if ((C.zf||C.sf!=C.of)) goto L_10482877;
  /* 10482865 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1048286b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482871 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10482877:;
  /* 10482877 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048287a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10482880 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10482882 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10482885 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482888 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1048288b jmp 0x104827e2 */
  goto L_104827e2;
L_10482890:;
  /* 10482890 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10482893 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482896 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10482899 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048289c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048289f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104828a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104828a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 104828aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104828ac je 0x104828d7 */
  if (C.zf) goto L_104828d7;
  /* 104828ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104828b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104828b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104828b7 jne 0x104828bf */
  if (!C.zf) goto L_104828bf;
  /* 104828b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104828bd jne 0x104828d7 */
  if (!C.zf) goto L_104828d7;
L_104828bf:;
  /* 104828bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104828c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104828c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104828c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104828cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 104828ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104828d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104828d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_104828d7:;
  /* 104828d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104828de jne 0x10482ab2 */
  if (!C.zf) goto L_10482ab2;
  /* 104828e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104828e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104828ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104828ec je 0x1048293d */
  if (C.zf) goto L_1048293d;
  /* 104828ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104828f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 104828f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104828f9 je 0x1048290b */
  if (C.zf) goto L_1048290b;
  /* 104828fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10482902 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10482909 jmp 0x1048293d */
  goto L_1048293d;
L_1048290b:;
  /* 1048290b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048290e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10482911 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482913 je 0x10482925 */
  if (C.zf) goto L_10482925;
  /* 10482915 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1048291c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10482923 jmp 0x1048293d */
  goto L_1048293d;
L_10482925:;
  /* 10482925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482928 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1048292b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048292d je 0x1048293d */
  if (C.zf) goto L_1048293d;
  /* 1048292f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10482936 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1048293d:;
  /* 1048293d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10482943 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482946 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482949 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1048294f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482952 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10482955 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482957 jne 0x10482975 */
  if (!C.zf) goto L_10482975;
  /* 10482959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1048295f push eax */
  push32((uint32_t)(EAX));
  /* 10482960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482963 push ecx */
  push32((uint32_t)(ECX));
  /* 10482964 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1048296a push edx */
  push32((uint32_t)(EDX));
  /* 1048296b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1048296d call 0x10482c50 */
  push32(0x10482972u); f_10482c50();
  /* 10482972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10482975:;
  /* 10482975 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1048297b push eax */
  push32((uint32_t)(EAX));
  /* 1048297c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048297f push ecx */
  push32((uint32_t)(ECX));
  /* 10482980 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10482983 push edx */
  push32((uint32_t)(EDX));
  /* 10482984 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1048298a push eax */
  push32((uint32_t)(EAX));
  /* 1048298b call 0x10482c90 */
  push32(0x10482990u); f_10482c90();
  /* 10482990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482996 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10482999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048299b je 0x104829c3 */
  if (C.zf) goto L_104829c3;
  /* 1048299d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104829a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104829a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104829a5 jne 0x104829c3 */
  if (!C.zf) goto L_104829c3;
  /* 104829a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104829ad push eax */
  push32((uint32_t)(EAX));
  /* 104829ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104829b1 push ecx */
  push32((uint32_t)(ECX));
  /* 104829b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104829b8 push edx */
  push32((uint32_t)(EDX));
  /* 104829b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104829bb call 0x10482c50 */
  push32(0x104829c0u); f_10482c50();
  /* 104829c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104829c3:;
  /* 104829c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104829c7 je 0x10482a71 */
  if (C.zf) goto L_10482a71;
  /* 104829cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104829d1 jle 0x10482a71 */
  if ((C.zf||C.sf!=C.of)) goto L_10482a71;
  /* 104829d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104829da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 104829e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104829e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_104829e9:;
  /* 104829e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 104829ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 104829f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104829f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 104829fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482a00 je 0x10482a6f */
  if (C.zf) goto L_10482a6f;
  /* 10482a02 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10482a08 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10482a0b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10482a12 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10482a19 push eax */
  push32((uint32_t)(EAX));
  /* 10482a1a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10482a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10482a21 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10482a27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482a2a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10482a30 call 0x10483e00 */
  push32(0x10482a35u); f_10483e00();
  /* 10482a35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482a38 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10482a3e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482a45 jg 0x10482a49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10482a49;
  /* 10482a47 jmp 0x10482a6f */
  goto L_10482a6f;
L_10482a49:;
  /* 10482a49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10482a4f push eax */
  push32((uint32_t)(EAX));
  /* 10482a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10482a54 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10482a5a push edx */
  push32((uint32_t)(EDX));
  /* 10482a5b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10482a61 push eax */
  push32((uint32_t)(EAX));
  /* 10482a62 call 0x10482c90 */
  push32(0x10482a67u); f_10482c90();
  /* 10482a67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482a6a jmp 0x104829e9 */
  goto L_104829e9;
L_10482a6f:;
  /* 10482a6f jmp 0x10482a8c */
  goto L_10482a8c;
L_10482a71:;
  /* 10482a71 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10482a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10482a78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482a7b push edx */
  push32((uint32_t)(EDX));
  /* 10482a7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10482a7f push eax */
  push32((uint32_t)(EAX));
  /* 10482a80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10482a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10482a84 call 0x10482c90 */
  push32(0x10482a89u); f_10482c90();
  /* 10482a89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10482a8c:;
  /* 10482a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482a8f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10482a92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10482a94 je 0x10482ab2 */
  if (C.zf) goto L_10482ab2;
  /* 10482a96 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10482a9c push eax */
  push32((uint32_t)(EAX));
  /* 10482a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10482aa1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10482aa7 push edx */
  push32((uint32_t)(EDX));
  /* 10482aa8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10482aaa call 0x10482c50 */
  push32(0x10482aafu); f_10482c50();
  /* 10482aaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10482ab2:;
  /* 10482ab2 jmp 0x10481ec4 */
  goto L_10481ec4;
L_10482ab7:;
  /* 10482ab7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10482abd pop edi */
  EDI = (pop32());
  /* 10482abe pop esi */
  ESI = (pop32());
  /* 10482abf pop ebx */
  EBX = (pop32());
  /* 10482ac0 mov esp, ebp */
  ESP = (EBP);
  /* 10482ac2 pop ebp */
  EBP = (pop32());
  /* 10482ac3 ret  */
  ESPCHK(0x10481ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10022bd0 @ 0x10482bd0 (119 bytes, 44 insns) */
void f_10482bd0(void) {
  FTRACE(0x10482bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10482bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10482bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10482bd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482bd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10482bda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482bdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482be0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10482be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482be6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482bea jl 0x10482c12 */
  if ((C.sf!=C.of)) goto L_10482c12;
  /* 10482bec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482bef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10482bf1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10482bf4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10482bf6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10482bfa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10482c00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10482c03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10482c08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482c0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10482c10 jmp 0x10482c25 */
  goto L_10482c25;
L_10482c12:;
  /* 10482c12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c15 push edx */
  push32((uint32_t)(EDX));
  /* 10482c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482c19 push eax */
  push32((uint32_t)(EAX));
  /* 10482c1a call 0x10481c20 */
  push32(0x10482c1fu); f_10481c20();
  /* 10482c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10482c25:;
  /* 10482c25 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482c29 jne 0x10482c36 */
  if (!C.zf) goto L_10482c36;
  /* 10482c2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482c2e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10482c34 jmp 0x10482c43 */
  goto L_10482c43;
L_10482c36:;
  /* 10482c36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482c39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10482c3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482c3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482c41 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10482c43:;
  /* 10482c43 mov esp, ebp */
  ESP = (EBP);
  /* 10482c45 pop ebp */
  EBP = (pop32());
  /* 10482c46 ret  */
  ESPCHK(0x10482bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10022c50 @ 0x10482c50 (53 bytes, 23 insns) */
void f_10482c50(void) {
  FTRACE(0x10482c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10482c51 mov ebp, esp */
  EBP = (ESP);
L_10482c53:;
  /* 10482c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482c5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10482c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10482c61 jle 0x10482c83 */
  if ((C.zf||C.sf!=C.of)) goto L_10482c83;
  /* 10482c63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10482c66 push edx */
  push32((uint32_t)(EDX));
  /* 10482c67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482c6a push eax */
  push32((uint32_t)(EAX));
  /* 10482c6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482c6e push ecx */
  push32((uint32_t)(ECX));
  /* 10482c6f call 0x10482bd0 */
  push32(0x10482c74u); f_10482bd0();
  /* 10482c74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482c77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10482c7a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482c7d jne 0x10482c81 */
  if (!C.zf) goto L_10482c81;
  /* 10482c7f jmp 0x10482c83 */
  goto L_10482c83;
L_10482c81:;
  /* 10482c81 jmp 0x10482c53 */
  goto L_10482c53;
L_10482c83:;
  /* 10482c83 pop ebp */
  EBP = (pop32());
  /* 10482c84 ret  */
  ESPCHK(0x10482c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10022c90 @ 0x10482c90 (74 bytes, 31 insns) */
void f_10482c90(void) {
  FTRACE(0x10482c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10482c91 mov ebp, esp */
  EBP = (ESP);
  /* 10482c93 push ecx */
  push32((uint32_t)(ECX));
L_10482c94:;
  /* 10482c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10482c9a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482c9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10482ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10482ca2 jle 0x10482cd6 */
  if ((C.zf||C.sf!=C.of)) goto L_10482cd6;
  /* 10482ca4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10482ca7 push edx */
  push32((uint32_t)(EDX));
  /* 10482ca8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482cab push eax */
  push32((uint32_t)(EAX));
  /* 10482cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482caf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10482cb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10482cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10482cb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482cbf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10482cc2 call 0x10482bd0 */
  push32(0x10482cc7u); f_10482bd0();
  /* 10482cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10482cca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10482ccd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482cd0 jne 0x10482cd4 */
  if (!C.zf) goto L_10482cd4;
  /* 10482cd2 jmp 0x10482cd6 */
  goto L_10482cd6;
L_10482cd4:;
  /* 10482cd4 jmp 0x10482c94 */
  goto L_10482c94;
L_10482cd6:;
  /* 10482cd6 mov esp, ebp */
  ESP = (EBP);
  /* 10482cd8 pop ebp */
  EBP = (pop32());
  /* 10482cd9 ret  */
  ESPCHK(0x10482c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10022ce0 @ 0x10482ce0 (26 bytes, 12 insns) */
void f_10482ce0(void) {
  FTRACE(0x10482ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10482ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10482ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482ce6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482ce8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482cee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10482cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482cf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482cf5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10482cf8 pop ebp */
  EBP = (pop32());
  /* 10482cf9 ret  */
  ESPCHK(0x10482ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10022d00 @ 0x10482d00 (31 bytes, 14 insns) */
void f_10482d00(void) {
  FTRACE(0x10482d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10482d01 mov ebp, esp */
  EBP = (ESP);
  /* 10482d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482d08 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482d0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10482d10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482d15 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482d18 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10482d1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10482d1d pop ebp */
  EBP = (pop32());
  /* 10482d1e ret  */
  ESPCHK(0x10482d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10022d20 @ 0x10482d20 (27 bytes, 12 insns) */
void f_10482d20(void) {
  FTRACE(0x10482d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10482d21 mov ebp, esp */
  EBP = (ESP);
  /* 10482d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482d28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482d2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10482d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10482d35 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10482d39 pop ebp */
  EBP = (pop32());
  /* 10482d3a ret  */
  ESPCHK(0x10482d20u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10482d40 (145 bytes, 42 insns) */
void f_10482d40(void) {
  FTRACE(0x10482d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10482d41 mov ebp, esp */
  EBP = (ESP);
  /* 10482d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10482d44 call 0x10482df0 */
  push32(0x10482d49u); f_10482df0();
  /* 10482d49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10482d4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10482d55 jmp 0x10482d60 */
  goto L_10482d60;
L_10482d57:;
  /* 10482d57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482d5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482d5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10482d60:;
  /* 10482d60 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482d64 jae 0x10482d8a */
  if (!C.cf) goto L_10482d8a;
  /* 10482d66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482d69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482d6c cmp ecx, dword ptr [eax*8 + 0x1002cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1002cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482d73 jne 0x10482d88 */
  if (!C.zf) goto L_10482d88;
  /* 10482d75 call 0x10482de0 */
  push32(0x10482d7au); f_10482de0();
  /* 10482d7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10482d7d mov ecx, dword ptr [edx*8 + 0x1002cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1002cfbc)));
  /* 10482d84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10482d86 jmp 0x10482dcd */
  goto L_10482dcd;
L_10482d88:;
  /* 10482d88 jmp 0x10482d57 */
  goto L_10482d57;
L_10482d8a:;
  /* 10482d8a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482d8e jb 0x10482da3 */
  if (C.cf) goto L_10482da3;
  /* 10482d90 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482d94 ja 0x10482da3 */
  if ((!C.cf&&!C.zf)) goto L_10482da3;
  /* 10482d96 call 0x10482de0 */
  push32(0x10482d9bu); f_10482de0();
  /* 10482d9b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10482da1 jmp 0x10482dcd */
  goto L_10482dcd;
L_10482da3:;
  /* 10482da3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482daa jb 0x10482dc2 */
  if (C.cf) goto L_10482dc2;
  /* 10482dac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482db3 ja 0x10482dc2 */
  if ((!C.cf&&!C.zf)) goto L_10482dc2;
  /* 10482db5 call 0x10482de0 */
  push32(0x10482dbau); f_10482de0();
  /* 10482dba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10482dc0 jmp 0x10482dcd */
  goto L_10482dcd;
L_10482dc2:;
  /* 10482dc2 call 0x10482de0 */
  push32(0x10482dc7u); f_10482de0();
  /* 10482dc7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10482dcd:;
  /* 10482dcd mov esp, ebp */
  ESP = (EBP);
  /* 10482dcf pop ebp */
  EBP = (pop32());
  /* 10482dd0 ret  */
  ESPCHK(0x10482d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10022de0 @ 0x10482de0 (13 bytes, 6 insns) */
void f_10482de0(void) {
  FTRACE(0x10482de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10482de1 mov ebp, esp */
  EBP = (ESP);
  /* 10482de3 call 0x1047a950 */
  push32(0x10482de8u); f_1047a950();
  /* 10482de8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482deb pop ebp */
  EBP = (pop32());
  /* 10482dec ret  */
  ESPCHK(0x10482de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10022df0 @ 0x10482df0 (13 bytes, 6 insns) */
void f_10482df0(void) {
  FTRACE(0x10482df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10482df1 mov ebp, esp */
  EBP = (ESP);
  /* 10482df3 call 0x1047a950 */
  push32(0x10482df8u); f_1047a950();
  /* 10482df8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482dfb pop ebp */
  EBP = (pop32());
  /* 10482dfc ret  */
  ESPCHK(0x10482df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10022e00 @ 0x10482e00 (176 bytes, 183 insns) */
void f_10482e00(void) {
  FTRACE(0x10482e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10482e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10482e01 mov ebp, esp */
  EBP = (ESP);
  /* 10482e03 push edi */
  push32((uint32_t)(EDI));
  /* 10482e04 push esi */
  push32((uint32_t)(ESI));
  /* 10482e05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10482e08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10482e0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10482e0e mov eax, ecx */
  EAX = (ECX);
  /* 10482e10 mov edx, ecx */
  EDX = (ECX);
  /* 10482e12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10482e14:;
  /* 10482e14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482e16 jbe 0x10482e20 */
  if ((C.cf||C.zf)) goto L_10482e20;
  /* 10482e18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482e1a jb 0x10482f98 */
  if (C.cf) goto L_10482f98;
L_10482e20:;
  /* 10482e20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10482e26 jne 0x10482e3c */
  if (!C.zf) goto L_10482e3c;
  /* 10482e28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10482e2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10482e2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482e31 jb 0x10482e5c */
  if (C.cf) goto L_10482e5c;
  /* 10482e33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10482e35 jmp dword ptr [edx*4 + 0x1000af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000af48)))); return;
L_10482e3c:;
  /* 10482e3c mov eax, edi */
  EAX = (EDI);
  /* 10482e3e mov edx, 3 */
  EDX = (0x3u);
  /* 10482e43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482e46 jb 0x10482e54 */
  if (C.cf) goto L_10482e54;
  /* 10482e48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10482e4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10482e4d jmp dword ptr [eax*4 + 0x1000ae60] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000ae60)))); return;
L_10482e54:;
  /* 10482e54 jmp dword ptr [ecx*4 + 0x1000af58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000af58)))); return;
  /* 10482e5b nop  */
  /* nop */
L_10482e5c:;
  /* 10482e5c jmp dword ptr [ecx*4 + 0x1000aedc] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000aedc)))); return;
  /* 10482e63 nop  */
  /* nop */
  /* 10482e64 jo 0x10482e14 */
  if (C.of) goto L_10482e14;
  /* 10482e66 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482e68 pushfd  */
  x86_unimpl("pushfd @ 0x10482e68");
  /* 10482e69 scasb al, byte ptr es:[edi] */
  { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1);
  /* 10482e6a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482e6c shr byte ptr [esi - 0x2edcf000], 0x8a */
  w8((uint32_t)(ESI + -0x2edcf000), (sh_shr((uint32_t)(r8((uint32_t)(ESI + -0x2edcf000))), (0x8au)&0x1f, 8)));
  /* 10482e73 push es */
  push32((uint32_t)(C.seg_es));
  /* 10482e74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482e76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10482e79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10482e7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10482e7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10482e82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10482e85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482e88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482e8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482e8e jb 0x10482e5c */
  if (C.cf) goto L_10482e5c;
  /* 10482e90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10482e92 jmp dword ptr [edx*4 + 0x1000af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000af48)))); return;
  /* 10482e99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10482e9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10482e9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10482ea0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482ea2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10482ea5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10482ea8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10482eab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482eae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482eb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482eb4 jb 0x10482e5c */
  if (C.cf) goto L_10482e5c;
  /* 10482eb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10482eb8 jmp dword ptr [edx*4 + 0x1000af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000af48)))); return;
  /* 10482ebf nop  */
  /* nop */
  /* 10482ec0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10482ec2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10482ec4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482ec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10482ec7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10482eca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10482ecb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482ece jb 0x10482e5c */
  if (C.cf) goto L_10482e5c;
  /* 10482ed0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10482ed2 jmp dword ptr [edx*4 + 0x1000af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000af48)))); return;
  /* 10482ed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10482edc aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 10482edd scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10482ede add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ee0 sub al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10482ee2 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ee4 and al, 0xaf */
  { uint32_t _r=(AL)&(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 10482ee6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ee8 sbb al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10482eea add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482eec adc al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10482eee add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ef0 or al, 0xaf */
  { uint32_t _r=(AL)|(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 10482ef2 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ef4 add al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10482ef6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482ef8 cld  */
  C.df=0;
  /* 10482ef9 scasb al, byte ptr es:[edi] */
  { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1);
  /* 10482efa add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482efc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10482f00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
  /* 10482f04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10482f08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
  /* 10482f0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10482f10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
  /* 10482f14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10482f18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
  /* 10482f1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10482f20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
  /* 10482f24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10482f28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
  /* 10482f2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10482f30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10482f34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10482f3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482f3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10482f3f jmp dword ptr [edx*4 + 0x1000af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000af48)))); return;
  /* 10482f46 mov edi, edi */
  EDI = (EDI);
  /* 10482f48 pop eax */
  EAX = (pop32());
  /* 10482f49 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10482f4a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482f4c pushal  */
  x86_unimpl("pushal @ 0x10482f4c");
  /* 10482f4d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10482f4e add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482f50 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10482f50");
  /* 10482f51 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10482f52 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10482f54 sub byte ptr [edi + 0x458b1000], 8 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x458b1000))),_b=(0x8u),_r=_a-_b; w8((uint32_t)(EDI + 0x458b1000), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10482f5b pop esi */
  ESI = (pop32());
  /* 10482f5c pop edi */
  EDI = (pop32());
  /* 10482f5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10482f5e ret  */
  ESPCHK(0x10482e00u, _esp0);
  ESP += 4; return;
  /* 10482f5f nop  */
  /* nop */
  /* 10482f60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10482f62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482f67 pop esi */
  ESI = (pop32());
  /* 10482f68 pop edi */
  EDI = (pop32());
  /* 10482f69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10482f6a ret  */
  ESPCHK(0x10482e00u, _esp0);
  ESP += 4; return;
  /* 10482f6b nop  */
  /* nop */
  /* 10482f6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10482f6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482f70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10482f73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10482f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482f79 pop esi */
  ESI = (pop32());
  /* 10482f7a pop edi */
  EDI = (pop32());
  /* 10482f7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10482f7c ret  */
  ESPCHK(0x10482e00u, _esp0);
  ESP += 4; return;
  /* 10482f7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10482f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10482f82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10482f84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10482f87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10482f8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10482f8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10482f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10482f93 pop esi */
  ESI = (pop32());
  /* 10482f94 pop edi */
  EDI = (pop32());
  /* 10482f95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10482f96 ret  */
  ESPCHK(0x10482e00u, _esp0);
  ESP += 4; return;
  /* 10482f97 nop  */
  /* nop */
L_10482f98:;
  /* 10482f98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10482f9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10482fa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10482fa6 jne 0x10482fcc */
  if (!C.zf) goto L_10482fcc;
  /* 10482fa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10482fab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10482fae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482fb1 jb 0x10482fc0 */
  if (C.cf) goto L_10482fc0;
  /* 10482fb3 std  */
  C.df=1;
  /* 10482fb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10482fb6 cld  */
  C.df=0;
  /* 10482fb7 jmp dword ptr [edx*4 + 0x1000b0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1000b0e0)))); return;
  /* 10482fbe mov edi, edi */
  EDI = (EDI);
L_10482fc0:;
  /* 10482fc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10482fc2 jmp dword ptr [ecx*4 + 0x1000b090] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000b090)))); return;
  /* 10482fc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10482fcc:;
  /* 10482fcc mov eax, edi */
  EAX = (EDI);
  /* 10482fce mov edx, 3 */
  EDX = (0x3u);
  /* 10482fd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10482fd6 jb 0x10482fe4 */
  if (C.cf) goto L_10482fe4;
  /* 10482fd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10482fdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10482fdd jmp dword ptr [eax*4 + 0x1000afe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000afe8)))); return;
L_10482fe4:;
  /* 10482fe4 jmp dword ptr [ecx*4 + 0x1000b0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000b0e0)))); return;
}

/* FUN_10023140 @ 0x10483140 (421 bytes, 148 insns) */
void f_10483140(void) {
  FTRACE(0x10483140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483140 push ebp */
  push32((uint32_t)(EBP));
  /* 10483141 mov ebp, esp */
  EBP = (ESP);
  /* 10483143 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10483145 push 0x10029fa8 */
  push32((uint32_t)(0x10029fa8u));
  /* 1048314a push 0x1000c018 */
  push32((uint32_t)(0x1000c018u));
  /* 1048314f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10483155 push eax */
  push32((uint32_t)(EAX));
  /* 10483156 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1048315d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483160 push ebx */
  push32((uint32_t)(EBX));
  /* 10483161 push esi */
  push32((uint32_t)(ESI));
  /* 10483162 push edi */
  push32((uint32_t)(EDI));
  /* 10483163 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10483166 cmp dword ptr [0x1002e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048316d jne 0x104831be */
  if (!C.zf) goto L_104831be;
  /* 1048316f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10483172 push eax */
  push32((uint32_t)(EAX));
  /* 10483173 push 1 */
  push32((uint32_t)(0x1u));
  /* 10483175 push 0x10029fa4 */
  push32((uint32_t)(0x10029fa4u));
  /* 1048317a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048317c call dword ptr [0x1003033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003033c))), 0x10483182u);
  /* 10483182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483184 je 0x10483192 */
  if (C.zf) goto L_10483192;
  /* 10483186 mov dword ptr [0x1002e674], 1 */
  w32((uint32_t)(0x1002e674), (0x1u));
  /* 10483190 jmp 0x104831be */
  goto L_104831be;
L_10483192:;
  /* 10483192 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10483195 push ecx */
  push32((uint32_t)(ECX));
  /* 10483196 push 1 */
  push32((uint32_t)(0x1u));
  /* 10483198 push 0x10029fa0 */
  push32((uint32_t)(0x10029fa0u));
  /* 1048319d push 1 */
  push32((uint32_t)(0x1u));
  /* 1048319f push 0 */
  push32((uint32_t)(0x0u));
  /* 104831a1 call dword ptr [0x10030338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030338))), 0x104831a7u);
  /* 104831a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104831a9 je 0x104831b7 */
  if (C.zf) goto L_104831b7;
  /* 104831ab mov dword ptr [0x1002e674], 2 */
  w32((uint32_t)(0x1002e674), (0x2u));
  /* 104831b5 jmp 0x104831be */
  goto L_104831be;
L_104831b7:;
  /* 104831b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104831b9 jmp 0x104832e8 */
  goto L_104832e8;
L_104831be:;
  /* 104831be cmp dword ptr [0x1002e674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1002e674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104831c5 jne 0x104831f5 */
  if (!C.zf) goto L_104831f5;
  /* 104831c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104831cb jne 0x104831d6 */
  if (!C.zf) goto L_104831d6;
  /* 104831cd mov edx, dword ptr [0x1002e680] */
  EDX = (r32((uint32_t)(0x1002e680)));
  /* 104831d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_104831d6:;
  /* 104831d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104831d9 push eax */
  push32((uint32_t)(EAX));
  /* 104831da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104831dd push ecx */
  push32((uint32_t)(ECX));
  /* 104831de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104831e1 push edx */
  push32((uint32_t)(EDX));
  /* 104831e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104831e5 push eax */
  push32((uint32_t)(EAX));
  /* 104831e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104831e9 push ecx */
  push32((uint32_t)(ECX));
  /* 104831ea call dword ptr [0x10030338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030338))), 0x104831f0u);
  /* 104831f0 jmp 0x104832e8 */
  goto L_104832e8;
L_104831f5:;
  /* 104831f5 cmp dword ptr [0x1002e674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104831fc jne 0x104832e6 */
  if (!C.zf) goto L_104832e6;
  /* 10483202 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483206 jne 0x10483211 */
  if (!C.zf) goto L_10483211;
  /* 10483208 mov edx, dword ptr [0x1002e690] */
  EDX = (r32((uint32_t)(0x1002e690)));
  /* 1048320e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10483211:;
  /* 10483211 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483215 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10483218 push eax */
  push32((uint32_t)(EAX));
  /* 10483219 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048321c push ecx */
  push32((uint32_t)(ECX));
  /* 1048321d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10483220 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10483222 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483224 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10483227 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048322a push edx */
  push32((uint32_t)(EDX));
  /* 1048322b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1048322e push eax */
  push32((uint32_t)(EAX));
  /* 1048322f call dword ptr [0x1003031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003031c))), 0x10483235u);
  /* 10483235 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10483238 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048323c jne 0x10483245 */
  if (!C.zf) goto L_10483245;
  /* 1048323e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483240 jmp 0x104832e8 */
  goto L_104832e8;
L_10483245:;
  /* 10483245 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1048324c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048324f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10483251 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483254 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10483256 call 0x1047e0b0 */
  push32(0x1048325bu); f_1047e0b0();
  /* 1048325b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1048325e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10483261 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10483264 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10483267 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048326a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1048326c push edx */
  push32((uint32_t)(EDX));
  /* 1048326d push 0 */
  push32((uint32_t)(0x0u));
  /* 1048326f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10483272 push eax */
  push32((uint32_t)(EAX));
  /* 10483273 call 0x1047ec80 */
  push32(0x10483278u); f_1047ec80();
  /* 10483278 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048327b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10483282 jmp 0x1048329b */
  goto L_1048329b;
  /* 10483284 mov eax, 1 */
  EAX = (0x1u);
  /* 10483289 ret  */
  ESPCHK(0x10483140u, _esp0);
  ESP += 4; return;
  /* 1048328a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1048328d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10483294 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1048329b:;
  /* 1048329b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048329f jne 0x104832a5 */
  if (!C.zf) goto L_104832a5;
  /* 104832a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104832a3 jmp 0x104832e8 */
  goto L_104832e8;
L_104832a5:;
  /* 104832a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104832a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104832a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104832ac push edx */
  push32((uint32_t)(EDX));
  /* 104832ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104832b0 push eax */
  push32((uint32_t)(EAX));
  /* 104832b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104832b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104832b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104832b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104832ba push edx */
  push32((uint32_t)(EDX));
  /* 104832bb call dword ptr [0x1003031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003031c))), 0x104832c1u);
  /* 104832c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104832c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104832c8 jne 0x104832ce */
  if (!C.zf) goto L_104832ce;
  /* 104832ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104832cc jmp 0x104832e8 */
  goto L_104832e8;
L_104832ce:;
  /* 104832ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104832d1 push eax */
  push32((uint32_t)(EAX));
  /* 104832d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104832d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104832d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104832d9 push edx */
  push32((uint32_t)(EDX));
  /* 104832da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104832dd push eax */
  push32((uint32_t)(EAX));
  /* 104832de call dword ptr [0x1003033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003033c))), 0x104832e4u);
  /* 104832e4 jmp 0x104832e8 */
  goto L_104832e8;
L_104832e6:;
  /* 104832e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104832e8:;
  /* 104832e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 104832eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104832ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104832f5 pop edi */
  EDI = (pop32());
  /* 104832f6 pop esi */
  ESI = (pop32());
  /* 104832f7 pop ebx */
  EBX = (pop32());
  /* 104832f8 mov esp, ebp */
  ESP = (EBP);
  /* 104832fa pop ebp */
  EBP = (pop32());
  /* 104832fb ret  */
  ESPCHK(0x10483140u, _esp0);
  ESP += 4; return;
}

/* FUN_10023300 @ 0x10483300 (727 bytes, 263 insns) */
void f_10483300(void) {
  FTRACE(0x10483300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483300 push ebp */
  push32((uint32_t)(EBP));
  /* 10483301 mov ebp, esp */
  EBP = (ESP);
  /* 10483303 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10483305 push 0x10029fb8 */
  push32((uint32_t)(0x10029fb8u));
  /* 1048330a push 0x1000c018 */
  push32((uint32_t)(0x1000c018u));
  /* 1048330f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10483315 push eax */
  push32((uint32_t)(EAX));
  /* 10483316 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1048331d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483320 push ebx */
  push32((uint32_t)(EBX));
  /* 10483321 push esi */
  push32((uint32_t)(ESI));
  /* 10483322 push edi */
  push32((uint32_t)(EDI));
  /* 10483323 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10483326 cmp dword ptr [0x1002e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048332d jne 0x10483386 */
  if (!C.zf) goto L_10483386;
  /* 1048332f push 0 */
  push32((uint32_t)(0x0u));
  /* 10483331 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10483335 push 0x10029fa4 */
  push32((uint32_t)(0x10029fa4u));
  /* 1048333a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1048333f push 0 */
  push32((uint32_t)(0x0u));
  /* 10483341 call dword ptr [0x10030344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030344))), 0x10483347u);
  /* 10483347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483349 je 0x10483357 */
  if (C.zf) goto L_10483357;
  /* 1048334b mov dword ptr [0x1002e698], 1 */
  w32((uint32_t)(0x1002e698), (0x1u));
  /* 10483355 jmp 0x10483386 */
  goto L_10483386;
L_10483357:;
  /* 10483357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048335b push 1 */
  push32((uint32_t)(0x1u));
  /* 1048335d push 0x10029fa0 */
  push32((uint32_t)(0x10029fa0u));
  /* 10483362 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10483367 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483369 call dword ptr [0x10030340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030340))), 0x1048336fu);
  /* 1048336f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483371 je 0x1048337f */
  if (C.zf) goto L_1048337f;
  /* 10483373 mov dword ptr [0x1002e698], 2 */
  w32((uint32_t)(0x1002e698), (0x2u));
  /* 1048337d jmp 0x10483386 */
  goto L_10483386;
L_1048337f:;
  /* 1048337f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483381 jmp 0x104835f1 */
  goto L_104835f1;
L_10483386:;
  /* 10483386 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048338a jle 0x1048339f */
  if ((C.zf||C.sf!=C.of)) goto L_1048339f;
  /* 1048338c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1048338f push eax */
  push32((uint32_t)(EAX));
  /* 10483390 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10483393 push ecx */
  push32((uint32_t)(ECX));
  /* 10483394 call 0x10483610 */
  push32(0x10483399u); f_10483610();
  /* 10483399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048339c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1048339f:;
  /* 1048339f cmp dword ptr [0x1002e698], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1002e698))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104833a6 jne 0x104833cb */
  if (!C.zf) goto L_104833cb;
  /* 104833a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104833ab push edx */
  push32((uint32_t)(EDX));
  /* 104833ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104833af push eax */
  push32((uint32_t)(EAX));
  /* 104833b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104833b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104833b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104833b7 push edx */
  push32((uint32_t)(EDX));
  /* 104833b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104833bb push eax */
  push32((uint32_t)(EAX));
  /* 104833bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104833bf push ecx */
  push32((uint32_t)(ECX));
  /* 104833c0 call dword ptr [0x10030340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030340))), 0x104833c6u);
  /* 104833c6 jmp 0x104835f1 */
  goto L_104835f1;
L_104833cb:;
  /* 104833cb cmp dword ptr [0x1002e698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104833d2 jne 0x104835ef */
  if (!C.zf) goto L_104835ef;
  /* 104833d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104833dc jne 0x104833e7 */
  if (!C.zf) goto L_104833e7;
  /* 104833de mov edx, dword ptr [0x1002e690] */
  EDX = (r32((uint32_t)(0x1002e690)));
  /* 104833e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_104833e7:;
  /* 104833e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104833e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104833eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104833ee push eax */
  push32((uint32_t)(EAX));
  /* 104833ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104833f2 push ecx */
  push32((uint32_t)(ECX));
  /* 104833f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 104833f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104833f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104833fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104833fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483400 push edx */
  push32((uint32_t)(EDX));
  /* 10483401 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10483404 push eax */
  push32((uint32_t)(EAX));
  /* 10483405 call dword ptr [0x1003031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003031c))), 0x1048340bu);
  /* 1048340b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1048340e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483412 jne 0x1048341b */
  if (!C.zf) goto L_1048341b;
  /* 10483414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483416 jmp 0x104835f1 */
  goto L_104835f1;
L_1048341b:;
  /* 1048341b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10483422 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10483425 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10483427 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048342a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1048342c call 0x1047e0b0 */
  push32(0x10483431u); f_1047e0b0();
  /* 10483431 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10483434 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10483437 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1048343a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1048343d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10483444 jmp 0x1048345d */
  goto L_1048345d;
  /* 10483446 mov eax, 1 */
  EAX = (0x1u);
  /* 1048344b ret  */
  ESPCHK(0x10483300u, _esp0);
  ESP += 4; return;
  /* 1048344c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1048344f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10483456 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1048345d:;
  /* 1048345d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483461 jne 0x1048346a */
  if (!C.zf) goto L_1048346a;
  /* 10483463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483465 jmp 0x104835f1 */
  goto L_104835f1;
L_1048346a:;
  /* 1048346a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1048346d push edx */
  push32((uint32_t)(EDX));
  /* 1048346e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10483471 push eax */
  push32((uint32_t)(EAX));
  /* 10483472 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10483475 push ecx */
  push32((uint32_t)(ECX));
  /* 10483476 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10483479 push edx */
  push32((uint32_t)(EDX));
  /* 1048347a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048347c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1048347f push eax */
  push32((uint32_t)(EAX));
  /* 10483480 call dword ptr [0x1003031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003031c))), 0x10483486u);
  /* 10483486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483488 jne 0x10483491 */
  if (!C.zf) goto L_10483491;
  /* 1048348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048348c jmp 0x104835f1 */
  goto L_104835f1;
L_10483491:;
  /* 10483491 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483493 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483495 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10483498 push ecx */
  push32((uint32_t)(ECX));
  /* 10483499 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048349c push edx */
  push32((uint32_t)(EDX));
  /* 1048349d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104834a0 push eax */
  push32((uint32_t)(EAX));
  /* 104834a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104834a4 push ecx */
  push32((uint32_t)(ECX));
  /* 104834a5 call dword ptr [0x10030344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030344))), 0x104834abu);
  /* 104834ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104834ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104834b2 jne 0x104834bb */
  if (!C.zf) goto L_104834bb;
  /* 104834b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104834b6 jmp 0x104835f1 */
  goto L_104835f1;
L_104834bb:;
  /* 104834bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104834be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 104834c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104834c6 je 0x1048350b */
  if (C.zf) goto L_1048350b;
  /* 104834c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104834cc je 0x10483506 */
  if (C.zf) goto L_10483506;
  /* 104834ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104834d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104834d4 jle 0x104834dd */
  if ((C.zf||C.sf!=C.of)) goto L_104834dd;
  /* 104834d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104834d8 jmp 0x104835f1 */
  goto L_104835f1;
L_104834dd:;
  /* 104834dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104834e0 push ecx */
  push32((uint32_t)(ECX));
  /* 104834e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104834e4 push edx */
  push32((uint32_t)(EDX));
  /* 104834e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104834e8 push eax */
  push32((uint32_t)(EAX));
  /* 104834e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104834ec push ecx */
  push32((uint32_t)(ECX));
  /* 104834ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104834f0 push edx */
  push32((uint32_t)(EDX));
  /* 104834f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104834f4 push eax */
  push32((uint32_t)(EAX));
  /* 104834f5 call dword ptr [0x10030344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030344))), 0x104834fbu);
  /* 104834fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104834fd jne 0x10483506 */
  if (!C.zf) goto L_10483506;
  /* 104834ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483501 jmp 0x104835f1 */
  goto L_104835f1;
L_10483506:;
  /* 10483506 jmp 0x104835ea */
  goto L_104835ea;
L_1048350b:;
  /* 1048350b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1048350e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10483511 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10483518 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048351b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1048351d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483520 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10483522 call 0x1047e0b0 */
  push32(0x10483527u); f_1047e0b0();
  /* 10483527 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1048352a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1048352d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10483530 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10483533 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1048353a jmp 0x10483553 */
  goto L_10483553;
  /* 1048353c mov eax, 1 */
  EAX = (0x1u);
  /* 10483541 ret  */
  ESPCHK(0x10483300u, _esp0);
  ESP += 4; return;
  /* 10483542 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10483545 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1048354c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10483553:;
  /* 10483553 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483557 jne 0x10483560 */
  if (!C.zf) goto L_10483560;
  /* 10483559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048355b jmp 0x104835f1 */
  goto L_104835f1;
L_10483560:;
  /* 10483560 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10483563 push eax */
  push32((uint32_t)(EAX));
  /* 10483564 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10483567 push ecx */
  push32((uint32_t)(ECX));
  /* 10483568 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1048356b push edx */
  push32((uint32_t)(EDX));
  /* 1048356c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1048356f push eax */
  push32((uint32_t)(EAX));
  /* 10483570 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483573 push ecx */
  push32((uint32_t)(ECX));
  /* 10483574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483577 push edx */
  push32((uint32_t)(EDX));
  /* 10483578 call dword ptr [0x10030344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030344))), 0x1048357eu);
  /* 1048357e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483580 jne 0x10483586 */
  if (!C.zf) goto L_10483586;
  /* 10483582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483584 jmp 0x104835f1 */
  goto L_104835f1;
L_10483586:;
  /* 10483586 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048358a jne 0x104835ba */
  if (!C.zf) goto L_104835ba;
  /* 1048358c push 0 */
  push32((uint32_t)(0x0u));
  /* 1048358e push 0 */
  push32((uint32_t)(0x0u));
  /* 10483590 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483594 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10483597 push eax */
  push32((uint32_t)(EAX));
  /* 10483598 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1048359b push ecx */
  push32((uint32_t)(ECX));
  /* 1048359c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104835a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 104835a4 push edx */
  push32((uint32_t)(EDX));
  /* 104835a5 call dword ptr [0x100302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ec))), 0x104835abu);
  /* 104835ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104835ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104835b2 jne 0x104835b8 */
  if (!C.zf) goto L_104835b8;
  /* 104835b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104835b6 jmp 0x104835f1 */
  goto L_104835f1;
L_104835b8:;
  /* 104835b8 jmp 0x104835ea */
  goto L_104835ea;
L_104835ba:;
  /* 104835ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104835bc push 0 */
  push32((uint32_t)(0x0u));
  /* 104835be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104835c1 push eax */
  push32((uint32_t)(EAX));
  /* 104835c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104835c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104835c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104835c9 push edx */
  push32((uint32_t)(EDX));
  /* 104835ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104835cd push eax */
  push32((uint32_t)(EAX));
  /* 104835ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104835d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104835d6 push ecx */
  push32((uint32_t)(ECX));
  /* 104835d7 call dword ptr [0x100302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ec))), 0x104835ddu);
  /* 104835dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104835e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104835e4 jne 0x104835ea */
  if (!C.zf) goto L_104835ea;
  /* 104835e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104835e8 jmp 0x104835f1 */
  goto L_104835f1;
L_104835ea:;
  /* 104835ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104835ed jmp 0x104835f1 */
  goto L_104835f1;
L_104835ef:;
  /* 104835ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104835f1:;
  /* 104835f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104835f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104835f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104835fe pop edi */
  EDI = (pop32());
  /* 104835ff pop esi */
  ESI = (pop32());
  /* 10483600 pop ebx */
  EBX = (pop32());
  /* 10483601 mov esp, ebp */
  ESP = (EBP);
  /* 10483603 pop ebp */
  EBP = (pop32());
  /* 10483604 ret  */
  ESPCHK(0x10483300u, _esp0);
  ESP += 4; return;
}

/* FUN_10023610 @ 0x10483610 (80 bytes, 32 insns) */
void f_10483610(void) {
  FTRACE(0x10483610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483610 push ebp */
  push32((uint32_t)(EBP));
  /* 10483611 mov ebp, esp */
  EBP = (ESP);
  /* 10483613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483616 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483619 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1048361c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048361f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10483622:;
  /* 10483622 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483625 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483628 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048362b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1048362e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10483630 je 0x10483647 */
  if (C.zf) goto L_10483647;
  /* 10483632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483635 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10483638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048363a je 0x10483647 */
  if (C.zf) goto L_10483647;
  /* 1048363c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048363f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10483645 jmp 0x10483622 */
  goto L_10483622;
L_10483647:;
  /* 10483647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048364a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1048364d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048364f jne 0x10483659 */
  if (!C.zf) goto L_10483659;
  /* 10483651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483654 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483657 jmp 0x1048365c */
  goto L_1048365c;
L_10483659:;
  /* 10483659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1048365c:;
  /* 1048365c mov esp, ebp */
  ESP = (EBP);
  /* 1048365e pop ebp */
  EBP = (pop32());
  /* 1048365f ret  */
  ESPCHK(0x10483610u, _esp0);
  ESP += 4; return;
}

/* FUN_10023660 @ 0x10483660 (130 bytes, 43 insns) */
void f_10483660(void) {
  FTRACE(0x10483660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483660 push ebp */
  push32((uint32_t)(EBP));
  /* 10483661 mov ebp, esp */
  EBP = (ESP);
  /* 10483663 push ecx */
  push32((uint32_t)(ECX));
  /* 10483664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483667 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048366d jae 0x10483691 */
  if (!C.cf) goto L_10483691;
  /* 1048366f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483672 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10483675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483678 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1048367b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048367e mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10483685 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1048368a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1048368d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048368f jne 0x104836ac */
  if (!C.zf) goto L_104836ac;
L_10483691:;
  /* 10483691 call 0x10482de0 */
  push32(0x10483696u); f_10482de0();
  /* 10483696 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1048369c call 0x10482df0 */
  push32(0x104836a1u); f_10482df0();
  /* 104836a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104836a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104836aa jmp 0x104836de */
  goto L_104836de;
L_104836ac:;
  /* 104836ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104836af push edx */
  push32((uint32_t)(EDX));
  /* 104836b0 call 0x10484600 */
  push32(0x104836b5u); f_10484600();
  /* 104836b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104836b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104836bb push eax */
  push32((uint32_t)(EAX));
  /* 104836bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104836bf push ecx */
  push32((uint32_t)(ECX));
  /* 104836c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104836c3 push edx */
  push32((uint32_t)(EDX));
  /* 104836c4 call 0x104836f0 */
  push32(0x104836c9u); f_104836f0();
  /* 104836c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104836cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104836cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104836d2 push eax */
  push32((uint32_t)(EAX));
  /* 104836d3 call 0x10484690 */
  push32(0x104836d8u); f_10484690();
  /* 104836d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104836db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104836de:;
  /* 104836de mov esp, ebp */
  ESP = (EBP);
  /* 104836e0 pop ebp */
  EBP = (pop32());
  /* 104836e1 ret  */
  ESPCHK(0x10483660u, _esp0);
  ESP += 4; return;
}

/* FUN_100236f0 @ 0x104836f0 (178 bytes, 56 insns) */
void f_104836f0(void) {
  FTRACE(0x104836f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104836f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104836f1 mov ebp, esp */
  EBP = (ESP);
  /* 104836f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104836f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104836f9 push eax */
  push32((uint32_t)(EAX));
  /* 104836fa call 0x10484480 */
  push32(0x104836ffu); f_10484480();
  /* 104836ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483702 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10483705 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483709 jne 0x1048371e */
  if (!C.zf) goto L_1048371e;
  /* 1048370b call 0x10482de0 */
  push32(0x10483710u); f_10482de0();
  /* 10483710 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10483716 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483719 jmp 0x1048379e */
  goto L_1048379e;
L_1048371e:;
  /* 1048371e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10483721 push ecx */
  push32((uint32_t)(ECX));
  /* 10483722 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483727 push edx */
  push32((uint32_t)(EDX));
  /* 10483728 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048372b push eax */
  push32((uint32_t)(EAX));
  /* 1048372c call dword ptr [0x10030348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030348))), 0x10483732u);
  /* 10483732 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10483735 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483739 jne 0x10483746 */
  if (!C.zf) goto L_10483746;
  /* 1048373b call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x10483741u);
  /* 10483741 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10483744 jmp 0x1048374d */
  goto L_1048374d;
L_10483746:;
  /* 10483746 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1048374d:;
  /* 1048374d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483751 je 0x10483764 */
  if (C.zf) goto L_10483764;
  /* 10483753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483756 push ecx */
  push32((uint32_t)(ECX));
  /* 10483757 call 0x10482d40 */
  push32(0x1048375cu); f_10482d40();
  /* 1048375c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048375f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483762 jmp 0x1048379e */
  goto L_1048379e;
L_10483764:;
  /* 10483764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483767 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1048376a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048376d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10483770 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483773 mov ecx, dword ptr [edx*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 1048377a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1048377e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10483781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048378a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1048378d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483790 mov eax, dword ptr [eax*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10483797 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1048379b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1048379e:;
  /* 1048379e mov esp, ebp */
  ESP = (EBP);
  /* 104837a0 pop ebp */
  EBP = (pop32());
  /* 104837a1 ret  */
  ESPCHK(0x104836f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100237b0 @ 0x104837b0 (130 bytes, 43 insns) */
void f_104837b0(void) {
  FTRACE(0x104837b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104837b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104837b1 mov ebp, esp */
  EBP = (ESP);
  /* 104837b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104837b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104837b7 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104837bd jae 0x104837e1 */
  if (!C.cf) goto L_104837e1;
  /* 104837bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104837c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104837c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104837c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104837cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104837ce mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 104837d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104837da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104837dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104837df jne 0x104837fc */
  if (!C.zf) goto L_104837fc;
L_104837e1:;
  /* 104837e1 call 0x10482de0 */
  push32(0x104837e6u); f_10482de0();
  /* 104837e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104837ec call 0x10482df0 */
  push32(0x104837f1u); f_10482df0();
  /* 104837f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104837f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104837fa jmp 0x1048382e */
  goto L_1048382e;
L_104837fc:;
  /* 104837fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104837ff push edx */
  push32((uint32_t)(EDX));
  /* 10483800 call 0x10484600 */
  push32(0x10483805u); f_10484600();
  /* 10483805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483808 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1048380b push eax */
  push32((uint32_t)(EAX));
  /* 1048380c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048380f push ecx */
  push32((uint32_t)(ECX));
  /* 10483810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483813 push edx */
  push32((uint32_t)(EDX));
  /* 10483814 call 0x10483840 */
  push32(0x10483819u); f_10483840();
  /* 10483819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048381c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048381f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483822 push eax */
  push32((uint32_t)(EAX));
  /* 10483823 call 0x10484690 */
  push32(0x10483828u); f_10484690();
  /* 10483828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048382b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1048382e:;
  /* 1048382e mov esp, ebp */
  ESP = (EBP);
  /* 10483830 pop ebp */
  EBP = (pop32());
  /* 10483831 ret  */
  ESPCHK(0x104837b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10023840 @ 0x10483840 (627 bytes, 182 insns) */
void f_10483840(void) {
  FTRACE(0x10483840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483840 push ebp */
  push32((uint32_t)(EBP));
  /* 10483841 mov ebp, esp */
  EBP = (ESP);
  /* 10483843 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483849 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10483850 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10483853 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10483859 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048385d jne 0x10483866 */
  if (!C.zf) goto L_10483866;
  /* 1048385f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483861 jmp 0x10483aaf */
  goto L_10483aaf;
L_10483866:;
  /* 10483866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483869 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1048386c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048386f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10483872 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483875 mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 1048387c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10483881 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10483884 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10483886 je 0x10483898 */
  if (C.zf) goto L_10483898;
  /* 10483888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048388a push 0 */
  push32((uint32_t)(0x0u));
  /* 1048388c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048388f push edx */
  push32((uint32_t)(EDX));
  /* 10483890 call 0x104836f0 */
  push32(0x10483895u); f_104836f0();
  /* 10483895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10483898:;
  /* 10483898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048389b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1048389e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104838a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104838a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104838a7 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 104838ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104838b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104838b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104838ba je 0x104839cc */
  if (C.zf) goto L_104839cc;
  /* 104838c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104838c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104838c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104838cd:;
  /* 104838cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104838d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104838d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104838d6 jae 0x104839ca */
  if (!C.cf) goto L_104839ca;
  /* 104838dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104838e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104838e5:;
  /* 104838e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104838e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 104838ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104838f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104838f6 jge 0x10483957 */
  if ((C.sf==C.of)) goto L_10483957;
  /* 104838f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104838fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104838fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483901 jae 0x10483957 */
  if (!C.cf) goto L_10483957;
  /* 10483903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483906 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10483908 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1048390e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483914 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10483917 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1048391e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483921 jne 0x10483941 */
  if (!C.zf) goto L_10483941;
  /* 10483923 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10483929 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048392c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10483932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483935 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10483938 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048393b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048393e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10483941:;
  /* 10483941 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483944 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1048394a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1048394c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048394f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483952 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10483955 jmp 0x104838e5 */
  goto L_104838e5;
L_10483957:;
  /* 10483957 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483959 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1048395f push edx */
  push32((uint32_t)(EDX));
  /* 10483960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483963 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10483969 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048396b push eax */
  push32((uint32_t)(EAX));
  /* 1048396c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10483972 push edx */
  push32((uint32_t)(EDX));
  /* 10483973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483976 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048397c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1048397f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483982 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10483989 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1048398c push eax */
  push32((uint32_t)(EAX));
  /* 1048398d call dword ptr [0x10030280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030280))), 0x10483993u);
  /* 10483993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483995 je 0x104839ba */
  if (C.zf) goto L_104839ba;
  /* 10483997 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1048399a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104839a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104839a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104839a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104839ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104839ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104839b4 jge 0x104839b8 */
  if ((C.sf==C.of)) goto L_104839b8;
  /* 104839b6 jmp 0x104839ca */
  goto L_104839ca;
L_104839b8:;
  /* 104839b8 jmp 0x104839c5 */
  goto L_104839c5;
L_104839ba:;
  /* 104839ba call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x104839c0u);
  /* 104839c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104839c3 jmp 0x104839ca */
  goto L_104839ca;
L_104839c5:;
  /* 104839c5 jmp 0x104838cd */
  goto L_104838cd;
L_104839ca:;
  /* 104839ca jmp 0x10483a1c */
  goto L_10483a1c;
L_104839cc:;
  /* 104839cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104839ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 104839d4 push ecx */
  push32((uint32_t)(ECX));
  /* 104839d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104839d8 push edx */
  push32((uint32_t)(EDX));
  /* 104839d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104839dc push eax */
  push32((uint32_t)(EAX));
  /* 104839dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104839e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104839e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104839e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104839e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104839ec mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 104839f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 104839f6 push ecx */
  push32((uint32_t)(ECX));
  /* 104839f7 call dword ptr [0x10030280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030280))), 0x104839fdu);
  /* 104839fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104839ff je 0x10483a13 */
  if (C.zf) goto L_10483a13;
  /* 10483a01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10483a08 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10483a0e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10483a11 jmp 0x10483a1c */
  goto L_10483a1c;
L_10483a13:;
  /* 10483a13 call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x10483a19u);
  /* 10483a19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10483a1c:;
  /* 10483a1c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483a20 jne 0x10483aa6 */
  if (!C.zf) goto L_10483aa6;
  /* 10483a26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483a2a je 0x10483a5a */
  if (C.zf) goto L_10483a5a;
  /* 10483a2c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483a30 jne 0x10483a49 */
  if (!C.zf) goto L_10483a49;
  /* 10483a32 call 0x10482de0 */
  push32(0x10483a37u); f_10482de0();
  /* 10483a37 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10483a3d call 0x10482df0 */
  push32(0x10483a42u); f_10482df0();
  /* 10483a42 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10483a45 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10483a47 jmp 0x10483a55 */
  goto L_10483a55;
L_10483a49:;
  /* 10483a49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10483a4c push edx */
  push32((uint32_t)(EDX));
  /* 10483a4d call 0x10482d40 */
  push32(0x10483a52u); f_10482d40();
  /* 10483a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10483a55:;
  /* 10483a55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483a58 jmp 0x10483aaf */
  goto L_10483aaf;
L_10483a5a:;
  /* 10483a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483a5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483a63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10483a66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483a69 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10483a70 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10483a75 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10483a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483a7a je 0x10483a8b */
  if (C.zf) goto L_10483a8b;
  /* 10483a7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483a7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10483a82 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483a85 jne 0x10483a8b */
  if (!C.zf) goto L_10483a8b;
  /* 10483a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483a89 jmp 0x10483aaf */
  goto L_10483aaf;
L_10483a8b:;
  /* 10483a8b call 0x10482de0 */
  push32(0x10483a90u); f_10482de0();
  /* 10483a90 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10483a96 call 0x10482df0 */
  push32(0x10483a9bu); f_10482df0();
  /* 10483a9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10483aa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483aa4 jmp 0x10483aaf */
  goto L_10483aaf;
L_10483aa6:;
  /* 10483aa6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10483aa9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10483aaf:;
  /* 10483aaf mov esp, ebp */
  ESP = (EBP);
  /* 10483ab1 pop ebp */
  EBP = (pop32());
  /* 10483ab2 ret  */
  ESPCHK(0x10483840u, _esp0);
  ESP += 4; return;
}

/* FUN_10023ac0 @ 0x10483ac0 (199 bytes, 68 insns) */
void f_10483ac0(void) {
  FTRACE(0x10483ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10483ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10483ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10483ac4 push ebx */
  push32((uint32_t)(EBX));
  /* 10483ac5 push esi */
  push32((uint32_t)(ESI));
  /* 10483ac6 push edi */
  push32((uint32_t)(EDI));
L_10483ac7:;
  /* 10483ac7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483acb jne 0x10483aeb */
  if (!C.zf) goto L_10483aeb;
  /* 10483acd push 0x10029f04 */
  push32((uint32_t)(0x10029f04u));
  /* 10483ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483ad4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10483ad6 push 0x10029fd0 */
  push32((uint32_t)(0x10029fd0u));
  /* 10483adb push 2 */
  push32((uint32_t)(0x2u));
  /* 10483add call 0x10479fd0 */
  push32(0x10483ae2u); f_10479fd0();
  /* 10483ae2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483ae5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483ae8 jne 0x10483aeb */
  if (!C.zf) goto L_10483aeb;
  /* 10483aea int3  */
  x86_unimpl("int3 @ 0x10483aea");
L_10483aeb:;
  /* 10483aeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483aef jne 0x10483ac7 */
  if (!C.zf) goto L_10483ac7;
  /* 10483af1 mov ecx, dword ptr [0x1002e69c] */
  ECX = (r32((uint32_t)(0x1002e69c)));
  /* 10483af7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483afa mov dword ptr [0x1002e69c], ecx */
  w32((uint32_t)(0x1002e69c), (ECX));
  /* 10483b00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483b03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10483b06 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10483b08 push 0x10029fd0 */
  push32((uint32_t)(0x10029fd0u));
  /* 10483b0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10483b0f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10483b14 call 0x1047af10 */
  push32(0x10483b19u); f_1047af10();
  /* 10483b19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b1f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10483b22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b25 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483b29 je 0x10483b46 */
  if (C.zf) goto L_10483b46;
  /* 10483b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b2e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10483b31 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10483b34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b37 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10483b3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b3d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10483b44 jmp 0x10483b6b */
  goto L_10483b6b;
L_10483b46:;
  /* 10483b46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b49 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10483b4c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10483b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b52 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10483b55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b58 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483b5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b5e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10483b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b64 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10483b6b:;
  /* 10483b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10483b74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10483b76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483b79 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10483b80 pop edi */
  EDI = (pop32());
  /* 10483b81 pop esi */
  ESI = (pop32());
  /* 10483b82 pop ebx */
  EBX = (pop32());
  /* 10483b83 mov esp, ebp */
  ESP = (EBP);
  /* 10483b85 pop ebp */
  EBP = (pop32());
  /* 10483b86 ret  */
  ESPCHK(0x10483ac0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10483b90 (50 bytes, 17 insns) */
void f_10483b90(void) {
  FTRACE(0x10483b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10483b91 mov ebp, esp */
  EBP = (ESP);
  /* 10483b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483b96 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483b9c jb 0x10483ba2 */
  if (C.cf) goto L_10483ba2;
  /* 10483b9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483ba0 jmp 0x10483bc0 */
  goto L_10483bc0;
L_10483ba2:;
  /* 10483ba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483ba5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10483ba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483bab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10483bae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483bb1 mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10483bb8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10483bbd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10483bc0:;
  /* 10483bc0 pop ebp */
  EBP = (pop32());
  /* 10483bc1 ret  */
  ESPCHK(0x10483b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10023bd0 @ 0x10483bd0 (300 bytes, 80 insns) */
void f_10483bd0(void) {
  FTRACE(0x10483bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10483bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10483bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10483bd4 cmp dword ptr [0x1002fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483bdb jne 0x10483be9 */
  if (!C.zf) goto L_10483be9;
  /* 10483bdd mov dword ptr [0x1002fb60], 0x200 */
  w32((uint32_t)(0x1002fb60), (0x200u));
  /* 10483be7 jmp 0x10483bfc */
  goto L_10483bfc;
L_10483be9:;
  /* 10483be9 cmp dword ptr [0x1002fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1002fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483bf0 jge 0x10483bfc */
  if ((C.sf==C.of)) goto L_10483bfc;
  /* 10483bf2 mov dword ptr [0x1002fb60], 0x14 */
  w32((uint32_t)(0x1002fb60), (0x14u));
L_10483bfc:;
  /* 10483bfc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10483c01 push 0x10029fdc */
  push32((uint32_t)(0x10029fdcu));
  /* 10483c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10483c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10483c0a mov eax, dword ptr [0x1002fb60] */
  EAX = (r32((uint32_t)(0x1002fb60)));
  /* 10483c0f push eax */
  push32((uint32_t)(EAX));
  /* 10483c10 call 0x1047b320 */
  push32(0x10483c15u); f_1047b320();
  /* 10483c15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483c18 mov dword ptr [0x1002e810], eax */
  w32((uint32_t)(0x1002e810), (EAX));
  /* 10483c1d cmp dword ptr [0x1002e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483c24 jne 0x10483c65 */
  if (!C.zf) goto L_10483c65;
  /* 10483c26 mov dword ptr [0x1002fb60], 0x14 */
  w32((uint32_t)(0x1002fb60), (0x14u));
  /* 10483c30 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10483c35 push 0x10029fdc */
  push32((uint32_t)(0x10029fdcu));
  /* 10483c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10483c3c push 4 */
  push32((uint32_t)(0x4u));
  /* 10483c3e mov ecx, dword ptr [0x1002fb60] */
  ECX = (r32((uint32_t)(0x1002fb60)));
  /* 10483c44 push ecx */
  push32((uint32_t)(ECX));
  /* 10483c45 call 0x1047b320 */
  push32(0x10483c4au); f_1047b320();
  /* 10483c4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483c4d mov dword ptr [0x1002e810], eax */
  w32((uint32_t)(0x1002e810), (EAX));
  /* 10483c52 cmp dword ptr [0x1002e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483c59 jne 0x10483c65 */
  if (!C.zf) goto L_10483c65;
  /* 10483c5b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10483c5d call 0x10479e80 */
  push32(0x10483c62u); f_10479e80();
  /* 10483c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10483c65:;
  /* 10483c65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10483c6c jmp 0x10483c77 */
  goto L_10483c77;
L_10483c6e:;
  /* 10483c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483c71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483c74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10483c77:;
  /* 10483c77 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483c7b jge 0x10483c96 */
  if ((C.sf==C.of)) goto L_10483c96;
  /* 10483c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483c80 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483c83 add eax, 0x1002d120 */
  { uint32_t _a=(EAX),_b=(0x1002d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483c88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483c8b mov edx, dword ptr [0x1002e810] */
  EDX = (r32((uint32_t)(0x1002e810)));
  /* 10483c91 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10483c94 jmp 0x10483c6e */
  goto L_10483c6e;
L_10483c96:;
  /* 10483c96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10483c9d jmp 0x10483ca8 */
  goto L_10483ca8;
L_10483c9f:;
  /* 10483c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483ca2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10483ca8:;
  /* 10483ca8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483cac jge 0x10483cf8 */
  if ((C.sf==C.of)) goto L_10483cf8;
  /* 10483cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483cb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10483cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483cb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10483cba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483cbd mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10483cc4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483cc8 je 0x10483ce6 */
  if (C.zf) goto L_10483ce6;
  /* 10483cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483ccd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10483cd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483cd3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10483cd6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10483cd9 mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10483ce0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483ce4 jne 0x10483cf6 */
  if (!C.zf) goto L_10483cf6;
L_10483ce6:;
  /* 10483ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10483ce9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10483cec mov dword ptr [ecx + 0x1002d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1002d130), (0xffffffffu));
L_10483cf6:;
  /* 10483cf6 jmp 0x10483c9f */
  goto L_10483c9f;
L_10483cf8:;
  /* 10483cf8 mov esp, ebp */
  ESP = (EBP);
  /* 10483cfa pop ebp */
  EBP = (pop32());
  /* 10483cfb ret  */
  ESPCHK(0x10483bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10023d00 @ 0x10483d00 (26 bytes, 9 insns) */
void f_10483d00(void) {
  FTRACE(0x10483d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10483d01 mov ebp, esp */
  EBP = (ESP);
  /* 10483d03 call 0x10484900 */
  push32(0x10483d08u); f_10484900();
  /* 10483d08 movsx eax, byte ptr [0x1002e4b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1002e4b4))));
  /* 10483d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10483d11 je 0x10483d18 */
  if (C.zf) goto L_10483d18;
  /* 10483d13 call 0x104846c0 */
  push32(0x10483d18u); f_104846c0();
L_10483d18:;
  /* 10483d18 pop ebp */
  EBP = (pop32());
  /* 10483d19 ret  */
  ESPCHK(0x10483d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10023d20 @ 0x10483d20 (61 bytes, 20 insns) */
void f_10483d20(void) {
  FTRACE(0x10483d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10483d21 mov ebp, esp */
  EBP = (ESP);
  /* 10483d23 cmp dword ptr [ebp + 8], 0x1002d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1002d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483d2a jb 0x10483d4e */
  if (C.cf) goto L_10483d4e;
  /* 10483d2c cmp dword ptr [ebp + 8], 0x1002d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1002d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483d33 ja 0x10483d4e */
  if ((!C.cf&&!C.zf)) goto L_10483d4e;
  /* 10483d35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483d38 sub eax, 0x1002d120 */
  { uint32_t _a=(EAX),_b=(0x1002d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483d3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483d40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d43 push eax */
  push32((uint32_t)(EAX));
  /* 10483d44 call 0x1047e910 */
  push32(0x10483d49u); f_1047e910();
  /* 10483d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d4c jmp 0x10483d5b */
  goto L_10483d5b;
L_10483d4e:;
  /* 10483d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483d51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d54 push ecx */
  push32((uint32_t)(ECX));
  /* 10483d55 call dword ptr [0x10030310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030310))), 0x10483d5bu);
L_10483d5b:;
  /* 10483d5b pop ebp */
  EBP = (pop32());
  /* 10483d5c ret  */
  ESPCHK(0x10483d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10023d60 @ 0x10483d60 (41 bytes, 16 insns) */
void f_10483d60(void) {
  FTRACE(0x10483d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10483d61 mov ebp, esp */
  EBP = (ESP);
  /* 10483d63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483d67 jge 0x10483d7a */
  if ((C.sf==C.of)) goto L_10483d7a;
  /* 10483d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483d6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d6f push eax */
  push32((uint32_t)(EAX));
  /* 10483d70 call 0x1047e910 */
  push32(0x10483d75u); f_1047e910();
  /* 10483d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d78 jmp 0x10483d87 */
  goto L_10483d87;
L_10483d7a:;
  /* 10483d7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483d7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483d80 push ecx */
  push32((uint32_t)(ECX));
  /* 10483d81 call dword ptr [0x10030310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030310))), 0x10483d87u);
L_10483d87:;
  /* 10483d87 pop ebp */
  EBP = (pop32());
  /* 10483d88 ret  */
  ESPCHK(0x10483d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10023d90 @ 0x10483d90 (61 bytes, 20 insns) */
void f_10483d90(void) {
  FTRACE(0x10483d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10483d91 mov ebp, esp */
  EBP = (ESP);
  /* 10483d93 cmp dword ptr [ebp + 8], 0x1002d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1002d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483d9a jb 0x10483dbe */
  if (C.cf) goto L_10483dbe;
  /* 10483d9c cmp dword ptr [ebp + 8], 0x1002d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1002d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483da3 ja 0x10483dbe */
  if ((!C.cf&&!C.zf)) goto L_10483dbe;
  /* 10483da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483da8 sub eax, 0x1002d120 */
  { uint32_t _a=(EAX),_b=(0x1002d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483dad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10483db0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483db3 push eax */
  push32((uint32_t)(EAX));
  /* 10483db4 call 0x1047e9b0 */
  push32(0x10483db9u); f_1047e9b0();
  /* 10483db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483dbc jmp 0x10483dcb */
  goto L_10483dcb;
L_10483dbe:;
  /* 10483dbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483dc1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483dc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10483dc5 call dword ptr [0x10030314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030314))), 0x10483dcbu);
L_10483dcb:;
  /* 10483dcb pop ebp */
  EBP = (pop32());
  /* 10483dcc ret  */
  ESPCHK(0x10483d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10023dd0 @ 0x10483dd0 (41 bytes, 16 insns) */
void f_10483dd0(void) {
  FTRACE(0x10483dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10483dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10483dd3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483dd7 jge 0x10483dea */
  if ((C.sf==C.of)) goto L_10483dea;
  /* 10483dd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483ddc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483ddf push eax */
  push32((uint32_t)(EAX));
  /* 10483de0 call 0x1047e9b0 */
  push32(0x10483de5u); f_1047e9b0();
  /* 10483de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483de8 jmp 0x10483df7 */
  goto L_10483df7;
L_10483dea:;
  /* 10483dea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483ded add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10483df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10483df1 call dword ptr [0x10030314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030314))), 0x10483df7u);
L_10483df7:;
  /* 10483df7 pop ebp */
  EBP = (pop32());
  /* 10483df8 ret  */
  ESPCHK(0x10483dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10023e00 @ 0x10483e00 (119 bytes, 34 insns) */
void f_10483e00(void) {
  FTRACE(0x10483e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10483e01 mov ebp, esp */
  EBP = (ESP);
  /* 10483e03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483e06 push 0x1002e80c */
  push32((uint32_t)(0x1002e80cu));
  /* 10483e0b call dword ptr [0x10030294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030294))), 0x10483e11u);
  /* 10483e11 cmp dword ptr [0x1002e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483e18 je 0x10483e38 */
  if (C.zf) goto L_10483e38;
  /* 10483e1a push 0x1002e80c */
  push32((uint32_t)(0x1002e80cu));
  /* 10483e1f call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x10483e25u);
  /* 10483e25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10483e27 call 0x1047e910 */
  push32(0x10483e2cu); f_1047e910();
  /* 10483e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483e2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10483e36 jmp 0x10483e3f */
  goto L_10483e3f;
L_10483e38:;
  /* 10483e38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10483e3f:;
  /* 10483e3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10483e43 push eax */
  push32((uint32_t)(EAX));
  /* 10483e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483e47 push ecx */
  push32((uint32_t)(ECX));
  /* 10483e48 call 0x10483e80 */
  push32(0x10483e4du); f_10483e80();
  /* 10483e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483e50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10483e53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483e57 je 0x10483e65 */
  if (C.zf) goto L_10483e65;
  /* 10483e59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10483e5b call 0x1047e9b0 */
  push32(0x10483e60u); f_1047e9b0();
  /* 10483e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483e63 jmp 0x10483e70 */
  goto L_10483e70;
L_10483e65:;
  /* 10483e65 push 0x1002e80c */
  push32((uint32_t)(0x1002e80cu));
  /* 10483e6a call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x10483e70u);
L_10483e70:;
  /* 10483e70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10483e73 mov esp, ebp */
  ESP = (EBP);
  /* 10483e75 pop ebp */
  EBP = (pop32());
  /* 10483e76 ret  */
  ESPCHK(0x10483e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10023e80 @ 0x10483e80 (160 bytes, 50 insns) */
void f_10483e80(void) {
  FTRACE(0x10483e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10483e81 mov ebp, esp */
  EBP = (ESP);
  /* 10483e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10483e86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483e8a jne 0x10483e93 */
  if (!C.zf) goto L_10483e93;
  /* 10483e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10483e8e jmp 0x10483f1c */
  goto L_10483f1c;
L_10483e93:;
  /* 10483e93 cmp dword ptr [0x1002e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483e9a jne 0x10483eca */
  if (!C.zf) goto L_10483eca;
  /* 10483e9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10483e9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483ea4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483ea9 jle 0x10483ebb */
  if ((C.zf||C.sf!=C.of)) goto L_10483ebb;
  /* 10483eab call 0x10482de0 */
  push32(0x10483eb0u); f_10482de0();
  /* 10483eb0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10483eb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483eb9 jmp 0x10483f1c */
  goto L_10483f1c;
L_10483ebb:;
  /* 10483ebb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483ebe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10483ec1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10483ec3 mov eax, 1 */
  EAX = (0x1u);
  /* 10483ec8 jmp 0x10483f1c */
  goto L_10483f1c;
L_10483eca:;
  /* 10483eca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10483ed1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10483ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10483ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483ed7 mov ecx, dword ptr [0x1002cea4] */
  ECX = (r32((uint32_t)(0x1002cea4)));
  /* 10483edd push ecx */
  push32((uint32_t)(ECX));
  /* 10483ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10483ee1 push edx */
  push32((uint32_t)(EDX));
  /* 10483ee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10483ee4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10483ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10483ee8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10483eed mov ecx, dword ptr [0x1002e690] */
  ECX = (r32((uint32_t)(0x1002e690)));
  /* 10483ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10483ef4 call dword ptr [0x100302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ec))), 0x10483efau);
  /* 10483efa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10483efd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483f01 je 0x10483f09 */
  if (C.zf) goto L_10483f09;
  /* 10483f03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483f07 je 0x10483f19 */
  if (C.zf) goto L_10483f19;
L_10483f09:;
  /* 10483f09 call 0x10482de0 */
  push32(0x10483f0eu); f_10482de0();
  /* 10483f0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10483f14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10483f17 jmp 0x10483f1c */
  goto L_10483f1c;
L_10483f19:;
  /* 10483f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10483f1c:;
  /* 10483f1c mov esp, ebp */
  ESP = (EBP);
  /* 10483f1e pop ebp */
  EBP = (pop32());
  /* 10483f1f ret  */
  ESPCHK(0x10483e80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10483f20 (32 bytes, 18 insns) */
void f_10483f20(void) {
  FTRACE(0x10483f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10483f21 mov ebp, esp */
  EBP = (ESP);
  /* 10483f23 push ebx */
  push32((uint32_t)(EBX));
  /* 10483f24 push esi */
  push32((uint32_t)(ESI));
  /* 10483f25 push edi */
  push32((uint32_t)(EDI));
  /* 10483f26 push ebp */
  push32((uint32_t)(EBP));
  /* 10483f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10483f2b push 0x1000bf38 */
  push32((uint32_t)(0x1000bf38u));
  /* 10483f30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10483f33 call 0x1048b66c */
  call_ind(0x1048b66cu, 0x10483f38u);
  /* 10483f38 pop ebp */
  EBP = (pop32());
  /* 10483f39 pop edi */
  EDI = (pop32());
  /* 10483f3a pop esi */
  ESI = (pop32());
  /* 10483f3b pop ebx */
  EBX = (pop32());
  /* 10483f3c mov esp, ebp */
  ESP = (EBP);
  /* 10483f3e pop ebp */
  EBP = (pop32());
  /* 10483f3f ret  */
  ESPCHK(0x10483f20u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10483f62 (104 bytes, 33 insns) */
void f_10483f62(void) {
  FTRACE(0x10483f62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483f62 push ebx */
  push32((uint32_t)(EBX));
  /* 10483f63 push esi */
  push32((uint32_t)(ESI));
  /* 10483f64 push edi */
  push32((uint32_t)(EDI));
  /* 10483f65 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10483f69 push eax */
  push32((uint32_t)(EAX));
  /* 10483f6a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10483f6c push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 10483f71 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10483f78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10483f7f:;
  /* 10483f7f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10483f83 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10483f86 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10483f89 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483f8c je 0x10483fbc */
  if (C.zf) goto L_10483fbc;
  /* 10483f8e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483f92 je 0x10483fbc */
  if (C.zf) goto L_10483fbc;
  /* 10483f94 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10483f97 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10483f9a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10483f9e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10483fa1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10483fa6 jne 0x10483fba */
  if (!C.zf) goto L_10483fba;
  /* 10483fa8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10483fad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10483fb1 call 0x10483ff6 */
  push32(0x10483fb6u); f_10483ff6();
  /* 10483fb6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10483fbau);
L_10483fba:;
  /* 10483fba jmp 0x10483f7f */
  goto L_10483f7f;
L_10483fbc:;
  /* 10483fbc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10483fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10483fc6 pop edi */
  EDI = (pop32());
  /* 10483fc7 pop esi */
  ESI = (pop32());
  /* 10483fc8 pop ebx */
  EBX = (pop32());
  /* 10483fc9 ret  */
  ESPCHK(0x10483f62u, _esp0);
  ESP += 4; return;
}

/* FUN_10023ff6 @ 0x10483ff6 (24 bytes, 10 insns) */
void f_10483ff6(void) {
  FTRACE(0x10483ff6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10483ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 10483ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 10483ff8 mov ebx, 0x1002d3b8 */
  EBX = (0x1002d3b8u);
  /* 10483ffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484000 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10484003 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10484006 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10484009 pop ecx */
  ECX = (pop32());
  /* 1048400a pop ebx */
  EBX = (pop32());
  /* 1048400b ret 4 */
  ESPCHK(0x10483ff6u, _esp0);
  ESP += 8; return;
}

/* FUN_100240f0 @ 0x104840f0 (482 bytes, 138 insns) */
void f_104840f0(void) {
  FTRACE(0x104840f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104840f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104840f1 mov ebp, esp */
  EBP = (ESP);
  /* 104840f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104840f6 push esi */
  push32((uint32_t)(ESI));
  /* 104840f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 104840fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10484100 call 0x1047e910 */
  push32(0x10484105u); f_1047e910();
  /* 10484105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484108 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1048410f jmp 0x1048411a */
  goto L_1048411a;
L_10484111:;
  /* 10484111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484114 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484117 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1048411a:;
  /* 1048411a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048411e jge 0x104842c0 */
  if ((C.sf==C.of)) goto L_104842c0;
  /* 10484124 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484127 cmp dword ptr [ecx*4 + 0x1002fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1002fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048412f je 0x10484226 */
  if (C.zf) goto L_10484226;
  /* 10484135 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484138 mov eax, dword ptr [edx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 1048413f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10484142 jmp 0x1048414d */
  goto L_1048414d;
L_10484144:;
  /* 10484144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484147 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048414a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1048414d:;
  /* 1048414d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484150 mov eax, dword ptr [edx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 10484157 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048415c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048415f jae 0x10484216 */
  if (!C.cf) goto L_10484216;
  /* 10484165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484168 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1048416c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1048416f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10484171 jne 0x10484211 */
  if (!C.zf) goto L_10484211;
  /* 10484177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048417a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048417e jne 0x104841b9 */
  if (!C.zf) goto L_104841b9;
  /* 10484180 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10484182 call 0x1047e910 */
  push32(0x10484187u); f_1047e910();
  /* 10484187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048418a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048418d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484191 jne 0x104841af */
  if (!C.zf) goto L_104841af;
  /* 10484193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484196 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484199 push edx */
  push32((uint32_t)(EDX));
  /* 1048419a call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x104841a0u);
  /* 104841a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104841a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104841a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_104841af:;
  /* 104841af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104841b1 call 0x1047e9b0 */
  push32(0x104841b6u); f_1047e9b0();
  /* 104841b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104841b9:;
  /* 104841b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104841bf push eax */
  push32((uint32_t)(EAX));
  /* 104841c0 call dword ptr [0x10030310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030310))), 0x104841c6u);
  /* 104841c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841c9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104841cd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104841d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104841d2 je 0x104841e6 */
  if (C.zf) goto L_104841e6;
  /* 104841d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104841da push eax */
  push32((uint32_t)(EAX));
  /* 104841db call dword ptr [0x10030314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030314))), 0x104841e1u);
  /* 104841e1 jmp 0x10484144 */
  goto L_10484144;
L_104841e6:;
  /* 104841e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841e9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104841ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104841f2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104841f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104841f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104841fb sub eax, dword ptr [edx*4 + 0x1002fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1002fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484202 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10484203 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10484208 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1048420a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048420c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1048420f jmp 0x10484216 */
  goto L_10484216;
L_10484211:;
  /* 10484211 jmp 0x10484144 */
  goto L_10484144;
L_10484216:;
  /* 10484216 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048421a je 0x10484221 */
  if (C.zf) goto L_10484221;
  /* 1048421c jmp 0x104842c0 */
  goto L_104842c0;
L_10484221:;
  /* 10484221 jmp 0x104842bb */
  goto L_104842bb;
L_10484226:;
  /* 10484226 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10484228 push 0x10029fe4 */
  push32((uint32_t)(0x10029fe4u));
  /* 1048422d push 2 */
  push32((uint32_t)(0x2u));
  /* 1048422f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10484234 call 0x1047af10 */
  push32(0x10484239u); f_1047af10();
  /* 10484239 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048423c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048423f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484243 je 0x104842b9 */
  if (C.zf) goto L_104842b9;
  /* 10484245 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484248 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048424b mov dword ptr [eax*4 + 0x1002fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1002fe60), (ECX));
  /* 10484252 mov edx, dword ptr [0x1002ff9c] */
  EDX = (r32((uint32_t)(0x1002ff9c)));
  /* 10484258 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048425b mov dword ptr [0x1002ff9c], edx */
  w32((uint32_t)(0x1002ff9c), (EDX));
  /* 10484261 jmp 0x1048426c */
  goto L_1048426c;
L_10484263:;
  /* 10484263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484266 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1048426c:;
  /* 1048426c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048426f mov edx, dword ptr [ecx*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10484276 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048427c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048427f jae 0x104842a4 */
  if (!C.cf) goto L_104842a4;
  /* 10484281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484284 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10484288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048428b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10484291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484294 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10484298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048429b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104842a2 jmp 0x10484263 */
  goto L_10484263;
L_104842a4:;
  /* 104842a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104842a7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104842aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104842ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104842b0 push edx */
  push32((uint32_t)(EDX));
  /* 104842b1 call 0x10484600 */
  push32(0x104842b6u); f_10484600();
  /* 104842b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104842b9:;
  /* 104842b9 jmp 0x104842c0 */
  goto L_104842c0;
L_104842bb:;
  /* 104842bb jmp 0x10484111 */
  goto L_10484111;
L_104842c0:;
  /* 104842c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 104842c2 call 0x1047e9b0 */
  push32(0x104842c7u); f_1047e9b0();
  /* 104842c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104842ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104842cd pop esi */
  ESI = (pop32());
  /* 104842ce mov esp, ebp */
  ESP = (EBP);
  /* 104842d0 pop ebp */
  EBP = (pop32());
  /* 104842d1 ret  */
  ESPCHK(0x104840f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x104842e0 (183 bytes, 57 insns) */
void f_104842e0(void) {
  FTRACE(0x104842e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104842e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104842e1 mov ebp, esp */
  EBP = (ESP);
  /* 104842e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104842e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104842e7 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104842ed jae 0x1048437a */
  if (!C.cf) goto L_1048437a;
  /* 104842f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104842f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104842f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104842fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104842ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484302 mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10484309 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048430d jne 0x1048437a */
  if (!C.zf) goto L_1048437a;
  /* 1048430f cmp dword ptr [0x1002e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484316 jne 0x1048435a */
  if (!C.zf) goto L_1048435a;
  /* 10484318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048431b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1048431e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484322 je 0x10484332 */
  if (C.zf) goto L_10484332;
  /* 10484324 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484328 je 0x10484340 */
  if (C.zf) goto L_10484340;
  /* 1048432a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048432e je 0x1048434e */
  if (C.zf) goto L_1048434e;
  /* 10484330 jmp 0x1048435a */
  goto L_1048435a;
L_10484332:;
  /* 10484332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484335 push edx */
  push32((uint32_t)(EDX));
  /* 10484336 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10484338 call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x1048433eu);
  /* 1048433e jmp 0x1048435a */
  goto L_1048435a;
L_10484340:;
  /* 10484340 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484343 push eax */
  push32((uint32_t)(EAX));
  /* 10484344 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10484346 call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x1048434cu);
  /* 1048434c jmp 0x1048435a */
  goto L_1048435a;
L_1048434e:;
  /* 1048434e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484351 push ecx */
  push32((uint32_t)(ECX));
  /* 10484352 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10484354 call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x1048435au);
L_1048435a:;
  /* 1048435a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048435d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10484360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484363 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10484366 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484369 mov ecx, dword ptr [edx*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 10484370 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484373 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10484376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484378 jmp 0x10484393 */
  goto L_10484393;
L_1048437a:;
  /* 1048437a call 0x10482de0 */
  push32(0x1048437fu); f_10482de0();
  /* 1048437f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10484385 call 0x10482df0 */
  push32(0x1048438au); f_10482df0();
  /* 1048438a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10484390 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10484393:;
  /* 10484393 mov esp, ebp */
  ESP = (EBP);
  /* 10484395 pop ebp */
  EBP = (pop32());
  /* 10484396 ret  */
  ESPCHK(0x104842e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100243a0 @ 0x104843a0 (216 bytes, 63 insns) */
void f_104843a0(void) {
  FTRACE(0x104843a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104843a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104843a1 mov ebp, esp */
  EBP = (ESP);
  /* 104843a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104843a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104843a7 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104843ad jae 0x1048445b */
  if (!C.cf) goto L_1048445b;
  /* 104843b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104843b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104843b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104843bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104843bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104843c2 mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 104843c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104843ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104843d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104843d3 je 0x1048445b */
  if (C.zf) goto L_1048445b;
  /* 104843d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104843dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104843df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104843e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104843e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104843e8 mov ecx, dword ptr [edx*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 104843ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104843f3 je 0x1048445b */
  if (C.zf) goto L_1048445b;
  /* 104843f5 cmp dword ptr [0x1002e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104843fc jne 0x1048443a */
  if (!C.zf) goto L_1048443a;
  /* 104843fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484401 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10484404 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484408 je 0x10484418 */
  if (C.zf) goto L_10484418;
  /* 1048440a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048440e je 0x10484424 */
  if (C.zf) goto L_10484424;
  /* 10484410 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484414 je 0x10484430 */
  if (C.zf) goto L_10484430;
  /* 10484416 jmp 0x1048443a */
  goto L_1048443a;
L_10484418:;
  /* 10484418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048441a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1048441c call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x10484422u);
  /* 10484422 jmp 0x1048443a */
  goto L_1048443a;
L_10484424:;
  /* 10484424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10484426 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10484428 call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x1048442eu);
  /* 1048442e jmp 0x1048443a */
  goto L_1048443a;
L_10484430:;
  /* 10484430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10484432 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10484434 call dword ptr [0x10030350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030350))), 0x1048443au);
L_1048443a:;
  /* 1048443a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048443d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10484440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484443 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10484446 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484449 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10484450 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10484457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484459 jmp 0x10484474 */
  goto L_10484474;
L_1048445b:;
  /* 1048445b call 0x10482de0 */
  push32(0x10484460u); f_10482de0();
  /* 10484460 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10484466 call 0x10482df0 */
  push32(0x1048446bu); f_10482df0();
  /* 1048446b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10484471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10484474:;
  /* 10484474 mov esp, ebp */
  ESP = (EBP);
  /* 10484476 pop ebp */
  EBP = (pop32());
  /* 10484477 ret  */
  ESPCHK(0x104843a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10024480 @ 0x10484480 (102 bytes, 30 insns) */
void f_10484480(void) {
  FTRACE(0x10484480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484480 push ebp */
  push32((uint32_t)(EBP));
  /* 10484481 mov ebp, esp */
  EBP = (ESP);
  /* 10484483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484486 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048448c jae 0x104844cb */
  if (!C.cf) goto L_104844cb;
  /* 1048448e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484491 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10484494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484497 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1048449a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048449d mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 104844a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104844a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104844ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104844ae je 0x104844cb */
  if (C.zf) goto L_104844cb;
  /* 104844b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104844b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104844b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104844b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104844bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104844bf mov ecx, dword ptr [edx*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 104844c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 104844c9 jmp 0x104844e4 */
  goto L_104844e4;
L_104844cb:;
  /* 104844cb call 0x10482de0 */
  push32(0x104844d0u); f_10482de0();
  /* 104844d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104844d6 call 0x10482df0 */
  push32(0x104844dbu); f_10482df0();
  /* 104844db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104844e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104844e4:;
  /* 104844e4 pop ebp */
  EBP = (pop32());
  /* 104844e5 ret  */
  ESPCHK(0x10484480u, _esp0);
  ESP += 4; return;
}

/* FUN_100244f0 @ 0x104844f0 (260 bytes, 83 insns) */
void f_104844f0(void) {
  FTRACE(0x104844f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104844f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104844f1 mov ebp, esp */
  EBP = (ESP);
  /* 104844f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104844f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 104844fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104844fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10484500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484502 je 0x1048450d */
  if (C.zf) goto L_1048450d;
  /* 10484504 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10484507 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1048450a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1048450d:;
  /* 1048450d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484510 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10484516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10484518 je 0x10484522 */
  if (C.zf) goto L_10484522;
  /* 1048451a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1048451d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1048451f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10484522:;
  /* 10484522 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484525 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1048452b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048452d je 0x10484538 */
  if (C.zf) goto L_10484538;
  /* 1048452f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10484532 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10484535 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10484538:;
  /* 10484538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048453b push eax */
  push32((uint32_t)(EAX));
  /* 1048453c call dword ptr [0x100302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302cc))), 0x10484542u);
  /* 10484542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10484545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484549 jne 0x10484562 */
  if (!C.zf) goto L_10484562;
  /* 1048454b call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x10484551u);
  /* 10484551 push eax */
  push32((uint32_t)(EAX));
  /* 10484552 call 0x10482d40 */
  push32(0x10484557u); f_10482d40();
  /* 10484557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048455a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048455d jmp 0x104845f0 */
  goto L_104845f0;
L_10484562:;
  /* 10484562 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484566 jne 0x10484573 */
  if (!C.zf) goto L_10484573;
  /* 10484568 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1048456b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1048456e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10484571 jmp 0x10484582 */
  goto L_10484582;
L_10484573:;
  /* 10484573 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484577 jne 0x10484582 */
  if (!C.zf) goto L_10484582;
  /* 10484579 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1048457c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1048457f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10484582:;
  /* 10484582 call 0x104840f0 */
  push32(0x10484587u); f_104840f0();
  /* 10484587 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1048458a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048458e jne 0x104845ab */
  if (!C.zf) goto L_104845ab;
  /* 10484590 call 0x10482de0 */
  push32(0x10484595u); f_10482de0();
  /* 10484595 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1048459b call 0x10482df0 */
  push32(0x104845a0u); f_10482df0();
  /* 104845a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104845a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104845a9 jmp 0x104845f0 */
  goto L_104845f0;
L_104845ab:;
  /* 104845ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104845ae push eax */
  push32((uint32_t)(EAX));
  /* 104845af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104845b2 push ecx */
  push32((uint32_t)(ECX));
  /* 104845b3 call 0x104842e0 */
  push32(0x104845b8u); f_104842e0();
  /* 104845b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104845bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104845be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 104845c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104845c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104845c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104845ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104845cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104845d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104845d3 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 104845da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104845dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 104845e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104845e4 push ecx */
  push32((uint32_t)(ECX));
  /* 104845e5 call 0x10484690 */
  push32(0x104845eau); f_10484690();
  /* 104845ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104845ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104845f0:;
  /* 104845f0 mov esp, ebp */
  ESP = (EBP);
  /* 104845f2 pop ebp */
  EBP = (pop32());
  /* 104845f3 ret  */
  ESPCHK(0x104844f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10024600 @ 0x10484600 (134 bytes, 44 insns) */
void f_10484600(void) {
  FTRACE(0x10484600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484600 push ebp */
  push32((uint32_t)(EBP));
  /* 10484601 mov ebp, esp */
  EBP = (ESP);
  /* 10484603 push ecx */
  push32((uint32_t)(ECX));
  /* 10484604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484607 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1048460a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048460d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10484610 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484613 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 1048461a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048461c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1048461f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484622 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484626 jne 0x10484661 */
  if (!C.zf) goto L_10484661;
  /* 10484628 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1048462a call 0x1047e910 */
  push32(0x1048462fu); f_1047e910();
  /* 1048462f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484635 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484639 jne 0x10484657 */
  if (!C.zf) goto L_10484657;
  /* 1048463b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048463e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484641 push edx */
  push32((uint32_t)(EDX));
  /* 10484642 call dword ptr [0x1003030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003030c))), 0x10484648u);
  /* 10484648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048464b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1048464e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484654 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10484657:;
  /* 10484657 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10484659 call 0x1047e9b0 */
  push32(0x1048465eu); f_1047e9b0();
  /* 1048465e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10484661:;
  /* 10484661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484664 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10484667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048466a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1048466d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484670 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10484677 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1048467b push eax */
  push32((uint32_t)(EAX));
  /* 1048467c call dword ptr [0x10030310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030310))), 0x10484682u);
  /* 10484682 mov esp, ebp */
  ESP = (EBP);
  /* 10484684 pop ebp */
  EBP = (pop32());
  /* 10484685 ret  */
  ESPCHK(0x10484600u, _esp0);
  ESP += 4; return;
}

/* FUN_10024690 @ 0x10484690 (38 bytes, 13 insns) */
void f_10484690(void) {
  FTRACE(0x10484690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484690 push ebp */
  push32((uint32_t)(EBP));
  /* 10484691 mov ebp, esp */
  EBP = (ESP);
  /* 10484693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484696 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10484699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048469c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1048469f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104846a2 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 104846a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 104846ad push eax */
  push32((uint32_t)(EAX));
  /* 104846ae call dword ptr [0x10030314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030314))), 0x104846b4u);
  /* 104846b4 pop ebp */
  EBP = (pop32());
  /* 104846b5 ret  */
  ESPCHK(0x10484690u, _esp0);
  ESP += 4; return;
}

/* FUN_100246c0 @ 0x104846c0 (218 bytes, 63 insns) */
void f_104846c0(void) {
  FTRACE(0x104846c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104846c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104846c1 mov ebp, esp */
  EBP = (ESP);
  /* 104846c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104846c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104846cd push 2 */
  push32((uint32_t)(0x2u));
  /* 104846cf call 0x1047e910 */
  push32(0x104846d4u); f_1047e910();
  /* 104846d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104846d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 104846de jmp 0x104846e9 */
  goto L_104846e9;
L_104846e0:;
  /* 104846e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104846e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104846e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104846e9:;
  /* 104846e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104846ec cmp ecx, dword ptr [0x1002fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104846f2 jge 0x10484789 */
  if ((C.sf==C.of)) goto L_10484789;
  /* 104846f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104846fb mov eax, dword ptr [0x1002e810] */
  EAX = (r32((uint32_t)(0x1002e810)));
  /* 10484700 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484704 je 0x10484784 */
  if (C.zf) goto L_10484784;
  /* 10484706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484709 mov edx, dword ptr [0x1002e810] */
  EDX = (r32((uint32_t)(0x1002e810)));
  /* 1048470f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10484712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10484715 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1048471b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048471d je 0x10484741 */
  if (C.zf) goto L_10484741;
  /* 1048471f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484722 mov eax, dword ptr [0x1002e810] */
  EAX = (r32((uint32_t)(0x1002e810)));
  /* 10484727 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1048472a push ecx */
  push32((uint32_t)(ECX));
  /* 1048472b call 0x104854b0 */
  push32(0x10484730u); f_104854b0();
  /* 10484730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484733 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484736 je 0x10484741 */
  if (C.zf) goto L_10484741;
  /* 10484738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048473b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048473e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10484741:;
  /* 10484741 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484745 jl 0x10484784 */
  if ((C.sf!=C.of)) goto L_10484784;
  /* 10484747 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048474a mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 10484750 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10484753 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484756 push edx */
  push32((uint32_t)(EDX));
  /* 10484757 call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1048475du);
  /* 1048475d push 2 */
  push32((uint32_t)(0x2u));
  /* 1048475f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484762 mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 10484768 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1048476b push edx */
  push32((uint32_t)(EDX));
  /* 1048476c call 0x1047b9a0 */
  push32(0x10484771u); f_1047b9a0();
  /* 10484771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484777 mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 1048477d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10484784:;
  /* 10484784 jmp 0x104846e0 */
  goto L_104846e0;
L_10484789:;
  /* 10484789 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048478b call 0x1047e9b0 */
  push32(0x10484790u); f_1047e9b0();
  /* 10484790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484796 mov esp, ebp */
  ESP = (EBP);
  /* 10484798 pop ebp */
  EBP = (pop32());
  /* 10484799 ret  */
  ESPCHK(0x104846c0u, _esp0);
  ESP += 4; return;
}

