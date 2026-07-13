#include "recomp.h"

/* FUN_1000c620 @ 0x1252c620 (490 bytes, 165 insns) */
void f_1252c620(void) {
  FTRACE(0x1252c620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c620 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c621 mov ebp, esp */
  EBP = (ESP);
  /* 1252c623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c626 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c62a jne 0x1252c63d */
  if (!C.zf) goto L_1252c63d;
  /* 1252c62c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c62f push eax */
  push32((uint32_t)(EAX));
  /* 1252c630 call 0x1252c470 */
  push32(0x1252c635u); f_1252c470();
  /* 1252c635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c638 jmp 0x1252c806 */
  goto L_1252c806;
L_1252c63d:;
  /* 1252c63d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c641 jne 0x1252c656 */
  if (!C.zf) goto L_1252c656;
  /* 1252c643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c646 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c647 call 0x1252c810 */
  push32(0x1252c64cu); f_1252c810();
  /* 1252c64c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c64f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c651 jmp 0x1252c806 */
  goto L_1252c806;
L_1252c656:;
  /* 1252c656 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1252c65d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c661 ja 0x1252c7d9 */
  if ((!C.cf&&!C.zf)) goto L_1252c7d9;
  /* 1252c667 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c669 call 0x1252c0a0 */
  push32(0x1252c66eu); f_1252c0a0();
  /* 1252c66e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c674 push edx */
  push32((uint32_t)(EDX));
  /* 1252c675 call 0x1252c9a0 */
  push32(0x1252c67au); f_1252c9a0();
  /* 1252c67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c67d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252c680 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c684 je 0x1252c79c */
  if (C.zf) goto L_1252c79c;
  /* 1252c68a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c68d cmp eax, dword ptr [0x12552c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12552c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c693 ja 0x1252c710 */
  if ((!C.cf&&!C.zf)) goto L_1252c710;
  /* 1252c695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c698 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c69c push edx */
  push32((uint32_t)(EDX));
  /* 1252c69d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252c6a0 push eax */
  push32((uint32_t)(EAX));
  /* 1252c6a1 call 0x1252d870 */
  push32(0x1252c6a6u); f_1252d870();
  /* 1252c6a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c6ab je 0x1252c6b5 */
  if (C.zf) goto L_1252c6b5;
  /* 1252c6ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c6b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252c6b3 jmp 0x1252c710 */
  goto L_1252c710;
L_1252c6b5:;
  /* 1252c6b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c6b8 push edx */
  push32((uint32_t)(EDX));
  /* 1252c6b9 call 0x1252d030 */
  push32(0x1252c6beu); f_1252d030();
  /* 1252c6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c6c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252c6c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c6c8 je 0x1252c710 */
  if (C.zf) goto L_1252c710;
  /* 1252c6ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c6cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1252c6d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c6d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252c6d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c6d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c6dc jae 0x1252c6e6 */
  if (!C.cf) goto L_1252c6e6;
  /* 1252c6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c6e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252c6e4 jmp 0x1252c6ec */
  goto L_1252c6ec;
L_1252c6e6:;
  /* 1252c6e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c6e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1252c6ec:;
  /* 1252c6ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c6ef push edx */
  push32((uint32_t)(EDX));
  /* 1252c6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c6f3 push eax */
  push32((uint32_t)(EAX));
  /* 1252c6f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c6f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c6f8 call 0x1252ef80 */
  push32(0x1252c6fdu); f_1252ef80();
  /* 1252c6fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c703 push edx */
  push32((uint32_t)(EDX));
  /* 1252c704 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252c707 push eax */
  push32((uint32_t)(EAX));
  /* 1252c708 call 0x1252ca60 */
  push32(0x1252c70du); f_1252ca60();
  /* 1252c70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c710:;
  /* 1252c710 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c714 jne 0x1252c790 */
  if (!C.zf) goto L_1252c790;
  /* 1252c716 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c71a jne 0x1252c723 */
  if (!C.zf) goto L_1252c723;
  /* 1252c71c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1252c723:;
  /* 1252c723 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c726 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c729 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1252c72c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1252c72f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c732 push edx */
  push32((uint32_t)(EDX));
  /* 1252c733 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c735 mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252c73a push eax */
  push32((uint32_t)(EAX));
  /* 1252c73b call dword ptr [0x1255733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255733c))), 0x1252c741u);
  /* 1252c741 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252c744 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c748 je 0x1252c790 */
  if (C.zf) goto L_1252c790;
  /* 1252c74a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c74d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1252c750 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c753 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252c756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c759 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c75c jae 0x1252c766 */
  if (!C.cf) goto L_1252c766;
  /* 1252c75e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c761 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1252c764 jmp 0x1252c76c */
  goto L_1252c76c;
L_1252c766:;
  /* 1252c766 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c769 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1252c76c:;
  /* 1252c76c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252c76f push eax */
  push32((uint32_t)(EAX));
  /* 1252c770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c773 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c774 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c777 push edx */
  push32((uint32_t)(EDX));
  /* 1252c778 call 0x1252ef80 */
  push32(0x1252c77du); f_1252ef80();
  /* 1252c77d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c783 push eax */
  push32((uint32_t)(EAX));
  /* 1252c784 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252c787 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c788 call 0x1252ca60 */
  push32(0x1252c78du); f_1252ca60();
  /* 1252c78d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c790:;
  /* 1252c790 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c792 call 0x1252c140 */
  push32(0x1252c797u); f_1252c140();
  /* 1252c797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c79a jmp 0x1252c7d9 */
  goto L_1252c7d9;
L_1252c79c:;
  /* 1252c79c push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c79e call 0x1252c140 */
  push32(0x1252c7a3u); f_1252c140();
  /* 1252c7a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c7a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c7aa jne 0x1252c7b3 */
  if (!C.zf) goto L_1252c7b3;
  /* 1252c7ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1252c7b3:;
  /* 1252c7b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c7b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c7b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1252c7bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1252c7bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c7c2 push eax */
  push32((uint32_t)(EAX));
  /* 1252c7c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c7c9 mov edx, dword ptr [0x125562ec] */
  EDX = (r32((uint32_t)(0x125562ec)));
  /* 1252c7cf push edx */
  push32((uint32_t)(EDX));
  /* 1252c7d0 call dword ptr [0x12557344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557344))), 0x1252c7d6u);
  /* 1252c7d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1252c7d9:;
  /* 1252c7d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c7dd jne 0x1252c7e8 */
  if (!C.zf) goto L_1252c7e8;
  /* 1252c7df cmp dword ptr [0x12554b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c7e6 jne 0x1252c7ed */
  if (!C.zf) goto L_1252c7ed;
L_1252c7e8:;
  /* 1252c7e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c7eb jmp 0x1252c806 */
  goto L_1252c806;
L_1252c7ed:;
  /* 1252c7ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c7f0 push eax */
  push32((uint32_t)(EAX));
  /* 1252c7f1 call 0x1252c3e0 */
  push32(0x1252c7f6u); f_1252c3e0();
  /* 1252c7f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c7f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c7fb jne 0x1252c801 */
  if (!C.zf) goto L_1252c801;
  /* 1252c7fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c7ff jmp 0x1252c806 */
  goto L_1252c806;
L_1252c801:;
  /* 1252c801 jmp 0x1252c656 */
  goto L_1252c656;
L_1252c806:;
  /* 1252c806 mov esp, ebp */
  ESP = (EBP);
  /* 1252c808 pop ebp */
  EBP = (pop32());
  /* 1252c809 ret  */
  ESPCHK(0x1252c620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x1252c810 (104 bytes, 38 insns) */
void f_1252c810(void) {
  FTRACE(0x1252c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c810 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c811 mov ebp, esp */
  EBP = (ESP);
  /* 1252c813 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c814 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c818 jne 0x1252c81c */
  if (!C.zf) goto L_1252c81c;
  /* 1252c81a jmp 0x1252c874 */
  goto L_1252c874;
L_1252c81c:;
  /* 1252c81c push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c81e call 0x1252c0a0 */
  push32(0x1252c823u); f_1252c0a0();
  /* 1252c823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c829 push eax */
  push32((uint32_t)(EAX));
  /* 1252c82a call 0x1252c9a0 */
  push32(0x1252c82fu); f_1252c9a0();
  /* 1252c82f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c832 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c835 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c839 je 0x1252c857 */
  if (C.zf) goto L_1252c857;
  /* 1252c83b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c83e push ecx */
  push32((uint32_t)(ECX));
  /* 1252c83f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c842 push edx */
  push32((uint32_t)(EDX));
  /* 1252c843 call 0x1252ca60 */
  push32(0x1252c848u); f_1252ca60();
  /* 1252c848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c84b push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c84d call 0x1252c140 */
  push32(0x1252c852u); f_1252c140();
  /* 1252c852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c855 jmp 0x1252c874 */
  goto L_1252c874;
L_1252c857:;
  /* 1252c857 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c859 call 0x1252c140 */
  push32(0x1252c85eu); f_1252c140();
  /* 1252c85e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c864 push eax */
  push32((uint32_t)(EAX));
  /* 1252c865 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c867 mov ecx, dword ptr [0x125562ec] */
  ECX = (r32((uint32_t)(0x125562ec)));
  /* 1252c86d push ecx */
  push32((uint32_t)(ECX));
  /* 1252c86e call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252c874u);
L_1252c874:;
  /* 1252c874 mov esp, ebp */
  ESP = (EBP);
  /* 1252c876 pop ebp */
  EBP = (pop32());
  /* 1252c877 ret  */
  ESPCHK(0x1252c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x1252c880 (116 bytes, 34 insns) */
void f_1252c880(void) {
  FTRACE(0x1252c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c880 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c881 mov ebp, esp */
  EBP = (ESP);
  /* 1252c883 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c884 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1252c88b push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c88d call 0x1252c0a0 */
  push32(0x1252c892u); f_1252c0a0();
  /* 1252c892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c895 call 0x1252df90 */
  push32(0x1252c89au); f_1252df90();
  /* 1252c89a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c89c jge 0x1252c8a5 */
  if ((C.sf==C.of)) goto L_1252c8a5;
  /* 1252c89e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1252c8a5:;
  /* 1252c8a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c8a7 call 0x1252c140 */
  push32(0x1252c8acu); f_1252c140();
  /* 1252c8ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c8af push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c8b3 mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252c8b8 push eax */
  push32((uint32_t)(EAX));
  /* 1252c8b9 call dword ptr [0x1255737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255737c))), 0x1252c8bfu);
  /* 1252c8bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c8c1 jne 0x1252c8ed */
  if (!C.zf) goto L_1252c8ed;
  /* 1252c8c3 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x1252c8c9u);
  /* 1252c8c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c8cc jne 0x1252c8e6 */
  if (!C.zf) goto L_1252c8e6;
  /* 1252c8ce call 0x12530580 */
  push32(0x1252c8d3u); f_12530580();
  /* 1252c8d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1252c8d9 call 0x12530570 */
  push32(0x1252c8deu); f_12530570();
  /* 1252c8de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1252c8e4 jmp 0x1252c8ed */
  goto L_1252c8ed;
L_1252c8e6:;
  /* 1252c8e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1252c8ed:;
  /* 1252c8ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c8f0 mov esp, ebp */
  ESP = (EBP);
  /* 1252c8f2 pop ebp */
  EBP = (pop32());
  /* 1252c8f3 ret  */
  ESPCHK(0x1252c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x1252c900 (10 bytes, 5 insns) */
void f_1252c900(void) {
  FTRACE(0x1252c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c900 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c901 mov ebp, esp */
  EBP = (ESP);
  /* 1252c903 call 0x1252c880 */
  push32(0x1252c908u); f_1252c880();
  /* 1252c908 pop ebp */
  EBP = (pop32());
  /* 1252c909 ret  */
  ESPCHK(0x1252c900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x1252c910 (10 bytes, 5 insns) */
void f_1252c910(void) {
  FTRACE(0x1252c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c910 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c911 mov ebp, esp */
  EBP = (ESP);
  /* 1252c913 mov eax, dword ptr [0x12552c94] */
  EAX = (r32((uint32_t)(0x12552c94)));
  /* 1252c918 pop ebp */
  EBP = (pop32());
  /* 1252c919 ret  */
  ESPCHK(0x1252c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c920 @ 0x1252c920 (31 bytes, 11 insns) */
void f_1252c920(void) {
  FTRACE(0x1252c920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c920 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c921 mov ebp, esp */
  EBP = (ESP);
  /* 1252c923 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c92a jbe 0x1252c930 */
  if ((C.cf||C.zf)) goto L_1252c930;
  /* 1252c92c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c92e jmp 0x1252c93d */
  goto L_1252c93d;
L_1252c930:;
  /* 1252c930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c933 mov dword ptr [0x12552c94], eax */
  w32((uint32_t)(0x12552c94), (EAX));
  /* 1252c938 mov eax, 1 */
  EAX = (0x1u);
L_1252c93d:;
  /* 1252c93d pop ebp */
  EBP = (pop32());
  /* 1252c93e ret  */
  ESPCHK(0x1252c920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x1252c940 (89 bytes, 20 insns) */
void f_1252c940(void) {
  FTRACE(0x1252c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c940 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c941 mov ebp, esp */
  EBP = (ESP);
  /* 1252c943 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1252c948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c94a mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252c94f push eax */
  push32((uint32_t)(EAX));
  /* 1252c950 call dword ptr [0x1255733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255733c))), 0x1252c956u);
  /* 1252c956 mov dword ptr [0x125562e8], eax */
  w32((uint32_t)(0x125562e8), (EAX));
  /* 1252c95b cmp dword ptr [0x125562e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125562e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c962 jne 0x1252c968 */
  if (!C.zf) goto L_1252c968;
  /* 1252c964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c966 jmp 0x1252c997 */
  goto L_1252c997;
L_1252c968:;
  /* 1252c968 mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252c96e mov dword ptr [0x125562dc], ecx */
  w32((uint32_t)(0x125562dc), (ECX));
  /* 1252c974 mov dword ptr [0x125562e0], 0 */
  w32((uint32_t)(0x125562e0), (0x0u));
  /* 1252c97e mov dword ptr [0x125562e4], 0 */
  w32((uint32_t)(0x125562e4), (0x0u));
  /* 1252c988 mov dword ptr [0x125562c8], 0x10 */
  w32((uint32_t)(0x125562c8), (0x10u));
  /* 1252c992 mov eax, 1 */
  EAX = (0x1u);
L_1252c997:;
  /* 1252c997 pop ebp */
  EBP = (pop32());
  /* 1252c998 ret  */
  ESPCHK(0x1252c940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9a0 @ 0x1252c9a0 (85 bytes, 29 insns) */
void f_1252c9a0(void) {
  FTRACE(0x1252c9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c9a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c9a6 mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252c9ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252c9ae mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252c9b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c9b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252c9b9 mov edx, dword ptr [0x125562e8] */
  EDX = (r32((uint32_t)(0x125562e8)));
  /* 1252c9bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252c9c2:;
  /* 1252c9c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c9c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c9c8 jae 0x1252c9ef */
  if (!C.cf) goto L_1252c9ef;
  /* 1252c9ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c9d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c9d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252c9d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c9dd jae 0x1252c9e4 */
  if (!C.cf) goto L_1252c9e4;
  /* 1252c9df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c9e2 jmp 0x1252c9f1 */
  goto L_1252c9f1;
L_1252c9e4:;
  /* 1252c9e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c9e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c9ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252c9ed jmp 0x1252c9c2 */
  goto L_1252c9c2;
L_1252c9ef:;
  /* 1252c9ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252c9f1:;
  /* 1252c9f1 mov esp, ebp */
  ESP = (EBP);
  /* 1252c9f3 pop ebp */
  EBP = (pop32());
  /* 1252c9f4 ret  */
  ESPCHK(0x1252c9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x1252ca00 (95 bytes, 33 insns) */
void f_1252ca00(void) {
  FTRACE(0x1252ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ca00 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ca01 mov ebp, esp */
  EBP = (ESP);
  /* 1252ca03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ca06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ca09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ca0c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ca0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252ca12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ca15 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1252ca18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252ca1b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252ca20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ca23 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252ca25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ca28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252ca2b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252ca2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ca2f jne 0x1252ca51 */
  if (!C.zf) goto L_1252ca51;
  /* 1252ca31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ca34 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1252ca37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252ca39 jne 0x1252ca51 */
  if (!C.zf) goto L_1252ca51;
  /* 1252ca3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ca3e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252ca44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ca46 je 0x1252ca51 */
  if (C.zf) goto L_1252ca51;
  /* 1252ca48 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1252ca4f jmp 0x1252ca58 */
  goto L_1252ca58;
L_1252ca51:;
  /* 1252ca51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1252ca58:;
  /* 1252ca58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ca5b mov esp, ebp */
  ESP = (EBP);
  /* 1252ca5d pop ebp */
  EBP = (pop32());
  /* 1252ca5e ret  */
  ESPCHK(0x1252ca00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x1252ca60 (1485 bytes, 453 insns) */
void f_1252ca60(void) {
  FTRACE(0x1252ca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ca60 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ca61 mov ebp, esp */
  EBP = (ESP);
  /* 1252ca63 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ca66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ca69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252ca6c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1252ca6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ca72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ca75 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ca78 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252ca7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ca7e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1252ca81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252ca84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ca87 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252ca8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ca90 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1252ca97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252ca9a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ca9d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252caa0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252caa3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252caa6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252caa8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252caab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1252caae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cab1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cab4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1252cab7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252caba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252cabc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1252cabf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cac2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1252cac5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252cac8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252cacb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1252cace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252cad0 jne 0x1252cbf8 */
  if (!C.zf) goto L_1252cbf8;
  /* 1252cad6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252cad9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252cadc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cadf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252cae2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cae6 jbe 0x1252caef */
  if ((C.cf||C.zf)) goto L_1252caef;
  /* 1252cae8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1252caef:;
  /* 1252caef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252caf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252caf5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252caf8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cafb jne 0x1252cbd1 */
  if (!C.zf) goto L_1252cbd1;
  /* 1252cb01 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cb05 jae 0x1252cb66 */
  if (!C.cf) goto L_1252cb66;
  /* 1252cb07 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252cb0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252cb0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252cb11 not eax */
  EAX = (~(EAX));
  /* 1252cb13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cb16 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb19 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1252cb1d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252cb1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cb22 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb25 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1252cb29 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb2c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cb2f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1252cb32 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252cb35 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb38 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cb3b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1252cb3e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb41 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cb44 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252cb48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252cb4a jne 0x1252cb64 */
  if (!C.zf) goto L_1252cb64;
  /* 1252cb4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252cb51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252cb54 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252cb56 not eax */
  EAX = (~(EAX));
  /* 1252cb58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cb5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252cb5d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252cb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cb62 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1252cb64:;
  /* 1252cb64 jmp 0x1252cbd1 */
  goto L_1252cbd1;
L_1252cb66:;
  /* 1252cb66 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252cb69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cb6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252cb71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252cb73 not edx */
  EDX = (~(EDX));
  /* 1252cb75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cb78 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb7b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1252cb82 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252cb84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cb87 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb8a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1252cb91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cb94 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cb97 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252cb9a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252cb9d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cba0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cba3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1252cba6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cba9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cbac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252cbb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252cbb2 jne 0x1252cbd1 */
  if (!C.zf) goto L_1252cbd1;
  /* 1252cbb4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252cbb7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cbba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252cbbf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252cbc1 not edx */
  EDX = (~(EDX));
  /* 1252cbc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cbc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252cbc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252cbcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cbce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1252cbd1:;
  /* 1252cbd1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252cbd4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252cbd7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252cbda mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252cbdd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1252cbe0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252cbe3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cbe6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252cbe9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252cbec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252cbef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252cbf2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cbf5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1252cbf8:;
  /* 1252cbf8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252cbfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1252cbfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cc01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252cc04 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc08 jbe 0x1252cc11 */
  if ((C.cf||C.zf)) goto L_1252cc11;
  /* 1252cc0a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1252cc11:;
  /* 1252cc11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252cc14 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1252cc17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252cc19 jne 0x1252cd75 */
  if (!C.zf) goto L_1252cd75;
  /* 1252cc1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cc22 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cc25 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1252cc28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252cc2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1252cc2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cc31 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1252cc34 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc38 jbe 0x1252cc41 */
  if ((C.cf||C.zf)) goto L_1252cc41;
  /* 1252cc3a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1252cc41:;
  /* 1252cc41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252cc44 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cc47 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1252cc4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252cc4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252cc50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cc53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1252cc56 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc5a jbe 0x1252cc63 */
  if ((C.cf||C.zf)) goto L_1252cc63;
  /* 1252cc5c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1252cc63:;
  /* 1252cc63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252cc66 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc69 je 0x1252cd6f */
  if (C.zf) goto L_1252cd6f;
  /* 1252cc6f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cc72 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cc75 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cc78 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc7b jne 0x1252cd51 */
  if (!C.zf) goto L_1252cd51;
  /* 1252cc81 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cc85 jae 0x1252cce6 */
  if (!C.cf) goto L_1252cce6;
  /* 1252cc87 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252cc8c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252cc8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252cc91 not edx */
  EDX = (~(EDX));
  /* 1252cc93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cc96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cc99 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1252cc9d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252cc9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cca2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cca5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1252cca9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ccac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ccaf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252ccb2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252ccb5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ccb8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ccbb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1252ccbe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ccc1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ccc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252ccc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ccca jne 0x1252cce4 */
  if (!C.zf) goto L_1252cce4;
  /* 1252cccc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252ccd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252ccd4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252ccd6 not edx */
  EDX = (~(EDX));
  /* 1252ccd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ccdb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252ccdd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ccdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cce2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252cce4:;
  /* 1252cce4 jmp 0x1252cd51 */
  goto L_1252cd51;
L_1252cce6:;
  /* 1252cce6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252cce9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ccec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252ccf1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252ccf3 not eax */
  EAX = (~(EAX));
  /* 1252ccf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ccf8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ccfb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1252cd02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252cd04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252cd07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cd0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1252cd11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cd14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cd17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1252cd1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252cd1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cd20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cd23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1252cd26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cd29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cd2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252cd30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252cd32 jne 0x1252cd51 */
  if (!C.zf) goto L_1252cd51;
  /* 1252cd34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252cd37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cd3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252cd3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252cd41 not eax */
  EAX = (~(EAX));
  /* 1252cd43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cd46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cd49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252cd4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cd4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252cd51:;
  /* 1252cd51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cd54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252cd57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cd5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252cd5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1252cd60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cd63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252cd66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cd69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252cd6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1252cd6f:;
  /* 1252cd6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252cd72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1252cd75:;
  /* 1252cd75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252cd78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1252cd7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252cd7d jne 0x1252cd8b */
  if (!C.zf) goto L_1252cd8b;
  /* 1252cd7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252cd82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cd85 je 0x1252ce9b */
  if (C.zf) goto L_1252ce9b;
L_1252cd8b:;
  /* 1252cd8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252cd8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252cd91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1252cd94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1252cd97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cd9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252cd9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cda0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252cda3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cda6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252cda9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1252cdac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252cdaf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cdb2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1252cdb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cdb8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cdbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cdbe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252cdc1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cdc4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cdc7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252cdca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cdcd jne 0x1252ce9b */
  if (!C.zf) goto L_1252ce9b;
  /* 1252cdd3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cdd7 jae 0x1252ce34 */
  if (!C.cf) goto L_1252ce34;
  /* 1252cdd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cddc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cddf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252cde3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cde6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cde9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252cdec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252cdef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252cdf2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cdf5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1252cdf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252cdfa jne 0x1252ce12 */
  if (!C.zf) goto L_1252ce12;
  /* 1252cdfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252ce01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252ce04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252ce06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ce09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252ce0b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ce0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ce10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252ce12:;
  /* 1252ce12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252ce17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252ce1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252ce1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ce1f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1252ce26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ce28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ce2b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1252ce32 jmp 0x1252ce9b */
  goto L_1252ce9b;
L_1252ce34:;
  /* 1252ce34 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce37 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ce3a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252ce3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce41 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ce44 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252ce47 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252ce4a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce4d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ce50 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1252ce53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ce55 jne 0x1252ce72 */
  if (!C.zf) goto L_1252ce72;
  /* 1252ce57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252ce5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ce5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252ce62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252ce64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ce67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252ce6a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ce6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ce6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1252ce72:;
  /* 1252ce72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252ce75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ce78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252ce7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252ce7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ce82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce85 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1252ce8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ce8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ce91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1252ce94 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1252ce9b:;
  /* 1252ce9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252ce9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252cea1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1252cea3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252cea6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cea9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252ceac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1252ceaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ceb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252ceb4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ceb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ceba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252cebc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252cebf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cec2 jne 0x1252d029 */
  if (!C.zf) goto L_1252d029;
  /* 1252cec8 cmp dword ptr [0x125562e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125562e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cecf je 0x1252d018 */
  if (C.zf) goto L_1252d018;
  /* 1252ced5 mov eax, dword ptr [0x125562d8] */
  EAX = (r32((uint32_t)(0x125562d8)));
  /* 1252ceda shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1252cedd mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252cee3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252cee6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cee8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1252ceeb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1252cef0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252cef5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252cef8 push eax */
  push32((uint32_t)(EAX));
  /* 1252cef9 call dword ptr [0x12557358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557358))), 0x1252ceffu);
  /* 1252ceff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252cf04 mov ecx, dword ptr [0x125562d8] */
  ECX = (r32((uint32_t)(0x125562d8)));
  /* 1252cf0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252cf0c mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf11 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252cf14 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252cf16 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252cf1f mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf24 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252cf27 mov edx, dword ptr [0x125562d8] */
  EDX = (r32((uint32_t)(0x125562d8)));
  /* 1252cf2d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1252cf38 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252cf40 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1252cf43 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252cf46 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252cf4e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1252cf51 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252cf5a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1252cf5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252cf60 jne 0x1252cf76 */
  if (!C.zf) goto L_1252cf76;
  /* 1252cf62 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252cf6b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1252cf6d mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf73 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1252cf76:;
  /* 1252cf76 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf7c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252cf80 jne 0x1252d018 */
  if (!C.zf) goto L_1252d018;
  /* 1252cf86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252cf8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252cf8d mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cf92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252cf95 push ecx */
  push32((uint32_t)(ECX));
  /* 1252cf96 call dword ptr [0x12557358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557358))), 0x1252cf9cu);
  /* 1252cf9c mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cfa2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252cfa5 push eax */
  push32((uint32_t)(EAX));
  /* 1252cfa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252cfa8 mov ecx, dword ptr [0x125562ec] */
  ECX = (r32((uint32_t)(0x125562ec)));
  /* 1252cfae push ecx */
  push32((uint32_t)(ECX));
  /* 1252cfaf call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252cfb5u);
  /* 1252cfb5 mov edx, dword ptr [0x125562e4] */
  EDX = (r32((uint32_t)(0x125562e4)));
  /* 1252cfbb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252cfbe mov eax, dword ptr [0x125562e8] */
  EAX = (r32((uint32_t)(0x125562e8)));
  /* 1252cfc3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cfc5 mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252cfcb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cfce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cfd0 push eax */
  push32((uint32_t)(EAX));
  /* 1252cfd1 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252cfd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cfda push edx */
  push32((uint32_t)(EDX));
  /* 1252cfdb mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252cfe0 push eax */
  push32((uint32_t)(EAX));
  /* 1252cfe1 call 0x12530590 */
  push32(0x1252cfe6u); f_12530590();
  /* 1252cfe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252cfe9 mov ecx, dword ptr [0x125562e4] */
  ECX = (r32((uint32_t)(0x125562e4)));
  /* 1252cfef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252cff2 mov dword ptr [0x125562e4], ecx */
  w32((uint32_t)(0x125562e4), (ECX));
  /* 1252cff8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252cffb cmp edx, dword ptr [0x125562e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125562e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d001 jbe 0x1252d00c */
  if ((C.cf||C.zf)) goto L_1252d00c;
  /* 1252d003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d006 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d009 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1252d00c:;
  /* 1252d00c mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252d012 mov dword ptr [0x125562dc], ecx */
  w32((uint32_t)(0x125562dc), (ECX));
L_1252d018:;
  /* 1252d018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d01b mov dword ptr [0x125562e0], edx */
  w32((uint32_t)(0x125562e0), (EDX));
  /* 1252d021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d024 mov dword ptr [0x125562d8], eax */
  w32((uint32_t)(0x125562d8), (EAX));
L_1252d029:;
  /* 1252d029 mov esp, ebp */
  ESP = (EBP);
  /* 1252d02b pop ebp */
  EBP = (pop32());
  /* 1252d02c ret  */
  ESPCHK(0x1252ca60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x1252d030 (1334 bytes, 427 insns) */
void f_1252d030(void) {
  FTRACE(0x1252d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252d030 push ebp */
  push32((uint32_t)(EBP));
  /* 1252d031 mov ebp, esp */
  EBP = (ESP);
  /* 1252d033 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d036 push esi */
  push32((uint32_t)(ESI));
  /* 1252d037 mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252d03c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d03f mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252d045 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d047 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1252d04a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d04d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d050 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1252d053 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1252d056 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d059 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1252d05c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d05f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252d062 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d066 jge 0x1252d07c */
  if ((C.sf==C.of)) goto L_1252d07c;
  /* 1252d068 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252d06b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d06e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d070 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252d073 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1252d07a jmp 0x1252d091 */
  goto L_1252d091;
L_1252d07c:;
  /* 1252d07c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1252d083 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d086 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d089 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252d08c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d08e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1252d091:;
  /* 1252d091 mov ecx, dword ptr [0x125562dc] */
  ECX = (r32((uint32_t)(0x125562dc)));
  /* 1252d097 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1252d09a:;
  /* 1252d09a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d09d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d0a0 jae 0x1252d0c6 */
  if (!C.cf) goto L_1252d0c6;
  /* 1252d0a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d0a8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1252d0aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0ad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252d0b0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1252d0b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d0b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d0b7 je 0x1252d0bb */
  if (C.zf) goto L_1252d0bb;
  /* 1252d0b9 jmp 0x1252d0c6 */
  goto L_1252d0c6;
L_1252d0bb:;
  /* 1252d0bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d0c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1252d0c4 jmp 0x1252d09a */
  goto L_1252d09a;
L_1252d0c6:;
  /* 1252d0c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d0cc jne 0x1252d1ad */
  if (!C.zf) goto L_1252d1ad;
  /* 1252d0d2 mov eax, dword ptr [0x125562e8] */
  EAX = (r32((uint32_t)(0x125562e8)));
  /* 1252d0d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1252d0da:;
  /* 1252d0da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0dd cmp ecx, dword ptr [0x125562dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d0e3 jae 0x1252d109 */
  if (!C.cf) goto L_1252d109;
  /* 1252d0e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d0eb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1252d0ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d0f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252d0f3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1252d0f6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d0f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252d0fa je 0x1252d0fe */
  if (C.zf) goto L_1252d0fe;
  /* 1252d0fc jmp 0x1252d109 */
  goto L_1252d109;
L_1252d0fe:;
  /* 1252d0fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d101 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d104 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d107 jmp 0x1252d0da */
  goto L_1252d0da;
L_1252d109:;
  /* 1252d109 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d10c cmp ecx, dword ptr [0x125562dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d112 jne 0x1252d1ad */
  if (!C.zf) goto L_1252d1ad;
L_1252d118:;
  /* 1252d118 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d11b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d11e jae 0x1252d136 */
  if (!C.cf) goto L_1252d136;
  /* 1252d120 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d123 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d127 je 0x1252d12b */
  if (C.zf) goto L_1252d12b;
  /* 1252d129 jmp 0x1252d136 */
  goto L_1252d136;
L_1252d12b:;
  /* 1252d12b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d12e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d131 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1252d134 jmp 0x1252d118 */
  goto L_1252d118;
L_1252d136:;
  /* 1252d136 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d139 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d13c jne 0x1252d187 */
  if (!C.zf) goto L_1252d187;
  /* 1252d13e mov eax, dword ptr [0x125562e8] */
  EAX = (r32((uint32_t)(0x125562e8)));
  /* 1252d143 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1252d146:;
  /* 1252d146 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d149 cmp ecx, dword ptr [0x125562dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d14f jae 0x1252d167 */
  if (!C.cf) goto L_1252d167;
  /* 1252d151 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d154 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d158 je 0x1252d15c */
  if (C.zf) goto L_1252d15c;
  /* 1252d15a jmp 0x1252d167 */
  goto L_1252d167;
L_1252d15c:;
  /* 1252d15c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d15f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d162 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d165 jmp 0x1252d146 */
  goto L_1252d146;
L_1252d167:;
  /* 1252d167 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d16a cmp ecx, dword ptr [0x125562dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d170 jne 0x1252d187 */
  if (!C.zf) goto L_1252d187;
  /* 1252d172 call 0x1252d570 */
  push32(0x1252d177u); f_1252d570();
  /* 1252d177 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d17a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d17e jne 0x1252d187 */
  if (!C.zf) goto L_1252d187;
  /* 1252d180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d182 jmp 0x1252d561 */
  goto L_1252d561;
L_1252d187:;
  /* 1252d187 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d18a push edx */
  push32((uint32_t)(EDX));
  /* 1252d18b call 0x1252d680 */
  push32(0x1252d190u); f_1252d680();
  /* 1252d190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d193 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d196 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1252d199 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1252d19b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d19e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252d1a1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d1a4 jne 0x1252d1ad */
  if (!C.zf) goto L_1252d1ad;
  /* 1252d1a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d1a8 jmp 0x1252d561 */
  goto L_1252d561;
L_1252d1ad:;
  /* 1252d1ad mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d1b0 mov dword ptr [0x125562dc], edx */
  w32((uint32_t)(0x125562dc), (EDX));
  /* 1252d1b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d1b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252d1bc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1252d1bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d1c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252d1c4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1252d1c7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d1cb je 0x1252d1f0 */
  if (C.zf) goto L_1252d1f0;
  /* 1252d1cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d1d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d1d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d1d6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1252d1da mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d1dd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d1e0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1252d1e3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1252d1ea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1252d1ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252d1ee jne 0x1252d225 */
  if (!C.zf) goto L_1252d225;
L_1252d1f0:;
  /* 1252d1f0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1252d1f7:;
  /* 1252d1f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d1fa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d1fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d200 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1252d204 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d207 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d20a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1252d20d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1252d214 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1252d216 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252d218 jne 0x1252d225 */
  if (!C.zf) goto L_1252d225;
  /* 1252d21a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d21d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d220 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1252d223 jmp 0x1252d1f7 */
  goto L_1252d1f7;
L_1252d225:;
  /* 1252d225 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d228 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d22e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d231 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1252d238 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252d23b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1252d242 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d245 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d248 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d24b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1252d24f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252d252 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d256 jne 0x1252d272 */
  if (!C.zf) goto L_1252d272;
  /* 1252d258 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1252d25f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d262 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d265 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1252d268 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1252d26f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1252d272:;
  /* 1252d272 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d276 jl 0x1252d28b */
  if ((C.sf!=C.of)) goto L_1252d28b;
  /* 1252d278 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252d27b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1252d27d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1252d280 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d283 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d286 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1252d289 jmp 0x1252d272 */
  goto L_1252d272;
L_1252d28b:;
  /* 1252d28b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d28e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d291 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1252d295 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252d298 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d29b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252d29d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d2a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252d2a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252d2a6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1252d2a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d2ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1252d2af cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d2b3 jle 0x1252d2bc */
  if ((C.zf||C.sf!=C.of)) goto L_1252d2bc;
  /* 1252d2b5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1252d2bc:;
  /* 1252d2bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d2bf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d2c2 je 0x1252d4e0 */
  if (C.zf) goto L_1252d4e0;
  /* 1252d2c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d2cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d2ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252d2d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d2d4 jne 0x1252d3aa */
  if (!C.zf) goto L_1252d3aa;
  /* 1252d2da cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d2de jge 0x1252d33f */
  if ((C.sf==C.of)) goto L_1252d33f;
  /* 1252d2e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d2e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d2e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d2ea not eax */
  EAX = (~(EAX));
  /* 1252d2ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d2ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d2f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1252d2f6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d2f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d2fb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d2fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1252d302 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d305 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d308 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1252d30b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252d30e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d311 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d314 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1252d317 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d31a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d31d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252d321 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252d323 jne 0x1252d33d */
  if (!C.zf) goto L_1252d33d;
  /* 1252d325 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d32a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d32d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d32f not eax */
  EAX = (~(EAX));
  /* 1252d331 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d334 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252d336 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252d338 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d33b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1252d33d:;
  /* 1252d33d jmp 0x1252d3aa */
  goto L_1252d3aa;
L_1252d33f:;
  /* 1252d33f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d342 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d345 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d34a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d34c not edx */
  EDX = (~(EDX));
  /* 1252d34e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d351 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d354 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1252d35b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d35d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d360 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d363 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1252d36a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d36d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d370 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252d373 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252d376 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d379 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d37c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1252d37f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d382 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d385 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252d389 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d38b jne 0x1252d3aa */
  if (!C.zf) goto L_1252d3aa;
  /* 1252d38d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d390 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d393 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d398 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d39a not edx */
  EDX = (~(EDX));
  /* 1252d39c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d39f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252d3a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d3a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d3a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1252d3aa:;
  /* 1252d3aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252d3b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252d3b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1252d3b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252d3bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252d3c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252d3c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d3cc je 0x1252d4e0 */
  if (C.zf) goto L_1252d4e0;
  /* 1252d3d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d3d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d3d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1252d3db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252d3de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d3e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252d3e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1252d3ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d3f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252d3f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d3f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1252d3fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d3ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252d402 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d405 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1252d408 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d40b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d40e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252d411 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d414 jne 0x1252d4e0 */
  if (!C.zf) goto L_1252d4e0;
  /* 1252d41a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d41e jge 0x1252d47a */
  if ((C.sf==C.of)) goto L_1252d47a;
  /* 1252d420 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d423 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d426 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252d42a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d42d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d430 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1252d433 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252d435 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d438 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d43b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1252d43e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d440 jne 0x1252d458 */
  if (!C.zf) goto L_1252d458;
  /* 1252d442 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d447 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d44a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d44c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d44f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252d451 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252d453 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d456 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1252d458:;
  /* 1252d458 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d45d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d460 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d462 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d465 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d468 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1252d46c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d46e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d471 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d474 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1252d478 jmp 0x1252d4e0 */
  goto L_1252d4e0;
L_1252d47a:;
  /* 1252d47a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d47d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d480 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252d484 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d487 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d48a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1252d48d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252d48f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d492 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d495 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1252d498 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d49a jne 0x1252d4b7 */
  if (!C.zf) goto L_1252d4b7;
  /* 1252d49c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d49f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d4a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d4a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d4a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d4ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252d4af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252d4b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d4b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252d4b7:;
  /* 1252d4b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d4ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d4bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d4c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d4c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d4c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d4ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1252d4d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d4d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d4d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d4d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1252d4e0:;
  /* 1252d4e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d4e4 je 0x1252d4fa */
  if (C.zf) goto L_1252d4fa;
  /* 1252d4e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d4e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252d4ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1252d4ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d4f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d4f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252d4f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1252d4fa:;
  /* 1252d4fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d4fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d500 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252d503 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d506 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d50c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1252d50e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d514 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d517 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d51a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1252d51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d520 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252d522 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d525 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252d527 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d52a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d52d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1252d52f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d531 jne 0x1252d553 */
  if (!C.zf) goto L_1252d553;
  /* 1252d533 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d536 cmp eax, dword ptr [0x125562e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125562e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d53c jne 0x1252d553 */
  if (!C.zf) goto L_1252d553;
  /* 1252d53e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d541 cmp ecx, dword ptr [0x125562d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d547 jne 0x1252d553 */
  if (!C.zf) goto L_1252d553;
  /* 1252d549 mov dword ptr [0x125562e0], 0 */
  w32((uint32_t)(0x125562e0), (0x0u));
L_1252d553:;
  /* 1252d553 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1252d556 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d559 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1252d55b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d55e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1252d561:;
  /* 1252d561 pop esi */
  ESI = (pop32());
  /* 1252d562 mov esp, ebp */
  ESP = (EBP);
  /* 1252d564 pop ebp */
  EBP = (pop32());
  /* 1252d565 ret  */
  ESPCHK(0x1252d030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d570 @ 0x1252d570 (271 bytes, 78 insns) */
void f_1252d570(void) {
  FTRACE(0x1252d570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252d570 push ebp */
  push32((uint32_t)(EBP));
  /* 1252d571 mov ebp, esp */
  EBP = (ESP);
  /* 1252d573 push ecx */
  push32((uint32_t)(ECX));
  /* 1252d574 mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252d579 cmp eax, dword ptr [0x125562c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125562c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d57f jne 0x1252d5cb */
  if (!C.zf) goto L_1252d5cb;
  /* 1252d581 mov ecx, dword ptr [0x125562c8] */
  ECX = (r32((uint32_t)(0x125562c8)));
  /* 1252d587 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d58a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d58d push ecx */
  push32((uint32_t)(ECX));
  /* 1252d58e mov edx, dword ptr [0x125562e8] */
  EDX = (r32((uint32_t)(0x125562e8)));
  /* 1252d594 push edx */
  push32((uint32_t)(EDX));
  /* 1252d595 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252d597 mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252d59c push eax */
  push32((uint32_t)(EAX));
  /* 1252d59d call dword ptr [0x12557344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557344))), 0x1252d5a3u);
  /* 1252d5a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252d5a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d5aa jne 0x1252d5b3 */
  if (!C.zf) goto L_1252d5b3;
  /* 1252d5ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d5ae jmp 0x1252d67b */
  goto L_1252d67b;
L_1252d5b3:;
  /* 1252d5b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d5b6 mov dword ptr [0x125562e8], ecx */
  w32((uint32_t)(0x125562e8), (ECX));
  /* 1252d5bc mov edx, dword ptr [0x125562c8] */
  EDX = (r32((uint32_t)(0x125562c8)));
  /* 1252d5c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d5c5 mov dword ptr [0x125562c8], edx */
  w32((uint32_t)(0x125562c8), (EDX));
L_1252d5cb:;
  /* 1252d5cb mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252d5d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d5d3 mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252d5d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d5db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252d5de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1252d5e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1252d5e5 mov edx, dword ptr [0x125562ec] */
  EDX = (r32((uint32_t)(0x125562ec)));
  /* 1252d5eb push edx */
  push32((uint32_t)(EDX));
  /* 1252d5ec call dword ptr [0x1255733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255733c))), 0x1252d5f2u);
  /* 1252d5f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d5f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1252d5f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d5fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d5ff jne 0x1252d605 */
  if (!C.zf) goto L_1252d605;
  /* 1252d601 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d603 jmp 0x1252d67b */
  goto L_1252d67b;
L_1252d605:;
  /* 1252d605 push 4 */
  push32((uint32_t)(0x4u));
  /* 1252d607 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1252d60c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1252d611 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252d613 call dword ptr [0x12557334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557334))), 0x1252d619u);
  /* 1252d619 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d61c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1252d61f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d622 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d626 jne 0x1252d642 */
  if (!C.zf) goto L_1252d642;
  /* 1252d628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d62b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252d62e push ecx */
  push32((uint32_t)(ECX));
  /* 1252d62f push 0 */
  push32((uint32_t)(0x0u));
  /* 1252d631 mov edx, dword ptr [0x125562ec] */
  EDX = (r32((uint32_t)(0x125562ec)));
  /* 1252d637 push edx */
  push32((uint32_t)(EDX));
  /* 1252d638 call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252d63eu);
  /* 1252d63e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d640 jmp 0x1252d67b */
  goto L_1252d67b;
L_1252d642:;
  /* 1252d642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d645 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1252d64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d64e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1252d655 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d658 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1252d65f mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252d664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d667 mov dword ptr [0x125562e4], eax */
  w32((uint32_t)(0x125562e4), (EAX));
  /* 1252d66c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d66f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1252d672 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1252d678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1252d67b:;
  /* 1252d67b mov esp, ebp */
  ESP = (EBP);
  /* 1252d67d pop ebp */
  EBP = (pop32());
  /* 1252d67e ret  */
  ESPCHK(0x1252d570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x1252d680 (494 bytes, 149 insns) */
void f_1252d680(void) {
  FTRACE(0x1252d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252d680 push ebp */
  push32((uint32_t)(EBP));
  /* 1252d681 mov ebp, esp */
  EBP = (ESP);
  /* 1252d683 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d689 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252d68c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1252d68f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d692 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252d695 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252d698 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1252d69f:;
  /* 1252d69f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d6a3 jl 0x1252d6b8 */
  if ((C.sf!=C.of)) goto L_1252d6b8;
  /* 1252d6a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252d6a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1252d6aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252d6ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d6b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d6b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1252d6b6 jmp 0x1252d69f */
  goto L_1252d69f;
L_1252d6b8:;
  /* 1252d6b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d6bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d6c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d6c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1252d6cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252d6ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1252d6d5 jmp 0x1252d6e0 */
  goto L_1252d6e0;
L_1252d6d7:;
  /* 1252d6d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d6da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d6dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1252d6e0:;
  /* 1252d6e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d6e4 jge 0x1252d706 */
  if ((C.sf==C.of)) goto L_1252d706;
  /* 1252d6e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d6e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d6ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1252d6ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d6f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d6f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d6f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1252d6fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d6fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d701 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1252d704 jmp 0x1252d6d7 */
  goto L_1252d6d7;
L_1252d706:;
  /* 1252d706 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d709 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1252d70c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d70f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252d712 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d714 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252d717 push 4 */
  push32((uint32_t)(0x4u));
  /* 1252d719 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1252d71e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252d723 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d726 push edx */
  push32((uint32_t)(EDX));
  /* 1252d727 call dword ptr [0x12557334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557334))), 0x1252d72du);
  /* 1252d72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252d72f jne 0x1252d739 */
  if (!C.zf) goto L_1252d739;
  /* 1252d731 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252d734 jmp 0x1252d86a */
  goto L_1252d86a;
L_1252d739:;
  /* 1252d739 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d73c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d741 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1252d744 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d747 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252d74a jmp 0x1252d758 */
  goto L_1252d758;
L_1252d74c:;
  /* 1252d74c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d74f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d755 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252d758:;
  /* 1252d758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d75b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d75e ja 0x1252d7bd */
  if ((!C.cf&&!C.zf)) goto L_1252d7bd;
  /* 1252d760 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d763 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1252d76a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d76d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1252d777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d77a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d77d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d780 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d783 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1252d789 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d78c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d792 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d795 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252d798 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d79b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d7a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d7a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252d7a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d7aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d7af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252d7b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252d7b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1252d7bb jmp 0x1252d74c */
  goto L_1252d74c;
L_1252d7bd:;
  /* 1252d7bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d7c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d7c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1252d7c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d7cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d7cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d7d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1252d7d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d7d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252d7db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d7de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d7e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d7e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1252d7e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252d7ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d7ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d7f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1252d7f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d7f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252d7f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252d7fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252d7ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d802 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1252d805 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d808 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d80b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1252d813 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d816 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d819 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1252d824 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d827 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1252d82b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d82e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1252d831 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252d834 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d837 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1252d83a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252d83c jne 0x1252d84d */
  if (!C.zf) goto L_1252d84d;
  /* 1252d83e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d841 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252d844 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1252d847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d84a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252d84d:;
  /* 1252d84d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d852 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d855 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d857 not edx */
  EDX = (~(EDX));
  /* 1252d859 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d85c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252d85f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d864 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252d867 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1252d86a:;
  /* 1252d86a mov esp, ebp */
  ESP = (EBP);
  /* 1252d86c pop ebp */
  EBP = (pop32());
  /* 1252d86d ret  */
  ESPCHK(0x1252d680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x1252d870 (1515 bytes, 489 insns) */
void f_1252d870(void) {
  FTRACE(0x1252d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252d870 push ebp */
  push32((uint32_t)(EBP));
  /* 1252d871 mov ebp, esp */
  EBP = (ESP);
  /* 1252d873 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d876 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252d879 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d87c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1252d87e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1252d881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d884 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1252d887 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1252d88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d88d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252d890 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d893 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252d896 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252d899 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1252d89c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252d89f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d8a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252d8a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d8ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1252d8b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1252d8b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252d8b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d8bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1252d8be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d8c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252d8c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d8c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1252d8c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252d8cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d8cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1252d8d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d8d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252d8d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1252d8da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252d8dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d8e0 jle 0x1252db96 */
  if ((C.zf||C.sf!=C.of)) goto L_1252db96;
  /* 1252d8e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d8e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1252d8ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d8ee jne 0x1252d8fb */
  if (!C.zf) goto L_1252d8fb;
  /* 1252d8f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252d8f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d8f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d8f9 jle 0x1252d902 */
  if ((C.zf||C.sf!=C.of)) goto L_1252d902;
L_1252d8fb:;
  /* 1252d8fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d8fd jmp 0x1252de57 */
  goto L_1252de57;
L_1252d902:;
  /* 1252d902 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252d905 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1252d908 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d90b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252d90e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d912 jbe 0x1252d91b */
  if ((C.cf||C.zf)) goto L_1252d91b;
  /* 1252d914 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1252d91b:;
  /* 1252d91b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d91e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252d921 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252d924 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d927 jne 0x1252d9fd */
  if (!C.zf) goto L_1252d9fd;
  /* 1252d92d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252d931 jae 0x1252d992 */
  if (!C.cf) goto L_1252d992;
  /* 1252d933 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d938 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d93b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d93d not edx */
  EDX = (~(EDX));
  /* 1252d93f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d942 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d945 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1252d949 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252d94b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d94e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d951 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1252d955 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d958 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d95b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252d95e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252d961 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d964 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d967 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1252d96a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d96d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d970 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252d974 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252d976 jne 0x1252d990 */
  if (!C.zf) goto L_1252d990;
  /* 1252d978 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252d97d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d980 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252d982 not edx */
  EDX = (~(EDX));
  /* 1252d984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d987 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252d989 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d98e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252d990:;
  /* 1252d990 jmp 0x1252d9fd */
  goto L_1252d9fd;
L_1252d992:;
  /* 1252d992 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d995 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d998 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d99d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d99f not eax */
  EAX = (~(EAX));
  /* 1252d9a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d9a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d9a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1252d9ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252d9b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252d9b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d9b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1252d9bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d9c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d9c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1252d9c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252d9c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d9cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d9cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1252d9d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252d9d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252d9d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252d9dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252d9de jne 0x1252d9fd */
  if (!C.zf) goto L_1252d9fd;
  /* 1252d9e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252d9e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252d9e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252d9eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252d9ed not eax */
  EAX = (~(EAX));
  /* 1252d9ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d9f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252d9f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252d9f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252d9fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252d9fd:;
  /* 1252d9fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da00 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252da03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252da09 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1252da0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252da12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252da18 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1252da1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252da1e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252da21 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252da24 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252da27 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252da2b jle 0x1252db77 */
  if ((C.zf||C.sf!=C.of)) goto L_1252db77;
  /* 1252da31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252da34 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252da37 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1252da3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252da3d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252da40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252da43 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1252da46 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252da4a jbe 0x1252da53 */
  if ((C.cf||C.zf)) goto L_1252da53;
  /* 1252da4c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1252da53:;
  /* 1252da53 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252da56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252da59 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1252da5c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1252da5f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252da65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252da68 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252da6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252da71 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1252da74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252da77 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da7a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1252da7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da80 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252da83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da86 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252da89 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252da8f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252da92 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252da95 jne 0x1252db63 */
  if (!C.zf) goto L_1252db63;
  /* 1252da9b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252da9f jae 0x1252dafc */
  if (!C.cf) goto L_1252dafc;
  /* 1252daa1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daa4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252daa7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252daab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dab1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252dab4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252dab7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dabd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1252dac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252dac2 jne 0x1252dada */
  if (!C.zf) goto L_1252dada;
  /* 1252dac4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252dac9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dacc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252dace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dad1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252dad3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252dad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dad8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252dada:;
  /* 1252dada mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252dadf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dae2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252dae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252dae7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1252daee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252daf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252daf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daf6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1252dafa jmp 0x1252db63 */
  goto L_1252db63;
L_1252dafc:;
  /* 1252dafc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252daff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db02 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252db06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252db09 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db0c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252db0f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252db12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252db15 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db18 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1252db1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252db1d jne 0x1252db3a */
  if (!C.zf) goto L_1252db3a;
  /* 1252db1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252db22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252db25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252db2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252db2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252db2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252db32 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252db34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252db37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1252db3a:;
  /* 1252db3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252db3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252db40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252db45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252db47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252db4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252db4d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1252db54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252db56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252db59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252db5c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1252db63:;
  /* 1252db63 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252db66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252db69 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1252db6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252db6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252db74 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1252db77:;
  /* 1252db77 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252db7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252db80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1252db82 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252db85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252db8b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252db8e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1252db91 jmp 0x1252de52 */
  goto L_1252de52;
L_1252db96:;
  /* 1252db96 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252db99 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252db9c jge 0x1252de52 */
  if ((C.sf==C.of)) goto L_1252de52;
  /* 1252dba2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252dba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dba8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dbab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252dbad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1252dbb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dbb3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dbb6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dbb9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1252dbbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dbbf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dbc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1252dbc5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252dbc8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dbcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252dbce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252dbd1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1252dbd4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dbd7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1252dbda cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dbde jbe 0x1252dbe7 */
  if ((C.cf||C.zf)) goto L_1252dbe7;
  /* 1252dbe0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1252dbe7:;
  /* 1252dbe7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252dbea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1252dbed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252dbef jne 0x1252dd30 */
  if (!C.zf) goto L_1252dd30;
  /* 1252dbf5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252dbf8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1252dbfb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dbfe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252dc01 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dc05 jbe 0x1252dc0e */
  if ((C.cf||C.zf)) goto L_1252dc0e;
  /* 1252dc07 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1252dc0e:;
  /* 1252dc0e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dc11 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dc14 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252dc17 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dc1a jne 0x1252dcf0 */
  if (!C.zf) goto L_1252dcf0;
  /* 1252dc20 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dc24 jae 0x1252dc85 */
  if (!C.cf) goto L_1252dc85;
  /* 1252dc26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252dc2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dc2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252dc30 not edx */
  EDX = (~(EDX));
  /* 1252dc32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252dc35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1252dc3c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252dc3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252dc41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1252dc48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc4b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dc4e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1252dc51 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252dc54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc57 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dc5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1252dc5d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc60 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dc63 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252dc67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252dc69 jne 0x1252dc83 */
  if (!C.zf) goto L_1252dc83;
  /* 1252dc6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252dc70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dc73 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252dc75 not edx */
  EDX = (~(EDX));
  /* 1252dc77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dc7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252dc7c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252dc7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dc81 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252dc83:;
  /* 1252dc83 jmp 0x1252dcf0 */
  goto L_1252dcf0;
L_1252dc85:;
  /* 1252dc85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dc88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dc8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252dc90 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252dc92 not eax */
  EAX = (~(EAX));
  /* 1252dc94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252dc97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dc9a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1252dca1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1252dca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252dca6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dca9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1252dcb0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dcb3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dcb6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1252dcb9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252dcbc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dcbf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dcc2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1252dcc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dcc8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dccb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1252dccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252dcd1 jne 0x1252dcf0 */
  if (!C.zf) goto L_1252dcf0;
  /* 1252dcd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252dcd6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dcd9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252dcde shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252dce0 not eax */
  EAX = (~(EAX));
  /* 1252dce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dce5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252dce8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252dcea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252dced mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252dcf0:;
  /* 1252dcf0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dcf3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252dcf6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dcf9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252dcfc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1252dcff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dd02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252dd05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252dd08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252dd0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1252dd0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252dd11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dd14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252dd17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252dd1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1252dd1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252dd20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1252dd23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dd27 jbe 0x1252dd30 */
  if ((C.cf||C.zf)) goto L_1252dd30;
  /* 1252dd29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1252dd30:;
  /* 1252dd30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252dd33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252dd36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1252dd39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1252dd3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252dd42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252dd45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1252dd48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252dd4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252dd51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252dd54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1252dd5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252dd60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1252dd66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252dd6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252dd6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dd72 jne 0x1252de3e */
  if (!C.zf) goto L_1252de3e;
  /* 1252dd78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dd7c jae 0x1252ddd8 */
  if (!C.cf) goto L_1252ddd8;
  /* 1252dd7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dd81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dd84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252dd88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dd8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dd8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1252dd91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252dd93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dd96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dd99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1252dd9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252dd9e jne 0x1252ddb6 */
  if (!C.zf) goto L_1252ddb6;
  /* 1252dda0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252dda5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252dda8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252ddaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ddad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252ddaf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252ddb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ddb4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1252ddb6:;
  /* 1252ddb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252ddbb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252ddbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252ddc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ddc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252ddc6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1252ddca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ddcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ddcf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252ddd2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1252ddd6 jmp 0x1252de3e */
  goto L_1252de3e;
L_1252ddd8:;
  /* 1252ddd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dddb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ddde movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1252dde2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252dde5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dde8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1252ddeb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252dded mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252ddf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ddf3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1252ddf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ddf8 jne 0x1252de15 */
  if (!C.zf) goto L_1252de15;
  /* 1252ddfa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252ddfd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252de00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1252de05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1252de07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252de0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252de0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1252de0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252de12 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1252de15:;
  /* 1252de15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252de18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252de1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252de20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252de22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252de25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252de28 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1252de2f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252de31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252de34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1252de37 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1252de3e:;
  /* 1252de3e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252de41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252de44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1252de46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252de49 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252de4c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252de4f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1252de52:;
  /* 1252de52 mov eax, 1 */
  EAX = (0x1u);
L_1252de57:;
  /* 1252de57 mov esp, ebp */
  ESP = (EBP);
  /* 1252de59 pop ebp */
  EBP = (pop32());
  /* 1252de5a ret  */
  ESPCHK(0x1252d870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x1252de60 (304 bytes, 79 insns) */
void f_1252de60(void) {
  FTRACE(0x1252de60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252de60 push ebp */
  push32((uint32_t)(EBP));
  /* 1252de61 mov ebp, esp */
  EBP = (ESP);
  /* 1252de63 push ecx */
  push32((uint32_t)(ECX));
  /* 1252de64 cmp dword ptr [0x125562e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125562e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252de6b je 0x1252df8c */
  if (C.zf) goto L_1252df8c;
  /* 1252de71 mov eax, dword ptr [0x125562d8] */
  EAX = (r32((uint32_t)(0x125562d8)));
  /* 1252de76 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1252de79 mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252de7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252de82 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252de84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252de87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1252de8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252de91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252de94 push eax */
  push32((uint32_t)(EAX));
  /* 1252de95 call dword ptr [0x12557358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557358))), 0x1252de9bu);
  /* 1252de9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252dea0 mov ecx, dword ptr [0x125562d8] */
  ECX = (r32((uint32_t)(0x125562d8)));
  /* 1252dea6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252dea8 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252dead mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252deb0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1252deb2 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252deb8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1252debb mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252dec0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252dec3 mov edx, dword ptr [0x125562d8] */
  EDX = (r32((uint32_t)(0x125562d8)));
  /* 1252dec9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1252ded4 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252ded9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252dedc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1252dedf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1252dee2 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252dee7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252deea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1252deed mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252def3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252def6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1252defa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252defc jne 0x1252df12 */
  if (!C.zf) goto L_1252df12;
  /* 1252defe mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252df04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252df07 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1252df09 mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252df0f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1252df12:;
  /* 1252df12 mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252df18 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252df1c jne 0x1252df82 */
  if (!C.zf) goto L_1252df82;
  /* 1252df1e cmp dword ptr [0x125562e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125562e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252df25 jle 0x1252df82 */
  if ((C.zf||C.sf!=C.of)) goto L_1252df82;
  /* 1252df27 mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252df2c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252df2f push ecx */
  push32((uint32_t)(ECX));
  /* 1252df30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252df32 mov edx, dword ptr [0x125562ec] */
  EDX = (r32((uint32_t)(0x125562ec)));
  /* 1252df38 push edx */
  push32((uint32_t)(EDX));
  /* 1252df39 call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252df3fu);
  /* 1252df3f mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252df44 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252df47 mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252df4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252df4f mov edx, dword ptr [0x125562e0] */
  EDX = (r32((uint32_t)(0x125562e0)));
  /* 1252df55 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252df58 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252df5a push ecx */
  push32((uint32_t)(ECX));
  /* 1252df5b mov eax, dword ptr [0x125562e0] */
  EAX = (r32((uint32_t)(0x125562e0)));
  /* 1252df60 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252df63 push eax */
  push32((uint32_t)(EAX));
  /* 1252df64 mov ecx, dword ptr [0x125562e0] */
  ECX = (r32((uint32_t)(0x125562e0)));
  /* 1252df6a push ecx */
  push32((uint32_t)(ECX));
  /* 1252df6b call 0x12530590 */
  push32(0x1252df70u); f_12530590();
  /* 1252df70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252df73 mov edx, dword ptr [0x125562e4] */
  EDX = (r32((uint32_t)(0x125562e4)));
  /* 1252df79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252df7c mov dword ptr [0x125562e4], edx */
  w32((uint32_t)(0x125562e4), (EDX));
L_1252df82:;
  /* 1252df82 mov dword ptr [0x125562e0], 0 */
  w32((uint32_t)(0x125562e0), (0x0u));
L_1252df8c:;
  /* 1252df8c mov esp, ebp */
  ESP = (EBP);
  /* 1252df8e pop ebp */
  EBP = (pop32());
  /* 1252df8f ret  */
  ESPCHK(0x1252de60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x1252df90 (1565 bytes, 343 insns) */
void f_1252df90(void) {
  FTRACE(0x1252df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252df90 push ebp */
  push32((uint32_t)(EBP));
  /* 1252df91 mov ebp, esp */
  EBP = (ESP);
  /* 1252df93 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252df99 mov eax, dword ptr [0x125562e4] */
  EAX = (r32((uint32_t)(0x125562e4)));
  /* 1252df9e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252dfa1 push eax */
  push32((uint32_t)(EAX));
  /* 1252dfa2 mov ecx, dword ptr [0x125562e8] */
  ECX = (r32((uint32_t)(0x125562e8)));
  /* 1252dfa8 push ecx */
  push32((uint32_t)(ECX));
  /* 1252dfa9 call dword ptr [0x12557384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557384))), 0x1252dfafu);
  /* 1252dfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252dfb1 je 0x1252dfbb */
  if (C.zf) goto L_1252dfbb;
  /* 1252dfb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252dfb6 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252dfbb:;
  /* 1252dfbb mov edx, dword ptr [0x125562e8] */
  EDX = (r32((uint32_t)(0x125562e8)));
  /* 1252dfc1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1252dfc7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1252dfd1 jmp 0x1252dfe2 */
  goto L_1252dfe2;
L_1252dfd3:;
  /* 1252dfd3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1252dfd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252dfdc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1252dfe2:;
  /* 1252dfe2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1252dfe8 cmp ecx, dword ptr [0x125562e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125562e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252dfee jge 0x1252e5a7 */
  if ((C.sf==C.of)) goto L_1252e5a7;
  /* 1252dff4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252dffa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252dffd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1252e003 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1252e008 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1252e00e push ecx */
  push32((uint32_t)(ECX));
  /* 1252e00f call dword ptr [0x12557384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557384))), 0x1252e015u);
  /* 1252e015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e017 je 0x1252e023 */
  if (C.zf) goto L_1252e023;
  /* 1252e019 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1252e01e jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e023:;
  /* 1252e023 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252e029 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252e02c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1252e032 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1252e038 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e03e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1252e041 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252e047 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252e04a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252e04d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1252e057 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1252e061 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1252e068 jmp 0x1252e073 */
  goto L_1252e073;
L_1252e06a:;
  /* 1252e06a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e06d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e070 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1252e073:;
  /* 1252e073 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e077 jge 0x1252e56b */
  if ((C.sf==C.of)) goto L_1252e56b;
  /* 1252e07d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1252e087 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1252e091 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1252e09b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1252e0a5 jmp 0x1252e0b6 */
  goto L_1252e0b6;
L_1252e0a7:;
  /* 1252e0a7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1252e0ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e0b0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1252e0b6:;
  /* 1252e0b6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e0bd jge 0x1252e0d2 */
  if ((C.sf==C.of)) goto L_1252e0d2;
  /* 1252e0bf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1252e0c5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1252e0d0 jmp 0x1252e0a7 */
  goto L_1252e0a7;
L_1252e0d2:;
  /* 1252e0d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e0d6 jl 0x1252e50d */
  if ((C.sf!=C.of)) goto L_1252e50d;
  /* 1252e0dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252e0e1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1252e0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1252e0e8 call dword ptr [0x12557384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557384))), 0x1252e0eeu);
  /* 1252e0ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e0f0 je 0x1252e0fc */
  if (C.zf) goto L_1252e0fc;
  /* 1252e0f2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1252e0f7 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e0fc:;
  /* 1252e0fc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1252e102 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1252e105 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1252e10f jmp 0x1252e120 */
  goto L_1252e120;
L_1252e111:;
  /* 1252e111 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1252e117 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e11a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1252e120:;
  /* 1252e120 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e127 jge 0x1252e2a4 */
  if ((C.sf==C.of)) goto L_1252e2a4;
  /* 1252e12d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e130 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e133 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1252e139 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e13f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e145 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1252e14b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e151 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e155 jne 0x1252e162 */
  if (!C.zf) goto L_1252e162;
  /* 1252e157 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1252e15d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e160 je 0x1252e16c */
  if (C.zf) goto L_1252e16c;
L_1252e162:;
  /* 1252e162 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1252e167 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e16c:;
  /* 1252e16c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e172 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252e174 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1252e17a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1252e180 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1252e186 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1252e18c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1252e18f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252e191 je 0x1252e1c9 */
  if (C.zf) goto L_1252e1c9;
  /* 1252e193 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1252e199 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e19c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1252e1a2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e1ac jle 0x1252e1b8 */
  if ((C.zf||C.sf!=C.of)) goto L_1252e1b8;
  /* 1252e1ae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1252e1b3 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e1b8:;
  /* 1252e1b8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1252e1be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e1c1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1252e1c7 jmp 0x1252e20b */
  goto L_1252e20b;
L_1252e1c9:;
  /* 1252e1c9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1252e1cf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252e1d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e1d5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1252e1db cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e1e2 jle 0x1252e1ee */
  if ((C.zf||C.sf!=C.of)) goto L_1252e1ee;
  /* 1252e1e4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1252e1ee:;
  /* 1252e1ee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1252e1f4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1252e1fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e1fe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1252e204 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1252e20b:;
  /* 1252e20b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e212 jl 0x1252e22d */
  if ((C.sf!=C.of)) goto L_1252e22d;
  /* 1252e214 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1252e21a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1252e21d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e21f jne 0x1252e22d */
  if (!C.zf) goto L_1252e22d;
  /* 1252e221 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e22b jle 0x1252e237 */
  if ((C.zf||C.sf!=C.of)) goto L_1252e237;
L_1252e22d:;
  /* 1252e22d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1252e232 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e237:;
  /* 1252e237 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e23d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e243 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1252e246 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e24c je 0x1252e258 */
  if (C.zf) goto L_1252e258;
  /* 1252e24e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1252e253 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e258:;
  /* 1252e258 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e25e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e264 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1252e26a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e270 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e276 jb 0x1252e16c */
  if (C.cf) goto L_1252e16c;
  /* 1252e27c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e282 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e288 je 0x1252e294 */
  if (C.zf) goto L_1252e294;
  /* 1252e28a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1252e28f jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e294:;
  /* 1252e294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e297 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e29c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252e29f jmp 0x1252e111 */
  goto L_1252e111;
L_1252e2a4:;
  /* 1252e2a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252e2a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252e2a9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e2af je 0x1252e2bb */
  if (C.zf) goto L_1252e2bb;
  /* 1252e2b1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1252e2b6 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e2bb:;
  /* 1252e2bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252e2be mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1252e2c4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1252e2cb jmp 0x1252e2d6 */
  goto L_1252e2d6;
L_1252e2cd:;
  /* 1252e2cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e2d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e2d3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1252e2d6:;
  /* 1252e2d6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e2da jge 0x1252e50d */
  if ((C.sf==C.of)) goto L_1252e50d;
  /* 1252e2e0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1252e2ea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1252e2f0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1252e2f6:;
  /* 1252e2f6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e2fc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252e2ff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1252e305 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e30b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e311 je 0x1252e43a */
  if (C.zf) goto L_1252e43a;
  /* 1252e317 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e31a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1252e320 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e327 je 0x1252e43a */
  if (C.zf) goto L_1252e43a;
  /* 1252e32d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e333 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e339 jb 0x1252e34e */
  if (C.cf) goto L_1252e34e;
  /* 1252e33b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1252e341 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e346 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e34c jb 0x1252e358 */
  if (C.cf) goto L_1252e358;
L_1252e34e:;
  /* 1252e34e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1252e353 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e358:;
  /* 1252e358 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e35e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1252e364 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1252e36a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1252e370 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e373 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1252e376 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e379 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e37e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1252e384:;
  /* 1252e384 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e387 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e38d je 0x1252e3ae */
  if (C.zf) goto L_1252e3ae;
  /* 1252e38f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e392 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e398 jne 0x1252e39c */
  if (!C.zf) goto L_1252e39c;
  /* 1252e39a jmp 0x1252e3ae */
  goto L_1252e3ae;
L_1252e39c:;
  /* 1252e39c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e39f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252e3a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1252e3a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e3a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e3a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1252e3ac jmp 0x1252e384 */
  goto L_1252e384;
L_1252e3ae:;
  /* 1252e3ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252e3b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e3b7 jne 0x1252e3c3 */
  if (!C.zf) goto L_1252e3c3;
  /* 1252e3b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1252e3be jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e3c3:;
  /* 1252e3c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e3c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252e3cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252e3ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e3d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1252e3d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e3de jle 0x1252e3ea */
  if ((C.zf||C.sf!=C.of)) goto L_1252e3ea;
  /* 1252e3e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1252e3ea:;
  /* 1252e3ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1252e3f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e3f3 je 0x1252e3ff */
  if (C.zf) goto L_1252e3ff;
  /* 1252e3f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1252e3fa jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e3ff:;
  /* 1252e3ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e405 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252e408 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e40e je 0x1252e41a */
  if (C.zf) goto L_1252e41a;
  /* 1252e410 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1252e415 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e41a:;
  /* 1252e41a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1252e420 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1252e426 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1252e42c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e42f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1252e435 jmp 0x1252e2f6 */
  goto L_1252e2f6;
L_1252e43a:;
  /* 1252e43a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e441 je 0x1252e4b1 */
  if (C.zf) goto L_1252e4b1;
  /* 1252e443 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e447 jge 0x1252e47b */
  if ((C.sf==C.of)) goto L_1252e47b;
  /* 1252e449 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252e44e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e451 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252e453 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1252e459 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e45b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1252e461 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252e466 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e469 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252e46b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1252e471 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e473 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1252e479 jmp 0x1252e4b1 */
  goto L_1252e4b1;
L_1252e47b:;
  /* 1252e47b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e47e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e481 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252e486 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252e488 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1252e48e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e490 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1252e496 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e499 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e49c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1252e4a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1252e4a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1252e4a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e4ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1252e4b1:;
  /* 1252e4b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1252e4b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252e4ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e4c0 jne 0x1252e4d4 */
  if (!C.zf) goto L_1252e4d4;
  /* 1252e4c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252e4c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1252e4cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e4d2 je 0x1252e4de */
  if (C.zf) goto L_1252e4de;
L_1252e4d4:;
  /* 1252e4d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1252e4d9 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e4de:;
  /* 1252e4de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1252e4e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252e4e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e4ed je 0x1252e4f9 */
  if (C.zf) goto L_1252e4f9;
  /* 1252e4ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1252e4f4 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e4f9:;
  /* 1252e4f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1252e4ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e502 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1252e508 jmp 0x1252e2cd */
  goto L_1252e2cd;
L_1252e50d:;
  /* 1252e50d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e510 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1252e516 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1252e51c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e520 jne 0x1252e53a */
  if (!C.zf) goto L_1252e53a;
  /* 1252e522 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e525 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1252e52b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1252e531 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e538 je 0x1252e541 */
  if (C.zf) goto L_1252e541;
L_1252e53a:;
  /* 1252e53a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1252e53f jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e541:;
  /* 1252e541 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1252e547 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e54d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1252e553 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252e556 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e55b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252e55e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e561 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1252e563 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252e566 jmp 0x1252e06a */
  goto L_1252e06a;
L_1252e56b:;
  /* 1252e56b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252e571 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1252e577 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e579 jne 0x1252e58c */
  if (!C.zf) goto L_1252e58c;
  /* 1252e57b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252e581 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1252e587 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e58a je 0x1252e593 */
  if (C.zf) goto L_1252e593;
L_1252e58c:;
  /* 1252e58c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1252e591 jmp 0x1252e5a9 */
  goto L_1252e5a9;
L_1252e593:;
  /* 1252e593 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1252e599 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e59c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1252e5a2 jmp 0x1252dfd3 */
  goto L_1252dfd3;
L_1252e5a7:;
  /* 1252e5a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252e5a9:;
  /* 1252e5a9 mov esp, ebp */
  ESP = (EBP);
  /* 1252e5ab pop ebp */
  EBP = (pop32());
  /* 1252e5ac ret  */
  ESPCHK(0x1252df90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x1252e5b0 (250 bytes, 92 insns) */
void f_1252e5b0(void) {
  FTRACE(0x1252e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1252e5b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e5b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1252e5b7 push esi */
  push32((uint32_t)(ESI));
  /* 1252e5b8 push edi */
  push32((uint32_t)(EDI));
  /* 1252e5b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1252e5bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252e5bf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1252e5c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1252e5c5:;
  /* 1252e5c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e5c9 jne 0x1252e5e9 */
  if (!C.zf) goto L_1252e5e9;
  /* 1252e5cb push 0x12550450 */
  push32((uint32_t)(0x12550450u));
  /* 1252e5d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252e5d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1252e5d4 push 0x12550444 */
  push32((uint32_t)(0x12550444u));
  /* 1252e5d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252e5db call 0x12527760 */
  push32(0x1252e5e0u); f_12527760();
  /* 1252e5e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e5e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e5e6 jne 0x1252e5e9 */
  if (!C.zf) goto L_1252e5e9;
  /* 1252e5e8 int3  */
  x86_unimpl("int3 @ 0x1252e5e8");
L_1252e5e9:;
  /* 1252e5e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252e5eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252e5ed jne 0x1252e5c5 */
  if (!C.zf) goto L_1252e5c5;
L_1252e5ef:;
  /* 1252e5ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e5f3 jne 0x1252e613 */
  if (!C.zf) goto L_1252e613;
  /* 1252e5f5 push 0x12550434 */
  push32((uint32_t)(0x12550434u));
  /* 1252e5fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1252e5fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1252e5fe push 0x12550444 */
  push32((uint32_t)(0x12550444u));
  /* 1252e603 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252e605 call 0x12527760 */
  push32(0x1252e60au); f_12527760();
  /* 1252e60a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e60d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e610 jne 0x1252e613 */
  if (!C.zf) goto L_1252e613;
  /* 1252e612 int3  */
  x86_unimpl("int3 @ 0x1252e612");
L_1252e613:;
  /* 1252e613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e617 jne 0x1252e5ef */
  if (!C.zf) goto L_1252e5ef;
  /* 1252e619 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e61c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1252e623 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e629 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252e62c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e632 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1252e634 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e637 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1252e63e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252e641 push ecx */
  push32((uint32_t)(ECX));
  /* 1252e642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252e645 push edx */
  push32((uint32_t)(EDX));
  /* 1252e646 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e649 push eax */
  push32((uint32_t)(EAX));
  /* 1252e64a call 0x1252f630 */
  push32(0x1252e64fu); f_1252f630();
  /* 1252e64f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e652 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252e655 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e658 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252e65b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e65e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e661 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252e664 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e667 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e66b jl 0x1252e68f */
  if ((C.sf!=C.of)) goto L_1252e68f;
  /* 1252e66d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e670 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252e672 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1252e675 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252e677 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252e67d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1252e680 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e683 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252e685 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e688 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e68b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252e68d jmp 0x1252e6a0 */
  goto L_1252e6a0;
L_1252e68f:;
  /* 1252e68f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e692 push edx */
  push32((uint32_t)(EDX));
  /* 1252e693 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252e695 call 0x1252f3b0 */
  push32(0x1252e69au); f_1252f3b0();
  /* 1252e69a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e69d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1252e6a0:;
  /* 1252e6a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e6a3 pop edi */
  EDI = (pop32());
  /* 1252e6a4 pop esi */
  ESI = (pop32());
  /* 1252e6a5 pop ebx */
  EBX = (pop32());
  /* 1252e6a6 mov esp, ebp */
  ESP = (EBP);
  /* 1252e6a8 pop ebp */
  EBP = (pop32());
  /* 1252e6a9 ret  */
  ESPCHK(0x1252e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6b0 @ 0x1252e6b0 (183 bytes, 58 insns) */
void f_1252e6b0(void) {
  FTRACE(0x1252e6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252e6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252e6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1252e6b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e6b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e6b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e6bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e6c1 ja 0x1252e6da */
  if ((!C.cf&&!C.zf)) goto L_1252e6da;
  /* 1252e6c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e6c6 mov edx, dword ptr [0x12552c98] */
  EDX = (r32((uint32_t)(0x12552c98)));
  /* 1252e6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e6ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1252e6d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1252e6d5 jmp 0x1252e763 */
  goto L_1252e763;
L_1252e6da:;
  /* 1252e6da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e6dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1252e6e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252e6e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252e6ec mov edx, dword ptr [0x12552c98] */
  EDX = (r32((uint32_t)(0x12552c98)));
  /* 1252e6f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e6f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1252e6f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1252e6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e6ff je 0x1252e723 */
  if (C.zf) goto L_1252e723;
  /* 1252e701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e704 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1252e707 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252e70d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1252e710 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1252e713 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1252e716 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1252e71a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1252e721 jmp 0x1252e734 */
  goto L_1252e734;
L_1252e723:;
  /* 1252e723 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1252e726 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1252e729 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1252e72d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1252e734:;
  /* 1252e734 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252e736 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252e738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252e73a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1252e73d push ecx */
  push32((uint32_t)(ECX));
  /* 1252e73e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e741 push edx */
  push32((uint32_t)(EDX));
  /* 1252e742 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1252e745 push eax */
  push32((uint32_t)(EAX));
  /* 1252e746 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252e748 call 0x125308d0 */
  push32(0x1252e74du); f_125308d0();
  /* 1252e74d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e752 jne 0x1252e758 */
  if (!C.zf) goto L_1252e758;
  /* 1252e754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e756 jmp 0x1252e763 */
  goto L_1252e763;
L_1252e758:;
  /* 1252e758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e75b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252e760 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1252e763:;
  /* 1252e763 mov esp, ebp */
  ESP = (EBP);
  /* 1252e765 pop ebp */
  EBP = (pop32());
  /* 1252e766 ret  */
  ESPCHK(0x1252e6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e770 @ 0x1252e770 (836 bytes, 238 insns) */
void f_1252e770(void) {
  FTRACE(0x1252e770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252e770 push ebp */
  push32((uint32_t)(EBP));
  /* 1252e771 mov ebp, esp */
  EBP = (ESP);
  /* 1252e773 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252e776 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252e778 call 0x1252c0a0 */
  push32(0x1252e77du); f_1252c0a0();
  /* 1252e77d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e783 push eax */
  push32((uint32_t)(EAX));
  /* 1252e784 call 0x1252eac0 */
  push32(0x1252e789u); f_1252eac0();
  /* 1252e789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e78c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1252e78f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e792 cmp ecx, dword ptr [0x12556024] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12556024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e798 jne 0x1252e7ab */
  if (!C.zf) goto L_1252e7ab;
  /* 1252e79a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252e79c call 0x1252c140 */
  push32(0x1252e7a1u); f_1252c140();
  /* 1252e7a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e7a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e7a6 jmp 0x1252eab0 */
  goto L_1252eab0;
L_1252e7ab:;
  /* 1252e7ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e7af jne 0x1252e7cc */
  if (!C.zf) goto L_1252e7cc;
  /* 1252e7b1 call 0x1252eba0 */
  push32(0x1252e7b6u); f_1252eba0();
  /* 1252e7b6 call 0x1252ec20 */
  push32(0x1252e7bbu); f_1252ec20();
  /* 1252e7bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252e7bd call 0x1252c140 */
  push32(0x1252e7c2u); f_1252c140();
  /* 1252e7c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e7c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e7c7 jmp 0x1252eab0 */
  goto L_1252eab0;
L_1252e7cc:;
  /* 1252e7cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252e7d3 jmp 0x1252e7de */
  goto L_1252e7de;
L_1252e7d5:;
  /* 1252e7d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e7d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e7db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252e7de:;
  /* 1252e7de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e7e2 jae 0x1252e92f */
  if (!C.cf) goto L_1252e92f;
  /* 1252e7e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e7eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252e7ee mov ecx, dword ptr [eax + 0x12552eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12552eb8)));
  /* 1252e7f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e7f7 jne 0x1252e92a */
  if (!C.zf) goto L_1252e92a;
  /* 1252e7fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1252e804 jmp 0x1252e80f */
  goto L_1252e80f;
L_1252e806:;
  /* 1252e806 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e809 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e80c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1252e80f:;
  /* 1252e80f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e816 jae 0x1252e824 */
  if (!C.cf) goto L_1252e824;
  /* 1252e818 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e81b mov byte ptr [eax + 0x125561c0], 0 */
  w8((uint32_t)(EAX + 0x125561c0), (0x0u));
  /* 1252e822 jmp 0x1252e806 */
  goto L_1252e806;
L_1252e824:;
  /* 1252e824 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1252e82b jmp 0x1252e836 */
  goto L_1252e836;
L_1252e82d:;
  /* 1252e82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e830 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e833 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1252e836:;
  /* 1252e836 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e83a jae 0x1252e8b7 */
  if (!C.cf) goto L_1252e8b7;
  /* 1252e83c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e83f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252e842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e845 lea ecx, [edx + eax*8 + 0x12552ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12552ec8));
  /* 1252e84c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252e84f jmp 0x1252e85a */
  goto L_1252e85a;
L_1252e851:;
  /* 1252e851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e854 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e857 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252e85a:;
  /* 1252e85a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e85d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252e85f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1252e861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252e863 je 0x1252e8b2 */
  if (C.zf) goto L_1252e8b2;
  /* 1252e865 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e86a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1252e86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e86f je 0x1252e8b2 */
  if (C.zf) goto L_1252e8b2;
  /* 1252e871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252e876 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252e878 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252e87b jmp 0x1252e886 */
  goto L_1252e886;
L_1252e87d:;
  /* 1252e87d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e883 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1252e886:;
  /* 1252e886 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252e889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252e88b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1252e88e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e891 ja 0x1252e8b0 */
  if ((!C.cf&&!C.zf)) goto L_1252e8b0;
  /* 1252e893 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e899 mov dl, byte ptr [eax + 0x125561c1] */
  DL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252e89f or dl, byte ptr [ecx + 0x12552eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12552eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1252e8a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e8a8 mov byte ptr [eax + 0x125561c1], dl */
  w8((uint32_t)(EAX + 0x125561c1), (DL));
  /* 1252e8ae jmp 0x1252e87d */
  goto L_1252e87d;
L_1252e8b0:;
  /* 1252e8b0 jmp 0x1252e851 */
  goto L_1252e851;
L_1252e8b2:;
  /* 1252e8b2 jmp 0x1252e82d */
  goto L_1252e82d;
L_1252e8b7:;
  /* 1252e8b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e8ba mov dword ptr [0x12556024], ecx */
  w32((uint32_t)(0x12556024), (ECX));
  /* 1252e8c0 mov dword ptr [0x125560ac], 1 */
  w32((uint32_t)(0x125560ac), (0x1u));
  /* 1252e8ca mov edx, dword ptr [0x12556024] */
  EDX = (r32((uint32_t)(0x12556024)));
  /* 1252e8d0 push edx */
  push32((uint32_t)(EDX));
  /* 1252e8d1 call 0x1252eb20 */
  push32(0x1252e8d6u); f_1252eb20();
  /* 1252e8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e8d9 mov dword ptr [0x125562c4], eax */
  w32((uint32_t)(0x125562c4), (EAX));
  /* 1252e8de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1252e8e5 jmp 0x1252e8f0 */
  goto L_1252e8f0;
L_1252e8e7:;
  /* 1252e8e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e8ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e8ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1252e8f0:;
  /* 1252e8f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e8f4 jae 0x1252e914 */
  if (!C.cf) goto L_1252e914;
  /* 1252e8f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252e8f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252e8fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e8ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252e902 mov cx, word ptr [ecx + eax*2 + 0x12552ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12552ebc)));
  /* 1252e90a mov word ptr [edx*2 + 0x125560a0], cx */
  w16((uint32_t)(EDX*2 + 0x125560a0), (CX));
  /* 1252e912 jmp 0x1252e8e7 */
  goto L_1252e8e7;
L_1252e914:;
  /* 1252e914 call 0x1252ec20 */
  push32(0x1252e919u); f_1252ec20();
  /* 1252e919 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252e91b call 0x1252c140 */
  push32(0x1252e920u); f_1252c140();
  /* 1252e920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e925 jmp 0x1252eab0 */
  goto L_1252eab0;
L_1252e92a:;
  /* 1252e92a jmp 0x1252e7d5 */
  goto L_1252e7d5;
L_1252e92f:;
  /* 1252e92f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1252e932 push edx */
  push32((uint32_t)(EDX));
  /* 1252e933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e936 push eax */
  push32((uint32_t)(EAX));
  /* 1252e937 call dword ptr [0x12557330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557330))), 0x1252e93du);
  /* 1252e93d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e940 jne 0x1252ea82 */
  if (!C.zf) goto L_1252ea82;
  /* 1252e946 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1252e94d jmp 0x1252e958 */
  goto L_1252e958;
L_1252e94f:;
  /* 1252e94f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e952 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e955 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1252e958:;
  /* 1252e958 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e95f jae 0x1252e96d */
  if (!C.cf) goto L_1252e96d;
  /* 1252e961 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e964 mov byte ptr [edx + 0x125561c0], 0 */
  w8((uint32_t)(EDX + 0x125561c0), (0x0u));
  /* 1252e96b jmp 0x1252e94f */
  goto L_1252e94f;
L_1252e96d:;
  /* 1252e96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252e970 mov dword ptr [0x12556024], eax */
  w32((uint32_t)(0x12556024), (EAX));
  /* 1252e975 mov dword ptr [0x125562c4], 0 */
  w32((uint32_t)(0x125562c4), (0x0u));
  /* 1252e97f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e983 jbe 0x1252ea3e */
  if ((C.cf||C.zf)) goto L_1252ea3e;
  /* 1252e989 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1252e98c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1252e98f jmp 0x1252e99a */
  goto L_1252e99a;
L_1252e991:;
  /* 1252e991 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e994 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e997 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1252e99a:;
  /* 1252e99a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e99d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252e99f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1252e9a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252e9a3 je 0x1252e9ec */
  if (C.zf) goto L_1252e9ec;
  /* 1252e9a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e9a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252e9aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1252e9ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252e9af je 0x1252e9ec */
  if (C.zf) goto L_1252e9ec;
  /* 1252e9b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e9b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252e9b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252e9b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252e9bb jmp 0x1252e9c6 */
  goto L_1252e9c6;
L_1252e9bd:;
  /* 1252e9bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e9c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e9c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1252e9c6:;
  /* 1252e9c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252e9c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252e9cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1252e9ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252e9d1 ja 0x1252e9ea */
  if ((!C.cf&&!C.zf)) goto L_1252e9ea;
  /* 1252e9d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e9d6 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252e9dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1252e9df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e9e2 mov byte ptr [edx + 0x125561c1], cl */
  w8((uint32_t)(EDX + 0x125561c1), (CL));
  /* 1252e9e8 jmp 0x1252e9bd */
  goto L_1252e9bd;
L_1252e9ea:;
  /* 1252e9ea jmp 0x1252e991 */
  goto L_1252e991;
L_1252e9ec:;
  /* 1252e9ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1252e9f3 jmp 0x1252e9fe */
  goto L_1252e9fe;
L_1252e9f5:;
  /* 1252e9f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252e9f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252e9fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1252e9fe:;
  /* 1252e9fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ea05 jae 0x1252ea1e */
  if (!C.cf) goto L_1252ea1e;
  /* 1252ea07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252ea0a mov dl, byte ptr [ecx + 0x125561c1] */
  DL = (r8((uint32_t)(ECX + 0x125561c1)));
  /* 1252ea10 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1252ea13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252ea16 mov byte ptr [eax + 0x125561c1], dl */
  w8((uint32_t)(EAX + 0x125561c1), (DL));
  /* 1252ea1c jmp 0x1252e9f5 */
  goto L_1252e9f5;
L_1252ea1e:;
  /* 1252ea1e mov ecx, dword ptr [0x12556024] */
  ECX = (r32((uint32_t)(0x12556024)));
  /* 1252ea24 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ea25 call 0x1252eb20 */
  push32(0x1252ea2au); f_1252eb20();
  /* 1252ea2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ea2d mov dword ptr [0x125562c4], eax */
  w32((uint32_t)(0x125562c4), (EAX));
  /* 1252ea32 mov dword ptr [0x125560ac], 1 */
  w32((uint32_t)(0x125560ac), (0x1u));
  /* 1252ea3c jmp 0x1252ea48 */
  goto L_1252ea48;
L_1252ea3e:;
  /* 1252ea3e mov dword ptr [0x125560ac], 0 */
  w32((uint32_t)(0x125560ac), (0x0u));
L_1252ea48:;
  /* 1252ea48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1252ea4f jmp 0x1252ea5a */
  goto L_1252ea5a;
L_1252ea51:;
  /* 1252ea51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ea54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ea57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1252ea5a:;
  /* 1252ea5a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ea5e jae 0x1252ea6f */
  if (!C.cf) goto L_1252ea6f;
  /* 1252ea60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ea63 mov word ptr [eax*2 + 0x125560a0], 0 */
  w16((uint32_t)(EAX*2 + 0x125560a0), (0x0u));
  /* 1252ea6d jmp 0x1252ea51 */
  goto L_1252ea51;
L_1252ea6f:;
  /* 1252ea6f call 0x1252ec20 */
  push32(0x1252ea74u); f_1252ec20();
  /* 1252ea74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252ea76 call 0x1252c140 */
  push32(0x1252ea7bu); f_1252c140();
  /* 1252ea7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ea7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ea80 jmp 0x1252eab0 */
  goto L_1252eab0;
L_1252ea82:;
  /* 1252ea82 cmp dword ptr [0x12554b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ea89 je 0x1252eaa3 */
  if (C.zf) goto L_1252eaa3;
  /* 1252ea8b call 0x1252eba0 */
  push32(0x1252ea90u); f_1252eba0();
  /* 1252ea90 call 0x1252ec20 */
  push32(0x1252ea95u); f_1252ec20();
  /* 1252ea95 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252ea97 call 0x1252c140 */
  push32(0x1252ea9cu); f_1252c140();
  /* 1252ea9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ea9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252eaa1 jmp 0x1252eab0 */
  goto L_1252eab0;
L_1252eaa3:;
  /* 1252eaa3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1252eaa5 call 0x1252c140 */
  push32(0x1252eaaau); f_1252c140();
  /* 1252eaaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252eaad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1252eab0:;
  /* 1252eab0 mov esp, ebp */
  ESP = (EBP);
  /* 1252eab2 pop ebp */
  EBP = (pop32());
  /* 1252eab3 ret  */
  ESPCHK(0x1252e770u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1252eac0 (89 bytes, 21 insns) */
void f_1252eac0(void) {
  FTRACE(0x1252eac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252eac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252eac1 mov ebp, esp */
  EBP = (ESP);
  /* 1252eac3 mov dword ptr [0x12554b38], 0 */
  w32((uint32_t)(0x12554b38), (0x0u));
  /* 1252eacd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ead1 jne 0x1252eae5 */
  if (!C.zf) goto L_1252eae5;
  /* 1252ead3 mov dword ptr [0x12554b38], 1 */
  w32((uint32_t)(0x12554b38), (0x1u));
  /* 1252eadd call dword ptr [0x12557328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557328))), 0x1252eae3u);
  /* 1252eae3 jmp 0x1252eb17 */
  goto L_1252eb17;
L_1252eae5:;
  /* 1252eae5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eae9 jne 0x1252eafd */
  if (!C.zf) goto L_1252eafd;
  /* 1252eaeb mov dword ptr [0x12554b38], 1 */
  w32((uint32_t)(0x12554b38), (0x1u));
  /* 1252eaf5 call dword ptr [0x12557338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557338))), 0x1252eafbu);
  /* 1252eafb jmp 0x1252eb17 */
  goto L_1252eb17;
L_1252eafd:;
  /* 1252eafd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eb01 jne 0x1252eb14 */
  if (!C.zf) goto L_1252eb14;
  /* 1252eb03 mov dword ptr [0x12554b38], 1 */
  w32((uint32_t)(0x12554b38), (0x1u));
  /* 1252eb0d mov eax, dword ptr [0x12554b58] */
  EAX = (r32((uint32_t)(0x12554b58)));
  /* 1252eb12 jmp 0x1252eb17 */
  goto L_1252eb17;
L_1252eb14:;
  /* 1252eb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1252eb17:;
  /* 1252eb17 pop ebp */
  EBP = (pop32());
  /* 1252eb18 ret  */
  ESPCHK(0x1252eac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1252eb20 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1252eb20(void) {
  FTRACE(0x1252eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1252eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1252eb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1252eb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252eb27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252eb2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252eb2d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252eb33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252eb36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eb3a ja 0x1252eb6a */
  if ((!C.cf&&!C.zf)) goto L_1252eb6a;
  /* 1252eb3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252eb3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252eb41 mov dl, byte ptr [eax + 0x1252eb84] */
  DL = (r8((uint32_t)(EAX + 0x1252eb84)));
  /* 1252eb47 jmp dword ptr [edx*4 + 0x1252eb70] */
  switch (EDX) {
    case 0: goto L_1252eb4e;
    case 1: goto L_1252eb55;
    case 2: goto L_1252eb5c;
    case 3: goto L_1252eb63;
    case 4: goto L_1252eb6a;
    default: x86_unimpl("switch@0x1252eb47 out of table"); return;
  }
L_1252eb4e:;
  /* 1252eb4e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1252eb53 jmp 0x1252eb6c */
  goto L_1252eb6c;
L_1252eb55:;
  /* 1252eb55 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1252eb5a jmp 0x1252eb6c */
  goto L_1252eb6c;
L_1252eb5c:;
  /* 1252eb5c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1252eb61 jmp 0x1252eb6c */
  goto L_1252eb6c;
L_1252eb63:;
  /* 1252eb63 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1252eb68 jmp 0x1252eb6c */
  goto L_1252eb6c;
L_1252eb6a:;
  /* 1252eb6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252eb6c:;
  /* 1252eb6c mov esp, ebp */
  ESP = (EBP);
  /* 1252eb6e pop ebp */
  EBP = (pop32());
  /* 1252eb6f ret  */
  ESPCHK(0x1252eb20u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1252eba0 (116 bytes, 29 insns) */
void f_1252eba0(void) {
  FTRACE(0x1252eba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252eba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252eba1 mov ebp, esp */
  EBP = (ESP);
  /* 1252eba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252eba4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252ebab jmp 0x1252ebb6 */
  goto L_1252ebb6;
L_1252ebad:;
  /* 1252ebad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ebb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ebb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252ebb6:;
  /* 1252ebb6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ebbd jge 0x1252ebcb */
  if ((C.sf==C.of)) goto L_1252ebcb;
  /* 1252ebbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ebc2 mov byte ptr [ecx + 0x125561c0], 0 */
  w8((uint32_t)(ECX + 0x125561c0), (0x0u));
  /* 1252ebc9 jmp 0x1252ebad */
  goto L_1252ebad;
L_1252ebcb:;
  /* 1252ebcb mov dword ptr [0x12556024], 0 */
  w32((uint32_t)(0x12556024), (0x0u));
  /* 1252ebd5 mov dword ptr [0x125560ac], 0 */
  w32((uint32_t)(0x125560ac), (0x0u));
  /* 1252ebdf mov dword ptr [0x125562c4], 0 */
  w32((uint32_t)(0x125562c4), (0x0u));
  /* 1252ebe9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252ebf0 jmp 0x1252ebfb */
  goto L_1252ebfb;
L_1252ebf2:;
  /* 1252ebf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ebf5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ebf8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252ebfb:;
  /* 1252ebfb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ebff jge 0x1252ec10 */
  if ((C.sf==C.of)) goto L_1252ec10;
  /* 1252ec01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ec04 mov word ptr [eax*2 + 0x125560a0], 0 */
  w16((uint32_t)(EAX*2 + 0x125560a0), (0x0u));
  /* 1252ec0e jmp 0x1252ebf2 */
  goto L_1252ebf2;
L_1252ec10:;
  /* 1252ec10 mov esp, ebp */
  ESP = (EBP);
  /* 1252ec12 pop ebp */
  EBP = (pop32());
  /* 1252ec13 ret  */
  ESPCHK(0x1252eba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x1252ec20 (770 bytes, 175 insns) */
void f_1252ec20(void) {
  FTRACE(0x1252ec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ec20 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ec21 mov ebp, esp */
  EBP = (ESP);
  /* 1252ec23 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ec29 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1252ec2f push eax */
  push32((uint32_t)(EAX));
  /* 1252ec30 mov ecx, dword ptr [0x12556024] */
  ECX = (r32((uint32_t)(0x12556024)));
  /* 1252ec36 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ec37 call dword ptr [0x12557330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557330))), 0x1252ec3du);
  /* 1252ec3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ec40 jne 0x1252ee59 */
  if (!C.zf) goto L_1252ee59;
  /* 1252ec46 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1252ec50 jmp 0x1252ec61 */
  goto L_1252ec61;
L_1252ec52:;
  /* 1252ec52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ec58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ec5b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1252ec61:;
  /* 1252ec61 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ec6b jae 0x1252ec82 */
  if (!C.cf) goto L_1252ec82;
  /* 1252ec6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ec73 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1252ec79 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1252ec80 jmp 0x1252ec52 */
  goto L_1252ec52;
L_1252ec82:;
  /* 1252ec82 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1252ec89 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1252ec8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252ec92 jmp 0x1252ec9d */
  goto L_1252ec9d;
L_1252ec94:;
  /* 1252ec94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ec97 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ec9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252ec9d:;
  /* 1252ec9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252eca0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252eca2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252eca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252eca6 je 0x1252ece8 */
  if (C.zf) goto L_1252ece8;
  /* 1252eca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ecab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ecad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1252ecaf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1252ecb5 jmp 0x1252ecc6 */
  goto L_1252ecc6;
L_1252ecb7:;
  /* 1252ecb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ecbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ecc0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1252ecc6:;
  /* 1252ecc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ecc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252eccb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1252ecce cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ecd4 ja 0x1252ece6 */
  if ((!C.cf&&!C.zf)) goto L_1252ece6;
  /* 1252ecd6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ecdc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1252ece4 jmp 0x1252ecb7 */
  goto L_1252ecb7;
L_1252ece6:;
  /* 1252ece6 jmp 0x1252ec94 */
  goto L_1252ec94;
L_1252ece8:;
  /* 1252ece8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ecea mov eax, dword ptr [0x125562c4] */
  EAX = (r32((uint32_t)(0x125562c4)));
  /* 1252ecef push eax */
  push32((uint32_t)(EAX));
  /* 1252ecf0 mov ecx, dword ptr [0x12556024] */
  ECX = (r32((uint32_t)(0x12556024)));
  /* 1252ecf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ecf7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1252ecfd push edx */
  push32((uint32_t)(EDX));
  /* 1252ecfe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed03 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1252ed09 push eax */
  push32((uint32_t)(EAX));
  /* 1252ed0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252ed0c call 0x125308d0 */
  push32(0x1252ed11u); f_125308d0();
  /* 1252ed11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ed14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ed16 mov ecx, dword ptr [0x12556024] */
  ECX = (r32((uint32_t)(0x12556024)));
  /* 1252ed1c push ecx */
  push32((uint32_t)(ECX));
  /* 1252ed1d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed22 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1252ed28 push edx */
  push32((uint32_t)(EDX));
  /* 1252ed29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed2e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1252ed34 push eax */
  push32((uint32_t)(EAX));
  /* 1252ed35 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed3a mov ecx, dword ptr [0x125562c4] */
  ECX = (r32((uint32_t)(0x125562c4)));
  /* 1252ed40 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ed41 call 0x12530a90 */
  push32(0x1252ed46u); f_12530a90();
  /* 1252ed46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ed49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ed4b mov edx, dword ptr [0x12556024] */
  EDX = (r32((uint32_t)(0x12556024)));
  /* 1252ed51 push edx */
  push32((uint32_t)(EDX));
  /* 1252ed52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed57 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1252ed5d push eax */
  push32((uint32_t)(EAX));
  /* 1252ed5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1252ed63 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1252ed69 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ed6a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1252ed6f mov edx, dword ptr [0x125562c4] */
  EDX = (r32((uint32_t)(0x125562c4)));
  /* 1252ed75 push edx */
  push32((uint32_t)(EDX));
  /* 1252ed76 call 0x12530a90 */
  push32(0x1252ed7bu); f_12530a90();
  /* 1252ed7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ed7e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1252ed88 jmp 0x1252ed99 */
  goto L_1252ed99;
L_1252ed8a:;
  /* 1252ed8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ed90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ed93 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1252ed99:;
  /* 1252ed99 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eda3 jae 0x1252ee54 */
  if (!C.cf) goto L_1252ee54;
  /* 1252eda9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252edaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252edb1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1252edb9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1252edbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252edbe je 0x1252edf6 */
  if (C.zf) goto L_1252edf6;
  /* 1252edc0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252edc6 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252edcc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1252edcf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252edd5 mov byte ptr [edx + 0x125561c1], cl */
  w8((uint32_t)(EDX + 0x125561c1), (CL));
  /* 1252eddb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ede1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ede7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1252edee mov byte ptr [eax + 0x125560c0], dl */
  w8((uint32_t)(EAX + 0x125560c0), (DL));
  /* 1252edf4 jmp 0x1252ee4f */
  goto L_1252ee4f;
L_1252edf6:;
  /* 1252edf6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252edfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252edfe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1252ee06 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1252ee09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ee0b je 0x1252ee42 */
  if (C.zf) goto L_1252ee42;
  /* 1252ee0d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee13 mov al, byte ptr [edx + 0x125561c1] */
  AL = (r8((uint32_t)(EDX + 0x125561c1)));
  /* 1252ee19 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1252ee1b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee21 mov byte ptr [ecx + 0x125561c1], al */
  w8((uint32_t)(ECX + 0x125561c1), (AL));
  /* 1252ee27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee33 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1252ee3a mov byte ptr [edx + 0x125560c0], cl */
  w8((uint32_t)(EDX + 0x125560c0), (CL));
  /* 1252ee40 jmp 0x1252ee4f */
  goto L_1252ee4f;
L_1252ee42:;
  /* 1252ee42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee48 mov byte ptr [edx + 0x125560c0], 0 */
  w8((uint32_t)(EDX + 0x125560c0), (0x0u));
L_1252ee4f:;
  /* 1252ee4f jmp 0x1252ed8a */
  goto L_1252ed8a;
L_1252ee54:;
  /* 1252ee54 jmp 0x1252ef1e */
  goto L_1252ef1e;
L_1252ee59:;
  /* 1252ee59 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1252ee63 jmp 0x1252ee74 */
  goto L_1252ee74;
L_1252ee65:;
  /* 1252ee65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ee6e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1252ee74:;
  /* 1252ee74 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ee7e jae 0x1252ef1e */
  if (!C.cf) goto L_1252ef1e;
  /* 1252ee84 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ee8b jb 0x1252eec8 */
  if (C.cf) goto L_1252eec8;
  /* 1252ee8d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ee94 ja 0x1252eec8 */
  if ((!C.cf&&!C.zf)) goto L_1252eec8;
  /* 1252ee96 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ee9c mov dl, byte ptr [ecx + 0x125561c1] */
  DL = (r8((uint32_t)(ECX + 0x125561c1)));
  /* 1252eea2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1252eea5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eeab mov byte ptr [eax + 0x125561c1], dl */
  w8((uint32_t)(EAX + 0x125561c1), (DL));
  /* 1252eeb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eeb7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252eeba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eec0 mov byte ptr [edx + 0x125560c0], cl */
  w8((uint32_t)(EDX + 0x125560c0), (CL));
  /* 1252eec6 jmp 0x1252ef19 */
  goto L_1252ef19;
L_1252eec8:;
  /* 1252eec8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eecf jb 0x1252ef0c */
  if (C.cf) goto L_1252ef0c;
  /* 1252eed1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252eed8 ja 0x1252ef0c */
  if ((!C.cf&&!C.zf)) goto L_1252ef0c;
  /* 1252eeda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eee0 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252eee6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1252eee9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eeef mov byte ptr [edx + 0x125561c1], cl */
  w8((uint32_t)(EDX + 0x125561c1), (CL));
  /* 1252eef5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252eefb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252eefe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ef04 mov byte ptr [ecx + 0x125560c0], al */
  w8((uint32_t)(ECX + 0x125560c0), (AL));
  /* 1252ef0a jmp 0x1252ef19 */
  goto L_1252ef19;
L_1252ef0c:;
  /* 1252ef0c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1252ef12 mov byte ptr [edx + 0x125560c0], 0 */
  w8((uint32_t)(EDX + 0x125560c0), (0x0u));
L_1252ef19:;
  /* 1252ef19 jmp 0x1252ee65 */
  goto L_1252ee65;
L_1252ef1e:;
  /* 1252ef1e mov esp, ebp */
  ESP = (EBP);
  /* 1252ef20 pop ebp */
  EBP = (pop32());
  /* 1252ef21 ret  */
  ESPCHK(0x1252ec20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef30 @ 0x1252ef30 (23 bytes, 9 insns) */
void f_1252ef30(void) {
  FTRACE(0x1252ef30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ef30 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ef31 mov ebp, esp */
  EBP = (ESP);
  /* 1252ef33 cmp dword ptr [0x125560ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125560ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ef3a je 0x1252ef43 */
  if (C.zf) goto L_1252ef43;
  /* 1252ef3c mov eax, dword ptr [0x12556024] */
  EAX = (r32((uint32_t)(0x12556024)));
  /* 1252ef41 jmp 0x1252ef45 */
  goto L_1252ef45;
L_1252ef43:;
  /* 1252ef43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252ef45:;
  /* 1252ef45 pop ebp */
  EBP = (pop32());
  /* 1252ef46 ret  */
  ESPCHK(0x1252ef30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x1252ef50 (34 bytes, 10 insns) */
void f_1252ef50(void) {
  FTRACE(0x1252ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ef51 mov ebp, esp */
  EBP = (ESP);
  /* 1252ef53 cmp dword ptr [0x12556470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ef5a jne 0x1252ef70 */
  if (!C.zf) goto L_1252ef70;
  /* 1252ef5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1252ef5e call 0x1252e770 */
  push32(0x1252ef63u); f_1252e770();
  /* 1252ef63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ef66 mov dword ptr [0x12556470], 1 */
  w32((uint32_t)(0x12556470), (0x1u));
L_1252ef70:;
  /* 1252ef70 pop ebp */
  EBP = (pop32());
  /* 1252ef71 ret  */
  ESPCHK(0x1252ef50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1252ef80 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1252ef80(void) {
  FTRACE(0x1252ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1252ef83 push edi */
  push32((uint32_t)(EDI));
  /* 1252ef84 push esi */
  push32((uint32_t)(ESI));
  /* 1252ef85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ef88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ef8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1252ef8e mov eax, ecx */
  EAX = (ECX);
  /* 1252ef90 mov edx, ecx */
  EDX = (ECX);
  /* 1252ef92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ef94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ef96 jbe 0x1252efa0 */
  if ((C.cf||C.zf)) goto L_1252efa0;
  /* 1252ef98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ef9a jb 0x1252f118 */
  if (C.cf) goto L_1252f118;
L_1252efa0:;
  /* 1252efa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1252efa6 jne 0x1252efbc */
  if (!C.zf) goto L_1252efbc;
  /* 1252efa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252efab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1252efae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252efb1 jb 0x1252efdc */
  if (C.cf) goto L_1252efdc;
  /* 1252efb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252efb5 jmp dword ptr [edx*4 + 0x1252f0c8] */
  switch (EDX) {
    case 0: goto L_1252f0d8;
    case 1: goto L_1252f0e0;
    case 2: goto L_1252f0ec;
    case 3: goto L_1252f100;
    default: x86_unimpl("switch@0x1252efb5 out of table"); return;
  }
L_1252efbc:;
  /* 1252efbc mov eax, edi */
  EAX = (EDI);
  /* 1252efbe mov edx, 3 */
  EDX = (0x3u);
  /* 1252efc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252efc6 jb 0x1252efd4 */
  if (C.cf) goto L_1252efd4;
  /* 1252efc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1252efcb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252efcd jmp dword ptr [eax*4 + 0x1252efe0] */
  switch (EAX) {
    case 1: goto L_1252eff0;
    case 2: goto L_1252f01c;
    case 3: goto L_1252f040;
    default: x86_unimpl("switch@0x1252efcd out of table"); return;
  }
L_1252efd4:;
  /* 1252efd4 jmp dword ptr [ecx*4 + 0x1252f0d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1252f0d8)))); return;
  /* 1252efdb nop  */
  /* nop */
L_1252efdc:;
  /* 1252efdc jmp dword ptr [ecx*4 + 0x1252f05c] */
  switch (ECX) {
    case 0: goto L_1252f0bf;
    case 1: goto L_1252f0ac;
    case 2: goto L_1252f0a4;
    case 3: goto L_1252f09c;
    case 4: goto L_1252f094;
    case 5: goto L_1252f08c;
    case 6: goto L_1252f084;
    case 7: goto L_1252f07c;
    default: x86_unimpl("switch@0x1252efdc out of table"); return;
  }
  /* 1252efe3 nop  */
  /* nop */
L_1252eff0:;
  /* 1252eff0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252eff2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252eff4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252eff6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252eff9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252effc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252efff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f002 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f005 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f008 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f00b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f00e jb 0x1252efdc */
  if (C.cf) goto L_1252efdc;
  /* 1252f010 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f012 jmp dword ptr [edx*4 + 0x1252f0c8] */
  switch (EDX) {
    case 0: goto L_1252f0d8;
    case 1: goto L_1252f0e0;
    case 2: goto L_1252f0ec;
    case 3: goto L_1252f100;
    default: x86_unimpl("switch@0x1252f012 out of table"); return;
  }
  /* 1252f019 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f01c:;
  /* 1252f01c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f01e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252f020 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252f022 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252f025 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f028 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252f02b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f02e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f031 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f034 jb 0x1252efdc */
  if (C.cf) goto L_1252efdc;
  /* 1252f036 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f038 jmp dword ptr [edx*4 + 0x1252f0c8] */
  switch (EDX) {
    case 0: goto L_1252f0d8;
    case 1: goto L_1252f0e0;
    case 2: goto L_1252f0ec;
    case 3: goto L_1252f100;
    default: x86_unimpl("switch@0x1252f038 out of table"); return;
  }
  /* 1252f03f nop  */
  /* nop */
L_1252f040:;
  /* 1252f040 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f042 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252f044 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252f046 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1252f047 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f04a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252f04b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f04e jb 0x1252efdc */
  if (C.cf) goto L_1252efdc;
  /* 1252f050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f052 jmp dword ptr [edx*4 + 0x1252f0c8] */
  switch (EDX) {
    case 0: goto L_1252f0d8;
    case 1: goto L_1252f0e0;
    case 2: goto L_1252f0ec;
    case 3: goto L_1252f100;
    default: x86_unimpl("switch@0x1252f052 out of table"); return;
  }
  /* 1252f059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f07c:;
  /* 1252f07c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1252f080 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1252f084:;
  /* 1252f084 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1252f088 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1252f08c:;
  /* 1252f08c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1252f090 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1252f094:;
  /* 1252f094 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1252f098 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1252f09c:;
  /* 1252f09c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1252f0a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1252f0a4:;
  /* 1252f0a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1252f0a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1252f0ac:;
  /* 1252f0ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1252f0b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1252f0b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1252f0bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f0bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1252f0bf:;
  /* 1252f0bf jmp dword ptr [edx*4 + 0x1252f0c8] */
  switch (EDX) {
    case 0: goto L_1252f0d8;
    case 1: goto L_1252f0e0;
    case 2: goto L_1252f0ec;
    case 3: goto L_1252f100;
    default: x86_unimpl("switch@0x1252f0bf out of table"); return;
  }
  /* 1252f0c6 mov edi, edi */
  EDI = (EDI);
L_1252f0d8:;
  /* 1252f0d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f0db pop esi */
  ESI = (pop32());
  /* 1252f0dc pop edi */
  EDI = (pop32());
  /* 1252f0dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f0de ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f0df nop  */
  /* nop */
L_1252f0e0:;
  /* 1252f0e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252f0e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252f0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f0e7 pop esi */
  ESI = (pop32());
  /* 1252f0e8 pop edi */
  EDI = (pop32());
  /* 1252f0e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f0ea ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f0eb nop  */
  /* nop */
L_1252f0ec:;
  /* 1252f0ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252f0ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252f0f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252f0f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252f0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f0f9 pop esi */
  ESI = (pop32());
  /* 1252f0fa pop edi */
  EDI = (pop32());
  /* 1252f0fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f0fc ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f0fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f100:;
  /* 1252f100 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252f102 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252f104 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252f107 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252f10a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252f10d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f113 pop esi */
  ESI = (pop32());
  /* 1252f114 pop edi */
  EDI = (pop32());
  /* 1252f115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f116 ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f117 nop  */
  /* nop */
L_1252f118:;
  /* 1252f118 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1252f11c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1252f120 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1252f126 jne 0x1252f14c */
  if (!C.zf) goto L_1252f14c;
  /* 1252f128 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f12b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f12e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f131 jb 0x1252f140 */
  if (C.cf) goto L_1252f140;
  /* 1252f133 std  */
  C.df=1;
  /* 1252f134 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f136 cld  */
  C.df=0;
  /* 1252f137 jmp dword ptr [edx*4 + 0x1252f260] */
  switch (EDX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f137 out of table"); return;
  }
  /* 1252f13e mov edi, edi */
  EDI = (EDI);
L_1252f140:;
  /* 1252f140 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252f142 jmp dword ptr [ecx*4 + 0x1252f210] */
  switch (ECX) {
    case 0: goto L_1252f257;
    default: x86_unimpl("switch@0x1252f142 out of table"); return;
  }
  /* 1252f149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f14c:;
  /* 1252f14c mov eax, edi */
  EAX = (EDI);
  /* 1252f14e mov edx, 3 */
  EDX = (0x3u);
  /* 1252f153 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f156 jb 0x1252f164 */
  if (C.cf) goto L_1252f164;
  /* 1252f158 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1252f15b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f15d jmp dword ptr [eax*4 + 0x1252f168] */
  switch (EAX) {
    case 1: goto L_1252f178;
    case 2: goto L_1252f198;
    case 3: goto L_1252f1c0;
    default: x86_unimpl("switch@0x1252f15d out of table"); return;
  }
L_1252f164:;
  /* 1252f164 jmp dword ptr [ecx*4 + 0x1252f260] */
  switch (ECX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f164 out of table"); return;
  }
  /* 1252f16b nop  */
  /* nop */
L_1252f178:;
  /* 1252f178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f17b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f17d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f180 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1252f181 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f184 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1252f185 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f188 jb 0x1252f140 */
  if (C.cf) goto L_1252f140;
  /* 1252f18a std  */
  C.df=1;
  /* 1252f18b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f18d cld  */
  C.df=0;
  /* 1252f18e jmp dword ptr [edx*4 + 0x1252f260] */
  switch (EDX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f18e out of table"); return;
  }
  /* 1252f195 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f198:;
  /* 1252f198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f19b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f19d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f1a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252f1a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f1a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f1a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f1ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f1af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f1b2 jb 0x1252f140 */
  if (C.cf) goto L_1252f140;
  /* 1252f1b4 std  */
  C.df=1;
  /* 1252f1b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f1b7 cld  */
  C.df=0;
  /* 1252f1b8 jmp dword ptr [edx*4 + 0x1252f260] */
  switch (EDX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f1b8 out of table"); return;
  }
  /* 1252f1bf nop  */
  /* nop */
L_1252f1c0:;
  /* 1252f1c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f1c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f1c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f1c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252f1cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f1ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252f1d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252f1d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252f1d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f1da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f1dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f1e0 jb 0x1252f140 */
  if (C.cf) goto L_1252f140;
  /* 1252f1e6 std  */
  C.df=1;
  /* 1252f1e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1252f1e9 cld  */
  C.df=0;
  /* 1252f1ea jmp dword ptr [edx*4 + 0x1252f260] */
  switch (EDX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f1ea out of table"); return;
  }
  /* 1252f1f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1252f1f4 adc al, 0xf2 */
  { uint32_t _a=(AL),_b=(0xf2u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1252f1f7 adc bl, byte ptr [edx + esi*8] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDX + ESI*8))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f1fa push edx */
  push32((uint32_t)(EDX));
  /* 1252f1fb adc ah, byte ptr [edx + esi*8] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDX + ESI*8))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f1fe push edx */
  push32((uint32_t)(EDX));
  /* 1252f1ff adc ch, byte ptr [edx + esi*8] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDX + ESI*8))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f202 push edx */
  push32((uint32_t)(EDX));
  /* 1252f203 adc dh, byte ptr [edx + esi*8] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDX + ESI*8))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f206 push edx */
  push32((uint32_t)(EDX));
  /* 1252f207 adc bh, byte ptr [edx + esi*8] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + ESI*8))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f20a push edx */
  push32((uint32_t)(EDX));
  /* 1252f20b adc al, byte ptr [edx + esi*8 + 0x52] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDX + ESI*8 + 0x52))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252f214 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1252f218 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1252f21c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1252f220 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1252f224 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1252f228 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1252f22c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1252f230 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1252f234 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1252f238 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1252f23c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1252f240 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1252f244 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1252f248 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1252f24c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1252f253 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f255 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1252f257:;
  /* 1252f257 jmp dword ptr [edx*4 + 0x1252f260] */
  switch (EDX) {
    case 0: goto L_1252f270;
    case 1: goto L_1252f278;
    case 2: goto L_1252f288;
    case 3: goto L_1252f29c;
    default: x86_unimpl("switch@0x1252f257 out of table"); return;
  }
  /* 1252f25e mov edi, edi */
  EDI = (EDI);
L_1252f270:;
  /* 1252f270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f273 pop esi */
  ESI = (pop32());
  /* 1252f274 pop edi */
  EDI = (pop32());
  /* 1252f275 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f276 ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f277 nop  */
  /* nop */
L_1252f278:;
  /* 1252f278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f27b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f27e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f281 pop esi */
  ESI = (pop32());
  /* 1252f282 pop edi */
  EDI = (pop32());
  /* 1252f283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f284 ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f285 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1252f288:;
  /* 1252f288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f28b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f28e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252f291 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f297 pop esi */
  ESI = (pop32());
  /* 1252f298 pop edi */
  EDI = (pop32());
  /* 1252f299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f29a ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
  /* 1252f29b nop  */
  /* nop */
L_1252f29c:;
  /* 1252f29c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1252f29f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1252f2a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1252f2a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1252f2a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1252f2ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1252f2ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f2b1 pop esi */
  ESI = (pop32());
  /* 1252f2b2 pop edi */
  EDI = (pop32());
  /* 1252f2b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1252f2b4 ret  */
  ESPCHK(0x1252ef80u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1252f2c0 (104 bytes, 43 insns) */
void f_1252f2c0(void) {
  FTRACE(0x1252f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252f2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1252f2c1 push esi */
  push32((uint32_t)(ESI));
  /* 1252f2c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1252f2c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f2c8 jne 0x1252f2e2 */
  if (!C.zf) goto L_1252f2e2;
  /* 1252f2ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1252f2ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252f2d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f2d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f2d6 mov ebx, eax */
  EBX = (EAX);
  /* 1252f2d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252f2dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f2de mov edx, ebx */
  EDX = (EBX);
  /* 1252f2e0 jmp 0x1252f323 */
  goto L_1252f323;
L_1252f2e2:;
  /* 1252f2e2 mov ecx, eax */
  ECX = (EAX);
  /* 1252f2e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1252f2e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252f2ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1252f2f0:;
  /* 1252f2f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1252f2f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1252f2f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1252f2f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1252f2f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252f2fa jne 0x1252f2f0 */
  if (!C.zf) goto L_1252f2f0;
  /* 1252f2fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f2fe mov esi, eax */
  ESI = (EAX);
  /* 1252f300 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1252f304 mov ecx, eax */
  ECX = (EAX);
  /* 1252f306 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1252f30a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1252f30c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f30e jb 0x1252f31e */
  if (C.cf) goto L_1252f31e;
  /* 1252f310 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f314 ja 0x1252f31e */
  if ((!C.cf&&!C.zf)) goto L_1252f31e;
  /* 1252f316 jb 0x1252f31f */
  if (C.cf) goto L_1252f31f;
  /* 1252f318 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f31c jbe 0x1252f31f */
  if ((C.cf||C.zf)) goto L_1252f31f;
L_1252f31e:;
  /* 1252f31e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1252f31f:;
  /* 1252f31f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f321 mov eax, esi */
  EAX = (ESI);
L_1252f323:;
  /* 1252f323 pop esi */
  ESI = (pop32());
  /* 1252f324 pop ebx */
  EBX = (pop32());
  /* 1252f325 ret 0x10 */
  ESPCHK(0x1252f2c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1252f330 (117 bytes, 44 insns) */
void f_1252f330(void) {
  FTRACE(0x1252f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252f330 push ebx */
  push32((uint32_t)(EBX));
  /* 1252f331 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1252f335 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f337 jne 0x1252f351 */
  if (!C.zf) goto L_1252f351;
  /* 1252f339 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252f33d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252f341 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f343 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f345 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252f349 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f34b mov eax, edx */
  EAX = (EDX);
  /* 1252f34d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252f34f jmp 0x1252f3a1 */
  goto L_1252f3a1;
L_1252f351:;
  /* 1252f351 mov ecx, eax */
  ECX = (EAX);
  /* 1252f353 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252f357 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252f35b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1252f35f:;
  /* 1252f35f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1252f361 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1252f363 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1252f365 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1252f367 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252f369 jne 0x1252f35f */
  if (!C.zf) goto L_1252f35f;
  /* 1252f36b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252f36d mov ecx, eax */
  ECX = (EAX);
  /* 1252f36f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1252f373 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1252f374 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1252f378 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f37a jb 0x1252f38a */
  if (C.cf) goto L_1252f38a;
  /* 1252f37c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f380 ja 0x1252f38a */
  if ((!C.cf&&!C.zf)) goto L_1252f38a;
  /* 1252f382 jb 0x1252f392 */
  if (C.cf) goto L_1252f392;
  /* 1252f384 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f388 jbe 0x1252f392 */
  if ((C.cf||C.zf)) goto L_1252f392;
L_1252f38a:;
  /* 1252f38a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f38e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1252f392:;
  /* 1252f392 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f396 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f39a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252f39c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252f39e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1252f3a1:;
  /* 1252f3a1 pop ebx */
  EBX = (pop32());
  /* 1252f3a2 ret 0x10 */
  ESPCHK(0x1252f330u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f3b0 @ 0x1252f3b0 (628 bytes, 214 insns) */
void f_1252f3b0(void) {
  FTRACE(0x1252f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1252f3b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f3b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1252f3b7 push esi */
  push32((uint32_t)(ESI));
  /* 1252f3b8 push edi */
  push32((uint32_t)(EDI));
L_1252f3b9:;
  /* 1252f3b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f3bd jne 0x1252f3dd */
  if (!C.zf) goto L_1252f3dd;
  /* 1252f3bf push 0x125504fc */
  push32((uint32_t)(0x125504fcu));
  /* 1252f3c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252f3c6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1252f3c8 push 0x125504f0 */
  push32((uint32_t)(0x125504f0u));
  /* 1252f3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1252f3cf call 0x12527760 */
  push32(0x1252f3d4u); f_12527760();
  /* 1252f3d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f3d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f3da jne 0x1252f3dd */
  if (!C.zf) goto L_1252f3dd;
  /* 1252f3dc int3  */
  x86_unimpl("int3 @ 0x1252f3dc");
L_1252f3dd:;
  /* 1252f3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f3e1 jne 0x1252f3b9 */
  if (!C.zf) goto L_1252f3b9;
  /* 1252f3e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f3e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252f3e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f3ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252f3ef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252f3f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f3f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f3f8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f3fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f400 je 0x1252f40f */
  if (C.zf) goto L_1252f40f;
  /* 1252f402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f405 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252f408 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1252f40b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252f40d je 0x1252f425 */
  if (C.zf) goto L_1252f425;
L_1252f40f:;
  /* 1252f40f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f412 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252f415 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1252f417 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f41a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1252f41d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252f420 jmp 0x1252f61d */
  goto L_1252f61d;
L_1252f425:;
  /* 1252f425 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f428 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252f42b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1252f42e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f430 je 0x1252f47c */
  if (C.zf) goto L_1252f47c;
  /* 1252f432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f435 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1252f43c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f43f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252f442 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1252f445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f447 je 0x1252f465 */
  if (C.zf) goto L_1252f465;
  /* 1252f449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f44c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f44f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252f452 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252f454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f457 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f45a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1252f45d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f460 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1252f463 jmp 0x1252f47c */
  goto L_1252f47c;
L_1252f465:;
  /* 1252f465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f468 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f46b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f46e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f471 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1252f474 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252f477 jmp 0x1252f61d */
  goto L_1252f61d;
L_1252f47c:;
  /* 1252f47c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f47f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f482 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f488 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1252f48b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f48e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f491 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1252f494 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f497 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1252f49a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f49d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1252f4a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252f4ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f4ae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252f4b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f4b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252f4b7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1252f4bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252f4bf jne 0x1252f4ef */
  if (!C.zf) goto L_1252f4ef;
  /* 1252f4c1 cmp dword ptr [ebp - 8], 0x12553140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12553140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f4c8 je 0x1252f4d3 */
  if (C.zf) goto L_1252f4d3;
  /* 1252f4ca cmp dword ptr [ebp - 8], 0x12553160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12553160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f4d1 jne 0x1252f4e3 */
  if (!C.zf) goto L_1252f4e3;
L_1252f4d3:;
  /* 1252f4d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f4d6 push edx */
  push32((uint32_t)(EDX));
  /* 1252f4d7 call 0x12531320 */
  push32(0x1252f4dcu); f_12531320();
  /* 1252f4dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f4df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f4e1 jne 0x1252f4ef */
  if (!C.zf) goto L_1252f4ef;
L_1252f4e3:;
  /* 1252f4e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f4e6 push eax */
  push32((uint32_t)(EAX));
  /* 1252f4e7 call 0x12531250 */
  push32(0x1252f4ecu); f_12531250();
  /* 1252f4ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252f4ef:;
  /* 1252f4ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f4f2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1252f4f5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f4fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f4fd je 0x1252f5db */
  if (C.zf) goto L_1252f5db;
L_1252f503:;
  /* 1252f503 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f506 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f509 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1252f50b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f50e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f510 jge 0x1252f533 */
  if ((C.sf==C.of)) goto L_1252f533;
  /* 1252f512 push 0x125504b0 */
  push32((uint32_t)(0x125504b0u));
  /* 1252f517 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252f519 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1252f51e push 0x125504f0 */
  push32((uint32_t)(0x125504f0u));
  /* 1252f523 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252f525 call 0x12527760 */
  push32(0x1252f52au); f_12527760();
  /* 1252f52a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f52d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f530 jne 0x1252f533 */
  if (!C.zf) goto L_1252f533;
  /* 1252f532 int3  */
  x86_unimpl("int3 @ 0x1252f532");
L_1252f533:;
  /* 1252f533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f537 jne 0x1252f503 */
  if (!C.zf) goto L_1252f503;
  /* 1252f539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f53c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f53f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1252f541 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252f547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f54a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252f54d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f553 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1252f555 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f558 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1252f55b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f55e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f561 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252f564 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f568 jle 0x1252f586 */
  if ((C.zf||C.sf!=C.of)) goto L_1252f586;
  /* 1252f56a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f56d push ecx */
  push32((uint32_t)(ECX));
  /* 1252f56e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f571 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252f574 push eax */
  push32((uint32_t)(EAX));
  /* 1252f575 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f578 push ecx */
  push32((uint32_t)(ECX));
  /* 1252f579 call 0x12530f40 */
  push32(0x1252f57eu); f_12530f40();
  /* 1252f57e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f581 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252f584 jmp 0x1252f5ce */
  goto L_1252f5ce;
L_1252f586:;
  /* 1252f586 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f58a je 0x1252f5a9 */
  if (C.zf) goto L_1252f5a9;
  /* 1252f58c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f58f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1252f592 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f595 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1252f598 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252f59b mov ecx, dword ptr [edx*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 1252f5a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f5a4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1252f5a7 jmp 0x1252f5b0 */
  goto L_1252f5b0;
L_1252f5a9:;
  /* 1252f5a9 mov dword ptr [ebp - 0x14], 0x12552a60 */
  w32((uint32_t)(EBP + -0x14), (0x12552a60u));
L_1252f5b0:;
  /* 1252f5b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252f5b3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1252f5b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1252f5ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f5bc je 0x1252f5ce */
  if (C.zf) goto L_1252f5ce;
  /* 1252f5be push 2 */
  push32((uint32_t)(0x2u));
  /* 1252f5c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252f5c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1252f5c6 call 0x12530df0 */
  push32(0x1252f5cbu); f_12530df0();
  /* 1252f5cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252f5ce:;
  /* 1252f5ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f5d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252f5d4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1252f5d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1252f5d9 jmp 0x1252f5f9 */
  goto L_1252f5f9;
L_1252f5db:;
  /* 1252f5db mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1252f5e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f5e5 push edx */
  push32((uint32_t)(EDX));
  /* 1252f5e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1252f5e9 push eax */
  push32((uint32_t)(EAX));
  /* 1252f5ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252f5ed push ecx */
  push32((uint32_t)(ECX));
  /* 1252f5ee call 0x12530f40 */
  push32(0x1252f5f3u); f_12530f40();
  /* 1252f5f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f5f6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1252f5f9:;
  /* 1252f5f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252f5fc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f5ff je 0x1252f615 */
  if (C.zf) goto L_1252f615;
  /* 1252f601 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f604 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252f607 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1252f60a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f60d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1252f610 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252f613 jmp 0x1252f61d */
  goto L_1252f61d;
L_1252f615:;
  /* 1252f615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f618 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1252f61d:;
  /* 1252f61d pop edi */
  EDI = (pop32());
  /* 1252f61e pop esi */
  ESI = (pop32());
  /* 1252f61f pop ebx */
  EBX = (pop32());
  /* 1252f620 mov esp, ebp */
  ESP = (EBP);
  /* 1252f622 pop ebp */
  EBP = (pop32());
  /* 1252f623 ret  */
  ESPCHK(0x1252f3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x1252f630 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1252f630(void) {
  FTRACE(0x1252f630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252f630 push ebp */
  push32((uint32_t)(EBP));
  /* 1252f631 mov ebp, esp */
  EBP = (ESP);
  /* 1252f633 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f639 push ebx */
  push32((uint32_t)(EBX));
  /* 1252f63a push esi */
  push32((uint32_t)(ESI));
  /* 1252f63b push edi */
  push32((uint32_t)(EDI));
  /* 1252f63c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1252f643 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1252f64d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1252f654:;
  /* 1252f654 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f657 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1252f659 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1252f65c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f660 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f663 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f666 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1252f669 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f66b je 0x12530247 */
  if (C.zf) goto L_12530247;
  /* 1252f671 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f678 jl 0x12530247 */
  if ((C.sf!=C.of)) goto L_12530247;
  /* 1252f67e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f682 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f685 jl 0x1252f6a6 */
  if ((C.sf!=C.of)) goto L_1252f6a6;
  /* 1252f687 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f68b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f68e jg 0x1252f6a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1252f6a6;
  /* 1252f690 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f694 movsx ecx, byte ptr [eax + 0x125504e8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x125504e8))));
  /* 1252f69b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1252f69e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1252f6a4 jmp 0x1252f6b0 */
  goto L_1252f6b0;
L_1252f6a6:;
  /* 1252f6a6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1252f6b0:;
  /* 1252f6b0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1252f6b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252f6b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252f6bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252f6bf movsx edx, byte ptr [ecx + eax*8 + 0x12550508] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12550508))));
  /* 1252f6c7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1252f6ca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1252f6cd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252f6d0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1252f6d6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f6dd ja 0x12530242 */
  if ((!C.cf&&!C.zf)) goto L_12530242;
  /* 1252f6e3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1252f6e9 jmp dword ptr [ecx*4 + 0x12530254] */
  switch (ECX) {
    case 0: goto L_1252f6f0;
    case 1: goto L_1252f78a;
    case 2: goto L_1252f7cc;
    case 3: goto L_1252f83b;
    case 4: goto L_1252f893;
    case 5: goto L_1252f8a2;
    case 6: goto L_1252f8ee;
    case 7: goto L_1252f981;
    case 8: goto L_1252f818;
    case 9: goto L_1252f823;
    case 10: goto L_1252f80e;
    case 11: goto L_1252f803;
    case 12: goto L_1252f82e;
    case 13: goto L_1252f836;
    default: x86_unimpl("switch@0x1252f6e9 out of table"); return;
  }
L_1252f6f0:;
  /* 1252f6f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1252f6f7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252f6fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252f700 mov eax, dword ptr [0x12552c98] */
  EAX = (r32((uint32_t)(0x12552c98)));
  /* 1252f705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252f707 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1252f70b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1252f711 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252f713 je 0x1252f76d */
  if (C.zf) goto L_1252f76d;
  /* 1252f715 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1252f71b push edx */
  push32((uint32_t)(EDX));
  /* 1252f71c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f71f push eax */
  push32((uint32_t)(EAX));
  /* 1252f720 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f724 push ecx */
  push32((uint32_t)(ECX));
  /* 1252f725 call 0x12530360 */
  push32(0x1252f72au); f_12530360();
  /* 1252f72a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f72d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f730 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1252f732 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1252f735 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f738 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f73b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1252f73e:;
  /* 1252f73e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f742 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f744 jne 0x1252f767 */
  if (!C.zf) goto L_1252f767;
  /* 1252f746 push 0x12550588 */
  push32((uint32_t)(0x12550588u));
  /* 1252f74b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252f74d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1252f752 push 0x1255057c */
  push32((uint32_t)(0x1255057cu));
  /* 1252f757 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252f759 call 0x12527760 */
  push32(0x1252f75eu); f_12527760();
  /* 1252f75e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f761 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f764 jne 0x1252f767 */
  if (!C.zf) goto L_1252f767;
  /* 1252f766 int3  */
  x86_unimpl("int3 @ 0x1252f766");
L_1252f767:;
  /* 1252f767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f76b jne 0x1252f73e */
  if (!C.zf) goto L_1252f73e;
L_1252f76d:;
  /* 1252f76d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1252f773 push ecx */
  push32((uint32_t)(ECX));
  /* 1252f774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252f777 push edx */
  push32((uint32_t)(EDX));
  /* 1252f778 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f77c push eax */
  push32((uint32_t)(EAX));
  /* 1252f77d call 0x12530360 */
  push32(0x1252f782u); f_12530360();
  /* 1252f782 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f785 jmp 0x12530242 */
  goto L_12530242;
L_1252f78a:;
  /* 1252f78a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1252f791 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252f794 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1252f79a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1252f7a0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1252f7a6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1252f7ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252f7af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252f7b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1252f7c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1252f7c7 jmp 0x12530242 */
  goto L_12530242;
L_1252f7cc:;
  /* 1252f7cc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f7d0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1252f7d6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1252f7dc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f7df mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1252f7e5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f7ec ja 0x1252f836 */
  if ((!C.cf&&!C.zf)) goto L_1252f836;
  /* 1252f7ee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1252f7f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f7f6 mov al, byte ptr [ecx + 0x1253028c] */
  AL = (r8((uint32_t)(ECX + 0x1253028c)));
  /* 1252f7fc jmp dword ptr [eax*4 + 0x12530274] */
  switch (EAX) {
    case 0: goto L_1252f818;
    case 1: goto L_1252f823;
    case 2: goto L_1252f80e;
    case 3: goto L_1252f803;
    case 4: goto L_1252f82e;
    case 5: goto L_1252f836;
    default: x86_unimpl("switch@0x1252f7fc out of table"); return;
  }
L_1252f803:;
  /* 1252f803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f806 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f809 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252f80c jmp 0x1252f836 */
  goto L_1252f836;
L_1252f80e:;
  /* 1252f80e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f811 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1252f813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252f816 jmp 0x1252f836 */
  goto L_1252f836;
L_1252f818:;
  /* 1252f818 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f81b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1252f81e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252f821 jmp 0x1252f836 */
  goto L_1252f836;
L_1252f823:;
  /* 1252f823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f826 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1252f829 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252f82c jmp 0x1252f836 */
  goto L_1252f836;
L_1252f82e:;
  /* 1252f82e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f831 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1252f833 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252f836:;
  /* 1252f836 jmp 0x12530242 */
  goto L_12530242;
L_1252f83b:;
  /* 1252f83b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f83f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f842 jne 0x1252f877 */
  if (!C.zf) goto L_1252f877;
  /* 1252f844 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1252f847 push edx */
  push32((uint32_t)(EDX));
  /* 1252f848 call 0x12530470 */
  push32(0x1252f84du); f_12530470();
  /* 1252f84d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f850 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1252f856 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f85d jge 0x1252f875 */
  if ((C.sf==C.of)) goto L_1252f875;
  /* 1252f85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f862 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1252f864 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252f867 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1252f86d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252f86f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1252f875:;
  /* 1252f875 jmp 0x1252f88e */
  goto L_1252f88e;
L_1252f877:;
  /* 1252f877 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1252f87d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252f880 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f884 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1252f888 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1252f88e:;
  /* 1252f88e jmp 0x12530242 */
  goto L_12530242;
L_1252f893:;
  /* 1252f893 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1252f89d jmp 0x12530242 */
  goto L_12530242;
L_1252f8a2:;
  /* 1252f8a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f8a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f8a9 jne 0x1252f8d2 */
  if (!C.zf) goto L_1252f8d2;
  /* 1252f8ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1252f8ae push eax */
  push32((uint32_t)(EAX));
  /* 1252f8af call 0x12530470 */
  push32(0x1252f8b4u); f_12530470();
  /* 1252f8b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f8b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1252f8bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f8c4 jge 0x1252f8d0 */
  if ((C.sf==C.of)) goto L_1252f8d0;
  /* 1252f8c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1252f8d0:;
  /* 1252f8d0 jmp 0x1252f8e9 */
  goto L_1252f8e9;
L_1252f8d2:;
  /* 1252f8d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1252f8d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252f8db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f8df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1252f8e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1252f8e9:;
  /* 1252f8e9 jmp 0x12530242 */
  goto L_12530242;
L_1252f8ee:;
  /* 1252f8ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f8f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1252f8f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1252f8fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f901 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1252f907 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f90e ja 0x1252f97c */
  if ((!C.cf&&!C.zf)) goto L_1252f97c;
  /* 1252f910 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1252f916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252f918 mov al, byte ptr [ecx + 0x125302b1] */
  AL = (r8((uint32_t)(ECX + 0x125302b1)));
  /* 1252f91e jmp dword ptr [eax*4 + 0x1253029d] */
  switch (EAX) {
    case 0: goto L_1252f930;
    case 1: goto L_1252f969;
    case 2: goto L_1252f925;
    case 3: goto L_1252f973;
    case 4: goto L_1252f97c;
    default: x86_unimpl("switch@0x1252f91e out of table"); return;
  }
L_1252f925:;
  /* 1252f925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f928 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f92b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252f92e jmp 0x1252f97c */
  goto L_1252f97c;
L_1252f930:;
  /* 1252f930 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f933 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252f936 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f939 jne 0x1252f95b */
  if (!C.zf) goto L_1252f95b;
  /* 1252f93b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f93e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1252f942 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f945 jne 0x1252f95b */
  if (!C.zf) goto L_1252f95b;
  /* 1252f947 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252f94a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f94d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1252f950 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f953 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1252f956 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252f959 jmp 0x1252f967 */
  goto L_1252f967;
L_1252f95b:;
  /* 1252f95b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1252f962 jmp 0x1252f6f0 */
  goto L_1252f6f0;
L_1252f967:;
  /* 1252f967 jmp 0x1252f97c */
  goto L_1252f97c;
L_1252f969:;
  /* 1252f969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f96c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1252f96e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252f971 jmp 0x1252f97c */
  goto L_1252f97c;
L_1252f973:;
  /* 1252f973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f976 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1252f979 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252f97c:;
  /* 1252f97c jmp 0x12530242 */
  goto L_12530242;
L_1252f981:;
  /* 1252f981 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252f985 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1252f98b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1252f991 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252f994 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1252f99a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252f9a1 ja 0x12530067 */
  if ((!C.cf&&!C.zf)) goto L_12530067;
  /* 1252f9a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1252f9ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252f9af mov cl, byte ptr [edx + 0x1253031c] */
  CL = (r8((uint32_t)(EDX + 0x1253031c)));
  /* 1252f9b5 jmp dword ptr [ecx*4 + 0x125302e0] */
  switch (ECX) {
    case 0: goto L_1252f9bc;
    case 1: goto L_1252fc50;
    case 2: goto L_1252fae0;
    case 3: goto L_1252fd89;
    case 4: goto L_1252fa4b;
    case 5: goto L_1252f9d1;
    case 6: goto L_1252fd5b;
    case 7: goto L_1252fc60;
    case 8: goto L_1252fc05;
    case 9: goto L_1252fdd5;
    case 10: goto L_1252fd7f;
    case 11: goto L_1252faf6;
    case 12: goto L_1252fd73;
    case 13: goto L_1252fd95;
    case 14: goto L_12530067;
    default: x86_unimpl("switch@0x1252f9b5 out of table"); return;
  }
L_1252f9bc:;
  /* 1252f9bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f9bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1252f9c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252f9c6 jne 0x1252f9d1 */
  if (!C.zf) goto L_1252f9d1;
  /* 1252f9c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f9cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1252f9ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252f9d1:;
  /* 1252f9d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252f9d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1252f9da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252f9dc je 0x1252fa17 */
  if (C.zf) goto L_1252fa17;
  /* 1252f9de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1252f9e1 push eax */
  push32((uint32_t)(EAX));
  /* 1252f9e2 call 0x125304b0 */
  push32(0x1252f9e7u); f_125304b0();
  /* 1252f9e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252f9ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1252f9ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1252f9f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1252f9f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1252f9f9 push edx */
  push32((uint32_t)(EDX));
  /* 1252f9fa call 0x12531590 */
  push32(0x1252f9ffu); f_12531590();
  /* 1252f9ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fa02 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252fa05 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fa09 jge 0x1252fa15 */
  if ((C.sf==C.of)) goto L_1252fa15;
  /* 1252fa0b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1252fa15:;
  /* 1252fa15 jmp 0x1252fa3d */
  goto L_1252fa3d;
L_1252fa17:;
  /* 1252fa17 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1252fa1a push eax */
  push32((uint32_t)(EAX));
  /* 1252fa1b call 0x12530470 */
  push32(0x1252fa20u); f_12530470();
  /* 1252fa20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fa23 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1252fa2a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1252fa30 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1252fa36 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1252fa3d:;
  /* 1252fa3d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1252fa43 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1252fa46 jmp 0x12530067 */
  goto L_12530067;
L_1252fa4b:;
  /* 1252fa4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1252fa4e push eax */
  push32((uint32_t)(EAX));
  /* 1252fa4f call 0x12530470 */
  push32(0x1252fa54u); f_12530470();
  /* 1252fa54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fa57 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1252fa5d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fa64 je 0x1252fa72 */
  if (C.zf) goto L_1252fa72;
  /* 1252fa66 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1252fa6c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fa70 jne 0x1252fa8c */
  if (!C.zf) goto L_1252fa8c;
L_1252fa72:;
  /* 1252fa72 mov edx, dword ptr [0x12552fb0] */
  EDX = (r32((uint32_t)(0x12552fb0)));
  /* 1252fa78 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1252fa7b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fa7e push eax */
  push32((uint32_t)(EAX));
  /* 1252fa7f call 0x1252b4d0 */
  push32(0x1252fa84u); f_1252b4d0();
  /* 1252fa84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fa87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252fa8a jmp 0x1252fadb */
  goto L_1252fadb;
L_1252fa8c:;
  /* 1252fa8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fa8f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1252fa95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252fa97 je 0x1252fabc */
  if (C.zf) goto L_1252fabc;
  /* 1252fa99 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1252fa9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252faa2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252faa5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1252faab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1252faae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1252fab0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252fab3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1252faba jmp 0x1252fadb */
  goto L_1252fadb;
L_1252fabc:;
  /* 1252fabc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1252fac3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1252fac9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252facc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1252facf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1252fad5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1252fad8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1252fadb:;
  /* 1252fadb jmp 0x12530067 */
  goto L_12530067;
L_1252fae0:;
  /* 1252fae0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fae3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1252fae9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252faeb jne 0x1252faf6 */
  if (!C.zf) goto L_1252faf6;
  /* 1252faed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252faf0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1252faf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252faf6:;
  /* 1252faf6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fafd jne 0x1252fb0b */
  if (!C.zf) goto L_1252fb0b;
  /* 1252faff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1252fb09 jmp 0x1252fb17 */
  goto L_1252fb17;
L_1252fb0b:;
  /* 1252fb0b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1252fb11 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1252fb17:;
  /* 1252fb17 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1252fb1d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1252fb23 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1252fb26 push edx */
  push32((uint32_t)(EDX));
  /* 1252fb27 call 0x12530470 */
  push32(0x1252fb2cu); f_12530470();
  /* 1252fb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fb2f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252fb32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fb35 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fb3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fb3c je 0x1252fba6 */
  if (C.zf) goto L_1252fba6;
  /* 1252fb3e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fb42 jne 0x1252fb4d */
  if (!C.zf) goto L_1252fb4d;
  /* 1252fb44 mov ecx, dword ptr [0x12552fb4] */
  ECX = (r32((uint32_t)(0x12552fb4)));
  /* 1252fb4a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1252fb4d:;
  /* 1252fb4d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1252fb54 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fb57 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1252fb5d:;
  /* 1252fb5d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1252fb63 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1252fb69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252fb6c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1252fb72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fb74 je 0x1252fb96 */
  if (C.zf) goto L_1252fb96;
  /* 1252fb76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1252fb7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252fb7e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1252fb81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fb83 je 0x1252fb96 */
  if (C.zf) goto L_1252fb96;
  /* 1252fb85 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1252fb8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fb8e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1252fb94 jmp 0x1252fb5d */
  goto L_1252fb5d;
L_1252fb96:;
  /* 1252fb96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1252fb9c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252fb9f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1252fba1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1252fba4 jmp 0x1252fc00 */
  goto L_1252fc00;
L_1252fba6:;
  /* 1252fba6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fbaa jne 0x1252fbb4 */
  if (!C.zf) goto L_1252fbb4;
  /* 1252fbac mov eax, dword ptr [0x12552fb0] */
  EAX = (r32((uint32_t)(0x12552fb0)));
  /* 1252fbb1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1252fbb4:;
  /* 1252fbb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fbb7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1252fbbd:;
  /* 1252fbbd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1252fbc3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1252fbc9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252fbcc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1252fbd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252fbd4 je 0x1252fbf4 */
  if (C.zf) goto L_1252fbf4;
  /* 1252fbd6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1252fbdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252fbdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252fbe1 je 0x1252fbf4 */
  if (C.zf) goto L_1252fbf4;
  /* 1252fbe3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1252fbe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fbec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1252fbf2 jmp 0x1252fbbd */
  goto L_1252fbbd;
L_1252fbf4:;
  /* 1252fbf4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1252fbfa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252fbfd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1252fc00:;
  /* 1252fc00 jmp 0x12530067 */
  goto L_12530067;
L_1252fc05:;
  /* 1252fc05 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1252fc08 push edx */
  push32((uint32_t)(EDX));
  /* 1252fc09 call 0x12530470 */
  push32(0x1252fc0eu); f_12530470();
  /* 1252fc0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fc11 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1252fc17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fc1a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fc1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fc1f je 0x1252fc33 */
  if (C.zf) goto L_1252fc33;
  /* 1252fc21 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1252fc27 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1252fc2e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1252fc31 jmp 0x1252fc41 */
  goto L_1252fc41;
L_1252fc33:;
  /* 1252fc33 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1252fc39 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1252fc3f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1252fc41:;
  /* 1252fc41 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1252fc4b jmp 0x12530067 */
  goto L_12530067;
L_1252fc50:;
  /* 1252fc50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1252fc57 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1252fc5a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1252fc5d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1252fc60:;
  /* 1252fc60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fc63 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1252fc65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252fc68 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1252fc6e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1252fc71 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fc78 jge 0x1252fc86 */
  if ((C.sf==C.of)) goto L_1252fc86;
  /* 1252fc7a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1252fc84 jmp 0x1252fca2 */
  goto L_1252fca2;
L_1252fc86:;
  /* 1252fc86 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fc8d jne 0x1252fca2 */
  if (!C.zf) goto L_1252fca2;
  /* 1252fc8f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252fc93 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fc96 jne 0x1252fca2 */
  if (!C.zf) goto L_1252fca2;
  /* 1252fc98 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1252fca2:;
  /* 1252fca2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252fca5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fca8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1252fcab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252fcae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252fcb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252fcb3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252fcb6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1252fcbc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1252fcc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252fcc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1252fcc6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1252fccc push edx */
  push32((uint32_t)(EDX));
  /* 1252fccd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252fcd1 push eax */
  push32((uint32_t)(EAX));
  /* 1252fcd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fcd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1252fcd6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1252fcdc push edx */
  push32((uint32_t)(EDX));
  /* 1252fcdd call dword ptr [0x125533a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125533a0))), 0x1252fce3u);
  /* 1252fce3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fce9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fcee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fcf0 je 0x1252fd08 */
  if (C.zf) goto L_1252fd08;
  /* 1252fcf2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fcf9 jne 0x1252fd08 */
  if (!C.zf) goto L_1252fd08;
  /* 1252fcfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fcfe push ecx */
  push32((uint32_t)(ECX));
  /* 1252fcff call dword ptr [0x125533ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125533ac))), 0x1252fd05u);
  /* 1252fd05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252fd08:;
  /* 1252fd08 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1252fd0c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fd0f jne 0x1252fd2a */
  if (!C.zf) goto L_1252fd2a;
  /* 1252fd11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fd14 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fd19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fd1b jne 0x1252fd2a */
  if (!C.zf) goto L_1252fd2a;
  /* 1252fd1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fd20 push ecx */
  push32((uint32_t)(ECX));
  /* 1252fd21 call dword ptr [0x125533a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125533a4))), 0x1252fd27u);
  /* 1252fd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252fd2a:;
  /* 1252fd2a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fd2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252fd30 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fd33 jne 0x1252fd47 */
  if (!C.zf) goto L_1252fd47;
  /* 1252fd35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fd38 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1252fd3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252fd3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fd41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fd44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1252fd47:;
  /* 1252fd47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252fd4a push eax */
  push32((uint32_t)(EAX));
  /* 1252fd4b call 0x1252b4d0 */
  push32(0x1252fd50u); f_1252b4d0();
  /* 1252fd50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fd53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252fd56 jmp 0x12530067 */
  goto L_12530067;
L_1252fd5b:;
  /* 1252fd5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fd5e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1252fd61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252fd64 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1252fd6e jmp 0x1252fdf5 */
  goto L_1252fdf5;
L_1252fd73:;
  /* 1252fd73 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1252fd7d jmp 0x1252fdf5 */
  goto L_1252fdf5;
L_1252fd7f:;
  /* 1252fd7f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1252fd89:;
  /* 1252fd89 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1252fd93 jmp 0x1252fd9f */
  goto L_1252fd9f;
L_1252fd95:;
  /* 1252fd95 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1252fd9f:;
  /* 1252fd9f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1252fda9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fdac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1252fdb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252fdb4 je 0x1252fdd3 */
  if (C.zf) goto L_1252fdd3;
  /* 1252fdb6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1252fdbd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1252fdc3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fdc6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1252fdcc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1252fdd3:;
  /* 1252fdd3 jmp 0x1252fdf5 */
  goto L_1252fdf5;
L_1252fdd5:;
  /* 1252fdd5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1252fddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fde2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1252fde8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252fdea je 0x1252fdf5 */
  if (C.zf) goto L_1252fdf5;
  /* 1252fdec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fdef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1252fdf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252fdf5:;
  /* 1252fdf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fdf8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fdfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fdff je 0x1252fe1e */
  if (C.zf) goto L_1252fe1e;
  /* 1252fe01 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1252fe04 push ecx */
  push32((uint32_t)(ECX));
  /* 1252fe05 call 0x12530490 */
  push32(0x1252fe0au); f_12530490();
  /* 1252fe0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fe0d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1252fe13 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1252fe19 jmp 0x1252feaf */
  goto L_1252feaf;
L_1252fe1e:;
  /* 1252fe1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fe21 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1252fe24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252fe26 je 0x1252fe70 */
  if (C.zf) goto L_1252fe70;
  /* 1252fe28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fe2b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fe2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fe30 je 0x1252fe50 */
  if (C.zf) goto L_1252fe50;
  /* 1252fe32 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1252fe35 push ecx */
  push32((uint32_t)(ECX));
  /* 1252fe36 call 0x12530470 */
  push32(0x1252fe3bu); f_12530470();
  /* 1252fe3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fe3e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1252fe41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1252fe42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1252fe48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1252fe4e jmp 0x1252fe6e */
  goto L_1252fe6e;
L_1252fe50:;
  /* 1252fe50 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1252fe53 push edx */
  push32((uint32_t)(EDX));
  /* 1252fe54 call 0x12530470 */
  push32(0x1252fe59u); f_12530470();
  /* 1252fe59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fe5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252fe61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1252fe62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1252fe68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1252fe6e:;
  /* 1252fe6e jmp 0x1252feaf */
  goto L_1252feaf;
L_1252fe70:;
  /* 1252fe70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252fe73 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1252fe76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252fe78 je 0x1252fe95 */
  if (C.zf) goto L_1252fe95;
  /* 1252fe7a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1252fe7d push ecx */
  push32((uint32_t)(ECX));
  /* 1252fe7e call 0x12530470 */
  push32(0x1252fe83u); f_12530470();
  /* 1252fe83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fe86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1252fe87 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1252fe8d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1252fe93 jmp 0x1252feaf */
  goto L_1252feaf;
L_1252fe95:;
  /* 1252fe95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1252fe98 push edx */
  push32((uint32_t)(EDX));
  /* 1252fe99 call 0x12530470 */
  push32(0x1252fe9eu); f_12530470();
  /* 1252fe9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fea1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252fea3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1252fea9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1252feaf:;
  /* 1252feaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252feb2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1252feb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252feb7 je 0x1252fef7 */
  if (C.zf) goto L_1252fef7;
  /* 1252feb9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fec0 jg 0x1252fef7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1252fef7;
  /* 1252fec2 jl 0x1252fecd */
  if ((C.sf!=C.of)) goto L_1252fecd;
  /* 1252fec4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fecb jae 0x1252fef7 */
  if (!C.cf) goto L_1252fef7;
L_1252fecd:;
  /* 1252fecd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1252fed3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252fed5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1252fedb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252fede neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252fee0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1252fee6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1252feec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252feef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1252fef2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252fef5 jmp 0x1252ff0f */
  goto L_1252ff0f;
L_1252fef7:;
  /* 1252fef7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1252fefd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1252ff03 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1252ff09 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1252ff0f:;
  /* 1252ff0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ff12 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1252ff18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ff1a jne 0x1252ff37 */
  if (!C.zf) goto L_1252ff37;
  /* 1252ff1c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1252ff22 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1252ff28 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1252ff2b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1252ff31 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1252ff37:;
  /* 1252ff37 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ff3e jge 0x1252ff4c */
  if ((C.sf==C.of)) goto L_1252ff4c;
  /* 1252ff40 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1252ff4a jmp 0x1252ff55 */
  goto L_1252ff55;
L_1252ff4c:;
  /* 1252ff4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ff4f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1252ff52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252ff55:;
  /* 1252ff55 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1252ff5b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1252ff61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252ff63 jne 0x1252ff6c */
  if (!C.zf) goto L_1252ff6c;
  /* 1252ff65 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1252ff6c:;
  /* 1252ff6c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1252ff6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1252ff72:;
  /* 1252ff72 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1252ff78 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1252ff7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ff81 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1252ff87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ff89 jg 0x1252ff9f */
  if ((!C.zf&&C.sf==C.of)) goto L_1252ff9f;
  /* 1252ff8b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1252ff91 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1252ff97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ff99 je 0x12530020 */
  if (C.zf) goto L_12530020;
L_1252ff9f:;
  /* 1252ff9f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1252ffa5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1252ffa6 push edx */
  push32((uint32_t)(EDX));
  /* 1252ffa7 push eax */
  push32((uint32_t)(EAX));
  /* 1252ffa8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1252ffae push edx */
  push32((uint32_t)(EDX));
  /* 1252ffaf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1252ffb5 push eax */
  push32((uint32_t)(EAX));
  /* 1252ffb6 call 0x1252f330 */
  push32(0x1252ffbbu); f_1252f330();
  /* 1252ffbb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ffbe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1252ffc4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1252ffca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1252ffcb push edx */
  push32((uint32_t)(EDX));
  /* 1252ffcc push eax */
  push32((uint32_t)(EAX));
  /* 1252ffcd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1252ffd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ffd4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1252ffda push edx */
  push32((uint32_t)(EDX));
  /* 1252ffdb call 0x1252f2c0 */
  push32(0x1252ffe0u); f_1252f2c0();
  /* 1252ffe0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1252ffe6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1252ffec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252fff3 jle 0x12530007 */
  if ((C.zf||C.sf!=C.of)) goto L_12530007;
  /* 1252fff5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1252fffb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530001 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12530007:;
  /* 12530007 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1253000a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12530010 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12530012 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530015 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530018 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1253001b jmp 0x1252ff72 */
  goto L_1252ff72;
L_12530020:;
  /* 12530020 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12530023 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530026 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12530029 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1253002c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253002f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12530032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530035 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1253003a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253003c je 0x12530067 */
  if (C.zf) goto L_12530067;
  /* 1253003e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530041 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12530044 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530047 jne 0x1253004f */
  if (!C.zf) goto L_1253004f;
  /* 12530049 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253004d jne 0x12530067 */
  if (!C.zf) goto L_12530067;
L_1253004f:;
  /* 1253004f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530052 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530055 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12530058 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1253005b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1253005e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530064 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12530067:;
  /* 12530067 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253006e jne 0x12530242 */
  if (!C.zf) goto L_12530242;
  /* 12530074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530077 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1253007a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253007c je 0x125300cd */
  if (C.zf) goto L_125300cd;
  /* 1253007e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530081 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12530087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12530089 je 0x1253009b */
  if (C.zf) goto L_1253009b;
  /* 1253008b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12530092 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12530099 jmp 0x125300cd */
  goto L_125300cd;
L_1253009b:;
  /* 1253009b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253009e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125300a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125300a3 je 0x125300b5 */
  if (C.zf) goto L_125300b5;
  /* 125300a5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 125300ac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125300b3 jmp 0x125300cd */
  goto L_125300cd;
L_125300b5:;
  /* 125300b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125300b8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 125300bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125300bd je 0x125300cd */
  if (C.zf) goto L_125300cd;
  /* 125300bf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 125300c6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_125300cd:;
  /* 125300cd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 125300d3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125300d6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125300d9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 125300df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125300e2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 125300e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125300e7 jne 0x12530105 */
  if (!C.zf) goto L_12530105;
  /* 125300e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125300ef push eax */
  push32((uint32_t)(EAX));
  /* 125300f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125300f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125300f4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125300fa push edx */
  push32((uint32_t)(EDX));
  /* 125300fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125300fd call 0x125303e0 */
  push32(0x12530102u); f_125303e0();
  /* 12530102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12530105:;
  /* 12530105 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1253010b push eax */
  push32((uint32_t)(EAX));
  /* 1253010c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253010f push ecx */
  push32((uint32_t)(ECX));
  /* 12530110 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12530113 push edx */
  push32((uint32_t)(EDX));
  /* 12530114 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1253011a push eax */
  push32((uint32_t)(EAX));
  /* 1253011b call 0x12530420 */
  push32(0x12530120u); f_12530420();
  /* 12530120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530126 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12530129 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253012b je 0x12530153 */
  if (C.zf) goto L_12530153;
  /* 1253012d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530130 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12530133 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530135 jne 0x12530153 */
  if (!C.zf) goto L_12530153;
  /* 12530137 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1253013d push eax */
  push32((uint32_t)(EAX));
  /* 1253013e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530141 push ecx */
  push32((uint32_t)(ECX));
  /* 12530142 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12530148 push edx */
  push32((uint32_t)(EDX));
  /* 12530149 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1253014b call 0x125303e0 */
  push32(0x12530150u); f_125303e0();
  /* 12530150 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12530153:;
  /* 12530153 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530157 je 0x12530201 */
  if (C.zf) goto L_12530201;
  /* 1253015d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530161 jle 0x12530201 */
  if ((C.zf||C.sf!=C.of)) goto L_12530201;
  /* 12530167 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1253016a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12530170 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530173 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12530179:;
  /* 12530179 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1253017f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12530185 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530188 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1253018e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530190 je 0x125301ff */
  if (C.zf) goto L_125301ff;
  /* 12530192 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12530198 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1253019b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 125301a2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 125301a9 push eax */
  push32((uint32_t)(EAX));
  /* 125301aa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 125301b0 push ecx */
  push32((uint32_t)(ECX));
  /* 125301b1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 125301b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125301ba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 125301c0 call 0x12531590 */
  push32(0x125301c5u); f_12531590();
  /* 125301c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125301c8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 125301ce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125301d5 jg 0x125301d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_125301d9;
  /* 125301d7 jmp 0x125301ff */
  goto L_125301ff;
L_125301d9:;
  /* 125301d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125301df push eax */
  push32((uint32_t)(EAX));
  /* 125301e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125301e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125301e4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 125301ea push edx */
  push32((uint32_t)(EDX));
  /* 125301eb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 125301f1 push eax */
  push32((uint32_t)(EAX));
  /* 125301f2 call 0x12530420 */
  push32(0x125301f7u); f_12530420();
  /* 125301f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125301fa jmp 0x12530179 */
  goto L_12530179;
L_125301ff:;
  /* 125301ff jmp 0x1253021c */
  goto L_1253021c;
L_12530201:;
  /* 12530201 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12530207 push ecx */
  push32((uint32_t)(ECX));
  /* 12530208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253020b push edx */
  push32((uint32_t)(EDX));
  /* 1253020c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1253020f push eax */
  push32((uint32_t)(EAX));
  /* 12530210 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530213 push ecx */
  push32((uint32_t)(ECX));
  /* 12530214 call 0x12530420 */
  push32(0x12530219u); f_12530420();
  /* 12530219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1253021c:;
  /* 1253021c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253021f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12530222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530224 je 0x12530242 */
  if (C.zf) goto L_12530242;
  /* 12530226 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1253022c push eax */
  push32((uint32_t)(EAX));
  /* 1253022d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530230 push ecx */
  push32((uint32_t)(ECX));
  /* 12530231 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12530237 push edx */
  push32((uint32_t)(EDX));
  /* 12530238 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1253023a call 0x125303e0 */
  push32(0x1253023fu); f_125303e0();
  /* 1253023f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12530242:;
  /* 12530242 jmp 0x1252f654 */
  goto L_1252f654;
L_12530247:;
  /* 12530247 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1253024d pop edi */
  EDI = (pop32());
  /* 1253024e pop esi */
  ESI = (pop32());
  /* 1253024f pop ebx */
  EBX = (pop32());
  /* 12530250 mov esp, ebp */
  ESP = (EBP);
  /* 12530252 pop ebp */
  EBP = (pop32());
  /* 12530253 ret  */
  ESPCHK(0x1252f630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010360 @ 0x12530360 (119 bytes, 44 insns) */
void f_12530360(void) {
  FTRACE(0x12530360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530360 push ebp */
  push32((uint32_t)(EBP));
  /* 12530361 mov ebp, esp */
  EBP = (ESP);
  /* 12530363 push ecx */
  push32((uint32_t)(ECX));
  /* 12530364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530367 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1253036a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253036d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530370 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12530373 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530376 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253037a jl 0x125303a2 */
  if ((C.sf!=C.of)) goto L_125303a2;
  /* 1253037c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253037f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12530381 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12530384 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12530386 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1253038a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12530390 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12530393 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530396 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12530398 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253039b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253039e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125303a0 jmp 0x125303b5 */
  goto L_125303b5;
L_125303a2:;
  /* 125303a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125303a5 push edx */
  push32((uint32_t)(EDX));
  /* 125303a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125303a9 push eax */
  push32((uint32_t)(EAX));
  /* 125303aa call 0x1252f3b0 */
  push32(0x125303afu); f_1252f3b0();
  /* 125303af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125303b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125303b5:;
  /* 125303b5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125303b9 jne 0x125303c6 */
  if (!C.zf) goto L_125303c6;
  /* 125303bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125303be mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125303c4 jmp 0x125303d3 */
  goto L_125303d3;
L_125303c6:;
  /* 125303c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125303c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125303cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125303ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125303d1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125303d3:;
  /* 125303d3 mov esp, ebp */
  ESP = (EBP);
  /* 125303d5 pop ebp */
  EBP = (pop32());
  /* 125303d6 ret  */
  ESPCHK(0x12530360u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x125303e0 (53 bytes, 23 insns) */
void f_125303e0(void) {
  FTRACE(0x125303e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125303e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125303e1 mov ebp, esp */
  EBP = (ESP);
L_125303e3:;
  /* 125303e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125303e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125303e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125303ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125303ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125303f1 jle 0x12530413 */
  if ((C.zf||C.sf!=C.of)) goto L_12530413;
  /* 125303f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125303f6 push edx */
  push32((uint32_t)(EDX));
  /* 125303f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125303fa push eax */
  push32((uint32_t)(EAX));
  /* 125303fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125303fe push ecx */
  push32((uint32_t)(ECX));
  /* 125303ff call 0x12530360 */
  push32(0x12530404u); f_12530360();
  /* 12530404 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530407 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253040a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253040d jne 0x12530411 */
  if (!C.zf) goto L_12530411;
  /* 1253040f jmp 0x12530413 */
  goto L_12530413;
L_12530411:;
  /* 12530411 jmp 0x125303e3 */
  goto L_125303e3;
L_12530413:;
  /* 12530413 pop ebp */
  EBP = (pop32());
  /* 12530414 ret  */
  ESPCHK(0x125303e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x12530420 (74 bytes, 31 insns) */
void f_12530420(void) {
  FTRACE(0x12530420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530420 push ebp */
  push32((uint32_t)(EBP));
  /* 12530421 mov ebp, esp */
  EBP = (ESP);
  /* 12530423 push ecx */
  push32((uint32_t)(ECX));
L_12530424:;
  /* 12530424 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530427 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253042a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253042d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12530430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530432 jle 0x12530466 */
  if ((C.zf||C.sf!=C.of)) goto L_12530466;
  /* 12530434 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530437 push edx */
  push32((uint32_t)(EDX));
  /* 12530438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253043b push eax */
  push32((uint32_t)(EAX));
  /* 1253043c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253043f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12530442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12530445 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530448 push eax */
  push32((uint32_t)(EAX));
  /* 12530449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253044c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253044f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12530452 call 0x12530360 */
  push32(0x12530457u); f_12530360();
  /* 12530457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253045a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253045d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530460 jne 0x12530464 */
  if (!C.zf) goto L_12530464;
  /* 12530462 jmp 0x12530466 */
  goto L_12530466;
L_12530464:;
  /* 12530464 jmp 0x12530424 */
  goto L_12530424;
L_12530466:;
  /* 12530466 mov esp, ebp */
  ESP = (EBP);
  /* 12530468 pop ebp */
  EBP = (pop32());
  /* 12530469 ret  */
  ESPCHK(0x12530420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x12530470 (26 bytes, 12 insns) */
void f_12530470(void) {
  FTRACE(0x12530470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530470 push ebp */
  push32((uint32_t)(EBP));
  /* 12530471 mov ebp, esp */
  EBP = (ESP);
  /* 12530473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530476 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12530478 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253047b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253047e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12530480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530483 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12530485 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12530488 pop ebp */
  EBP = (pop32());
  /* 12530489 ret  */
  ESPCHK(0x12530470u, _esp0);
  ESP += 4; return;
}

/* FUN_10010490 @ 0x12530490 (31 bytes, 14 insns) */
void f_12530490(void) {
  FTRACE(0x12530490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530490 push ebp */
  push32((uint32_t)(EBP));
  /* 12530491 mov ebp, esp */
  EBP = (ESP);
  /* 12530493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530496 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12530498 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253049b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253049e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125304a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125304a5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125304a8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125304aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125304ad pop ebp */
  EBP = (pop32());
  /* 125304ae ret  */
  ESPCHK(0x12530490u, _esp0);
  ESP += 4; return;
}

/* FUN_100104b0 @ 0x125304b0 (27 bytes, 12 insns) */
void f_125304b0(void) {
  FTRACE(0x125304b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125304b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125304b1 mov ebp, esp */
  EBP = (ESP);
  /* 125304b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125304b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125304bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125304c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125304c5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 125304c9 pop ebp */
  EBP = (pop32());
  /* 125304ca ret  */
  ESPCHK(0x125304b0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x125304d0 (145 bytes, 42 insns) */
void f_125304d0(void) {
  FTRACE(0x125304d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125304d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125304d1 mov ebp, esp */
  EBP = (ESP);
  /* 125304d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125304d4 call 0x12530580 */
  push32(0x125304d9u); f_12530580();
  /* 125304d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125304de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125304e5 jmp 0x125304f0 */
  goto L_125304f0;
L_125304e7:;
  /* 125304e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125304ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125304ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125304f0:;
  /* 125304f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125304f4 jae 0x1253051a */
  if (!C.cf) goto L_1253051a;
  /* 125304f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125304f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125304fc cmp ecx, dword ptr [eax*8 + 0x12552fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12552fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530503 jne 0x12530518 */
  if (!C.zf) goto L_12530518;
  /* 12530505 call 0x12530570 */
  push32(0x1253050au); f_12530570();
  /* 1253050a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253050d mov ecx, dword ptr [edx*8 + 0x12552fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12552fbc)));
  /* 12530514 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12530516 jmp 0x1253055d */
  goto L_1253055d;
L_12530518:;
  /* 12530518 jmp 0x125304e7 */
  goto L_125304e7;
L_1253051a:;
  /* 1253051a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253051e jb 0x12530533 */
  if (C.cf) goto L_12530533;
  /* 12530520 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530524 ja 0x12530533 */
  if ((!C.cf&&!C.zf)) goto L_12530533;
  /* 12530526 call 0x12530570 */
  push32(0x1253052bu); f_12530570();
  /* 1253052b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12530531 jmp 0x1253055d */
  goto L_1253055d;
L_12530533:;
  /* 12530533 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253053a jb 0x12530552 */
  if (C.cf) goto L_12530552;
  /* 1253053c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530543 ja 0x12530552 */
  if ((!C.cf&&!C.zf)) goto L_12530552;
  /* 12530545 call 0x12530570 */
  push32(0x1253054au); f_12530570();
  /* 1253054a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12530550 jmp 0x1253055d */
  goto L_1253055d;
L_12530552:;
  /* 12530552 call 0x12530570 */
  push32(0x12530557u); f_12530570();
  /* 12530557 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1253055d:;
  /* 1253055d mov esp, ebp */
  ESP = (EBP);
  /* 1253055f pop ebp */
  EBP = (pop32());
  /* 12530560 ret  */
  ESPCHK(0x125304d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010570 @ 0x12530570 (13 bytes, 6 insns) */
void f_12530570(void) {
  FTRACE(0x12530570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530570 push ebp */
  push32((uint32_t)(EBP));
  /* 12530571 mov ebp, esp */
  EBP = (ESP);
  /* 12530573 call 0x125280e0 */
  push32(0x12530578u); f_125280e0();
  /* 12530578 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253057b pop ebp */
  EBP = (pop32());
  /* 1253057c ret  */
  ESPCHK(0x12530570u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x12530580 (13 bytes, 6 insns) */
void f_12530580(void) {
  FTRACE(0x12530580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530580 push ebp */
  push32((uint32_t)(EBP));
  /* 12530581 mov ebp, esp */
  EBP = (ESP);
  /* 12530583 call 0x125280e0 */
  push32(0x12530588u); f_125280e0();
  /* 12530588 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253058b pop ebp */
  EBP = (pop32());
  /* 1253058c ret  */
  ESPCHK(0x12530580u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x12530590 (664 bytes, 262 insns) [15 switch table(s)] */
void f_12530590(void) {
  FTRACE(0x12530590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530590 push ebp */
  push32((uint32_t)(EBP));
  /* 12530591 mov ebp, esp */
  EBP = (ESP);
  /* 12530593 push edi */
  push32((uint32_t)(EDI));
  /* 12530594 push esi */
  push32((uint32_t)(ESI));
  /* 12530595 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12530598 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253059b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1253059e mov eax, ecx */
  EAX = (ECX);
  /* 125305a0 mov edx, ecx */
  EDX = (ECX);
  /* 125305a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125305a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125305a6 jbe 0x125305b0 */
  if ((C.cf||C.zf)) goto L_125305b0;
  /* 125305a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125305aa jb 0x12530728 */
  if (C.cf) goto L_12530728;
L_125305b0:;
  /* 125305b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125305b6 jne 0x125305cc */
  if (!C.zf) goto L_125305cc;
  /* 125305b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125305bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125305be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125305c1 jb 0x125305ec */
  if (C.cf) goto L_125305ec;
  /* 125305c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125305c5 jmp dword ptr [edx*4 + 0x125306d8] */
  switch (EDX) {
    case 0: goto L_125306e8;
    case 1: goto L_125306f0;
    case 2: goto L_125306fc;
    case 3: goto L_12530710;
    default: x86_unimpl("switch@0x125305c5 out of table"); return;
  }
L_125305cc:;
  /* 125305cc mov eax, edi */
  EAX = (EDI);
  /* 125305ce mov edx, 3 */
  EDX = (0x3u);
  /* 125305d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125305d6 jb 0x125305e4 */
  if (C.cf) goto L_125305e4;
  /* 125305d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125305db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125305dd jmp dword ptr [eax*4 + 0x125305f0] */
  switch (EAX) {
    case 1: goto L_12530600;
    case 2: goto L_1253062c;
    case 3: goto L_12530650;
    default: x86_unimpl("switch@0x125305dd out of table"); return;
  }
L_125305e4:;
  /* 125305e4 jmp dword ptr [ecx*4 + 0x125306e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125306e8)))); return;
  /* 125305eb nop  */
  /* nop */
L_125305ec:;
  /* 125305ec jmp dword ptr [ecx*4 + 0x1253066c] */
  switch (ECX) {
    case 0: goto L_125306cf;
    case 1: goto L_125306bc;
    case 2: goto L_125306b4;
    case 3: goto L_125306ac;
    case 4: goto L_125306a4;
    case 5: goto L_1253069c;
    case 6: goto L_12530694;
    case 7: goto L_1253068c;
    default: x86_unimpl("switch@0x125305ec out of table"); return;
  }
  /* 125305f3 nop  */
  /* nop */
L_12530600:;
  /* 12530600 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12530602 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12530604 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12530606 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12530609 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1253060c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1253060f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12530612 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12530615 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12530618 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1253061b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253061e jb 0x125305ec */
  if (C.cf) goto L_125305ec;
  /* 12530620 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12530622 jmp dword ptr [edx*4 + 0x125306d8] */
  switch (EDX) {
    case 0: goto L_125306e8;
    case 1: goto L_125306f0;
    case 2: goto L_125306fc;
    case 3: goto L_12530710;
    default: x86_unimpl("switch@0x12530622 out of table"); return;
  }
  /* 12530629 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1253062c:;
  /* 1253062c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1253062e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12530630 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12530632 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12530635 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12530638 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1253063b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1253063e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12530641 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530644 jb 0x125305ec */
  if (C.cf) goto L_125305ec;
  /* 12530646 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12530648 jmp dword ptr [edx*4 + 0x125306d8] */
  switch (EDX) {
    case 0: goto L_125306e8;
    case 1: goto L_125306f0;
    case 2: goto L_125306fc;
    case 3: goto L_12530710;
    default: x86_unimpl("switch@0x12530648 out of table"); return;
  }
  /* 1253064f nop  */
  /* nop */
L_12530650:;
  /* 12530650 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12530652 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12530654 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12530656 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12530657 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1253065a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1253065b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253065e jb 0x125305ec */
  if (C.cf) goto L_125305ec;
  /* 12530660 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12530662 jmp dword ptr [edx*4 + 0x125306d8] */
  switch (EDX) {
    case 0: goto L_125306e8;
    case 1: goto L_125306f0;
    case 2: goto L_125306fc;
    case 3: goto L_12530710;
    default: x86_unimpl("switch@0x12530662 out of table"); return;
  }
  /* 12530669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1253068c:;
  /* 1253068c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12530690 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12530694:;
  /* 12530694 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12530698 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1253069c:;
  /* 1253069c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125306a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125306a4:;
  /* 125306a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125306a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125306ac:;
  /* 125306ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125306b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125306b4:;
  /* 125306b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125306b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125306bc:;
  /* 125306bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125306c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125306c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125306cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125306cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125306cf:;
  /* 125306cf jmp dword ptr [edx*4 + 0x125306d8] */
  switch (EDX) {
    case 0: goto L_125306e8;
    case 1: goto L_125306f0;
    case 2: goto L_125306fc;
    case 3: goto L_12530710;
    default: x86_unimpl("switch@0x125306cf out of table"); return;
  }
  /* 125306d6 mov edi, edi */
  EDI = (EDI);
L_125306e8:;
  /* 125306e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125306eb pop esi */
  ESI = (pop32());
  /* 125306ec pop edi */
  EDI = (pop32());
  /* 125306ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125306ee ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 125306ef nop  */
  /* nop */
L_125306f0:;
  /* 125306f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125306f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125306f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125306f7 pop esi */
  ESI = (pop32());
  /* 125306f8 pop edi */
  EDI = (pop32());
  /* 125306f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125306fa ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 125306fb nop  */
  /* nop */
L_125306fc:;
  /* 125306fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125306fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12530700 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12530703 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12530706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530709 pop esi */
  ESI = (pop32());
  /* 1253070a pop edi */
  EDI = (pop32());
  /* 1253070b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1253070c ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 1253070d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12530710:;
  /* 12530710 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12530712 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12530714 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12530717 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1253071a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1253071d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12530720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530723 pop esi */
  ESI = (pop32());
  /* 12530724 pop edi */
  EDI = (pop32());
  /* 12530725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12530726 ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 12530727 nop  */
  /* nop */
L_12530728:;
  /* 12530728 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1253072c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12530730 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12530736 jne 0x1253075c */
  if (!C.zf) goto L_1253075c;
  /* 12530738 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1253073b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1253073e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530741 jb 0x12530750 */
  if (C.cf) goto L_12530750;
  /* 12530743 std  */
  C.df=1;
  /* 12530744 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12530746 cld  */
  C.df=0;
  /* 12530747 jmp dword ptr [edx*4 + 0x12530870] */
  switch (EDX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x12530747 out of table"); return;
  }
  /* 1253074e mov edi, edi */
  EDI = (EDI);
L_12530750:;
  /* 12530750 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12530752 jmp dword ptr [ecx*4 + 0x12530820] */
  switch (ECX) {
    case 0: goto L_12530867;
    default: x86_unimpl("switch@0x12530752 out of table"); return;
  }
  /* 12530759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1253075c:;
  /* 1253075c mov eax, edi */
  EAX = (EDI);
  /* 1253075e mov edx, 3 */
  EDX = (0x3u);
  /* 12530763 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530766 jb 0x12530774 */
  if (C.cf) goto L_12530774;
  /* 12530768 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1253076b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253076d jmp dword ptr [eax*4 + 0x12530778] */
  switch (EAX) {
    case 1: goto L_12530788;
    case 2: goto L_125307a8;
    case 3: goto L_125307d0;
    default: x86_unimpl("switch@0x1253076d out of table"); return;
  }
L_12530774:;
  /* 12530774 jmp dword ptr [ecx*4 + 0x12530870] */
  switch (ECX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x12530774 out of table"); return;
  }
  /* 1253077b nop  */
  /* nop */
L_12530788:;
  /* 12530788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1253078b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1253078d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12530790 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12530791 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12530794 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12530795 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530798 jb 0x12530750 */
  if (C.cf) goto L_12530750;
  /* 1253079a std  */
  C.df=1;
  /* 1253079b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1253079d cld  */
  C.df=0;
  /* 1253079e jmp dword ptr [edx*4 + 0x12530870] */
  switch (EDX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x1253079e out of table"); return;
  }
  /* 125307a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125307a8:;
  /* 125307a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125307ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125307ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125307b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125307b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125307b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125307b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125307bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125307bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125307c2 jb 0x12530750 */
  if (C.cf) goto L_12530750;
  /* 125307c4 std  */
  C.df=1;
  /* 125307c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125307c7 cld  */
  C.df=0;
  /* 125307c8 jmp dword ptr [edx*4 + 0x12530870] */
  switch (EDX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x125307c8 out of table"); return;
  }
  /* 125307cf nop  */
  /* nop */
L_125307d0:;
  /* 125307d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125307d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125307d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125307d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125307db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125307de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125307e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125307e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125307e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125307ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125307ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125307f0 jb 0x12530750 */
  if (C.cf) goto L_12530750;
  /* 125307f6 std  */
  C.df=1;
  /* 125307f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125307f9 cld  */
  C.df=0;
  /* 125307fa jmp dword ptr [edx*4 + 0x12530870] */
  switch (EDX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x125307fa out of table"); return;
  }
  /* 12530801 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12530804 and al, 8 */
  { uint32_t _r=(AL)&(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12530806 push ebx */
  push32((uint32_t)(EBX));
  /* 12530807 adc ch, byte ptr [eax + ecx] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EAX + ECX*1))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1253080a push ebx */
  push32((uint32_t)(EBX));
  /* 1253080b adc dh, byte ptr [eax + ecx] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EAX + ECX*1))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1253080e push ebx */
  push32((uint32_t)(EBX));
  /* 1253080f adc bh, byte ptr [eax + ecx] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EAX + ECX*1))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12530812 push ebx */
  push32((uint32_t)(EBX));
  /* 12530813 adc al, byte ptr [eax + ecx + 0x53] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EAX + ECX*1 + 0x53))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12530817 adc cl, byte ptr [eax + ecx + 0x53] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX + ECX*1 + 0x53))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1253081b adc dl, byte ptr [eax + ecx + 0x53] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX + ECX*1 + 0x53))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12530824 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12530828 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1253082c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12530830 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12530834 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12530838 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1253083c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12530840 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12530844 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12530848 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1253084c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12530850 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12530854 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12530858 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1253085c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12530863 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12530865 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12530867:;
  /* 12530867 jmp dword ptr [edx*4 + 0x12530870] */
  switch (EDX) {
    case 0: goto L_12530880;
    case 1: goto L_12530888;
    case 2: goto L_12530898;
    case 3: goto L_125308ac;
    default: x86_unimpl("switch@0x12530867 out of table"); return;
  }
  /* 1253086e mov edi, edi */
  EDI = (EDI);
L_12530880:;
  /* 12530880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530883 pop esi */
  ESI = (pop32());
  /* 12530884 pop edi */
  EDI = (pop32());
  /* 12530885 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12530886 ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 12530887 nop  */
  /* nop */
L_12530888:;
  /* 12530888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1253088b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1253088e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530891 pop esi */
  ESI = (pop32());
  /* 12530892 pop edi */
  EDI = (pop32());
  /* 12530893 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12530894 ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 12530895 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12530898:;
  /* 12530898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1253089b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1253089e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125308a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125308a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125308a7 pop esi */
  ESI = (pop32());
  /* 125308a8 pop edi */
  EDI = (pop32());
  /* 125308a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125308aa ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
  /* 125308ab nop  */
  /* nop */
L_125308ac:;
  /* 125308ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125308af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125308b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125308b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125308b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125308bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125308be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125308c1 pop esi */
  ESI = (pop32());
  /* 125308c2 pop edi */
  EDI = (pop32());
  /* 125308c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125308c4 ret  */
  ESPCHK(0x12530590u, _esp0);
  ESP += 4; return;
}

/* FUN_100108d0 @ 0x125308d0 (421 bytes, 148 insns) */
void f_125308d0(void) {
  FTRACE(0x125308d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125308d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125308d1 mov ebp, esp */
  EBP = (ESP);
  /* 125308d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125308d5 push 0x125505a0 */
  push32((uint32_t)(0x125505a0u));
  /* 125308da push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 125308df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125308e5 push eax */
  push32((uint32_t)(EAX));
  /* 125308e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125308ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125308f0 push ebx */
  push32((uint32_t)(EBX));
  /* 125308f1 push esi */
  push32((uint32_t)(ESI));
  /* 125308f2 push edi */
  push32((uint32_t)(EDI));
  /* 125308f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125308f6 cmp dword ptr [0x12554b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125308fd jne 0x1253094e */
  if (!C.zf) goto L_1253094e;
  /* 125308ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12530902 push eax */
  push32((uint32_t)(EAX));
  /* 12530903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12530905 push 0x1255059c */
  push32((uint32_t)(0x1255059cu));
  /* 1253090a push 1 */
  push32((uint32_t)(0x1u));
  /* 1253090c call dword ptr [0x1255731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255731c))), 0x12530912u);
  /* 12530912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530914 je 0x12530922 */
  if (C.zf) goto L_12530922;
  /* 12530916 mov dword ptr [0x12554b3c], 1 */
  w32((uint32_t)(0x12554b3c), (0x1u));
  /* 12530920 jmp 0x1253094e */
  goto L_1253094e;
L_12530922:;
  /* 12530922 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12530925 push ecx */
  push32((uint32_t)(ECX));
  /* 12530926 push 1 */
  push32((uint32_t)(0x1u));
  /* 12530928 push 0x12550598 */
  push32((uint32_t)(0x12550598u));
  /* 1253092d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253092f push 0 */
  push32((uint32_t)(0x0u));
  /* 12530931 call dword ptr [0x1255732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255732c))), 0x12530937u);
  /* 12530937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530939 je 0x12530947 */
  if (C.zf) goto L_12530947;
  /* 1253093b mov dword ptr [0x12554b3c], 2 */
  w32((uint32_t)(0x12554b3c), (0x2u));
  /* 12530945 jmp 0x1253094e */
  goto L_1253094e;
L_12530947:;
  /* 12530947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530949 jmp 0x12530a78 */
  goto L_12530a78;
L_1253094e:;
  /* 1253094e cmp dword ptr [0x12554b3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554b3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530955 jne 0x12530985 */
  if (!C.zf) goto L_12530985;
  /* 12530957 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253095b jne 0x12530966 */
  if (!C.zf) goto L_12530966;
  /* 1253095d mov edx, dword ptr [0x12554b48] */
  EDX = (r32((uint32_t)(0x12554b48)));
  /* 12530963 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12530966:;
  /* 12530966 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530969 push eax */
  push32((uint32_t)(EAX));
  /* 1253096a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253096d push ecx */
  push32((uint32_t)(ECX));
  /* 1253096e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530971 push edx */
  push32((uint32_t)(EDX));
  /* 12530972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530975 push eax */
  push32((uint32_t)(EAX));
  /* 12530976 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12530979 push ecx */
  push32((uint32_t)(ECX));
  /* 1253097a call dword ptr [0x1255732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255732c))), 0x12530980u);
  /* 12530980 jmp 0x12530a78 */
  goto L_12530a78;
L_12530985:;
  /* 12530985 cmp dword ptr [0x12554b3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554b3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253098c jne 0x12530a76 */
  if (!C.zf) goto L_12530a76;
  /* 12530992 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530996 jne 0x125309a1 */
  if (!C.zf) goto L_125309a1;
  /* 12530998 mov edx, dword ptr [0x12554b58] */
  EDX = (r32((uint32_t)(0x12554b58)));
  /* 1253099e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_125309a1:;
  /* 125309a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125309a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125309a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125309a8 push eax */
  push32((uint32_t)(EAX));
  /* 125309a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125309ac push ecx */
  push32((uint32_t)(ECX));
  /* 125309ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125309b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125309b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125309b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125309b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125309ba push edx */
  push32((uint32_t)(EDX));
  /* 125309bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125309be push eax */
  push32((uint32_t)(EAX));
  /* 125309bf call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x125309c5u);
  /* 125309c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125309c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125309cc jne 0x125309d5 */
  if (!C.zf) goto L_125309d5;
  /* 125309ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125309d0 jmp 0x12530a78 */
  goto L_12530a78;
L_125309d5:;
  /* 125309d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125309dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125309df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125309e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125309e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125309e6 call 0x1252b840 */
  push32(0x125309ebu); f_1252b840();
  /* 125309eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 125309ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125309f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125309f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125309f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125309fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125309fc push edx */
  push32((uint32_t)(EDX));
  /* 125309fd push 0 */
  push32((uint32_t)(0x0u));
  /* 125309ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530a02 push eax */
  push32((uint32_t)(EAX));
  /* 12530a03 call 0x1252c410 */
  push32(0x12530a08u); f_1252c410();
  /* 12530a08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530a0b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12530a12 jmp 0x12530a2b */
  goto L_12530a2b;
  /* 12530a14 mov eax, 1 */
  EAX = (0x1u);
  /* 12530a19 ret  */
  ESPCHK(0x125308d0u, _esp0);
  ESP += 4; return;
  /* 12530a1a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12530a1d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12530a24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12530a2b:;
  /* 12530a2b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530a2f jne 0x12530a35 */
  if (!C.zf) goto L_12530a35;
  /* 12530a31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530a33 jmp 0x12530a78 */
  goto L_12530a78;
L_12530a35:;
  /* 12530a35 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530a38 push ecx */
  push32((uint32_t)(ECX));
  /* 12530a39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530a3c push edx */
  push32((uint32_t)(EDX));
  /* 12530a3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530a40 push eax */
  push32((uint32_t)(EAX));
  /* 12530a41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530a44 push ecx */
  push32((uint32_t)(ECX));
  /* 12530a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 12530a47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12530a4a push edx */
  push32((uint32_t)(EDX));
  /* 12530a4b call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12530a51u);
  /* 12530a51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12530a54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530a58 jne 0x12530a5e */
  if (!C.zf) goto L_12530a5e;
  /* 12530a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530a5c jmp 0x12530a78 */
  goto L_12530a78;
L_12530a5e:;
  /* 12530a5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530a61 push eax */
  push32((uint32_t)(EAX));
  /* 12530a62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12530a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12530a66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530a69 push edx */
  push32((uint32_t)(EDX));
  /* 12530a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530a6d push eax */
  push32((uint32_t)(EAX));
  /* 12530a6e call dword ptr [0x1255731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255731c))), 0x12530a74u);
  /* 12530a74 jmp 0x12530a78 */
  goto L_12530a78;
L_12530a76:;
  /* 12530a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12530a78:;
  /* 12530a78 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12530a7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12530a7e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12530a85 pop edi */
  EDI = (pop32());
  /* 12530a86 pop esi */
  ESI = (pop32());
  /* 12530a87 pop ebx */
  EBX = (pop32());
  /* 12530a88 mov esp, ebp */
  ESP = (EBP);
  /* 12530a8a pop ebp */
  EBP = (pop32());
  /* 12530a8b ret  */
  ESPCHK(0x125308d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a90 @ 0x12530a90 (727 bytes, 263 insns) */
void f_12530a90(void) {
  FTRACE(0x12530a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12530a91 mov ebp, esp */
  EBP = (ESP);
  /* 12530a93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12530a95 push 0x125505b0 */
  push32((uint32_t)(0x125505b0u));
  /* 12530a9a push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 12530a9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12530aa5 push eax */
  push32((uint32_t)(EAX));
  /* 12530aa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12530aad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 12530ab1 push esi */
  push32((uint32_t)(ESI));
  /* 12530ab2 push edi */
  push32((uint32_t)(EDI));
  /* 12530ab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12530ab6 cmp dword ptr [0x12554b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530abd jne 0x12530b16 */
  if (!C.zf) goto L_12530b16;
  /* 12530abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12530ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12530ac5 push 0x1255059c */
  push32((uint32_t)(0x1255059cu));
  /* 12530aca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12530acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12530ad1 call dword ptr [0x12557320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557320))), 0x12530ad7u);
  /* 12530ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530ad9 je 0x12530ae7 */
  if (C.zf) goto L_12530ae7;
  /* 12530adb mov dword ptr [0x12554b60], 1 */
  w32((uint32_t)(0x12554b60), (0x1u));
  /* 12530ae5 jmp 0x12530b16 */
  goto L_12530b16;
L_12530ae7:;
  /* 12530ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 12530aed push 0x12550598 */
  push32((uint32_t)(0x12550598u));
  /* 12530af2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12530af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530af9 call dword ptr [0x12557318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557318))), 0x12530affu);
  /* 12530aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530b01 je 0x12530b0f */
  if (C.zf) goto L_12530b0f;
  /* 12530b03 mov dword ptr [0x12554b60], 2 */
  w32((uint32_t)(0x12554b60), (0x2u));
  /* 12530b0d jmp 0x12530b16 */
  goto L_12530b16;
L_12530b0f:;
  /* 12530b0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530b11 jmp 0x12530d81 */
  goto L_12530d81;
L_12530b16:;
  /* 12530b16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530b1a jle 0x12530b2f */
  if ((C.zf||C.sf!=C.of)) goto L_12530b2f;
  /* 12530b1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530b1f push eax */
  push32((uint32_t)(EAX));
  /* 12530b20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12530b24 call 0x12530da0 */
  push32(0x12530b29u); f_12530da0();
  /* 12530b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530b2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12530b2f:;
  /* 12530b2f cmp dword ptr [0x12554b60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554b60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530b36 jne 0x12530b5b */
  if (!C.zf) goto L_12530b5b;
  /* 12530b38 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12530b3b push edx */
  push32((uint32_t)(EDX));
  /* 12530b3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12530b3f push eax */
  push32((uint32_t)(EAX));
  /* 12530b40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12530b44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530b47 push edx */
  push32((uint32_t)(EDX));
  /* 12530b48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530b4b push eax */
  push32((uint32_t)(EAX));
  /* 12530b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530b4f push ecx */
  push32((uint32_t)(ECX));
  /* 12530b50 call dword ptr [0x12557318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557318))), 0x12530b56u);
  /* 12530b56 jmp 0x12530d81 */
  goto L_12530d81;
L_12530b5b:;
  /* 12530b5b cmp dword ptr [0x12554b60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554b60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530b62 jne 0x12530d7f */
  if (!C.zf) goto L_12530d7f;
  /* 12530b68 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530b6c jne 0x12530b77 */
  if (!C.zf) goto L_12530b77;
  /* 12530b6e mov edx, dword ptr [0x12554b58] */
  EDX = (r32((uint32_t)(0x12554b58)));
  /* 12530b74 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12530b77:;
  /* 12530b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530b7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530b7e push eax */
  push32((uint32_t)(EAX));
  /* 12530b7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12530b83 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12530b86 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12530b88 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530b8a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12530b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530b90 push edx */
  push32((uint32_t)(EDX));
  /* 12530b91 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12530b94 push eax */
  push32((uint32_t)(EAX));
  /* 12530b95 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12530b9bu);
  /* 12530b9b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12530b9e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530ba2 jne 0x12530bab */
  if (!C.zf) goto L_12530bab;
  /* 12530ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530ba6 jmp 0x12530d81 */
  goto L_12530d81;
L_12530bab:;
  /* 12530bab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12530bb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12530bb5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12530bb7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530bba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12530bbc call 0x1252b840 */
  push32(0x12530bc1u); f_1252b840();
  /* 12530bc1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12530bc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12530bc7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12530bca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12530bcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12530bd4 jmp 0x12530bed */
  goto L_12530bed;
  /* 12530bd6 mov eax, 1 */
  EAX = (0x1u);
  /* 12530bdb ret  */
  ESPCHK(0x12530a90u, _esp0);
  ESP += 4; return;
  /* 12530bdc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12530bdf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12530be6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12530bed:;
  /* 12530bed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530bf1 jne 0x12530bfa */
  if (!C.zf) goto L_12530bfa;
  /* 12530bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530bf5 jmp 0x12530d81 */
  goto L_12530d81;
L_12530bfa:;
  /* 12530bfa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12530bfd push edx */
  push32((uint32_t)(EDX));
  /* 12530bfe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530c01 push eax */
  push32((uint32_t)(EAX));
  /* 12530c02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12530c05 push ecx */
  push32((uint32_t)(ECX));
  /* 12530c06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530c09 push edx */
  push32((uint32_t)(EDX));
  /* 12530c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12530c0c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12530c0f push eax */
  push32((uint32_t)(EAX));
  /* 12530c10 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12530c16u);
  /* 12530c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530c18 jne 0x12530c21 */
  if (!C.zf) goto L_12530c21;
  /* 12530c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530c1c jmp 0x12530d81 */
  goto L_12530d81;
L_12530c21:;
  /* 12530c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530c25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12530c28 push ecx */
  push32((uint32_t)(ECX));
  /* 12530c29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530c2c push edx */
  push32((uint32_t)(EDX));
  /* 12530c2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530c30 push eax */
  push32((uint32_t)(EAX));
  /* 12530c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530c34 push ecx */
  push32((uint32_t)(ECX));
  /* 12530c35 call dword ptr [0x12557320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557320))), 0x12530c3bu);
  /* 12530c3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12530c3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530c42 jne 0x12530c4b */
  if (!C.zf) goto L_12530c4b;
  /* 12530c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530c46 jmp 0x12530d81 */
  goto L_12530d81;
L_12530c4b:;
  /* 12530c4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530c4e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12530c54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530c56 je 0x12530c9b */
  if (C.zf) goto L_12530c9b;
  /* 12530c58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530c5c je 0x12530c96 */
  if (C.zf) goto L_12530c96;
  /* 12530c5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12530c61 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530c64 jle 0x12530c6d */
  if ((C.zf||C.sf!=C.of)) goto L_12530c6d;
  /* 12530c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530c68 jmp 0x12530d81 */
  goto L_12530d81;
L_12530c6d:;
  /* 12530c6d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12530c70 push ecx */
  push32((uint32_t)(ECX));
  /* 12530c71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12530c74 push edx */
  push32((uint32_t)(EDX));
  /* 12530c75 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12530c78 push eax */
  push32((uint32_t)(EAX));
  /* 12530c79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530c7c push ecx */
  push32((uint32_t)(ECX));
  /* 12530c7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530c80 push edx */
  push32((uint32_t)(EDX));
  /* 12530c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530c84 push eax */
  push32((uint32_t)(EAX));
  /* 12530c85 call dword ptr [0x12557320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557320))), 0x12530c8bu);
  /* 12530c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530c8d jne 0x12530c96 */
  if (!C.zf) goto L_12530c96;
  /* 12530c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530c91 jmp 0x12530d81 */
  goto L_12530d81;
L_12530c96:;
  /* 12530c96 jmp 0x12530d7a */
  goto L_12530d7a;
L_12530c9b:;
  /* 12530c9b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12530c9e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12530ca1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12530ca8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12530cab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12530cad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530cb0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12530cb2 call 0x1252b840 */
  push32(0x12530cb7u); f_1252b840();
  /* 12530cb7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12530cba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12530cbd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12530cc0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12530cc3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12530cca jmp 0x12530ce3 */
  goto L_12530ce3;
  /* 12530ccc mov eax, 1 */
  EAX = (0x1u);
  /* 12530cd1 ret  */
  ESPCHK(0x12530a90u, _esp0);
  ESP += 4; return;
  /* 12530cd2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12530cd5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12530cdc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12530ce3:;
  /* 12530ce3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530ce7 jne 0x12530cf0 */
  if (!C.zf) goto L_12530cf0;
  /* 12530ce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530ceb jmp 0x12530d81 */
  goto L_12530d81;
L_12530cf0:;
  /* 12530cf0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12530cf3 push eax */
  push32((uint32_t)(EAX));
  /* 12530cf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12530cf8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12530cfb push edx */
  push32((uint32_t)(EDX));
  /* 12530cfc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12530cff push eax */
  push32((uint32_t)(EAX));
  /* 12530d00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530d03 push ecx */
  push32((uint32_t)(ECX));
  /* 12530d04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530d07 push edx */
  push32((uint32_t)(EDX));
  /* 12530d08 call dword ptr [0x12557320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557320))), 0x12530d0eu);
  /* 12530d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12530d10 jne 0x12530d16 */
  if (!C.zf) goto L_12530d16;
  /* 12530d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530d14 jmp 0x12530d81 */
  goto L_12530d81;
L_12530d16:;
  /* 12530d16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530d1a jne 0x12530d4a */
  if (!C.zf) goto L_12530d4a;
  /* 12530d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12530d27 push eax */
  push32((uint32_t)(EAX));
  /* 12530d28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530d2b push ecx */
  push32((uint32_t)(ECX));
  /* 12530d2c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12530d31 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12530d34 push edx */
  push32((uint32_t)(EDX));
  /* 12530d35 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12530d3bu);
  /* 12530d3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12530d3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530d42 jne 0x12530d48 */
  if (!C.zf) goto L_12530d48;
  /* 12530d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530d46 jmp 0x12530d81 */
  goto L_12530d81;
L_12530d48:;
  /* 12530d48 jmp 0x12530d7a */
  goto L_12530d7a;
L_12530d4a:;
  /* 12530d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12530d4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12530d51 push eax */
  push32((uint32_t)(EAX));
  /* 12530d52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12530d55 push ecx */
  push32((uint32_t)(ECX));
  /* 12530d56 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12530d59 push edx */
  push32((uint32_t)(EDX));
  /* 12530d5a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12530d5d push eax */
  push32((uint32_t)(EAX));
  /* 12530d5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12530d63 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12530d66 push ecx */
  push32((uint32_t)(ECX));
  /* 12530d67 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12530d6du);
  /* 12530d6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12530d70 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530d74 jne 0x12530d7a */
  if (!C.zf) goto L_12530d7a;
  /* 12530d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530d78 jmp 0x12530d81 */
  goto L_12530d81;
L_12530d7a:;
  /* 12530d7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12530d7d jmp 0x12530d81 */
  goto L_12530d81;
L_12530d7f:;
  /* 12530d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12530d81:;
  /* 12530d81 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12530d84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12530d87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12530d8e pop edi */
  EDI = (pop32());
  /* 12530d8f pop esi */
  ESI = (pop32());
  /* 12530d90 pop ebx */
  EBX = (pop32());
  /* 12530d91 mov esp, ebp */
  ESP = (EBP);
  /* 12530d93 pop ebp */
  EBP = (pop32());
  /* 12530d94 ret  */
  ESPCHK(0x12530a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010da0 @ 0x12530da0 (80 bytes, 32 insns) */
void f_12530da0(void) {
  FTRACE(0x12530da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12530da1 mov ebp, esp */
  EBP = (ESP);
  /* 12530da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530da9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12530dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530daf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12530db2:;
  /* 12530db2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12530db5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12530db8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530dbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12530dbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530dc0 je 0x12530dd7 */
  if (C.zf) goto L_12530dd7;
  /* 12530dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530dc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12530dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530dca je 0x12530dd7 */
  if (C.zf) goto L_12530dd7;
  /* 12530dcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530dcf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12530dd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12530dd5 jmp 0x12530db2 */
  goto L_12530db2;
L_12530dd7:;
  /* 12530dd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530dda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12530ddd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12530ddf jne 0x12530de9 */
  if (!C.zf) goto L_12530de9;
  /* 12530de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530de4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530de7 jmp 0x12530dec */
  goto L_12530dec;
L_12530de9:;
  /* 12530de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12530dec:;
  /* 12530dec mov esp, ebp */
  ESP = (EBP);
  /* 12530dee pop ebp */
  EBP = (pop32());
  /* 12530def ret  */
  ESPCHK(0x12530da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010df0 @ 0x12530df0 (130 bytes, 43 insns) */
void f_12530df0(void) {
  FTRACE(0x12530df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12530df1 mov ebp, esp */
  EBP = (ESP);
  /* 12530df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12530df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530df7 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530dfd jae 0x12530e21 */
  if (!C.cf) goto L_12530e21;
  /* 12530dff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12530e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12530e0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12530e0e mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12530e15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12530e1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12530e1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12530e1f jne 0x12530e3c */
  if (!C.zf) goto L_12530e3c;
L_12530e21:;
  /* 12530e21 call 0x12530570 */
  push32(0x12530e26u); f_12530570();
  /* 12530e26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12530e2c call 0x12530580 */
  push32(0x12530e31u); f_12530580();
  /* 12530e31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12530e37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12530e3a jmp 0x12530e6e */
  goto L_12530e6e;
L_12530e3c:;
  /* 12530e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e3f push edx */
  push32((uint32_t)(EDX));
  /* 12530e40 call 0x12531d90 */
  push32(0x12530e45u); f_12531d90();
  /* 12530e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530e48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530e4b push eax */
  push32((uint32_t)(EAX));
  /* 12530e4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530e4f push ecx */
  push32((uint32_t)(ECX));
  /* 12530e50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e53 push edx */
  push32((uint32_t)(EDX));
  /* 12530e54 call 0x12530e80 */
  push32(0x12530e59u); f_12530e80();
  /* 12530e59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530e5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12530e5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e62 push eax */
  push32((uint32_t)(EAX));
  /* 12530e63 call 0x12531e20 */
  push32(0x12530e68u); f_12531e20();
  /* 12530e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12530e6e:;
  /* 12530e6e mov esp, ebp */
  ESP = (EBP);
  /* 12530e70 pop ebp */
  EBP = (pop32());
  /* 12530e71 ret  */
  ESPCHK(0x12530df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e80 @ 0x12530e80 (178 bytes, 56 insns) */
void f_12530e80(void) {
  FTRACE(0x12530e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12530e81 mov ebp, esp */
  EBP = (ESP);
  /* 12530e83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530e89 push eax */
  push32((uint32_t)(EAX));
  /* 12530e8a call 0x12531c10 */
  push32(0x12530e8fu); f_12531c10();
  /* 12530e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530e92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12530e95 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530e99 jne 0x12530eae */
  if (!C.zf) goto L_12530eae;
  /* 12530e9b call 0x12530570 */
  push32(0x12530ea0u); f_12530570();
  /* 12530ea0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12530ea6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12530ea9 jmp 0x12530f2e */
  goto L_12530f2e;
L_12530eae:;
  /* 12530eae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12530eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12530eb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530eb7 push edx */
  push32((uint32_t)(EDX));
  /* 12530eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12530ebb push eax */
  push32((uint32_t)(EAX));
  /* 12530ebc call dword ptr [0x12557310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557310))), 0x12530ec2u);
  /* 12530ec2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12530ec5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530ec9 jne 0x12530ed6 */
  if (!C.zf) goto L_12530ed6;
  /* 12530ecb call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x12530ed1u);
  /* 12530ed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12530ed4 jmp 0x12530edd */
  goto L_12530edd;
L_12530ed6:;
  /* 12530ed6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12530edd:;
  /* 12530edd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530ee1 je 0x12530ef4 */
  if (C.zf) goto L_12530ef4;
  /* 12530ee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12530ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 12530ee7 call 0x125304d0 */
  push32(0x12530eecu); f_125304d0();
  /* 12530eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530eef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12530ef2 jmp 0x12530f2e */
  goto L_12530f2e;
L_12530ef4:;
  /* 12530ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530ef7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12530efa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530efd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12530f00 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12530f03 mov ecx, dword ptr [edx*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 12530f0a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12530f0e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12530f11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12530f17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12530f1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12530f20 mov eax, dword ptr [eax*4 + 0x12556320] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12530f27 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12530f2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12530f2e:;
  /* 12530f2e mov esp, ebp */
  ESP = (EBP);
  /* 12530f30 pop ebp */
  EBP = (pop32());
  /* 12530f31 ret  */
  ESPCHK(0x12530e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f40 @ 0x12530f40 (130 bytes, 43 insns) */
void f_12530f40(void) {
  FTRACE(0x12530f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12530f41 mov ebp, esp */
  EBP = (ESP);
  /* 12530f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12530f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f47 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530f4d jae 0x12530f71 */
  if (!C.cf) goto L_12530f71;
  /* 12530f4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12530f55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12530f5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12530f5e mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12530f65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12530f6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12530f6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12530f6f jne 0x12530f8c */
  if (!C.zf) goto L_12530f8c;
L_12530f71:;
  /* 12530f71 call 0x12530570 */
  push32(0x12530f76u); f_12530570();
  /* 12530f76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12530f7c call 0x12530580 */
  push32(0x12530f81u); f_12530580();
  /* 12530f81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12530f87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12530f8a jmp 0x12530fbe */
  goto L_12530fbe;
L_12530f8c:;
  /* 12530f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530f8f push edx */
  push32((uint32_t)(EDX));
  /* 12530f90 call 0x12531d90 */
  push32(0x12530f95u); f_12531d90();
  /* 12530f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530f98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12530f9b push eax */
  push32((uint32_t)(EAX));
  /* 12530f9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12530f9f push ecx */
  push32((uint32_t)(ECX));
  /* 12530fa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530fa3 push edx */
  push32((uint32_t)(EDX));
  /* 12530fa4 call 0x12530fd0 */
  push32(0x12530fa9u); f_12530fd0();
  /* 12530fa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530fac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12530faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530fb2 push eax */
  push32((uint32_t)(EAX));
  /* 12530fb3 call 0x12531e20 */
  push32(0x12530fb8u); f_12531e20();
  /* 12530fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12530fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12530fbe:;
  /* 12530fbe mov esp, ebp */
  ESP = (EBP);
  /* 12530fc0 pop ebp */
  EBP = (pop32());
  /* 12530fc1 ret  */
  ESPCHK(0x12530f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x12530fd0 (627 bytes, 182 insns) */
void f_12530fd0(void) {
  FTRACE(0x12530fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12530fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12530fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12530fd3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12530fd9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12530fe0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12530fe3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12530fe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12530fed jne 0x12530ff6 */
  if (!C.zf) goto L_12530ff6;
  /* 12530fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12530ff1 jmp 0x1253123f */
  goto L_1253123f;
L_12530ff6:;
  /* 12530ff6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530ff9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12530ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12530fff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531002 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531005 mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 1253100c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12531011 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12531014 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531016 je 0x12531028 */
  if (C.zf) goto L_12531028;
  /* 12531018 push 2 */
  push32((uint32_t)(0x2u));
  /* 1253101a push 0 */
  push32((uint32_t)(0x0u));
  /* 1253101c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253101f push edx */
  push32((uint32_t)(EDX));
  /* 12531020 call 0x12530e80 */
  push32(0x12531025u); f_12530e80();
  /* 12531025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12531028:;
  /* 12531028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253102b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1253102e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531031 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531034 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531037 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 1253103e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12531043 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12531048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253104a je 0x1253115c */
  if (C.zf) goto L_1253115c;
  /* 12531050 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531053 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12531056 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1253105d:;
  /* 1253105d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531060 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531063 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531066 jae 0x1253115a */
  if (!C.cf) goto L_1253115a;
  /* 1253106c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12531072 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12531075:;
  /* 12531075 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531078 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1253107e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531080 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531086 jge 0x125310e7 */
  if ((C.sf==C.of)) goto L_125310e7;
  /* 12531088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253108b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253108e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531091 jae 0x125310e7 */
  if (!C.cf) goto L_125310e7;
  /* 12531093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531096 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12531098 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1253109e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125310a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125310a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125310a7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 125310ae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125310b1 jne 0x125310d1 */
  if (!C.zf) goto L_125310d1;
  /* 125310b3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 125310b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125310bc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 125310c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125310c5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 125310c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125310cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125310ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125310d1:;
  /* 125310d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125310d4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 125310da mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125310dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125310df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125310e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125310e5 jmp 0x12531075 */
  goto L_12531075;
L_125310e7:;
  /* 125310e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125310e9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 125310ef push edx */
  push32((uint32_t)(EDX));
  /* 125310f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125310f3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 125310f9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125310fb push eax */
  push32((uint32_t)(EAX));
  /* 125310fc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12531102 push edx */
  push32((uint32_t)(EDX));
  /* 12531103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531106 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531109 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253110c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1253110f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531112 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531119 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1253111c push eax */
  push32((uint32_t)(EAX));
  /* 1253111d call dword ptr [0x12557398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557398))), 0x12531123u);
  /* 12531123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12531125 je 0x1253114a */
  if (C.zf) goto L_1253114a;
  /* 12531127 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253112a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531130 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12531133 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531136 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1253113c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253113e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531144 jge 0x12531148 */
  if ((C.sf==C.of)) goto L_12531148;
  /* 12531146 jmp 0x1253115a */
  goto L_1253115a;
L_12531148:;
  /* 12531148 jmp 0x12531155 */
  goto L_12531155;
L_1253114a:;
  /* 1253114a call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x12531150u);
  /* 12531150 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12531153 jmp 0x1253115a */
  goto L_1253115a;
L_12531155:;
  /* 12531155 jmp 0x1253105d */
  goto L_1253105d;
L_1253115a:;
  /* 1253115a jmp 0x125311ac */
  goto L_125311ac;
L_1253115c:;
  /* 1253115c push 0 */
  push32((uint32_t)(0x0u));
  /* 1253115e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12531164 push ecx */
  push32((uint32_t)(ECX));
  /* 12531165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12531168 push edx */
  push32((uint32_t)(EDX));
  /* 12531169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253116c push eax */
  push32((uint32_t)(EAX));
  /* 1253116d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531170 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531176 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531179 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253117c mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531183 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12531186 push ecx */
  push32((uint32_t)(ECX));
  /* 12531187 call dword ptr [0x12557398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557398))), 0x1253118du);
  /* 1253118d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253118f je 0x125311a3 */
  if (C.zf) goto L_125311a3;
  /* 12531191 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12531198 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1253119e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125311a1 jmp 0x125311ac */
  goto L_125311ac;
L_125311a3:;
  /* 125311a3 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x125311a9u);
  /* 125311a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125311ac:;
  /* 125311ac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125311b0 jne 0x12531236 */
  if (!C.zf) goto L_12531236;
  /* 125311b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125311ba je 0x125311ea */
  if (C.zf) goto L_125311ea;
  /* 125311bc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125311c0 jne 0x125311d9 */
  if (!C.zf) goto L_125311d9;
  /* 125311c2 call 0x12530570 */
  push32(0x125311c7u); f_12530570();
  /* 125311c7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125311cd call 0x12530580 */
  push32(0x125311d2u); f_12530580();
  /* 125311d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125311d5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125311d7 jmp 0x125311e5 */
  goto L_125311e5;
L_125311d9:;
  /* 125311d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125311dc push edx */
  push32((uint32_t)(EDX));
  /* 125311dd call 0x125304d0 */
  push32(0x125311e2u); f_125304d0();
  /* 125311e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125311e5:;
  /* 125311e5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125311e8 jmp 0x1253123f */
  goto L_1253123f;
L_125311ea:;
  /* 125311ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125311ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125311f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125311f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125311f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125311f9 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531200 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12531205 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12531208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253120a je 0x1253121b */
  if (C.zf) goto L_1253121b;
  /* 1253120c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253120f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12531212 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531215 jne 0x1253121b */
  if (!C.zf) goto L_1253121b;
  /* 12531217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12531219 jmp 0x1253123f */
  goto L_1253123f;
L_1253121b:;
  /* 1253121b call 0x12530570 */
  push32(0x12531220u); f_12530570();
  /* 12531220 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12531226 call 0x12530580 */
  push32(0x1253122bu); f_12530580();
  /* 1253122b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12531231 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531234 jmp 0x1253123f */
  goto L_1253123f;
L_12531236:;
  /* 12531236 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12531239 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1253123f:;
  /* 1253123f mov esp, ebp */
  ESP = (EBP);
  /* 12531241 pop ebp */
  EBP = (pop32());
  /* 12531242 ret  */
  ESPCHK(0x12530fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x12531250 (199 bytes, 68 insns) */
void f_12531250(void) {
  FTRACE(0x12531250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531250 push ebp */
  push32((uint32_t)(EBP));
  /* 12531251 mov ebp, esp */
  EBP = (ESP);
  /* 12531253 push ecx */
  push32((uint32_t)(ECX));
  /* 12531254 push ebx */
  push32((uint32_t)(EBX));
  /* 12531255 push esi */
  push32((uint32_t)(ESI));
  /* 12531256 push edi */
  push32((uint32_t)(EDI));
L_12531257:;
  /* 12531257 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253125b jne 0x1253127b */
  if (!C.zf) goto L_1253127b;
  /* 1253125d push 0x125504fc */
  push32((uint32_t)(0x125504fcu));
  /* 12531262 push 0 */
  push32((uint32_t)(0x0u));
  /* 12531264 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12531266 push 0x125505c8 */
  push32((uint32_t)(0x125505c8u));
  /* 1253126b push 2 */
  push32((uint32_t)(0x2u));
  /* 1253126d call 0x12527760 */
  push32(0x12531272u); f_12527760();
  /* 12531272 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531275 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531278 jne 0x1253127b */
  if (!C.zf) goto L_1253127b;
  /* 1253127a int3  */
  x86_unimpl("int3 @ 0x1253127a");
L_1253127b:;
  /* 1253127b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253127d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253127f jne 0x12531257 */
  if (!C.zf) goto L_12531257;
  /* 12531281 mov ecx, dword ptr [0x12554b64] */
  ECX = (r32((uint32_t)(0x12554b64)));
  /* 12531287 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253128a mov dword ptr [0x12554b64], ecx */
  w32((uint32_t)(0x12554b64), (ECX));
  /* 12531290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531293 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12531296 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12531298 push 0x125505c8 */
  push32((uint32_t)(0x125505c8u));
  /* 1253129d push 2 */
  push32((uint32_t)(0x2u));
  /* 1253129f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125312a4 call 0x125286a0 */
  push32(0x125312a9u); f_125286a0();
  /* 125312a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125312ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125312b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312b5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125312b9 je 0x125312d6 */
  if (C.zf) goto L_125312d6;
  /* 125312bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312be mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125312c1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125312c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312c7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125312ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312cd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 125312d4 jmp 0x125312fb */
  goto L_125312fb;
L_125312d6:;
  /* 125312d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312d9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125312dc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125312df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312e2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125312e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312e8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125312eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312ee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125312f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312f4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_125312fb:;
  /* 125312fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125312fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531301 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12531304 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12531306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531309 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12531310 pop edi */
  EDI = (pop32());
  /* 12531311 pop esi */
  ESI = (pop32());
  /* 12531312 pop ebx */
  EBX = (pop32());
  /* 12531313 mov esp, ebp */
  ESP = (EBP);
  /* 12531315 pop ebp */
  EBP = (pop32());
  /* 12531316 ret  */
  ESPCHK(0x12531250u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12531320 (50 bytes, 17 insns) */
void f_12531320(void) {
  FTRACE(0x12531320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531320 push ebp */
  push32((uint32_t)(EBP));
  /* 12531321 mov ebp, esp */
  EBP = (ESP);
  /* 12531323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531326 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253132c jb 0x12531332 */
  if (C.cf) goto L_12531332;
  /* 1253132e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12531330 jmp 0x12531350 */
  goto L_12531350;
L_12531332:;
  /* 12531332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531335 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253133b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1253133e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531341 mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531348 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1253134d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12531350:;
  /* 12531350 pop ebp */
  EBP = (pop32());
  /* 12531351 ret  */
  ESPCHK(0x12531320u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x12531360 (300 bytes, 80 insns) */
void f_12531360(void) {
  FTRACE(0x12531360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531360 push ebp */
  push32((uint32_t)(EBP));
  /* 12531361 mov ebp, esp */
  EBP = (ESP);
  /* 12531363 push ecx */
  push32((uint32_t)(ECX));
  /* 12531364 cmp dword ptr [0x12556020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253136b jne 0x12531379 */
  if (!C.zf) goto L_12531379;
  /* 1253136d mov dword ptr [0x12556020], 0x200 */
  w32((uint32_t)(0x12556020), (0x200u));
  /* 12531377 jmp 0x1253138c */
  goto L_1253138c;
L_12531379:;
  /* 12531379 cmp dword ptr [0x12556020], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12556020))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531380 jge 0x1253138c */
  if ((C.sf==C.of)) goto L_1253138c;
  /* 12531382 mov dword ptr [0x12556020], 0x14 */
  w32((uint32_t)(0x12556020), (0x14u));
L_1253138c:;
  /* 1253138c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12531391 push 0x125505d4 */
  push32((uint32_t)(0x125505d4u));
  /* 12531396 push 2 */
  push32((uint32_t)(0x2u));
  /* 12531398 push 4 */
  push32((uint32_t)(0x4u));
  /* 1253139a mov eax, dword ptr [0x12556020] */
  EAX = (r32((uint32_t)(0x12556020)));
  /* 1253139f push eax */
  push32((uint32_t)(EAX));
  /* 125313a0 call 0x12528ab0 */
  push32(0x125313a5u); f_12528ab0();
  /* 125313a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125313a8 mov dword ptr [0x12554cd8], eax */
  w32((uint32_t)(0x12554cd8), (EAX));
  /* 125313ad cmp dword ptr [0x12554cd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125313b4 jne 0x125313f5 */
  if (!C.zf) goto L_125313f5;
  /* 125313b6 mov dword ptr [0x12556020], 0x14 */
  w32((uint32_t)(0x12556020), (0x14u));
  /* 125313c0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 125313c5 push 0x125505d4 */
  push32((uint32_t)(0x125505d4u));
  /* 125313ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125313cc push 4 */
  push32((uint32_t)(0x4u));
  /* 125313ce mov ecx, dword ptr [0x12556020] */
  ECX = (r32((uint32_t)(0x12556020)));
  /* 125313d4 push ecx */
  push32((uint32_t)(ECX));
  /* 125313d5 call 0x12528ab0 */
  push32(0x125313dau); f_12528ab0();
  /* 125313da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125313dd mov dword ptr [0x12554cd8], eax */
  w32((uint32_t)(0x12554cd8), (EAX));
  /* 125313e2 cmp dword ptr [0x12554cd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125313e9 jne 0x125313f5 */
  if (!C.zf) goto L_125313f5;
  /* 125313eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125313ed call 0x12527610 */
  push32(0x125313f2u); f_12527610();
  /* 125313f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125313f5:;
  /* 125313f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125313fc jmp 0x12531407 */
  goto L_12531407;
L_125313fe:;
  /* 125313fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531401 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531404 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12531407:;
  /* 12531407 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253140b jge 0x12531426 */
  if ((C.sf==C.of)) goto L_12531426;
  /* 1253140d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531410 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531413 add eax, 0x12553120 */
  { uint32_t _a=(EAX),_b=(0x12553120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531418 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253141b mov edx, dword ptr [0x12554cd8] */
  EDX = (r32((uint32_t)(0x12554cd8)));
  /* 12531421 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12531424 jmp 0x125313fe */
  goto L_125313fe;
L_12531426:;
  /* 12531426 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1253142d jmp 0x12531438 */
  goto L_12531438;
L_1253142f:;
  /* 1253142f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531432 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531435 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12531438:;
  /* 12531438 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253143c jge 0x12531488 */
  if ((C.sf==C.of)) goto L_12531488;
  /* 1253143e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531441 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531447 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1253144a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253144d mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531454 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531458 je 0x12531476 */
  if (C.zf) goto L_12531476;
  /* 1253145a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253145d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531460 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531463 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531466 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531469 mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531470 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531474 jne 0x12531486 */
  if (!C.zf) goto L_12531486;
L_12531476:;
  /* 12531476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531479 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1253147c mov dword ptr [ecx + 0x12553130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12553130), (0xffffffffu));
L_12531486:;
  /* 12531486 jmp 0x1253142f */
  goto L_1253142f;
L_12531488:;
  /* 12531488 mov esp, ebp */
  ESP = (EBP);
  /* 1253148a pop ebp */
  EBP = (pop32());
  /* 1253148b ret  */
  ESPCHK(0x12531360u, _esp0);
  ESP += 4; return;
}

/* FUN_10011490 @ 0x12531490 (26 bytes, 9 insns) */
void f_12531490(void) {
  FTRACE(0x12531490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531490 push ebp */
  push32((uint32_t)(EBP));
  /* 12531491 mov ebp, esp */
  EBP = (ESP);
  /* 12531493 call 0x12532090 */
  push32(0x12531498u); f_12532090();
  /* 12531498 movsx eax, byte ptr [0x12554980] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12554980))));
  /* 1253149f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125314a1 je 0x125314a8 */
  if (C.zf) goto L_125314a8;
  /* 125314a3 call 0x12531e50 */
  push32(0x125314a8u); f_12531e50();
L_125314a8:;
  /* 125314a8 pop ebp */
  EBP = (pop32());
  /* 125314a9 ret  */
  ESPCHK(0x12531490u, _esp0);
  ESP += 4; return;
}

/* FUN_100114b0 @ 0x125314b0 (61 bytes, 20 insns) */
void f_125314b0(void) {
  FTRACE(0x125314b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125314b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125314b1 mov ebp, esp */
  EBP = (ESP);
  /* 125314b3 cmp dword ptr [ebp + 8], 0x12553120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12553120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125314ba jb 0x125314de */
  if (C.cf) goto L_125314de;
  /* 125314bc cmp dword ptr [ebp + 8], 0x12553380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12553380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125314c3 ja 0x125314de */
  if ((!C.cf&&!C.zf)) goto L_125314de;
  /* 125314c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125314c8 sub eax, 0x12553120 */
  { uint32_t _a=(EAX),_b=(0x12553120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125314cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125314d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125314d3 push eax */
  push32((uint32_t)(EAX));
  /* 125314d4 call 0x1252c0a0 */
  push32(0x125314d9u); f_1252c0a0();
  /* 125314d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125314dc jmp 0x125314eb */
  goto L_125314eb;
L_125314de:;
  /* 125314de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125314e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125314e4 push ecx */
  push32((uint32_t)(ECX));
  /* 125314e5 call dword ptr [0x1255734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255734c))), 0x125314ebu);
L_125314eb:;
  /* 125314eb pop ebp */
  EBP = (pop32());
  /* 125314ec ret  */
  ESPCHK(0x125314b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x125314f0 (41 bytes, 16 insns) */
void f_125314f0(void) {
  FTRACE(0x125314f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125314f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125314f1 mov ebp, esp */
  EBP = (ESP);
  /* 125314f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125314f7 jge 0x1253150a */
  if ((C.sf==C.of)) goto L_1253150a;
  /* 125314f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125314fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125314ff push eax */
  push32((uint32_t)(EAX));
  /* 12531500 call 0x1252c0a0 */
  push32(0x12531505u); f_1252c0a0();
  /* 12531505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531508 jmp 0x12531517 */
  goto L_12531517;
L_1253150a:;
  /* 1253150a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253150d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531510 push ecx */
  push32((uint32_t)(ECX));
  /* 12531511 call dword ptr [0x1255734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255734c))), 0x12531517u);
L_12531517:;
  /* 12531517 pop ebp */
  EBP = (pop32());
  /* 12531518 ret  */
  ESPCHK(0x125314f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12531520 (61 bytes, 20 insns) */
void f_12531520(void) {
  FTRACE(0x12531520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531520 push ebp */
  push32((uint32_t)(EBP));
  /* 12531521 mov ebp, esp */
  EBP = (ESP);
  /* 12531523 cmp dword ptr [ebp + 8], 0x12553120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12553120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253152a jb 0x1253154e */
  if (C.cf) goto L_1253154e;
  /* 1253152c cmp dword ptr [ebp + 8], 0x12553380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12553380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531533 ja 0x1253154e */
  if ((!C.cf&&!C.zf)) goto L_1253154e;
  /* 12531535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531538 sub eax, 0x12553120 */
  { uint32_t _a=(EAX),_b=(0x12553120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253153d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531540 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531543 push eax */
  push32((uint32_t)(EAX));
  /* 12531544 call 0x1252c140 */
  push32(0x12531549u); f_1252c140();
  /* 12531549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253154c jmp 0x1253155b */
  goto L_1253155b;
L_1253154e:;
  /* 1253154e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531551 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531554 push ecx */
  push32((uint32_t)(ECX));
  /* 12531555 call dword ptr [0x12557348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557348))), 0x1253155bu);
L_1253155b:;
  /* 1253155b pop ebp */
  EBP = (pop32());
  /* 1253155c ret  */
  ESPCHK(0x12531520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011560 @ 0x12531560 (41 bytes, 16 insns) */
void f_12531560(void) {
  FTRACE(0x12531560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531560 push ebp */
  push32((uint32_t)(EBP));
  /* 12531561 mov ebp, esp */
  EBP = (ESP);
  /* 12531563 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531567 jge 0x1253157a */
  if ((C.sf==C.of)) goto L_1253157a;
  /* 12531569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253156c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253156f push eax */
  push32((uint32_t)(EAX));
  /* 12531570 call 0x1252c140 */
  push32(0x12531575u); f_1252c140();
  /* 12531575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531578 jmp 0x12531587 */
  goto L_12531587;
L_1253157a:;
  /* 1253157a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253157d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531580 push ecx */
  push32((uint32_t)(ECX));
  /* 12531581 call dword ptr [0x12557348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557348))), 0x12531587u);
L_12531587:;
  /* 12531587 pop ebp */
  EBP = (pop32());
  /* 12531588 ret  */
  ESPCHK(0x12531560u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x12531590 (119 bytes, 34 insns) */
void f_12531590(void) {
  FTRACE(0x12531590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531590 push ebp */
  push32((uint32_t)(EBP));
  /* 12531591 mov ebp, esp */
  EBP = (ESP);
  /* 12531593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531596 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 1253159b call dword ptr [0x125573ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573ac))), 0x125315a1u);
  /* 125315a1 cmp dword ptr [0x12554cc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125315a8 je 0x125315c8 */
  if (C.zf) goto L_125315c8;
  /* 125315aa push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 125315af call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x125315b5u);
  /* 125315b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125315b7 call 0x1252c0a0 */
  push32(0x125315bcu); f_1252c0a0();
  /* 125315bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125315bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125315c6 jmp 0x125315cf */
  goto L_125315cf;
L_125315c8:;
  /* 125315c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125315cf:;
  /* 125315cf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 125315d3 push eax */
  push32((uint32_t)(EAX));
  /* 125315d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125315d7 push ecx */
  push32((uint32_t)(ECX));
  /* 125315d8 call 0x12531610 */
  push32(0x125315ddu); f_12531610();
  /* 125315dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125315e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125315e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125315e7 je 0x125315f5 */
  if (C.zf) goto L_125315f5;
  /* 125315e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125315eb call 0x1252c140 */
  push32(0x125315f0u); f_1252c140();
  /* 125315f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125315f3 jmp 0x12531600 */
  goto L_12531600;
L_125315f5:;
  /* 125315f5 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 125315fa call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12531600u);
L_12531600:;
  /* 12531600 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531603 mov esp, ebp */
  ESP = (EBP);
  /* 12531605 pop ebp */
  EBP = (pop32());
  /* 12531606 ret  */
  ESPCHK(0x12531590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x12531610 (160 bytes, 50 insns) */
void f_12531610(void) {
  FTRACE(0x12531610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531610 push ebp */
  push32((uint32_t)(EBP));
  /* 12531611 mov ebp, esp */
  EBP = (ESP);
  /* 12531613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531616 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253161a jne 0x12531623 */
  if (!C.zf) goto L_12531623;
  /* 1253161c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253161e jmp 0x125316ac */
  goto L_125316ac;
L_12531623:;
  /* 12531623 cmp dword ptr [0x12554b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253162a jne 0x1253165a */
  if (!C.zf) goto L_1253165a;
  /* 1253162c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253162f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531634 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531639 jle 0x1253164b */
  if ((C.zf||C.sf!=C.of)) goto L_1253164b;
  /* 1253163b call 0x12530570 */
  push32(0x12531640u); f_12530570();
  /* 12531640 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12531646 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531649 jmp 0x125316ac */
  goto L_125316ac;
L_1253164b:;
  /* 1253164b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253164e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12531651 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12531653 mov eax, 1 */
  EAX = (0x1u);
  /* 12531658 jmp 0x125316ac */
  goto L_125316ac;
L_1253165a:;
  /* 1253165a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12531661 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12531664 push eax */
  push32((uint32_t)(EAX));
  /* 12531665 push 0 */
  push32((uint32_t)(0x0u));
  /* 12531667 mov ecx, dword ptr [0x12552ea4] */
  ECX = (r32((uint32_t)(0x12552ea4)));
  /* 1253166d push ecx */
  push32((uint32_t)(ECX));
  /* 1253166e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531671 push edx */
  push32((uint32_t)(EDX));
  /* 12531672 push 1 */
  push32((uint32_t)(0x1u));
  /* 12531674 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12531677 push eax */
  push32((uint32_t)(EAX));
  /* 12531678 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1253167d mov ecx, dword ptr [0x12554b58] */
  ECX = (r32((uint32_t)(0x12554b58)));
  /* 12531683 push ecx */
  push32((uint32_t)(ECX));
  /* 12531684 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x1253168au);
  /* 1253168a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253168d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531691 je 0x12531699 */
  if (C.zf) goto L_12531699;
  /* 12531693 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531697 je 0x125316a9 */
  if (C.zf) goto L_125316a9;
L_12531699:;
  /* 12531699 call 0x12530570 */
  push32(0x1253169eu); f_12530570();
  /* 1253169e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125316a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125316a7 jmp 0x125316ac */
  goto L_125316ac;
L_125316a9:;
  /* 125316a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125316ac:;
  /* 125316ac mov esp, ebp */
  ESP = (EBP);
  /* 125316ae pop ebp */
  EBP = (pop32());
  /* 125316af ret  */
  ESPCHK(0x12531610u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x125316b0 (32 bytes, 18 insns) */
void f_125316b0(void) {
  FTRACE(0x125316b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125316b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125316b1 mov ebp, esp */
  EBP = (ESP);
  /* 125316b3 push ebx */
  push32((uint32_t)(EBX));
  /* 125316b4 push esi */
  push32((uint32_t)(ESI));
  /* 125316b5 push edi */
  push32((uint32_t)(EDI));
  /* 125316b6 push ebp */
  push32((uint32_t)(EBP));
  /* 125316b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125316b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125316bb push 0x125316c8 */
  push32((uint32_t)(0x125316c8u));
  /* 125316c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 125316c3 call 0x12538dfc */
  push32(0x125316c8u); f_12538dfc();
  /* 125316c8 pop ebp */
  EBP = (pop32());
  /* 125316c9 pop edi */
  EDI = (pop32());
  /* 125316ca pop esi */
  ESI = (pop32());
  /* 125316cb pop ebx */
  EBX = (pop32());
  /* 125316cc mov esp, ebp */
  ESP = (EBP);
  /* 125316ce pop ebp */
  EBP = (pop32());
  /* 125316cf ret  */
  ESPCHK(0x125316b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x125316f2 (104 bytes, 33 insns) */
void f_125316f2(void) {
  FTRACE(0x125316f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125316f2 push ebx */
  push32((uint32_t)(EBX));
  /* 125316f3 push esi */
  push32((uint32_t)(ESI));
  /* 125316f4 push edi */
  push32((uint32_t)(EDI));
  /* 125316f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125316f9 push eax */
  push32((uint32_t)(EAX));
  /* 125316fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 125316fc push 0x125316d0 */
  push32((uint32_t)(0x125316d0u));
  /* 12531701 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12531708 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1253170f:;
  /* 1253170f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12531713 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12531716 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12531719 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253171c je 0x1253174c */
  if (C.zf) goto L_1253174c;
  /* 1253171e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531722 je 0x1253174c */
  if (C.zf) goto L_1253174c;
  /* 12531724 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12531727 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1253172a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1253172e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12531731 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531736 jne 0x1253174a */
  if (!C.zf) goto L_1253174a;
  /* 12531738 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1253173d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12531741 call 0x12531786 */
  push32(0x12531746u); f_12531786();
  /* 12531746 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1253174au);
L_1253174a:;
  /* 1253174a jmp 0x1253170f */
  goto L_1253170f;
L_1253174c:;
  /* 1253174c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12531753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531756 pop edi */
  EDI = (pop32());
  /* 12531757 pop esi */
  ESI = (pop32());
  /* 12531758 pop ebx */
  EBX = (pop32());
  /* 12531759 ret  */
  ESPCHK(0x125316f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10011786 @ 0x12531786 (24 bytes, 10 insns) */
void f_12531786(void) {
  FTRACE(0x12531786u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531786 push ebx */
  push32((uint32_t)(EBX));
  /* 12531787 push ecx */
  push32((uint32_t)(ECX));
  /* 12531788 mov ebx, 0x125533b8 */
  EBX = (0x125533b8u);
  /* 1253178d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531790 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12531793 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12531796 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12531799 pop ecx */
  ECX = (pop32());
  /* 1253179a pop ebx */
  EBX = (pop32());
  /* 1253179b ret 4 */
  ESPCHK(0x12531786u, _esp0);
  ESP += 8; return;
}

/* FUN_10011865 @ 0x12531865 (27 bytes, 11 insns) */
void f_12531865(void) {
  FTRACE(0x12531865u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531865 push ebp */
  push32((uint32_t)(EBP));
  /* 12531866 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1253186a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1253186c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1253186f push eax */
  push32((uint32_t)(EAX));
  /* 12531870 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12531873 push eax */
  push32((uint32_t)(EAX));
  /* 12531874 call 0x125316f2 */
  push32(0x12531879u); f_125316f2();
  /* 12531879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253187c pop ebp */
  EBP = (pop32());
  /* 1253187d ret 4 */
  ESPCHK(0x12531865u, _esp0);
  ESP += 8; return;
}

/* FUN_10011880 @ 0x12531880 (482 bytes, 138 insns) */
void f_12531880(void) {
  FTRACE(0x12531880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531880 push ebp */
  push32((uint32_t)(EBP));
  /* 12531881 mov ebp, esp */
  EBP = (ESP);
  /* 12531883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531886 push esi */
  push32((uint32_t)(ESI));
  /* 12531887 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1253188e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12531890 call 0x1252c0a0 */
  push32(0x12531895u); f_1252c0a0();
  /* 12531895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531898 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1253189f jmp 0x125318aa */
  goto L_125318aa;
L_125318a1:;
  /* 125318a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125318a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125318a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125318aa:;
  /* 125318aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125318ae jge 0x12531a50 */
  if ((C.sf==C.of)) goto L_12531a50;
  /* 125318b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125318b7 cmp dword ptr [ecx*4 + 0x12556320], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12556320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125318bf je 0x125319b6 */
  if (C.zf) goto L_125319b6;
  /* 125318c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125318c8 mov eax, dword ptr [edx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 125318cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125318d2 jmp 0x125318dd */
  goto L_125318dd;
L_125318d4:;
  /* 125318d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125318d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125318da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125318dd:;
  /* 125318dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125318e0 mov eax, dword ptr [edx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 125318e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125318ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125318ef jae 0x125319a6 */
  if (!C.cf) goto L_125319a6;
  /* 125318f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125318f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125318fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125318ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12531901 jne 0x125319a1 */
  if (!C.zf) goto L_125319a1;
  /* 12531907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253190a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253190e jne 0x12531949 */
  if (!C.zf) goto L_12531949;
  /* 12531910 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12531912 call 0x1252c0a0 */
  push32(0x12531917u); f_1252c0a0();
  /* 12531917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253191a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253191d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531921 jne 0x1253193f */
  if (!C.zf) goto L_1253193f;
  /* 12531923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531926 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531929 push edx */
  push32((uint32_t)(EDX));
  /* 1253192a call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x12531930u);
  /* 12531930 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531933 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12531936 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253193c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1253193f:;
  /* 1253193f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12531941 call 0x1252c140 */
  push32(0x12531946u); f_1252c140();
  /* 12531946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12531949:;
  /* 12531949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253194c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253194f push eax */
  push32((uint32_t)(EAX));
  /* 12531950 call dword ptr [0x1255734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255734c))), 0x12531956u);
  /* 12531956 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531959 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1253195d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12531960 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12531962 je 0x12531976 */
  if (C.zf) goto L_12531976;
  /* 12531964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531967 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253196a push eax */
  push32((uint32_t)(EAX));
  /* 1253196b call dword ptr [0x12557348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557348))), 0x12531971u);
  /* 12531971 jmp 0x125318d4 */
  goto L_125318d4;
L_12531976:;
  /* 12531976 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531979 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1253197f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12531982 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531985 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12531988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253198b sub eax, dword ptr [edx*4 + 0x12556320] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12556320))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531992 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12531993 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12531998 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1253199a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253199c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1253199f jmp 0x125319a6 */
  goto L_125319a6;
L_125319a1:;
  /* 125319a1 jmp 0x125318d4 */
  goto L_125318d4;
L_125319a6:;
  /* 125319a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125319aa je 0x125319b1 */
  if (C.zf) goto L_125319b1;
  /* 125319ac jmp 0x12531a50 */
  goto L_12531a50;
L_125319b1:;
  /* 125319b1 jmp 0x12531a4b */
  goto L_12531a4b;
L_125319b6:;
  /* 125319b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 125319b8 push 0x125505dc */
  push32((uint32_t)(0x125505dcu));
  /* 125319bd push 2 */
  push32((uint32_t)(0x2u));
  /* 125319bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125319c4 call 0x125286a0 */
  push32(0x125319c9u); f_125286a0();
  /* 125319c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125319cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125319cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125319d3 je 0x12531a49 */
  if (C.zf) goto L_12531a49;
  /* 125319d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125319d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125319db mov dword ptr [eax*4 + 0x12556320], ecx */
  w32((uint32_t)(EAX*4 + 0x12556320), (ECX));
  /* 125319e2 mov edx, dword ptr [0x1255645c] */
  EDX = (r32((uint32_t)(0x1255645c)));
  /* 125319e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125319eb mov dword ptr [0x1255645c], edx */
  w32((uint32_t)(0x1255645c), (EDX));
  /* 125319f1 jmp 0x125319fc */
  goto L_125319fc;
L_125319f3:;
  /* 125319f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125319f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125319f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125319fc:;
  /* 125319fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125319ff mov edx, dword ptr [ecx*4 + 0x12556320] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531a06 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531a0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531a0f jae 0x12531a34 */
  if (!C.cf) goto L_12531a34;
  /* 12531a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531a14 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12531a18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531a1b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12531a21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531a24 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12531a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531a2b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12531a32 jmp 0x125319f3 */
  goto L_125319f3;
L_12531a34:;
  /* 12531a34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12531a37 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531a3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12531a3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531a40 push edx */
  push32((uint32_t)(EDX));
  /* 12531a41 call 0x12531d90 */
  push32(0x12531a46u); f_12531d90();
  /* 12531a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12531a49:;
  /* 12531a49 jmp 0x12531a50 */
  goto L_12531a50;
L_12531a4b:;
  /* 12531a4b jmp 0x125318a1 */
  goto L_125318a1;
L_12531a50:;
  /* 12531a50 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12531a52 call 0x1252c140 */
  push32(0x12531a57u); f_1252c140();
  /* 12531a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531a5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531a5d pop esi */
  ESI = (pop32());
  /* 12531a5e mov esp, ebp */
  ESP = (EBP);
  /* 12531a60 pop ebp */
  EBP = (pop32());
  /* 12531a61 ret  */
  ESPCHK(0x12531880u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12531a70 (183 bytes, 57 insns) */
void f_12531a70(void) {
  FTRACE(0x12531a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12531a71 mov ebp, esp */
  EBP = (ESP);
  /* 12531a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12531a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531a77 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531a7d jae 0x12531b0a */
  if (!C.cf) goto L_12531b0a;
  /* 12531a83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531a86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531a8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531a8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531a92 mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531a99 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531a9d jne 0x12531b0a */
  if (!C.zf) goto L_12531b0a;
  /* 12531a9f cmp dword ptr [0x12554940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531aa6 jne 0x12531aea */
  if (!C.zf) goto L_12531aea;
  /* 12531aa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531aab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12531aae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531ab2 je 0x12531ac2 */
  if (C.zf) goto L_12531ac2;
  /* 12531ab4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531ab8 je 0x12531ad0 */
  if (C.zf) goto L_12531ad0;
  /* 12531aba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531abe je 0x12531ade */
  if (C.zf) goto L_12531ade;
  /* 12531ac0 jmp 0x12531aea */
  goto L_12531aea;
L_12531ac2:;
  /* 12531ac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531ac5 push edx */
  push32((uint32_t)(EDX));
  /* 12531ac6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12531ac8 call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531aceu);
  /* 12531ace jmp 0x12531aea */
  goto L_12531aea;
L_12531ad0:;
  /* 12531ad0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531ad3 push eax */
  push32((uint32_t)(EAX));
  /* 12531ad4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12531ad6 call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531adcu);
  /* 12531adc jmp 0x12531aea */
  goto L_12531aea;
L_12531ade:;
  /* 12531ade mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12531ae2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12531ae4 call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531aeau);
L_12531aea:;
  /* 12531aea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531aed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12531af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531af3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12531af6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531af9 mov ecx, dword ptr [edx*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 12531b00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531b03 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12531b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12531b08 jmp 0x12531b23 */
  goto L_12531b23;
L_12531b0a:;
  /* 12531b0a call 0x12530570 */
  push32(0x12531b0fu); f_12530570();
  /* 12531b0f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12531b15 call 0x12530580 */
  push32(0x12531b1au); f_12530580();
  /* 12531b1a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12531b20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12531b23:;
  /* 12531b23 mov esp, ebp */
  ESP = (EBP);
  /* 12531b25 pop ebp */
  EBP = (pop32());
  /* 12531b26 ret  */
  ESPCHK(0x12531a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x12531b30 (216 bytes, 63 insns) */
void f_12531b30(void) {
  FTRACE(0x12531b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12531b31 mov ebp, esp */
  EBP = (ESP);
  /* 12531b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12531b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b37 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531b3d jae 0x12531beb */
  if (!C.cf) goto L_12531beb;
  /* 12531b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531b4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531b52 mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531b59 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12531b5e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12531b61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531b63 je 0x12531beb */
  if (C.zf) goto L_12531beb;
  /* 12531b69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b6c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12531b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b72 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12531b75 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531b78 mov ecx, dword ptr [edx*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 12531b7f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531b83 je 0x12531beb */
  if (C.zf) goto L_12531beb;
  /* 12531b85 cmp dword ptr [0x12554940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531b8c jne 0x12531bca */
  if (!C.zf) goto L_12531bca;
  /* 12531b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531b91 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12531b94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531b98 je 0x12531ba8 */
  if (C.zf) goto L_12531ba8;
  /* 12531b9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531b9e je 0x12531bb4 */
  if (C.zf) goto L_12531bb4;
  /* 12531ba0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531ba4 je 0x12531bc0 */
  if (C.zf) goto L_12531bc0;
  /* 12531ba6 jmp 0x12531bca */
  goto L_12531bca;
L_12531ba8:;
  /* 12531ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12531baa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12531bac call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531bb2u);
  /* 12531bb2 jmp 0x12531bca */
  goto L_12531bca;
L_12531bb4:;
  /* 12531bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12531bb6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12531bb8 call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531bbeu);
  /* 12531bbe jmp 0x12531bca */
  goto L_12531bca;
L_12531bc0:;
  /* 12531bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12531bc2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12531bc4 call dword ptr [0x12557314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557314))), 0x12531bcau);
L_12531bca:;
  /* 12531bca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531bcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531bd3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531bd6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531bd9 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531be0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12531be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12531be9 jmp 0x12531c04 */
  goto L_12531c04;
L_12531beb:;
  /* 12531beb call 0x12530570 */
  push32(0x12531bf0u); f_12530570();
  /* 12531bf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12531bf6 call 0x12530580 */
  push32(0x12531bfbu); f_12530580();
  /* 12531bfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12531c01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12531c04:;
  /* 12531c04 mov esp, ebp */
  ESP = (EBP);
  /* 12531c06 pop ebp */
  EBP = (pop32());
  /* 12531c07 ret  */
  ESPCHK(0x12531b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c10 @ 0x12531c10 (102 bytes, 30 insns) */
void f_12531c10(void) {
  FTRACE(0x12531c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12531c11 mov ebp, esp */
  EBP = (ESP);
  /* 12531c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531c16 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531c1c jae 0x12531c5b */
  if (!C.cf) goto L_12531c5b;
  /* 12531c1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531c21 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12531c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531c27 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12531c2a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531c2d mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12531c34 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12531c39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12531c3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531c3e je 0x12531c5b */
  if (C.zf) goto L_12531c5b;
  /* 12531c40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531c43 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12531c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531c49 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12531c4c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531c4f mov ecx, dword ptr [edx*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 12531c56 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12531c59 jmp 0x12531c74 */
  goto L_12531c74;
L_12531c5b:;
  /* 12531c5b call 0x12530570 */
  push32(0x12531c60u); f_12530570();
  /* 12531c60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12531c66 call 0x12530580 */
  push32(0x12531c6bu); f_12530580();
  /* 12531c6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12531c71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12531c74:;
  /* 12531c74 pop ebp */
  EBP = (pop32());
  /* 12531c75 ret  */
  ESPCHK(0x12531c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c80 @ 0x12531c80 (260 bytes, 83 insns) */
void f_12531c80(void) {
  FTRACE(0x12531c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12531c81 mov ebp, esp */
  EBP = (ESP);
  /* 12531c83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531c86 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12531c8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531c8d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12531c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12531c92 je 0x12531c9d */
  if (C.zf) goto L_12531c9d;
  /* 12531c94 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531c97 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12531c9a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12531c9d:;
  /* 12531c9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531ca0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12531ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12531ca8 je 0x12531cb2 */
  if (C.zf) goto L_12531cb2;
  /* 12531caa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531cad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12531caf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12531cb2:;
  /* 12531cb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12531cb5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12531cbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531cbd je 0x12531cc8 */
  if (C.zf) goto L_12531cc8;
  /* 12531cbf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531cc2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12531cc5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12531cc8:;
  /* 12531cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531ccb push eax */
  push32((uint32_t)(EAX));
  /* 12531ccc call dword ptr [0x125573e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573e4))), 0x12531cd2u);
  /* 12531cd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12531cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531cd9 jne 0x12531cf2 */
  if (!C.zf) goto L_12531cf2;
  /* 12531cdb call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x12531ce1u);
  /* 12531ce1 push eax */
  push32((uint32_t)(EAX));
  /* 12531ce2 call 0x125304d0 */
  push32(0x12531ce7u); f_125304d0();
  /* 12531ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531cea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531ced jmp 0x12531d80 */
  goto L_12531d80;
L_12531cf2:;
  /* 12531cf2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531cf6 jne 0x12531d03 */
  if (!C.zf) goto L_12531d03;
  /* 12531cf8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531cfb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12531cfe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12531d01 jmp 0x12531d12 */
  goto L_12531d12;
L_12531d03:;
  /* 12531d03 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531d07 jne 0x12531d12 */
  if (!C.zf) goto L_12531d12;
  /* 12531d09 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531d0c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12531d0f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12531d12:;
  /* 12531d12 call 0x12531880 */
  push32(0x12531d17u); f_12531880();
  /* 12531d17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12531d1a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531d1e jne 0x12531d3b */
  if (!C.zf) goto L_12531d3b;
  /* 12531d20 call 0x12530570 */
  push32(0x12531d25u); f_12530570();
  /* 12531d25 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12531d2b call 0x12530580 */
  push32(0x12531d30u); f_12530580();
  /* 12531d30 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12531d36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531d39 jmp 0x12531d80 */
  goto L_12531d80;
L_12531d3b:;
  /* 12531d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531d3e push eax */
  push32((uint32_t)(EAX));
  /* 12531d3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531d42 push ecx */
  push32((uint32_t)(ECX));
  /* 12531d43 call 0x12531a70 */
  push32(0x12531d48u); f_12531a70();
  /* 12531d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531d4b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531d4e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12531d51 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12531d54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531d57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531d5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531d5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531d60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531d63 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531d6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12531d6d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12531d71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531d74 push ecx */
  push32((uint32_t)(ECX));
  /* 12531d75 call 0x12531e20 */
  push32(0x12531d7au); f_12531e20();
  /* 12531d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531d7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12531d80:;
  /* 12531d80 mov esp, ebp */
  ESP = (EBP);
  /* 12531d82 pop ebp */
  EBP = (pop32());
  /* 12531d83 ret  */
  ESPCHK(0x12531c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x12531d90 (134 bytes, 44 insns) */
void f_12531d90(void) {
  FTRACE(0x12531d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12531d91 mov ebp, esp */
  EBP = (ESP);
  /* 12531d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12531d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531d97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531d9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531d9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531da0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531da3 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531daa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531dac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12531daf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531db2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531db6 jne 0x12531df1 */
  if (!C.zf) goto L_12531df1;
  /* 12531db8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12531dba call 0x1252c0a0 */
  push32(0x12531dbfu); f_1252c0a0();
  /* 12531dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531dc5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531dc9 jne 0x12531de7 */
  if (!C.zf) goto L_12531de7;
  /* 12531dcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531dce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531dd1 push edx */
  push32((uint32_t)(EDX));
  /* 12531dd2 call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x12531dd8u);
  /* 12531dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531ddb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12531dde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531de4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12531de7:;
  /* 12531de7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12531de9 call 0x1252c140 */
  push32(0x12531deeu); f_1252c140();
  /* 12531dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12531df1:;
  /* 12531df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531df4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531df7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531dfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531dfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531e00 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531e07 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12531e0b push eax */
  push32((uint32_t)(EAX));
  /* 12531e0c call dword ptr [0x1255734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255734c))), 0x12531e12u);
  /* 12531e12 mov esp, ebp */
  ESP = (EBP);
  /* 12531e14 pop ebp */
  EBP = (pop32());
  /* 12531e15 ret  */
  ESPCHK(0x12531d90u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12531e20 (38 bytes, 13 insns) */
void f_12531e20(void) {
  FTRACE(0x12531e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12531e21 mov ebp, esp */
  EBP = (ESP);
  /* 12531e23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531e26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12531e29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531e2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12531e2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12531e32 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12531e39 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12531e3d push eax */
  push32((uint32_t)(EAX));
  /* 12531e3e call dword ptr [0x12557348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557348))), 0x12531e44u);
  /* 12531e44 pop ebp */
  EBP = (pop32());
  /* 12531e45 ret  */
  ESPCHK(0x12531e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x12531e50 (218 bytes, 63 insns) */
void f_12531e50(void) {
  FTRACE(0x12531e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12531e51 mov ebp, esp */
  EBP = (ESP);
  /* 12531e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531e56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12531e5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12531e5f call 0x1252c0a0 */
  push32(0x12531e64u); f_1252c0a0();
  /* 12531e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531e67 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12531e6e jmp 0x12531e79 */
  goto L_12531e79;
L_12531e70:;
  /* 12531e70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531e73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531e76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12531e79:;
  /* 12531e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531e7c cmp ecx, dword ptr [0x12556020] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12556020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531e82 jge 0x12531f19 */
  if ((C.sf==C.of)) goto L_12531f19;
  /* 12531e88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531e8b mov eax, dword ptr [0x12554cd8] */
  EAX = (r32((uint32_t)(0x12554cd8)));
  /* 12531e90 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531e94 je 0x12531f14 */
  if (C.zf) goto L_12531f14;
  /* 12531e96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531e99 mov edx, dword ptr [0x12554cd8] */
  EDX = (r32((uint32_t)(0x12554cd8)));
  /* 12531e9f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12531ea2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12531ea5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12531eab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531ead je 0x12531ed1 */
  if (C.zf) goto L_12531ed1;
  /* 12531eaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531eb2 mov eax, dword ptr [0x12554cd8] */
  EAX = (r32((uint32_t)(0x12554cd8)));
  /* 12531eb7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12531eba push ecx */
  push32((uint32_t)(ECX));
  /* 12531ebb call 0x12532c40 */
  push32(0x12531ec0u); f_12532c40();
  /* 12531ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531ec3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531ec6 je 0x12531ed1 */
  if (C.zf) goto L_12531ed1;
  /* 12531ec8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531ecb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531ece mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12531ed1:;
  /* 12531ed1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531ed5 jl 0x12531f14 */
  if ((C.sf!=C.of)) goto L_12531f14;
  /* 12531ed7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531eda mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 12531ee0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12531ee3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12531ee6 push edx */
  push32((uint32_t)(EDX));
  /* 12531ee7 call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x12531eedu);
  /* 12531eed push 2 */
  push32((uint32_t)(0x2u));
  /* 12531eef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531ef2 mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 12531ef8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12531efb push edx */
  push32((uint32_t)(EDX));
  /* 12531efc call 0x12529130 */
  push32(0x12531f01u); f_12529130();
  /* 12531f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531f07 mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 12531f0d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12531f14:;
  /* 12531f14 jmp 0x12531e70 */
  goto L_12531e70;
L_12531f19:;
  /* 12531f19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12531f1b call 0x1252c140 */
  push32(0x12531f20u); f_1252c140();
  /* 12531f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12531f26 mov esp, ebp */
  ESP = (EBP);
  /* 12531f28 pop ebp */
  EBP = (pop32());
  /* 12531f29 ret  */
  ESPCHK(0x12531e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x12531f30 (68 bytes, 26 insns) */
void f_12531f30(void) {
  FTRACE(0x12531f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12531f31 mov ebp, esp */
  EBP = (ESP);
  /* 12531f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12531f34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531f38 jne 0x12531f46 */
  if (!C.zf) goto L_12531f46;
  /* 12531f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12531f3c call 0x125320a0 */
  push32(0x12531f41u); f_125320a0();
  /* 12531f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f44 jmp 0x12531f70 */
  goto L_12531f70;
L_12531f46:;
  /* 12531f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531f49 push eax */
  push32((uint32_t)(EAX));
  /* 12531f4a call 0x125314b0 */
  push32(0x12531f4fu); f_125314b0();
  /* 12531f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531f55 push ecx */
  push32((uint32_t)(ECX));
  /* 12531f56 call 0x12531f80 */
  push32(0x12531f5bu); f_12531f80();
  /* 12531f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12531f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531f64 push edx */
  push32((uint32_t)(EDX));
  /* 12531f65 call 0x12531520 */
  push32(0x12531f6au); f_12531520();
  /* 12531f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12531f70:;
  /* 12531f70 mov esp, ebp */
  ESP = (EBP);
  /* 12531f72 pop ebp */
  EBP = (pop32());
  /* 12531f73 ret  */
  ESPCHK(0x12531f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x12531f80 (65 bytes, 26 insns) */
void f_12531f80(void) {
  FTRACE(0x12531f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12531f81 mov ebp, esp */
  EBP = (ESP);
  /* 12531f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531f86 push eax */
  push32((uint32_t)(EAX));
  /* 12531f87 call 0x12531fd0 */
  push32(0x12531f8cu); f_12531fd0();
  /* 12531f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12531f91 je 0x12531f98 */
  if (C.zf) goto L_12531f98;
  /* 12531f93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12531f96 jmp 0x12531fbf */
  goto L_12531fbf;
L_12531f98:;
  /* 12531f98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531f9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12531f9e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12531fa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12531fa6 je 0x12531fbd */
  if (C.zf) goto L_12531fbd;
  /* 12531fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531fab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12531fae push ecx */
  push32((uint32_t)(ECX));
  /* 12531faf call 0x12532d90 */
  push32(0x12531fb4u); f_12532d90();
  /* 12531fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12531fb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12531fb9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531fbb jmp 0x12531fbf */
  goto L_12531fbf;
L_12531fbd:;
  /* 12531fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12531fbf:;
  /* 12531fbf pop ebp */
  EBP = (pop32());
  /* 12531fc0 ret  */
  ESPCHK(0x12531f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fd0 @ 0x12531fd0 (183 bytes, 62 insns) */
void f_12531fd0(void) {
  FTRACE(0x12531fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12531fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12531fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12531fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12531fd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12531fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12531fe0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12531fe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531fe6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12531fe9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12531fec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12531fef jne 0x1253206b */
  if (!C.zf) goto L_1253206b;
  /* 12531ff1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12531ff4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12531ff7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12531ffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12531fff je 0x1253206b */
  if (C.zf) goto L_1253206b;
  /* 12532001 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532004 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532007 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12532009 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253200c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253200f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532013 jle 0x1253206b */
  if ((C.zf||C.sf!=C.of)) goto L_1253206b;
  /* 12532015 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532018 push edx */
  push32((uint32_t)(EDX));
  /* 12532019 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253201c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1253201f push ecx */
  push32((uint32_t)(ECX));
  /* 12532020 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532023 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12532026 push eax */
  push32((uint32_t)(EAX));
  /* 12532027 call 0x12530f40 */
  push32(0x1253202cu); f_12530f40();
  /* 1253202c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253202f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532032 jne 0x12532055 */
  if (!C.zf) goto L_12532055;
  /* 12532034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532037 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1253203a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12532040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12532042 je 0x12532053 */
  if (C.zf) goto L_12532053;
  /* 12532044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532047 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1253204a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1253204d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532050 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12532053:;
  /* 12532053 jmp 0x1253206b */
  goto L_1253206b;
L_12532055:;
  /* 12532055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532058 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1253205b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1253205e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532061 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12532064 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1253206b:;
  /* 1253206b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253206e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532071 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12532074 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12532076 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532079 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12532080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532083 mov esp, ebp */
  ESP = (EBP);
  /* 12532085 pop ebp */
  EBP = (pop32());
  /* 12532086 ret  */
  ESPCHK(0x12531fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x12532090 (15 bytes, 7 insns) */
void f_12532090(void) {
  FTRACE(0x12532090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532090 push ebp */
  push32((uint32_t)(EBP));
  /* 12532091 mov ebp, esp */
  EBP = (ESP);
  /* 12532093 push 1 */
  push32((uint32_t)(0x1u));
  /* 12532095 call 0x125320a0 */
  push32(0x1253209au); f_125320a0();
  /* 1253209a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253209d pop ebp */
  EBP = (pop32());
  /* 1253209e ret  */
  ESPCHK(0x12532090u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x125320a0 (319 bytes, 94 insns) */
void f_125320a0(void) {
  FTRACE(0x125320a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125320a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125320a1 mov ebp, esp */
  EBP = (ESP);
  /* 125320a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125320a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125320ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125320b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125320b6 call 0x1252c0a0 */
  push32(0x125320bbu); f_1252c0a0();
  /* 125320bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125320be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125320c5 jmp 0x125320d0 */
  goto L_125320d0;
L_125320c7:;
  /* 125320c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125320ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125320cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125320d0:;
  /* 125320d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125320d3 cmp ecx, dword ptr [0x12556020] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12556020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125320d9 jge 0x125321c3 */
  if ((C.sf==C.of)) goto L_125321c3;
  /* 125320df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125320e2 mov eax, dword ptr [0x12554cd8] */
  EAX = (r32((uint32_t)(0x12554cd8)));
  /* 125320e7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125320eb je 0x125321be */
  if (C.zf) goto L_125321be;
  /* 125320f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125320f4 mov edx, dword ptr [0x12554cd8] */
  EDX = (r32((uint32_t)(0x12554cd8)));
  /* 125320fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125320fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12532100 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12532106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12532108 je 0x125321be */
  if (C.zf) goto L_125321be;
  /* 1253210e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532111 mov eax, dword ptr [0x12554cd8] */
  EAX = (r32((uint32_t)(0x12554cd8)));
  /* 12532116 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12532119 push ecx */
  push32((uint32_t)(ECX));
  /* 1253211a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253211d push edx */
  push32((uint32_t)(EDX));
  /* 1253211e call 0x125314f0 */
  push32(0x12532123u); f_125314f0();
  /* 12532123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532126 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532129 mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 1253212f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12532132 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12532135 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1253213a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253213c je 0x125321a5 */
  if (C.zf) goto L_125321a5;
  /* 1253213e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532142 jne 0x12532169 */
  if (!C.zf) goto L_12532169;
  /* 12532144 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532147 mov edx, dword ptr [0x12554cd8] */
  EDX = (r32((uint32_t)(0x12554cd8)));
  /* 1253214d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12532150 push eax */
  push32((uint32_t)(EAX));
  /* 12532151 call 0x12531f80 */
  push32(0x12532156u); f_12531f80();
  /* 12532156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532159 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253215c je 0x12532167 */
  if (C.zf) goto L_12532167;
  /* 1253215e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532164 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12532167:;
  /* 12532167 jmp 0x125321a5 */
  goto L_125321a5;
L_12532169:;
  /* 12532169 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253216d jne 0x125321a5 */
  if (!C.zf) goto L_125321a5;
  /* 1253216f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532172 mov eax, dword ptr [0x12554cd8] */
  EAX = (r32((uint32_t)(0x12554cd8)));
  /* 12532177 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1253217a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1253217d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12532180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12532182 je 0x125321a5 */
  if (C.zf) goto L_125321a5;
  /* 12532184 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532187 mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 1253218d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12532190 push edx */
  push32((uint32_t)(EDX));
  /* 12532191 call 0x12531f80 */
  push32(0x12532196u); f_12531f80();
  /* 12532196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532199 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253219c jne 0x125321a5 */
  if (!C.zf) goto L_125321a5;
  /* 1253219e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_125321a5:;
  /* 125321a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125321a8 mov ecx, dword ptr [0x12554cd8] */
  ECX = (r32((uint32_t)(0x12554cd8)));
  /* 125321ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125321b1 push edx */
  push32((uint32_t)(EDX));
  /* 125321b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125321b5 push eax */
  push32((uint32_t)(EAX));
  /* 125321b6 call 0x12531560 */
  push32(0x125321bbu); f_12531560();
  /* 125321bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125321be:;
  /* 125321be jmp 0x125320c7 */
  goto L_125320c7;
L_125321c3:;
  /* 125321c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125321c5 call 0x1252c140 */
  push32(0x125321cau); f_1252c140();
  /* 125321ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125321cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125321d1 jne 0x125321d8 */
  if (!C.zf) goto L_125321d8;
  /* 125321d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125321d6 jmp 0x125321db */
  goto L_125321db;
L_125321d8:;
  /* 125321d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125321db:;
  /* 125321db mov esp, ebp */
  ESP = (EBP);
  /* 125321dd pop ebp */
  EBP = (pop32());
  /* 125321de ret  */
  ESPCHK(0x125320a0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x125321e0 (15 bytes, 7 insns) */
void f_125321e0(void) {
  FTRACE(0x125321e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125321e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125321e1 mov ebp, esp */
  EBP = (ESP);
  /* 125321e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125321e5 call 0x12527610 */
  push32(0x125321eau); f_12527610();
  /* 125321ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125321ed pop ebp */
  EBP = (pop32());
  /* 125321ee ret  */
  ESPCHK(0x125321e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x125321f0 (1007 bytes, 269 insns) */
void f_125321f0(void) {
  FTRACE(0x125321f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125321f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125321f1 mov ebp, esp */
  EBP = (ESP);
  /* 125321f3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125321f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125321fd jl 0x12532205 */
  if ((C.sf!=C.of)) goto L_12532205;
  /* 125321ff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532203 jle 0x1253220c */
  if ((C.zf||C.sf!=C.of)) goto L_1253220c;
L_12532205:;
  /* 12532205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532207 jmp 0x125325db */
  goto L_125325db;
L_1253220c:;
  /* 1253220c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1253220e call 0x1252c0a0 */
  push32(0x12532213u); f_1252c0a0();
  /* 12532213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532216 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1253221d mov eax, dword ptr [0x12554cc4] */
  EAX = (r32((uint32_t)(0x12554cc4)));
  /* 12532222 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532225 mov dword ptr [0x12554cc4], eax */
  w32((uint32_t)(0x12554cc4), (EAX));
L_1253222a:;
  /* 1253222a cmp dword ptr [0x12554cd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532231 je 0x1253223d */
  if (C.zf) goto L_1253223d;
  /* 12532233 push 1 */
  push32((uint32_t)(0x1u));
  /* 12532235 call dword ptr [0x12557304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557304))), 0x1253223bu);
  /* 1253223b jmp 0x1253222a */
  goto L_1253222a;
L_1253223d:;
  /* 1253223d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532241 je 0x12532281 */
  if (C.zf) goto L_12532281;
  /* 12532243 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532247 je 0x12532261 */
  if (C.zf) goto L_12532261;
  /* 12532249 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253224c push ecx */
  push32((uint32_t)(ECX));
  /* 1253224d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532250 push edx */
  push32((uint32_t)(EDX));
  /* 12532251 call 0x125325e0 */
  push32(0x12532256u); f_125325e0();
  /* 12532256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532259 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1253225f jmp 0x12532273 */
  goto L_12532273;
L_12532261:;
  /* 12532261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532264 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532267 mov ecx, dword ptr [eax + 0x125534dc] */
  ECX = (r32((uint32_t)(EAX + 0x125534dc)));
  /* 1253226d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12532273:;
  /* 12532273 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12532279 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1253227c jmp 0x125325bb */
  goto L_125325bb;
L_12532281:;
  /* 12532281 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12532288 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1253228f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532293 je 0x125325b3 */
  if (C.zf) goto L_125325b3;
  /* 12532299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253229c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253229f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125322a2 jne 0x125324c4 */
  if (!C.zf) goto L_125324c4;
  /* 125322a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125322ab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125322af cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125322b2 jne 0x125324c4 */
  if (!C.zf) goto L_125324c4;
  /* 125322b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125322bb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 125322bf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125322c2 jne 0x125324c4 */
  if (!C.zf) goto L_125324c4;
  /* 125322c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125322cb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_125322d1:;
  /* 125322d1 push 0x1255062c */
  push32((uint32_t)(0x1255062cu));
  /* 125322d6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125322dc push ecx */
  push32((uint32_t)(ECX));
  /* 125322dd call 0x12534440 */
  push32(0x125322e2u); f_12534440();
  /* 125322e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125322e5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 125322eb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125322f2 je 0x1253231d */
  if (C.zf) goto L_1253231d;
  /* 125322f4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125322fa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532300 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12532306 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253230d je 0x1253231d */
  if (C.zf) goto L_1253231d;
  /* 1253230f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12532315 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12532318 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253231b jne 0x12532343 */
  if (!C.zf) goto L_12532343;
L_1253231d:;
  /* 1253231d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532321 je 0x1253233c */
  if (C.zf) goto L_1253233c;
  /* 12532323 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12532325 call 0x1252c140 */
  push32(0x1253232au); f_1252c140();
  /* 1253232a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253232d mov edx, dword ptr [0x12554cc4] */
  EDX = (r32((uint32_t)(0x12554cc4)));
  /* 12532333 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532336 mov dword ptr [0x12554cc4], edx */
  w32((uint32_t)(0x12554cc4), (EDX));
L_1253233c:;
  /* 1253233c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253233e jmp 0x125325db */
  goto L_125325db;
L_12532343:;
  /* 12532343 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1253234a jmp 0x12532355 */
  goto L_12532355;
L_1253234c:;
  /* 1253234c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253234f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532352 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12532355:;
  /* 12532355 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532359 jg 0x125323a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_125323a3;
  /* 1253235b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12532361 push ecx */
  push32((uint32_t)(ECX));
  /* 12532362 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12532368 push edx */
  push32((uint32_t)(EDX));
  /* 12532369 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253236c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253236f mov ecx, dword ptr [eax + 0x125534d8] */
  ECX = (r32((uint32_t)(EAX + 0x125534d8)));
  /* 12532375 push ecx */
  push32((uint32_t)(ECX));
  /* 12532376 call 0x12534400 */
  push32(0x1253237bu); f_12534400();
  /* 1253237b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253237e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532380 jne 0x125323a1 */
  if (!C.zf) goto L_125323a1;
  /* 12532382 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12532385 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532388 mov eax, dword ptr [edx + 0x125534d8] */
  EAX = (r32((uint32_t)(EDX + 0x125534d8)));
  /* 1253238e push eax */
  push32((uint32_t)(EAX));
  /* 1253238f call 0x1252b4d0 */
  push32(0x12532394u); f_1252b4d0();
  /* 12532394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532397 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253239d jne 0x125323a1 */
  if (!C.zf) goto L_125323a1;
  /* 1253239f jmp 0x125323a3 */
  goto L_125323a3;
L_125323a1:;
  /* 125323a1 jmp 0x1253234c */
  goto L_1253234c;
L_125323a3:;
  /* 125323a3 push 0x12550628 */
  push32((uint32_t)(0x12550628u));
  /* 125323a8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125323ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125323b1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 125323b7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125323bd push edx */
  push32((uint32_t)(EDX));
  /* 125323be call 0x125343c0 */
  push32(0x125323c3u); f_125343c0();
  /* 125323c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125323c6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 125323cc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125323d3 jne 0x12532409 */
  if (!C.zf) goto L_12532409;
  /* 125323d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125323db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125323de cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125323e1 je 0x12532409 */
  if (C.zf) goto L_12532409;
  /* 125323e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125323e7 je 0x12532402 */
  if (C.zf) goto L_12532402;
  /* 125323e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125323eb call 0x1252c140 */
  push32(0x125323f0u); f_1252c140();
  /* 125323f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125323f3 mov edx, dword ptr [0x12554cc4] */
  EDX = (r32((uint32_t)(0x12554cc4)));
  /* 125323f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125323fc mov dword ptr [0x12554cc4], edx */
  w32((uint32_t)(0x12554cc4), (EDX));
L_12532402:;
  /* 12532402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532404 jmp 0x125325db */
  goto L_125325db;
L_12532409:;
  /* 12532409 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253240d jg 0x1253245a */
  if ((!C.zf&&C.sf==C.of)) goto L_1253245a;
  /* 1253240f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12532415 push eax */
  push32((uint32_t)(EAX));
  /* 12532416 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1253241c push ecx */
  push32((uint32_t)(ECX));
  /* 1253241d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12532423 push edx */
  push32((uint32_t)(EDX));
  /* 12532424 call 0x1252bec0 */
  push32(0x12532429u); f_1252bec0();
  /* 12532429 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253242c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12532432 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1253243a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12532440 push ecx */
  push32((uint32_t)(ECX));
  /* 12532441 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12532444 push edx */
  push32((uint32_t)(EDX));
  /* 12532445 call 0x125325e0 */
  push32(0x1253244au); f_125325e0();
  /* 1253244a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253244d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253244f je 0x1253245a */
  if (C.zf) goto L_1253245a;
  /* 12532451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532454 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532457 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1253245a:;
  /* 1253245a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12532460 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532466 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1253246c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12532472 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12532475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532477 je 0x12532488 */
  if (C.zf) goto L_12532488;
  /* 12532479 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1253247f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532482 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12532488:;
  /* 12532488 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1253248e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12532491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532493 jne 0x125322d1 */
  if (!C.zf) goto L_125322d1;
  /* 12532499 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253249d je 0x125324ac */
  if (C.zf) goto L_125324ac;
  /* 1253249f call 0x12532780 */
  push32(0x125324a4u); f_12532780();
  /* 125324a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 125324aa jmp 0x125324b6 */
  goto L_125324b6;
L_125324ac:;
  /* 125324ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_125324b6:;
  /* 125324b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 125324bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125324bf jmp 0x125325b1 */
  goto L_125325b1;
L_125324c4:;
  /* 125324c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125324c7 push edx */
  push32((uint32_t)(EDX));
  /* 125324c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125324ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125324cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125324d2 push eax */
  push32((uint32_t)(EAX));
  /* 125324d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125324d6 push ecx */
  push32((uint32_t)(ECX));
  /* 125324d7 call 0x12532880 */
  push32(0x125324dcu); f_12532880();
  /* 125324dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125324df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125324e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125324e6 je 0x125325b1 */
  if (C.zf) goto L_125325b1;
  /* 125324ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125324f3 jmp 0x125324fe */
  goto L_125324fe;
L_125324f5:;
  /* 125324f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125324f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125324fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125324fe:;
  /* 125324fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532502 jg 0x12532560 */
  if ((!C.zf&&C.sf==C.of)) goto L_12532560;
  /* 12532504 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532508 je 0x1253255e */
  if (C.zf) goto L_1253255e;
  /* 1253250a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253250d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532510 mov ecx, dword ptr [eax + 0x125534dc] */
  ECX = (r32((uint32_t)(EAX + 0x125534dc)));
  /* 12532516 push ecx */
  push32((uint32_t)(ECX));
  /* 12532517 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1253251d push edx */
  push32((uint32_t)(EDX));
  /* 1253251e call 0x12534330 */
  push32(0x12532523u); f_12534330();
  /* 12532523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532528 je 0x12532555 */
  if (C.zf) goto L_12532555;
  /* 1253252a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12532530 push eax */
  push32((uint32_t)(EAX));
  /* 12532531 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12532534 push ecx */
  push32((uint32_t)(ECX));
  /* 12532535 call 0x125325e0 */
  push32(0x1253253au); f_125325e0();
  /* 1253253a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253253d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253253f je 0x1253254c */
  if (C.zf) goto L_1253254c;
  /* 12532541 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532544 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532547 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1253254a jmp 0x12532553 */
  goto L_12532553;
L_1253254c:;
  /* 1253254c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12532553:;
  /* 12532553 jmp 0x1253255e */
  goto L_1253255e;
L_12532555:;
  /* 12532555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253255b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1253255e:;
  /* 1253255e jmp 0x125324f5 */
  goto L_125324f5;
L_12532560:;
  /* 12532560 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532564 je 0x1253258b */
  if (C.zf) goto L_1253258b;
  /* 12532566 call 0x12532780 */
  push32(0x1253256bu); f_12532780();
  /* 1253256b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1253256e push 2 */
  push32((uint32_t)(0x2u));
  /* 12532570 mov ecx, dword ptr [0x125534dc] */
  ECX = (r32((uint32_t)(0x125534dc)));
  /* 12532576 push ecx */
  push32((uint32_t)(ECX));
  /* 12532577 call 0x12529130 */
  push32(0x1253257cu); f_12529130();
  /* 1253257c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253257f mov dword ptr [0x125534dc], 0 */
  w32((uint32_t)(0x125534dc), (0x0u));
  /* 12532589 jmp 0x125325b1 */
  goto L_125325b1;
L_1253258b:;
  /* 1253258b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253258f je 0x1253259e */
  if (C.zf) goto L_1253259e;
  /* 12532591 call 0x12532780 */
  push32(0x12532596u); f_12532780();
  /* 12532596 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1253259c jmp 0x125325a8 */
  goto L_125325a8;
L_1253259e:;
  /* 1253259e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_125325a8:;
  /* 125325a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 125325ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125325b1:;
  /* 125325b1 jmp 0x125325bb */
  goto L_125325bb;
L_125325b3:;
  /* 125325b3 call 0x12532780 */
  push32(0x125325b8u); f_12532780();
  /* 125325b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125325bb:;
  /* 125325bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125325bf je 0x125325d8 */
  if (C.zf) goto L_125325d8;
  /* 125325c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125325c3 call 0x1252c140 */
  push32(0x125325c8u); f_1252c140();
  /* 125325c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125325cb mov eax, dword ptr [0x12554cc4] */
  EAX = (r32((uint32_t)(0x12554cc4)));
  /* 125325d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125325d3 mov dword ptr [0x12554cc4], eax */
  w32((uint32_t)(0x12554cc4), (EAX));
L_125325d8:;
  /* 125325d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125325db:;
  /* 125325db mov esp, ebp */
  ESP = (EBP);
  /* 125325dd pop ebp */
  EBP = (pop32());
  /* 125325de ret  */
  ESPCHK(0x125321f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x125325e0 (403 bytes, 117 insns) */
void f_125325e0(void) {
  FTRACE(0x125325e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125325e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125325e1 mov ebp, esp */
  EBP = (ESP);
  /* 125325e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125325e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125325ec push eax */
  push32((uint32_t)(EAX));
  /* 125325ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 125325f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125325f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 125325fa push edx */
  push32((uint32_t)(EDX));
  /* 125325fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12532601 push eax */
  push32((uint32_t)(EAX));
  /* 12532602 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532605 push ecx */
  push32((uint32_t)(ECX));
  /* 12532606 call 0x12532880 */
  push32(0x1253260bu); f_12532880();
  /* 1253260b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253260e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532610 jne 0x12532619 */
  if (!C.zf) goto L_12532619;
  /* 12532612 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532614 jmp 0x1253276f */
  goto L_1253276f;
L_12532619:;
  /* 12532619 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1253261e push 0x12550630 */
  push32((uint32_t)(0x12550630u));
  /* 12532623 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532625 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1253262b push edx */
  push32((uint32_t)(EDX));
  /* 1253262c call 0x1252b4d0 */
  push32(0x12532631u); f_1252b4d0();
  /* 12532631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532637 push eax */
  push32((uint32_t)(EAX));
  /* 12532638 call 0x125286a0 */
  push32(0x1253263du); f_125286a0();
  /* 1253263d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532640 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12532643 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532647 jne 0x12532650 */
  if (!C.zf) goto L_12532650;
  /* 12532649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253264b jmp 0x1253276f */
  goto L_1253276f;
L_12532650:;
  /* 12532650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532653 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532656 mov ecx, dword ptr [eax + 0x125534dc] */
  ECX = (r32((uint32_t)(EAX + 0x125534dc)));
  /* 1253265c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253265f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532662 mov eax, dword ptr [edx*4 + 0x12554b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12554b40)));
  /* 12532669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253266c push 6 */
  push32((uint32_t)(0x6u));
  /* 1253266e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532671 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532674 add ecx, 0x12554b90 */
  { uint32_t _a=(ECX),_b=(0x12554b90u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253267a push ecx */
  push32((uint32_t)(ECX));
  /* 1253267b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1253267e push edx */
  push32((uint32_t)(EDX));
  /* 1253267f call 0x1252ef80 */
  push32(0x12532684u); f_1252ef80();
  /* 12532684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532687 mov eax, dword ptr [0x12554b58] */
  EAX = (r32((uint32_t)(0x12554b58)));
  /* 1253268c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1253268f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12532695 push ecx */
  push32((uint32_t)(ECX));
  /* 12532696 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532699 push edx */
  push32((uint32_t)(EDX));
  /* 1253269a call 0x1252b650 */
  push32(0x1253269fu); f_1252b650();
  /* 1253269f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125326a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125326a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125326a8 mov dword ptr [ecx + 0x125534dc], eax */
  w32((uint32_t)(ECX + 0x125534dc), (EAX));
  /* 125326ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125326b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125326ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125326bd mov dword ptr [eax*4 + 0x12554b40], edx */
  w32((uint32_t)(EAX*4 + 0x12554b40), (EDX));
  /* 125326c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 125326c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 125326cc push ecx */
  push32((uint32_t)(ECX));
  /* 125326cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125326d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125326d3 add edx, 0x12554b90 */
  { uint32_t _a=(EDX),_b=(0x12554b90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125326d9 push edx */
  push32((uint32_t)(EDX));
  /* 125326da call 0x1252ef80 */
  push32(0x125326dfu); f_1252ef80();
  /* 125326df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125326e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125326e6 jne 0x125326f3 */
  if (!C.zf) goto L_125326f3;
  /* 125326e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125326ee mov dword ptr [0x12554b58], eax */
  w32((uint32_t)(0x12554b58), (EAX));
L_125326f3:;
  /* 125326f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125326f7 jne 0x12532705 */
  if (!C.zf) goto L_12532705;
  /* 125326f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125326ff mov dword ptr [0x12554b5c], ecx */
  w32((uint32_t)(0x12554b5c), (ECX));
L_12532705:;
  /* 12532705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532708 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253270b call dword ptr [edx + 0x125534e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x125534e0))), 0x12532711u);
  /* 12532711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532713 je 0x1253274c */
  if (C.zf) goto L_1253274c;
  /* 12532715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532718 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253271b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253271e mov dword ptr [eax + 0x125534dc], ecx */
  w32((uint32_t)(EAX + 0x125534dc), (ECX));
  /* 12532724 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532726 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532729 push edx */
  push32((uint32_t)(EDX));
  /* 1253272a call 0x12529130 */
  push32(0x1253272fu); f_12529130();
  /* 1253272f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532738 mov dword ptr [eax*4 + 0x12554b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12554b40), (ECX));
  /* 1253273f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12532742 mov dword ptr [0x12554b58], edx */
  w32((uint32_t)(0x12554b58), (EDX));
  /* 12532748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253274a jmp 0x1253276f */
  goto L_1253276f;
L_1253274c:;
  /* 1253274c cmp dword ptr [ebp - 0xc], 0x125533c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x125533c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532753 je 0x12532763 */
  if (C.zf) goto L_12532763;
  /* 12532755 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532757 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253275a push eax */
  push32((uint32_t)(EAX));
  /* 1253275b call 0x12529130 */
  push32(0x12532760u); f_12529130();
  /* 12532760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12532763:;
  /* 12532763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532766 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532769 mov eax, dword ptr [ecx + 0x125534dc] */
  EAX = (r32((uint32_t)(ECX + 0x125534dc)));
L_1253276f:;
  /* 1253276f mov esp, ebp */
  ESP = (EBP);
  /* 12532771 pop ebp */
  EBP = (pop32());
  /* 12532772 ret  */
  ESPCHK(0x125325e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x12532780 (256 bytes, 72 insns) */
void f_12532780(void) {
  FTRACE(0x12532780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532780 push ebp */
  push32((uint32_t)(EBP));
  /* 12532781 mov ebp, esp */
  EBP = (ESP);
  /* 12532783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532786 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1253278d cmp dword ptr [0x125534dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125534dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532794 jne 0x125327b4 */
  if (!C.zf) goto L_125327b4;
  /* 12532796 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1253279b push 0x12550630 */
  push32((uint32_t)(0x12550630u));
  /* 125327a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125327a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 125327a7 call 0x125286a0 */
  push32(0x125327acu); f_125286a0();
  /* 125327ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125327af mov dword ptr [0x125534dc], eax */
  w32((uint32_t)(0x125534dc), (EAX));
L_125327b4:;
  /* 125327b4 mov eax, dword ptr [0x125534dc] */
  EAX = (r32((uint32_t)(0x125534dc)));
  /* 125327b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125327bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125327c3 jmp 0x125327ce */
  goto L_125327ce;
L_125327c5:;
  /* 125327c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125327c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125327cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125327ce:;
  /* 125327ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125327d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125327d4 mov eax, dword ptr [edx + 0x125534dc] */
  EAX = (r32((uint32_t)(EDX + 0x125534dc)));
  /* 125327da push eax */
  push32((uint32_t)(EAX));
  /* 125327db push 0x1255063c */
  push32((uint32_t)(0x1255063cu));
  /* 125327e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125327e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125327e6 mov edx, dword ptr [ecx + 0x125534d8] */
  EDX = (r32((uint32_t)(ECX + 0x125534d8)));
  /* 125327ec push edx */
  push32((uint32_t)(EDX));
  /* 125327ed push 3 */
  push32((uint32_t)(0x3u));
  /* 125327ef mov eax, dword ptr [0x125534dc] */
  EAX = (r32((uint32_t)(0x125534dc)));
  /* 125327f4 push eax */
  push32((uint32_t)(EAX));
  /* 125327f5 call 0x12532a20 */
  push32(0x125327fau); f_12532a20();
  /* 125327fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125327fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532801 jge 0x12532849 */
  if ((C.sf==C.of)) goto L_12532849;
  /* 12532803 push 0x12550628 */
  push32((uint32_t)(0x12550628u));
  /* 12532808 mov ecx, dword ptr [0x125534dc] */
  ECX = (r32((uint32_t)(0x125534dc)));
  /* 1253280e push ecx */
  push32((uint32_t)(ECX));
  /* 1253280f call 0x1252b660 */
  push32(0x12532814u); f_1252b660();
  /* 12532814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532817 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253281a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253281d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532820 mov eax, dword ptr [edx + 0x125534dc] */
  EAX = (r32((uint32_t)(EDX + 0x125534dc)));
  /* 12532826 push eax */
  push32((uint32_t)(EAX));
  /* 12532827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253282a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253282d mov edx, dword ptr [ecx + 0x125534dc] */
  EDX = (r32((uint32_t)(ECX + 0x125534dc)));
  /* 12532833 push edx */
  push32((uint32_t)(EDX));
  /* 12532834 call 0x12534330 */
  push32(0x12532839u); f_12534330();
  /* 12532839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253283c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253283e je 0x12532847 */
  if (C.zf) goto L_12532847;
  /* 12532840 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12532847:;
  /* 12532847 jmp 0x12532877 */
  goto L_12532877;
L_12532849:;
  /* 12532849 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253284d jne 0x12532856 */
  if (!C.zf) goto L_12532856;
  /* 1253284f mov eax, dword ptr [0x125534dc] */
  EAX = (r32((uint32_t)(0x125534dc)));
  /* 12532854 jmp 0x1253287c */
  goto L_1253287c;
L_12532856:;
  /* 12532856 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532858 mov eax, dword ptr [0x125534dc] */
  EAX = (r32((uint32_t)(0x125534dc)));
  /* 1253285d push eax */
  push32((uint32_t)(EAX));
  /* 1253285e call 0x12529130 */
  push32(0x12532863u); f_12529130();
  /* 12532863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532866 mov dword ptr [0x125534dc], 0 */
  w32((uint32_t)(0x125534dc), (0x0u));
  /* 12532870 mov eax, dword ptr [0x125534f4] */
  EAX = (r32((uint32_t)(0x125534f4)));
  /* 12532875 jmp 0x1253287c */
  goto L_1253287c;
L_12532877:;
  /* 12532877 jmp 0x125327c5 */
  goto L_125327c5;
L_1253287c:;
  /* 1253287c mov esp, ebp */
  ESP = (EBP);
  /* 1253287e pop ebp */
  EBP = (pop32());
  /* 1253287f ret  */
  ESPCHK(0x12532780u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x12532880 (388 bytes, 115 insns) */
void f_12532880(void) {
  FTRACE(0x12532880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532880 push ebp */
  push32((uint32_t)(EBP));
  /* 12532881 mov ebp, esp */
  EBP = (ESP);
  /* 12532883 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532889 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253288d jne 0x12532896 */
  if (!C.zf) goto L_12532896;
  /* 1253288f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532891 jmp 0x12532a00 */
  goto L_12532a00;
L_12532896:;
  /* 12532896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532899 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253289c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253289f jne 0x125328f0 */
  if (!C.zf) goto L_125328f0;
  /* 125328a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125328a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125328a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125328aa jne 0x125328f0 */
  if (!C.zf) goto L_125328f0;
  /* 125328ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125328af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 125328b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125328b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 125328b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125328bd je 0x125328d9 */
  if (C.zf) goto L_125328d9;
  /* 125328bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125328c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 125328c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125328ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 125328d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125328d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_125328d9:;
  /* 125328d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125328dd je 0x125328e8 */
  if (C.zf) goto L_125328e8;
  /* 125328df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125328e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125328e8:;
  /* 125328e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125328eb jmp 0x12532a00 */
  goto L_12532a00;
L_125328f0:;
  /* 125328f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125328f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125328f4 push 0x12553450 */
  push32((uint32_t)(0x12553450u));
  /* 125328f9 call 0x12534330 */
  push32(0x125328feu); f_12534330();
  /* 125328fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532903 je 0x125329b8 */
  if (C.zf) goto L_125329b8;
  /* 12532909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253290c push edx */
  push32((uint32_t)(EDX));
  /* 1253290d push 0x125533cc */
  push32((uint32_t)(0x125533ccu));
  /* 12532912 call 0x12534330 */
  push32(0x12532917u); f_12534330();
  /* 12532917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253291a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253291c je 0x125329b8 */
  if (C.zf) goto L_125329b8;
  /* 12532922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532925 push eax */
  push32((uint32_t)(EAX));
  /* 12532926 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1253292c push ecx */
  push32((uint32_t)(ECX));
  /* 1253292d call 0x12532a70 */
  push32(0x12532932u); f_12532a70();
  /* 12532932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532937 je 0x12532940 */
  if (C.zf) goto L_12532940;
  /* 12532939 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253293b jmp 0x12532a00 */
  goto L_12532a00;
L_12532940:;
  /* 12532940 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12532946 push edx */
  push32((uint32_t)(EDX));
  /* 12532947 push 0x12554b68 */
  push32((uint32_t)(0x12554b68u));
  /* 1253294c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12532952 push eax */
  push32((uint32_t)(EAX));
  /* 12532953 call 0x12534480 */
  push32(0x12532958u); f_12534480();
  /* 12532958 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253295b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253295d jne 0x12532966 */
  if (!C.zf) goto L_12532966;
  /* 1253295f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532961 jmp 0x12532a00 */
  goto L_12532a00;
L_12532966:;
  /* 12532966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12532968 mov cx, word ptr [0x12554b6c] */
  CX = (r16((uint32_t)(0x12554b6c)));
  /* 1253296f mov dword ptr [0x12554b70], ecx */
  w32((uint32_t)(0x12554b70), (ECX));
  /* 12532975 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1253297b push edx */
  push32((uint32_t)(EDX));
  /* 1253297c push 0x12553450 */
  push32((uint32_t)(0x12553450u));
  /* 12532981 call 0x12532bd0 */
  push32(0x12532986u); f_12532bd0();
  /* 12532986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253298c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253298f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12532991 je 0x125329a6 */
  if (C.zf) goto L_125329a6;
  /* 12532993 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532996 push edx */
  push32((uint32_t)(EDX));
  /* 12532997 push 0x125533cc */
  push32((uint32_t)(0x125533ccu));
  /* 1253299c call 0x1252b650 */
  push32(0x125329a1u); f_1252b650();
  /* 125329a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125329a4 jmp 0x125329b8 */
  goto L_125329b8;
L_125329a6:;
  /* 125329a6 push 0x12553450 */
  push32((uint32_t)(0x12553450u));
  /* 125329ab push 0x125533cc */
  push32((uint32_t)(0x125533ccu));
  /* 125329b0 call 0x1252b650 */
  push32(0x125329b5u); f_1252b650();
  /* 125329b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125329b8:;
  /* 125329b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125329bc je 0x125329d1 */
  if (C.zf) goto L_125329d1;
  /* 125329be push 6 */
  push32((uint32_t)(0x6u));
  /* 125329c0 push 0x12554b68 */
  push32((uint32_t)(0x12554b68u));
  /* 125329c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125329c8 push eax */
  push32((uint32_t)(EAX));
  /* 125329c9 call 0x1252ef80 */
  push32(0x125329ceu); f_1252ef80();
  /* 125329ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125329d1:;
  /* 125329d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125329d5 je 0x125329ea */
  if (C.zf) goto L_125329ea;
  /* 125329d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 125329d9 push 0x12554b70 */
  push32((uint32_t)(0x12554b70u));
  /* 125329de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125329e1 push ecx */
  push32((uint32_t)(ECX));
  /* 125329e2 call 0x1252ef80 */
  push32(0x125329e7u); f_1252ef80();
  /* 125329e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125329ea:;
  /* 125329ea push 0x12553450 */
  push32((uint32_t)(0x12553450u));
  /* 125329ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125329f2 push edx */
  push32((uint32_t)(EDX));
  /* 125329f3 call 0x1252b650 */
  push32(0x125329f8u); f_1252b650();
  /* 125329f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125329fb mov eax, 0x12553450 */
  EAX = (0x12553450u);
L_12532a00:;
  /* 12532a00 mov esp, ebp */
  ESP = (EBP);
  /* 12532a02 pop ebp */
  EBP = (pop32());
  /* 12532a03 ret  */
  ESPCHK(0x12532880u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x12532a10 (7 bytes, 5 insns) */
void f_12532a10(void) {
  FTRACE(0x12532a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12532a11 mov ebp, esp */
  EBP = (ESP);
  /* 12532a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532a15 pop ebp */
  EBP = (pop32());
  /* 12532a16 ret  */
  ESPCHK(0x12532a10u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12532a20 (79 bytes, 28 insns) */
void f_12532a20(void) {
  FTRACE(0x12532a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12532a21 mov ebp, esp */
  EBP = (ESP);
  /* 12532a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532a26 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12532a29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532a2c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12532a33 jmp 0x12532a3e */
  goto L_12532a3e;
L_12532a35:;
  /* 12532a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532a38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532a3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12532a3e:;
  /* 12532a3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532a41 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532a44 jge 0x12532a64 */
  if ((C.sf==C.of)) goto L_12532a64;
  /* 12532a46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532a49 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532a4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532a52 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12532a55 push edx */
  push32((uint32_t)(EDX));
  /* 12532a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532a59 push eax */
  push32((uint32_t)(EAX));
  /* 12532a5a call 0x1252b660 */
  push32(0x12532a5fu); f_1252b660();
  /* 12532a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532a62 jmp 0x12532a35 */
  goto L_12532a35;
L_12532a64:;
  /* 12532a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12532a6b mov esp, ebp */
  ESP = (EBP);
  /* 12532a6d pop ebp */
  EBP = (pop32());
  /* 12532a6e ret  */
  ESPCHK(0x12532a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a70 @ 0x12532a70 (349 bytes, 122 insns) */
void f_12532a70(void) {
  FTRACE(0x12532a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12532a71 mov ebp, esp */
  EBP = (ESP);
  /* 12532a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532a76 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12532a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12532a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532a80 push eax */
  push32((uint32_t)(EAX));
  /* 12532a81 call 0x1252c410 */
  push32(0x12532a86u); f_1252c410();
  /* 12532a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532a89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532a8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12532a8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12532a91 jne 0x12532a9a */
  if (!C.zf) goto L_12532a9a;
  /* 12532a93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532a95 jmp 0x12532bc9 */
  goto L_12532bc9;
L_12532a9a:;
  /* 12532a9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532a9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12532aa0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532aa3 jne 0x12532ad0 */
  if (!C.zf) goto L_12532ad0;
  /* 12532aa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532aa8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12532aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532aae je 0x12532ad0 */
  if (C.zf) goto L_12532ad0;
  /* 12532ab0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532ab3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12532ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532aba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ac0 push edx */
  push32((uint32_t)(EDX));
  /* 12532ac1 call 0x1252b650 */
  push32(0x12532ac6u); f_1252b650();
  /* 12532ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ac9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532acb jmp 0x12532bc9 */
  goto L_12532bc9;
L_12532ad0:;
  /* 12532ad0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12532ad7 jmp 0x12532ae2 */
  goto L_12532ae2;
L_12532ad9:;
  /* 12532ad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532adc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532adf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12532ae2:;
  /* 12532ae2 push 0x12550640 */
  push32((uint32_t)(0x12550640u));
  /* 12532ae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532aea push ecx */
  push32((uint32_t)(ECX));
  /* 12532aeb call 0x125343c0 */
  push32(0x12532af0u); f_125343c0();
  /* 12532af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532af3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12532af6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532afa jne 0x12532b04 */
  if (!C.zf) goto L_12532b04;
  /* 12532afc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12532aff jmp 0x12532bc9 */
  goto L_12532bc9;
L_12532b04:;
  /* 12532b04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532b07 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12532b0c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12532b0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b13 jne 0x12532b3a */
  if (!C.zf) goto L_12532b3a;
  /* 12532b15 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b19 jge 0x12532b3a */
  if ((C.sf==C.of)) goto L_12532b3a;
  /* 12532b1b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532b1f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b22 je 0x12532b3a */
  if (C.zf) goto L_12532b3a;
  /* 12532b24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532b27 push edx */
  push32((uint32_t)(EDX));
  /* 12532b28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532b2b push eax */
  push32((uint32_t)(EAX));
  /* 12532b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532b2f push ecx */
  push32((uint32_t)(ECX));
  /* 12532b30 call 0x1252bec0 */
  push32(0x12532b35u); f_1252bec0();
  /* 12532b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b38 jmp 0x12532ba0 */
  goto L_12532ba0;
L_12532b3a:;
  /* 12532b3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b3e jne 0x12532b68 */
  if (!C.zf) goto L_12532b68;
  /* 12532b40 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b44 jge 0x12532b68 */
  if ((C.sf==C.of)) goto L_12532b68;
  /* 12532b46 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532b4a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b4d je 0x12532b68 */
  if (C.zf) goto L_12532b68;
  /* 12532b4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532b52 push eax */
  push32((uint32_t)(EAX));
  /* 12532b53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532b56 push ecx */
  push32((uint32_t)(ECX));
  /* 12532b57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532b5a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b5d push edx */
  push32((uint32_t)(EDX));
  /* 12532b5e call 0x1252bec0 */
  push32(0x12532b63u); f_1252bec0();
  /* 12532b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b66 jmp 0x12532ba0 */
  goto L_12532ba0;
L_12532b68:;
  /* 12532b68 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b6c jne 0x12532b9b */
  if (!C.zf) goto L_12532b9b;
  /* 12532b6e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532b74 je 0x12532b7f */
  if (C.zf) goto L_12532b7f;
  /* 12532b76 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532b7a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532b7d jne 0x12532b9b */
  if (!C.zf) goto L_12532b9b;
L_12532b7f:;
  /* 12532b7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532b82 push edx */
  push32((uint32_t)(EDX));
  /* 12532b83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532b86 push eax */
  push32((uint32_t)(EAX));
  /* 12532b87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532b8a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b90 push ecx */
  push32((uint32_t)(ECX));
  /* 12532b91 call 0x1252bec0 */
  push32(0x12532b96u); f_1252bec0();
  /* 12532b96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532b99 jmp 0x12532ba0 */
  goto L_12532ba0;
L_12532b9b:;
  /* 12532b9b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12532b9e jmp 0x12532bc9 */
  goto L_12532bc9;
L_12532ba0:;
  /* 12532ba0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532ba4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532ba7 jne 0x12532bab */
  if (!C.zf) goto L_12532bab;
  /* 12532ba9 jmp 0x12532bc7 */
  goto L_12532bc7;
L_12532bab:;
  /* 12532bab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12532baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532bb1 jne 0x12532bb5 */
  if (!C.zf) goto L_12532bb5;
  /* 12532bb3 jmp 0x12532bc7 */
  goto L_12532bc7;
L_12532bb5:;
  /* 12532bb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532bb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532bbb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12532bbf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12532bc2 jmp 0x12532ad9 */
  goto L_12532ad9;
L_12532bc7:;
  /* 12532bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12532bc9:;
  /* 12532bc9 mov esp, ebp */
  ESP = (EBP);
  /* 12532bcb pop ebp */
  EBP = (pop32());
  /* 12532bcc ret  */
  ESPCHK(0x12532a70u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12532bd0 (101 bytes, 36 insns) */
void f_12532bd0(void) {
  FTRACE(0x12532bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12532bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12532bd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532bd6 push eax */
  push32((uint32_t)(EAX));
  /* 12532bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532bda push ecx */
  push32((uint32_t)(ECX));
  /* 12532bdb call 0x1252b650 */
  push32(0x12532be0u); f_1252b650();
  /* 12532be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532be3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532be6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12532bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532bec je 0x12532c08 */
  if (C.zf) goto L_12532c08;
  /* 12532bee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532bf1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 12532bf5 push 0x12550648 */
  push32((uint32_t)(0x12550648u));
  /* 12532bfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12532bfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532bff push edx */
  push32((uint32_t)(EDX));
  /* 12532c00 call 0x12532a20 */
  push32(0x12532c05u); f_12532a20();
  /* 12532c05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12532c08:;
  /* 12532c08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532c0b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12532c12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12532c14 je 0x12532c33 */
  if (C.zf) goto L_12532c33;
  /* 12532c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12532c19 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532c1f push edx */
  push32((uint32_t)(EDX));
  /* 12532c20 push 0x12550644 */
  push32((uint32_t)(0x12550644u));
  /* 12532c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532c27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532c2a push eax */
  push32((uint32_t)(EAX));
  /* 12532c2b call 0x12532a20 */
  push32(0x12532c30u); f_12532a20();
  /* 12532c30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12532c33:;
  /* 12532c33 pop ebp */
  EBP = (pop32());
  /* 12532c34 ret  */
  ESPCHK(0x12532bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x12532c40 (130 bytes, 50 insns) */
void f_12532c40(void) {
  FTRACE(0x12532c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12532c41 mov ebp, esp */
  EBP = (ESP);
  /* 12532c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12532c44 push ebx */
  push32((uint32_t)(EBX));
  /* 12532c45 push esi */
  push32((uint32_t)(ESI));
  /* 12532c46 push edi */
  push32((uint32_t)(EDI));
  /* 12532c47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12532c4e:;
  /* 12532c4e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532c52 jne 0x12532c72 */
  if (!C.zf) goto L_12532c72;
  /* 12532c54 push 0x12550658 */
  push32((uint32_t)(0x12550658u));
  /* 12532c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12532c5b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12532c5d push 0x1255064c */
  push32((uint32_t)(0x1255064cu));
  /* 12532c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532c64 call 0x12527760 */
  push32(0x12532c69u); f_12527760();
  /* 12532c69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532c6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532c6f jne 0x12532c72 */
  if (!C.zf) goto L_12532c72;
  /* 12532c71 int3  */
  x86_unimpl("int3 @ 0x12532c71");
L_12532c72:;
  /* 12532c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532c76 jne 0x12532c4e */
  if (!C.zf) goto L_12532c4e;
  /* 12532c78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532c7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12532c7e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12532c81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12532c83 je 0x12532c91 */
  if (C.zf) goto L_12532c91;
  /* 12532c85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532c88 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12532c8f jmp 0x12532cb8 */
  goto L_12532cb8;
L_12532c91:;
  /* 12532c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532c94 push ecx */
  push32((uint32_t)(ECX));
  /* 12532c95 call 0x125314b0 */
  push32(0x12532c9au); f_125314b0();
  /* 12532c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532c9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532ca0 push edx */
  push32((uint32_t)(EDX));
  /* 12532ca1 call 0x12532cd0 */
  push32(0x12532ca6u); f_12532cd0();
  /* 12532ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532caf push eax */
  push32((uint32_t)(EAX));
  /* 12532cb0 call 0x12531520 */
  push32(0x12532cb5u); f_12531520();
  /* 12532cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12532cb8:;
  /* 12532cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532cbb pop edi */
  EDI = (pop32());
  /* 12532cbc pop esi */
  ESI = (pop32());
  /* 12532cbd pop ebx */
  EBX = (pop32());
  /* 12532cbe mov esp, ebp */
  ESP = (EBP);
  /* 12532cc0 pop ebp */
  EBP = (pop32());
  /* 12532cc1 ret  */
  ESPCHK(0x12532c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cd0 @ 0x12532cd0 (190 bytes, 67 insns) */
void f_12532cd0(void) {
  FTRACE(0x12532cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12532cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12532cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12532cd7 push esi */
  push32((uint32_t)(ESI));
  /* 12532cd8 push edi */
  push32((uint32_t)(EDI));
  /* 12532cd9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12532ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532ce3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12532ce6:;
  /* 12532ce6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532cea jne 0x12532d0a */
  if (!C.zf) goto L_12532d0a;
  /* 12532cec push 0x125504fc */
  push32((uint32_t)(0x125504fcu));
  /* 12532cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12532cf3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12532cf5 push 0x1255064c */
  push32((uint32_t)(0x1255064cu));
  /* 12532cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12532cfc call 0x12527760 */
  push32(0x12532d01u); f_12527760();
  /* 12532d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532d07 jne 0x12532d0a */
  if (!C.zf) goto L_12532d0a;
  /* 12532d09 int3  */
  x86_unimpl("int3 @ 0x12532d09");
L_12532d0a:;
  /* 12532d0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12532d0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12532d0e jne 0x12532ce6 */
  if (!C.zf) goto L_12532ce6;
  /* 12532d10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12532d16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12532d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532d1d je 0x12532d7a */
  if (C.zf) goto L_12532d7a;
  /* 12532d1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d22 push ecx */
  push32((uint32_t)(ECX));
  /* 12532d23 call 0x12531fd0 */
  push32(0x12532d28u); f_12531fd0();
  /* 12532d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532d2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532d2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d31 push edx */
  push32((uint32_t)(EDX));
  /* 12532d32 call 0x12535350 */
  push32(0x12532d37u); f_12535350();
  /* 12532d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532d3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12532d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12532d41 call 0x12535220 */
  push32(0x12532d46u); f_12535220();
  /* 12532d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532d4b jge 0x12532d56 */
  if ((C.sf==C.of)) goto L_12532d56;
  /* 12532d4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12532d54 jmp 0x12532d7a */
  goto L_12532d7a;
L_12532d56:;
  /* 12532d56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532d5d je 0x12532d7a */
  if (C.zf) goto L_12532d7a;
  /* 12532d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12532d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12532d67 push ecx */
  push32((uint32_t)(ECX));
  /* 12532d68 call 0x12529130 */
  push32(0x12532d6du); f_12529130();
  /* 12532d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532d70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12532d7a:;
  /* 12532d7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12532d7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12532d84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532d87 pop edi */
  EDI = (pop32());
  /* 12532d88 pop esi */
  ESI = (pop32());
  /* 12532d89 pop ebx */
  EBX = (pop32());
  /* 12532d8a mov esp, ebp */
  ESP = (EBP);
  /* 12532d8c pop ebp */
  EBP = (pop32());
  /* 12532d8d ret  */
  ESPCHK(0x12532cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d90 @ 0x12532d90 (210 bytes, 63 insns) */
void f_12532d90(void) {
  FTRACE(0x12532d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12532d91 mov ebp, esp */
  EBP = (ESP);
  /* 12532d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12532d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532d97 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532d9d jae 0x12532dc1 */
  if (!C.cf) goto L_12532dc1;
  /* 12532d9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532da2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12532da5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532da8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12532dab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532dae mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12532db5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12532dba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12532dbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12532dbf jne 0x12532dd4 */
  if (!C.zf) goto L_12532dd4;
L_12532dc1:;
  /* 12532dc1 call 0x12530570 */
  push32(0x12532dc6u); f_12530570();
  /* 12532dc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12532dcc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12532dcf jmp 0x12532e5e */
  goto L_12532e5e;
L_12532dd4:;
  /* 12532dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12532dd8 call 0x12531d90 */
  push32(0x12532dddu); f_12531d90();
  /* 12532ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532de3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12532de6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532de9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12532dec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12532def mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12532df6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12532dfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12532dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532e00 je 0x12532e3d */
  if (C.zf) goto L_12532e3d;
  /* 12532e02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532e05 push ecx */
  push32((uint32_t)(ECX));
  /* 12532e06 call 0x12531c10 */
  push32(0x12532e0bu); f_12531c10();
  /* 12532e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532e0e push eax */
  push32((uint32_t)(EAX));
  /* 12532e0f call dword ptr [0x12557300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557300))), 0x12532e15u);
  /* 12532e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532e17 jne 0x12532e24 */
  if (!C.zf) goto L_12532e24;
  /* 12532e19 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x12532e1fu);
  /* 12532e1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532e22 jmp 0x12532e2b */
  goto L_12532e2b;
L_12532e24:;
  /* 12532e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12532e2b:;
  /* 12532e2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532e2f jne 0x12532e33 */
  if (!C.zf) goto L_12532e33;
  /* 12532e31 jmp 0x12532e4f */
  goto L_12532e4f;
L_12532e33:;
  /* 12532e33 call 0x12530580 */
  push32(0x12532e38u); f_12530580();
  /* 12532e38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532e3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12532e3d:;
  /* 12532e3d call 0x12530570 */
  push32(0x12532e42u); f_12530570();
  /* 12532e42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12532e48 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12532e4f:;
  /* 12532e4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532e52 push eax */
  push32((uint32_t)(EAX));
  /* 12532e53 call 0x12531e20 */
  push32(0x12532e58u); f_12531e20();
  /* 12532e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532e5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12532e5e:;
  /* 12532e5e mov esp, ebp */
  ESP = (EBP);
  /* 12532e60 pop ebp */
  EBP = (pop32());
  /* 12532e61 ret  */
  ESPCHK(0x12532d90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12532e70 (219 bytes, 64 insns) */
void f_12532e70(void) {
  FTRACE(0x12532e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12532e71 mov ebp, esp */
  EBP = (ESP);
  /* 12532e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12532e74 cmp dword ptr [0x12554b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532e7b je 0x12532f11 */
  if (C.zf) goto L_12532f11;
  /* 12532e81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12532e83 push 0x12550668 */
  push32((uint32_t)(0x12550668u));
  /* 12532e88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532e8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12532e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12532e91 call 0x12528ab0 */
  push32(0x12532e96u); f_12528ab0();
  /* 12532e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532e9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532ea0 jne 0x12532eac */
  if (!C.zf) goto L_12532eac;
  /* 12532ea2 mov eax, 1 */
  EAX = (0x1u);
  /* 12532ea7 jmp 0x12532f47 */
  goto L_12532f47;
L_12532eac:;
  /* 12532eac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532eaf push eax */
  push32((uint32_t)(EAX));
  /* 12532eb0 call 0x12532f50 */
  push32(0x12532eb5u); f_12532f50();
  /* 12532eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12532eba je 0x12532edd */
  if (C.zf) goto L_12532edd;
  /* 12532ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532ebf push ecx */
  push32((uint32_t)(ECX));
  /* 12532ec0 call 0x125334e0 */
  push32(0x12532ec5u); f_125334e0();
  /* 12532ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532eca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532ecd push edx */
  push32((uint32_t)(EDX));
  /* 12532ece call 0x12529130 */
  push32(0x12532ed3u); f_12529130();
  /* 12532ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ed6 mov eax, 1 */
  EAX = (0x1u);
  /* 12532edb jmp 0x12532f47 */
  goto L_12532f47;
L_12532edd:;
  /* 12532edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532ee0 mov dword ptr [0x12553c98], eax */
  w32((uint32_t)(0x12553c98), (EAX));
  /* 12532ee5 mov ecx, dword ptr [0x12554b74] */
  ECX = (r32((uint32_t)(0x12554b74)));
  /* 12532eeb push ecx */
  push32((uint32_t)(ECX));
  /* 12532eec call 0x125334e0 */
  push32(0x12532ef1u); f_125334e0();
  /* 12532ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12532ef6 mov edx, dword ptr [0x12554b74] */
  EDX = (r32((uint32_t)(0x12554b74)));
  /* 12532efc push edx */
  push32((uint32_t)(EDX));
  /* 12532efd call 0x12529130 */
  push32(0x12532f02u); f_12529130();
  /* 12532f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532f08 mov dword ptr [0x12554b74], eax */
  w32((uint32_t)(0x12554b74), (EAX));
  /* 12532f0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532f0f jmp 0x12532f47 */
  goto L_12532f47;
L_12532f11:;
  /* 12532f11 mov dword ptr [0x12553c98], 0x12553ca0 */
  w32((uint32_t)(0x12553c98), (0x12553ca0u));
  /* 12532f1b mov ecx, dword ptr [0x12554b74] */
  ECX = (r32((uint32_t)(0x12554b74)));
  /* 12532f21 push ecx */
  push32((uint32_t)(ECX));
  /* 12532f22 call 0x125334e0 */
  push32(0x12532f27u); f_125334e0();
  /* 12532f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12532f2c mov edx, dword ptr [0x12554b74] */
  EDX = (r32((uint32_t)(0x12554b74)));
  /* 12532f32 push edx */
  push32((uint32_t)(EDX));
  /* 12532f33 call 0x12529130 */
  push32(0x12532f38u); f_12529130();
  /* 12532f38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532f3b mov dword ptr [0x12554b74], 0 */
  w32((uint32_t)(0x12554b74), (0x0u));
  /* 12532f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12532f47:;
  /* 12532f47 mov esp, ebp */
  ESP = (EBP);
  /* 12532f49 pop ebp */
  EBP = (pop32());
  /* 12532f4a ret  */
  ESPCHK(0x12532e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x12532f50 (1423 bytes, 533 insns) */
void f_12532f50(void) {
  FTRACE(0x12532f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12532f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12532f51 mov ebp, esp */
  EBP = (ESP);
  /* 12532f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12532f56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12532f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12532f5f mov ax, word ptr [0x12554bae] */
  AX = (r16((uint32_t)(0x12554bae)));
  /* 12532f65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12532f68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12532f6a mov cx, word ptr [0x12554bb0] */
  CX = (r16((uint32_t)(0x12554bb0)));
  /* 12532f71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12532f74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12532f78 jne 0x12532f82 */
  if (!C.zf) goto L_12532f82;
  /* 12532f7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12532f7d jmp 0x125334db */
  goto L_125334db;
L_12532f82:;
  /* 12532f82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532f85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532f88 push edx */
  push32((uint32_t)(EDX));
  /* 12532f89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12532f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532f8e push eax */
  push32((uint32_t)(EAX));
  /* 12532f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12532f91 call 0x12536860 */
  push32(0x12532f96u); f_12536860();
  /* 12532f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532f99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532f9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12532f9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12532fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532fa4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532fa7 push edx */
  push32((uint32_t)(EDX));
  /* 12532fa8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12532faa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532fad push eax */
  push32((uint32_t)(EAX));
  /* 12532fae push 1 */
  push32((uint32_t)(0x1u));
  /* 12532fb0 call 0x12536860 */
  push32(0x12532fb5u); f_12536860();
  /* 12532fb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532fb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532fbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12532fbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12532fc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532fc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532fc6 push edx */
  push32((uint32_t)(EDX));
  /* 12532fc7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12532fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532fcc push eax */
  push32((uint32_t)(EAX));
  /* 12532fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12532fcf call 0x12536860 */
  push32(0x12532fd4u); f_12536860();
  /* 12532fd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532fd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532fda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12532fdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12532fdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12532fe2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12532fe5 push edx */
  push32((uint32_t)(EDX));
  /* 12532fe6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12532fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12532feb push eax */
  push32((uint32_t)(EAX));
  /* 12532fec push 1 */
  push32((uint32_t)(0x1u));
  /* 12532fee call 0x12536860 */
  push32(0x12532ff3u); f_12536860();
  /* 12532ff3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12532ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12532ff9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12532ffb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12532ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533001 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533004 push edx */
  push32((uint32_t)(EDX));
  /* 12533005 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12533007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253300a push eax */
  push32((uint32_t)(EAX));
  /* 1253300b push 1 */
  push32((uint32_t)(0x1u));
  /* 1253300d call 0x12536860 */
  push32(0x12533012u); f_12536860();
  /* 12533012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533018 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253301a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253301d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533020 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533023 push edx */
  push32((uint32_t)(EDX));
  /* 12533024 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12533026 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533029 push eax */
  push32((uint32_t)(EAX));
  /* 1253302a push 1 */
  push32((uint32_t)(0x1u));
  /* 1253302c call 0x12536860 */
  push32(0x12533031u); f_12536860();
  /* 12533031 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533037 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533039 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253303c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253303f push edx */
  push32((uint32_t)(EDX));
  /* 12533040 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12533042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533045 push eax */
  push32((uint32_t)(EAX));
  /* 12533046 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533048 call 0x12536860 */
  push32(0x1253304du); f_12536860();
  /* 1253304d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533053 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533055 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253305b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253305e push edx */
  push32((uint32_t)(EDX));
  /* 1253305f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12533061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533064 push eax */
  push32((uint32_t)(EAX));
  /* 12533065 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533067 call 0x12536860 */
  push32(0x1253306cu); f_12536860();
  /* 1253306c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253306f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533072 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533074 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253307a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253307d push edx */
  push32((uint32_t)(EDX));
  /* 1253307e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12533080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533083 push eax */
  push32((uint32_t)(EAX));
  /* 12533084 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533086 call 0x12536860 */
  push32(0x1253308bu); f_12536860();
  /* 1253308b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253308e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533091 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533096 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533099 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253309c push edx */
  push32((uint32_t)(EDX));
  /* 1253309d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1253309f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125330a2 push eax */
  push32((uint32_t)(EAX));
  /* 125330a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125330a5 call 0x12536860 */
  push32(0x125330aau); f_12536860();
  /* 125330aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125330ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125330b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125330b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125330b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125330b8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125330bb push edx */
  push32((uint32_t)(EDX));
  /* 125330bc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125330be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125330c1 push eax */
  push32((uint32_t)(EAX));
  /* 125330c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125330c4 call 0x12536860 */
  push32(0x125330c9u); f_12536860();
  /* 125330c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125330cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125330cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125330d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125330d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125330d7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125330da push edx */
  push32((uint32_t)(EDX));
  /* 125330db push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125330dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125330e0 push eax */
  push32((uint32_t)(EAX));
  /* 125330e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125330e3 call 0x12536860 */
  push32(0x125330e8u); f_12536860();
  /* 125330e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125330eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125330ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125330f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125330f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125330f6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125330f9 push edx */
  push32((uint32_t)(EDX));
  /* 125330fa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125330fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125330ff push eax */
  push32((uint32_t)(EAX));
  /* 12533100 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533102 call 0x12536860 */
  push32(0x12533107u); f_12536860();
  /* 12533107 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253310a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253310d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253310f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533115 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533118 push edx */
  push32((uint32_t)(EDX));
  /* 12533119 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1253311b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253311e push eax */
  push32((uint32_t)(EAX));
  /* 1253311f push 1 */
  push32((uint32_t)(0x1u));
  /* 12533121 call 0x12536860 */
  push32(0x12533126u); f_12536860();
  /* 12533126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533129 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253312c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253312e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533134 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533137 push edx */
  push32((uint32_t)(EDX));
  /* 12533138 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1253313a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253313d push eax */
  push32((uint32_t)(EAX));
  /* 1253313e push 1 */
  push32((uint32_t)(0x1u));
  /* 12533140 call 0x12536860 */
  push32(0x12533145u); f_12536860();
  /* 12533145 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533148 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253314b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253314d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533153 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533156 push edx */
  push32((uint32_t)(EDX));
  /* 12533157 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12533159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253315c push eax */
  push32((uint32_t)(EAX));
  /* 1253315d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253315f call 0x12536860 */
  push32(0x12533164u); f_12536860();
  /* 12533164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253316a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253316c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253316f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533172 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533175 push edx */
  push32((uint32_t)(EDX));
  /* 12533176 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12533178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253317b push eax */
  push32((uint32_t)(EAX));
  /* 1253317c push 1 */
  push32((uint32_t)(0x1u));
  /* 1253317e call 0x12536860 */
  push32(0x12533183u); f_12536860();
  /* 12533183 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533189 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253318b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253318e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533191 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533194 push edx */
  push32((uint32_t)(EDX));
  /* 12533195 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12533197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253319a push eax */
  push32((uint32_t)(EAX));
  /* 1253319b push 1 */
  push32((uint32_t)(0x1u));
  /* 1253319d call 0x12536860 */
  push32(0x125331a2u); f_12536860();
  /* 125331a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125331a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125331a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125331aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125331ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125331b0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125331b3 push edx */
  push32((uint32_t)(EDX));
  /* 125331b4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125331b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125331b9 push eax */
  push32((uint32_t)(EAX));
  /* 125331ba push 1 */
  push32((uint32_t)(0x1u));
  /* 125331bc call 0x12536860 */
  push32(0x125331c1u); f_12536860();
  /* 125331c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125331c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125331c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125331c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125331cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125331cf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125331d2 push edx */
  push32((uint32_t)(EDX));
  /* 125331d3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125331d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125331d8 push eax */
  push32((uint32_t)(EAX));
  /* 125331d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125331db call 0x12536860 */
  push32(0x125331e0u); f_12536860();
  /* 125331e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125331e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125331e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125331e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125331eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125331ee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125331f1 push edx */
  push32((uint32_t)(EDX));
  /* 125331f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125331f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125331f7 push eax */
  push32((uint32_t)(EAX));
  /* 125331f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125331fa call 0x12536860 */
  push32(0x125331ffu); f_12536860();
  /* 125331ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533202 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533205 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533207 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253320a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253320d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533210 push edx */
  push32((uint32_t)(EDX));
  /* 12533211 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12533213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533216 push eax */
  push32((uint32_t)(EAX));
  /* 12533217 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533219 call 0x12536860 */
  push32(0x1253321eu); f_12536860();
  /* 1253321e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533221 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533224 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533226 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253322c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253322f push edx */
  push32((uint32_t)(EDX));
  /* 12533230 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12533232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533235 push eax */
  push32((uint32_t)(EAX));
  /* 12533236 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533238 call 0x12536860 */
  push32(0x1253323du); f_12536860();
  /* 1253323d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533243 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533245 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253324b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253324e push edx */
  push32((uint32_t)(EDX));
  /* 1253324f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12533251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533254 push eax */
  push32((uint32_t)(EAX));
  /* 12533255 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533257 call 0x12536860 */
  push32(0x1253325cu); f_12536860();
  /* 1253325c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253325f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533262 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533264 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253326a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253326d push edx */
  push32((uint32_t)(EDX));
  /* 1253326e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12533270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533273 push eax */
  push32((uint32_t)(EAX));
  /* 12533274 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533276 call 0x12536860 */
  push32(0x1253327bu); f_12536860();
  /* 1253327b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253327e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533281 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533283 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533286 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533289 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253328c push edx */
  push32((uint32_t)(EDX));
  /* 1253328d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1253328f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533292 push eax */
  push32((uint32_t)(EAX));
  /* 12533293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533295 call 0x12536860 */
  push32(0x1253329au); f_12536860();
  /* 1253329a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253329d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125332a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125332a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125332a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125332a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125332ab push edx */
  push32((uint32_t)(EDX));
  /* 125332ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 125332ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125332b1 push eax */
  push32((uint32_t)(EAX));
  /* 125332b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125332b4 call 0x12536860 */
  push32(0x125332b9u); f_12536860();
  /* 125332b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125332bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125332bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125332c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125332c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125332c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125332ca push edx */
  push32((uint32_t)(EDX));
  /* 125332cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 125332cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125332d0 push eax */
  push32((uint32_t)(EAX));
  /* 125332d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125332d3 call 0x12536860 */
  push32(0x125332d8u); f_12536860();
  /* 125332d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125332db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125332de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125332e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125332e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125332e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125332e9 push edx */
  push32((uint32_t)(EDX));
  /* 125332ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125332ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125332ef push eax */
  push32((uint32_t)(EAX));
  /* 125332f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125332f2 call 0x12536860 */
  push32(0x125332f7u); f_12536860();
  /* 125332f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125332fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125332fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125332ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533305 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533308 push edx */
  push32((uint32_t)(EDX));
  /* 12533309 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1253330b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253330e push eax */
  push32((uint32_t)(EAX));
  /* 1253330f push 1 */
  push32((uint32_t)(0x1u));
  /* 12533311 call 0x12536860 */
  push32(0x12533316u); f_12536860();
  /* 12533316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533319 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253331c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253331e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533324 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533327 push edx */
  push32((uint32_t)(EDX));
  /* 12533328 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1253332a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253332d push eax */
  push32((uint32_t)(EAX));
  /* 1253332e push 1 */
  push32((uint32_t)(0x1u));
  /* 12533330 call 0x12536860 */
  push32(0x12533335u); f_12536860();
  /* 12533335 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533338 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253333b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253333d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533343 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533346 push edx */
  push32((uint32_t)(EDX));
  /* 12533347 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12533349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253334c push eax */
  push32((uint32_t)(EAX));
  /* 1253334d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253334f call 0x12536860 */
  push32(0x12533354u); f_12536860();
  /* 12533354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253335a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253335c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253335f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533362 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533368 push edx */
  push32((uint32_t)(EDX));
  /* 12533369 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1253336b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253336e push eax */
  push32((uint32_t)(EAX));
  /* 1253336f push 1 */
  push32((uint32_t)(0x1u));
  /* 12533371 call 0x12536860 */
  push32(0x12533376u); f_12536860();
  /* 12533376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533379 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253337c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253337e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533384 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253338a push edx */
  push32((uint32_t)(EDX));
  /* 1253338b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1253338d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533390 push eax */
  push32((uint32_t)(EAX));
  /* 12533391 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533393 call 0x12536860 */
  push32(0x12533398u); f_12536860();
  /* 12533398 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253339b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253339e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125333a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125333a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125333a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125333ac push edx */
  push32((uint32_t)(EDX));
  /* 125333ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125333af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125333b2 push eax */
  push32((uint32_t)(EAX));
  /* 125333b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125333b5 call 0x12536860 */
  push32(0x125333bau); f_12536860();
  /* 125333ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125333bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125333c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125333c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125333c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125333c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125333ce push edx */
  push32((uint32_t)(EDX));
  /* 125333cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 125333d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125333d4 push eax */
  push32((uint32_t)(EAX));
  /* 125333d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125333d7 call 0x12536860 */
  push32(0x125333dcu); f_12536860();
  /* 125333dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125333df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125333e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125333e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125333e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125333ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125333f0 push edx */
  push32((uint32_t)(EDX));
  /* 125333f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 125333f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125333f6 push eax */
  push32((uint32_t)(EAX));
  /* 125333f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125333f9 call 0x12536860 */
  push32(0x125333feu); f_12536860();
  /* 125333fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533401 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533404 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533406 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253340c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533412 push edx */
  push32((uint32_t)(EDX));
  /* 12533413 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12533415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533418 push eax */
  push32((uint32_t)(EAX));
  /* 12533419 push 1 */
  push32((uint32_t)(0x1u));
  /* 1253341b call 0x12536860 */
  push32(0x12533420u); f_12536860();
  /* 12533420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533423 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533426 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533428 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253342b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253342e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533434 push edx */
  push32((uint32_t)(EDX));
  /* 12533435 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12533437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253343a push eax */
  push32((uint32_t)(EAX));
  /* 1253343b push 1 */
  push32((uint32_t)(0x1u));
  /* 1253343d call 0x12536860 */
  push32(0x12533442u); f_12536860();
  /* 12533442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12533448 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253344a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253344d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533450 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533456 push edx */
  push32((uint32_t)(EDX));
  /* 12533457 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12533459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253345c push eax */
  push32((uint32_t)(EAX));
  /* 1253345d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253345f call 0x12536860 */
  push32(0x12533464u); f_12536860();
  /* 12533464 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533467 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253346a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253346c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1253346f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533472 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533478 push edx */
  push32((uint32_t)(EDX));
  /* 12533479 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1253347b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253347e push eax */
  push32((uint32_t)(EAX));
  /* 1253347f push 1 */
  push32((uint32_t)(0x1u));
  /* 12533481 call 0x12536860 */
  push32(0x12533486u); f_12536860();
  /* 12533486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253348c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253348e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12533491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533494 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253349a push edx */
  push32((uint32_t)(EDX));
  /* 1253349b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1253349d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125334a0 push eax */
  push32((uint32_t)(EAX));
  /* 125334a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125334a3 call 0x12536860 */
  push32(0x125334a8u); f_12536860();
  /* 125334a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125334ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125334ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125334b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125334b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125334b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125334bc push edx */
  push32((uint32_t)(EDX));
  /* 125334bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 125334c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125334c5 push eax */
  push32((uint32_t)(EAX));
  /* 125334c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125334c8 call 0x12536860 */
  push32(0x125334cdu); f_12536860();
  /* 125334cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125334d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125334d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125334d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125334d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_125334db:;
  /* 125334db mov esp, ebp */
  ESP = (EBP);
  /* 125334dd pop ebp */
  EBP = (pop32());
  /* 125334de ret  */
  ESPCHK(0x12532f50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x125334e0 (779 bytes, 265 insns) */
void f_125334e0(void) {
  FTRACE(0x125334e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125334e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125334e1 mov ebp, esp */
  EBP = (ESP);
  /* 125334e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125334e7 jne 0x125334ee */
  if (!C.zf) goto L_125334ee;
  /* 125334e9 jmp 0x125337e9 */
  goto L_125337e9;
L_125334ee:;
  /* 125334ee push 2 */
  push32((uint32_t)(0x2u));
  /* 125334f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125334f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125334f6 push ecx */
  push32((uint32_t)(ECX));
  /* 125334f7 call 0x12529130 */
  push32(0x125334fcu); f_12529130();
  /* 125334fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125334ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12533501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533504 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12533507 push eax */
  push32((uint32_t)(EAX));
  /* 12533508 call 0x12529130 */
  push32(0x1253350du); f_12529130();
  /* 1253350d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533510 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533512 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533515 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12533518 push edx */
  push32((uint32_t)(EDX));
  /* 12533519 call 0x12529130 */
  push32(0x1253351eu); f_12529130();
  /* 1253351e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533521 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533526 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12533529 push ecx */
  push32((uint32_t)(ECX));
  /* 1253352a call 0x12529130 */
  push32(0x1253352fu); f_12529130();
  /* 1253352f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533532 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533537 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1253353a push eax */
  push32((uint32_t)(EAX));
  /* 1253353b call 0x12529130 */
  push32(0x12533540u); f_12529130();
  /* 12533540 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533543 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533545 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533548 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1253354b push edx */
  push32((uint32_t)(EDX));
  /* 1253354c call 0x12529130 */
  push32(0x12533551u); f_12529130();
  /* 12533551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533554 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533559 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1253355b push ecx */
  push32((uint32_t)(ECX));
  /* 1253355c call 0x12529130 */
  push32(0x12533561u); f_12529130();
  /* 12533561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533564 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533566 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533569 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1253356c push eax */
  push32((uint32_t)(EAX));
  /* 1253356d call 0x12529130 */
  push32(0x12533572u); f_12529130();
  /* 12533572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533575 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253357a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1253357d push edx */
  push32((uint32_t)(EDX));
  /* 1253357e call 0x12529130 */
  push32(0x12533583u); f_12529130();
  /* 12533583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533586 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253358b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1253358e push ecx */
  push32((uint32_t)(ECX));
  /* 1253358f call 0x12529130 */
  push32(0x12533594u); f_12529130();
  /* 12533594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533597 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253359c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1253359f push eax */
  push32((uint32_t)(EAX));
  /* 125335a0 call 0x12529130 */
  push32(0x125335a5u); f_12529130();
  /* 125335a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125335aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125335ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 125335b0 push edx */
  push32((uint32_t)(EDX));
  /* 125335b1 call 0x12529130 */
  push32(0x125335b6u); f_12529130();
  /* 125335b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125335bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125335be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 125335c1 push ecx */
  push32((uint32_t)(ECX));
  /* 125335c2 call 0x12529130 */
  push32(0x125335c7u); f_12529130();
  /* 125335c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125335cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125335cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125335d2 push eax */
  push32((uint32_t)(EAX));
  /* 125335d3 call 0x12529130 */
  push32(0x125335d8u); f_12529130();
  /* 125335d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335db push 2 */
  push32((uint32_t)(0x2u));
  /* 125335dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125335e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 125335e3 push edx */
  push32((uint32_t)(EDX));
  /* 125335e4 call 0x12529130 */
  push32(0x125335e9u); f_12529130();
  /* 125335e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335ec push 2 */
  push32((uint32_t)(0x2u));
  /* 125335ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125335f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 125335f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125335f5 call 0x12529130 */
  push32(0x125335fau); f_12529130();
  /* 125335fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125335fd push 2 */
  push32((uint32_t)(0x2u));
  /* 125335ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533602 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12533605 push eax */
  push32((uint32_t)(EAX));
  /* 12533606 call 0x12529130 */
  push32(0x1253360bu); f_12529130();
  /* 1253360b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253360e push 2 */
  push32((uint32_t)(0x2u));
  /* 12533610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533613 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12533616 push edx */
  push32((uint32_t)(EDX));
  /* 12533617 call 0x12529130 */
  push32(0x1253361cu); f_12529130();
  /* 1253361c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253361f push 2 */
  push32((uint32_t)(0x2u));
  /* 12533621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533624 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12533627 push ecx */
  push32((uint32_t)(ECX));
  /* 12533628 call 0x12529130 */
  push32(0x1253362du); f_12529130();
  /* 1253362d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533630 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533632 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533635 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12533638 push eax */
  push32((uint32_t)(EAX));
  /* 12533639 call 0x12529130 */
  push32(0x1253363eu); f_12529130();
  /* 1253363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533641 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533646 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12533649 push edx */
  push32((uint32_t)(EDX));
  /* 1253364a call 0x12529130 */
  push32(0x1253364fu); f_12529130();
  /* 1253364f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533652 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533657 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1253365a push ecx */
  push32((uint32_t)(ECX));
  /* 1253365b call 0x12529130 */
  push32(0x12533660u); f_12529130();
  /* 12533660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533663 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533668 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1253366b push eax */
  push32((uint32_t)(EAX));
  /* 1253366c call 0x12529130 */
  push32(0x12533671u); f_12529130();
  /* 12533671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533674 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533679 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1253367c push edx */
  push32((uint32_t)(EDX));
  /* 1253367d call 0x12529130 */
  push32(0x12533682u); f_12529130();
  /* 12533682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533685 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533687 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253368a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1253368d push ecx */
  push32((uint32_t)(ECX));
  /* 1253368e call 0x12529130 */
  push32(0x12533693u); f_12529130();
  /* 12533693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533696 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533698 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253369b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1253369e push eax */
  push32((uint32_t)(EAX));
  /* 1253369f call 0x12529130 */
  push32(0x125336a4u); f_12529130();
  /* 125336a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125336a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125336ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 125336af push edx */
  push32((uint32_t)(EDX));
  /* 125336b0 call 0x12529130 */
  push32(0x125336b5u); f_12529130();
  /* 125336b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125336ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125336bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 125336c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125336c1 call 0x12529130 */
  push32(0x125336c6u); f_12529130();
  /* 125336c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125336cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125336ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 125336d1 push eax */
  push32((uint32_t)(EAX));
  /* 125336d2 call 0x12529130 */
  push32(0x125336d7u); f_12529130();
  /* 125336d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336da push 2 */
  push32((uint32_t)(0x2u));
  /* 125336dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125336df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 125336e2 push edx */
  push32((uint32_t)(EDX));
  /* 125336e3 call 0x12529130 */
  push32(0x125336e8u); f_12529130();
  /* 125336e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336eb push 2 */
  push32((uint32_t)(0x2u));
  /* 125336ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125336f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 125336f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125336f4 call 0x12529130 */
  push32(0x125336f9u); f_12529130();
  /* 125336f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125336fc push 2 */
  push32((uint32_t)(0x2u));
  /* 125336fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533701 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12533704 push eax */
  push32((uint32_t)(EAX));
  /* 12533705 call 0x12529130 */
  push32(0x1253370au); f_12529130();
  /* 1253370a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253370d push 2 */
  push32((uint32_t)(0x2u));
  /* 1253370f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533712 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12533718 push edx */
  push32((uint32_t)(EDX));
  /* 12533719 call 0x12529130 */
  push32(0x1253371eu); f_12529130();
  /* 1253371e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533721 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533726 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1253372c push ecx */
  push32((uint32_t)(ECX));
  /* 1253372d call 0x12529130 */
  push32(0x12533732u); f_12529130();
  /* 12533732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533735 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253373a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12533740 push eax */
  push32((uint32_t)(EAX));
  /* 12533741 call 0x12529130 */
  push32(0x12533746u); f_12529130();
  /* 12533746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533749 push 2 */
  push32((uint32_t)(0x2u));
  /* 1253374b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253374e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12533754 push edx */
  push32((uint32_t)(EDX));
  /* 12533755 call 0x12529130 */
  push32(0x1253375au); f_12529130();
  /* 1253375a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253375d push 2 */
  push32((uint32_t)(0x2u));
  /* 1253375f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533762 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12533768 push ecx */
  push32((uint32_t)(ECX));
  /* 12533769 call 0x12529130 */
  push32(0x1253376eu); f_12529130();
  /* 1253376e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533771 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533776 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1253377c push eax */
  push32((uint32_t)(EAX));
  /* 1253377d call 0x12529130 */
  push32(0x12533782u); f_12529130();
  /* 12533782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533785 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253378a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12533790 push edx */
  push32((uint32_t)(EDX));
  /* 12533791 call 0x12529130 */
  push32(0x12533796u); f_12529130();
  /* 12533796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533799 push 2 */
  push32((uint32_t)(0x2u));
  /* 1253379b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253379e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125337a4 push ecx */
  push32((uint32_t)(ECX));
  /* 125337a5 call 0x12529130 */
  push32(0x125337aau); f_12529130();
  /* 125337aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125337ad push 2 */
  push32((uint32_t)(0x2u));
  /* 125337af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125337b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125337b8 push eax */
  push32((uint32_t)(EAX));
  /* 125337b9 call 0x12529130 */
  push32(0x125337beu); f_12529130();
  /* 125337be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125337c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125337c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125337c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125337cc push edx */
  push32((uint32_t)(EDX));
  /* 125337cd call 0x12529130 */
  push32(0x125337d2u); f_12529130();
  /* 125337d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125337d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125337d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125337da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 125337e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125337e1 call 0x12529130 */
  push32(0x125337e6u); f_12529130();
  /* 125337e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125337e9:;
  /* 125337e9 pop ebp */
  EBP = (pop32());
  /* 125337ea ret  */
  ESPCHK(0x125334e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x125337f0 (678 bytes, 180 insns) */
void f_125337f0(void) {
  FTRACE(0x125337f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125337f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125337f1 mov ebp, esp */
  EBP = (ESP);
  /* 125337f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125337f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125337fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125337ff mov ax, word ptr [0x12554baa] */
  AX = (r16((uint32_t)(0x12554baa)));
  /* 12533805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12533808 cmp dword ptr [0x12554b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253380f je 0x1253396a */
  if (C.zf) goto L_1253396a;
  /* 12533815 push 0x12554b78 */
  push32((uint32_t)(0x12554b78u));
  /* 1253381a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1253381c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253381f push ecx */
  push32((uint32_t)(ECX));
  /* 12533820 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533822 call 0x12536860 */
  push32(0x12533827u); f_12536860();
  /* 12533827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253382a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253382d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1253382f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12533832 push 0x12554b7c */
  push32((uint32_t)(0x12554b7cu));
  /* 12533837 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12533839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253383c push eax */
  push32((uint32_t)(EAX));
  /* 1253383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253383f call 0x12536860 */
  push32(0x12533844u); f_12536860();
  /* 12533844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253384a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253384c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1253384f push 0x12554b80 */
  push32((uint32_t)(0x12554b80u));
  /* 12533854 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12533856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533859 push edx */
  push32((uint32_t)(EDX));
  /* 1253385a push 1 */
  push32((uint32_t)(0x1u));
  /* 1253385c call 0x12536860 */
  push32(0x12533861u); f_12536860();
  /* 12533861 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533864 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533867 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533869 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1253386c mov edx, dword ptr [0x12554b80] */
  EDX = (r32((uint32_t)(0x12554b80)));
  /* 12533872 push edx */
  push32((uint32_t)(EDX));
  /* 12533873 call 0x12533aa0 */
  push32(0x12533878u); f_12533aa0();
  /* 12533878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253387b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253387f je 0x125338d9 */
  if (C.zf) goto L_125338d9;
  /* 12533881 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533883 mov eax, dword ptr [0x12554b78] */
  EAX = (r32((uint32_t)(0x12554b78)));
  /* 12533888 push eax */
  push32((uint32_t)(EAX));
  /* 12533889 call 0x12529130 */
  push32(0x1253388eu); f_12529130();
  /* 1253388e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533891 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533893 mov ecx, dword ptr [0x12554b7c] */
  ECX = (r32((uint32_t)(0x12554b7c)));
  /* 12533899 push ecx */
  push32((uint32_t)(ECX));
  /* 1253389a call 0x12529130 */
  push32(0x1253389fu); f_12529130();
  /* 1253389f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125338a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125338a4 mov edx, dword ptr [0x12554b80] */
  EDX = (r32((uint32_t)(0x12554b80)));
  /* 125338aa push edx */
  push32((uint32_t)(EDX));
  /* 125338ab call 0x12529130 */
  push32(0x125338b0u); f_12529130();
  /* 125338b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125338b3 mov dword ptr [0x12554b78], 0 */
  w32((uint32_t)(0x12554b78), (0x0u));
  /* 125338bd mov dword ptr [0x12554b7c], 0 */
  w32((uint32_t)(0x12554b7c), (0x0u));
  /* 125338c7 mov dword ptr [0x12554b80], 0 */
  w32((uint32_t)(0x12554b80), (0x0u));
  /* 125338d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125338d4 jmp 0x12533a92 */
  goto L_12533a92;
L_125338d9:;
  /* 125338d9 mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 125338de cmp dword ptr [eax], 0x12553d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12553d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125338e4 je 0x12533920 */
  if (C.zf) goto L_12533920;
  /* 125338e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125338e8 mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 125338ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125338f0 push edx */
  push32((uint32_t)(EDX));
  /* 125338f1 call 0x12529130 */
  push32(0x125338f6u); f_12529130();
  /* 125338f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125338f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125338fb mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12533900 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12533903 push ecx */
  push32((uint32_t)(ECX));
  /* 12533904 call 0x12529130 */
  push32(0x12533909u); f_12529130();
  /* 12533909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253390c push 2 */
  push32((uint32_t)(0x2u));
  /* 1253390e mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533914 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12533917 push eax */
  push32((uint32_t)(EAX));
  /* 12533918 call 0x12529130 */
  push32(0x1253391du); f_12529130();
  /* 1253391d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12533920:;
  /* 12533920 mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533926 mov edx, dword ptr [0x12554b78] */
  EDX = (r32((uint32_t)(0x12554b78)));
  /* 1253392c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1253392e mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12533933 mov ecx, dword ptr [0x12554b7c] */
  ECX = (r32((uint32_t)(0x12554b7c)));
  /* 12533939 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1253393c mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533942 mov eax, dword ptr [0x12554b80] */
  EAX = (r32((uint32_t)(0x12554b80)));
  /* 12533947 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1253394a mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533950 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12533952 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12533954 mov byte ptr [0x12552ea8], al */
  w8((uint32_t)(0x12552ea8), (AL));
  /* 12533959 mov dword ptr [0x12552eac], 1 */
  w32((uint32_t)(0x12552eac), (0x1u));
  /* 12533963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12533965 jmp 0x12533a92 */
  goto L_12533a92;
L_1253396a:;
  /* 1253396a push 2 */
  push32((uint32_t)(0x2u));
  /* 1253396c mov ecx, dword ptr [0x12554b78] */
  ECX = (r32((uint32_t)(0x12554b78)));
  /* 12533972 push ecx */
  push32((uint32_t)(ECX));
  /* 12533973 call 0x12529130 */
  push32(0x12533978u); f_12529130();
  /* 12533978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253397b push 2 */
  push32((uint32_t)(0x2u));
  /* 1253397d mov edx, dword ptr [0x12554b7c] */
  EDX = (r32((uint32_t)(0x12554b7c)));
  /* 12533983 push edx */
  push32((uint32_t)(EDX));
  /* 12533984 call 0x12529130 */
  push32(0x12533989u); f_12529130();
  /* 12533989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253398c push 2 */
  push32((uint32_t)(0x2u));
  /* 1253398e mov eax, dword ptr [0x12554b80] */
  EAX = (r32((uint32_t)(0x12554b80)));
  /* 12533993 push eax */
  push32((uint32_t)(EAX));
  /* 12533994 call 0x12529130 */
  push32(0x12533999u); f_12529130();
  /* 12533999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253399c mov dword ptr [0x12554b78], 0 */
  w32((uint32_t)(0x12554b78), (0x0u));
  /* 125339a6 mov dword ptr [0x12554b7c], 0 */
  w32((uint32_t)(0x12554b7c), (0x0u));
  /* 125339b0 mov dword ptr [0x12554b80], 0 */
  w32((uint32_t)(0x12554b80), (0x0u));
  /* 125339ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125339bf push 0x12550674 */
  push32((uint32_t)(0x12550674u));
  /* 125339c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125339c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125339c8 call 0x125286a0 */
  push32(0x125339cdu); f_125286a0();
  /* 125339cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125339d0 mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 125339d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125339d8 mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 125339de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125339e1 jne 0x125339eb */
  if (!C.zf) goto L_125339eb;
  /* 125339e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125339e6 jmp 0x12533a92 */
  goto L_12533a92;
L_125339eb:;
  /* 125339eb push 0x12550644 */
  push32((uint32_t)(0x12550644u));
  /* 125339f0 mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 125339f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125339f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125339f8 call 0x1252b650 */
  push32(0x125339fdu); f_1252b650();
  /* 125339fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533a00 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12533a05 push 0x12550674 */
  push32((uint32_t)(0x12550674u));
  /* 12533a0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12533a0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12533a0e call 0x125286a0 */
  push32(0x12533a13u); f_125286a0();
  /* 12533a13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533a16 mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533a1c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12533a1f mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12533a24 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533a28 jne 0x12533a2f */
  if (!C.zf) goto L_12533a2f;
  /* 12533a2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12533a2d jmp 0x12533a92 */
  goto L_12533a92;
L_12533a2f:;
  /* 12533a2f mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533a35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12533a38 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12533a3b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12533a40 push 0x12550674 */
  push32((uint32_t)(0x12550674u));
  /* 12533a45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533a49 call 0x125286a0 */
  push32(0x12533a4eu); f_125286a0();
  /* 12533a4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533a51 mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533a57 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12533a5a mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533a60 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533a64 jne 0x12533a6b */
  if (!C.zf) goto L_12533a6b;
  /* 12533a66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12533a69 jmp 0x12533a92 */
  goto L_12533a92;
L_12533a6b:;
  /* 12533a6b mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12533a70 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12533a73 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12533a76 mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533a7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12533a7e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12533a80 mov byte ptr [0x12552ea8], cl */
  w8((uint32_t)(0x12552ea8), (CL));
  /* 12533a86 mov dword ptr [0x12552eac], 1 */
  w32((uint32_t)(0x12552eac), (0x1u));
  /* 12533a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12533a92:;
  /* 12533a92 mov esp, ebp */
  ESP = (EBP);
  /* 12533a94 pop ebp */
  EBP = (pop32());
  /* 12533a95 ret  */
  ESPCHK(0x125337f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12533aa0 (125 bytes, 49 insns) */
void f_12533aa0(void) {
  FTRACE(0x12533aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12533aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12533aa3 push ecx */
  push32((uint32_t)(ECX));
L_12533aa4:;
  /* 12533aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533aa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12533aaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12533aac je 0x12533b19 */
  if (C.zf) goto L_12533b19;
  /* 12533aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ab1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12533ab4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ab7 jl 0x12533add */
  if ((C.sf!=C.of)) goto L_12533add;
  /* 12533ab9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533abc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12533abf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ac2 jg 0x12533add */
  if ((!C.zf&&C.sf==C.of)) goto L_12533add;
  /* 12533ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ac7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12533aca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12533acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ad0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12533ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ad5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533ad8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12533adb jmp 0x12533b17 */
  goto L_12533b17;
L_12533add:;
  /* 12533add mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ae0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12533ae3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ae6 jne 0x12533b0e */
  if (!C.zf) goto L_12533b0e;
  /* 12533ae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533aeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12533aee:;
  /* 12533aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533af1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533af4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12533af7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12533af9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533afc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533aff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12533b02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12533b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12533b0a jne 0x12533aee */
  if (!C.zf) goto L_12533aee;
  /* 12533b0c jmp 0x12533b17 */
  goto L_12533b17;
L_12533b0e:;
  /* 12533b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533b11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533b14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12533b17:;
  /* 12533b17 jmp 0x12533aa4 */
  goto L_12533aa4;
L_12533b19:;
  /* 12533b19 mov esp, ebp */
  ESP = (EBP);
  /* 12533b1b pop ebp */
  EBP = (pop32());
  /* 12533b1c ret  */
  ESPCHK(0x12533aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b20 @ 0x12533b20 (304 bytes, 85 insns) */
void f_12533b20(void) {
  FTRACE(0x12533b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12533b21 mov ebp, esp */
  EBP = (ESP);
  /* 12533b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12533b24 cmp dword ptr [0x12554b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533b2b je 0x12533bec */
  if (C.zf) goto L_12533bec;
  /* 12533b31 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12533b33 push 0x12550680 */
  push32((uint32_t)(0x12550680u));
  /* 12533b38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533b3a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12533b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12533b3e call 0x12528ab0 */
  push32(0x12533b43u); f_12528ab0();
  /* 12533b43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533b46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12533b49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533b4d jne 0x12533b59 */
  if (!C.zf) goto L_12533b59;
  /* 12533b4f mov eax, 1 */
  EAX = (0x1u);
  /* 12533b54 jmp 0x12533c4c */
  goto L_12533c4c;
L_12533b59:;
  /* 12533b59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b5c push eax */
  push32((uint32_t)(EAX));
  /* 12533b5d call 0x12533c50 */
  push32(0x12533b62u); f_12533c50();
  /* 12533b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12533b67 je 0x12533b8d */
  if (C.zf) goto L_12533b8d;
  /* 12533b69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b6c push ecx */
  push32((uint32_t)(ECX));
  /* 12533b6d call 0x12533ee0 */
  push32(0x12533b72u); f_12533ee0();
  /* 12533b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533b77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b7a push edx */
  push32((uint32_t)(EDX));
  /* 12533b7b call 0x12529130 */
  push32(0x12533b80u); f_12529130();
  /* 12533b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533b83 mov eax, 1 */
  EAX = (0x1u);
  /* 12533b88 jmp 0x12533c4c */
  goto L_12533c4c;
L_12533b8d:;
  /* 12533b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b90 mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12533b98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12533b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533b9d mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533ba3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12533ba6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12533ba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533bac mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533bb2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12533bb5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12533bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533bbb mov dword ptr [0x12553d88], eax */
  w32((uint32_t)(0x12553d88), (EAX));
  /* 12533bc0 mov ecx, dword ptr [0x12554b84] */
  ECX = (r32((uint32_t)(0x12554b84)));
  /* 12533bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12533bc7 call 0x12533ee0 */
  push32(0x12533bccu); f_12533ee0();
  /* 12533bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533bcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12533bd1 mov edx, dword ptr [0x12554b84] */
  EDX = (r32((uint32_t)(0x12554b84)));
  /* 12533bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12533bd8 call 0x12529130 */
  push32(0x12533bddu); f_12529130();
  /* 12533bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533be3 mov dword ptr [0x12554b84], eax */
  w32((uint32_t)(0x12554b84), (EAX));
  /* 12533be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12533bea jmp 0x12533c4c */
  goto L_12533c4c;
L_12533bec:;
  /* 12533bec mov ecx, dword ptr [0x12553d88] */
  ECX = (r32((uint32_t)(0x12553d88)));
  /* 12533bf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12533bf4 mov dword ptr [0x12553d58], edx */
  w32((uint32_t)(0x12553d58), (EDX));
  /* 12533bfa mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12533bff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12533c02 mov dword ptr [0x12553d5c], ecx */
  w32((uint32_t)(0x12553d5c), (ECX));
  /* 12533c08 mov edx, dword ptr [0x12553d88] */
  EDX = (r32((uint32_t)(0x12553d88)));
  /* 12533c0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12533c11 mov dword ptr [0x12553d60], eax */
  w32((uint32_t)(0x12553d60), (EAX));
  /* 12533c16 mov dword ptr [0x12553d88], 0x12553d58 */
  w32((uint32_t)(0x12553d88), (0x12553d58u));
  /* 12533c20 mov ecx, dword ptr [0x12554b84] */
  ECX = (r32((uint32_t)(0x12554b84)));
  /* 12533c26 push ecx */
  push32((uint32_t)(ECX));
  /* 12533c27 call 0x12533ee0 */
  push32(0x12533c2cu); f_12533ee0();
  /* 12533c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12533c31 mov edx, dword ptr [0x12554b84] */
  EDX = (r32((uint32_t)(0x12554b84)));
  /* 12533c37 push edx */
  push32((uint32_t)(EDX));
  /* 12533c38 call 0x12529130 */
  push32(0x12533c3du); f_12529130();
  /* 12533c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533c40 mov dword ptr [0x12554b84], 0 */
  w32((uint32_t)(0x12554b84), (0x0u));
  /* 12533c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12533c4c:;
  /* 12533c4c mov esp, ebp */
  ESP = (EBP);
  /* 12533c4e pop ebp */
  EBP = (pop32());
  /* 12533c4f ret  */
  ESPCHK(0x12533b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x12533c50 (525 bytes, 200 insns) */
void f_12533c50(void) {
  FTRACE(0x12533c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12533c51 mov ebp, esp */
  EBP = (ESP);
  /* 12533c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12533c56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12533c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12533c5f mov ax, word ptr [0x12554ba4] */
  AX = (r16((uint32_t)(0x12554ba4)));
  /* 12533c65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12533c68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533c6c jne 0x12533c76 */
  if (!C.zf) goto L_12533c76;
  /* 12533c6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12533c71 jmp 0x12533e59 */
  goto L_12533e59;
L_12533c76:;
  /* 12533c76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533c79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533c7c push ecx */
  push32((uint32_t)(ECX));
  /* 12533c7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12533c7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533c82 push edx */
  push32((uint32_t)(EDX));
  /* 12533c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533c85 call 0x12536860 */
  push32(0x12533c8au); f_12536860();
  /* 12533c8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533c8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533c90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533c92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533c95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533c98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533c9b push edx */
  push32((uint32_t)(EDX));
  /* 12533c9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12533c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12533ca2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533ca4 call 0x12536860 */
  push32(0x12533ca9u); f_12536860();
  /* 12533ca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533cac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533caf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533cb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533cb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533cb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533cba push edx */
  push32((uint32_t)(EDX));
  /* 12533cbb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12533cbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533cc0 push eax */
  push32((uint32_t)(EAX));
  /* 12533cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533cc3 call 0x12536860 */
  push32(0x12533cc8u); f_12536860();
  /* 12533cc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533cce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533cd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533cd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533cd6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533cd9 push edx */
  push32((uint32_t)(EDX));
  /* 12533cda push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12533cdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533cdf push eax */
  push32((uint32_t)(EAX));
  /* 12533ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12533ce2 call 0x12536860 */
  push32(0x12533ce7u); f_12536860();
  /* 12533ce7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533cea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533ced or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533cef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533cf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533cf5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533cf8 push edx */
  push32((uint32_t)(EDX));
  /* 12533cf9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12533cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533cfe push eax */
  push32((uint32_t)(EAX));
  /* 12533cff push 1 */
  push32((uint32_t)(0x1u));
  /* 12533d01 call 0x12536860 */
  push32(0x12533d06u); f_12536860();
  /* 12533d06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533d0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533d0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12533d17 push eax */
  push32((uint32_t)(EAX));
  /* 12533d18 call 0x12533e60 */
  push32(0x12533d1du); f_12533e60();
  /* 12533d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d26 push ecx */
  push32((uint32_t)(ECX));
  /* 12533d27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12533d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533d2c push edx */
  push32((uint32_t)(EDX));
  /* 12533d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12533d2f call 0x12536860 */
  push32(0x12533d34u); f_12536860();
  /* 12533d34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533d3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d45 push edx */
  push32((uint32_t)(EDX));
  /* 12533d46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12533d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533d4b push eax */
  push32((uint32_t)(EAX));
  /* 12533d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12533d4e call 0x12536860 */
  push32(0x12533d53u); f_12536860();
  /* 12533d53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533d59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533d5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533d5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d64 push edx */
  push32((uint32_t)(EDX));
  /* 12533d65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12533d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533d6a push eax */
  push32((uint32_t)(EAX));
  /* 12533d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12533d6d call 0x12536860 */
  push32(0x12533d72u); f_12536860();
  /* 12533d72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533d78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533d7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533d7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d83 push edx */
  push32((uint32_t)(EDX));
  /* 12533d84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12533d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533d89 push eax */
  push32((uint32_t)(EAX));
  /* 12533d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12533d8c call 0x12536860 */
  push32(0x12533d91u); f_12536860();
  /* 12533d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533d94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533d97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533d99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533d9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533da2 push edx */
  push32((uint32_t)(EDX));
  /* 12533da3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12533da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533da8 push eax */
  push32((uint32_t)(EAX));
  /* 12533da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533dab call 0x12536860 */
  push32(0x12533db0u); f_12536860();
  /* 12533db0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533db6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533db8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533dbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533dc1 push edx */
  push32((uint32_t)(EDX));
  /* 12533dc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12533dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533dc7 push eax */
  push32((uint32_t)(EAX));
  /* 12533dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533dca call 0x12536860 */
  push32(0x12533dcfu); f_12536860();
  /* 12533dcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533dd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533dd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533dd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533dda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ddd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533de0 push edx */
  push32((uint32_t)(EDX));
  /* 12533de1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12533de3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533de6 push eax */
  push32((uint32_t)(EAX));
  /* 12533de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533de9 call 0x12536860 */
  push32(0x12533deeu); f_12536860();
  /* 12533dee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533df1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533df4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533df6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533df9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533dfc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533dff push edx */
  push32((uint32_t)(EDX));
  /* 12533e00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12533e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533e05 push eax */
  push32((uint32_t)(EAX));
  /* 12533e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533e08 call 0x12536860 */
  push32(0x12533e0du); f_12536860();
  /* 12533e0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533e13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533e15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533e18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e1e push edx */
  push32((uint32_t)(EDX));
  /* 12533e1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12533e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533e24 push eax */
  push32((uint32_t)(EAX));
  /* 12533e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533e27 call 0x12536860 */
  push32(0x12533e2cu); f_12536860();
  /* 12533e2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533e32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533e34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e3d push edx */
  push32((uint32_t)(EDX));
  /* 12533e3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12533e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533e43 push eax */
  push32((uint32_t)(EAX));
  /* 12533e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12533e46 call 0x12536860 */
  push32(0x12533e4bu); f_12536860();
  /* 12533e4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12533e51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12533e53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12533e56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12533e59:;
  /* 12533e59 mov esp, ebp */
  ESP = (EBP);
  /* 12533e5b pop ebp */
  EBP = (pop32());
  /* 12533e5c ret  */
  ESPCHK(0x12533c50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12533e60 (125 bytes, 49 insns) */
void f_12533e60(void) {
  FTRACE(0x12533e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12533e61 mov ebp, esp */
  EBP = (ESP);
  /* 12533e63 push ecx */
  push32((uint32_t)(ECX));
L_12533e64:;
  /* 12533e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12533e6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12533e6c je 0x12533ed9 */
  if (C.zf) goto L_12533ed9;
  /* 12533e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12533e74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533e77 jl 0x12533e9d */
  if ((C.sf!=C.of)) goto L_12533e9d;
  /* 12533e79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12533e7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533e82 jg 0x12533e9d */
  if ((!C.zf&&C.sf==C.of)) goto L_12533e9d;
  /* 12533e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12533e8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12533e8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12533e92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533e95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533e98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12533e9b jmp 0x12533ed7 */
  goto L_12533ed7;
L_12533e9d:;
  /* 12533e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ea0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12533ea3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ea6 jne 0x12533ece */
  if (!C.zf) goto L_12533ece;
  /* 12533ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533eab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12533eae:;
  /* 12533eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533eb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12533eb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12533eb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533ebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533ebf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12533ec2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12533ec5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12533ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12533eca jne 0x12533eae */
  if (!C.zf) goto L_12533eae;
  /* 12533ecc jmp 0x12533ed7 */
  goto L_12533ed7;
L_12533ece:;
  /* 12533ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12533ed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12533ed7:;
  /* 12533ed7 jmp 0x12533e64 */
  goto L_12533e64;
L_12533ed9:;
  /* 12533ed9 mov esp, ebp */
  ESP = (EBP);
  /* 12533edb pop ebp */
  EBP = (pop32());
  /* 12533edc ret  */
  ESPCHK(0x12533e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x12533ee0 (147 bytes, 52 insns) */
void f_12533ee0(void) {
  FTRACE(0x12533ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12533ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12533ee3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ee7 jne 0x12533eee */
  if (!C.zf) goto L_12533eee;
  /* 12533ee9 jmp 0x12533f71 */
  goto L_12533f71;
L_12533eee:;
  /* 12533eee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533ef1 cmp dword ptr [eax + 0xc], 0x12554be0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12554be0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533ef8 je 0x12533f71 */
  if (C.zf) goto L_12533f71;
  /* 12533efa push 2 */
  push32((uint32_t)(0x2u));
  /* 12533efc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533eff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12533f02 push edx */
  push32((uint32_t)(EDX));
  /* 12533f03 call 0x12529130 */
  push32(0x12533f08u); f_12529130();
  /* 12533f08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12533f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12533f14 call 0x12529130 */
  push32(0x12533f19u); f_12529130();
  /* 12533f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12533f24 push eax */
  push32((uint32_t)(EAX));
  /* 12533f25 call 0x12529130 */
  push32(0x12533f2au); f_12529130();
  /* 12533f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12533f35 push edx */
  push32((uint32_t)(EDX));
  /* 12533f36 call 0x12529130 */
  push32(0x12533f3bu); f_12529130();
  /* 12533f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12533f46 push ecx */
  push32((uint32_t)(ECX));
  /* 12533f47 call 0x12529130 */
  push32(0x12533f4cu); f_12529130();
  /* 12533f4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12533f57 push eax */
  push32((uint32_t)(EAX));
  /* 12533f58 call 0x12529130 */
  push32(0x12533f5du); f_12529130();
  /* 12533f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533f60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12533f65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12533f68 push edx */
  push32((uint32_t)(EDX));
  /* 12533f69 call 0x12529130 */
  push32(0x12533f6eu); f_12529130();
  /* 12533f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12533f71:;
  /* 12533f71 pop ebp */
  EBP = (pop32());
  /* 12533f72 ret  */
  ESPCHK(0x12533ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f80 @ 0x12533f80 (928 bytes, 284 insns) */
void f_12533f80(void) {
  FTRACE(0x12533f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12533f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12533f81 mov ebp, esp */
  EBP = (ESP);
  /* 12533f83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12533f86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12533f8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12533f94 cmp dword ptr [0x12554b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533f9b je 0x125342d1 */
  if (C.zf) goto L_125342d1;
  /* 12533fa1 cmp dword ptr [0x12554b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12533fa8 jne 0x12533fd0 */
  if (!C.zf) goto L_12533fd0;
  /* 12533faa push 0x12554b58 */
  push32((uint32_t)(0x12554b58u));
  /* 12533faf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12533fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12533fb6 mov ax, word ptr [0x12554b9c] */
  AX = (r16((uint32_t)(0x12554b9c)));
  /* 12533fbc push eax */
  push32((uint32_t)(EAX));
  /* 12533fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12533fbf call 0x12536860 */
  push32(0x12533fc4u); f_12536860();
  /* 12533fc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12533fc9 je 0x12533fd0 */
  if (C.zf) goto L_12533fd0;
  /* 12533fcb jmp 0x12534292 */
  goto L_12534292;
L_12533fd0:;
  /* 12533fd0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12533fd2 push 0x1255068c */
  push32((uint32_t)(0x1255068cu));
  /* 12533fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533fd9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12533fde call 0x125286a0 */
  push32(0x12533fe3u); f_125286a0();
  /* 12533fe3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533fe6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12533fe9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12533feb push 0x1255068c */
  push32((uint32_t)(0x1255068cu));
  /* 12533ff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12533ff2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12533ff7 call 0x125286a0 */
  push32(0x12533ffcu); f_125286a0();
  /* 12533ffc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12533fff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12534002 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12534004 push 0x1255068c */
  push32((uint32_t)(0x1255068cu));
  /* 12534009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1253400b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12534010 call 0x125286a0 */
  push32(0x12534015u); f_125286a0();
  /* 12534015 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534018 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1253401b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1253401d push 0x1255068c */
  push32((uint32_t)(0x1255068cu));
  /* 12534022 push 2 */
  push32((uint32_t)(0x2u));
  /* 12534024 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12534029 call 0x125286a0 */
  push32(0x1253402eu); f_125286a0();
  /* 1253402e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534031 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12534034 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534038 je 0x1253404c */
  if (C.zf) goto L_1253404c;
  /* 1253403a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253403e je 0x1253404c */
  if (C.zf) goto L_1253404c;
  /* 12534040 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534044 je 0x1253404c */
  if (C.zf) goto L_1253404c;
  /* 12534046 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253404a jne 0x12534051 */
  if (!C.zf) goto L_12534051;
L_1253404c:;
  /* 1253404c jmp 0x12534292 */
  goto L_12534292;
L_12534051:;
  /* 12534051 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12534054 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12534057 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1253405e jmp 0x12534069 */
  goto L_12534069;
L_12534060:;
  /* 12534060 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12534063 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534066 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12534069:;
  /* 12534069 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534070 jge 0x12534085 */
  if ((C.sf==C.of)) goto L_12534085;
  /* 12534072 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12534075 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12534078 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1253407a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1253407d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534080 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12534083 jmp 0x12534060 */
  goto L_12534060;
L_12534085:;
  /* 12534085 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12534088 push eax */
  push32((uint32_t)(EAX));
  /* 12534089 mov ecx, dword ptr [0x12554b58] */
  ECX = (r32((uint32_t)(0x12554b58)));
  /* 1253408f push ecx */
  push32((uint32_t)(ECX));
  /* 12534090 call dword ptr [0x12557330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557330))), 0x12534096u);
  /* 12534096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534098 jne 0x1253409f */
  if (!C.zf) goto L_1253409f;
  /* 1253409a jmp 0x12534292 */
  goto L_12534292;
L_1253409f:;
  /* 1253409f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125340a3 jbe 0x125340aa */
  if ((C.cf||C.zf)) goto L_125340aa;
  /* 125340a5 jmp 0x12534292 */
  goto L_12534292;
L_125340aa:;
  /* 125340aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125340ad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125340b3 mov dword ptr [0x12552ea4], edx */
  w32((uint32_t)(0x12552ea4), (EDX));
  /* 125340b9 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125340c0 jle 0x12534119 */
  if ((C.zf||C.sf!=C.of)) goto L_12534119;
  /* 125340c2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 125340c5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125340c8 jmp 0x125340d3 */
  goto L_125340d3;
L_125340ca:;
  /* 125340ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125340cd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125340d0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_125340d3:;
  /* 125340d3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125340d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125340d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125340da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125340dc je 0x12534119 */
  if (C.zf) goto L_12534119;
  /* 125340de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125340e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125340e3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125340e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125340e8 je 0x12534119 */
  if (C.zf) goto L_12534119;
  /* 125340ea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125340ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125340ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125340f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125340f4 jmp 0x125340ff */
  goto L_125340ff;
L_125340f6:;
  /* 125340f6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125340f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125340fc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125340ff:;
  /* 125340ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12534102 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534104 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12534107 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253410a jg 0x12534117 */
  if ((!C.zf&&C.sf==C.of)) goto L_12534117;
  /* 1253410c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1253410f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534112 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12534115 jmp 0x125340f6 */
  goto L_125340f6;
L_12534117:;
  /* 12534117 jmp 0x125340ca */
  goto L_125340ca;
L_12534119:;
  /* 12534119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1253411b push 0 */
  push32((uint32_t)(0x0u));
  /* 1253411d push 0 */
  push32((uint32_t)(0x0u));
  /* 1253411f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534122 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534125 push eax */
  push32((uint32_t)(EAX));
  /* 12534126 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1253412b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1253412e push ecx */
  push32((uint32_t)(ECX));
  /* 1253412f push 1 */
  push32((uint32_t)(0x1u));
  /* 12534131 call 0x125308d0 */
  push32(0x12534136u); f_125308d0();
  /* 12534136 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253413b jne 0x12534142 */
  if (!C.zf) goto L_12534142;
  /* 1253413d jmp 0x12534292 */
  goto L_12534292;
L_12534142:;
  /* 12534142 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534145 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1253414a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1253414d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12534150 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12534157 jmp 0x12534162 */
  goto L_12534162;
L_12534159:;
  /* 12534159 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1253415c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253415f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12534162:;
  /* 12534162 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534169 jge 0x12534180 */
  if ((C.sf==C.of)) goto L_12534180;
  /* 1253416b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1253416e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12534172 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12534175 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12534178 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253417b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1253417e jmp 0x12534159 */
  goto L_12534159;
L_12534180:;
  /* 12534180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12534182 push 0 */
  push32((uint32_t)(0x0u));
  /* 12534184 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12534187 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253418a push edx */
  push32((uint32_t)(EDX));
  /* 1253418b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12534190 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12534193 push eax */
  push32((uint32_t)(EAX));
  /* 12534194 push 1 */
  push32((uint32_t)(0x1u));
  /* 12534196 call 0x12536b00 */
  push32(0x1253419bu); f_12536b00();
  /* 1253419b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253419e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125341a0 jne 0x125341a7 */
  if (!C.zf) goto L_125341a7;
  /* 125341a2 jmp 0x12534292 */
  goto L_12534292;
L_125341a7:;
  /* 125341a7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125341aa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 125341af cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125341b6 jle 0x12534213 */
  if ((C.zf||C.sf!=C.of)) goto L_12534213;
  /* 125341b8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 125341bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125341be jmp 0x125341c9 */
  goto L_125341c9;
L_125341c0:;
  /* 125341c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125341c3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125341c6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125341c9:;
  /* 125341c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125341cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125341ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125341d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125341d2 je 0x12534213 */
  if (C.zf) goto L_12534213;
  /* 125341d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125341d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125341d9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125341dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125341de je 0x12534213 */
  if (C.zf) goto L_12534213;
  /* 125341e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125341e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125341e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125341e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125341ea jmp 0x125341f5 */
  goto L_125341f5;
L_125341ec:;
  /* 125341ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125341ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125341f2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125341f5:;
  /* 125341f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125341f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125341fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125341fd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534200 jg 0x12534211 */
  if ((!C.zf&&C.sf==C.of)) goto L_12534211;
  /* 12534202 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12534205 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534208 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1253420f jmp 0x125341ec */
  goto L_125341ec;
L_12534211:;
  /* 12534211 jmp 0x125341c0 */
  goto L_125341c0;
L_12534213:;
  /* 12534213 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534216 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534219 mov dword ptr [0x12552c98], eax */
  w32((uint32_t)(0x12552c98), (EAX));
  /* 1253421e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12534221 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534224 mov dword ptr [0x12552c9c], ecx */
  w32((uint32_t)(0x12552c9c), (ECX));
  /* 1253422a cmp dword ptr [0x12554b88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534231 je 0x12534244 */
  if (C.zf) goto L_12534244;
  /* 12534233 push 2 */
  push32((uint32_t)(0x2u));
  /* 12534235 mov edx, dword ptr [0x12554b88] */
  EDX = (r32((uint32_t)(0x12554b88)));
  /* 1253423b push edx */
  push32((uint32_t)(EDX));
  /* 1253423c call 0x12529130 */
  push32(0x12534241u); f_12529130();
  /* 12534241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12534244:;
  /* 12534244 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534247 mov dword ptr [0x12554b88], eax */
  w32((uint32_t)(0x12554b88), (EAX));
  /* 1253424c cmp dword ptr [0x12554b8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534253 je 0x12534266 */
  if (C.zf) goto L_12534266;
  /* 12534255 push 2 */
  push32((uint32_t)(0x2u));
  /* 12534257 mov ecx, dword ptr [0x12554b8c] */
  ECX = (r32((uint32_t)(0x12554b8c)));
  /* 1253425d push ecx */
  push32((uint32_t)(ECX));
  /* 1253425e call 0x12529130 */
  push32(0x12534263u); f_12529130();
  /* 12534263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12534266:;
  /* 12534266 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12534269 mov dword ptr [0x12554b8c], edx */
  w32((uint32_t)(0x12554b8c), (EDX));
  /* 1253426f push 2 */
  push32((uint32_t)(0x2u));
  /* 12534271 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12534274 push eax */
  push32((uint32_t)(EAX));
  /* 12534275 call 0x12529130 */
  push32(0x1253427au); f_12529130();
  /* 1253427a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253427d push 2 */
  push32((uint32_t)(0x2u));
  /* 1253427f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12534282 push ecx */
  push32((uint32_t)(ECX));
  /* 12534283 call 0x12529130 */
  push32(0x12534288u); f_12529130();
  /* 12534288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253428b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253428d jmp 0x1253431c */
  goto L_1253431c;
L_12534292:;
  /* 12534292 push 2 */
  push32((uint32_t)(0x2u));
  /* 12534294 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12534297 push edx */
  push32((uint32_t)(EDX));
  /* 12534298 call 0x12529130 */
  push32(0x1253429du); f_12529130();
  /* 1253429d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125342a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125342a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125342a5 push eax */
  push32((uint32_t)(EAX));
  /* 125342a6 call 0x12529130 */
  push32(0x125342abu); f_12529130();
  /* 125342ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125342ae push 2 */
  push32((uint32_t)(0x2u));
  /* 125342b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125342b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125342b4 call 0x12529130 */
  push32(0x125342b9u); f_12529130();
  /* 125342b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125342bc push 2 */
  push32((uint32_t)(0x2u));
  /* 125342be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125342c1 push edx */
  push32((uint32_t)(EDX));
  /* 125342c2 call 0x12529130 */
  push32(0x125342c7u); f_12529130();
  /* 125342c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125342ca mov eax, 1 */
  EAX = (0x1u);
  /* 125342cf jmp 0x1253431c */
  goto L_1253431c;
L_125342d1:;
  /* 125342d1 mov dword ptr [0x12552c98], 0x12552ca2 */
  w32((uint32_t)(0x12552c98), (0x12552ca2u));
  /* 125342db mov dword ptr [0x12552c9c], 0x12552ca2 */
  w32((uint32_t)(0x12552c9c), (0x12552ca2u));
  /* 125342e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125342e7 mov eax, dword ptr [0x12554b88] */
  EAX = (r32((uint32_t)(0x12554b88)));
  /* 125342ec push eax */
  push32((uint32_t)(EAX));
  /* 125342ed call 0x12529130 */
  push32(0x125342f2u); f_12529130();
  /* 125342f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125342f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125342f7 mov ecx, dword ptr [0x12554b8c] */
  ECX = (r32((uint32_t)(0x12554b8c)));
  /* 125342fd push ecx */
  push32((uint32_t)(ECX));
  /* 125342fe call 0x12529130 */
  push32(0x12534303u); f_12529130();
  /* 12534303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534306 mov dword ptr [0x12554b88], 0 */
  w32((uint32_t)(0x12554b88), (0x0u));
  /* 12534310 mov dword ptr [0x12554b8c], 0 */
  w32((uint32_t)(0x12554b8c), (0x0u));
  /* 1253431a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1253431c:;
  /* 1253431c mov esp, ebp */
  ESP = (EBP);
  /* 1253431e pop ebp */
  EBP = (pop32());
  /* 1253431f ret  */
  ESPCHK(0x12533f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014320 @ 0x12534320 (7 bytes, 5 insns) */
void f_12534320(void) {
  FTRACE(0x12534320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534320 push ebp */
  push32((uint32_t)(EBP));
  /* 12534321 mov ebp, esp */
  EBP = (ESP);
  /* 12534323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534325 pop ebp */
  EBP = (pop32());
  /* 12534326 ret  */
  ESPCHK(0x12534320u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12534330 (129 bytes, 56 insns) */
void f_12534330(void) {
  FTRACE(0x12534330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534330 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12534334 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12534338 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1253433e jne 0x1253437c */
  if (!C.zf) goto L_1253437c;
L_12534340:;
  /* 12534340 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12534342 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12534344 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 12534346 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12534348 je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 1253434a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1253434d jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 1253434f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12534351 je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 12534353 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12534356 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12534359 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 1253435b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1253435d je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 1253435f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12534362 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 12534364 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534367 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253436a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1253436c jne 0x12534340 */
  if (!C.zf) goto L_12534340;
  /* 1253436e mov edi, edi */
  EDI = (EDI);
L_12534370:;
  /* 12534370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534372 ret  */
  ESPCHK(0x12534330u, _esp0);
  ESP += 4; return;
  /* 12534373 nop  */
  /* nop */
L_12534374:;
  /* 12534374 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534376 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12534378 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12534379 ret  */
  ESPCHK(0x12534330u, _esp0);
  ESP += 4; return;
  /* 1253437a mov edi, edi */
  EDI = (EDI);
L_1253437c:;
  /* 1253437c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12534382 je 0x12534398 */
  if (C.zf) goto L_12534398;
  /* 12534384 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12534386 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12534387 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12534389 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 1253438b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1253438c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1253438e je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 12534390 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12534396 je 0x12534340 */
  if (C.zf) goto L_12534340;
L_12534398:;
  /* 12534398 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1253439b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253439e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125343a0 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 125343a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125343a4 je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 125343a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125343a9 jne 0x12534374 */
  if (!C.zf) goto L_12534374;
  /* 125343ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125343ad je 0x12534370 */
  if (C.zf) goto L_12534370;
  /* 125343af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125343b2 jmp 0x12534340 */
  goto L_12534340;
}

/* FUN_100143c0 @ 0x125343c0 (62 bytes, 35 insns) */
void f_125343c0(void) {
  FTRACE(0x125343c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125343c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125343c1 mov ebp, esp */
  EBP = (ESP);
  /* 125343c3 push esi */
  push32((uint32_t)(ESI));
  /* 125343c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125343c6 push eax */
  push32((uint32_t)(EAX));
  /* 125343c7 push eax */
  push32((uint32_t)(EAX));
  /* 125343c8 push eax */
  push32((uint32_t)(EAX));
  /* 125343c9 push eax */
  push32((uint32_t)(EAX));
  /* 125343ca push eax */
  push32((uint32_t)(EAX));
  /* 125343cb push eax */
  push32((uint32_t)(EAX));
  /* 125343cc push eax */
  push32((uint32_t)(EAX));
  /* 125343cd push eax */
  push32((uint32_t)(EAX));
  /* 125343ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125343d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125343d4:;
  /* 125343d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125343d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125343d8 je 0x125343e1 */
  if (C.zf) goto L_125343e1;
  /* 125343da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125343db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125343db");
  /* 125343df jmp 0x125343d4 */
  goto L_125343d4;
L_125343e1:;
  /* 125343e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125343e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125343e7 nop  */
  /* nop */
L_125343e8:;
  /* 125343e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125343e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125343eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125343ed je 0x125343f6 */
  if (C.zf) goto L_125343f6;
  /* 125343ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125343f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125343f0");
  /* 125343f4 jae 0x125343e8 */
  if (!C.cf) goto L_125343e8;
L_125343f6:;
  /* 125343f6 mov eax, ecx */
  EAX = (ECX);
  /* 125343f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125343fb pop esi */
  ESI = (pop32());
  /* 125343fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125343fd ret  */
  ESPCHK(0x125343c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12534400 (56 bytes, 31 insns) */
void f_12534400(void) {
  FTRACE(0x12534400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534400 push ebp */
  push32((uint32_t)(EBP));
  /* 12534401 mov ebp, esp */
  EBP = (ESP);
  /* 12534403 push edi */
  push32((uint32_t)(EDI));
  /* 12534404 push esi */
  push32((uint32_t)(ESI));
  /* 12534405 push ebx */
  push32((uint32_t)(EBX));
  /* 12534406 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12534409 jecxz 0x12534431 */
  x86_unimpl("jecxz @ 0x12534409");
  /* 1253440b mov ebx, ecx */
  EBX = (ECX);
  /* 1253440d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12534410 mov esi, edi */
  ESI = (EDI);
  /* 12534412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534414 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12534416 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534418 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253441a mov edi, esi */
  EDI = (ESI);
  /* 1253441c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1253441f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12534421 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12534424 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534426 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12534429 ja 0x1253442f */
  if ((!C.cf&&!C.zf)) goto L_1253442f;
  /* 1253442b je 0x12534431 */
  if (C.zf) goto L_12534431;
  /* 1253442d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1253442e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1253442f:;
  /* 1253442f not ecx */
  ECX = (~(ECX));
L_12534431:;
  /* 12534431 mov eax, ecx */
  EAX = (ECX);
  /* 12534433 pop ebx */
  EBX = (pop32());
  /* 12534434 pop esi */
  ESI = (pop32());
  /* 12534435 pop edi */
  EDI = (pop32());
  /* 12534436 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12534437 ret  */
  ESPCHK(0x12534400u, _esp0);
  ESP += 4; return;
}

/* FUN_10014440 @ 0x12534440 (58 bytes, 32 insns) */
void f_12534440(void) {
  FTRACE(0x12534440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534440 push ebp */
  push32((uint32_t)(EBP));
  /* 12534441 mov ebp, esp */
  EBP = (ESP);
  /* 12534443 push esi */
  push32((uint32_t)(ESI));
  /* 12534444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534446 push eax */
  push32((uint32_t)(EAX));
  /* 12534447 push eax */
  push32((uint32_t)(EAX));
  /* 12534448 push eax */
  push32((uint32_t)(EAX));
  /* 12534449 push eax */
  push32((uint32_t)(EAX));
  /* 1253444a push eax */
  push32((uint32_t)(EAX));
  /* 1253444b push eax */
  push32((uint32_t)(EAX));
  /* 1253444c push eax */
  push32((uint32_t)(EAX));
  /* 1253444d push eax */
  push32((uint32_t)(EAX));
  /* 1253444e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12534451 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12534454:;
  /* 12534454 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12534456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12534458 je 0x12534461 */
  if (C.zf) goto L_12534461;
  /* 1253445a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1253445b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1253445b");
  /* 1253445f jmp 0x12534454 */
  goto L_12534454;
L_12534461:;
  /* 12534461 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12534464:;
  /* 12534464 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12534466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12534468 je 0x12534474 */
  if (C.zf) goto L_12534474;
  /* 1253446a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1253446b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1253446b");
  /* 1253446f jae 0x12534464 */
  if (!C.cf) goto L_12534464;
  /* 12534471 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12534474:;
  /* 12534474 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534477 pop esi */
  ESI = (pop32());
  /* 12534478 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12534479 ret  */
  ESPCHK(0x12534440u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x12534480 (512 bytes, 147 insns) */
void f_12534480(void) {
  FTRACE(0x12534480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534480 push ebp */
  push32((uint32_t)(EBP));
  /* 12534481 mov ebp, esp */
  EBP = (ESP);
  /* 12534483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534486 cmp dword ptr [0x12554bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253448d jne 0x125344b2 */
  if (!C.zf) goto L_125344b2;
  /* 1253448f call 0x12534f50 */
  push32(0x12534494u); f_12534f50();
  /* 12534494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534496 je 0x125344a2 */
  if (C.zf) goto L_125344a2;
  /* 12534498 mov eax, dword ptr [0x125572f4] */
  EAX = (r32((uint32_t)(0x125572f4)));
  /* 1253449d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125344a0 jmp 0x125344a9 */
  goto L_125344a9;
L_125344a2:;
  /* 125344a2 mov dword ptr [ebp - 8], 0x12534fa0 */
  w32((uint32_t)(EBP + -0x8), (0x12534fa0u));
L_125344a9:;
  /* 125344a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125344ac mov dword ptr [0x12554bd4], ecx */
  w32((uint32_t)(0x12554bd4), (ECX));
L_125344b2:;
  /* 125344b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125344b6 jne 0x125344c2 */
  if (!C.zf) goto L_125344c2;
  /* 125344b8 call 0x12534da0 */
  push32(0x125344bdu); f_12534da0();
  /* 125344bd jmp 0x1253458e */
  goto L_1253458e;
L_125344c2:;
  /* 125344c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125344c5 mov dword ptr [0x12554bc4], edx */
  w32((uint32_t)(0x12554bc4), (EDX));
  /* 125344cb cmp dword ptr [0x12554bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125344d2 je 0x125344f4 */
  if (C.zf) goto L_125344f4;
  /* 125344d4 mov eax, dword ptr [0x12554bc4] */
  EAX = (r32((uint32_t)(0x12554bc4)));
  /* 125344d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125344dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125344de je 0x125344f4 */
  if (C.zf) goto L_125344f4;
  /* 125344e0 push 0x12554bc4 */
  push32((uint32_t)(0x12554bc4u));
  /* 125344e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125344e7 push 0x12553a90 */
  push32((uint32_t)(0x12553a90u));
  /* 125344ec call 0x12534680 */
  push32(0x125344f1u); f_12534680();
  /* 125344f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125344f4:;
  /* 125344f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125344f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125344fa mov dword ptr [0x12554bc8], edx */
  w32((uint32_t)(0x12554bc8), (EDX));
  /* 12534500 cmp dword ptr [0x12554bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534507 je 0x12534529 */
  if (C.zf) goto L_12534529;
  /* 12534509 mov eax, dword ptr [0x12554bc8] */
  EAX = (r32((uint32_t)(0x12554bc8)));
  /* 1253450e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12534511 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12534513 je 0x12534529 */
  if (C.zf) goto L_12534529;
  /* 12534515 push 0x12554bc8 */
  push32((uint32_t)(0x12554bc8u));
  /* 1253451a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1253451c push 0x125539d8 */
  push32((uint32_t)(0x125539d8u));
  /* 12534521 call 0x12534680 */
  push32(0x12534526u); f_12534680();
  /* 12534526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12534529:;
  /* 12534529 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 12534533 cmp dword ptr [0x12554bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253453a je 0x1253456d */
  if (C.zf) goto L_1253456d;
  /* 1253453c mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534542 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12534545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534547 je 0x1253456d */
  if (C.zf) goto L_1253456d;
  /* 12534549 cmp dword ptr [0x12554bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534550 je 0x12534566 */
  if (C.zf) goto L_12534566;
  /* 12534552 mov ecx, dword ptr [0x12554bc8] */
  ECX = (r32((uint32_t)(0x12554bc8)));
  /* 12534558 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1253455b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1253455d je 0x12534566 */
  if (C.zf) goto L_12534566;
  /* 1253455f call 0x12534710 */
  push32(0x12534564u); f_12534710();
  /* 12534564 jmp 0x1253456b */
  goto L_1253456b;
L_12534566:;
  /* 12534566 call 0x12534b00 */
  push32(0x1253456bu); f_12534b00();
L_1253456b:;
  /* 1253456b jmp 0x1253458e */
  goto L_1253458e;
L_1253456d:;
  /* 1253456d cmp dword ptr [0x12554bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534574 je 0x12534589 */
  if (C.zf) goto L_12534589;
  /* 12534576 mov eax, dword ptr [0x12554bc8] */
  EAX = (r32((uint32_t)(0x12554bc8)));
  /* 1253457b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253457e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12534580 je 0x12534589 */
  if (C.zf) goto L_12534589;
  /* 12534582 call 0x12534ca0 */
  push32(0x12534587u); f_12534ca0();
  /* 12534587 jmp 0x1253458e */
  goto L_1253458e;
L_12534589:;
  /* 12534589 call 0x12534da0 */
  push32(0x1253458eu); f_12534da0();
L_1253458e:;
  /* 1253458e cmp dword ptr [0x12554bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534595 jne 0x1253459e */
  if (!C.zf) goto L_1253459e;
  /* 12534597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534599 jmp 0x1253467c */
  goto L_1253467c;
L_1253459e:;
  /* 1253459e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125345a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125345a7 push edx */
  push32((uint32_t)(EDX));
  /* 125345a8 call 0x12534dd0 */
  push32(0x125345adu); f_12534dd0();
  /* 125345ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125345b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125345b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125345b7 je 0x125345cc */
  if (C.zf) goto L_125345cc;
  /* 125345b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125345bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125345c1 push eax */
  push32((uint32_t)(EAX));
  /* 125345c2 call dword ptr [0x125572f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f8))), 0x125345c8u);
  /* 125345c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125345ca jne 0x125345d3 */
  if (!C.zf) goto L_125345d3;
L_125345cc:;
  /* 125345cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125345ce jmp 0x1253467c */
  goto L_1253467c;
L_125345d3:;
  /* 125345d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125345d5 mov ecx, dword ptr [0x12554bb4] */
  ECX = (r32((uint32_t)(0x12554bb4)));
  /* 125345db push ecx */
  push32((uint32_t)(ECX));
  /* 125345dc call dword ptr [0x12557308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557308))), 0x125345e2u);
  /* 125345e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125345e4 jne 0x125345ed */
  if (!C.zf) goto L_125345ed;
  /* 125345e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125345e8 jmp 0x1253467c */
  goto L_1253467c;
L_125345ed:;
  /* 125345ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125345f1 je 0x12534618 */
  if (C.zf) goto L_12534618;
  /* 125345f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125345f6 mov ax, word ptr [0x12554bb4] */
  AX = (r16((uint32_t)(0x12554bb4)));
  /* 125345fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125345ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12534602 mov dx, word ptr [0x12554bd0] */
  DX = (r16((uint32_t)(0x12554bd0)));
  /* 12534609 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1253460d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12534610 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12534614 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12534618:;
  /* 12534618 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253461c je 0x12534677 */
  if (C.zf) goto L_12534677;
  /* 1253461e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12534620 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12534623 push edx */
  push32((uint32_t)(EDX));
  /* 12534624 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12534629 mov eax, dword ptr [0x12554bb4] */
  EAX = (r32((uint32_t)(0x12554bb4)));
  /* 1253462e push eax */
  push32((uint32_t)(EAX));
  /* 1253462f call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534635u);
  /* 12534635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534637 jne 0x1253463d */
  if (!C.zf) goto L_1253463d;
  /* 12534639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253463b jmp 0x1253467c */
  goto L_1253467c;
L_1253463d:;
  /* 1253463d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1253463f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12534642 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534645 push ecx */
  push32((uint32_t)(ECX));
  /* 12534646 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1253464b mov edx, dword ptr [0x12554bd0] */
  EDX = (r32((uint32_t)(0x12554bd0)));
  /* 12534651 push edx */
  push32((uint32_t)(EDX));
  /* 12534652 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534658u);
  /* 12534658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253465a jne 0x12534660 */
  if (!C.zf) goto L_12534660;
  /* 1253465c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253465e jmp 0x1253467c */
  goto L_1253467c;
L_12534660:;
  /* 12534660 push 0xa */
  push32((uint32_t)(0xau));
  /* 12534662 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12534665 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253466a push eax */
  push32((uint32_t)(EAX));
  /* 1253466b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253466e push ecx */
  push32((uint32_t)(ECX));
  /* 1253466f call 0x1252b1e0 */
  push32(0x12534674u); f_1252b1e0();
  /* 12534674 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12534677:;
  /* 12534677 mov eax, 1 */
  EAX = (0x1u);
L_1253467c:;
  /* 1253467c mov esp, ebp */
  ESP = (EBP);
  /* 1253467e pop ebp */
  EBP = (pop32());
  /* 1253467f ret  */
  ESPCHK(0x12534480u, _esp0);
  ESP += 4; return;
}

/* FUN_10014680 @ 0x12534680 (130 bytes, 47 insns) */
void f_12534680(void) {
  FTRACE(0x12534680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534680 push ebp */
  push32((uint32_t)(EBP));
  /* 12534681 mov ebp, esp */
  EBP = (ESP);
  /* 12534683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534686 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1253468d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12534694:;
  /* 12534694 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12534697 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253469a jg 0x125346fe */
  if ((!C.zf&&C.sf==C.of)) goto L_125346fe;
  /* 1253469c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125346a0 je 0x125346fe */
  if (C.zf) goto L_125346fe;
  /* 125346a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125346a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125346a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125346a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125346ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125346ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125346b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125346b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125346b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 125346b9 push eax */
  push32((uint32_t)(EAX));
  /* 125346ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125346bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125346bf push edx */
  push32((uint32_t)(EDX));
  /* 125346c0 call 0x12536d70 */
  push32(0x125346c5u); f_12536d70();
  /* 125346c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125346c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125346cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125346cf jne 0x125346e2 */
  if (!C.zf) goto L_125346e2;
  /* 125346d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125346d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125346d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 125346db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125346de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125346e0 jmp 0x125346fc */
  goto L_125346fc;
L_125346e2:;
  /* 125346e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125346e6 jge 0x125346f3 */
  if ((C.sf==C.of)) goto L_125346f3;
  /* 125346e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125346eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125346ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125346f1 jmp 0x125346fc */
  goto L_125346fc;
L_125346f3:;
  /* 125346f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125346f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125346f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125346fc:;
  /* 125346fc jmp 0x12534694 */
  goto L_12534694;
L_125346fe:;
  /* 125346fe mov esp, ebp */
  ESP = (EBP);
  /* 12534700 pop ebp */
  EBP = (pop32());
  /* 12534701 ret  */
  ESPCHK(0x12534680u, _esp0);
  ESP += 4; return;
}

/* FUN_10014710 @ 0x12534710 (186 bytes, 50 insns) */
void f_12534710(void) {
  FTRACE(0x12534710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534710 push ebp */
  push32((uint32_t)(EBP));
  /* 12534711 mov ebp, esp */
  EBP = (ESP);
  /* 12534713 push ecx */
  push32((uint32_t)(ECX));
  /* 12534714 mov eax, dword ptr [0x12554bc4] */
  EAX = (r32((uint32_t)(0x12554bc4)));
  /* 12534719 push eax */
  push32((uint32_t)(EAX));
  /* 1253471a call 0x1252b4d0 */
  push32(0x1253471fu); f_1252b4d0();
  /* 1253471f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534722 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534724 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534727 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1253472a mov dword ptr [0x12554bc0], ecx */
  w32((uint32_t)(0x12554bc0), (ECX));
  /* 12534730 mov edx, dword ptr [0x12554bc8] */
  EDX = (r32((uint32_t)(0x12554bc8)));
  /* 12534736 push edx */
  push32((uint32_t)(EDX));
  /* 12534737 call 0x1252b4d0 */
  push32(0x1253473cu); f_1252b4d0();
  /* 1253473c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253473f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534741 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534744 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12534747 mov dword ptr [0x12554bb8], ecx */
  w32((uint32_t)(0x12554bb8), (ECX));
  /* 1253474d mov dword ptr [0x12554bb4], 0 */
  w32((uint32_t)(0x12554bb4), (0x0u));
  /* 12534757 cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253475e je 0x12534769 */
  if (C.zf) goto L_12534769;
  /* 12534760 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12534767 jmp 0x1253477b */
  goto L_1253477b;
L_12534769:;
  /* 12534769 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 1253476f push edx */
  push32((uint32_t)(EDX));
  /* 12534770 call 0x125351b0 */
  push32(0x12534775u); f_125351b0();
  /* 12534775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534778 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1253477b:;
  /* 1253477b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253477e mov dword ptr [0x12554bbc], eax */
  w32((uint32_t)(0x12554bbc), (EAX));
  /* 12534783 push 1 */
  push32((uint32_t)(0x1u));
  /* 12534785 push 0x125347d0 */
  push32((uint32_t)(0x125347d0u));
  /* 1253478a call dword ptr [0x125572fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572fc))), 0x12534790u);
  /* 12534790 mov ecx, dword ptr [0x12554bcc] */
  ECX = (r32((uint32_t)(0x12554bcc)));
  /* 12534796 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1253479c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253479e je 0x125347bc */
  if (C.zf) goto L_125347bc;
  /* 125347a0 mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 125347a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 125347ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125347ae je 0x125347bc */
  if (C.zf) goto L_125347bc;
  /* 125347b0 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 125347b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 125347b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125347ba jne 0x125347c6 */
  if (!C.zf) goto L_125347c6;
L_125347bc:;
  /* 125347bc mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
L_125347c6:;
  /* 125347c6 mov esp, ebp */
  ESP = (EBP);
  /* 125347c8 pop ebp */
  EBP = (pop32());
  /* 125347c9 ret  */
  ESPCHK(0x12534710u, _esp0);
  ESP += 4; return;
}

/* FUN_100147d0 @ 0x125347d0 (804 bytes, 220 insns) */
void f_125347d0(void) {
  FTRACE(0x125347d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125347d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125347d1 mov ebp, esp */
  EBP = (ESP);
  /* 125347d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125347d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125347d9 push eax */
  push32((uint32_t)(EAX));
  /* 125347da call 0x12535130 */
  push32(0x125347dfu); f_12535130();
  /* 125347df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125347e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125347e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125347e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125347ea push ecx */
  push32((uint32_t)(ECX));
  /* 125347eb mov edx, dword ptr [0x12554bb8] */
  EDX = (r32((uint32_t)(0x12554bb8)));
  /* 125347f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125347f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125347f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125347fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534801 push edx */
  push32((uint32_t)(EDX));
  /* 12534802 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534805 push eax */
  push32((uint32_t)(EAX));
  /* 12534806 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x1253480cu);
  /* 1253480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253480e jne 0x12534824 */
  if (!C.zf) goto L_12534824;
  /* 12534810 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 1253481a mov eax, 1 */
  EAX = (0x1u);
  /* 1253481f jmp 0x12534aee */
  goto L_12534aee;
L_12534824:;
  /* 12534824 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12534827 push ecx */
  push32((uint32_t)(ECX));
  /* 12534828 mov edx, dword ptr [0x12554bc8] */
  EDX = (r32((uint32_t)(0x12554bc8)));
  /* 1253482e push edx */
  push32((uint32_t)(EDX));
  /* 1253482f call 0x12536d70 */
  push32(0x12534834u); f_12536d70();
  /* 12534834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534839 jne 0x1253495f */
  if (!C.zf) goto L_1253495f;
  /* 1253483f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12534841 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12534844 push eax */
  push32((uint32_t)(EAX));
  /* 12534845 mov ecx, dword ptr [0x12554bc0] */
  ECX = (r32((uint32_t)(0x12554bc0)));
  /* 1253484b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1253484d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253484f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12534855 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253485b push ecx */
  push32((uint32_t)(ECX));
  /* 1253485c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1253485f push edx */
  push32((uint32_t)(EDX));
  /* 12534860 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534866u);
  /* 12534866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534868 jne 0x1253487e */
  if (!C.zf) goto L_1253487e;
  /* 1253486a mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 12534874 mov eax, 1 */
  EAX = (0x1u);
  /* 12534879 jmp 0x12534aee */
  goto L_12534aee;
L_1253487e:;
  /* 1253487e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12534881 push eax */
  push32((uint32_t)(EAX));
  /* 12534882 mov ecx, dword ptr [0x12554bc4] */
  ECX = (r32((uint32_t)(0x12554bc4)));
  /* 12534888 push ecx */
  push32((uint32_t)(ECX));
  /* 12534889 call 0x12536d70 */
  push32(0x1253488eu); f_12536d70();
  /* 1253488e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534893 jne 0x125348c0 */
  if (!C.zf) goto L_125348c0;
  /* 12534895 mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 1253489b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 125348a1 mov dword ptr [0x12554bcc], edx */
  w32((uint32_t)(0x12554bcc), (EDX));
  /* 125348a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125348aa mov dword ptr [0x12554bd0], eax */
  w32((uint32_t)(0x12554bd0), (EAX));
  /* 125348af mov ecx, dword ptr [0x12554bd0] */
  ECX = (r32((uint32_t)(0x12554bd0)));
  /* 125348b5 mov dword ptr [0x12554bb4], ecx */
  w32((uint32_t)(0x12554bb4), (ECX));
  /* 125348bb jmp 0x1253495f */
  goto L_1253495f;
L_125348c0:;
  /* 125348c0 mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 125348c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125348c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125348cb jne 0x1253495f */
  if (!C.zf) goto L_1253495f;
  /* 125348d1 cmp dword ptr [0x12554bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125348d8 je 0x1253492d */
  if (C.zf) goto L_1253492d;
  /* 125348da mov eax, dword ptr [0x12554bbc] */
  EAX = (r32((uint32_t)(0x12554bbc)));
  /* 125348df push eax */
  push32((uint32_t)(EAX));
  /* 125348e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125348e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125348e4 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 125348ea push edx */
  push32((uint32_t)(EDX));
  /* 125348eb call 0x12536e40 */
  push32(0x125348f0u); f_12536e40();
  /* 125348f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125348f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125348f5 jne 0x1253492d */
  if (!C.zf) goto L_1253492d;
  /* 125348f7 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 125348fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 125348fe mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 12534903 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534906 mov dword ptr [0x12554bd0], ecx */
  w32((uint32_t)(0x12554bd0), (ECX));
  /* 1253490c mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534912 push edx */
  push32((uint32_t)(EDX));
  /* 12534913 call 0x1252b4d0 */
  push32(0x12534918u); f_1252b4d0();
  /* 12534918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253491b cmp eax, dword ptr [0x12554bbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12554bbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534921 jne 0x1253492b */
  if (!C.zf) goto L_1253492b;
  /* 12534923 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534926 mov dword ptr [0x12554bb4], eax */
  w32((uint32_t)(0x12554bb4), (EAX));
L_1253492b:;
  /* 1253492b jmp 0x1253495f */
  goto L_1253495f;
L_1253492d:;
  /* 1253492d mov ecx, dword ptr [0x12554bcc] */
  ECX = (r32((uint32_t)(0x12554bcc)));
  /* 12534933 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12534936 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12534938 jne 0x1253495f */
  if (!C.zf) goto L_1253495f;
  /* 1253493a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1253493d push edx */
  push32((uint32_t)(EDX));
  /* 1253493e call 0x12534e70 */
  push32(0x12534943u); f_12534e70();
  /* 12534943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534948 je 0x1253495f */
  if (C.zf) goto L_1253495f;
  /* 1253494a mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 1253494f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12534951 mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 12534956 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534959 mov dword ptr [0x12554bd0], ecx */
  w32((uint32_t)(0x12554bd0), (ECX));
L_1253495f:;
  /* 1253495f mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 12534965 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1253496b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534971 je 0x12534ae1 */
  if (C.zf) goto L_12534ae1;
  /* 12534977 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12534979 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1253497c push eax */
  push32((uint32_t)(EAX));
  /* 1253497d mov ecx, dword ptr [0x12554bc0] */
  ECX = (r32((uint32_t)(0x12554bc0)));
  /* 12534983 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534985 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534987 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1253498d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534993 push ecx */
  push32((uint32_t)(ECX));
  /* 12534994 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534997 push edx */
  push32((uint32_t)(EDX));
  /* 12534998 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x1253499eu);
  /* 1253499e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125349a0 jne 0x125349b6 */
  if (!C.zf) goto L_125349b6;
  /* 125349a2 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 125349ac mov eax, 1 */
  EAX = (0x1u);
  /* 125349b1 jmp 0x12534aee */
  goto L_12534aee;
L_125349b6:;
  /* 125349b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125349b9 push eax */
  push32((uint32_t)(EAX));
  /* 125349ba mov ecx, dword ptr [0x12554bc4] */
  ECX = (r32((uint32_t)(0x12554bc4)));
  /* 125349c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125349c1 call 0x12536d70 */
  push32(0x125349c6u); f_12536d70();
  /* 125349c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125349c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125349cb jne 0x12534a80 */
  if (!C.zf) goto L_12534a80;
  /* 125349d1 mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 125349d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125349da mov dword ptr [0x12554bcc], edx */
  w32((uint32_t)(0x12554bcc), (EDX));
  /* 125349e0 cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125349e7 je 0x12534a0a */
  if (C.zf) goto L_12534a0a;
  /* 125349e9 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 125349ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125349f1 mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 125349f6 cmp dword ptr [0x12554bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125349fd jne 0x12534a08 */
  if (!C.zf) goto L_12534a08;
  /* 125349ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534a02 mov dword ptr [0x12554bb4], ecx */
  w32((uint32_t)(0x12554bb4), (ECX));
L_12534a08:;
  /* 12534a08 jmp 0x12534a7e */
  goto L_12534a7e;
L_12534a0a:;
  /* 12534a0a cmp dword ptr [0x12554bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a11 je 0x12534a5f */
  if (C.zf) goto L_12534a5f;
  /* 12534a13 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534a19 push edx */
  push32((uint32_t)(EDX));
  /* 12534a1a call 0x1252b4d0 */
  push32(0x12534a1fu); f_1252b4d0();
  /* 12534a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534a22 cmp eax, dword ptr [0x12554bbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12554bbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a28 jne 0x12534a5f */
  if (!C.zf) goto L_12534a5f;
  /* 12534a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12534a2c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534a2f push eax */
  push32((uint32_t)(EAX));
  /* 12534a30 call 0x12534ec0 */
  push32(0x12534a35u); f_12534ec0();
  /* 12534a35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534a3a je 0x12534a5d */
  if (C.zf) goto L_12534a5d;
  /* 12534a3c mov ecx, dword ptr [0x12554bcc] */
  ECX = (r32((uint32_t)(0x12554bcc)));
  /* 12534a42 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12534a45 mov dword ptr [0x12554bcc], ecx */
  w32((uint32_t)(0x12554bcc), (ECX));
  /* 12534a4b cmp dword ptr [0x12554bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a52 jne 0x12534a5d */
  if (!C.zf) goto L_12534a5d;
  /* 12534a54 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534a57 mov dword ptr [0x12554bb4], edx */
  w32((uint32_t)(0x12554bb4), (EDX));
L_12534a5d:;
  /* 12534a5d jmp 0x12534a7e */
  goto L_12534a7e;
L_12534a5f:;
  /* 12534a5f mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534a64 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12534a67 mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 12534a6c cmp dword ptr [0x12554bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a73 jne 0x12534a7e */
  if (!C.zf) goto L_12534a7e;
  /* 12534a75 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534a78 mov dword ptr [0x12554bb4], ecx */
  w32((uint32_t)(0x12554bb4), (ECX));
L_12534a7e:;
  /* 12534a7e jmp 0x12534ae1 */
  goto L_12534ae1;
L_12534a80:;
  /* 12534a80 cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a87 jne 0x12534ae1 */
  if (!C.zf) goto L_12534ae1;
  /* 12534a89 cmp dword ptr [0x12554bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534a90 je 0x12534ae1 */
  if (C.zf) goto L_12534ae1;
  /* 12534a92 mov edx, dword ptr [0x12554bbc] */
  EDX = (r32((uint32_t)(0x12554bbc)));
  /* 12534a98 push edx */
  push32((uint32_t)(EDX));
  /* 12534a99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12534a9c push eax */
  push32((uint32_t)(EAX));
  /* 12534a9d mov ecx, dword ptr [0x12554bc4] */
  ECX = (r32((uint32_t)(0x12554bc4)));
  /* 12534aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12534aa4 call 0x12536e40 */
  push32(0x12534aa9u); f_12536e40();
  /* 12534aa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534aae jne 0x12534ae1 */
  if (!C.zf) goto L_12534ae1;
  /* 12534ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12534ab2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12534ab6 call 0x12534ec0 */
  push32(0x12534abbu); f_12534ec0();
  /* 12534abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534ac0 je 0x12534ae1 */
  if (C.zf) goto L_12534ae1;
  /* 12534ac2 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534ac7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12534aca mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 12534acf cmp dword ptr [0x12554bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534ad6 jne 0x12534ae1 */
  if (!C.zf) goto L_12534ae1;
  /* 12534ad8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534adb mov dword ptr [0x12554bb4], ecx */
  w32((uint32_t)(0x12554bb4), (ECX));
L_12534ae1:;
  /* 12534ae1 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534ae6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12534ae9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534aeb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534aed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12534aee:;
  /* 12534aee mov esp, ebp */
  ESP = (EBP);
  /* 12534af0 pop ebp */
  EBP = (pop32());
  /* 12534af1 ret 4 */
  ESPCHK(0x125347d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014b00 @ 0x12534b00 (116 bytes, 33 insns) */
void f_12534b00(void) {
  FTRACE(0x12534b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12534b01 mov ebp, esp */
  EBP = (ESP);
  /* 12534b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12534b04 mov eax, dword ptr [0x12554bc4] */
  EAX = (r32((uint32_t)(0x12554bc4)));
  /* 12534b09 push eax */
  push32((uint32_t)(EAX));
  /* 12534b0a call 0x1252b4d0 */
  push32(0x12534b0fu); f_1252b4d0();
  /* 12534b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534b12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534b14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534b17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12534b1a mov dword ptr [0x12554bc0], ecx */
  w32((uint32_t)(0x12554bc0), (ECX));
  /* 12534b20 cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534b27 je 0x12534b32 */
  if (C.zf) goto L_12534b32;
  /* 12534b29 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12534b30 jmp 0x12534b44 */
  goto L_12534b44;
L_12534b32:;
  /* 12534b32 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534b38 push edx */
  push32((uint32_t)(EDX));
  /* 12534b39 call 0x125351b0 */
  push32(0x12534b3eu); f_125351b0();
  /* 12534b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534b41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12534b44:;
  /* 12534b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12534b47 mov dword ptr [0x12554bbc], eax */
  w32((uint32_t)(0x12554bbc), (EAX));
  /* 12534b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12534b4e push 0x12534b80 */
  push32((uint32_t)(0x12534b80u));
  /* 12534b53 call dword ptr [0x125572fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572fc))), 0x12534b59u);
  /* 12534b59 mov ecx, dword ptr [0x12554bcc] */
  ECX = (r32((uint32_t)(0x12554bcc)));
  /* 12534b5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12534b62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12534b64 jne 0x12534b70 */
  if (!C.zf) goto L_12534b70;
  /* 12534b66 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
L_12534b70:;
  /* 12534b70 mov esp, ebp */
  ESP = (EBP);
  /* 12534b72 pop ebp */
  EBP = (pop32());
  /* 12534b73 ret  */
  ESPCHK(0x12534b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b80 @ 0x12534b80 (287 bytes, 86 insns) */
void f_12534b80(void) {
  FTRACE(0x12534b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12534b81 mov ebp, esp */
  EBP = (ESP);
  /* 12534b83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534b89 push eax */
  push32((uint32_t)(EAX));
  /* 12534b8a call 0x12535130 */
  push32(0x12534b8fu); f_12535130();
  /* 12534b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534b92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12534b95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12534b97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12534b9a push ecx */
  push32((uint32_t)(ECX));
  /* 12534b9b mov edx, dword ptr [0x12554bc0] */
  EDX = (r32((uint32_t)(0x12554bc0)));
  /* 12534ba1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534ba3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534ba5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12534bab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534bb1 push edx */
  push32((uint32_t)(EDX));
  /* 12534bb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534bb5 push eax */
  push32((uint32_t)(EAX));
  /* 12534bb6 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534bbcu);
  /* 12534bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534bbe jne 0x12534bd4 */
  if (!C.zf) goto L_12534bd4;
  /* 12534bc0 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 12534bca mov eax, 1 */
  EAX = (0x1u);
  /* 12534bcf jmp 0x12534c99 */
  goto L_12534c99;
L_12534bd4:;
  /* 12534bd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12534bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12534bd8 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534bde push edx */
  push32((uint32_t)(EDX));
  /* 12534bdf call 0x12536d70 */
  push32(0x12534be4u); f_12536d70();
  /* 12534be4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534be7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534be9 jne 0x12534c29 */
  if (!C.zf) goto L_12534c29;
  /* 12534beb cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534bf2 jne 0x12534c06 */
  if (!C.zf) goto L_12534c06;
  /* 12534bf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12534bf6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534bf9 push eax */
  push32((uint32_t)(EAX));
  /* 12534bfa call 0x12534ec0 */
  push32(0x12534bffu); f_12534ec0();
  /* 12534bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534c02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534c04 je 0x12534c27 */
  if (C.zf) goto L_12534c27;
L_12534c06:;
  /* 12534c06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534c09 mov dword ptr [0x12554bd0], ecx */
  w32((uint32_t)(0x12554bd0), (ECX));
  /* 12534c0f mov edx, dword ptr [0x12554bd0] */
  EDX = (r32((uint32_t)(0x12554bd0)));
  /* 12534c15 mov dword ptr [0x12554bb4], edx */
  w32((uint32_t)(0x12554bb4), (EDX));
  /* 12534c1b mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534c20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12534c22 mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
L_12534c27:;
  /* 12534c27 jmp 0x12534c8c */
  goto L_12534c8c;
L_12534c29:;
  /* 12534c29 cmp dword ptr [0x12554bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534c30 jne 0x12534c8c */
  if (!C.zf) goto L_12534c8c;
  /* 12534c32 cmp dword ptr [0x12554bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534c39 je 0x12534c8c */
  if (C.zf) goto L_12534c8c;
  /* 12534c3b mov ecx, dword ptr [0x12554bbc] */
  ECX = (r32((uint32_t)(0x12554bbc)));
  /* 12534c41 push ecx */
  push32((uint32_t)(ECX));
  /* 12534c42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12534c45 push edx */
  push32((uint32_t)(EDX));
  /* 12534c46 mov eax, dword ptr [0x12554bc4] */
  EAX = (r32((uint32_t)(0x12554bc4)));
  /* 12534c4b push eax */
  push32((uint32_t)(EAX));
  /* 12534c4c call 0x12536e40 */
  push32(0x12534c51u); f_12536e40();
  /* 12534c51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534c56 jne 0x12534c8c */
  if (!C.zf) goto L_12534c8c;
  /* 12534c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12534c5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12534c5e call 0x12534ec0 */
  push32(0x12534c63u); f_12534ec0();
  /* 12534c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534c68 je 0x12534c8c */
  if (C.zf) goto L_12534c8c;
  /* 12534c6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534c6d mov dword ptr [0x12554bd0], edx */
  w32((uint32_t)(0x12554bd0), (EDX));
  /* 12534c73 mov eax, dword ptr [0x12554bd0] */
  EAX = (r32((uint32_t)(0x12554bd0)));
  /* 12534c78 mov dword ptr [0x12554bb4], eax */
  w32((uint32_t)(0x12554bb4), (EAX));
  /* 12534c7d mov ecx, dword ptr [0x12554bcc] */
  ECX = (r32((uint32_t)(0x12554bcc)));
  /* 12534c83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12534c86 mov dword ptr [0x12554bcc], ecx */
  w32((uint32_t)(0x12554bcc), (ECX));
L_12534c8c:;
  /* 12534c8c mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534c91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12534c94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534c96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534c98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12534c99:;
  /* 12534c99 mov esp, ebp */
  ESP = (EBP);
  /* 12534c9b pop ebp */
  EBP = (pop32());
  /* 12534c9c ret 4 */
  ESPCHK(0x12534b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10014ca0 @ 0x12534ca0 (69 bytes, 20 insns) */
void f_12534ca0(void) {
  FTRACE(0x12534ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12534ca3 mov eax, dword ptr [0x12554bc8] */
  EAX = (r32((uint32_t)(0x12554bc8)));
  /* 12534ca8 push eax */
  push32((uint32_t)(EAX));
  /* 12534ca9 call 0x1252b4d0 */
  push32(0x12534caeu); f_1252b4d0();
  /* 12534cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534cb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534cb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534cb6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12534cb9 mov dword ptr [0x12554bb8], ecx */
  w32((uint32_t)(0x12554bb8), (ECX));
  /* 12534cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12534cc1 push 0x12534cf0 */
  push32((uint32_t)(0x12534cf0u));
  /* 12534cc6 call dword ptr [0x125572fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572fc))), 0x12534cccu);
  /* 12534ccc mov edx, dword ptr [0x12554bcc] */
  EDX = (r32((uint32_t)(0x12554bcc)));
  /* 12534cd2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12534cd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12534cd7 jne 0x12534ce3 */
  if (!C.zf) goto L_12534ce3;
  /* 12534cd9 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
L_12534ce3:;
  /* 12534ce3 pop ebp */
  EBP = (pop32());
  /* 12534ce4 ret  */
  ESPCHK(0x12534ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x12534cf0 (172 bytes, 54 insns) */
void f_12534cf0(void) {
  FTRACE(0x12534cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12534cf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12534cfa call 0x12535130 */
  push32(0x12534cffu); f_12535130();
  /* 12534cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534d02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12534d05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12534d07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12534d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12534d0b mov edx, dword ptr [0x12554bb8] */
  EDX = (r32((uint32_t)(0x12554bb8)));
  /* 12534d11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534d13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534d15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12534d1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534d21 push edx */
  push32((uint32_t)(EDX));
  /* 12534d22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534d25 push eax */
  push32((uint32_t)(EAX));
  /* 12534d26 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534d2cu);
  /* 12534d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534d2e jne 0x12534d41 */
  if (!C.zf) goto L_12534d41;
  /* 12534d30 mov dword ptr [0x12554bcc], 0 */
  w32((uint32_t)(0x12554bcc), (0x0u));
  /* 12534d3a mov eax, 1 */
  EAX = (0x1u);
  /* 12534d3f jmp 0x12534d96 */
  goto L_12534d96;
L_12534d41:;
  /* 12534d41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12534d44 push ecx */
  push32((uint32_t)(ECX));
  /* 12534d45 mov edx, dword ptr [0x12554bc8] */
  EDX = (r32((uint32_t)(0x12554bc8)));
  /* 12534d4b push edx */
  push32((uint32_t)(EDX));
  /* 12534d4c call 0x12536d70 */
  push32(0x12534d51u); f_12536d70();
  /* 12534d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534d56 jne 0x12534d89 */
  if (!C.zf) goto L_12534d89;
  /* 12534d58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534d5b push eax */
  push32((uint32_t)(EAX));
  /* 12534d5c call 0x12534e70 */
  push32(0x12534d61u); f_12534e70();
  /* 12534d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534d66 je 0x12534d89 */
  if (C.zf) goto L_12534d89;
  /* 12534d68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12534d6b mov dword ptr [0x12554bd0], ecx */
  w32((uint32_t)(0x12554bd0), (ECX));
  /* 12534d71 mov edx, dword ptr [0x12554bd0] */
  EDX = (r32((uint32_t)(0x12554bd0)));
  /* 12534d77 mov dword ptr [0x12554bb4], edx */
  w32((uint32_t)(0x12554bb4), (EDX));
  /* 12534d7d mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534d82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12534d84 mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
L_12534d89:;
  /* 12534d89 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534d8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12534d91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12534d93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534d95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12534d96:;
  /* 12534d96 mov esp, ebp */
  ESP = (EBP);
  /* 12534d98 pop ebp */
  EBP = (pop32());
  /* 12534d99 ret 4 */
  ESPCHK(0x12534cf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014da0 @ 0x12534da0 (43 bytes, 11 insns) */
void f_12534da0(void) {
  FTRACE(0x12534da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534da1 mov ebp, esp */
  EBP = (ESP);
  /* 12534da3 mov eax, dword ptr [0x12554bcc] */
  EAX = (r32((uint32_t)(0x12554bcc)));
  /* 12534da8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12534dad mov dword ptr [0x12554bcc], eax */
  w32((uint32_t)(0x12554bcc), (EAX));
  /* 12534db2 call dword ptr [0x125572ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572ec))), 0x12534db8u);
  /* 12534db8 mov dword ptr [0x12554bd0], eax */
  w32((uint32_t)(0x12554bd0), (EAX));
  /* 12534dbd mov ecx, dword ptr [0x12554bd0] */
  ECX = (r32((uint32_t)(0x12554bd0)));
  /* 12534dc3 mov dword ptr [0x12554bb4], ecx */
  w32((uint32_t)(0x12554bb4), (ECX));
  /* 12534dc9 pop ebp */
  EBP = (pop32());
  /* 12534dca ret  */
  ESPCHK(0x12534da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014dd0 @ 0x12534dd0 (155 bytes, 57 insns) */
void f_12534dd0(void) {
  FTRACE(0x12534dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12534dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534dd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534dda je 0x12534dfb */
  if (C.zf) goto L_12534dfb;
  /* 12534ddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534ddf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12534de2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12534de4 je 0x12534dfb */
  if (C.zf) goto L_12534dfb;
  /* 12534de6 push 0x12550d1c */
  push32((uint32_t)(0x12550d1cu));
  /* 12534deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534dee push edx */
  push32((uint32_t)(EDX));
  /* 12534def call 0x12534330 */
  push32(0x12534df4u); f_12534330();
  /* 12534df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534df9 jne 0x12534e23 */
  if (!C.zf) goto L_12534e23;
L_12534dfb:;
  /* 12534dfb push 8 */
  push32((uint32_t)(0x8u));
  /* 12534dfd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12534e00 push eax */
  push32((uint32_t)(EAX));
  /* 12534e01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12534e06 mov ecx, dword ptr [0x12554bd0] */
  ECX = (r32((uint32_t)(0x12554bd0)));
  /* 12534e0c push ecx */
  push32((uint32_t)(ECX));
  /* 12534e0d call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534e13u);
  /* 12534e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534e15 jne 0x12534e1b */
  if (!C.zf) goto L_12534e1b;
  /* 12534e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534e19 jmp 0x12534e67 */
  goto L_12534e67;
L_12534e1b:;
  /* 12534e1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12534e1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12534e21 jmp 0x12534e5b */
  goto L_12534e5b;
L_12534e23:;
  /* 12534e23 push 0x12550d18 */
  push32((uint32_t)(0x12550d18u));
  /* 12534e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534e2b push eax */
  push32((uint32_t)(EAX));
  /* 12534e2c call 0x12534330 */
  push32(0x12534e31u); f_12534330();
  /* 12534e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534e36 jne 0x12534e5b */
  if (!C.zf) goto L_12534e5b;
  /* 12534e38 push 8 */
  push32((uint32_t)(0x8u));
  /* 12534e3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12534e3d push ecx */
  push32((uint32_t)(ECX));
  /* 12534e3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12534e40 mov edx, dword ptr [0x12554bd0] */
  EDX = (r32((uint32_t)(0x12554bd0)));
  /* 12534e46 push edx */
  push32((uint32_t)(EDX));
  /* 12534e47 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534e4du);
  /* 12534e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534e4f jne 0x12534e55 */
  if (!C.zf) goto L_12534e55;
  /* 12534e51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534e53 jmp 0x12534e67 */
  goto L_12534e67;
L_12534e55:;
  /* 12534e55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12534e58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12534e5b:;
  /* 12534e5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534e5e push ecx */
  push32((uint32_t)(ECX));
  /* 12534e5f call 0x12536f50 */
  push32(0x12534e64u); f_12536f50();
  /* 12534e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12534e67:;
  /* 12534e67 mov esp, ebp */
  ESP = (EBP);
  /* 12534e69 pop ebp */
  EBP = (pop32());
  /* 12534e6a ret  */
  ESPCHK(0x12534dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e70 @ 0x12534e70 (79 bytes, 26 insns) */
void f_12534e70(void) {
  FTRACE(0x12534e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12534e71 mov ebp, esp */
  EBP = (ESP);
  /* 12534e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534e76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12534e7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12534e7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12534e85 jmp 0x12534e90 */
  goto L_12534e90;
L_12534e87:;
  /* 12534e87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12534e8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534e8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12534e90:;
  /* 12534e90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534e94 jae 0x12534eb6 */
  if (!C.cf) goto L_12534eb6;
  /* 12534e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12534e99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12534e9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12534ea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12534ea4 mov cx, word ptr [eax*2 + 0x125539c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x125539c4)));
  /* 12534eac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534eae jne 0x12534eb4 */
  if (!C.zf) goto L_12534eb4;
  /* 12534eb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534eb2 jmp 0x12534ebb */
  goto L_12534ebb;
L_12534eb4:;
  /* 12534eb4 jmp 0x12534e87 */
  goto L_12534e87;
L_12534eb6:;
  /* 12534eb6 mov eax, 1 */
  EAX = (0x1u);
L_12534ebb:;
  /* 12534ebb mov esp, ebp */
  ESP = (EBP);
  /* 12534ebd pop ebp */
  EBP = (pop32());
  /* 12534ebe ret  */
  ESPCHK(0x12534e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ec0 @ 0x12534ec0 (135 bytes, 48 insns) */
void f_12534ec0(void) {
  FTRACE(0x12534ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12534ec3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534ec6 push esi */
  push32((uint32_t)(ESI));
  /* 12534ec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534eca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12534ecf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12534ed4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12534ed9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12534edc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12534ee1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12534ee4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12534ee6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12534ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 12534eea push 1 */
  push32((uint32_t)(0x1u));
  /* 12534eec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12534eef push edx */
  push32((uint32_t)(EDX));
  /* 12534ef0 call dword ptr [0x12554bd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554bd4))), 0x12534ef6u);
  /* 12534ef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534ef8 jne 0x12534efe */
  if (!C.zf) goto L_12534efe;
  /* 12534efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534efc jmp 0x12534f42 */
  goto L_12534f42;
L_12534efe:;
  /* 12534efe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12534f01 push eax */
  push32((uint32_t)(EAX));
  /* 12534f02 call 0x12535130 */
  push32(0x12534f07u); f_12535130();
  /* 12534f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534f0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534f0d je 0x12534f3d */
  if (C.zf) goto L_12534f3d;
  /* 12534f0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534f13 je 0x12534f3d */
  if (C.zf) goto L_12534f3d;
  /* 12534f15 mov ecx, dword ptr [0x12554bc4] */
  ECX = (r32((uint32_t)(0x12554bc4)));
  /* 12534f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12534f1c call 0x125351b0 */
  push32(0x12534f21u); f_125351b0();
  /* 12534f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534f24 mov esi, eax */
  ESI = (EAX);
  /* 12534f26 mov edx, dword ptr [0x12554bc4] */
  EDX = (r32((uint32_t)(0x12554bc4)));
  /* 12534f2c push edx */
  push32((uint32_t)(EDX));
  /* 12534f2d call 0x1252b4d0 */
  push32(0x12534f32u); f_1252b4d0();
  /* 12534f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12534f35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534f37 jne 0x12534f3d */
  if (!C.zf) goto L_12534f3d;
  /* 12534f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12534f3b jmp 0x12534f42 */
  goto L_12534f42;
L_12534f3d:;
  /* 12534f3d mov eax, 1 */
  EAX = (0x1u);
L_12534f42:;
  /* 12534f42 pop esi */
  ESI = (pop32());
  /* 12534f43 mov esp, ebp */
  ESP = (EBP);
  /* 12534f45 pop ebp */
  EBP = (pop32());
  /* 12534f46 ret  */
  ESPCHK(0x12534ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f50 @ 0x12534f50 (77 bytes, 18 insns) */
void f_12534f50(void) {
  FTRACE(0x12534f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12534f51 mov ebp, esp */
  EBP = (ESP);
  /* 12534f53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534f59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12534f63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12534f69 push eax */
  push32((uint32_t)(EAX));
  /* 12534f6a call dword ptr [0x125572e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572e8))), 0x12534f70u);
  /* 12534f70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12534f72 je 0x12534f89 */
  if (C.zf) goto L_12534f89;
  /* 12534f74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534f7b jne 0x12534f89 */
  if (!C.zf) goto L_12534f89;
  /* 12534f7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12534f87 jmp 0x12534f93 */
  goto L_12534f93;
L_12534f89:;
  /* 12534f89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12534f93:;
  /* 12534f93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12534f99 mov esp, ebp */
  ESP = (EBP);
  /* 12534f9b pop ebp */
  EBP = (pop32());
  /* 12534f9c ret  */
  ESPCHK(0x12534f50u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12534fa0 (388 bytes, 118 insns) */
void f_12534fa0(void) {
  FTRACE(0x12534fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12534fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12534fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12534fa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12534fad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12534fb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12534fbb:;
  /* 12534fbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12534fbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534fc1 jg 0x12535108 */
  if ((!C.zf&&C.sf==C.of)) goto L_12535108;
  /* 12534fc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12534fca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12534fcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12534fce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12534fd0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12534fd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12534fd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12534fd8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12534fdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12534fde cmp edx, dword ptr [ecx + 0x12553520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12553520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534fe4 jne 0x125350de */
  if (!C.zf) goto L_125350de;
  /* 12534fea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12534fed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12534ff0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534ff4 ja 0x12535017 */
  if ((!C.cf&&!C.zf)) goto L_12535017;
  /* 12534ff6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12534ffa je 0x12535089 */
  if (C.zf) goto L_12535089;
  /* 12535000 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535004 je 0x12535034 */
  if (C.zf) goto L_12535034;
  /* 12535006 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253500a je 0x12535056 */
  if (C.zf) goto L_12535056;
  /* 1253500c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535010 je 0x12535078 */
  if (C.zf) goto L_12535078;
  /* 12535012 jmp 0x125350a8 */
  goto L_125350a8;
L_12535017:;
  /* 12535017 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253501e je 0x12535045 */
  if (C.zf) goto L_12535045;
  /* 12535020 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535027 je 0x12535067 */
  if (C.zf) goto L_12535067;
  /* 12535029 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535030 je 0x1253509a */
  if (C.zf) goto L_1253509a;
  /* 12535032 jmp 0x125350a8 */
  goto L_125350a8;
L_12535034:;
  /* 12535034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535037 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253503a add ecx, 0x12553524 */
  { uint32_t _a=(ECX),_b=(0x12553524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535040 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12535043 jmp 0x125350a8 */
  goto L_125350a8;
L_12535045:;
  /* 12535045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535048 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253504b mov eax, dword ptr [edx + 0x1255352c] */
  EAX = (r32((uint32_t)(EDX + 0x1255352c)));
  /* 12535051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12535054 jmp 0x125350a8 */
  goto L_125350a8;
L_12535056:;
  /* 12535056 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535059 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253505c add ecx, 0x12553530 */
  { uint32_t _a=(ECX),_b=(0x12553530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535062 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12535065 jmp 0x125350a8 */
  goto L_125350a8;
L_12535067:;
  /* 12535067 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253506a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253506d mov eax, dword ptr [edx + 0x12553534] */
  EAX = (r32((uint32_t)(EDX + 0x12553534)));
  /* 12535073 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12535076 jmp 0x125350a8 */
  goto L_125350a8;
L_12535078:;
  /* 12535078 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253507b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253507e add ecx, 0x12553538 */
  { uint32_t _a=(ECX),_b=(0x12553538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535084 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12535087 jmp 0x125350a8 */
  goto L_125350a8;
L_12535089:;
  /* 12535089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253508c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253508f add edx, 0x1255353c */
  { uint32_t _a=(EDX),_b=(0x1255353cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535095 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12535098 jmp 0x125350a8 */
  goto L_125350a8;
L_1253509a:;
  /* 1253509a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253509d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125350a0 add eax, 0x12553544 */
  { uint32_t _a=(EAX),_b=(0x12553544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125350a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125350a8:;
  /* 125350a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125350ac je 0x125350b4 */
  if (C.zf) goto L_125350b4;
  /* 125350ae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125350b2 jge 0x125350b6 */
  if ((C.sf==C.of)) goto L_125350b6;
L_125350b4:;
  /* 125350b4 jmp 0x12535108 */
  goto L_12535108;
L_125350b6:;
  /* 125350b6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125350b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125350bc push ecx */
  push32((uint32_t)(ECX));
  /* 125350bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125350c0 push edx */
  push32((uint32_t)(EDX));
  /* 125350c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125350c4 push eax */
  push32((uint32_t)(EAX));
  /* 125350c5 call 0x1252bec0 */
  push32(0x125350cau); f_1252bec0();
  /* 125350ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125350cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125350d0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125350d3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 125350d7 mov eax, 1 */
  EAX = (0x1u);
  /* 125350dc jmp 0x1253511e */
  goto L_1253511e;
L_125350de:;
  /* 125350de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125350e1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125350e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125350e7 cmp eax, dword ptr [edx + 0x12553520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12553520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125350ed jae 0x125350fa */
  if (!C.cf) goto L_125350fa;
  /* 125350ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125350f2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125350f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125350f8 jmp 0x12535103 */
  goto L_12535103;
L_125350fa:;
  /* 125350fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125350fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535100 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12535103:;
  /* 12535103 jmp 0x12534fbb */
  goto L_12534fbb;
L_12535108:;
  /* 12535108 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253510b push eax */
  push32((uint32_t)(EAX));
  /* 1253510c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253510f push ecx */
  push32((uint32_t)(ECX));
  /* 12535110 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535113 push edx */
  push32((uint32_t)(EDX));
  /* 12535114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535117 push eax */
  push32((uint32_t)(EAX));
  /* 12535118 call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x1253511eu);
L_1253511e:;
  /* 1253511e mov esp, ebp */
  ESP = (EBP);
  /* 12535120 pop ebp */
  EBP = (pop32());
  /* 12535121 ret 0x10 */
  ESPCHK(0x12534fa0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015130 @ 0x12535130 (118 bytes, 42 insns) */
void f_12535130(void) {
  FTRACE(0x12535130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535130 push ebp */
  push32((uint32_t)(EBP));
  /* 12535131 mov ebp, esp */
  EBP = (ESP);
  /* 12535133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1253513d:;
  /* 1253513d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535140 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12535142 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12535145 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12535149 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253514c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253514f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12535152 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12535154 je 0x1253519f */
  if (C.zf) goto L_1253519f;
  /* 12535156 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1253515a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253515d jl 0x12535172 */
  if ((C.sf!=C.of)) goto L_12535172;
  /* 1253515f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12535163 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535166 jg 0x12535172 */
  if ((!C.zf&&C.sf==C.of)) goto L_12535172;
  /* 12535168 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1253516b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1253516d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12535170 jmp 0x1253518c */
  goto L_1253518c;
L_12535172:;
  /* 12535172 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12535176 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535179 jl 0x1253518c */
  if ((C.sf!=C.of)) goto L_1253518c;
  /* 1253517b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1253517f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535182 jg 0x1253518c */
  if ((!C.zf&&C.sf==C.of)) goto L_1253518c;
  /* 12535184 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12535187 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12535189 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1253518c:;
  /* 1253518c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253518f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12535192 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12535196 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1253519a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253519d jmp 0x1253513d */
  goto L_1253513d;
L_1253519f:;
  /* 1253519f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125351a2 mov esp, ebp */
  ESP = (EBP);
  /* 125351a4 pop ebp */
  EBP = (pop32());
  /* 125351a5 ret  */
  ESPCHK(0x12535130u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x125351b0 (101 bytes, 36 insns) */
void f_125351b0(void) {
  FTRACE(0x125351b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125351b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125351b1 mov ebp, esp */
  EBP = (ESP);
  /* 125351b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125351b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125351bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125351c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125351c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 125351c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125351c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125351cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125351ce:;
  /* 125351ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125351d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125351d5 jl 0x125351e0 */
  if ((C.sf!=C.of)) goto L_125351e0;
  /* 125351d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125351db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125351de jle 0x125351f2 */
  if ((C.zf||C.sf!=C.of)) goto L_125351f2;
L_125351e0:;
  /* 125351e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125351e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125351e7 jl 0x1253520e */
  if ((C.sf!=C.of)) goto L_1253520e;
  /* 125351e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125351ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125351f0 jg 0x1253520e */
  if ((!C.zf&&C.sf==C.of)) goto L_1253520e;
L_125351f2:;
  /* 125351f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125351f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125351f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125351fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125351fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12535200 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12535203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535206 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535209 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1253520c jmp 0x125351ce */
  goto L_125351ce;
L_1253520e:;
  /* 1253520e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12535211 mov esp, ebp */
  ESP = (EBP);
  /* 12535213 pop ebp */
  EBP = (pop32());
  /* 12535214 ret  */
  ESPCHK(0x125351b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015220 @ 0x12535220 (122 bytes, 39 insns) */
void f_12535220(void) {
  FTRACE(0x12535220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535220 push ebp */
  push32((uint32_t)(EBP));
  /* 12535221 mov ebp, esp */
  EBP = (ESP);
  /* 12535223 push ecx */
  push32((uint32_t)(ECX));
  /* 12535224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535227 cmp eax, dword ptr [0x1255645c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1255645c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253522d jae 0x12535251 */
  if (!C.cf) goto L_12535251;
  /* 1253522f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535232 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12535235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535238 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1253523b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253523e mov eax, dword ptr [ecx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 12535245 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1253524a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1253524d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253524f jne 0x1253526c */
  if (!C.zf) goto L_1253526c;
L_12535251:;
  /* 12535251 call 0x12530570 */
  push32(0x12535256u); f_12530570();
  /* 12535256 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1253525c call 0x12530580 */
  push32(0x12535261u); f_12530580();
  /* 12535261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12535267 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1253526a jmp 0x12535296 */
  goto L_12535296;
L_1253526c:;
  /* 1253526c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253526f push edx */
  push32((uint32_t)(EDX));
  /* 12535270 call 0x12531d90 */
  push32(0x12535275u); f_12531d90();
  /* 12535275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253527b push eax */
  push32((uint32_t)(EAX));
  /* 1253527c call 0x125352a0 */
  push32(0x12535281u); f_125352a0();
  /* 12535281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535284 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12535287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253528a push ecx */
  push32((uint32_t)(ECX));
  /* 1253528b call 0x12531e20 */
  push32(0x12535290u); f_12531e20();
  /* 12535290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12535296:;
  /* 12535296 mov esp, ebp */
  ESP = (EBP);
  /* 12535298 pop ebp */
  EBP = (pop32());
  /* 12535299 ret  */
  ESPCHK(0x12535220u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x125352a0 (170 bytes, 59 insns) */
void f_125352a0(void) {
  FTRACE(0x125352a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125352a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125352a1 mov ebp, esp */
  EBP = (ESP);
  /* 125352a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125352a4 push esi */
  push32((uint32_t)(ESI));
  /* 125352a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125352a8 push eax */
  push32((uint32_t)(EAX));
  /* 125352a9 call 0x12531c10 */
  push32(0x125352aeu); f_12531c10();
  /* 125352ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125352b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125352b4 je 0x125352f3 */
  if (C.zf) goto L_125352f3;
  /* 125352b6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125352ba je 0x125352c2 */
  if (C.zf) goto L_125352c2;
  /* 125352bc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125352c0 jne 0x125352dc */
  if (!C.zf) goto L_125352dc;
L_125352c2:;
  /* 125352c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125352c4 call 0x12531c10 */
  push32(0x125352c9u); f_12531c10();
  /* 125352c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125352cc mov esi, eax */
  ESI = (EAX);
  /* 125352ce push 2 */
  push32((uint32_t)(0x2u));
  /* 125352d0 call 0x12531c10 */
  push32(0x125352d5u); f_12531c10();
  /* 125352d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125352d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125352da je 0x125352f3 */
  if (C.zf) goto L_125352f3;
L_125352dc:;
  /* 125352dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125352df push ecx */
  push32((uint32_t)(ECX));
  /* 125352e0 call 0x12531c10 */
  push32(0x125352e5u); f_12531c10();
  /* 125352e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125352e8 push eax */
  push32((uint32_t)(EAX));
  /* 125352e9 call dword ptr [0x125572f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f0))), 0x125352efu);
  /* 125352ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125352f1 je 0x125352fc */
  if (C.zf) goto L_125352fc;
L_125352f3:;
  /* 125352f3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125352fa jmp 0x12535305 */
  goto L_12535305;
L_125352fc:;
  /* 125352fc call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x12535302u);
  /* 12535302 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12535305:;
  /* 12535305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535308 push edx */
  push32((uint32_t)(EDX));
  /* 12535309 call 0x12531b30 */
  push32(0x1253530eu); f_12531b30();
  /* 1253530e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535314 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12535317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253531a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1253531d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12535320 mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 12535327 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1253532c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535330 je 0x12535343 */
  if (C.zf) goto L_12535343;
  /* 12535332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535335 push eax */
  push32((uint32_t)(EAX));
  /* 12535336 call 0x125304d0 */
  push32(0x1253533bu); f_125304d0();
  /* 1253533b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253533e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12535341 jmp 0x12535345 */
  goto L_12535345;
L_12535343:;
  /* 12535343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12535345:;
  /* 12535345 pop esi */
  ESI = (pop32());
  /* 12535346 mov esp, ebp */
  ESP = (EBP);
  /* 12535348 pop ebp */
  EBP = (pop32());
  /* 12535349 ret  */
  ESPCHK(0x125352a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015350 @ 0x12535350 (146 bytes, 52 insns) */
void f_12535350(void) {
  FTRACE(0x12535350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535350 push ebp */
  push32((uint32_t)(EBP));
  /* 12535351 mov ebp, esp */
  EBP = (ESP);
  /* 12535353 push ebx */
  push32((uint32_t)(EBX));
  /* 12535354 push esi */
  push32((uint32_t)(ESI));
  /* 12535355 push edi */
  push32((uint32_t)(EDI));
L_12535356:;
  /* 12535356 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253535a jne 0x1253537a */
  if (!C.zf) goto L_1253537a;
  /* 1253535c push 0x12550658 */
  push32((uint32_t)(0x12550658u));
  /* 12535361 push 0 */
  push32((uint32_t)(0x0u));
  /* 12535363 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12535365 push 0x12550d20 */
  push32((uint32_t)(0x12550d20u));
  /* 1253536a push 2 */
  push32((uint32_t)(0x2u));
  /* 1253536c call 0x12527760 */
  push32(0x12535371u); f_12527760();
  /* 12535371 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535377 jne 0x1253537a */
  if (!C.zf) goto L_1253537a;
  /* 12535379 int3  */
  x86_unimpl("int3 @ 0x12535379");
L_1253537a:;
  /* 1253537a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253537c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253537e jne 0x12535356 */
  if (!C.zf) goto L_12535356;
  /* 12535380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535383 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12535386 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1253538c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1253538e je 0x125353dd */
  if (C.zf) goto L_125353dd;
  /* 12535390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535393 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12535396 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12535399 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253539b je 0x125353dd */
  if (C.zf) goto L_125353dd;
  /* 1253539d push 2 */
  push32((uint32_t)(0x2u));
  /* 1253539f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125353a5 push eax */
  push32((uint32_t)(EAX));
  /* 125353a6 call 0x12529130 */
  push32(0x125353abu); f_12529130();
  /* 125353ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125353ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125353b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 125353ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125353c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 125353c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125353d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125353d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_125353dd:;
  /* 125353dd pop edi */
  EDI = (pop32());
  /* 125353de pop esi */
  ESI = (pop32());
  /* 125353df pop ebx */
  EBX = (pop32());
  /* 125353e0 pop ebp */
  EBP = (pop32());
  /* 125353e1 ret  */
  ESPCHK(0x12535350u, _esp0);
  ESP += 4; return;
}

