#include "recomp.h"

/* FUN_10009630 @ 0x103e9630 (490 bytes, 165 insns) */
void f_103e9630(void) {
  FTRACE(0x103e9630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9630 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9631 mov ebp, esp */
  EBP = (ESP);
  /* 103e9633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9636 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e963a jne 0x103e964d */
  if (!C.zf) goto L_103e964d;
  /* 103e963c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e963f push eax */
  push32((uint32_t)(EAX));
  /* 103e9640 call 0x103e9480 */
  push32(0x103e9645u); f_103e9480();
  /* 103e9645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9648 jmp 0x103e9816 */
  goto L_103e9816;
L_103e964d:;
  /* 103e964d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9651 jne 0x103e9666 */
  if (!C.zf) goto L_103e9666;
  /* 103e9653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9656 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9657 call 0x103e9820 */
  push32(0x103e965cu); f_103e9820();
  /* 103e965c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e965f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e9661 jmp 0x103e9816 */
  goto L_103e9816;
L_103e9666:;
  /* 103e9666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e966d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9671 ja 0x103e97e9 */
  if ((!C.cf&&!C.zf)) goto L_103e97e9;
  /* 103e9677 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e9679 call 0x103e90b0 */
  push32(0x103e967eu); f_103e90b0();
  /* 103e967e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9684 push edx */
  push32((uint32_t)(EDX));
  /* 103e9685 call 0x103e99b0 */
  push32(0x103e968au); f_103e99b0();
  /* 103e968a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e968d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e9690 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9694 je 0x103e97ac */
  if (C.zf) goto L_103e97ac;
  /* 103e969a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e969d cmp eax, dword ptr [0x1040fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1040fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e96a3 ja 0x103e9720 */
  if ((!C.cf&&!C.zf)) goto L_103e9720;
  /* 103e96a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e96a8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e96a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e96ac push edx */
  push32((uint32_t)(EDX));
  /* 103e96ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e96b0 push eax */
  push32((uint32_t)(EAX));
  /* 103e96b1 call 0x103ea880 */
  push32(0x103e96b6u); f_103ea880();
  /* 103e96b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e96b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e96bb je 0x103e96c5 */
  if (C.zf) goto L_103e96c5;
  /* 103e96bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e96c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e96c3 jmp 0x103e9720 */
  goto L_103e9720;
L_103e96c5:;
  /* 103e96c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e96c8 push edx */
  push32((uint32_t)(EDX));
  /* 103e96c9 call 0x103ea040 */
  push32(0x103e96ceu); f_103ea040();
  /* 103e96ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e96d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e96d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e96d8 je 0x103e9720 */
  if (C.zf) goto L_103e9720;
  /* 103e96da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e96dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 103e96e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e96e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e96e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e96e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e96ec jae 0x103e96f6 */
  if (!C.cf) goto L_103e96f6;
  /* 103e96ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e96f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e96f4 jmp 0x103e96fc */
  goto L_103e96fc;
L_103e96f6:;
  /* 103e96f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e96f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103e96fc:;
  /* 103e96fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e96ff push edx */
  push32((uint32_t)(EDX));
  /* 103e9700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9703 push eax */
  push32((uint32_t)(EAX));
  /* 103e9704 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9707 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9708 call 0x103ebf90 */
  push32(0x103e970du); f_103ebf90();
  /* 103e970d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9710 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9713 push edx */
  push32((uint32_t)(EDX));
  /* 103e9714 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9717 push eax */
  push32((uint32_t)(EAX));
  /* 103e9718 call 0x103e9a70 */
  push32(0x103e971du); f_103e9a70();
  /* 103e971d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e9720:;
  /* 103e9720 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9724 jne 0x103e97a0 */
  if (!C.zf) goto L_103e97a0;
  /* 103e9726 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e972a jne 0x103e9733 */
  if (!C.zf) goto L_103e9733;
  /* 103e972c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103e9733:;
  /* 103e9733 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9736 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9739 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 103e973c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103e973f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9742 push edx */
  push32((uint32_t)(EDX));
  /* 103e9743 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e9745 mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e974a push eax */
  push32((uint32_t)(EAX));
  /* 103e974b call dword ptr [0x10414330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414330))), 0x103e9751u);
  /* 103e9751 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e9754 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9758 je 0x103e97a0 */
  if (C.zf) goto L_103e97a0;
  /* 103e975a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e975d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103e9760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9763 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e9766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9769 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e976c jae 0x103e9776 */
  if (!C.cf) goto L_103e9776;
  /* 103e976e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9771 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103e9774 jmp 0x103e977c */
  goto L_103e977c;
L_103e9776:;
  /* 103e9776 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9779 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103e977c:;
  /* 103e977c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e977f push eax */
  push32((uint32_t)(EAX));
  /* 103e9780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9783 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9784 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9787 push edx */
  push32((uint32_t)(EDX));
  /* 103e9788 call 0x103ebf90 */
  push32(0x103e978du); f_103ebf90();
  /* 103e978d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9793 push eax */
  push32((uint32_t)(EAX));
  /* 103e9794 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9797 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9798 call 0x103e9a70 */
  push32(0x103e979du); f_103e9a70();
  /* 103e979d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e97a0:;
  /* 103e97a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e97a2 call 0x103e9150 */
  push32(0x103e97a7u); f_103e9150();
  /* 103e97a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e97aa jmp 0x103e97e9 */
  goto L_103e97e9;
L_103e97ac:;
  /* 103e97ac push 9 */
  push32((uint32_t)(0x9u));
  /* 103e97ae call 0x103e9150 */
  push32(0x103e97b3u); f_103e9150();
  /* 103e97b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e97b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e97ba jne 0x103e97c3 */
  if (!C.zf) goto L_103e97c3;
  /* 103e97bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103e97c3:;
  /* 103e97c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e97c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e97c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103e97cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103e97cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e97d2 push eax */
  push32((uint32_t)(EAX));
  /* 103e97d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e97d6 push ecx */
  push32((uint32_t)(ECX));
  /* 103e97d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e97d9 mov edx, dword ptr [0x1041302c] */
  EDX = (r32((uint32_t)(0x1041302c)));
  /* 103e97df push edx */
  push32((uint32_t)(EDX));
  /* 103e97e0 call dword ptr [0x1041432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041432c))), 0x103e97e6u);
  /* 103e97e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103e97e9:;
  /* 103e97e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e97ed jne 0x103e97f8 */
  if (!C.zf) goto L_103e97f8;
  /* 103e97ef cmp dword ptr [0x10411860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e97f6 jne 0x103e97fd */
  if (!C.zf) goto L_103e97fd;
L_103e97f8:;
  /* 103e97f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e97fb jmp 0x103e9816 */
  goto L_103e9816;
L_103e97fd:;
  /* 103e97fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9800 push eax */
  push32((uint32_t)(EAX));
  /* 103e9801 call 0x103e93f0 */
  push32(0x103e9806u); f_103e93f0();
  /* 103e9806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e980b jne 0x103e9811 */
  if (!C.zf) goto L_103e9811;
  /* 103e980d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e980f jmp 0x103e9816 */
  goto L_103e9816;
L_103e9811:;
  /* 103e9811 jmp 0x103e9666 */
  goto L_103e9666;
L_103e9816:;
  /* 103e9816 mov esp, ebp */
  ESP = (EBP);
  /* 103e9818 pop ebp */
  EBP = (pop32());
  /* 103e9819 ret  */
  ESPCHK(0x103e9630u, _esp0);
  ESP += 4; return;
}

/* FUN_10009820 @ 0x103e9820 (104 bytes, 38 insns) */
void f_103e9820(void) {
  FTRACE(0x103e9820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9820 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9821 mov ebp, esp */
  EBP = (ESP);
  /* 103e9823 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9824 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9828 jne 0x103e982c */
  if (!C.zf) goto L_103e982c;
  /* 103e982a jmp 0x103e9884 */
  goto L_103e9884;
L_103e982c:;
  /* 103e982c push 9 */
  push32((uint32_t)(0x9u));
  /* 103e982e call 0x103e90b0 */
  push32(0x103e9833u); f_103e90b0();
  /* 103e9833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9839 push eax */
  push32((uint32_t)(EAX));
  /* 103e983a call 0x103e99b0 */
  push32(0x103e983fu); f_103e99b0();
  /* 103e983f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9842 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e9845 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9849 je 0x103e9867 */
  if (C.zf) goto L_103e9867;
  /* 103e984b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e984e push ecx */
  push32((uint32_t)(ECX));
  /* 103e984f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9852 push edx */
  push32((uint32_t)(EDX));
  /* 103e9853 call 0x103e9a70 */
  push32(0x103e9858u); f_103e9a70();
  /* 103e9858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e985b push 9 */
  push32((uint32_t)(0x9u));
  /* 103e985d call 0x103e9150 */
  push32(0x103e9862u); f_103e9150();
  /* 103e9862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9865 jmp 0x103e9884 */
  goto L_103e9884;
L_103e9867:;
  /* 103e9867 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e9869 call 0x103e9150 */
  push32(0x103e986eu); f_103e9150();
  /* 103e986e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9874 push eax */
  push32((uint32_t)(EAX));
  /* 103e9875 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e9877 mov ecx, dword ptr [0x1041302c] */
  ECX = (r32((uint32_t)(0x1041302c)));
  /* 103e987d push ecx */
  push32((uint32_t)(ECX));
  /* 103e987e call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103e9884u);
L_103e9884:;
  /* 103e9884 mov esp, ebp */
  ESP = (EBP);
  /* 103e9886 pop ebp */
  EBP = (pop32());
  /* 103e9887 ret  */
  ESPCHK(0x103e9820u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x103e9890 (116 bytes, 34 insns) */
void f_103e9890(void) {
  FTRACE(0x103e9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9890 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9891 mov ebp, esp */
  EBP = (ESP);
  /* 103e9893 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9894 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 103e989b push 9 */
  push32((uint32_t)(0x9u));
  /* 103e989d call 0x103e90b0 */
  push32(0x103e98a2u); f_103e90b0();
  /* 103e98a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e98a5 call 0x103eafa0 */
  push32(0x103e98aau); f_103eafa0();
  /* 103e98aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e98ac jge 0x103e98b5 */
  if ((C.sf==C.of)) goto L_103e98b5;
  /* 103e98ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_103e98b5:;
  /* 103e98b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e98b7 call 0x103e9150 */
  push32(0x103e98bcu); f_103e9150();
  /* 103e98bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e98bf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e98c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e98c3 mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e98c8 push eax */
  push32((uint32_t)(EAX));
  /* 103e98c9 call dword ptr [0x104143d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d8))), 0x103e98cfu);
  /* 103e98cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e98d1 jne 0x103e98fd */
  if (!C.zf) goto L_103e98fd;
  /* 103e98d3 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103e98d9u);
  /* 103e98d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e98dc jne 0x103e98f6 */
  if (!C.zf) goto L_103e98f6;
  /* 103e98de call 0x103ed590 */
  push32(0x103e98e3u); f_103ed590();
  /* 103e98e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 103e98e9 call 0x103ed580 */
  push32(0x103e98eeu); f_103ed580();
  /* 103e98ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 103e98f4 jmp 0x103e98fd */
  goto L_103e98fd;
L_103e98f6:;
  /* 103e98f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_103e98fd:;
  /* 103e98fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9900 mov esp, ebp */
  ESP = (EBP);
  /* 103e9902 pop ebp */
  EBP = (pop32());
  /* 103e9903 ret  */
  ESPCHK(0x103e9890u, _esp0);
  ESP += 4; return;
}

/* FUN_10009910 @ 0x103e9910 (10 bytes, 5 insns) */
void f_103e9910(void) {
  FTRACE(0x103e9910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9910 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9911 mov ebp, esp */
  EBP = (ESP);
  /* 103e9913 call 0x103e9890 */
  push32(0x103e9918u); f_103e9890();
  /* 103e9918 pop ebp */
  EBP = (pop32());
  /* 103e9919 ret  */
  ESPCHK(0x103e9910u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x103e9920 (10 bytes, 5 insns) */
void f_103e9920(void) {
  FTRACE(0x103e9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9920 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9921 mov ebp, esp */
  EBP = (ESP);
  /* 103e9923 mov eax, dword ptr [0x1040fc94] */
  EAX = (r32((uint32_t)(0x1040fc94)));
  /* 103e9928 pop ebp */
  EBP = (pop32());
  /* 103e9929 ret  */
  ESPCHK(0x103e9920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009930 @ 0x103e9930 (31 bytes, 11 insns) */
void f_103e9930(void) {
  FTRACE(0x103e9930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9930 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9931 mov ebp, esp */
  EBP = (ESP);
  /* 103e9933 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e993a jbe 0x103e9940 */
  if ((C.cf||C.zf)) goto L_103e9940;
  /* 103e993c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e993e jmp 0x103e994d */
  goto L_103e994d;
L_103e9940:;
  /* 103e9940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9943 mov dword ptr [0x1040fc94], eax */
  w32((uint32_t)(0x1040fc94), (EAX));
  /* 103e9948 mov eax, 1 */
  EAX = (0x1u);
L_103e994d:;
  /* 103e994d pop ebp */
  EBP = (pop32());
  /* 103e994e ret  */
  ESPCHK(0x103e9930u, _esp0);
  ESP += 4; return;
}

/* FUN_10009950 @ 0x103e9950 (89 bytes, 20 insns) */
void f_103e9950(void) {
  FTRACE(0x103e9950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9950 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9951 mov ebp, esp */
  EBP = (ESP);
  /* 103e9953 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 103e9958 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e995a mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e995f push eax */
  push32((uint32_t)(EAX));
  /* 103e9960 call dword ptr [0x10414330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414330))), 0x103e9966u);
  /* 103e9966 mov dword ptr [0x10413028], eax */
  w32((uint32_t)(0x10413028), (EAX));
  /* 103e996b cmp dword ptr [0x10413028], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10413028))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9972 jne 0x103e9978 */
  if (!C.zf) goto L_103e9978;
  /* 103e9974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e9976 jmp 0x103e99a7 */
  goto L_103e99a7;
L_103e9978:;
  /* 103e9978 mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103e997e mov dword ptr [0x1041301c], ecx */
  w32((uint32_t)(0x1041301c), (ECX));
  /* 103e9984 mov dword ptr [0x10413020], 0 */
  w32((uint32_t)(0x10413020), (0x0u));
  /* 103e998e mov dword ptr [0x10413024], 0 */
  w32((uint32_t)(0x10413024), (0x0u));
  /* 103e9998 mov dword ptr [0x10413008], 0x10 */
  w32((uint32_t)(0x10413008), (0x10u));
  /* 103e99a2 mov eax, 1 */
  EAX = (0x1u);
L_103e99a7:;
  /* 103e99a7 pop ebp */
  EBP = (pop32());
  /* 103e99a8 ret  */
  ESPCHK(0x103e9950u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x103e99b0 (85 bytes, 29 insns) */
void f_103e99b0(void) {
  FTRACE(0x103e99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e99b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e99b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e99b6 mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103e99bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e99be mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103e99c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e99c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103e99c9 mov edx, dword ptr [0x10413028] */
  EDX = (r32((uint32_t)(0x10413028)));
  /* 103e99cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103e99d2:;
  /* 103e99d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e99d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e99d8 jae 0x103e99ff */
  if (!C.cf) goto L_103e99ff;
  /* 103e99da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e99dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e99e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e99e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e99e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e99ed jae 0x103e99f4 */
  if (!C.cf) goto L_103e99f4;
  /* 103e99ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e99f2 jmp 0x103e9a01 */
  goto L_103e9a01;
L_103e99f4:;
  /* 103e99f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e99f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e99fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e99fd jmp 0x103e99d2 */
  goto L_103e99d2;
L_103e99ff:;
  /* 103e99ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e9a01:;
  /* 103e9a01 mov esp, ebp */
  ESP = (EBP);
  /* 103e9a03 pop ebp */
  EBP = (pop32());
  /* 103e9a04 ret  */
  ESPCHK(0x103e99b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a10 @ 0x103e9a10 (95 bytes, 33 insns) */
void f_103e9a10(void) {
  FTRACE(0x103e9a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9a10 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9a11 mov ebp, esp */
  EBP = (ESP);
  /* 103e9a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9a19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9a1c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9a1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e9a22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9a25 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103e9a28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e9a2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9a30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9a33 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9a38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103e9a3b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103e9a3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9a3f jne 0x103e9a61 */
  if (!C.zf) goto L_103e9a61;
  /* 103e9a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9a44 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 103e9a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e9a49 jne 0x103e9a61 */
  if (!C.zf) goto L_103e9a61;
  /* 103e9a4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9a4e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e9a54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9a56 je 0x103e9a61 */
  if (C.zf) goto L_103e9a61;
  /* 103e9a58 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 103e9a5f jmp 0x103e9a68 */
  goto L_103e9a68;
L_103e9a61:;
  /* 103e9a61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103e9a68:;
  /* 103e9a68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9a6b mov esp, ebp */
  ESP = (EBP);
  /* 103e9a6d pop ebp */
  EBP = (pop32());
  /* 103e9a6e ret  */
  ESPCHK(0x103e9a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x103e9a70 (1485 bytes, 453 insns) */
void f_103e9a70(void) {
  FTRACE(0x103e9a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9a70 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9a71 mov ebp, esp */
  EBP = (ESP);
  /* 103e9a73 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9a79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e9a7c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 103e9a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9a82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9a85 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9a88 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e9a8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e9a8e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 103e9a91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e9a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9a97 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e9a9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9aa0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 103e9aa7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e9aaa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9aad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9ab0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e9ab3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9ab6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e9ab8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9abb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103e9abe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9ac1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9ac4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 103e9ac7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9aca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e9acc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103e9acf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9ad2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 103e9ad5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e9ad8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e9adb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103e9ade test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9ae0 jne 0x103e9c08 */
  if (!C.zf) goto L_103e9c08;
  /* 103e9ae6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e9ae9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103e9aec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9aef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103e9af2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9af6 jbe 0x103e9aff */
  if ((C.cf||C.zf)) goto L_103e9aff;
  /* 103e9af8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103e9aff:;
  /* 103e9aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9b02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9b05 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e9b08 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9b0b jne 0x103e9be1 */
  if (!C.zf) goto L_103e9be1;
  /* 103e9b11 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9b15 jae 0x103e9b76 */
  if (!C.cf) goto L_103e9b76;
  /* 103e9b17 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9b1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e9b1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9b21 not eax */
  EAX = (~(EAX));
  /* 103e9b23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9b26 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b29 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103e9b2d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9b2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9b32 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b35 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103e9b39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b3c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9b3f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103e9b42 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103e9b45 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b48 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9b4b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103e9b4e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b51 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9b54 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103e9b58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9b5a jne 0x103e9b74 */
  if (!C.zf) goto L_103e9b74;
  /* 103e9b5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9b61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e9b64 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9b66 not eax */
  EAX = (~(EAX));
  /* 103e9b68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9b6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e9b6d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103e9b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9b72 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103e9b74:;
  /* 103e9b74 jmp 0x103e9be1 */
  goto L_103e9be1;
L_103e9b76:;
  /* 103e9b76 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e9b79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9b7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9b81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9b83 not edx */
  EDX = (~(EDX));
  /* 103e9b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9b88 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b8b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103e9b92 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e9b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9b97 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9b9a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 103e9ba1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9ba4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9ba7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e9baa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103e9bad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9bb0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9bb3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103e9bb6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9bb9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9bbc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103e9bc0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9bc2 jne 0x103e9be1 */
  if (!C.zf) goto L_103e9be1;
  /* 103e9bc4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e9bc7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9bca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9bcf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9bd1 not edx */
  EDX = (~(EDX));
  /* 103e9bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9bd6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e9bd9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9bdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9bde mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103e9be1:;
  /* 103e9be1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9be4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e9be7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9bea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e9bed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103e9bf0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9bf3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9bf6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103e9bf9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e9bfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103e9bff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9c02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9c05 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_103e9c08:;
  /* 103e9c08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9c0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103e9c0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9c11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103e9c14 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c18 jbe 0x103e9c21 */
  if ((C.cf||C.zf)) goto L_103e9c21;
  /* 103e9c1a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_103e9c21:;
  /* 103e9c21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9c24 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103e9c27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9c29 jne 0x103e9d85 */
  if (!C.zf) goto L_103e9d85;
  /* 103e9c2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9c32 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9c35 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 103e9c38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9c3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103e9c3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9c41 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103e9c44 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c48 jbe 0x103e9c51 */
  if ((C.cf||C.zf)) goto L_103e9c51;
  /* 103e9c4a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_103e9c51:;
  /* 103e9c51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9c54 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9c57 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103e9c5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9c5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103e9c60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9c63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103e9c66 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c6a jbe 0x103e9c73 */
  if ((C.cf||C.zf)) goto L_103e9c73;
  /* 103e9c6c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_103e9c73:;
  /* 103e9c73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9c76 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c79 je 0x103e9d7f */
  if (C.zf) goto L_103e9d7f;
  /* 103e9c7f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9c82 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9c85 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9c88 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c8b jne 0x103e9d61 */
  if (!C.zf) goto L_103e9d61;
  /* 103e9c91 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9c95 jae 0x103e9cf6 */
  if (!C.cf) goto L_103e9cf6;
  /* 103e9c97 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9c9c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9c9f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9ca1 not edx */
  EDX = (~(EDX));
  /* 103e9ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9ca6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9ca9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103e9cad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e9caf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9cb2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9cb5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103e9cb9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9cbc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9cbf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e9cc2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103e9cc5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9cc8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9ccb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103e9cce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9cd1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9cd4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103e9cd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9cda jne 0x103e9cf4 */
  if (!C.zf) goto L_103e9cf4;
  /* 103e9cdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9ce1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9ce4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9ce6 not edx */
  EDX = (~(EDX));
  /* 103e9ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9ceb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e9ced and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9cef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9cf2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e9cf4:;
  /* 103e9cf4 jmp 0x103e9d61 */
  goto L_103e9d61;
L_103e9cf6:;
  /* 103e9cf6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9cf9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9cfc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9d01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9d03 not eax */
  EAX = (~(EAX));
  /* 103e9d05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9d08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9d0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103e9d12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9d14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9d17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9d1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103e9d21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9d24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9d27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103e9d2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103e9d2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9d30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9d33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103e9d36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9d39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9d3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103e9d40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9d42 jne 0x103e9d61 */
  if (!C.zf) goto L_103e9d61;
  /* 103e9d44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9d47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9d4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9d4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9d51 not eax */
  EAX = (~(EAX));
  /* 103e9d53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9d56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9d59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103e9d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9d5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103e9d61:;
  /* 103e9d61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9d64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103e9d67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9d6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e9d6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103e9d70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9d73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e9d76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9d79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103e9d7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_103e9d7f:;
  /* 103e9d7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103e9d82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_103e9d85:;
  /* 103e9d85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9d88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103e9d8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9d8d jne 0x103e9d9b */
  if (!C.zf) goto L_103e9d9b;
  /* 103e9d8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e9d92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9d95 je 0x103e9eab */
  if (C.zf) goto L_103e9eab;
L_103e9d9b:;
  /* 103e9d9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e9d9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9da1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 103e9da4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103e9da7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9daa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103e9dad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9db0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103e9db3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9db6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103e9db9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103e9dbc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103e9dbf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9dc2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103e9dc5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9dc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9dcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9dce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103e9dd1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9dd4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9dd7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e9dda cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9ddd jne 0x103e9eab */
  if (!C.zf) goto L_103e9eab;
  /* 103e9de3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9de7 jae 0x103e9e44 */
  if (!C.cf) goto L_103e9e44;
  /* 103e9de9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9dec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9def movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103e9df3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9df6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9df9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e9dfc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103e9dff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9e05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103e9e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9e0a jne 0x103e9e22 */
  if (!C.zf) goto L_103e9e22;
  /* 103e9e0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e9e14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9e19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e9e1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9e20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e9e22:;
  /* 103e9e22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9e27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e9e2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9e2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103e9e36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9e38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9e3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103e9e42 jmp 0x103e9eab */
  goto L_103e9eab;
L_103e9e44:;
  /* 103e9e44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9e4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103e9e4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9e54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e9e57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103e9e5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9e60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103e9e63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9e65 jne 0x103e9e82 */
  if (!C.zf) goto L_103e9e82;
  /* 103e9e67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e9e6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9e6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9e72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9e77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e9e7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9e7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103e9e82:;
  /* 103e9e82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e9e85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9e88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103e9e8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103e9e8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9e92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9e95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103e9e9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9e9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9ea1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103e9ea4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_103e9eab:;
  /* 103e9eab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9eae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9eb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103e9eb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103e9eb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9eb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103e9ebc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 103e9ebf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9ec2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e9ec4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9ec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9eca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e9ecc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9ecf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9ed2 jne 0x103ea039 */
  if (!C.zf) goto L_103ea039;
  /* 103e9ed8 cmp dword ptr [0x10413020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10413020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9edf je 0x103ea028 */
  if (C.zf) goto L_103ea028;
  /* 103e9ee5 mov eax, dword ptr [0x10413018] */
  EAX = (r32((uint32_t)(0x10413018)));
  /* 103e9eea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 103e9eed mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103e9ef3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103e9ef6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9ef8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103e9efb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103e9f00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103e9f05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e9f08 push eax */
  push32((uint32_t)(EAX));
  /* 103e9f09 call dword ptr [0x1041434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041434c))), 0x103e9f0fu);
  /* 103e9f0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103e9f14 mov ecx, dword ptr [0x10413018] */
  ECX = (r32((uint32_t)(0x10413018)));
  /* 103e9f1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103e9f1c mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9f21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e9f24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103e9f26 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9f2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103e9f2f mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9f34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e9f37 mov edx, dword ptr [0x10413018] */
  EDX = (r32((uint32_t)(0x10413018)));
  /* 103e9f3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 103e9f48 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9f4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e9f50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 103e9f53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103e9f56 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9f5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e9f5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 103e9f61 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9f67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e9f6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 103e9f6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e9f70 jne 0x103e9f86 */
  if (!C.zf) goto L_103e9f86;
  /* 103e9f72 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9f78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e9f7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 103e9f7d mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103e9f83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_103e9f86:;
  /* 103e9f86 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9f8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9f90 jne 0x103ea028 */
  if (!C.zf) goto L_103ea028;
  /* 103e9f96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103e9f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e9f9d mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9fa2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103e9fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9fa6 call dword ptr [0x1041434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041434c))), 0x103e9facu);
  /* 103e9fac mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9fb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e9fb5 push eax */
  push32((uint32_t)(EAX));
  /* 103e9fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e9fb8 mov ecx, dword ptr [0x1041302c] */
  ECX = (r32((uint32_t)(0x1041302c)));
  /* 103e9fbe push ecx */
  push32((uint32_t)(ECX));
  /* 103e9fbf call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103e9fc5u);
  /* 103e9fc5 mov edx, dword ptr [0x10413024] */
  EDX = (r32((uint32_t)(0x10413024)));
  /* 103e9fcb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e9fce mov eax, dword ptr [0x10413028] */
  EAX = (r32((uint32_t)(0x10413028)));
  /* 103e9fd3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9fd5 mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103e9fdb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9fde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9fe0 push eax */
  push32((uint32_t)(EAX));
  /* 103e9fe1 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103e9fe7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9fea push edx */
  push32((uint32_t)(EDX));
  /* 103e9feb mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103e9ff0 push eax */
  push32((uint32_t)(EAX));
  /* 103e9ff1 call 0x103ed5a0 */
  push32(0x103e9ff6u); f_103ed5a0();
  /* 103e9ff6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9ff9 mov ecx, dword ptr [0x10413024] */
  ECX = (r32((uint32_t)(0x10413024)));
  /* 103e9fff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea002 mov dword ptr [0x10413024], ecx */
  w32((uint32_t)(0x10413024), (ECX));
  /* 103ea008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea00b cmp edx, dword ptr [0x10413020] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10413020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea011 jbe 0x103ea01c */
  if ((C.cf||C.zf)) goto L_103ea01c;
  /* 103ea013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea016 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea019 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103ea01c:;
  /* 103ea01c mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103ea022 mov dword ptr [0x1041301c], ecx */
  w32((uint32_t)(0x1041301c), (ECX));
L_103ea028:;
  /* 103ea028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea02b mov dword ptr [0x10413020], edx */
  w32((uint32_t)(0x10413020), (EDX));
  /* 103ea031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea034 mov dword ptr [0x10413018], eax */
  w32((uint32_t)(0x10413018), (EAX));
L_103ea039:;
  /* 103ea039 mov esp, ebp */
  ESP = (EBP);
  /* 103ea03b pop ebp */
  EBP = (pop32());
  /* 103ea03c ret  */
  ESPCHK(0x103e9a70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a040 @ 0x103ea040 (1334 bytes, 427 insns) */
void f_103ea040(void) {
  FTRACE(0x103ea040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ea040 push ebp */
  push32((uint32_t)(EBP));
  /* 103ea041 mov ebp, esp */
  EBP = (ESP);
  /* 103ea043 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea046 push esi */
  push32((uint32_t)(ESI));
  /* 103ea047 mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103ea04c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea04f mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103ea055 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea057 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103ea05a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea05d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea060 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103ea063 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103ea066 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea069 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103ea06c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea06f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ea072 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea076 jge 0x103ea08c */
  if ((C.sf==C.of)) goto L_103ea08c;
  /* 103ea078 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103ea07b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea07e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea080 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ea083 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 103ea08a jmp 0x103ea0a1 */
  goto L_103ea0a1;
L_103ea08c:;
  /* 103ea08c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ea093 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea096 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea099 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ea09c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea09e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_103ea0a1:;
  /* 103ea0a1 mov ecx, dword ptr [0x1041301c] */
  ECX = (r32((uint32_t)(0x1041301c)));
  /* 103ea0a7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_103ea0aa:;
  /* 103ea0aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0ad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea0b0 jae 0x103ea0d6 */
  if (!C.cf) goto L_103ea0d6;
  /* 103ea0b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea0b8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 103ea0ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103ea0c0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 103ea0c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea0c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea0c7 je 0x103ea0cb */
  if (C.zf) goto L_103ea0cb;
  /* 103ea0c9 jmp 0x103ea0d6 */
  goto L_103ea0d6;
L_103ea0cb:;
  /* 103ea0cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea0d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103ea0d4 jmp 0x103ea0aa */
  goto L_103ea0aa;
L_103ea0d6:;
  /* 103ea0d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea0dc jne 0x103ea1bd */
  if (!C.zf) goto L_103ea1bd;
  /* 103ea0e2 mov eax, dword ptr [0x10413028] */
  EAX = (r32((uint32_t)(0x10413028)));
  /* 103ea0e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103ea0ea:;
  /* 103ea0ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0ed cmp ecx, dword ptr [0x1041301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1041301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea0f3 jae 0x103ea119 */
  if (!C.cf) goto L_103ea119;
  /* 103ea0f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea0f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea0fb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 103ea0fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea100 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103ea103 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 103ea106 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ea10a je 0x103ea10e */
  if (C.zf) goto L_103ea10e;
  /* 103ea10c jmp 0x103ea119 */
  goto L_103ea119;
L_103ea10e:;
  /* 103ea10e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea111 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea114 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea117 jmp 0x103ea0ea */
  goto L_103ea0ea;
L_103ea119:;
  /* 103ea119 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea11c cmp ecx, dword ptr [0x1041301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1041301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea122 jne 0x103ea1bd */
  if (!C.zf) goto L_103ea1bd;
L_103ea128:;
  /* 103ea128 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea12b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea12e jae 0x103ea146 */
  if (!C.cf) goto L_103ea146;
  /* 103ea130 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea133 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea137 je 0x103ea13b */
  if (C.zf) goto L_103ea13b;
  /* 103ea139 jmp 0x103ea146 */
  goto L_103ea146;
L_103ea13b:;
  /* 103ea13b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea13e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea141 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103ea144 jmp 0x103ea128 */
  goto L_103ea128;
L_103ea146:;
  /* 103ea146 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea149 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea14c jne 0x103ea197 */
  if (!C.zf) goto L_103ea197;
  /* 103ea14e mov eax, dword ptr [0x10413028] */
  EAX = (r32((uint32_t)(0x10413028)));
  /* 103ea153 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103ea156:;
  /* 103ea156 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea159 cmp ecx, dword ptr [0x1041301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1041301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea15f jae 0x103ea177 */
  if (!C.cf) goto L_103ea177;
  /* 103ea161 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea164 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea168 je 0x103ea16c */
  if (C.zf) goto L_103ea16c;
  /* 103ea16a jmp 0x103ea177 */
  goto L_103ea177;
L_103ea16c:;
  /* 103ea16c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea16f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea172 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea175 jmp 0x103ea156 */
  goto L_103ea156;
L_103ea177:;
  /* 103ea177 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea17a cmp ecx, dword ptr [0x1041301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1041301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea180 jne 0x103ea197 */
  if (!C.zf) goto L_103ea197;
  /* 103ea182 call 0x103ea580 */
  push32(0x103ea187u); f_103ea580();
  /* 103ea187 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea18a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea18e jne 0x103ea197 */
  if (!C.zf) goto L_103ea197;
  /* 103ea190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea192 jmp 0x103ea571 */
  goto L_103ea571;
L_103ea197:;
  /* 103ea197 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea19a push edx */
  push32((uint32_t)(EDX));
  /* 103ea19b call 0x103ea690 */
  push32(0x103ea1a0u); f_103ea690();
  /* 103ea1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea1a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea1a6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103ea1a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103ea1ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea1ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103ea1b1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea1b4 jne 0x103ea1bd */
  if (!C.zf) goto L_103ea1bd;
  /* 103ea1b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea1b8 jmp 0x103ea571 */
  goto L_103ea571;
L_103ea1bd:;
  /* 103ea1bd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea1c0 mov dword ptr [0x1041301c], edx */
  w32((uint32_t)(0x1041301c), (EDX));
  /* 103ea1c6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea1c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103ea1cc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 103ea1cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea1d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103ea1d4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103ea1d7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea1db je 0x103ea200 */
  if (C.zf) goto L_103ea200;
  /* 103ea1dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea1e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea1e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea1e6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 103ea1ea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea1ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea1f0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 103ea1f3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 103ea1fa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 103ea1fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ea1fe jne 0x103ea235 */
  if (!C.zf) goto L_103ea235;
L_103ea200:;
  /* 103ea200 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_103ea207:;
  /* 103ea207 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea20a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea20d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea210 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 103ea214 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea217 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea21a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 103ea21d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 103ea224 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 103ea226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ea228 jne 0x103ea235 */
  if (!C.zf) goto L_103ea235;
  /* 103ea22a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea230 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103ea233 jmp 0x103ea207 */
  goto L_103ea207;
L_103ea235:;
  /* 103ea235 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea238 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea23e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea241 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103ea248 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ea24b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103ea252 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea255 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea258 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea25b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 103ea25f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103ea262 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea266 jne 0x103ea282 */
  if (!C.zf) goto L_103ea282;
  /* 103ea268 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 103ea26f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea275 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103ea278 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 103ea27f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_103ea282:;
  /* 103ea282 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea286 jl 0x103ea29b */
  if ((C.sf!=C.of)) goto L_103ea29b;
  /* 103ea288 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ea28b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103ea28d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103ea290 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea293 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea296 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103ea299 jmp 0x103ea282 */
  goto L_103ea282;
L_103ea29b:;
  /* 103ea29b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea2a1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 103ea2a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103ea2a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea2ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103ea2ad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea2b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ea2b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ea2b6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103ea2b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea2bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103ea2bf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea2c3 jle 0x103ea2cc */
  if ((C.zf||C.sf!=C.of)) goto L_103ea2cc;
  /* 103ea2c5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_103ea2cc:;
  /* 103ea2cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea2cf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea2d2 je 0x103ea4f0 */
  if (C.zf) goto L_103ea4f0;
  /* 103ea2d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea2db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea2de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ea2e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea2e4 jne 0x103ea3ba */
  if (!C.zf) goto L_103ea3ba;
  /* 103ea2ea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea2ee jge 0x103ea34f */
  if ((C.sf==C.of)) goto L_103ea34f;
  /* 103ea2f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea2f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea2f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea2fa not eax */
  EAX = (~(EAX));
  /* 103ea2fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea2ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea302 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103ea306 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea308 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea30b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea30e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103ea312 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea315 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea318 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103ea31b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103ea31e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea321 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea324 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103ea327 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea32a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea32d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ea331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ea333 jne 0x103ea34d */
  if (!C.zf) goto L_103ea34d;
  /* 103ea335 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea33a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea33d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea33f not eax */
  EAX = (~(EAX));
  /* 103ea341 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea344 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ea346 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103ea348 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea34b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103ea34d:;
  /* 103ea34d jmp 0x103ea3ba */
  goto L_103ea3ba;
L_103ea34f:;
  /* 103ea34f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea352 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea355 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea35a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea35c not edx */
  EDX = (~(EDX));
  /* 103ea35e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea361 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea364 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103ea36b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea36d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea370 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea373 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 103ea37a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea37d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea380 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103ea383 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103ea386 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea389 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea38c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103ea38f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea392 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea395 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103ea399 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea39b jne 0x103ea3ba */
  if (!C.zf) goto L_103ea3ba;
  /* 103ea39d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea3a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea3a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea3a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea3aa not edx */
  EDX = (~(EDX));
  /* 103ea3ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea3af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ea3b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea3b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea3b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103ea3ba:;
  /* 103ea3ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ea3c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103ea3c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103ea3c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ea3cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ea3d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103ea3d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea3dc je 0x103ea4f0 */
  if (C.zf) goto L_103ea4f0;
  /* 103ea3e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea3e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 103ea3eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103ea3ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea3f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ea3f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103ea3fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea3fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea400 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103ea403 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea406 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea409 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103ea40c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea40f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ea412 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea415 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103ea418 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea41b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea41e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ea421 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea424 jne 0x103ea4f0 */
  if (!C.zf) goto L_103ea4f0;
  /* 103ea42a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea42e jge 0x103ea48a */
  if ((C.sf==C.of)) goto L_103ea48a;
  /* 103ea430 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea433 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea436 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103ea43a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea43d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea440 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103ea443 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103ea445 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea448 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea44b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103ea44e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea450 jne 0x103ea468 */
  if (!C.zf) goto L_103ea468;
  /* 103ea452 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea457 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea45a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea45c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea45f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ea461 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103ea463 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea466 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103ea468:;
  /* 103ea468 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea46d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea470 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea472 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea475 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea478 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103ea47c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea47e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea481 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea484 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103ea488 jmp 0x103ea4f0 */
  goto L_103ea4f0;
L_103ea48a:;
  /* 103ea48a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea48d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea490 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103ea494 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea497 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea49a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103ea49d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103ea49f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea4a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea4a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103ea4a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea4aa jne 0x103ea4c7 */
  if (!C.zf) goto L_103ea4c7;
  /* 103ea4ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea4af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea4b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea4b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea4b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea4bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ea4bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103ea4c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea4c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103ea4c7:;
  /* 103ea4c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea4ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea4cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea4d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea4d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea4d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea4da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103ea4e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea4e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea4e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea4e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_103ea4f0:;
  /* 103ea4f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea4f4 je 0x103ea50a */
  if (C.zf) goto L_103ea50a;
  /* 103ea4f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea4f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ea4fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103ea4fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea501 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea504 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ea507 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_103ea50a:;
  /* 103ea50a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea50d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea510 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103ea513 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea516 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea519 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea51c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103ea51e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea524 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea527 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea52a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 103ea52d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea530 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ea532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea535 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103ea537 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea53a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea53d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103ea53f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea541 jne 0x103ea563 */
  if (!C.zf) goto L_103ea563;
  /* 103ea543 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea546 cmp eax, dword ptr [0x10413020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10413020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea54c jne 0x103ea563 */
  if (!C.zf) goto L_103ea563;
  /* 103ea54e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea551 cmp ecx, dword ptr [0x10413018] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10413018))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea557 jne 0x103ea563 */
  if (!C.zf) goto L_103ea563;
  /* 103ea559 mov dword ptr [0x10413020], 0 */
  w32((uint32_t)(0x10413020), (0x0u));
L_103ea563:;
  /* 103ea563 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103ea566 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea569 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103ea56b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea56e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103ea571:;
  /* 103ea571 pop esi */
  ESI = (pop32());
  /* 103ea572 mov esp, ebp */
  ESP = (EBP);
  /* 103ea574 pop ebp */
  EBP = (pop32());
  /* 103ea575 ret  */
  ESPCHK(0x103ea040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x103ea580 (271 bytes, 78 insns) */
void f_103ea580(void) {
  FTRACE(0x103ea580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ea580 push ebp */
  push32((uint32_t)(EBP));
  /* 103ea581 mov ebp, esp */
  EBP = (ESP);
  /* 103ea583 push ecx */
  push32((uint32_t)(ECX));
  /* 103ea584 mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103ea589 cmp eax, dword ptr [0x10413008] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10413008))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea58f jne 0x103ea5db */
  if (!C.zf) goto L_103ea5db;
  /* 103ea591 mov ecx, dword ptr [0x10413008] */
  ECX = (r32((uint32_t)(0x10413008)));
  /* 103ea597 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea59a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea59d push ecx */
  push32((uint32_t)(ECX));
  /* 103ea59e mov edx, dword ptr [0x10413028] */
  EDX = (r32((uint32_t)(0x10413028)));
  /* 103ea5a4 push edx */
  push32((uint32_t)(EDX));
  /* 103ea5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ea5a7 mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103ea5ac push eax */
  push32((uint32_t)(EAX));
  /* 103ea5ad call dword ptr [0x1041432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041432c))), 0x103ea5b3u);
  /* 103ea5b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ea5b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea5ba jne 0x103ea5c3 */
  if (!C.zf) goto L_103ea5c3;
  /* 103ea5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea5be jmp 0x103ea68b */
  goto L_103ea68b;
L_103ea5c3:;
  /* 103ea5c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea5c6 mov dword ptr [0x10413028], ecx */
  w32((uint32_t)(0x10413028), (ECX));
  /* 103ea5cc mov edx, dword ptr [0x10413008] */
  EDX = (r32((uint32_t)(0x10413008)));
  /* 103ea5d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea5d5 mov dword ptr [0x10413008], edx */
  w32((uint32_t)(0x10413008), (EDX));
L_103ea5db:;
  /* 103ea5db mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103ea5e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea5e3 mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103ea5e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea5eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ea5ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 103ea5f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 103ea5f5 mov edx, dword ptr [0x1041302c] */
  EDX = (r32((uint32_t)(0x1041302c)));
  /* 103ea5fb push edx */
  push32((uint32_t)(EDX));
  /* 103ea5fc call dword ptr [0x10414330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414330))), 0x103ea602u);
  /* 103ea602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea605 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 103ea608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea60b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea60f jne 0x103ea615 */
  if (!C.zf) goto L_103ea615;
  /* 103ea611 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea613 jmp 0x103ea68b */
  goto L_103ea68b;
L_103ea615:;
  /* 103ea615 push 4 */
  push32((uint32_t)(0x4u));
  /* 103ea617 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 103ea61c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103ea621 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ea623 call dword ptr [0x10414328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414328))), 0x103ea629u);
  /* 103ea629 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea62c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 103ea62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea632 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea636 jne 0x103ea652 */
  if (!C.zf) goto L_103ea652;
  /* 103ea638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea63b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103ea63e push ecx */
  push32((uint32_t)(ECX));
  /* 103ea63f push 0 */
  push32((uint32_t)(0x0u));
  /* 103ea641 mov edx, dword ptr [0x1041302c] */
  EDX = (r32((uint32_t)(0x1041302c)));
  /* 103ea647 push edx */
  push32((uint32_t)(EDX));
  /* 103ea648 call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103ea64eu);
  /* 103ea64e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea650 jmp 0x103ea68b */
  goto L_103ea68b;
L_103ea652:;
  /* 103ea652 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea655 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ea65b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea65e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103ea665 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea668 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 103ea66f mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103ea674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea677 mov dword ptr [0x10413024], eax */
  w32((uint32_t)(0x10413024), (EAX));
  /* 103ea67c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea67f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103ea682 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 103ea688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ea68b:;
  /* 103ea68b mov esp, ebp */
  ESP = (EBP);
  /* 103ea68d pop ebp */
  EBP = (pop32());
  /* 103ea68e ret  */
  ESPCHK(0x103ea580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x103ea690 (494 bytes, 149 insns) */
void f_103ea690(void) {
  FTRACE(0x103ea690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ea690 push ebp */
  push32((uint32_t)(EBP));
  /* 103ea691 mov ebp, esp */
  EBP = (ESP);
  /* 103ea693 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea699 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103ea69c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103ea69f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea6a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ea6a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ea6a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_103ea6af:;
  /* 103ea6af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea6b3 jl 0x103ea6c8 */
  if ((C.sf!=C.of)) goto L_103ea6c8;
  /* 103ea6b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ea6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103ea6ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ea6bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea6c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea6c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103ea6c6 jmp 0x103ea6af */
  goto L_103ea6af;
L_103ea6c8:;
  /* 103ea6c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea6cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea6d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea6d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103ea6db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103ea6de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103ea6e5 jmp 0x103ea6f0 */
  goto L_103ea6f0;
L_103ea6e7:;
  /* 103ea6e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea6ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea6ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_103ea6f0:;
  /* 103ea6f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea6f4 jge 0x103ea716 */
  if ((C.sf==C.of)) goto L_103ea716;
  /* 103ea6f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea6f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea6fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 103ea6ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea702 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea705 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea708 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103ea70b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea70e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea711 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103ea714 jmp 0x103ea6e7 */
  goto L_103ea6e7;
L_103ea716:;
  /* 103ea716 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea719 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103ea71c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea71f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ea722 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea724 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103ea727 push 4 */
  push32((uint32_t)(0x4u));
  /* 103ea729 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103ea72e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103ea733 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea736 push edx */
  push32((uint32_t)(EDX));
  /* 103ea737 call dword ptr [0x10414328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414328))), 0x103ea73du);
  /* 103ea73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ea73f jne 0x103ea749 */
  if (!C.zf) goto L_103ea749;
  /* 103ea741 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ea744 jmp 0x103ea87a */
  goto L_103ea87a;
L_103ea749:;
  /* 103ea749 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea74c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea751 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103ea754 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea757 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ea75a jmp 0x103ea768 */
  goto L_103ea768;
L_103ea75c:;
  /* 103ea75c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea75f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea765 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ea768:;
  /* 103ea768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea76b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea76e ja 0x103ea7cd */
  if ((!C.cf&&!C.zf)) goto L_103ea7cd;
  /* 103ea770 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea773 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 103ea77a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea77d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 103ea787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea78a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea78d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea790 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea793 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103ea799 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea79c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea7a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea7a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103ea7a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea7ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea7b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea7b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103ea7b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea7ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea7bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103ea7c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ea7c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103ea7cb jmp 0x103ea75c */
  goto L_103ea75c;
L_103ea7cd:;
  /* 103ea7cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea7d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea7d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103ea7d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea7dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea7df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea7e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103ea7e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea7e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103ea7eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea7ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea7f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea7f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103ea7f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ea7fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea7fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea800 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103ea803 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea806 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ea809 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ea80c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ea80f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea812 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103ea815 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea818 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea81b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 103ea823 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea826 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea829 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 103ea834 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea837 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 103ea83b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea83e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 103ea841 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103ea844 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea847 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 103ea84a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ea84c jne 0x103ea85d */
  if (!C.zf) goto L_103ea85d;
  /* 103ea84e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea851 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ea854 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ea857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea85a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103ea85d:;
  /* 103ea85d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea862 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea865 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea867 not edx */
  EDX = (~(EDX));
  /* 103ea869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea86c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ea86f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea874 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103ea877 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_103ea87a:;
  /* 103ea87a mov esp, ebp */
  ESP = (EBP);
  /* 103ea87c pop ebp */
  EBP = (pop32());
  /* 103ea87d ret  */
  ESPCHK(0x103ea690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x103ea880 (1515 bytes, 489 insns) */
void f_103ea880(void) {
  FTRACE(0x103ea880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ea880 push ebp */
  push32((uint32_t)(EBP));
  /* 103ea881 mov ebp, esp */
  EBP = (ESP);
  /* 103ea883 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ea889 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea88c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 103ea88e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103ea891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea894 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103ea897 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103ea89a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea89d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ea8a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea8a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103ea8a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ea8a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103ea8ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ea8af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea8b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ea8b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea8bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103ea8c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103ea8c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ea8c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea8cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103ea8ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea8d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ea8d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea8d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103ea8d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ea8dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea8df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103ea8e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea8e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ea8e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103ea8ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ea8ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea8f0 jle 0x103eaba6 */
  if ((C.zf||C.sf!=C.of)) goto L_103eaba6;
  /* 103ea8f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea8f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ea8fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea8fe jne 0x103ea90b */
  if (!C.zf) goto L_103ea90b;
  /* 103ea900 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ea903 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea906 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea909 jle 0x103ea912 */
  if ((C.zf||C.sf!=C.of)) goto L_103ea912;
L_103ea90b:;
  /* 103ea90b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea90d jmp 0x103eae67 */
  goto L_103eae67;
L_103ea912:;
  /* 103ea912 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ea915 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103ea918 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea91b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ea91e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea922 jbe 0x103ea92b */
  if ((C.cf||C.zf)) goto L_103ea92b;
  /* 103ea924 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103ea92b:;
  /* 103ea92b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea92e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ea931 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ea934 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea937 jne 0x103eaa0d */
  if (!C.zf) goto L_103eaa0d;
  /* 103ea93d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ea941 jae 0x103ea9a2 */
  if (!C.cf) goto L_103ea9a2;
  /* 103ea943 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea948 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea94b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea94d not edx */
  EDX = (~(EDX));
  /* 103ea94f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea952 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea955 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103ea959 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103ea95b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea95e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea961 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103ea965 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea968 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea96b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103ea96e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103ea971 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea974 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea977 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103ea97a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea97d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea980 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103ea984 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ea986 jne 0x103ea9a0 */
  if (!C.zf) goto L_103ea9a0;
  /* 103ea988 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103ea98d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea990 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103ea992 not edx */
  EDX = (~(EDX));
  /* 103ea994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ea999 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea99b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ea99e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103ea9a0:;
  /* 103ea9a0 jmp 0x103eaa0d */
  goto L_103eaa0d;
L_103ea9a2:;
  /* 103ea9a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea9a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea9a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea9ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea9af not eax */
  EAX = (~(EAX));
  /* 103ea9b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea9b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea9b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103ea9be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103ea9c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ea9c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea9c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103ea9cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea9d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea9d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103ea9d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103ea9d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea9dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea9df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103ea9e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ea9e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ea9e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ea9ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ea9ee jne 0x103eaa0d */
  if (!C.zf) goto L_103eaa0d;
  /* 103ea9f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ea9f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ea9f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103ea9fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103ea9fd not eax */
  EAX = (~(EAX));
  /* 103ea9ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eaa02 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eaa05 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103eaa07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eaa0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103eaa0d:;
  /* 103eaa0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa10 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103eaa13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103eaa19 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103eaa1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103eaa22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa25 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103eaa28 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103eaa2b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eaa2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaa31 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eaa34 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103eaa37 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaa3b jle 0x103eab87 */
  if ((C.zf||C.sf!=C.of)) goto L_103eab87;
  /* 103eaa41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eaa44 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaa47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103eaa4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eaa4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103eaa50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eaa53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103eaa56 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaa5a jbe 0x103eaa63 */
  if ((C.cf||C.zf)) goto L_103eaa63;
  /* 103eaa5c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103eaa63:;
  /* 103eaa63 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eaa66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eaa69 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 103eaa6c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103eaa6f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eaa75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eaa78 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103eaa7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eaa81 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103eaa84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eaa87 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa8a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103eaa8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa90 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eaa93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa96 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103eaa99 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eaa9f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eaaa2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaaa5 jne 0x103eab73 */
  if (!C.zf) goto L_103eab73;
  /* 103eaaab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaaaf jae 0x103eab0c */
  if (!C.cf) goto L_103eab0c;
  /* 103eaab1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eaab4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaab7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103eaabb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eaabe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaac1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103eaac4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103eaac7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eaaca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaacd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103eaad0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eaad2 jne 0x103eaaea */
  if (!C.zf) goto L_103eaaea;
  /* 103eaad4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eaad9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eaadc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eaade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eaae1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103eaae3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103eaae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eaae8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103eaaea:;
  /* 103eaaea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eaaef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eaaf2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eaaf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eaaf7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eaafa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103eaafe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103eab00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eab03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab06 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103eab0a jmp 0x103eab73 */
  goto L_103eab73;
L_103eab0c:;
  /* 103eab0c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab0f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab12 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103eab16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab19 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab1c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103eab1f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103eab22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab25 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab28 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103eab2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eab2d jne 0x103eab4a */
  if (!C.zf) goto L_103eab4a;
  /* 103eab2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eab32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eab35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eab3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eab3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eab3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103eab42 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103eab44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eab47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103eab4a:;
  /* 103eab4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eab4d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eab50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eab55 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eab57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eab5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab5d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103eab64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103eab66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eab69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eab6c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_103eab73:;
  /* 103eab73 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eab76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eab79 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103eab7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eab7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eab84 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_103eab87:;
  /* 103eab87 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103eab8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eab90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103eab92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103eab95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eab9b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eab9e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 103eaba1 jmp 0x103eae62 */
  goto L_103eae62;
L_103eaba6:;
  /* 103eaba6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103eaba9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eabac jge 0x103eae62 */
  if ((C.sf==C.of)) goto L_103eae62;
  /* 103eabb2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103eabb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eabb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eabbb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103eabbd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103eabc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eabc3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eabc6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eabc9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 103eabcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eabcf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eabd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103eabd5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eabd8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eabdb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103eabde mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eabe1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103eabe4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eabe7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103eabea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eabee jbe 0x103eabf7 */
  if ((C.cf||C.zf)) goto L_103eabf7;
  /* 103eabf0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103eabf7:;
  /* 103eabf7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eabfa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103eabfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eabff jne 0x103ead40 */
  if (!C.zf) goto L_103ead40;
  /* 103eac05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eac08 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103eac0b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eac0e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103eac11 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eac15 jbe 0x103eac1e */
  if ((C.cf||C.zf)) goto L_103eac1e;
  /* 103eac17 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103eac1e:;
  /* 103eac1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eac21 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eac24 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eac27 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eac2a jne 0x103ead00 */
  if (!C.zf) goto L_103ead00;
  /* 103eac30 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eac34 jae 0x103eac95 */
  if (!C.cf) goto L_103eac95;
  /* 103eac36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eac3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eac3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eac40 not edx */
  EDX = (~(EDX));
  /* 103eac42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eac45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eac48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103eac4c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eac4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eac51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eac54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103eac58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eac5b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eac5e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103eac61 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103eac64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eac67 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eac6a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103eac6d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eac70 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eac73 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103eac77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eac79 jne 0x103eac93 */
  if (!C.zf) goto L_103eac93;
  /* 103eac7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eac80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eac83 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eac85 not edx */
  EDX = (~(EDX));
  /* 103eac87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eac8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103eac8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103eac8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eac91 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103eac93:;
  /* 103eac93 jmp 0x103ead00 */
  goto L_103ead00;
L_103eac95:;
  /* 103eac95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eac98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eac9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eaca0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eaca2 not eax */
  EAX = (~(EAX));
  /* 103eaca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eaca7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eacaa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103eacb1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103eacb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eacb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eacb9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103eacc0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eacc3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eacc6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103eacc9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103eaccc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eaccf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eacd2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103eacd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eacd8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eacdb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103eacdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eace1 jne 0x103ead00 */
  if (!C.zf) goto L_103ead00;
  /* 103eace3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eace6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eace9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eacee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eacf0 not eax */
  EAX = (~(EAX));
  /* 103eacf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eacf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eacf8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103eacfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eacfd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103ead00:;
  /* 103ead00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ead03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103ead06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ead09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ead0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103ead0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ead12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103ead15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ead18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103ead1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103ead1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ead21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ead24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103ead27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ead2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103ead2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ead30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103ead33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ead37 jbe 0x103ead40 */
  if ((C.cf||C.zf)) goto L_103ead40;
  /* 103ead39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103ead40:;
  /* 103ead40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ead43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ead46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 103ead49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103ead4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ead52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ead55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103ead58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ead5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103ead61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ead64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103ead6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ead70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103ead76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ead7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ead7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ead82 jne 0x103eae4e */
  if (!C.zf) goto L_103eae4e;
  /* 103ead88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ead8c jae 0x103eade8 */
  if (!C.cf) goto L_103eade8;
  /* 103ead8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ead91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ead94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103ead98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ead9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ead9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103eada1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103eada3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eada6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eada9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103eadac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eadae jne 0x103eadc6 */
  if (!C.zf) goto L_103eadc6;
  /* 103eadb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eadb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eadb8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eadba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eadbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103eadbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103eadc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eadc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103eadc6:;
  /* 103eadc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eadcb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eadce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eadd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eadd3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eadd6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103eadda or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eaddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eaddf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eade2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103eade6 jmp 0x103eae4e */
  goto L_103eae4e;
L_103eade8:;
  /* 103eade8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eadeb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eadee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103eadf2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eadf5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eadf8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103eadfb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103eadfd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eae00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eae03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103eae06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eae08 jne 0x103eae25 */
  if (!C.zf) goto L_103eae25;
  /* 103eae0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eae0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eae10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103eae15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103eae17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eae1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eae1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103eae1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eae22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103eae25:;
  /* 103eae25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eae28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eae2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eae30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eae32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eae35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eae38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103eae3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eae41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eae44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103eae47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_103eae4e:;
  /* 103eae4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eae51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eae54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103eae56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eae59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eae5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eae5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_103eae62:;
  /* 103eae62 mov eax, 1 */
  EAX = (0x1u);
L_103eae67:;
  /* 103eae67 mov esp, ebp */
  ESP = (EBP);
  /* 103eae69 pop ebp */
  EBP = (pop32());
  /* 103eae6a ret  */
  ESPCHK(0x103ea880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x103eae70 (304 bytes, 79 insns) */
void f_103eae70(void) {
  FTRACE(0x103eae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eae70 push ebp */
  push32((uint32_t)(EBP));
  /* 103eae71 mov ebp, esp */
  EBP = (ESP);
  /* 103eae73 push ecx */
  push32((uint32_t)(ECX));
  /* 103eae74 cmp dword ptr [0x10413020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10413020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eae7b je 0x103eaf9c */
  if (C.zf) goto L_103eaf9c;
  /* 103eae81 mov eax, dword ptr [0x10413018] */
  EAX = (r32((uint32_t)(0x10413018)));
  /* 103eae86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 103eae89 mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103eae8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103eae92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eae94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103eae97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103eae9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103eaea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eaea4 push eax */
  push32((uint32_t)(EAX));
  /* 103eaea5 call dword ptr [0x1041434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041434c))), 0x103eaeabu);
  /* 103eaeab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eaeb0 mov ecx, dword ptr [0x10413018] */
  ECX = (r32((uint32_t)(0x10413018)));
  /* 103eaeb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eaeb8 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaebd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103eaec0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103eaec2 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103eaec8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103eaecb mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaed0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103eaed3 mov edx, dword ptr [0x10413018] */
  EDX = (r32((uint32_t)(0x10413018)));
  /* 103eaed9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 103eaee4 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaee9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103eaeec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 103eaeef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103eaef2 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaef7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103eaefa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 103eaefd mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103eaf03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103eaf06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 103eaf0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eaf0c jne 0x103eaf22 */
  if (!C.zf) goto L_103eaf22;
  /* 103eaf0e mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103eaf14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103eaf17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 103eaf19 mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103eaf1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_103eaf22:;
  /* 103eaf22 mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103eaf28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaf2c jne 0x103eaf92 */
  if (!C.zf) goto L_103eaf92;
  /* 103eaf2e cmp dword ptr [0x10413024], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10413024))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaf35 jle 0x103eaf92 */
  if ((C.zf||C.sf!=C.of)) goto L_103eaf92;
  /* 103eaf37 mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaf3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103eaf3f push ecx */
  push32((uint32_t)(ECX));
  /* 103eaf40 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eaf42 mov edx, dword ptr [0x1041302c] */
  EDX = (r32((uint32_t)(0x1041302c)));
  /* 103eaf48 push edx */
  push32((uint32_t)(EDX));
  /* 103eaf49 call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103eaf4fu);
  /* 103eaf4f mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103eaf54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eaf57 mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103eaf5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaf5f mov edx, dword ptr [0x10413020] */
  EDX = (r32((uint32_t)(0x10413020)));
  /* 103eaf65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaf68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eaf6a push ecx */
  push32((uint32_t)(ECX));
  /* 103eaf6b mov eax, dword ptr [0x10413020] */
  EAX = (r32((uint32_t)(0x10413020)));
  /* 103eaf70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaf73 push eax */
  push32((uint32_t)(EAX));
  /* 103eaf74 mov ecx, dword ptr [0x10413020] */
  ECX = (r32((uint32_t)(0x10413020)));
  /* 103eaf7a push ecx */
  push32((uint32_t)(ECX));
  /* 103eaf7b call 0x103ed5a0 */
  push32(0x103eaf80u); f_103ed5a0();
  /* 103eaf80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eaf83 mov edx, dword ptr [0x10413024] */
  EDX = (r32((uint32_t)(0x10413024)));
  /* 103eaf89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eaf8c mov dword ptr [0x10413024], edx */
  w32((uint32_t)(0x10413024), (EDX));
L_103eaf92:;
  /* 103eaf92 mov dword ptr [0x10413020], 0 */
  w32((uint32_t)(0x10413020), (0x0u));
L_103eaf9c:;
  /* 103eaf9c mov esp, ebp */
  ESP = (EBP);
  /* 103eaf9e pop ebp */
  EBP = (pop32());
  /* 103eaf9f ret  */
  ESPCHK(0x103eae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa0 @ 0x103eafa0 (1565 bytes, 343 insns) */
void f_103eafa0(void) {
  FTRACE(0x103eafa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eafa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eafa1 mov ebp, esp */
  EBP = (ESP);
  /* 103eafa3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eafa9 mov eax, dword ptr [0x10413024] */
  EAX = (r32((uint32_t)(0x10413024)));
  /* 103eafae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eafb1 push eax */
  push32((uint32_t)(EAX));
  /* 103eafb2 mov ecx, dword ptr [0x10413028] */
  ECX = (r32((uint32_t)(0x10413028)));
  /* 103eafb8 push ecx */
  push32((uint32_t)(ECX));
  /* 103eafb9 call dword ptr [0x104143d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d0))), 0x103eafbfu);
  /* 103eafbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eafc1 je 0x103eafcb */
  if (C.zf) goto L_103eafcb;
  /* 103eafc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eafc6 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eafcb:;
  /* 103eafcb mov edx, dword ptr [0x10413028] */
  EDX = (r32((uint32_t)(0x10413028)));
  /* 103eafd1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 103eafd7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 103eafe1 jmp 0x103eaff2 */
  goto L_103eaff2;
L_103eafe3:;
  /* 103eafe3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 103eafe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eafec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_103eaff2:;
  /* 103eaff2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 103eaff8 cmp ecx, dword ptr [0x10413024] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10413024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eaffe jge 0x103eb5b7 */
  if ((C.sf==C.of)) goto L_103eb5b7;
  /* 103eb004 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb00a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103eb00d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 103eb013 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 103eb018 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 103eb01e push ecx */
  push32((uint32_t)(ECX));
  /* 103eb01f call dword ptr [0x104143d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d0))), 0x103eb025u);
  /* 103eb025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb027 je 0x103eb033 */
  if (C.zf) goto L_103eb033;
  /* 103eb029 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 103eb02e jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb033:;
  /* 103eb033 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb039 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103eb03c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 103eb042 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 103eb048 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb04e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103eb051 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb057 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103eb05a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103eb05d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 103eb067 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 103eb071 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eb078 jmp 0x103eb083 */
  goto L_103eb083;
L_103eb07a:;
  /* 103eb07a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb07d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb080 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103eb083:;
  /* 103eb083 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb087 jge 0x103eb57b */
  if ((C.sf==C.of)) goto L_103eb57b;
  /* 103eb08d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 103eb097 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 103eb0a1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 103eb0ab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 103eb0b5 jmp 0x103eb0c6 */
  goto L_103eb0c6;
L_103eb0b7:;
  /* 103eb0b7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103eb0bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb0c0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_103eb0c6:;
  /* 103eb0c6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb0cd jge 0x103eb0e2 */
  if ((C.sf==C.of)) goto L_103eb0e2;
  /* 103eb0cf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103eb0d5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 103eb0e0 jmp 0x103eb0b7 */
  goto L_103eb0b7;
L_103eb0e2:;
  /* 103eb0e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb0e6 jl 0x103eb51d */
  if ((C.sf!=C.of)) goto L_103eb51d;
  /* 103eb0ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103eb0f1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 103eb0f7 push ecx */
  push32((uint32_t)(ECX));
  /* 103eb0f8 call dword ptr [0x104143d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d0))), 0x103eb0feu);
  /* 103eb0fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb100 je 0x103eb10c */
  if (C.zf) goto L_103eb10c;
  /* 103eb102 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 103eb107 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb10c:;
  /* 103eb10c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 103eb112 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103eb115 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 103eb11f jmp 0x103eb130 */
  goto L_103eb130;
L_103eb121:;
  /* 103eb121 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 103eb127 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb12a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_103eb130:;
  /* 103eb130 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb137 jge 0x103eb2b4 */
  if ((C.sf==C.of)) goto L_103eb2b4;
  /* 103eb13d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb140 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb143 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 103eb149 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb14f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb155 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 103eb15b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb161 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb165 jne 0x103eb172 */
  if (!C.zf) goto L_103eb172;
  /* 103eb167 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 103eb16d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb170 je 0x103eb17c */
  if (C.zf) goto L_103eb17c;
L_103eb172:;
  /* 103eb172 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 103eb177 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb17c:;
  /* 103eb17c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb182 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103eb184 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 103eb18a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 103eb190 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 103eb196 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 103eb19c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103eb19f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eb1a1 je 0x103eb1d9 */
  if (C.zf) goto L_103eb1d9;
  /* 103eb1a3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 103eb1a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb1ac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 103eb1b2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb1bc jle 0x103eb1c8 */
  if ((C.zf||C.sf!=C.of)) goto L_103eb1c8;
  /* 103eb1be mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 103eb1c3 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb1c8:;
  /* 103eb1c8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 103eb1ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb1d1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 103eb1d7 jmp 0x103eb21b */
  goto L_103eb21b;
L_103eb1d9:;
  /* 103eb1d9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 103eb1df sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103eb1e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb1e5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103eb1eb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb1f2 jle 0x103eb1fe */
  if ((C.zf||C.sf!=C.of)) goto L_103eb1fe;
  /* 103eb1f4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_103eb1fe:;
  /* 103eb1fe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103eb204 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 103eb20b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb20e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103eb214 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_103eb21b:;
  /* 103eb21b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb222 jl 0x103eb23d */
  if ((C.sf!=C.of)) goto L_103eb23d;
  /* 103eb224 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 103eb22a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 103eb22d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb22f jne 0x103eb23d */
  if (!C.zf) goto L_103eb23d;
  /* 103eb231 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb23b jle 0x103eb247 */
  if ((C.zf||C.sf!=C.of)) goto L_103eb247;
L_103eb23d:;
  /* 103eb23d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 103eb242 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb247:;
  /* 103eb247 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb24d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb253 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103eb256 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb25c je 0x103eb268 */
  if (C.zf) goto L_103eb268;
  /* 103eb25e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 103eb263 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb268:;
  /* 103eb268 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb26e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb274 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 103eb27a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb280 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb286 jb 0x103eb17c */
  if (C.cf) goto L_103eb17c;
  /* 103eb28c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb292 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb298 je 0x103eb2a4 */
  if (C.zf) goto L_103eb2a4;
  /* 103eb29a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 103eb29f jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb2a4:;
  /* 103eb2a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb2a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb2ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eb2af jmp 0x103eb121 */
  goto L_103eb121;
L_103eb2b4:;
  /* 103eb2b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eb2b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103eb2b9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb2bf je 0x103eb2cb */
  if (C.zf) goto L_103eb2cb;
  /* 103eb2c1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 103eb2c6 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb2cb:;
  /* 103eb2cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eb2ce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 103eb2d4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103eb2db jmp 0x103eb2e6 */
  goto L_103eb2e6;
L_103eb2dd:;
  /* 103eb2dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb2e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb2e3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103eb2e6:;
  /* 103eb2e6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb2ea jge 0x103eb51d */
  if ((C.sf==C.of)) goto L_103eb51d;
  /* 103eb2f0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 103eb2fa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 103eb300 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_103eb306:;
  /* 103eb306 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb30c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103eb30f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 103eb315 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb31b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb321 je 0x103eb44a */
  if (C.zf) goto L_103eb44a;
  /* 103eb327 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb32a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103eb330 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb337 je 0x103eb44a */
  if (C.zf) goto L_103eb44a;
  /* 103eb33d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb343 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb349 jb 0x103eb35e */
  if (C.cf) goto L_103eb35e;
  /* 103eb34b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 103eb351 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb356 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb35c jb 0x103eb368 */
  if (C.cf) goto L_103eb368;
L_103eb35e:;
  /* 103eb35e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 103eb363 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb368:;
  /* 103eb368 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb36e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 103eb374 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 103eb37a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 103eb380 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb383 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103eb386 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb389 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb38e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_103eb394:;
  /* 103eb394 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb397 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb39d je 0x103eb3be */
  if (C.zf) goto L_103eb3be;
  /* 103eb39f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb3a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb3a8 jne 0x103eb3ac */
  if (!C.zf) goto L_103eb3ac;
  /* 103eb3aa jmp 0x103eb3be */
  goto L_103eb3be;
L_103eb3ac:;
  /* 103eb3ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb3af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103eb3b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 103eb3b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb3b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb3b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103eb3bc jmp 0x103eb394 */
  goto L_103eb394;
L_103eb3be:;
  /* 103eb3be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eb3c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb3c7 jne 0x103eb3d3 */
  if (!C.zf) goto L_103eb3d3;
  /* 103eb3c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 103eb3ce jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb3d3:;
  /* 103eb3d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb3d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103eb3db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103eb3de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb3e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103eb3e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb3ee jle 0x103eb3fa */
  if ((C.zf||C.sf!=C.of)) goto L_103eb3fa;
  /* 103eb3f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_103eb3fa:;
  /* 103eb3fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103eb400 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb403 je 0x103eb40f */
  if (C.zf) goto L_103eb40f;
  /* 103eb405 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 103eb40a jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb40f:;
  /* 103eb40f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb415 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103eb418 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb41e je 0x103eb42a */
  if (C.zf) goto L_103eb42a;
  /* 103eb420 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 103eb425 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb42a:;
  /* 103eb42a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103eb430 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 103eb436 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103eb43c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb43f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 103eb445 jmp 0x103eb306 */
  goto L_103eb306;
L_103eb44a:;
  /* 103eb44a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb451 je 0x103eb4c1 */
  if (C.zf) goto L_103eb4c1;
  /* 103eb453 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb457 jge 0x103eb48b */
  if ((C.sf==C.of)) goto L_103eb48b;
  /* 103eb459 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eb45e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb461 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eb463 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 103eb469 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb46b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 103eb471 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eb476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb479 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eb47b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 103eb481 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb483 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 103eb489 jmp 0x103eb4c1 */
  goto L_103eb4c1;
L_103eb48b:;
  /* 103eb48b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb48e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb491 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eb496 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eb498 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 103eb49e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb4a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 103eb4a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb4a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb4ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103eb4b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103eb4b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 103eb4b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb4bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_103eb4c1:;
  /* 103eb4c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103eb4c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eb4ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb4d0 jne 0x103eb4e4 */
  if (!C.zf) goto L_103eb4e4;
  /* 103eb4d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103eb4d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103eb4db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb4e2 je 0x103eb4ee */
  if (C.zf) goto L_103eb4ee;
L_103eb4e4:;
  /* 103eb4e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 103eb4e9 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb4ee:;
  /* 103eb4ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 103eb4f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103eb4f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb4fd je 0x103eb509 */
  if (C.zf) goto L_103eb509;
  /* 103eb4ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 103eb504 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb509:;
  /* 103eb509 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 103eb50f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb512 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 103eb518 jmp 0x103eb2dd */
  goto L_103eb2dd;
L_103eb51d:;
  /* 103eb51d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb520 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 103eb526 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 103eb52c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb530 jne 0x103eb54a */
  if (!C.zf) goto L_103eb54a;
  /* 103eb532 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb535 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 103eb53b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 103eb541 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb548 je 0x103eb551 */
  if (C.zf) goto L_103eb551;
L_103eb54a:;
  /* 103eb54a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 103eb54f jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb551:;
  /* 103eb551 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 103eb557 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb55d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 103eb563 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103eb566 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb56b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103eb56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb571 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103eb573 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103eb576 jmp 0x103eb07a */
  goto L_103eb07a;
L_103eb57b:;
  /* 103eb57b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb581 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 103eb587 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb589 jne 0x103eb59c */
  if (!C.zf) goto L_103eb59c;
  /* 103eb58b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb591 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 103eb597 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb59a je 0x103eb5a3 */
  if (C.zf) goto L_103eb5a3;
L_103eb59c:;
  /* 103eb59c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 103eb5a1 jmp 0x103eb5b9 */
  goto L_103eb5b9;
L_103eb5a3:;
  /* 103eb5a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103eb5a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb5ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 103eb5b2 jmp 0x103eafe3 */
  goto L_103eafe3;
L_103eb5b7:;
  /* 103eb5b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103eb5b9:;
  /* 103eb5b9 mov esp, ebp */
  ESP = (EBP);
  /* 103eb5bb pop ebp */
  EBP = (pop32());
  /* 103eb5bc ret  */
  ESPCHK(0x103eafa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c0 @ 0x103eb5c0 (250 bytes, 92 insns) */
void f_103eb5c0(void) {
  FTRACE(0x103eb5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eb5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eb5c1 mov ebp, esp */
  EBP = (ESP);
  /* 103eb5c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb5c6 push ebx */
  push32((uint32_t)(EBX));
  /* 103eb5c7 push esi */
  push32((uint32_t)(ESI));
  /* 103eb5c8 push edi */
  push32((uint32_t)(EDI));
  /* 103eb5c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103eb5cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103eb5cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103eb5d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_103eb5d5:;
  /* 103eb5d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb5d9 jne 0x103eb5f9 */
  if (!C.zf) goto L_103eb5f9;
  /* 103eb5db push 0x1040d14c */
  push32((uint32_t)(0x1040d14cu));
  /* 103eb5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eb5e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 103eb5e4 push 0x1040d140 */
  push32((uint32_t)(0x1040d140u));
  /* 103eb5e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103eb5eb call 0x103e4770 */
  push32(0x103eb5f0u); f_103e4770();
  /* 103eb5f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb5f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb5f6 jne 0x103eb5f9 */
  if (!C.zf) goto L_103eb5f9;
  /* 103eb5f8 int3  */
  x86_unimpl("int3 @ 0x103eb5f8");
L_103eb5f9:;
  /* 103eb5f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103eb5fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eb5fd jne 0x103eb5d5 */
  if (!C.zf) goto L_103eb5d5;
L_103eb5ff:;
  /* 103eb5ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb603 jne 0x103eb623 */
  if (!C.zf) goto L_103eb623;
  /* 103eb605 push 0x1040d130 */
  push32((uint32_t)(0x1040d130u));
  /* 103eb60a push 0 */
  push32((uint32_t)(0x0u));
  /* 103eb60c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103eb60e push 0x1040d140 */
  push32((uint32_t)(0x1040d140u));
  /* 103eb613 push 2 */
  push32((uint32_t)(0x2u));
  /* 103eb615 call 0x103e4770 */
  push32(0x103eb61au); f_103e4770();
  /* 103eb61a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb61d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb620 jne 0x103eb623 */
  if (!C.zf) goto L_103eb623;
  /* 103eb622 int3  */
  x86_unimpl("int3 @ 0x103eb622");
L_103eb623:;
  /* 103eb623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb627 jne 0x103eb5ff */
  if (!C.zf) goto L_103eb5ff;
  /* 103eb629 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb62c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 103eb633 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb639 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103eb63c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb63f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb642 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103eb644 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb647 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 103eb64e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eb651 push ecx */
  push32((uint32_t)(ECX));
  /* 103eb652 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eb655 push edx */
  push32((uint32_t)(EDX));
  /* 103eb656 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb659 push eax */
  push32((uint32_t)(EAX));
  /* 103eb65a call 0x103ec640 */
  push32(0x103eb65fu); f_103ec640();
  /* 103eb65f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb662 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103eb665 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb668 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eb66b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb66e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb671 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103eb674 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb677 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb67b jl 0x103eb69f */
  if ((C.sf!=C.of)) goto L_103eb69f;
  /* 103eb67d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb680 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103eb682 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103eb685 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103eb687 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103eb68d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103eb690 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb693 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103eb695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb698 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb69b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103eb69d jmp 0x103eb6b0 */
  goto L_103eb6b0;
L_103eb69f:;
  /* 103eb69f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb6a2 push edx */
  push32((uint32_t)(EDX));
  /* 103eb6a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eb6a5 call 0x103ec3c0 */
  push32(0x103eb6aau); f_103ec3c0();
  /* 103eb6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb6ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_103eb6b0:;
  /* 103eb6b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb6b3 pop edi */
  EDI = (pop32());
  /* 103eb6b4 pop esi */
  ESI = (pop32());
  /* 103eb6b5 pop ebx */
  EBX = (pop32());
  /* 103eb6b6 mov esp, ebp */
  ESP = (EBP);
  /* 103eb6b8 pop ebp */
  EBP = (pop32());
  /* 103eb6b9 ret  */
  ESPCHK(0x103eb5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x103eb6c0 (183 bytes, 58 insns) */
void f_103eb6c0(void) {
  FTRACE(0x103eb6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eb6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eb6c1 mov ebp, esp */
  EBP = (ESP);
  /* 103eb6c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb6c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb6cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb6d1 ja 0x103eb6ea */
  if ((!C.cf&&!C.zf)) goto L_103eb6ea;
  /* 103eb6d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb6d6 mov edx, dword ptr [0x1040fc98] */
  EDX = (r32((uint32_t)(0x1040fc98)));
  /* 103eb6dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb6de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103eb6e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 103eb6e5 jmp 0x103eb773 */
  goto L_103eb773;
L_103eb6ea:;
  /* 103eb6ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb6ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103eb6f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103eb6f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103eb6fc mov edx, dword ptr [0x1040fc98] */
  EDX = (r32((uint32_t)(0x1040fc98)));
  /* 103eb702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb704 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103eb708 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103eb70d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb70f je 0x103eb733 */
  if (C.zf) goto L_103eb733;
  /* 103eb711 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb714 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103eb717 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103eb71d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 103eb720 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 103eb723 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 103eb726 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 103eb72a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 103eb731 jmp 0x103eb744 */
  goto L_103eb744;
L_103eb733:;
  /* 103eb733 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103eb736 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 103eb739 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 103eb73d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_103eb744:;
  /* 103eb744 push 1 */
  push32((uint32_t)(0x1u));
  /* 103eb746 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eb748 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eb74a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 103eb74d push ecx */
  push32((uint32_t)(ECX));
  /* 103eb74e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb751 push edx */
  push32((uint32_t)(EDX));
  /* 103eb752 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103eb755 push eax */
  push32((uint32_t)(EAX));
  /* 103eb756 push 1 */
  push32((uint32_t)(0x1u));
  /* 103eb758 call 0x103ed8e0 */
  push32(0x103eb75du); f_103ed8e0();
  /* 103eb75d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb762 jne 0x103eb768 */
  if (!C.zf) goto L_103eb768;
  /* 103eb764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb766 jmp 0x103eb773 */
  goto L_103eb773;
L_103eb768:;
  /* 103eb768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb76b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eb770 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_103eb773:;
  /* 103eb773 mov esp, ebp */
  ESP = (EBP);
  /* 103eb775 pop ebp */
  EBP = (pop32());
  /* 103eb776 ret  */
  ESPCHK(0x103eb6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x103eb780 (836 bytes, 238 insns) */
void f_103eb780(void) {
  FTRACE(0x103eb780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eb780 push ebp */
  push32((uint32_t)(EBP));
  /* 103eb781 mov ebp, esp */
  EBP = (ESP);
  /* 103eb783 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eb786 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103eb788 call 0x103e90b0 */
  push32(0x103eb78du); f_103e90b0();
  /* 103eb78d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb793 push eax */
  push32((uint32_t)(EAX));
  /* 103eb794 call 0x103ebad0 */
  push32(0x103eb799u); f_103ebad0();
  /* 103eb799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb79c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103eb79f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb7a2 cmp ecx, dword ptr [0x10412d64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10412d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb7a8 jne 0x103eb7bb */
  if (!C.zf) goto L_103eb7bb;
  /* 103eb7aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103eb7ac call 0x103e9150 */
  push32(0x103eb7b1u); f_103e9150();
  /* 103eb7b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb7b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb7b6 jmp 0x103ebac0 */
  goto L_103ebac0;
L_103eb7bb:;
  /* 103eb7bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb7bf jne 0x103eb7dc */
  if (!C.zf) goto L_103eb7dc;
  /* 103eb7c1 call 0x103ebbb0 */
  push32(0x103eb7c6u); f_103ebbb0();
  /* 103eb7c6 call 0x103ebc30 */
  push32(0x103eb7cbu); f_103ebc30();
  /* 103eb7cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103eb7cd call 0x103e9150 */
  push32(0x103eb7d2u); f_103e9150();
  /* 103eb7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb7d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb7d7 jmp 0x103ebac0 */
  goto L_103ebac0;
L_103eb7dc:;
  /* 103eb7dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103eb7e3 jmp 0x103eb7ee */
  goto L_103eb7ee;
L_103eb7e5:;
  /* 103eb7e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb7e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb7eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103eb7ee:;
  /* 103eb7ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb7f2 jae 0x103eb93f */
  if (!C.cf) goto L_103eb93f;
  /* 103eb7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb7fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eb7fe mov ecx, dword ptr [eax + 0x1040feb8] */
  ECX = (r32((uint32_t)(EAX + 0x1040feb8)));
  /* 103eb804 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb807 jne 0x103eb93a */
  if (!C.zf) goto L_103eb93a;
  /* 103eb80d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103eb814 jmp 0x103eb81f */
  goto L_103eb81f;
L_103eb816:;
  /* 103eb816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb819 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb81c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_103eb81f:;
  /* 103eb81f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb826 jae 0x103eb834 */
  if (!C.cf) goto L_103eb834;
  /* 103eb828 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb82b mov byte ptr [eax + 0x10412f00], 0 */
  w8((uint32_t)(EAX + 0x10412f00), (0x0u));
  /* 103eb832 jmp 0x103eb816 */
  goto L_103eb816;
L_103eb834:;
  /* 103eb834 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eb83b jmp 0x103eb846 */
  goto L_103eb846;
L_103eb83d:;
  /* 103eb83d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb840 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb843 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103eb846:;
  /* 103eb846 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb84a jae 0x103eb8c7 */
  if (!C.cf) goto L_103eb8c7;
  /* 103eb84c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb84f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eb852 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb855 lea ecx, [edx + eax*8 + 0x1040fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1040fec8));
  /* 103eb85c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103eb85f jmp 0x103eb86a */
  goto L_103eb86a;
L_103eb861:;
  /* 103eb861 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb864 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb867 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103eb86a:;
  /* 103eb86a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103eb86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103eb871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eb873 je 0x103eb8c2 */
  if (C.zf) goto L_103eb8c2;
  /* 103eb875 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb87a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103eb87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb87f je 0x103eb8c2 */
  if (C.zf) goto L_103eb8c2;
  /* 103eb881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103eb886 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103eb888 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103eb88b jmp 0x103eb896 */
  goto L_103eb896;
L_103eb88d:;
  /* 103eb88d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb893 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103eb896:;
  /* 103eb896 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eb899 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103eb89b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103eb89e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb8a1 ja 0x103eb8c0 */
  if ((!C.cf&&!C.zf)) goto L_103eb8c0;
  /* 103eb8a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb8a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb8a9 mov dl, byte ptr [eax + 0x10412f01] */
  DL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103eb8af or dl, byte ptr [ecx + 0x1040feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1040feb0))); DL = (_r); fl_logic(_r,8); }
  /* 103eb8b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb8b8 mov byte ptr [eax + 0x10412f01], dl */
  w8((uint32_t)(EAX + 0x10412f01), (DL));
  /* 103eb8be jmp 0x103eb88d */
  goto L_103eb88d;
L_103eb8c0:;
  /* 103eb8c0 jmp 0x103eb861 */
  goto L_103eb861;
L_103eb8c2:;
  /* 103eb8c2 jmp 0x103eb83d */
  goto L_103eb83d;
L_103eb8c7:;
  /* 103eb8c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb8ca mov dword ptr [0x10412d64], ecx */
  w32((uint32_t)(0x10412d64), (ECX));
  /* 103eb8d0 mov dword ptr [0x10412dec], 1 */
  w32((uint32_t)(0x10412dec), (0x1u));
  /* 103eb8da mov edx, dword ptr [0x10412d64] */
  EDX = (r32((uint32_t)(0x10412d64)));
  /* 103eb8e0 push edx */
  push32((uint32_t)(EDX));
  /* 103eb8e1 call 0x103ebb30 */
  push32(0x103eb8e6u); f_103ebb30();
  /* 103eb8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb8e9 mov dword ptr [0x10413004], eax */
  w32((uint32_t)(0x10413004), (EAX));
  /* 103eb8ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eb8f5 jmp 0x103eb900 */
  goto L_103eb900;
L_103eb8f7:;
  /* 103eb8f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb8fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb8fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103eb900:;
  /* 103eb900 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb904 jae 0x103eb924 */
  if (!C.cf) goto L_103eb924;
  /* 103eb906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eb909 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eb90c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb90f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eb912 mov cx, word ptr [ecx + eax*2 + 0x1040febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1040febc)));
  /* 103eb91a mov word ptr [edx*2 + 0x10412de0], cx */
  w16((uint32_t)(EDX*2 + 0x10412de0), (CX));
  /* 103eb922 jmp 0x103eb8f7 */
  goto L_103eb8f7;
L_103eb924:;
  /* 103eb924 call 0x103ebc30 */
  push32(0x103eb929u); f_103ebc30();
  /* 103eb929 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103eb92b call 0x103e9150 */
  push32(0x103eb930u); f_103e9150();
  /* 103eb930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb935 jmp 0x103ebac0 */
  goto L_103ebac0;
L_103eb93a:;
  /* 103eb93a jmp 0x103eb7e5 */
  goto L_103eb7e5;
L_103eb93f:;
  /* 103eb93f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 103eb942 push edx */
  push32((uint32_t)(EDX));
  /* 103eb943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb946 push eax */
  push32((uint32_t)(EAX));
  /* 103eb947 call dword ptr [0x10414324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414324))), 0x103eb94du);
  /* 103eb94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb950 jne 0x103eba92 */
  if (!C.zf) goto L_103eba92;
  /* 103eb956 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103eb95d jmp 0x103eb968 */
  goto L_103eb968;
L_103eb95f:;
  /* 103eb95f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb965 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_103eb968:;
  /* 103eb968 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb96f jae 0x103eb97d */
  if (!C.cf) goto L_103eb97d;
  /* 103eb971 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb974 mov byte ptr [edx + 0x10412f00], 0 */
  w8((uint32_t)(EDX + 0x10412f00), (0x0u));
  /* 103eb97b jmp 0x103eb95f */
  goto L_103eb95f;
L_103eb97d:;
  /* 103eb97d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eb980 mov dword ptr [0x10412d64], eax */
  w32((uint32_t)(0x10412d64), (EAX));
  /* 103eb985 mov dword ptr [0x10413004], 0 */
  w32((uint32_t)(0x10413004), (0x0u));
  /* 103eb98f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb993 jbe 0x103eba4e */
  if ((C.cf||C.zf)) goto L_103eba4e;
  /* 103eb999 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 103eb99c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103eb99f jmp 0x103eb9aa */
  goto L_103eb9aa;
L_103eb9a1:;
  /* 103eb9a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb9a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb9a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_103eb9aa:;
  /* 103eb9aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb9ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103eb9af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103eb9b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eb9b3 je 0x103eb9fc */
  if (C.zf) goto L_103eb9fc;
  /* 103eb9b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb9b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eb9ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103eb9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eb9bf je 0x103eb9fc */
  if (C.zf) goto L_103eb9fc;
  /* 103eb9c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb9c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103eb9c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103eb9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103eb9cb jmp 0x103eb9d6 */
  goto L_103eb9d6;
L_103eb9cd:;
  /* 103eb9cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb9d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eb9d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103eb9d6:;
  /* 103eb9d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eb9d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103eb9db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103eb9de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eb9e1 ja 0x103eb9fa */
  if ((!C.cf&&!C.zf)) goto L_103eb9fa;
  /* 103eb9e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb9e6 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103eb9ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 103eb9ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eb9f2 mov byte ptr [edx + 0x10412f01], cl */
  w8((uint32_t)(EDX + 0x10412f01), (CL));
  /* 103eb9f8 jmp 0x103eb9cd */
  goto L_103eb9cd;
L_103eb9fa:;
  /* 103eb9fa jmp 0x103eb9a1 */
  goto L_103eb9a1;
L_103eb9fc:;
  /* 103eb9fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 103eba03 jmp 0x103eba0e */
  goto L_103eba0e;
L_103eba05:;
  /* 103eba05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eba08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eba0b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103eba0e:;
  /* 103eba0e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eba15 jae 0x103eba2e */
  if (!C.cf) goto L_103eba2e;
  /* 103eba17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eba1a mov dl, byte ptr [ecx + 0x10412f01] */
  DL = (r8((uint32_t)(ECX + 0x10412f01)));
  /* 103eba20 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 103eba23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eba26 mov byte ptr [eax + 0x10412f01], dl */
  w8((uint32_t)(EAX + 0x10412f01), (DL));
  /* 103eba2c jmp 0x103eba05 */
  goto L_103eba05;
L_103eba2e:;
  /* 103eba2e mov ecx, dword ptr [0x10412d64] */
  ECX = (r32((uint32_t)(0x10412d64)));
  /* 103eba34 push ecx */
  push32((uint32_t)(ECX));
  /* 103eba35 call 0x103ebb30 */
  push32(0x103eba3au); f_103ebb30();
  /* 103eba3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eba3d mov dword ptr [0x10413004], eax */
  w32((uint32_t)(0x10413004), (EAX));
  /* 103eba42 mov dword ptr [0x10412dec], 1 */
  w32((uint32_t)(0x10412dec), (0x1u));
  /* 103eba4c jmp 0x103eba58 */
  goto L_103eba58;
L_103eba4e:;
  /* 103eba4e mov dword ptr [0x10412dec], 0 */
  w32((uint32_t)(0x10412dec), (0x0u));
L_103eba58:;
  /* 103eba58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eba5f jmp 0x103eba6a */
  goto L_103eba6a;
L_103eba61:;
  /* 103eba61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eba64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eba67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103eba6a:;
  /* 103eba6a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eba6e jae 0x103eba7f */
  if (!C.cf) goto L_103eba7f;
  /* 103eba70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eba73 mov word ptr [eax*2 + 0x10412de0], 0 */
  w16((uint32_t)(EAX*2 + 0x10412de0), (0x0u));
  /* 103eba7d jmp 0x103eba61 */
  goto L_103eba61;
L_103eba7f:;
  /* 103eba7f call 0x103ebc30 */
  push32(0x103eba84u); f_103ebc30();
  /* 103eba84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103eba86 call 0x103e9150 */
  push32(0x103eba8bu); f_103e9150();
  /* 103eba8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eba8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eba90 jmp 0x103ebac0 */
  goto L_103ebac0;
L_103eba92:;
  /* 103eba92 cmp dword ptr [0x10411868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eba99 je 0x103ebab3 */
  if (C.zf) goto L_103ebab3;
  /* 103eba9b call 0x103ebbb0 */
  push32(0x103ebaa0u); f_103ebbb0();
  /* 103ebaa0 call 0x103ebc30 */
  push32(0x103ebaa5u); f_103ebc30();
  /* 103ebaa5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ebaa7 call 0x103e9150 */
  push32(0x103ebaacu); f_103e9150();
  /* 103ebaac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebaaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ebab1 jmp 0x103ebac0 */
  goto L_103ebac0;
L_103ebab3:;
  /* 103ebab3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ebab5 call 0x103e9150 */
  push32(0x103ebabau); f_103e9150();
  /* 103ebaba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebabd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103ebac0:;
  /* 103ebac0 mov esp, ebp */
  ESP = (EBP);
  /* 103ebac2 pop ebp */
  EBP = (pop32());
  /* 103ebac3 ret  */
  ESPCHK(0x103eb780u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x103ebad0 (89 bytes, 21 insns) */
void f_103ebad0(void) {
  FTRACE(0x103ebad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebad0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebad1 mov ebp, esp */
  EBP = (ESP);
  /* 103ebad3 mov dword ptr [0x10411868], 0 */
  w32((uint32_t)(0x10411868), (0x0u));
  /* 103ebadd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebae1 jne 0x103ebaf5 */
  if (!C.zf) goto L_103ebaf5;
  /* 103ebae3 mov dword ptr [0x10411868], 1 */
  w32((uint32_t)(0x10411868), (0x1u));
  /* 103ebaed call dword ptr [0x1041431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041431c))), 0x103ebaf3u);
  /* 103ebaf3 jmp 0x103ebb27 */
  goto L_103ebb27;
L_103ebaf5:;
  /* 103ebaf5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebaf9 jne 0x103ebb0d */
  if (!C.zf) goto L_103ebb0d;
  /* 103ebafb mov dword ptr [0x10411868], 1 */
  w32((uint32_t)(0x10411868), (0x1u));
  /* 103ebb05 call dword ptr [0x10414320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414320))), 0x103ebb0bu);
  /* 103ebb0b jmp 0x103ebb27 */
  goto L_103ebb27;
L_103ebb0d:;
  /* 103ebb0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebb11 jne 0x103ebb24 */
  if (!C.zf) goto L_103ebb24;
  /* 103ebb13 mov dword ptr [0x10411868], 1 */
  w32((uint32_t)(0x10411868), (0x1u));
  /* 103ebb1d mov eax, dword ptr [0x10411888] */
  EAX = (r32((uint32_t)(0x10411888)));
  /* 103ebb22 jmp 0x103ebb27 */
  goto L_103ebb27;
L_103ebb24:;
  /* 103ebb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103ebb27:;
  /* 103ebb27 pop ebp */
  EBP = (pop32());
  /* 103ebb28 ret  */
  ESPCHK(0x103ebad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x103ebb30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_103ebb30(void) {
  FTRACE(0x103ebb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebb30 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebb31 mov ebp, esp */
  EBP = (ESP);
  /* 103ebb33 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ebb37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ebb3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebb3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ebb43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ebb46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebb4a ja 0x103ebb7a */
  if ((!C.cf&&!C.zf)) goto L_103ebb7a;
  /* 103ebb4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebb4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ebb51 mov dl, byte ptr [eax + 0x103ebb94] */
  DL = (r8((uint32_t)(EAX + 0x103ebb94)));
  /* 103ebb57 jmp dword ptr [edx*4 + 0x103ebb80] */
  switch (EDX) {
    case 0: goto L_103ebb5e;
    case 1: goto L_103ebb65;
    case 2: goto L_103ebb6c;
    case 3: goto L_103ebb73;
    case 4: goto L_103ebb7a;
    default: x86_unimpl("switch@0x103ebb57 out of table"); return;
  }
L_103ebb5e:;
  /* 103ebb5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 103ebb63 jmp 0x103ebb7c */
  goto L_103ebb7c;
L_103ebb65:;
  /* 103ebb65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 103ebb6a jmp 0x103ebb7c */
  goto L_103ebb7c;
L_103ebb6c:;
  /* 103ebb6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 103ebb71 jmp 0x103ebb7c */
  goto L_103ebb7c;
L_103ebb73:;
  /* 103ebb73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 103ebb78 jmp 0x103ebb7c */
  goto L_103ebb7c;
L_103ebb7a:;
  /* 103ebb7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ebb7c:;
  /* 103ebb7c mov esp, ebp */
  ESP = (EBP);
  /* 103ebb7e pop ebp */
  EBP = (pop32());
  /* 103ebb7f ret  */
  ESPCHK(0x103ebb30u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x103ebbb0 (116 bytes, 29 insns) */
void f_103ebbb0(void) {
  FTRACE(0x103ebbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebbb1 mov ebp, esp */
  EBP = (ESP);
  /* 103ebbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebbb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ebbbb jmp 0x103ebbc6 */
  goto L_103ebbc6;
L_103ebbbd:;
  /* 103ebbbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebbc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebbc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ebbc6:;
  /* 103ebbc6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebbcd jge 0x103ebbdb */
  if ((C.sf==C.of)) goto L_103ebbdb;
  /* 103ebbcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebbd2 mov byte ptr [ecx + 0x10412f00], 0 */
  w8((uint32_t)(ECX + 0x10412f00), (0x0u));
  /* 103ebbd9 jmp 0x103ebbbd */
  goto L_103ebbbd;
L_103ebbdb:;
  /* 103ebbdb mov dword ptr [0x10412d64], 0 */
  w32((uint32_t)(0x10412d64), (0x0u));
  /* 103ebbe5 mov dword ptr [0x10412dec], 0 */
  w32((uint32_t)(0x10412dec), (0x0u));
  /* 103ebbef mov dword ptr [0x10413004], 0 */
  w32((uint32_t)(0x10413004), (0x0u));
  /* 103ebbf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ebc00 jmp 0x103ebc0b */
  goto L_103ebc0b;
L_103ebc02:;
  /* 103ebc02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebc05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebc08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ebc0b:;
  /* 103ebc0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebc0f jge 0x103ebc20 */
  if ((C.sf==C.of)) goto L_103ebc20;
  /* 103ebc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebc14 mov word ptr [eax*2 + 0x10412de0], 0 */
  w16((uint32_t)(EAX*2 + 0x10412de0), (0x0u));
  /* 103ebc1e jmp 0x103ebc02 */
  goto L_103ebc02;
L_103ebc20:;
  /* 103ebc20 mov esp, ebp */
  ESP = (EBP);
  /* 103ebc22 pop ebp */
  EBP = (pop32());
  /* 103ebc23 ret  */
  ESPCHK(0x103ebbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x103ebc30 (770 bytes, 175 insns) */
void f_103ebc30(void) {
  FTRACE(0x103ebc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebc30 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebc31 mov ebp, esp */
  EBP = (ESP);
  /* 103ebc33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ebc39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 103ebc3f push eax */
  push32((uint32_t)(EAX));
  /* 103ebc40 mov ecx, dword ptr [0x10412d64] */
  ECX = (r32((uint32_t)(0x10412d64)));
  /* 103ebc46 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebc47 call dword ptr [0x10414324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414324))), 0x103ebc4du);
  /* 103ebc4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebc50 jne 0x103ebe69 */
  if (!C.zf) goto L_103ebe69;
  /* 103ebc56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ebc60 jmp 0x103ebc71 */
  goto L_103ebc71;
L_103ebc62:;
  /* 103ebc62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebc68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebc6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_103ebc71:;
  /* 103ebc71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebc7b jae 0x103ebc92 */
  if (!C.cf) goto L_103ebc92;
  /* 103ebc7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebc83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 103ebc89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 103ebc90 jmp 0x103ebc62 */
  goto L_103ebc62;
L_103ebc92:;
  /* 103ebc92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 103ebc99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 103ebc9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ebca2 jmp 0x103ebcad */
  goto L_103ebcad;
L_103ebca4:;
  /* 103ebca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebca7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebcaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ebcad:;
  /* 103ebcad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebcb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ebcb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ebcb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ebcb6 je 0x103ebcf8 */
  if (C.zf) goto L_103ebcf8;
  /* 103ebcb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebcbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ebcbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103ebcbf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 103ebcc5 jmp 0x103ebcd6 */
  goto L_103ebcd6;
L_103ebcc7:;
  /* 103ebcc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebcd0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_103ebcd6:;
  /* 103ebcd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ebcd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ebcdb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103ebcde cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebce4 ja 0x103ebcf6 */
  if ((!C.cf&&!C.zf)) goto L_103ebcf6;
  /* 103ebce6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebcec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 103ebcf4 jmp 0x103ebcc7 */
  goto L_103ebcc7;
L_103ebcf6:;
  /* 103ebcf6 jmp 0x103ebca4 */
  goto L_103ebca4;
L_103ebcf8:;
  /* 103ebcf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ebcfa mov eax, dword ptr [0x10413004] */
  EAX = (r32((uint32_t)(0x10413004)));
  /* 103ebcff push eax */
  push32((uint32_t)(EAX));
  /* 103ebd00 mov ecx, dword ptr [0x10412d64] */
  ECX = (r32((uint32_t)(0x10412d64)));
  /* 103ebd06 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebd07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 103ebd0d push edx */
  push32((uint32_t)(EDX));
  /* 103ebd0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 103ebd19 push eax */
  push32((uint32_t)(EAX));
  /* 103ebd1a push 1 */
  push32((uint32_t)(0x1u));
  /* 103ebd1c call 0x103ed8e0 */
  push32(0x103ebd21u); f_103ed8e0();
  /* 103ebd21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebd24 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ebd26 mov ecx, dword ptr [0x10412d64] */
  ECX = (r32((uint32_t)(0x10412d64)));
  /* 103ebd2c push ecx */
  push32((uint32_t)(ECX));
  /* 103ebd2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 103ebd38 push edx */
  push32((uint32_t)(EDX));
  /* 103ebd39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 103ebd44 push eax */
  push32((uint32_t)(EAX));
  /* 103ebd45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd4a mov ecx, dword ptr [0x10413004] */
  ECX = (r32((uint32_t)(0x10413004)));
  /* 103ebd50 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebd51 call 0x103edaa0 */
  push32(0x103ebd56u); f_103edaa0();
  /* 103ebd56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebd59 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ebd5b mov edx, dword ptr [0x10412d64] */
  EDX = (r32((uint32_t)(0x10412d64)));
  /* 103ebd61 push edx */
  push32((uint32_t)(EDX));
  /* 103ebd62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 103ebd6d push eax */
  push32((uint32_t)(EAX));
  /* 103ebd6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ebd73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 103ebd79 push ecx */
  push32((uint32_t)(ECX));
  /* 103ebd7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 103ebd7f mov edx, dword ptr [0x10413004] */
  EDX = (r32((uint32_t)(0x10413004)));
  /* 103ebd85 push edx */
  push32((uint32_t)(EDX));
  /* 103ebd86 call 0x103edaa0 */
  push32(0x103ebd8bu); f_103edaa0();
  /* 103ebd8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebd8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ebd98 jmp 0x103ebda9 */
  goto L_103ebda9;
L_103ebd9a:;
  /* 103ebd9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebda0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebda3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_103ebda9:;
  /* 103ebda9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebdb3 jae 0x103ebe64 */
  if (!C.cf) goto L_103ebe64;
  /* 103ebdb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebdbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ebdc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 103ebdc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ebdcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ebdce je 0x103ebe06 */
  if (C.zf) goto L_103ebe06;
  /* 103ebdd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebdd6 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103ebddc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 103ebddf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebde5 mov byte ptr [edx + 0x10412f01], cl */
  w8((uint32_t)(EDX + 0x10412f01), (CL));
  /* 103ebdeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebdf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebdf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 103ebdfe mov byte ptr [eax + 0x10412e00], dl */
  w8((uint32_t)(EAX + 0x10412e00), (DL));
  /* 103ebe04 jmp 0x103ebe5f */
  goto L_103ebe5f;
L_103ebe06:;
  /* 103ebe06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ebe0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 103ebe16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103ebe19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ebe1b je 0x103ebe52 */
  if (C.zf) goto L_103ebe52;
  /* 103ebe1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe23 mov al, byte ptr [edx + 0x10412f01] */
  AL = (r8((uint32_t)(EDX + 0x10412f01)));
  /* 103ebe29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103ebe2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe31 mov byte ptr [ecx + 0x10412f01], al */
  w8((uint32_t)(ECX + 0x10412f01), (AL));
  /* 103ebe37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 103ebe4a mov byte ptr [edx + 0x10412e00], cl */
  w8((uint32_t)(EDX + 0x10412e00), (CL));
  /* 103ebe50 jmp 0x103ebe5f */
  goto L_103ebe5f;
L_103ebe52:;
  /* 103ebe52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe58 mov byte ptr [edx + 0x10412e00], 0 */
  w8((uint32_t)(EDX + 0x10412e00), (0x0u));
L_103ebe5f:;
  /* 103ebe5f jmp 0x103ebd9a */
  goto L_103ebd9a;
L_103ebe64:;
  /* 103ebe64 jmp 0x103ebf2e */
  goto L_103ebf2e;
L_103ebe69:;
  /* 103ebe69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ebe73 jmp 0x103ebe84 */
  goto L_103ebe84;
L_103ebe75:;
  /* 103ebe75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebe7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebe7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_103ebe84:;
  /* 103ebe84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebe8e jae 0x103ebf2e */
  if (!C.cf) goto L_103ebf2e;
  /* 103ebe94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebe9b jb 0x103ebed8 */
  if (C.cf) goto L_103ebed8;
  /* 103ebe9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebea4 ja 0x103ebed8 */
  if ((!C.cf&&!C.zf)) goto L_103ebed8;
  /* 103ebea6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebeac mov dl, byte ptr [ecx + 0x10412f01] */
  DL = (r8((uint32_t)(ECX + 0x10412f01)));
  /* 103ebeb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 103ebeb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebebb mov byte ptr [eax + 0x10412f01], dl */
  w8((uint32_t)(EAX + 0x10412f01), (DL));
  /* 103ebec1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebec7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebeca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebed0 mov byte ptr [edx + 0x10412e00], cl */
  w8((uint32_t)(EDX + 0x10412e00), (CL));
  /* 103ebed6 jmp 0x103ebf29 */
  goto L_103ebf29;
L_103ebed8:;
  /* 103ebed8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebedf jb 0x103ebf1c */
  if (C.cf) goto L_103ebf1c;
  /* 103ebee1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebee8 ja 0x103ebf1c */
  if ((!C.cf&&!C.zf)) goto L_103ebf1c;
  /* 103ebeea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebef0 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103ebef6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103ebef9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebeff mov byte ptr [edx + 0x10412f01], cl */
  w8((uint32_t)(EDX + 0x10412f01), (CL));
  /* 103ebf05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebf0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ebf0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebf14 mov byte ptr [ecx + 0x10412e00], al */
  w8((uint32_t)(ECX + 0x10412e00), (AL));
  /* 103ebf1a jmp 0x103ebf29 */
  goto L_103ebf29;
L_103ebf1c:;
  /* 103ebf1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ebf22 mov byte ptr [edx + 0x10412e00], 0 */
  w8((uint32_t)(EDX + 0x10412e00), (0x0u));
L_103ebf29:;
  /* 103ebf29 jmp 0x103ebe75 */
  goto L_103ebe75;
L_103ebf2e:;
  /* 103ebf2e mov esp, ebp */
  ESP = (EBP);
  /* 103ebf30 pop ebp */
  EBP = (pop32());
  /* 103ebf31 ret  */
  ESPCHK(0x103ebc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf40 @ 0x103ebf40 (23 bytes, 9 insns) */
void f_103ebf40(void) {
  FTRACE(0x103ebf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebf40 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebf41 mov ebp, esp */
  EBP = (ESP);
  /* 103ebf43 cmp dword ptr [0x10412dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10412dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebf4a je 0x103ebf53 */
  if (C.zf) goto L_103ebf53;
  /* 103ebf4c mov eax, dword ptr [0x10412d64] */
  EAX = (r32((uint32_t)(0x10412d64)));
  /* 103ebf51 jmp 0x103ebf55 */
  goto L_103ebf55;
L_103ebf53:;
  /* 103ebf53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ebf55:;
  /* 103ebf55 pop ebp */
  EBP = (pop32());
  /* 103ebf56 ret  */
  ESPCHK(0x103ebf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x103ebf60 (34 bytes, 10 insns) */
void f_103ebf60(void) {
  FTRACE(0x103ebf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebf60 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebf61 mov ebp, esp */
  EBP = (ESP);
  /* 103ebf63 cmp dword ptr [0x104131b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebf6a jne 0x103ebf80 */
  if (!C.zf) goto L_103ebf80;
  /* 103ebf6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 103ebf6e call 0x103eb780 */
  push32(0x103ebf73u); f_103eb780();
  /* 103ebf73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebf76 mov dword ptr [0x104131b0], 1 */
  w32((uint32_t)(0x104131b0), (0x1u));
L_103ebf80:;
  /* 103ebf80 pop ebp */
  EBP = (pop32());
  /* 103ebf81 ret  */
  ESPCHK(0x103ebf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x103ebf90 (664 bytes, 258 insns) [15 switch table(s)] */
void f_103ebf90(void) {
  FTRACE(0x103ebf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ebf90 push ebp */
  push32((uint32_t)(EBP));
  /* 103ebf91 mov ebp, esp */
  EBP = (ESP);
  /* 103ebf93 push edi */
  push32((uint32_t)(EDI));
  /* 103ebf94 push esi */
  push32((uint32_t)(ESI));
  /* 103ebf95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103ebf98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ebf9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103ebf9e mov eax, ecx */
  EAX = (ECX);
  /* 103ebfa0 mov edx, ecx */
  EDX = (ECX);
  /* 103ebfa2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebfa4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebfa6 jbe 0x103ebfb0 */
  if ((C.cf||C.zf)) goto L_103ebfb0;
  /* 103ebfa8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebfaa jb 0x103ec128 */
  if (C.cf) goto L_103ec128;
L_103ebfb0:;
  /* 103ebfb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ebfb6 jne 0x103ebfcc */
  if (!C.zf) goto L_103ebfcc;
  /* 103ebfb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ebfbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ebfbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ebfc1 jb 0x103ebfec */
  if (C.cf) goto L_103ebfec;
  /* 103ebfc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ebfc5 jmp dword ptr [edx*4 + 0x103ec0d8] */
  switch (EDX) {
    case 0: goto L_103ec0e8;
    case 1: goto L_103ec0f0;
    case 2: goto L_103ec0fc;
    case 3: goto L_103ec110;
    default: x86_unimpl("switch@0x103ebfc5 out of table"); return;
  }
L_103ebfcc:;
  /* 103ebfcc mov eax, edi */
  EAX = (EDI);
  /* 103ebfce mov edx, 3 */
  EDX = (0x3u);
  /* 103ebfd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ebfd6 jb 0x103ebfe4 */
  if (C.cf) goto L_103ebfe4;
  /* 103ebfd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ebfdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ebfdd jmp dword ptr [eax*4 + 0x103ebff0] */
  switch (EAX) {
    case 1: goto L_103ec000;
    case 2: goto L_103ec02c;
    case 3: goto L_103ec050;
    default: x86_unimpl("switch@0x103ebfdd out of table"); return;
  }
L_103ebfe4:;
  /* 103ebfe4 jmp dword ptr [ecx*4 + 0x103ec0e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103ec0e8)))); return;
  /* 103ebfeb nop  */
  /* nop */
L_103ebfec:;
  /* 103ebfec jmp dword ptr [ecx*4 + 0x103ec06c] */
  switch (ECX) {
    case 0: goto L_103ec0cf;
    case 1: goto L_103ec0bc;
    case 2: goto L_103ec0b4;
    case 3: goto L_103ec0ac;
    case 4: goto L_103ec0a4;
    case 5: goto L_103ec09c;
    case 6: goto L_103ec094;
    case 7: goto L_103ec08c;
    default: x86_unimpl("switch@0x103ebfec out of table"); return;
  }
  /* 103ebff3 nop  */
  /* nop */
L_103ec000:;
  /* 103ec000 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec002 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec004 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec006 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec009 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec00c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec00f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec012 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec015 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec018 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec01b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec01e jb 0x103ebfec */
  if (C.cf) goto L_103ebfec;
  /* 103ec020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec022 jmp dword ptr [edx*4 + 0x103ec0d8] */
  switch (EDX) {
    case 0: goto L_103ec0e8;
    case 1: goto L_103ec0f0;
    case 2: goto L_103ec0fc;
    case 3: goto L_103ec110;
    default: x86_unimpl("switch@0x103ec022 out of table"); return;
  }
  /* 103ec029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec02c:;
  /* 103ec02c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec02e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec030 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec032 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec035 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec038 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec03b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec03e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec041 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec044 jb 0x103ebfec */
  if (C.cf) goto L_103ebfec;
  /* 103ec046 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec048 jmp dword ptr [edx*4 + 0x103ec0d8] */
  switch (EDX) {
    case 0: goto L_103ec0e8;
    case 1: goto L_103ec0f0;
    case 2: goto L_103ec0fc;
    case 3: goto L_103ec110;
    default: x86_unimpl("switch@0x103ec048 out of table"); return;
  }
  /* 103ec04f nop  */
  /* nop */
L_103ec050:;
  /* 103ec050 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec052 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec054 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec056 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103ec057 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec05a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103ec05b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec05e jb 0x103ebfec */
  if (C.cf) goto L_103ebfec;
  /* 103ec060 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec062 jmp dword ptr [edx*4 + 0x103ec0d8] */
  switch (EDX) {
    case 0: goto L_103ec0e8;
    case 1: goto L_103ec0f0;
    case 2: goto L_103ec0fc;
    case 3: goto L_103ec110;
    default: x86_unimpl("switch@0x103ec062 out of table"); return;
  }
  /* 103ec069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec08c:;
  /* 103ec08c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 103ec090 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_103ec094:;
  /* 103ec094 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 103ec098 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_103ec09c:;
  /* 103ec09c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103ec0a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103ec0a4:;
  /* 103ec0a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103ec0a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103ec0ac:;
  /* 103ec0ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103ec0b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103ec0b4:;
  /* 103ec0b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103ec0b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103ec0bc:;
  /* 103ec0bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103ec0c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103ec0c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ec0cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec0cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ec0cf:;
  /* 103ec0cf jmp dword ptr [edx*4 + 0x103ec0d8] */
  switch (EDX) {
    case 0: goto L_103ec0e8;
    case 1: goto L_103ec0f0;
    case 2: goto L_103ec0fc;
    case 3: goto L_103ec110;
    default: x86_unimpl("switch@0x103ec0cf out of table"); return;
  }
  /* 103ec0d6 mov edi, edi */
  EDI = (EDI);
L_103ec0e8:;
  /* 103ec0e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec0eb pop esi */
  ESI = (pop32());
  /* 103ec0ec pop edi */
  EDI = (pop32());
  /* 103ec0ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec0ee ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec0ef nop  */
  /* nop */
L_103ec0f0:;
  /* 103ec0f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec0f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec0f7 pop esi */
  ESI = (pop32());
  /* 103ec0f8 pop edi */
  EDI = (pop32());
  /* 103ec0f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec0fa ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec0fb nop  */
  /* nop */
L_103ec0fc:;
  /* 103ec0fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec0fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec100 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec103 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec109 pop esi */
  ESI = (pop32());
  /* 103ec10a pop edi */
  EDI = (pop32());
  /* 103ec10b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec10c ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec10d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec110:;
  /* 103ec110 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ec112 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ec114 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec117 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec11a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec11d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec123 pop esi */
  ESI = (pop32());
  /* 103ec124 pop edi */
  EDI = (pop32());
  /* 103ec125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec126 ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec127 nop  */
  /* nop */
L_103ec128:;
  /* 103ec128 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103ec12c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103ec130 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ec136 jne 0x103ec15c */
  if (!C.zf) goto L_103ec15c;
  /* 103ec138 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec13b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec13e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec141 jb 0x103ec150 */
  if (C.cf) goto L_103ec150;
  /* 103ec143 std  */
  C.df=1;
  /* 103ec144 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec146 cld  */
  C.df=0;
  /* 103ec147 jmp dword ptr [edx*4 + 0x103ec270] */
  switch (EDX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec147 out of table"); return;
  }
  /* 103ec14e mov edi, edi */
  EDI = (EDI);
L_103ec150:;
  /* 103ec150 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ec152 jmp dword ptr [ecx*4 + 0x103ec220] */
  switch (ECX) {
    case 0: goto L_103ec267;
    default: x86_unimpl("switch@0x103ec152 out of table"); return;
  }
  /* 103ec159 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec15c:;
  /* 103ec15c mov eax, edi */
  EAX = (EDI);
  /* 103ec15e mov edx, 3 */
  EDX = (0x3u);
  /* 103ec163 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec166 jb 0x103ec174 */
  if (C.cf) goto L_103ec174;
  /* 103ec168 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ec16b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec16d jmp dword ptr [eax*4 + 0x103ec178] */
  switch (EAX) {
    case 1: goto L_103ec188;
    case 2: goto L_103ec1a8;
    case 3: goto L_103ec1d0;
    default: x86_unimpl("switch@0x103ec16d out of table"); return;
  }
L_103ec174:;
  /* 103ec174 jmp dword ptr [ecx*4 + 0x103ec270] */
  switch (ECX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec174 out of table"); return;
  }
  /* 103ec17b nop  */
  /* nop */
L_103ec188:;
  /* 103ec188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec18b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec18d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec190 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 103ec191 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec194 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103ec195 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec198 jb 0x103ec150 */
  if (C.cf) goto L_103ec150;
  /* 103ec19a std  */
  C.df=1;
  /* 103ec19b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec19d cld  */
  C.df=0;
  /* 103ec19e jmp dword ptr [edx*4 + 0x103ec270] */
  switch (EDX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec19e out of table"); return;
  }
  /* 103ec1a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec1a8:;
  /* 103ec1a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec1ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec1ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec1b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec1b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec1b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec1b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec1bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec1bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec1c2 jb 0x103ec150 */
  if (C.cf) goto L_103ec150;
  /* 103ec1c4 std  */
  C.df=1;
  /* 103ec1c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec1c7 cld  */
  C.df=0;
  /* 103ec1c8 jmp dword ptr [edx*4 + 0x103ec270] */
  switch (EDX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec1c8 out of table"); return;
  }
  /* 103ec1cf nop  */
  /* nop */
L_103ec1d0:;
  /* 103ec1d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec1d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec1d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec1d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec1db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec1de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec1e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ec1e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec1e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec1ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec1ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec1f0 jb 0x103ec150 */
  if (C.cf) goto L_103ec150;
  /* 103ec1f6 std  */
  C.df=1;
  /* 103ec1f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ec1f9 cld  */
  C.df=0;
  /* 103ec1fa jmp dword ptr [edx*4 + 0x103ec270] */
  switch (EDX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec1fa out of table"); return;
  }
  /* 103ec201 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103ec204 and al, 0xc2 */
  { uint32_t _r=(AL)&(0xc2u); AL = (_r); fl_logic(_r,8); }
  /* 103ec206 adc byte ptr ds:[edx + eax*8], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec20a adc byte ptr ds:[edx + eax*8], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec20e adc byte ptr ds:[edx + eax*8], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec212 adc byte ptr ds:[edx + eax*8 + 0x3e], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8 + 0x3e))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec217 adc byte ptr [edx + eax*8 + 0x3e], cl */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8 + 0x3e))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec21b adc byte ptr [edx + eax*8 + 0x3e], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EAX*8 + 0x3e))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EAX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ec224 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103ec228 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103ec22c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103ec230 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103ec234 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103ec238 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103ec23c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103ec240 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103ec244 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103ec248 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103ec24c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103ec250 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103ec254 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103ec258 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103ec25c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ec263 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec265 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ec267:;
  /* 103ec267 jmp dword ptr [edx*4 + 0x103ec270] */
  switch (EDX) {
    case 0: goto L_103ec280;
    case 1: goto L_103ec288;
    case 2: goto L_103ec298;
    case 3: goto L_103ec2ac;
    default: x86_unimpl("switch@0x103ec267 out of table"); return;
  }
  /* 103ec26e mov edi, edi */
  EDI = (EDI);
L_103ec280:;
  /* 103ec280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec283 pop esi */
  ESI = (pop32());
  /* 103ec284 pop edi */
  EDI = (pop32());
  /* 103ec285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec286 ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec287 nop  */
  /* nop */
L_103ec288:;
  /* 103ec288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec28b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec28e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec291 pop esi */
  ESI = (pop32());
  /* 103ec292 pop edi */
  EDI = (pop32());
  /* 103ec293 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec294 ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec295 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ec298:;
  /* 103ec298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec29b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec29e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec2a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec2a7 pop esi */
  ESI = (pop32());
  /* 103ec2a8 pop edi */
  EDI = (pop32());
  /* 103ec2a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec2aa ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
  /* 103ec2ab nop  */
  /* nop */
L_103ec2ac:;
  /* 103ec2ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ec2af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ec2b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ec2b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ec2b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ec2bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ec2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec2c1 pop esi */
  ESI = (pop32());
  /* 103ec2c2 pop edi */
  EDI = (pop32());
  /* 103ec2c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ec2c4 ret  */
  ESPCHK(0x103ebf90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x103ec2d0 (104 bytes, 43 insns) */
void f_103ec2d0(void) {
  FTRACE(0x103ec2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ec2d0 push ebx */
  push32((uint32_t)(EBX));
  /* 103ec2d1 push esi */
  push32((uint32_t)(ESI));
  /* 103ec2d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 103ec2d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec2d8 jne 0x103ec2f2 */
  if (!C.zf) goto L_103ec2f2;
  /* 103ec2da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 103ec2de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103ec2e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec2e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec2e6 mov ebx, eax */
  EBX = (EAX);
  /* 103ec2e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 103ec2ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec2ee mov edx, ebx */
  EDX = (EBX);
  /* 103ec2f0 jmp 0x103ec333 */
  goto L_103ec333;
L_103ec2f2:;
  /* 103ec2f2 mov ecx, eax */
  ECX = (EAX);
  /* 103ec2f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 103ec2f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 103ec2fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_103ec300:;
  /* 103ec300 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103ec302 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 103ec304 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ec306 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 103ec308 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ec30a jne 0x103ec300 */
  if (!C.zf) goto L_103ec300;
  /* 103ec30c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec30e mov esi, eax */
  ESI = (EAX);
  /* 103ec310 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103ec314 mov ecx, eax */
  ECX = (EAX);
  /* 103ec316 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 103ec31a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103ec31c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec31e jb 0x103ec32e */
  if (C.cf) goto L_103ec32e;
  /* 103ec320 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec324 ja 0x103ec32e */
  if ((!C.cf&&!C.zf)) goto L_103ec32e;
  /* 103ec326 jb 0x103ec32f */
  if (C.cf) goto L_103ec32f;
  /* 103ec328 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec32c jbe 0x103ec32f */
  if ((C.cf||C.zf)) goto L_103ec32f;
L_103ec32e:;
  /* 103ec32e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_103ec32f:;
  /* 103ec32f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec331 mov eax, esi */
  EAX = (ESI);
L_103ec333:;
  /* 103ec333 pop esi */
  ESI = (pop32());
  /* 103ec334 pop ebx */
  EBX = (pop32());
  /* 103ec335 ret 0x10 */
  ESPCHK(0x103ec2d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x103ec340 (117 bytes, 44 insns) */
void f_103ec340(void) {
  FTRACE(0x103ec340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ec340 push ebx */
  push32((uint32_t)(EBX));
  /* 103ec341 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 103ec345 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec347 jne 0x103ec361 */
  if (!C.zf) goto L_103ec361;
  /* 103ec349 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 103ec34d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 103ec351 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec353 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec355 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103ec359 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec35b mov eax, edx */
  EAX = (EDX);
  /* 103ec35d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ec35f jmp 0x103ec3b1 */
  goto L_103ec3b1;
L_103ec361:;
  /* 103ec361 mov ecx, eax */
  ECX = (EAX);
  /* 103ec363 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 103ec367 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 103ec36b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_103ec36f:;
  /* 103ec36f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103ec371 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 103ec373 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ec375 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 103ec377 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ec379 jne 0x103ec36f */
  if (!C.zf) goto L_103ec36f;
  /* 103ec37b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ec37d mov ecx, eax */
  ECX = (EAX);
  /* 103ec37f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103ec383 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 103ec384 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103ec388 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec38a jb 0x103ec39a */
  if (C.cf) goto L_103ec39a;
  /* 103ec38c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec390 ja 0x103ec39a */
  if ((!C.cf&&!C.zf)) goto L_103ec39a;
  /* 103ec392 jb 0x103ec3a2 */
  if (C.cf) goto L_103ec3a2;
  /* 103ec394 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec398 jbe 0x103ec3a2 */
  if ((C.cf||C.zf)) goto L_103ec3a2;
L_103ec39a:;
  /* 103ec39a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec39e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103ec3a2:;
  /* 103ec3a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec3a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec3aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ec3ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ec3ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103ec3b1:;
  /* 103ec3b1 pop ebx */
  EBX = (pop32());
  /* 103ec3b2 ret 0x10 */
  ESPCHK(0x103ec340u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c3c0 @ 0x103ec3c0 (628 bytes, 214 insns) */
void f_103ec3c0(void) {
  FTRACE(0x103ec3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ec3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ec3c1 mov ebp, esp */
  EBP = (ESP);
  /* 103ec3c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 103ec3c7 push esi */
  push32((uint32_t)(ESI));
  /* 103ec3c8 push edi */
  push32((uint32_t)(EDI));
L_103ec3c9:;
  /* 103ec3c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec3cd jne 0x103ec3ed */
  if (!C.zf) goto L_103ec3ed;
  /* 103ec3cf push 0x1040d1f8 */
  push32((uint32_t)(0x1040d1f8u));
  /* 103ec3d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ec3d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 103ec3d8 push 0x1040d1ec */
  push32((uint32_t)(0x1040d1ecu));
  /* 103ec3dd push 2 */
  push32((uint32_t)(0x2u));
  /* 103ec3df call 0x103e4770 */
  push32(0x103ec3e4u); f_103e4770();
  /* 103ec3e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec3e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec3ea jne 0x103ec3ed */
  if (!C.zf) goto L_103ec3ed;
  /* 103ec3ec int3  */
  x86_unimpl("int3 @ 0x103ec3ec");
L_103ec3ed:;
  /* 103ec3ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec3f1 jne 0x103ec3c9 */
  if (!C.zf) goto L_103ec3c9;
  /* 103ec3f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec3f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ec3f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec3fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103ec3ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103ec402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec405 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec408 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec40e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec410 je 0x103ec41f */
  if (C.zf) goto L_103ec41f;
  /* 103ec412 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec415 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ec418 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 103ec41b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ec41d je 0x103ec435 */
  if (C.zf) goto L_103ec435;
L_103ec41f:;
  /* 103ec41f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec422 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103ec425 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103ec427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec42a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 103ec42d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ec430 jmp 0x103ec62d */
  goto L_103ec62d;
L_103ec435:;
  /* 103ec435 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec438 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103ec43b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103ec43e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec440 je 0x103ec48c */
  if (C.zf) goto L_103ec48c;
  /* 103ec442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec445 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103ec44c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec44f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103ec452 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 103ec455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec457 je 0x103ec475 */
  if (C.zf) goto L_103ec475;
  /* 103ec459 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec45c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec45f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ec462 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103ec464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec467 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec46a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 103ec46d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec470 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103ec473 jmp 0x103ec48c */
  goto L_103ec48c;
L_103ec475:;
  /* 103ec475 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec478 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec47b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec47e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec481 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103ec484 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ec487 jmp 0x103ec62d */
  goto L_103ec62d;
L_103ec48c:;
  /* 103ec48c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec48f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec492 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec498 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103ec49b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec49e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec4a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 103ec4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec4a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103ec4aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec4ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103ec4b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ec4bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec4be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103ec4c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec4c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ec4c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 103ec4cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ec4cf jne 0x103ec4ff */
  if (!C.zf) goto L_103ec4ff;
  /* 103ec4d1 cmp dword ptr [ebp - 8], 0x10410140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10410140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec4d8 je 0x103ec4e3 */
  if (C.zf) goto L_103ec4e3;
  /* 103ec4da cmp dword ptr [ebp - 8], 0x10410160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10410160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec4e1 jne 0x103ec4f3 */
  if (!C.zf) goto L_103ec4f3;
L_103ec4e3:;
  /* 103ec4e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec4e6 push edx */
  push32((uint32_t)(EDX));
  /* 103ec4e7 call 0x103ee330 */
  push32(0x103ec4ecu); f_103ee330();
  /* 103ec4ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec4ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec4f1 jne 0x103ec4ff */
  if (!C.zf) goto L_103ec4ff;
L_103ec4f3:;
  /* 103ec4f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec4f6 push eax */
  push32((uint32_t)(EAX));
  /* 103ec4f7 call 0x103ee260 */
  push32(0x103ec4fcu); f_103ee260();
  /* 103ec4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ec4ff:;
  /* 103ec4ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec502 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ec505 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec50b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec50d je 0x103ec5eb */
  if (C.zf) goto L_103ec5eb;
L_103ec513:;
  /* 103ec513 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec516 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec519 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 103ec51b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec51e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec520 jge 0x103ec543 */
  if ((C.sf==C.of)) goto L_103ec543;
  /* 103ec522 push 0x1040d1ac */
  push32((uint32_t)(0x1040d1acu));
  /* 103ec527 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ec529 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 103ec52e push 0x1040d1ec */
  push32((uint32_t)(0x1040d1ecu));
  /* 103ec533 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ec535 call 0x103e4770 */
  push32(0x103ec53au); f_103e4770();
  /* 103ec53a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec53d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec540 jne 0x103ec543 */
  if (!C.zf) goto L_103ec543;
  /* 103ec542 int3  */
  x86_unimpl("int3 @ 0x103ec542");
L_103ec543:;
  /* 103ec543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec547 jne 0x103ec513 */
  if (!C.zf) goto L_103ec513;
  /* 103ec549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec54c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec54f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103ec551 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ec557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec55a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103ec55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec563 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103ec565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec568 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103ec56b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec56e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec571 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103ec574 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec578 jle 0x103ec596 */
  if ((C.zf||C.sf!=C.of)) goto L_103ec596;
  /* 103ec57a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec57d push ecx */
  push32((uint32_t)(ECX));
  /* 103ec57e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec581 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ec584 push eax */
  push32((uint32_t)(EAX));
  /* 103ec585 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec588 push ecx */
  push32((uint32_t)(ECX));
  /* 103ec589 call 0x103edf50 */
  push32(0x103ec58eu); f_103edf50();
  /* 103ec58e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec591 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103ec594 jmp 0x103ec5de */
  goto L_103ec5de;
L_103ec596:;
  /* 103ec596 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec59a je 0x103ec5b9 */
  if (C.zf) goto L_103ec5b9;
  /* 103ec59c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec59f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103ec5a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec5a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103ec5a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ec5ab mov ecx, dword ptr [edx*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103ec5b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec5b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103ec5b7 jmp 0x103ec5c0 */
  goto L_103ec5c0;
L_103ec5b9:;
  /* 103ec5b9 mov dword ptr [ebp - 0x14], 0x1040fa60 */
  w32((uint32_t)(EBP + -0x14), (0x1040fa60u));
L_103ec5c0:;
  /* 103ec5c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103ec5c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 103ec5c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103ec5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec5cc je 0x103ec5de */
  if (C.zf) goto L_103ec5de;
  /* 103ec5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 103ec5d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ec5d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ec5d6 call 0x103ede00 */
  push32(0x103ec5dbu); f_103ede00();
  /* 103ec5db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ec5de:;
  /* 103ec5de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec5e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ec5e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 103ec5e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103ec5e9 jmp 0x103ec609 */
  goto L_103ec609;
L_103ec5eb:;
  /* 103ec5eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ec5f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec5f5 push edx */
  push32((uint32_t)(EDX));
  /* 103ec5f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103ec5f9 push eax */
  push32((uint32_t)(EAX));
  /* 103ec5fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ec5fd push ecx */
  push32((uint32_t)(ECX));
  /* 103ec5fe call 0x103edf50 */
  push32(0x103ec603u); f_103edf50();
  /* 103ec603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec606 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ec609:;
  /* 103ec609 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ec60c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec60f je 0x103ec625 */
  if (C.zf) goto L_103ec625;
  /* 103ec611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec614 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ec617 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103ec61a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec61d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103ec620 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ec623 jmp 0x103ec62d */
  goto L_103ec62d;
L_103ec625:;
  /* 103ec625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec628 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_103ec62d:;
  /* 103ec62d pop edi */
  EDI = (pop32());
  /* 103ec62e pop esi */
  ESI = (pop32());
  /* 103ec62f pop ebx */
  EBX = (pop32());
  /* 103ec630 mov esp, ebp */
  ESP = (EBP);
  /* 103ec632 pop ebp */
  EBP = (pop32());
  /* 103ec633 ret  */
  ESPCHK(0x103ec3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x103ec640 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_103ec640(void) {
  FTRACE(0x103ec640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ec640 push ebp */
  push32((uint32_t)(EBP));
  /* 103ec641 mov ebp, esp */
  EBP = (ESP);
  /* 103ec643 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec649 push ebx */
  push32((uint32_t)(EBX));
  /* 103ec64a push esi */
  push32((uint32_t)(ESI));
  /* 103ec64b push edi */
  push32((uint32_t)(EDI));
  /* 103ec64c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ec653 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 103ec65d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_103ec664:;
  /* 103ec664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec667 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103ec669 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 103ec66c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec670 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec673 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec676 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103ec679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec67b je 0x103ed257 */
  if (C.zf) goto L_103ed257;
  /* 103ec681 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec688 jl 0x103ed257 */
  if ((C.sf!=C.of)) goto L_103ed257;
  /* 103ec68e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec692 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec695 jl 0x103ec6b6 */
  if ((C.sf!=C.of)) goto L_103ec6b6;
  /* 103ec697 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec69b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec69e jg 0x103ec6b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ec6b6;
  /* 103ec6a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec6a4 movsx ecx, byte ptr [eax + 0x1040d1e4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1040d1e4))));
  /* 103ec6ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 103ec6ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 103ec6b4 jmp 0x103ec6c0 */
  goto L_103ec6c0;
L_103ec6b6:;
  /* 103ec6b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_103ec6c0:;
  /* 103ec6c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 103ec6c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103ec6c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ec6cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ec6cf movsx edx, byte ptr [ecx + eax*8 + 0x1040d204] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1040d204))));
  /* 103ec6d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103ec6da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103ec6dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ec6e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 103ec6e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec6ed ja 0x103ed252 */
  if ((!C.cf&&!C.zf)) goto L_103ed252;
  /* 103ec6f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 103ec6f9 jmp dword ptr [ecx*4 + 0x103ed264] */
  switch (ECX) {
    case 0: goto L_103ec700;
    case 1: goto L_103ec79a;
    case 2: goto L_103ec7dc;
    case 3: goto L_103ec84b;
    case 4: goto L_103ec8a3;
    case 5: goto L_103ec8b2;
    case 6: goto L_103ec8fe;
    case 7: goto L_103ec991;
    case 8: goto L_103ec828;
    case 9: goto L_103ec833;
    case 10: goto L_103ec81e;
    case 11: goto L_103ec813;
    case 12: goto L_103ec83e;
    case 13: goto L_103ec846;
    default: x86_unimpl("switch@0x103ec6f9 out of table"); return;
  }
L_103ec700:;
  /* 103ec700 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103ec707 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ec70a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103ec710 mov eax, dword ptr [0x1040fc98] */
  EAX = (r32((uint32_t)(0x1040fc98)));
  /* 103ec715 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ec717 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103ec71b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103ec721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ec723 je 0x103ec77d */
  if (C.zf) goto L_103ec77d;
  /* 103ec725 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 103ec72b push edx */
  push32((uint32_t)(EDX));
  /* 103ec72c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec72f push eax */
  push32((uint32_t)(EAX));
  /* 103ec730 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec734 push ecx */
  push32((uint32_t)(ECX));
  /* 103ec735 call 0x103ed370 */
  push32(0x103ec73au); f_103ed370();
  /* 103ec73a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec73d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec740 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103ec742 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 103ec745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec74b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103ec74e:;
  /* 103ec74e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec754 jne 0x103ec777 */
  if (!C.zf) goto L_103ec777;
  /* 103ec756 push 0x1040d284 */
  push32((uint32_t)(0x1040d284u));
  /* 103ec75b push 0 */
  push32((uint32_t)(0x0u));
  /* 103ec75d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 103ec762 push 0x1040d278 */
  push32((uint32_t)(0x1040d278u));
  /* 103ec767 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ec769 call 0x103e4770 */
  push32(0x103ec76eu); f_103e4770();
  /* 103ec76e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec774 jne 0x103ec777 */
  if (!C.zf) goto L_103ec777;
  /* 103ec776 int3  */
  x86_unimpl("int3 @ 0x103ec776");
L_103ec777:;
  /* 103ec777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec77b jne 0x103ec74e */
  if (!C.zf) goto L_103ec74e;
L_103ec77d:;
  /* 103ec77d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 103ec783 push ecx */
  push32((uint32_t)(ECX));
  /* 103ec784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ec787 push edx */
  push32((uint32_t)(EDX));
  /* 103ec788 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec78c push eax */
  push32((uint32_t)(EAX));
  /* 103ec78d call 0x103ed370 */
  push32(0x103ec792u); f_103ed370();
  /* 103ec792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec795 jmp 0x103ed252 */
  goto L_103ed252;
L_103ec79a:;
  /* 103ec79a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103ec7a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ec7a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 103ec7aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 103ec7b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 103ec7b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ec7bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103ec7bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ec7c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 103ec7d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103ec7d7 jmp 0x103ed252 */
  goto L_103ed252;
L_103ec7dc:;
  /* 103ec7dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec7e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 103ec7e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 103ec7ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec7ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 103ec7f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec7fc ja 0x103ec846 */
  if ((!C.cf&&!C.zf)) goto L_103ec846;
  /* 103ec7fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 103ec804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec806 mov al, byte ptr [ecx + 0x103ed29c] */
  AL = (r8((uint32_t)(ECX + 0x103ed29c)));
  /* 103ec80c jmp dword ptr [eax*4 + 0x103ed284] */
  switch (EAX) {
    case 0: goto L_103ec828;
    case 1: goto L_103ec833;
    case 2: goto L_103ec81e;
    case 3: goto L_103ec813;
    case 4: goto L_103ec83e;
    case 5: goto L_103ec846;
    default: x86_unimpl("switch@0x103ec80c out of table"); return;
  }
L_103ec813:;
  /* 103ec813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec816 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec819 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ec81c jmp 0x103ec846 */
  goto L_103ec846;
L_103ec81e:;
  /* 103ec81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec821 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 103ec823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ec826 jmp 0x103ec846 */
  goto L_103ec846;
L_103ec828:;
  /* 103ec828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec82b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103ec82e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ec831 jmp 0x103ec846 */
  goto L_103ec846;
L_103ec833:;
  /* 103ec833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec836 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 103ec839 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ec83c jmp 0x103ec846 */
  goto L_103ec846;
L_103ec83e:;
  /* 103ec83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec841 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 103ec843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ec846:;
  /* 103ec846 jmp 0x103ed252 */
  goto L_103ed252;
L_103ec84b:;
  /* 103ec84b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec84f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec852 jne 0x103ec887 */
  if (!C.zf) goto L_103ec887;
  /* 103ec854 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ec857 push edx */
  push32((uint32_t)(EDX));
  /* 103ec858 call 0x103ed480 */
  push32(0x103ec85du); f_103ed480();
  /* 103ec85d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec860 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 103ec866 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec86d jge 0x103ec885 */
  if ((C.sf==C.of)) goto L_103ec885;
  /* 103ec86f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec872 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103ec874 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ec877 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ec87d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ec87f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_103ec885:;
  /* 103ec885 jmp 0x103ec89e */
  goto L_103ec89e;
L_103ec887:;
  /* 103ec887 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ec88d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ec890 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec894 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 103ec898 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_103ec89e:;
  /* 103ec89e jmp 0x103ed252 */
  goto L_103ed252;
L_103ec8a3:;
  /* 103ec8a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 103ec8ad jmp 0x103ed252 */
  goto L_103ed252;
L_103ec8b2:;
  /* 103ec8b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec8b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec8b9 jne 0x103ec8e2 */
  if (!C.zf) goto L_103ec8e2;
  /* 103ec8bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ec8be push eax */
  push32((uint32_t)(EAX));
  /* 103ec8bf call 0x103ed480 */
  push32(0x103ec8c4u); f_103ed480();
  /* 103ec8c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec8c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 103ec8cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec8d4 jge 0x103ec8e0 */
  if ((C.sf==C.of)) goto L_103ec8e0;
  /* 103ec8d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_103ec8e0:;
  /* 103ec8e0 jmp 0x103ec8f9 */
  goto L_103ec8f9;
L_103ec8e2:;
  /* 103ec8e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ec8e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ec8eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec8ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103ec8f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_103ec8f9:;
  /* 103ec8f9 jmp 0x103ed252 */
  goto L_103ed252;
L_103ec8fe:;
  /* 103ec8fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec902 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 103ec908 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 103ec90e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec911 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 103ec917 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec91e ja 0x103ec98c */
  if ((!C.cf&&!C.zf)) goto L_103ec98c;
  /* 103ec920 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 103ec926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ec928 mov al, byte ptr [ecx + 0x103ed2c1] */
  AL = (r8((uint32_t)(ECX + 0x103ed2c1)));
  /* 103ec92e jmp dword ptr [eax*4 + 0x103ed2ad] */
  switch (EAX) {
    case 0: goto L_103ec940;
    case 1: goto L_103ec979;
    case 2: goto L_103ec935;
    case 3: goto L_103ec983;
    case 4: goto L_103ec98c;
    default: x86_unimpl("switch@0x103ec92e out of table"); return;
  }
L_103ec935:;
  /* 103ec935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec938 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec93b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ec93e jmp 0x103ec98c */
  goto L_103ec98c;
L_103ec940:;
  /* 103ec940 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec943 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ec946 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec949 jne 0x103ec96b */
  if (!C.zf) goto L_103ec96b;
  /* 103ec94b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec94e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103ec952 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec955 jne 0x103ec96b */
  if (!C.zf) goto L_103ec96b;
  /* 103ec957 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ec95a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec95d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103ec960 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec963 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ec966 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ec969 jmp 0x103ec977 */
  goto L_103ec977;
L_103ec96b:;
  /* 103ec96b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 103ec972 jmp 0x103ec700 */
  goto L_103ec700;
L_103ec977:;
  /* 103ec977 jmp 0x103ec98c */
  goto L_103ec98c;
L_103ec979:;
  /* 103ec979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec97c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103ec97e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ec981 jmp 0x103ec98c */
  goto L_103ec98c;
L_103ec983:;
  /* 103ec983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec986 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ec989 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ec98c:;
  /* 103ec98c jmp 0x103ed252 */
  goto L_103ed252;
L_103ec991:;
  /* 103ec991 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ec995 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 103ec99b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 103ec9a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ec9a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 103ec9aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ec9b1 ja 0x103ed077 */
  if ((!C.cf&&!C.zf)) goto L_103ed077;
  /* 103ec9b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 103ec9bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ec9bf mov cl, byte ptr [edx + 0x103ed32c] */
  CL = (r8((uint32_t)(EDX + 0x103ed32c)));
  /* 103ec9c5 jmp dword ptr [ecx*4 + 0x103ed2f0] */
  switch (ECX) {
    case 0: goto L_103ec9cc;
    case 1: goto L_103ecc60;
    case 2: goto L_103ecaf0;
    case 3: goto L_103ecd99;
    case 4: goto L_103eca5b;
    case 5: goto L_103ec9e1;
    case 6: goto L_103ecd6b;
    case 7: goto L_103ecc70;
    case 8: goto L_103ecc15;
    case 9: goto L_103ecde5;
    case 10: goto L_103ecd8f;
    case 11: goto L_103ecb06;
    case 12: goto L_103ecd83;
    case 13: goto L_103ecda5;
    case 14: goto L_103ed077;
    default: x86_unimpl("switch@0x103ec9c5 out of table"); return;
  }
L_103ec9cc:;
  /* 103ec9cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec9cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 103ec9d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ec9d6 jne 0x103ec9e1 */
  if (!C.zf) goto L_103ec9e1;
  /* 103ec9d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec9db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ec9de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ec9e1:;
  /* 103ec9e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ec9e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 103ec9ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ec9ec je 0x103eca27 */
  if (C.zf) goto L_103eca27;
  /* 103ec9ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ec9f1 push eax */
  push32((uint32_t)(EAX));
  /* 103ec9f2 call 0x103ed4c0 */
  push32(0x103ec9f7u); f_103ed4c0();
  /* 103ec9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ec9fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 103ec9fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 103eca02 push ecx */
  push32((uint32_t)(ECX));
  /* 103eca03 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 103eca09 push edx */
  push32((uint32_t)(EDX));
  /* 103eca0a call 0x103ee5a0 */
  push32(0x103eca0fu); f_103ee5a0();
  /* 103eca0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eca12 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103eca15 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eca19 jge 0x103eca25 */
  if ((C.sf==C.of)) goto L_103eca25;
  /* 103eca1b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_103eca25:;
  /* 103eca25 jmp 0x103eca4d */
  goto L_103eca4d;
L_103eca27:;
  /* 103eca27 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103eca2a push eax */
  push32((uint32_t)(EAX));
  /* 103eca2b call 0x103ed480 */
  push32(0x103eca30u); f_103ed480();
  /* 103eca30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eca33 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 103eca3a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 103eca40 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 103eca46 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_103eca4d:;
  /* 103eca4d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 103eca53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103eca56 jmp 0x103ed077 */
  goto L_103ed077;
L_103eca5b:;
  /* 103eca5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103eca5e push eax */
  push32((uint32_t)(EAX));
  /* 103eca5f call 0x103ed480 */
  push32(0x103eca64u); f_103ed480();
  /* 103eca64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eca67 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 103eca6d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eca74 je 0x103eca82 */
  if (C.zf) goto L_103eca82;
  /* 103eca76 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103eca7c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eca80 jne 0x103eca9c */
  if (!C.zf) goto L_103eca9c;
L_103eca82:;
  /* 103eca82 mov edx, dword ptr [0x1040ffb0] */
  EDX = (r32((uint32_t)(0x1040ffb0)));
  /* 103eca88 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103eca8b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eca8e push eax */
  push32((uint32_t)(EAX));
  /* 103eca8f call 0x103e84e0 */
  push32(0x103eca94u); f_103e84e0();
  /* 103eca94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eca97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103eca9a jmp 0x103ecaeb */
  goto L_103ecaeb;
L_103eca9c:;
  /* 103eca9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eca9f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 103ecaa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ecaa7 je 0x103ecacc */
  if (C.zf) goto L_103ecacc;
  /* 103ecaa9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ecaaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103ecab2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ecab5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ecabb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 103ecabe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ecac0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ecac3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 103ecaca jmp 0x103ecaeb */
  goto L_103ecaeb;
L_103ecacc:;
  /* 103ecacc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103ecad3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ecad9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ecadc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103ecadf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ecae5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 103ecae8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103ecaeb:;
  /* 103ecaeb jmp 0x103ed077 */
  goto L_103ed077;
L_103ecaf0:;
  /* 103ecaf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecaf3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 103ecaf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ecafb jne 0x103ecb06 */
  if (!C.zf) goto L_103ecb06;
  /* 103ecafd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecb00 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ecb03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ecb06:;
  /* 103ecb06 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecb0d jne 0x103ecb1b */
  if (!C.zf) goto L_103ecb1b;
  /* 103ecb0f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 103ecb19 jmp 0x103ecb27 */
  goto L_103ecb27;
L_103ecb1b:;
  /* 103ecb1b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ecb21 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_103ecb27:;
  /* 103ecb27 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 103ecb2d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 103ecb33 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ecb36 push edx */
  push32((uint32_t)(EDX));
  /* 103ecb37 call 0x103ed480 */
  push32(0x103ecb3cu); f_103ed480();
  /* 103ecb3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecb3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ecb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecb45 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 103ecb4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecb4c je 0x103ecbb6 */
  if (C.zf) goto L_103ecbb6;
  /* 103ecb4e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecb52 jne 0x103ecb5d */
  if (!C.zf) goto L_103ecb5d;
  /* 103ecb54 mov ecx, dword ptr [0x1040ffb4] */
  ECX = (r32((uint32_t)(0x1040ffb4)));
  /* 103ecb5a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103ecb5d:;
  /* 103ecb5d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 103ecb64 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecb67 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_103ecb6d:;
  /* 103ecb6d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ecb73 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ecb79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ecb7c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 103ecb82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecb84 je 0x103ecba6 */
  if (C.zf) goto L_103ecba6;
  /* 103ecb86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ecb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ecb8e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 103ecb91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecb93 je 0x103ecba6 */
  if (C.zf) goto L_103ecba6;
  /* 103ecb95 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ecb9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecb9e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 103ecba4 jmp 0x103ecb6d */
  goto L_103ecb6d;
L_103ecba6:;
  /* 103ecba6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ecbac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ecbaf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ecbb1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ecbb4 jmp 0x103ecc10 */
  goto L_103ecc10;
L_103ecbb6:;
  /* 103ecbb6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecbba jne 0x103ecbc4 */
  if (!C.zf) goto L_103ecbc4;
  /* 103ecbbc mov eax, dword ptr [0x1040ffb0] */
  EAX = (r32((uint32_t)(0x1040ffb0)));
  /* 103ecbc1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_103ecbc4:;
  /* 103ecbc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecbc7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_103ecbcd:;
  /* 103ecbcd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ecbd3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ecbd9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ecbdc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 103ecbe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecbe4 je 0x103ecc04 */
  if (C.zf) goto L_103ecc04;
  /* 103ecbe6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ecbec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ecbef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecbf1 je 0x103ecc04 */
  if (C.zf) goto L_103ecc04;
  /* 103ecbf3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ecbf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecbfc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 103ecc02 jmp 0x103ecbcd */
  goto L_103ecbcd;
L_103ecc04:;
  /* 103ecc04 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ecc0a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ecc0d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_103ecc10:;
  /* 103ecc10 jmp 0x103ed077 */
  goto L_103ed077;
L_103ecc15:;
  /* 103ecc15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ecc18 push edx */
  push32((uint32_t)(EDX));
  /* 103ecc19 call 0x103ed480 */
  push32(0x103ecc1eu); f_103ed480();
  /* 103ecc1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecc21 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 103ecc27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecc2a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103ecc2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecc2f je 0x103ecc43 */
  if (C.zf) goto L_103ecc43;
  /* 103ecc31 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 103ecc37 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 103ecc3e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 103ecc41 jmp 0x103ecc51 */
  goto L_103ecc51;
L_103ecc43:;
  /* 103ecc43 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 103ecc49 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 103ecc4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_103ecc51:;
  /* 103ecc51 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 103ecc5b jmp 0x103ed077 */
  goto L_103ed077;
L_103ecc60:;
  /* 103ecc60 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103ecc67 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 103ecc6a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 103ecc6d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_103ecc70:;
  /* 103ecc70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecc73 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 103ecc75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ecc78 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 103ecc7e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103ecc81 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecc88 jge 0x103ecc96 */
  if ((C.sf==C.of)) goto L_103ecc96;
  /* 103ecc8a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 103ecc94 jmp 0x103eccb2 */
  goto L_103eccb2;
L_103ecc96:;
  /* 103ecc96 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecc9d jne 0x103eccb2 */
  if (!C.zf) goto L_103eccb2;
  /* 103ecc9f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ecca3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecca6 jne 0x103eccb2 */
  if (!C.zf) goto L_103eccb2;
  /* 103ecca8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_103eccb2:;
  /* 103eccb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103eccb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eccb8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 103eccbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103eccbe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eccc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103eccc3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103eccc6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 103ecccc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 103eccd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eccd5 push ecx */
  push32((uint32_t)(ECX));
  /* 103eccd6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 103eccdc push edx */
  push32((uint32_t)(EDX));
  /* 103eccdd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ecce1 push eax */
  push32((uint32_t)(EAX));
  /* 103ecce2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecce5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ecce6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 103eccec push edx */
  push32((uint32_t)(EDX));
  /* 103ecced call dword ptr [0x104103a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104103a0))), 0x103eccf3u);
  /* 103eccf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eccf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eccf9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103eccfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecd00 je 0x103ecd18 */
  if (C.zf) goto L_103ecd18;
  /* 103ecd02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecd09 jne 0x103ecd18 */
  if (!C.zf) goto L_103ecd18;
  /* 103ecd0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecd0e push ecx */
  push32((uint32_t)(ECX));
  /* 103ecd0f call dword ptr [0x104103ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104103ac))), 0x103ecd15u);
  /* 103ecd15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ecd18:;
  /* 103ecd18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ecd1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecd1f jne 0x103ecd3a */
  if (!C.zf) goto L_103ecd3a;
  /* 103ecd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecd24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103ecd29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecd2b jne 0x103ecd3a */
  if (!C.zf) goto L_103ecd3a;
  /* 103ecd2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecd30 push ecx */
  push32((uint32_t)(ECX));
  /* 103ecd31 call dword ptr [0x104103a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104103a4))), 0x103ecd37u);
  /* 103ecd37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ecd3a:;
  /* 103ecd3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecd3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103ecd40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecd43 jne 0x103ecd57 */
  if (!C.zf) goto L_103ecd57;
  /* 103ecd45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecd48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ecd4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ecd4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecd51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecd54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103ecd57:;
  /* 103ecd57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ecd5a push eax */
  push32((uint32_t)(EAX));
  /* 103ecd5b call 0x103e84e0 */
  push32(0x103ecd60u); f_103e84e0();
  /* 103ecd60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecd63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103ecd66 jmp 0x103ed077 */
  goto L_103ed077;
L_103ecd6b:;
  /* 103ecd6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecd6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 103ecd71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ecd74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 103ecd7e jmp 0x103ece05 */
  goto L_103ece05;
L_103ecd83:;
  /* 103ecd83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 103ecd8d jmp 0x103ece05 */
  goto L_103ece05;
L_103ecd8f:;
  /* 103ecd8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_103ecd99:;
  /* 103ecd99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 103ecda3 jmp 0x103ecdaf */
  goto L_103ecdaf;
L_103ecda5:;
  /* 103ecda5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_103ecdaf:;
  /* 103ecdaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 103ecdb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecdbc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 103ecdc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecdc4 je 0x103ecde3 */
  if (C.zf) goto L_103ecde3;
  /* 103ecdc6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 103ecdcd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 103ecdd3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecdd6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 103ecddc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_103ecde3:;
  /* 103ecde3 jmp 0x103ece05 */
  goto L_103ece05;
L_103ecde5:;
  /* 103ecde5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 103ecdef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecdf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 103ecdf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ecdfa je 0x103ece05 */
  if (C.zf) goto L_103ece05;
  /* 103ecdfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecdff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ece02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ece05:;
  /* 103ece05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ece08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103ece0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ece0f je 0x103ece2e */
  if (C.zf) goto L_103ece2e;
  /* 103ece11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ece14 push ecx */
  push32((uint32_t)(ECX));
  /* 103ece15 call 0x103ed4a0 */
  push32(0x103ece1au); f_103ed4a0();
  /* 103ece1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ece1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ece23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ece29 jmp 0x103ecebf */
  goto L_103ecebf;
L_103ece2e:;
  /* 103ece2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ece31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 103ece34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ece36 je 0x103ece80 */
  if (C.zf) goto L_103ece80;
  /* 103ece38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ece3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ece3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ece40 je 0x103ece60 */
  if (C.zf) goto L_103ece60;
  /* 103ece42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ece45 push ecx */
  push32((uint32_t)(ECX));
  /* 103ece46 call 0x103ed480 */
  push32(0x103ece4bu); f_103ed480();
  /* 103ece4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ece4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 103ece51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ece52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ece58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ece5e jmp 0x103ece7e */
  goto L_103ece7e;
L_103ece60:;
  /* 103ece60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ece63 push edx */
  push32((uint32_t)(EDX));
  /* 103ece64 call 0x103ed480 */
  push32(0x103ece69u); f_103ed480();
  /* 103ece69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ece6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ece71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ece72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ece78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_103ece7e:;
  /* 103ece7e jmp 0x103ecebf */
  goto L_103ecebf;
L_103ece80:;
  /* 103ece80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ece83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ece86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ece88 je 0x103ecea5 */
  if (C.zf) goto L_103ecea5;
  /* 103ece8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ece8d push ecx */
  push32((uint32_t)(ECX));
  /* 103ece8e call 0x103ed480 */
  push32(0x103ece93u); f_103ed480();
  /* 103ece93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ece96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ece97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ece9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ecea3 jmp 0x103ecebf */
  goto L_103ecebf;
L_103ecea5:;
  /* 103ecea5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ecea8 push edx */
  push32((uint32_t)(EDX));
  /* 103ecea9 call 0x103ed480 */
  push32(0x103eceaeu); f_103ed480();
  /* 103eceae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eceb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103eceb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103eceb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_103ecebf:;
  /* 103ecebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecec2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 103ecec5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecec7 je 0x103ecf07 */
  if (C.zf) goto L_103ecf07;
  /* 103ecec9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eced0 jg 0x103ecf07 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ecf07;
  /* 103eced2 jl 0x103ecedd */
  if ((C.sf!=C.of)) goto L_103ecedd;
  /* 103eced4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecedb jae 0x103ecf07 */
  if (!C.cf) goto L_103ecf07;
L_103ecedd:;
  /* 103ecedd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 103ecee3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ecee5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 103eceeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eceee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ecef0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ecef6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 103ecefc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eceff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ecf02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ecf05 jmp 0x103ecf1f */
  goto L_103ecf1f;
L_103ecf07:;
  /* 103ecf07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 103ecf0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ecf13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 103ecf19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_103ecf1f:;
  /* 103ecf1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecf22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103ecf28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecf2a jne 0x103ecf47 */
  if (!C.zf) goto L_103ecf47;
  /* 103ecf2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ecf32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ecf38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 103ecf3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ecf41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_103ecf47:;
  /* 103ecf47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ecf4e jge 0x103ecf5c */
  if ((C.sf==C.of)) goto L_103ecf5c;
  /* 103ecf50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 103ecf5a jmp 0x103ecf65 */
  goto L_103ecf65;
L_103ecf5c:;
  /* 103ecf5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ecf5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 103ecf62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ecf65:;
  /* 103ecf65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ecf6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 103ecf71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ecf73 jne 0x103ecf7c */
  if (!C.zf) goto L_103ecf7c;
  /* 103ecf75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103ecf7c:;
  /* 103ecf7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 103ecf7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103ecf82:;
  /* 103ecf82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ecf88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ecf8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ecf91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 103ecf97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ecf99 jg 0x103ecfaf */
  if ((!C.zf&&C.sf==C.of)) goto L_103ecfaf;
  /* 103ecf9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ecfa1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 103ecfa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ecfa9 je 0x103ed030 */
  if (C.zf) goto L_103ed030;
L_103ecfaf:;
  /* 103ecfaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 103ecfb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ecfb6 push edx */
  push32((uint32_t)(EDX));
  /* 103ecfb7 push eax */
  push32((uint32_t)(EAX));
  /* 103ecfb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ecfbe push edx */
  push32((uint32_t)(EDX));
  /* 103ecfbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ecfc5 push eax */
  push32((uint32_t)(EAX));
  /* 103ecfc6 call 0x103ec340 */
  push32(0x103ecfcbu); f_103ec340();
  /* 103ecfcb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ecfce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 103ecfd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 103ecfda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ecfdb push edx */
  push32((uint32_t)(EDX));
  /* 103ecfdc push eax */
  push32((uint32_t)(EAX));
  /* 103ecfdd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ecfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ecfe4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ecfea push edx */
  push32((uint32_t)(EDX));
  /* 103ecfeb call 0x103ec2d0 */
  push32(0x103ecff0u); f_103ec2d0();
  /* 103ecff0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ecff6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 103ecffc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed003 jle 0x103ed017 */
  if ((C.zf||C.sf!=C.of)) goto L_103ed017;
  /* 103ed005 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 103ed00b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed011 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_103ed017:;
  /* 103ed017 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed01a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 103ed020 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 103ed022 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed025 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed028 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ed02b jmp 0x103ecf82 */
  goto L_103ecf82;
L_103ed030:;
  /* 103ed030 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 103ed033 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed036 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103ed039 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed03c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed03f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103ed042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed045 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 103ed04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed04c je 0x103ed077 */
  if (C.zf) goto L_103ed077;
  /* 103ed04e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed051 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ed054 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed057 jne 0x103ed05f */
  if (!C.zf) goto L_103ed05f;
  /* 103ed059 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed05d jne 0x103ed077 */
  if (!C.zf) goto L_103ed077;
L_103ed05f:;
  /* 103ed05f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed062 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed065 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ed068 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed06b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 103ed06e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ed071 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed074 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_103ed077:;
  /* 103ed077 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed07e jne 0x103ed252 */
  if (!C.zf) goto L_103ed252;
  /* 103ed084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed087 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ed08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed08c je 0x103ed0dd */
  if (C.zf) goto L_103ed0dd;
  /* 103ed08e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed091 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 103ed097 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ed099 je 0x103ed0ab */
  if (C.zf) goto L_103ed0ab;
  /* 103ed09b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 103ed0a2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103ed0a9 jmp 0x103ed0dd */
  goto L_103ed0dd;
L_103ed0ab:;
  /* 103ed0ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed0ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed0b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ed0b3 je 0x103ed0c5 */
  if (C.zf) goto L_103ed0c5;
  /* 103ed0b5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 103ed0bc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103ed0c3 jmp 0x103ed0dd */
  goto L_103ed0dd;
L_103ed0c5:;
  /* 103ed0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed0c8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 103ed0cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed0cd je 0x103ed0dd */
  if (C.zf) goto L_103ed0dd;
  /* 103ed0cf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 103ed0d6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_103ed0dd:;
  /* 103ed0dd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ed0e3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed0e6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed0e9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 103ed0ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed0f2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 103ed0f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ed0f7 jne 0x103ed115 */
  if (!C.zf) goto L_103ed115;
  /* 103ed0f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ed0ff push eax */
  push32((uint32_t)(EAX));
  /* 103ed100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed103 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed104 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103ed10a push edx */
  push32((uint32_t)(EDX));
  /* 103ed10b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103ed10d call 0x103ed3f0 */
  push32(0x103ed112u); f_103ed3f0();
  /* 103ed112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ed115:;
  /* 103ed115 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ed11b push eax */
  push32((uint32_t)(EAX));
  /* 103ed11c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed11f push ecx */
  push32((uint32_t)(ECX));
  /* 103ed120 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ed123 push edx */
  push32((uint32_t)(EDX));
  /* 103ed124 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 103ed12a push eax */
  push32((uint32_t)(EAX));
  /* 103ed12b call 0x103ed430 */
  push32(0x103ed130u); f_103ed430();
  /* 103ed130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed136 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103ed139 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ed13b je 0x103ed163 */
  if (C.zf) goto L_103ed163;
  /* 103ed13d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed140 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed143 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ed145 jne 0x103ed163 */
  if (!C.zf) goto L_103ed163;
  /* 103ed147 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ed14d push eax */
  push32((uint32_t)(EAX));
  /* 103ed14e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed151 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed152 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103ed158 push edx */
  push32((uint32_t)(EDX));
  /* 103ed159 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103ed15b call 0x103ed3f0 */
  push32(0x103ed160u); f_103ed3f0();
  /* 103ed160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ed163:;
  /* 103ed163 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed167 je 0x103ed211 */
  if (C.zf) goto L_103ed211;
  /* 103ed16d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed171 jle 0x103ed211 */
  if ((C.zf||C.sf!=C.of)) goto L_103ed211;
  /* 103ed177 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed17a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 103ed180 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ed183 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_103ed189:;
  /* 103ed189 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 103ed18f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 103ed195 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed198 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 103ed19e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ed1a0 je 0x103ed20f */
  if (C.zf) goto L_103ed20f;
  /* 103ed1a2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 103ed1a8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103ed1ab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 103ed1b2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 103ed1b9 push eax */
  push32((uint32_t)(EAX));
  /* 103ed1ba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 103ed1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed1c1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 103ed1c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed1ca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 103ed1d0 call 0x103ee5a0 */
  push32(0x103ed1d5u); f_103ee5a0();
  /* 103ed1d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed1d8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 103ed1de cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed1e5 jg 0x103ed1e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ed1e9;
  /* 103ed1e7 jmp 0x103ed20f */
  goto L_103ed20f;
L_103ed1e9:;
  /* 103ed1e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ed1ef push eax */
  push32((uint32_t)(EAX));
  /* 103ed1f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed1f4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 103ed1fa push edx */
  push32((uint32_t)(EDX));
  /* 103ed1fb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 103ed201 push eax */
  push32((uint32_t)(EAX));
  /* 103ed202 call 0x103ed430 */
  push32(0x103ed207u); f_103ed430();
  /* 103ed207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed20a jmp 0x103ed189 */
  goto L_103ed189;
L_103ed20f:;
  /* 103ed20f jmp 0x103ed22c */
  goto L_103ed22c;
L_103ed211:;
  /* 103ed211 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 103ed217 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed21b push edx */
  push32((uint32_t)(EDX));
  /* 103ed21c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ed21f push eax */
  push32((uint32_t)(EAX));
  /* 103ed220 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed223 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed224 call 0x103ed430 */
  push32(0x103ed229u); f_103ed430();
  /* 103ed229 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ed22c:;
  /* 103ed22c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed22f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ed234 je 0x103ed252 */
  if (C.zf) goto L_103ed252;
  /* 103ed236 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ed23c push eax */
  push32((uint32_t)(EAX));
  /* 103ed23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed240 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed241 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103ed247 push edx */
  push32((uint32_t)(EDX));
  /* 103ed248 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103ed24a call 0x103ed3f0 */
  push32(0x103ed24fu); f_103ed3f0();
  /* 103ed24f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ed252:;
  /* 103ed252 jmp 0x103ec664 */
  goto L_103ec664;
L_103ed257:;
  /* 103ed257 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 103ed25d pop edi */
  EDI = (pop32());
  /* 103ed25e pop esi */
  ESI = (pop32());
  /* 103ed25f pop ebx */
  EBX = (pop32());
  /* 103ed260 mov esp, ebp */
  ESP = (EBP);
  /* 103ed262 pop ebp */
  EBP = (pop32());
  /* 103ed263 ret  */
  ESPCHK(0x103ec640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x103ed370 (119 bytes, 44 insns) */
void f_103ed370(void) {
  FTRACE(0x103ed370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed370 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed371 mov ebp, esp */
  EBP = (ESP);
  /* 103ed373 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed377 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ed37a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed37d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed380 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103ed383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed386 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed38a jl 0x103ed3b2 */
  if ((C.sf!=C.of)) goto L_103ed3b2;
  /* 103ed38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed38f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ed391 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103ed394 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103ed396 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 103ed39a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103ed3a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ed3a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed3a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103ed3a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed3ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed3ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103ed3b0 jmp 0x103ed3c5 */
  goto L_103ed3c5;
L_103ed3b2:;
  /* 103ed3b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed3b5 push edx */
  push32((uint32_t)(EDX));
  /* 103ed3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed3b9 push eax */
  push32((uint32_t)(EAX));
  /* 103ed3ba call 0x103ec3c0 */
  push32(0x103ed3bfu); f_103ec3c0();
  /* 103ed3bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed3c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ed3c5:;
  /* 103ed3c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed3c9 jne 0x103ed3d6 */
  if (!C.zf) goto L_103ed3d6;
  /* 103ed3cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed3ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103ed3d4 jmp 0x103ed3e3 */
  goto L_103ed3e3;
L_103ed3d6:;
  /* 103ed3d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed3d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103ed3db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed3de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed3e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103ed3e3:;
  /* 103ed3e3 mov esp, ebp */
  ESP = (EBP);
  /* 103ed3e5 pop ebp */
  EBP = (pop32());
  /* 103ed3e6 ret  */
  ESPCHK(0x103ed370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x103ed3f0 (53 bytes, 23 insns) */
void f_103ed3f0(void) {
  FTRACE(0x103ed3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed3f1 mov ebp, esp */
  EBP = (ESP);
L_103ed3f3:;
  /* 103ed3f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed3f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed3f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed3fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103ed3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed401 jle 0x103ed423 */
  if ((C.zf||C.sf!=C.of)) goto L_103ed423;
  /* 103ed403 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ed406 push edx */
  push32((uint32_t)(EDX));
  /* 103ed407 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed40a push eax */
  push32((uint32_t)(EAX));
  /* 103ed40b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed40e push ecx */
  push32((uint32_t)(ECX));
  /* 103ed40f call 0x103ed370 */
  push32(0x103ed414u); f_103ed370();
  /* 103ed414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed417 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ed41a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed41d jne 0x103ed421 */
  if (!C.zf) goto L_103ed421;
  /* 103ed41f jmp 0x103ed423 */
  goto L_103ed423;
L_103ed421:;
  /* 103ed421 jmp 0x103ed3f3 */
  goto L_103ed3f3;
L_103ed423:;
  /* 103ed423 pop ebp */
  EBP = (pop32());
  /* 103ed424 ret  */
  ESPCHK(0x103ed3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x103ed430 (74 bytes, 31 insns) */
void f_103ed430(void) {
  FTRACE(0x103ed430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed430 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed431 mov ebp, esp */
  EBP = (ESP);
  /* 103ed433 push ecx */
  push32((uint32_t)(ECX));
L_103ed434:;
  /* 103ed434 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed437 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed43a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed43d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103ed440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed442 jle 0x103ed476 */
  if ((C.zf||C.sf!=C.of)) goto L_103ed476;
  /* 103ed444 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ed447 push edx */
  push32((uint32_t)(EDX));
  /* 103ed448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed44b push eax */
  push32((uint32_t)(EAX));
  /* 103ed44c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed44f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ed452 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ed455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed458 push eax */
  push32((uint32_t)(EAX));
  /* 103ed459 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed45c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed45f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103ed462 call 0x103ed370 */
  push32(0x103ed467u); f_103ed370();
  /* 103ed467 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed46a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ed46d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed470 jne 0x103ed474 */
  if (!C.zf) goto L_103ed474;
  /* 103ed472 jmp 0x103ed476 */
  goto L_103ed476;
L_103ed474:;
  /* 103ed474 jmp 0x103ed434 */
  goto L_103ed434;
L_103ed476:;
  /* 103ed476 mov esp, ebp */
  ESP = (EBP);
  /* 103ed478 pop ebp */
  EBP = (pop32());
  /* 103ed479 ret  */
  ESPCHK(0x103ed430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x103ed480 (26 bytes, 12 insns) */
void f_103ed480(void) {
  FTRACE(0x103ed480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed480 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed481 mov ebp, esp */
  EBP = (ESP);
  /* 103ed483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed486 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed488 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed48e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103ed490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed495 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103ed498 pop ebp */
  EBP = (pop32());
  /* 103ed499 ret  */
  ESPCHK(0x103ed480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x103ed4a0 (31 bytes, 14 insns) */
void f_103ed4a0(void) {
  FTRACE(0x103ed4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed4a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ed4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed4a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed4ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103ed4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed4b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed4b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103ed4ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ed4bd pop ebp */
  EBP = (pop32());
  /* 103ed4be ret  */
  ESPCHK(0x103ed4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x103ed4c0 (27 bytes, 12 insns) */
void f_103ed4c0(void) {
  FTRACE(0x103ed4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed4c1 mov ebp, esp */
  EBP = (ESP);
  /* 103ed4c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed4c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103ed4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103ed4d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 103ed4d9 pop ebp */
  EBP = (pop32());
  /* 103ed4da ret  */
  ESPCHK(0x103ed4c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x103ed4e0 (145 bytes, 42 insns) */
void f_103ed4e0(void) {
  FTRACE(0x103ed4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed4e1 mov ebp, esp */
  EBP = (ESP);
  /* 103ed4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed4e4 call 0x103ed590 */
  push32(0x103ed4e9u); f_103ed590();
  /* 103ed4e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed4ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103ed4ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ed4f5 jmp 0x103ed500 */
  goto L_103ed500;
L_103ed4f7:;
  /* 103ed4f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed4fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed4fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ed500:;
  /* 103ed500 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed504 jae 0x103ed52a */
  if (!C.cf) goto L_103ed52a;
  /* 103ed506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed50c cmp ecx, dword ptr [eax*8 + 0x1040ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1040ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed513 jne 0x103ed528 */
  if (!C.zf) goto L_103ed528;
  /* 103ed515 call 0x103ed580 */
  push32(0x103ed51au); f_103ed580();
  /* 103ed51a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ed51d mov ecx, dword ptr [edx*8 + 0x1040ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1040ffbc)));
  /* 103ed524 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103ed526 jmp 0x103ed56d */
  goto L_103ed56d;
L_103ed528:;
  /* 103ed528 jmp 0x103ed4f7 */
  goto L_103ed4f7;
L_103ed52a:;
  /* 103ed52a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed52e jb 0x103ed543 */
  if (C.cf) goto L_103ed543;
  /* 103ed530 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed534 ja 0x103ed543 */
  if ((!C.cf&&!C.zf)) goto L_103ed543;
  /* 103ed536 call 0x103ed580 */
  push32(0x103ed53bu); f_103ed580();
  /* 103ed53b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 103ed541 jmp 0x103ed56d */
  goto L_103ed56d;
L_103ed543:;
  /* 103ed543 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed54a jb 0x103ed562 */
  if (C.cf) goto L_103ed562;
  /* 103ed54c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed553 ja 0x103ed562 */
  if ((!C.cf&&!C.zf)) goto L_103ed562;
  /* 103ed555 call 0x103ed580 */
  push32(0x103ed55au); f_103ed580();
  /* 103ed55a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 103ed560 jmp 0x103ed56d */
  goto L_103ed56d;
L_103ed562:;
  /* 103ed562 call 0x103ed580 */
  push32(0x103ed567u); f_103ed580();
  /* 103ed567 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_103ed56d:;
  /* 103ed56d mov esp, ebp */
  ESP = (EBP);
  /* 103ed56f pop ebp */
  EBP = (pop32());
  /* 103ed570 ret  */
  ESPCHK(0x103ed4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x103ed580 (13 bytes, 6 insns) */
void f_103ed580(void) {
  FTRACE(0x103ed580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed580 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed581 mov ebp, esp */
  EBP = (ESP);
  /* 103ed583 call 0x103e50f0 */
  push32(0x103ed588u); f_103e50f0();
  /* 103ed588 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed58b pop ebp */
  EBP = (pop32());
  /* 103ed58c ret  */
  ESPCHK(0x103ed580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x103ed590 (13 bytes, 6 insns) */
void f_103ed590(void) {
  FTRACE(0x103ed590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed590 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed591 mov ebp, esp */
  EBP = (ESP);
  /* 103ed593 call 0x103e50f0 */
  push32(0x103ed598u); f_103e50f0();
  /* 103ed598 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed59b pop ebp */
  EBP = (pop32());
  /* 103ed59c ret  */
  ESPCHK(0x103ed590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5a0 @ 0x103ed5a0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_103ed5a0(void) {
  FTRACE(0x103ed5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed5a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ed5a3 push edi */
  push32((uint32_t)(EDI));
  /* 103ed5a4 push esi */
  push32((uint32_t)(ESI));
  /* 103ed5a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed5a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed5ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed5ae mov eax, ecx */
  EAX = (ECX);
  /* 103ed5b0 mov edx, ecx */
  EDX = (ECX);
  /* 103ed5b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed5b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed5b6 jbe 0x103ed5c0 */
  if ((C.cf||C.zf)) goto L_103ed5c0;
  /* 103ed5b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed5ba jb 0x103ed738 */
  if (C.cf) goto L_103ed738;
L_103ed5c0:;
  /* 103ed5c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ed5c6 jne 0x103ed5dc */
  if (!C.zf) goto L_103ed5dc;
  /* 103ed5c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed5cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed5ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed5d1 jb 0x103ed5fc */
  if (C.cf) goto L_103ed5fc;
  /* 103ed5d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed5d5 jmp dword ptr [edx*4 + 0x103ed6e8] */
  switch (EDX) {
    case 0: goto L_103ed6f8;
    case 1: goto L_103ed700;
    case 2: goto L_103ed70c;
    case 3: goto L_103ed720;
    default: x86_unimpl("switch@0x103ed5d5 out of table"); return;
  }
L_103ed5dc:;
  /* 103ed5dc mov eax, edi */
  EAX = (EDI);
  /* 103ed5de mov edx, 3 */
  EDX = (0x3u);
  /* 103ed5e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed5e6 jb 0x103ed5f4 */
  if (C.cf) goto L_103ed5f4;
  /* 103ed5e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ed5eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed5ed jmp dword ptr [eax*4 + 0x103ed600] */
  switch (EAX) {
    case 1: goto L_103ed610;
    case 2: goto L_103ed63c;
    case 3: goto L_103ed660;
    default: x86_unimpl("switch@0x103ed5ed out of table"); return;
  }
L_103ed5f4:;
  /* 103ed5f4 jmp dword ptr [ecx*4 + 0x103ed6f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103ed6f8)))); return;
  /* 103ed5fb nop  */
  /* nop */
L_103ed5fc:;
  /* 103ed5fc jmp dword ptr [ecx*4 + 0x103ed67c] */
  switch (ECX) {
    case 0: goto L_103ed6df;
    case 1: goto L_103ed6cc;
    case 2: goto L_103ed6c4;
    case 3: goto L_103ed6bc;
    case 4: goto L_103ed6b4;
    case 5: goto L_103ed6ac;
    case 6: goto L_103ed6a4;
    case 7: goto L_103ed69c;
    default: x86_unimpl("switch@0x103ed5fc out of table"); return;
  }
  /* 103ed603 nop  */
  /* nop */
L_103ed610:;
  /* 103ed610 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed612 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed614 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed616 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed619 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed61c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed61f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed622 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed625 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed628 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed62b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed62e jb 0x103ed5fc */
  if (C.cf) goto L_103ed5fc;
  /* 103ed630 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed632 jmp dword ptr [edx*4 + 0x103ed6e8] */
  switch (EDX) {
    case 0: goto L_103ed6f8;
    case 1: goto L_103ed700;
    case 2: goto L_103ed70c;
    case 3: goto L_103ed720;
    default: x86_unimpl("switch@0x103ed632 out of table"); return;
  }
  /* 103ed639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed63c:;
  /* 103ed63c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed63e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed640 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed642 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed645 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed648 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed64b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed64e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed651 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed654 jb 0x103ed5fc */
  if (C.cf) goto L_103ed5fc;
  /* 103ed656 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed658 jmp dword ptr [edx*4 + 0x103ed6e8] */
  switch (EDX) {
    case 0: goto L_103ed6f8;
    case 1: goto L_103ed700;
    case 2: goto L_103ed70c;
    case 3: goto L_103ed720;
    default: x86_unimpl("switch@0x103ed658 out of table"); return;
  }
  /* 103ed65f nop  */
  /* nop */
L_103ed660:;
  /* 103ed660 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed662 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed664 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103ed667 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed66a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103ed66b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed66e jb 0x103ed5fc */
  if (C.cf) goto L_103ed5fc;
  /* 103ed670 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed672 jmp dword ptr [edx*4 + 0x103ed6e8] */
  switch (EDX) {
    case 0: goto L_103ed6f8;
    case 1: goto L_103ed700;
    case 2: goto L_103ed70c;
    case 3: goto L_103ed720;
    default: x86_unimpl("switch@0x103ed672 out of table"); return;
  }
  /* 103ed679 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed69c:;
  /* 103ed69c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 103ed6a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_103ed6a4:;
  /* 103ed6a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 103ed6a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_103ed6ac:;
  /* 103ed6ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103ed6b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103ed6b4:;
  /* 103ed6b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103ed6b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103ed6bc:;
  /* 103ed6bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103ed6c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103ed6c4:;
  /* 103ed6c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103ed6c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103ed6cc:;
  /* 103ed6cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103ed6d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103ed6d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ed6db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed6dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ed6df:;
  /* 103ed6df jmp dword ptr [edx*4 + 0x103ed6e8] */
  switch (EDX) {
    case 0: goto L_103ed6f8;
    case 1: goto L_103ed700;
    case 2: goto L_103ed70c;
    case 3: goto L_103ed720;
    default: x86_unimpl("switch@0x103ed6df out of table"); return;
  }
  /* 103ed6e6 mov edi, edi */
  EDI = (EDI);
L_103ed6f8:;
  /* 103ed6f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed6fb pop esi */
  ESI = (pop32());
  /* 103ed6fc pop edi */
  EDI = (pop32());
  /* 103ed6fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed6fe ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed6ff nop  */
  /* nop */
L_103ed700:;
  /* 103ed700 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed702 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed707 pop esi */
  ESI = (pop32());
  /* 103ed708 pop edi */
  EDI = (pop32());
  /* 103ed709 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed70a ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed70b nop  */
  /* nop */
L_103ed70c:;
  /* 103ed70c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed70e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed710 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed713 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed719 pop esi */
  ESI = (pop32());
  /* 103ed71a pop edi */
  EDI = (pop32());
  /* 103ed71b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed71c ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed71d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed720:;
  /* 103ed720 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ed722 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ed724 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed727 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed72a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed72d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed733 pop esi */
  ESI = (pop32());
  /* 103ed734 pop edi */
  EDI = (pop32());
  /* 103ed735 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed736 ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed737 nop  */
  /* nop */
L_103ed738:;
  /* 103ed738 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103ed73c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103ed740 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ed746 jne 0x103ed76c */
  if (!C.zf) goto L_103ed76c;
  /* 103ed748 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed74b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed74e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed751 jb 0x103ed760 */
  if (C.cf) goto L_103ed760;
  /* 103ed753 std  */
  C.df=1;
  /* 103ed754 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed756 cld  */
  C.df=0;
  /* 103ed757 jmp dword ptr [edx*4 + 0x103ed880] */
  switch (EDX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed757 out of table"); return;
  }
  /* 103ed75e mov edi, edi */
  EDI = (EDI);
L_103ed760:;
  /* 103ed760 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ed762 jmp dword ptr [ecx*4 + 0x103ed830] */
  switch (ECX) {
    case 0: goto L_103ed877;
    default: x86_unimpl("switch@0x103ed762 out of table"); return;
  }
  /* 103ed769 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed76c:;
  /* 103ed76c mov eax, edi */
  EAX = (EDI);
  /* 103ed76e mov edx, 3 */
  EDX = (0x3u);
  /* 103ed773 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed776 jb 0x103ed784 */
  if (C.cf) goto L_103ed784;
  /* 103ed778 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ed77b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed77d jmp dword ptr [eax*4 + 0x103ed788] */
  switch (EAX) {
    case 1: goto L_103ed798;
    case 2: goto L_103ed7b8;
    case 3: goto L_103ed7e0;
    default: x86_unimpl("switch@0x103ed77d out of table"); return;
  }
L_103ed784:;
  /* 103ed784 jmp dword ptr [ecx*4 + 0x103ed880] */
  switch (ECX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed784 out of table"); return;
  }
  /* 103ed78b nop  */
  /* nop */
L_103ed798:;
  /* 103ed798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed79b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed79d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed7a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 103ed7a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed7a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103ed7a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed7a8 jb 0x103ed760 */
  if (C.cf) goto L_103ed760;
  /* 103ed7aa std  */
  C.df=1;
  /* 103ed7ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed7ad cld  */
  C.df=0;
  /* 103ed7ae jmp dword ptr [edx*4 + 0x103ed880] */
  switch (EDX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed7ae out of table"); return;
  }
  /* 103ed7b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed7b8:;
  /* 103ed7b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed7bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed7bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed7c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed7c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed7c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed7c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed7cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed7cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed7d2 jb 0x103ed760 */
  if (C.cf) goto L_103ed760;
  /* 103ed7d4 std  */
  C.df=1;
  /* 103ed7d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed7d7 cld  */
  C.df=0;
  /* 103ed7d8 jmp dword ptr [edx*4 + 0x103ed880] */
  switch (EDX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed7d8 out of table"); return;
  }
  /* 103ed7df nop  */
  /* nop */
L_103ed7e0:;
  /* 103ed7e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed7e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ed7e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed7e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed7eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed7ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed7f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ed7f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed7f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed7fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed7fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed800 jb 0x103ed760 */
  if (C.cf) goto L_103ed760;
  /* 103ed806 std  */
  C.df=1;
  /* 103ed807 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ed809 cld  */
  C.df=0;
  /* 103ed80a jmp dword ptr [edx*4 + 0x103ed880] */
  switch (EDX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed80a out of table"); return;
  }
  /* 103ed811 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103ed814 xor al, 0xd8 */
  { uint32_t _r=(AL)^(0xd8u); AL = (_r); fl_logic(_r,8); }
  /* 103ed816 adc byte ptr ds:[eax + ebx*8], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed81a adc byte ptr ds:[eax + ebx*8 + 0x3e], al */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8 + 0x3e))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed81f adc byte ptr [eax + ebx*8 + 0x3e], cl */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8 + 0x3e))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed823 adc byte ptr [eax + ebx*8 + 0x3e], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8 + 0x3e))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed827 adc byte ptr [eax + ebx*8 + 0x3e], bl */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8 + 0x3e))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed82b adc byte ptr [eax + ebx*8 + 0x3e], ah */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*8 + 0x3e))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*8 + 0x3e), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ed834 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103ed838 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103ed83c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103ed840 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103ed844 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103ed848 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103ed84c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103ed850 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103ed854 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103ed858 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103ed85c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103ed860 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103ed864 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103ed868 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103ed86c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ed873 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed875 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ed877:;
  /* 103ed877 jmp dword ptr [edx*4 + 0x103ed880] */
  switch (EDX) {
    case 0: goto L_103ed890;
    case 1: goto L_103ed898;
    case 2: goto L_103ed8a8;
    case 3: goto L_103ed8bc;
    default: x86_unimpl("switch@0x103ed877 out of table"); return;
  }
  /* 103ed87e mov edi, edi */
  EDI = (EDI);
L_103ed890:;
  /* 103ed890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed893 pop esi */
  ESI = (pop32());
  /* 103ed894 pop edi */
  EDI = (pop32());
  /* 103ed895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed896 ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed897 nop  */
  /* nop */
L_103ed898:;
  /* 103ed898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed89b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed89e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed8a1 pop esi */
  ESI = (pop32());
  /* 103ed8a2 pop edi */
  EDI = (pop32());
  /* 103ed8a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed8a4 ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed8a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ed8a8:;
  /* 103ed8a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed8ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed8ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed8b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed8b7 pop esi */
  ESI = (pop32());
  /* 103ed8b8 pop edi */
  EDI = (pop32());
  /* 103ed8b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed8ba ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
  /* 103ed8bb nop  */
  /* nop */
L_103ed8bc:;
  /* 103ed8bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ed8bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ed8c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ed8c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ed8c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ed8cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ed8ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed8d1 pop esi */
  ESI = (pop32());
  /* 103ed8d2 pop edi */
  EDI = (pop32());
  /* 103ed8d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ed8d4 ret  */
  ESPCHK(0x103ed5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x103ed8e0 (421 bytes, 148 insns) */
void f_103ed8e0(void) {
  FTRACE(0x103ed8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ed8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ed8e1 mov ebp, esp */
  EBP = (ESP);
  /* 103ed8e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103ed8e5 push 0x1040d2a0 */
  push32((uint32_t)(0x1040d2a0u));
  /* 103ed8ea push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103ed8ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103ed8f5 push eax */
  push32((uint32_t)(EAX));
  /* 103ed8f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103ed8fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed900 push ebx */
  push32((uint32_t)(EBX));
  /* 103ed901 push esi */
  push32((uint32_t)(ESI));
  /* 103ed902 push edi */
  push32((uint32_t)(EDI));
  /* 103ed903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ed906 cmp dword ptr [0x1041186c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041186c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed90d jne 0x103ed95e */
  if (!C.zf) goto L_103ed95e;
  /* 103ed90f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103ed912 push eax */
  push32((uint32_t)(EAX));
  /* 103ed913 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ed915 push 0x1040d298 */
  push32((uint32_t)(0x1040d298u));
  /* 103ed91a push 1 */
  push32((uint32_t)(0x1u));
  /* 103ed91c call dword ptr [0x10414310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414310))), 0x103ed922u);
  /* 103ed922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed924 je 0x103ed932 */
  if (C.zf) goto L_103ed932;
  /* 103ed926 mov dword ptr [0x1041186c], 1 */
  w32((uint32_t)(0x1041186c), (0x1u));
  /* 103ed930 jmp 0x103ed95e */
  goto L_103ed95e;
L_103ed932:;
  /* 103ed932 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 103ed935 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed936 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ed938 push 0x1040d294 */
  push32((uint32_t)(0x1040d294u));
  /* 103ed93d push 1 */
  push32((uint32_t)(0x1u));
  /* 103ed93f push 0 */
  push32((uint32_t)(0x0u));
  /* 103ed941 call dword ptr [0x10414314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414314))), 0x103ed947u);
  /* 103ed947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ed949 je 0x103ed957 */
  if (C.zf) goto L_103ed957;
  /* 103ed94b mov dword ptr [0x1041186c], 2 */
  w32((uint32_t)(0x1041186c), (0x2u));
  /* 103ed955 jmp 0x103ed95e */
  goto L_103ed95e;
L_103ed957:;
  /* 103ed957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ed959 jmp 0x103eda88 */
  goto L_103eda88;
L_103ed95e:;
  /* 103ed95e cmp dword ptr [0x1041186c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1041186c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed965 jne 0x103ed995 */
  if (!C.zf) goto L_103ed995;
  /* 103ed967 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed96b jne 0x103ed976 */
  if (!C.zf) goto L_103ed976;
  /* 103ed96d mov edx, dword ptr [0x10411878] */
  EDX = (r32((uint32_t)(0x10411878)));
  /* 103ed973 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_103ed976:;
  /* 103ed976 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ed979 push eax */
  push32((uint32_t)(EAX));
  /* 103ed97a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed97d push ecx */
  push32((uint32_t)(ECX));
  /* 103ed97e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed981 push edx */
  push32((uint32_t)(EDX));
  /* 103ed982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ed985 push eax */
  push32((uint32_t)(EAX));
  /* 103ed986 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103ed989 push ecx */
  push32((uint32_t)(ECX));
  /* 103ed98a call dword ptr [0x10414314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414314))), 0x103ed990u);
  /* 103ed990 jmp 0x103eda88 */
  goto L_103eda88;
L_103ed995:;
  /* 103ed995 cmp dword ptr [0x1041186c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1041186c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed99c jne 0x103eda86 */
  if (!C.zf) goto L_103eda86;
  /* 103ed9a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed9a6 jne 0x103ed9b1 */
  if (!C.zf) goto L_103ed9b1;
  /* 103ed9a8 mov edx, dword ptr [0x10411888] */
  EDX = (r32((uint32_t)(0x10411888)));
  /* 103ed9ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_103ed9b1:;
  /* 103ed9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ed9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ed9b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ed9b8 push eax */
  push32((uint32_t)(EAX));
  /* 103ed9b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ed9bc push ecx */
  push32((uint32_t)(ECX));
  /* 103ed9bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ed9c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ed9c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ed9c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103ed9c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed9ca push edx */
  push32((uint32_t)(EDX));
  /* 103ed9cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ed9ce push eax */
  push32((uint32_t)(EAX));
  /* 103ed9cf call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103ed9d5u);
  /* 103ed9d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ed9d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ed9dc jne 0x103ed9e5 */
  if (!C.zf) goto L_103ed9e5;
  /* 103ed9de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ed9e0 jmp 0x103eda88 */
  goto L_103eda88;
L_103ed9e5:;
  /* 103ed9e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ed9ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ed9ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103ed9f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ed9f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103ed9f6 call 0x103e8850 */
  push32(0x103ed9fbu); f_103e8850();
  /* 103ed9fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 103ed9fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103eda01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103eda04 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103eda07 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eda0a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103eda0c push edx */
  push32((uint32_t)(EDX));
  /* 103eda0d push 0 */
  push32((uint32_t)(0x0u));
  /* 103eda0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eda12 push eax */
  push32((uint32_t)(EAX));
  /* 103eda13 call 0x103e9420 */
  push32(0x103eda18u); f_103e9420();
  /* 103eda18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eda1b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103eda22 jmp 0x103eda3b */
  goto L_103eda3b;
  /* 103eda24 mov eax, 1 */
  EAX = (0x1u);
  /* 103eda29 ret  */
  ESPCHK(0x103ed8e0u, _esp0);
  ESP += 4; return;
  /* 103eda2a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103eda2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103eda34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103eda3b:;
  /* 103eda3b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eda3f jne 0x103eda45 */
  if (!C.zf) goto L_103eda45;
  /* 103eda41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eda43 jmp 0x103eda88 */
  goto L_103eda88;
L_103eda45:;
  /* 103eda45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103eda48 push ecx */
  push32((uint32_t)(ECX));
  /* 103eda49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eda4c push edx */
  push32((uint32_t)(EDX));
  /* 103eda4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103eda50 push eax */
  push32((uint32_t)(EAX));
  /* 103eda51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eda54 push ecx */
  push32((uint32_t)(ECX));
  /* 103eda55 push 1 */
  push32((uint32_t)(0x1u));
  /* 103eda57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103eda5a push edx */
  push32((uint32_t)(EDX));
  /* 103eda5b call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103eda61u);
  /* 103eda61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103eda64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eda68 jne 0x103eda6e */
  if (!C.zf) goto L_103eda6e;
  /* 103eda6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eda6c jmp 0x103eda88 */
  goto L_103eda88;
L_103eda6e:;
  /* 103eda6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103eda71 push eax */
  push32((uint32_t)(EAX));
  /* 103eda72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103eda75 push ecx */
  push32((uint32_t)(ECX));
  /* 103eda76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103eda79 push edx */
  push32((uint32_t)(EDX));
  /* 103eda7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eda7d push eax */
  push32((uint32_t)(EAX));
  /* 103eda7e call dword ptr [0x10414310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414310))), 0x103eda84u);
  /* 103eda84 jmp 0x103eda88 */
  goto L_103eda88;
L_103eda86:;
  /* 103eda86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103eda88:;
  /* 103eda88 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 103eda8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103eda8e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103eda95 pop edi */
  EDI = (pop32());
  /* 103eda96 pop esi */
  ESI = (pop32());
  /* 103eda97 pop ebx */
  EBX = (pop32());
  /* 103eda98 mov esp, ebp */
  ESP = (EBP);
  /* 103eda9a pop ebp */
  EBP = (pop32());
  /* 103eda9b ret  */
  ESPCHK(0x103ed8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x103edaa0 (727 bytes, 263 insns) */
void f_103edaa0(void) {
  FTRACE(0x103edaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103edaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103edaa1 mov ebp, esp */
  EBP = (ESP);
  /* 103edaa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103edaa5 push 0x1040d2b0 */
  push32((uint32_t)(0x1040d2b0u));
  /* 103edaaa push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103edaaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103edab5 push eax */
  push32((uint32_t)(EAX));
  /* 103edab6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103edabd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edac0 push ebx */
  push32((uint32_t)(EBX));
  /* 103edac1 push esi */
  push32((uint32_t)(ESI));
  /* 103edac2 push edi */
  push32((uint32_t)(EDI));
  /* 103edac3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103edac6 cmp dword ptr [0x10411890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edacd jne 0x103edb26 */
  if (!C.zf) goto L_103edb26;
  /* 103edacf push 0 */
  push32((uint32_t)(0x0u));
  /* 103edad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103edad5 push 0x1040d298 */
  push32((uint32_t)(0x1040d298u));
  /* 103edada push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103edadf push 0 */
  push32((uint32_t)(0x0u));
  /* 103edae1 call dword ptr [0x10414308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414308))), 0x103edae7u);
  /* 103edae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103edae9 je 0x103edaf7 */
  if (C.zf) goto L_103edaf7;
  /* 103edaeb mov dword ptr [0x10411890], 1 */
  w32((uint32_t)(0x10411890), (0x1u));
  /* 103edaf5 jmp 0x103edb26 */
  goto L_103edb26;
L_103edaf7:;
  /* 103edaf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edaf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edafb push 1 */
  push32((uint32_t)(0x1u));
  /* 103edafd push 0x1040d294 */
  push32((uint32_t)(0x1040d294u));
  /* 103edb02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103edb07 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edb09 call dword ptr [0x1041430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041430c))), 0x103edb0fu);
  /* 103edb0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103edb11 je 0x103edb1f */
  if (C.zf) goto L_103edb1f;
  /* 103edb13 mov dword ptr [0x10411890], 2 */
  w32((uint32_t)(0x10411890), (0x2u));
  /* 103edb1d jmp 0x103edb26 */
  goto L_103edb26;
L_103edb1f:;
  /* 103edb1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edb21 jmp 0x103edd91 */
  goto L_103edd91;
L_103edb26:;
  /* 103edb26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edb2a jle 0x103edb3f */
  if ((C.zf||C.sf!=C.of)) goto L_103edb3f;
  /* 103edb2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103edb2f push eax */
  push32((uint32_t)(EAX));
  /* 103edb30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edb33 push ecx */
  push32((uint32_t)(ECX));
  /* 103edb34 call 0x103eddb0 */
  push32(0x103edb39u); f_103eddb0();
  /* 103edb39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edb3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_103edb3f:;
  /* 103edb3f cmp dword ptr [0x10411890], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10411890))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edb46 jne 0x103edb6b */
  if (!C.zf) goto L_103edb6b;
  /* 103edb48 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103edb4b push edx */
  push32((uint32_t)(EDX));
  /* 103edb4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103edb4f push eax */
  push32((uint32_t)(EAX));
  /* 103edb50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103edb53 push ecx */
  push32((uint32_t)(ECX));
  /* 103edb54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edb57 push edx */
  push32((uint32_t)(EDX));
  /* 103edb58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edb5b push eax */
  push32((uint32_t)(EAX));
  /* 103edb5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edb5f push ecx */
  push32((uint32_t)(ECX));
  /* 103edb60 call dword ptr [0x1041430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041430c))), 0x103edb66u);
  /* 103edb66 jmp 0x103edd91 */
  goto L_103edd91;
L_103edb6b:;
  /* 103edb6b cmp dword ptr [0x10411890], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411890))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edb72 jne 0x103edd8f */
  if (!C.zf) goto L_103edd8f;
  /* 103edb78 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edb7c jne 0x103edb87 */
  if (!C.zf) goto L_103edb87;
  /* 103edb7e mov edx, dword ptr [0x10411888] */
  EDX = (r32((uint32_t)(0x10411888)));
  /* 103edb84 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_103edb87:;
  /* 103edb87 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edb89 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edb8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103edb8e push eax */
  push32((uint32_t)(EAX));
  /* 103edb8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edb92 push ecx */
  push32((uint32_t)(ECX));
  /* 103edb93 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 103edb96 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103edb98 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103edb9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103edb9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103edba0 push edx */
  push32((uint32_t)(EDX));
  /* 103edba1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103edba4 push eax */
  push32((uint32_t)(EAX));
  /* 103edba5 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103edbabu);
  /* 103edbab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103edbae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edbb2 jne 0x103edbbb */
  if (!C.zf) goto L_103edbbb;
  /* 103edbb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edbb6 jmp 0x103edd91 */
  goto L_103edd91;
L_103edbbb:;
  /* 103edbbb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103edbc2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103edbc5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103edbc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103edbca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103edbcc call 0x103e8850 */
  push32(0x103edbd1u); f_103e8850();
  /* 103edbd1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 103edbd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103edbd7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103edbda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103edbdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103edbe4 jmp 0x103edbfd */
  goto L_103edbfd;
  /* 103edbe6 mov eax, 1 */
  EAX = (0x1u);
  /* 103edbeb ret  */
  ESPCHK(0x103edaa0u, _esp0);
  ESP += 4; return;
  /* 103edbec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103edbef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103edbf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103edbfd:;
  /* 103edbfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edc01 jne 0x103edc0a */
  if (!C.zf) goto L_103edc0a;
  /* 103edc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edc05 jmp 0x103edd91 */
  goto L_103edd91;
L_103edc0a:;
  /* 103edc0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103edc0d push edx */
  push32((uint32_t)(EDX));
  /* 103edc0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103edc11 push eax */
  push32((uint32_t)(EAX));
  /* 103edc12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103edc15 push ecx */
  push32((uint32_t)(ECX));
  /* 103edc16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edc19 push edx */
  push32((uint32_t)(EDX));
  /* 103edc1a push 1 */
  push32((uint32_t)(0x1u));
  /* 103edc1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103edc1f push eax */
  push32((uint32_t)(EAX));
  /* 103edc20 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103edc26u);
  /* 103edc26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103edc28 jne 0x103edc31 */
  if (!C.zf) goto L_103edc31;
  /* 103edc2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edc2c jmp 0x103edd91 */
  goto L_103edd91;
L_103edc31:;
  /* 103edc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edc33 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edc35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103edc38 push ecx */
  push32((uint32_t)(ECX));
  /* 103edc39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103edc3c push edx */
  push32((uint32_t)(EDX));
  /* 103edc3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edc40 push eax */
  push32((uint32_t)(EAX));
  /* 103edc41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edc44 push ecx */
  push32((uint32_t)(ECX));
  /* 103edc45 call dword ptr [0x10414308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414308))), 0x103edc4bu);
  /* 103edc4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103edc4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edc52 jne 0x103edc5b */
  if (!C.zf) goto L_103edc5b;
  /* 103edc54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edc56 jmp 0x103edd91 */
  goto L_103edd91;
L_103edc5b:;
  /* 103edc5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edc5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 103edc64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103edc66 je 0x103edcab */
  if (C.zf) goto L_103edcab;
  /* 103edc68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edc6c je 0x103edca6 */
  if (C.zf) goto L_103edca6;
  /* 103edc6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103edc71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edc74 jle 0x103edc7d */
  if ((C.zf||C.sf!=C.of)) goto L_103edc7d;
  /* 103edc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edc78 jmp 0x103edd91 */
  goto L_103edd91;
L_103edc7d:;
  /* 103edc7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103edc80 push ecx */
  push32((uint32_t)(ECX));
  /* 103edc81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103edc84 push edx */
  push32((uint32_t)(EDX));
  /* 103edc85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103edc88 push eax */
  push32((uint32_t)(EAX));
  /* 103edc89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103edc8c push ecx */
  push32((uint32_t)(ECX));
  /* 103edc8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edc90 push edx */
  push32((uint32_t)(EDX));
  /* 103edc91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edc94 push eax */
  push32((uint32_t)(EAX));
  /* 103edc95 call dword ptr [0x10414308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414308))), 0x103edc9bu);
  /* 103edc9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103edc9d jne 0x103edca6 */
  if (!C.zf) goto L_103edca6;
  /* 103edc9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edca1 jmp 0x103edd91 */
  goto L_103edd91;
L_103edca6:;
  /* 103edca6 jmp 0x103edd8a */
  goto L_103edd8a;
L_103edcab:;
  /* 103edcab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103edcae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103edcb1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103edcb8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103edcbb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103edcbd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103edcc0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103edcc2 call 0x103e8850 */
  push32(0x103edcc7u); f_103e8850();
  /* 103edcc7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 103edcca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103edccd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103edcd0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103edcd3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103edcda jmp 0x103edcf3 */
  goto L_103edcf3;
  /* 103edcdc mov eax, 1 */
  EAX = (0x1u);
  /* 103edce1 ret  */
  ESPCHK(0x103edaa0u, _esp0);
  ESP += 4; return;
  /* 103edce2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103edce5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103edcec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103edcf3:;
  /* 103edcf3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edcf7 jne 0x103edd00 */
  if (!C.zf) goto L_103edd00;
  /* 103edcf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edcfb jmp 0x103edd91 */
  goto L_103edd91;
L_103edd00:;
  /* 103edd00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103edd03 push eax */
  push32((uint32_t)(EAX));
  /* 103edd04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103edd07 push ecx */
  push32((uint32_t)(ECX));
  /* 103edd08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103edd0b push edx */
  push32((uint32_t)(EDX));
  /* 103edd0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103edd0f push eax */
  push32((uint32_t)(EAX));
  /* 103edd10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edd13 push ecx */
  push32((uint32_t)(ECX));
  /* 103edd14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edd17 push edx */
  push32((uint32_t)(EDX));
  /* 103edd18 call dword ptr [0x10414308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414308))), 0x103edd1eu);
  /* 103edd1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103edd20 jne 0x103edd26 */
  if (!C.zf) goto L_103edd26;
  /* 103edd22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edd24 jmp 0x103edd91 */
  goto L_103edd91;
L_103edd26:;
  /* 103edd26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edd2a jne 0x103edd5a */
  if (!C.zf) goto L_103edd5a;
  /* 103edd2c push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd2e push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd30 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd32 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103edd37 push eax */
  push32((uint32_t)(EAX));
  /* 103edd38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103edd3b push ecx */
  push32((uint32_t)(ECX));
  /* 103edd3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103edd41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 103edd44 push edx */
  push32((uint32_t)(EDX));
  /* 103edd45 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103edd4bu);
  /* 103edd4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103edd4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edd52 jne 0x103edd58 */
  if (!C.zf) goto L_103edd58;
  /* 103edd54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edd56 jmp 0x103edd91 */
  goto L_103edd91;
L_103edd58:;
  /* 103edd58 jmp 0x103edd8a */
  goto L_103edd8a;
L_103edd5a:;
  /* 103edd5a push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd5c push 0 */
  push32((uint32_t)(0x0u));
  /* 103edd5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103edd61 push eax */
  push32((uint32_t)(EAX));
  /* 103edd62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103edd65 push ecx */
  push32((uint32_t)(ECX));
  /* 103edd66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103edd69 push edx */
  push32((uint32_t)(EDX));
  /* 103edd6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103edd6d push eax */
  push32((uint32_t)(EAX));
  /* 103edd6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103edd73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 103edd76 push ecx */
  push32((uint32_t)(ECX));
  /* 103edd77 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103edd7du);
  /* 103edd7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103edd80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edd84 jne 0x103edd8a */
  if (!C.zf) goto L_103edd8a;
  /* 103edd86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103edd88 jmp 0x103edd91 */
  goto L_103edd91;
L_103edd8a:;
  /* 103edd8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103edd8d jmp 0x103edd91 */
  goto L_103edd91;
L_103edd8f:;
  /* 103edd8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103edd91:;
  /* 103edd91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 103edd94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103edd97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103edd9e pop edi */
  EDI = (pop32());
  /* 103edd9f pop esi */
  ESI = (pop32());
  /* 103edda0 pop ebx */
  EBX = (pop32());
  /* 103edda1 mov esp, ebp */
  ESP = (EBP);
  /* 103edda3 pop ebp */
  EBP = (pop32());
  /* 103edda4 ret  */
  ESPCHK(0x103edaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x103eddb0 (80 bytes, 32 insns) */
void f_103eddb0(void) {
  FTRACE(0x103eddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eddb1 mov ebp, esp */
  EBP = (ESP);
  /* 103eddb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eddb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eddb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eddbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eddbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103eddc2:;
  /* 103eddc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eddc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eddc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eddcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eddce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eddd0 je 0x103edde7 */
  if (C.zf) goto L_103edde7;
  /* 103eddd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eddd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103eddd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eddda je 0x103edde7 */
  if (C.zf) goto L_103edde7;
  /* 103edddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103edddf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103edde2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103edde5 jmp 0x103eddc2 */
  goto L_103eddc2;
L_103edde7:;
  /* 103edde7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eddea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103edded test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eddef jne 0x103eddf9 */
  if (!C.zf) goto L_103eddf9;
  /* 103eddf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eddf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eddf7 jmp 0x103eddfc */
  goto L_103eddfc;
L_103eddf9:;
  /* 103eddf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103eddfc:;
  /* 103eddfc mov esp, ebp */
  ESP = (EBP);
  /* 103eddfe pop ebp */
  EBP = (pop32());
  /* 103eddff ret  */
  ESPCHK(0x103eddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x103ede00 (130 bytes, 43 insns) */
void f_103ede00(void) {
  FTRACE(0x103ede00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ede00 push ebp */
  push32((uint32_t)(EBP));
  /* 103ede01 mov ebp, esp */
  EBP = (ESP);
  /* 103ede03 push ecx */
  push32((uint32_t)(ECX));
  /* 103ede04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede07 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ede0d jae 0x103ede31 */
  if (!C.cf) goto L_103ede31;
  /* 103ede0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ede15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ede1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ede1e mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ede25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ede2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ede2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ede2f jne 0x103ede4c */
  if (!C.zf) goto L_103ede4c;
L_103ede31:;
  /* 103ede31 call 0x103ed580 */
  push32(0x103ede36u); f_103ed580();
  /* 103ede36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ede3c call 0x103ed590 */
  push32(0x103ede41u); f_103ed590();
  /* 103ede41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ede47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ede4a jmp 0x103ede7e */
  goto L_103ede7e;
L_103ede4c:;
  /* 103ede4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede4f push edx */
  push32((uint32_t)(EDX));
  /* 103ede50 call 0x103eeda0 */
  push32(0x103ede55u); f_103eeda0();
  /* 103ede55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ede58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ede5b push eax */
  push32((uint32_t)(EAX));
  /* 103ede5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ede5f push ecx */
  push32((uint32_t)(ECX));
  /* 103ede60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede63 push edx */
  push32((uint32_t)(EDX));
  /* 103ede64 call 0x103ede90 */
  push32(0x103ede69u); f_103ede90();
  /* 103ede69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ede6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ede6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede72 push eax */
  push32((uint32_t)(EAX));
  /* 103ede73 call 0x103eee30 */
  push32(0x103ede78u); f_103eee30();
  /* 103ede78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ede7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ede7e:;
  /* 103ede7e mov esp, ebp */
  ESP = (EBP);
  /* 103ede80 pop ebp */
  EBP = (pop32());
  /* 103ede81 ret  */
  ESPCHK(0x103ede00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x103ede90 (178 bytes, 56 insns) */
void f_103ede90(void) {
  FTRACE(0x103ede90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ede90 push ebp */
  push32((uint32_t)(EBP));
  /* 103ede91 mov ebp, esp */
  EBP = (ESP);
  /* 103ede93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ede96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ede99 push eax */
  push32((uint32_t)(EAX));
  /* 103ede9a call 0x103eec20 */
  push32(0x103ede9fu); f_103eec20();
  /* 103ede9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edea2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103edea5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edea9 jne 0x103edebe */
  if (!C.zf) goto L_103edebe;
  /* 103edeab call 0x103ed580 */
  push32(0x103edeb0u); f_103ed580();
  /* 103edeb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103edeb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103edeb9 jmp 0x103edf3e */
  goto L_103edf3e;
L_103edebe:;
  /* 103edebe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edec1 push ecx */
  push32((uint32_t)(ECX));
  /* 103edec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103edec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edec7 push edx */
  push32((uint32_t)(EDX));
  /* 103edec8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103edecb push eax */
  push32((uint32_t)(EAX));
  /* 103edecc call dword ptr [0x10414304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414304))), 0x103eded2u);
  /* 103eded2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eded5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eded9 jne 0x103edee6 */
  if (!C.zf) goto L_103edee6;
  /* 103ededb call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103edee1u);
  /* 103edee1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103edee4 jmp 0x103edeed */
  goto L_103edeed;
L_103edee6:;
  /* 103edee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103edeed:;
  /* 103edeed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edef1 je 0x103edf04 */
  if (C.zf) goto L_103edf04;
  /* 103edef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103edef6 push ecx */
  push32((uint32_t)(ECX));
  /* 103edef7 call 0x103ed4e0 */
  push32(0x103edefcu); f_103ed4e0();
  /* 103edefc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edeff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103edf02 jmp 0x103edf3e */
  goto L_103edf3e;
L_103edf04:;
  /* 103edf04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103edf0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103edf10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103edf13 mov ecx, dword ptr [edx*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103edf1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 103edf1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 103edf21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103edf27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103edf2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103edf30 mov eax, dword ptr [eax*4 + 0x10413060] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103edf37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 103edf3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103edf3e:;
  /* 103edf3e mov esp, ebp */
  ESP = (EBP);
  /* 103edf40 pop ebp */
  EBP = (pop32());
  /* 103edf41 ret  */
  ESPCHK(0x103ede90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df50 @ 0x103edf50 (130 bytes, 43 insns) */
void f_103edf50(void) {
  FTRACE(0x103edf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103edf50 push ebp */
  push32((uint32_t)(EBP));
  /* 103edf51 mov ebp, esp */
  EBP = (ESP);
  /* 103edf53 push ecx */
  push32((uint32_t)(ECX));
  /* 103edf54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf57 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edf5d jae 0x103edf81 */
  if (!C.cf) goto L_103edf81;
  /* 103edf5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103edf65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103edf6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103edf6e mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103edf75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103edf7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103edf7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103edf7f jne 0x103edf9c */
  if (!C.zf) goto L_103edf9c;
L_103edf81:;
  /* 103edf81 call 0x103ed580 */
  push32(0x103edf86u); f_103ed580();
  /* 103edf86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103edf8c call 0x103ed590 */
  push32(0x103edf91u); f_103ed590();
  /* 103edf91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103edf97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103edf9a jmp 0x103edfce */
  goto L_103edfce;
L_103edf9c:;
  /* 103edf9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edf9f push edx */
  push32((uint32_t)(EDX));
  /* 103edfa0 call 0x103eeda0 */
  push32(0x103edfa5u); f_103eeda0();
  /* 103edfa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edfa8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103edfab push eax */
  push32((uint32_t)(EAX));
  /* 103edfac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103edfaf push ecx */
  push32((uint32_t)(ECX));
  /* 103edfb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edfb3 push edx */
  push32((uint32_t)(EDX));
  /* 103edfb4 call 0x103edfe0 */
  push32(0x103edfb9u); f_103edfe0();
  /* 103edfb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edfbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103edfbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103edfc2 push eax */
  push32((uint32_t)(EAX));
  /* 103edfc3 call 0x103eee30 */
  push32(0x103edfc8u); f_103eee30();
  /* 103edfc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103edfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103edfce:;
  /* 103edfce mov esp, ebp */
  ESP = (EBP);
  /* 103edfd0 pop ebp */
  EBP = (pop32());
  /* 103edfd1 ret  */
  ESPCHK(0x103edf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x103edfe0 (627 bytes, 182 insns) */
void f_103edfe0(void) {
  FTRACE(0x103edfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103edfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103edfe1 mov ebp, esp */
  EBP = (ESP);
  /* 103edfe3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103edfe9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103edff0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103edff3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 103edff9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103edffd jne 0x103ee006 */
  if (!C.zf) goto L_103ee006;
  /* 103edfff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ee001 jmp 0x103ee24f */
  goto L_103ee24f;
L_103ee006:;
  /* 103ee006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee009 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee00c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee00f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ee012 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee015 mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ee01c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ee021 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103ee024 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ee026 je 0x103ee038 */
  if (C.zf) goto L_103ee038;
  /* 103ee028 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee02a push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee02c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee02f push edx */
  push32((uint32_t)(EDX));
  /* 103ee030 call 0x103ede90 */
  push32(0x103ee035u); f_103ede90();
  /* 103ee035 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ee038:;
  /* 103ee038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee03b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee03e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee041 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ee044 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee047 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103ee04e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103ee053 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103ee058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee05a je 0x103ee16c */
  if (C.zf) goto L_103ee16c;
  /* 103ee060 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee063 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ee066 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103ee06d:;
  /* 103ee06d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee070 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee073 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee076 jae 0x103ee16a */
  if (!C.cf) goto L_103ee16a;
  /* 103ee07c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 103ee082 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103ee085:;
  /* 103ee085 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee088 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 103ee08e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee090 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee096 jge 0x103ee0f7 */
  if ((C.sf==C.of)) goto L_103ee0f7;
  /* 103ee098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee09b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee09e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee0a1 jae 0x103ee0f7 */
  if (!C.cf) goto L_103ee0f7;
  /* 103ee0a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee0a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ee0a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 103ee0ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee0b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee0b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ee0b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 103ee0be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee0c1 jne 0x103ee0e1 */
  if (!C.zf) goto L_103ee0e1;
  /* 103ee0c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 103ee0c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee0cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 103ee0d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee0d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 103ee0d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee0db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee0de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103ee0e1:;
  /* 103ee0e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee0e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 103ee0ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103ee0ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee0ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee0f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ee0f5 jmp 0x103ee085 */
  goto L_103ee085;
L_103ee0f7:;
  /* 103ee0f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee0f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 103ee0ff push edx */
  push32((uint32_t)(EDX));
  /* 103ee100 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee103 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 103ee109 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee10b push eax */
  push32((uint32_t)(EAX));
  /* 103ee10c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 103ee112 push edx */
  push32((uint32_t)(EDX));
  /* 103ee113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee116 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee119 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee11c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ee11f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee122 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103ee129 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 103ee12c push eax */
  push32((uint32_t)(EAX));
  /* 103ee12d call dword ptr [0x1041437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041437c))), 0x103ee133u);
  /* 103ee133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee135 je 0x103ee15a */
  if (C.zf) goto L_103ee15a;
  /* 103ee137 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ee13a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee140 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103ee143 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee146 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 103ee14c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee14e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee154 jge 0x103ee158 */
  if ((C.sf==C.of)) goto L_103ee158;
  /* 103ee156 jmp 0x103ee16a */
  goto L_103ee16a;
L_103ee158:;
  /* 103ee158 jmp 0x103ee165 */
  goto L_103ee165;
L_103ee15a:;
  /* 103ee15a call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103ee160u);
  /* 103ee160 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103ee163 jmp 0x103ee16a */
  goto L_103ee16a;
L_103ee165:;
  /* 103ee165 jmp 0x103ee06d */
  goto L_103ee06d;
L_103ee16a:;
  /* 103ee16a jmp 0x103ee1bc */
  goto L_103ee1bc;
L_103ee16c:;
  /* 103ee16c push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee16e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 103ee174 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee175 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ee178 push edx */
  push32((uint32_t)(EDX));
  /* 103ee179 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee17c push eax */
  push32((uint32_t)(EAX));
  /* 103ee17d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee180 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee186 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ee189 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee18c mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ee193 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 103ee196 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee197 call dword ptr [0x1041437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041437c))), 0x103ee19du);
  /* 103ee19d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee19f je 0x103ee1b3 */
  if (C.zf) goto L_103ee1b3;
  /* 103ee1a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ee1a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 103ee1ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103ee1b1 jmp 0x103ee1bc */
  goto L_103ee1bc;
L_103ee1b3:;
  /* 103ee1b3 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103ee1b9u);
  /* 103ee1b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ee1bc:;
  /* 103ee1bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee1c0 jne 0x103ee246 */
  if (!C.zf) goto L_103ee246;
  /* 103ee1c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee1ca je 0x103ee1fa */
  if (C.zf) goto L_103ee1fa;
  /* 103ee1cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee1d0 jne 0x103ee1e9 */
  if (!C.zf) goto L_103ee1e9;
  /* 103ee1d2 call 0x103ed580 */
  push32(0x103ee1d7u); f_103ed580();
  /* 103ee1d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ee1dd call 0x103ed590 */
  push32(0x103ee1e2u); f_103ed590();
  /* 103ee1e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee1e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103ee1e7 jmp 0x103ee1f5 */
  goto L_103ee1f5;
L_103ee1e9:;
  /* 103ee1e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee1ec push edx */
  push32((uint32_t)(EDX));
  /* 103ee1ed call 0x103ed4e0 */
  push32(0x103ee1f2u); f_103ed4e0();
  /* 103ee1f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ee1f5:;
  /* 103ee1f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ee1f8 jmp 0x103ee24f */
  goto L_103ee24f;
L_103ee1fa:;
  /* 103ee1fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee1fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee203 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ee206 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee209 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103ee210 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103ee215 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ee218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee21a je 0x103ee22b */
  if (C.zf) goto L_103ee22b;
  /* 103ee21c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee21f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ee222 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee225 jne 0x103ee22b */
  if (!C.zf) goto L_103ee22b;
  /* 103ee227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ee229 jmp 0x103ee24f */
  goto L_103ee24f;
L_103ee22b:;
  /* 103ee22b call 0x103ed580 */
  push32(0x103ee230u); f_103ed580();
  /* 103ee230 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 103ee236 call 0x103ed590 */
  push32(0x103ee23bu); f_103ed590();
  /* 103ee23b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ee241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ee244 jmp 0x103ee24f */
  goto L_103ee24f;
L_103ee246:;
  /* 103ee246 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ee249 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103ee24f:;
  /* 103ee24f mov esp, ebp */
  ESP = (EBP);
  /* 103ee251 pop ebp */
  EBP = (pop32());
  /* 103ee252 ret  */
  ESPCHK(0x103edfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e260 @ 0x103ee260 (199 bytes, 68 insns) */
void f_103ee260(void) {
  FTRACE(0x103ee260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee260 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee261 mov ebp, esp */
  EBP = (ESP);
  /* 103ee263 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee264 push ebx */
  push32((uint32_t)(EBX));
  /* 103ee265 push esi */
  push32((uint32_t)(ESI));
  /* 103ee266 push edi */
  push32((uint32_t)(EDI));
L_103ee267:;
  /* 103ee267 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee26b jne 0x103ee28b */
  if (!C.zf) goto L_103ee28b;
  /* 103ee26d push 0x1040d1f8 */
  push32((uint32_t)(0x1040d1f8u));
  /* 103ee272 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee274 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 103ee276 push 0x1040d2c8 */
  push32((uint32_t)(0x1040d2c8u));
  /* 103ee27b push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee27d call 0x103e4770 */
  push32(0x103ee282u); f_103e4770();
  /* 103ee282 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee285 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee288 jne 0x103ee28b */
  if (!C.zf) goto L_103ee28b;
  /* 103ee28a int3  */
  x86_unimpl("int3 @ 0x103ee28a");
L_103ee28b:;
  /* 103ee28b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ee28d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee28f jne 0x103ee267 */
  if (!C.zf) goto L_103ee267;
  /* 103ee291 mov ecx, dword ptr [0x10411894] */
  ECX = (r32((uint32_t)(0x10411894)));
  /* 103ee297 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee29a mov dword ptr [0x10411894], ecx */
  w32((uint32_t)(0x10411894), (ECX));
  /* 103ee2a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee2a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ee2a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 103ee2a8 push 0x1040d2c8 */
  push32((uint32_t)(0x1040d2c8u));
  /* 103ee2ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee2af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103ee2b4 call 0x103e56b0 */
  push32(0x103ee2b9u); f_103e56b0();
  /* 103ee2b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103ee2c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee2c9 je 0x103ee2e6 */
  if (C.zf) goto L_103ee2e6;
  /* 103ee2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ee2d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103ee2d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103ee2da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 103ee2e4 jmp 0x103ee30b */
  goto L_103ee30b;
L_103ee2e6:;
  /* 103ee2e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ee2ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ee2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103ee2f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee2fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee2fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103ee301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee304 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_103ee30b:;
  /* 103ee30b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee30e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee311 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103ee314 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103ee316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee319 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103ee320 pop edi */
  EDI = (pop32());
  /* 103ee321 pop esi */
  ESI = (pop32());
  /* 103ee322 pop ebx */
  EBX = (pop32());
  /* 103ee323 mov esp, ebp */
  ESP = (EBP);
  /* 103ee325 pop ebp */
  EBP = (pop32());
  /* 103ee326 ret  */
  ESPCHK(0x103ee260u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x103ee330 (50 bytes, 17 insns) */
void f_103ee330(void) {
  FTRACE(0x103ee330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee330 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee331 mov ebp, esp */
  EBP = (ESP);
  /* 103ee333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee336 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee33c jb 0x103ee342 */
  if (C.cf) goto L_103ee342;
  /* 103ee33e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ee340 jmp 0x103ee360 */
  goto L_103ee360;
L_103ee342:;
  /* 103ee342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee345 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee34b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ee34e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee351 mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ee358 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ee35d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_103ee360:;
  /* 103ee360 pop ebp */
  EBP = (pop32());
  /* 103ee361 ret  */
  ESPCHK(0x103ee330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x103ee370 (300 bytes, 80 insns) */
void f_103ee370(void) {
  FTRACE(0x103ee370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee370 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee371 mov ebp, esp */
  EBP = (ESP);
  /* 103ee373 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee374 cmp dword ptr [0x10412d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10412d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee37b jne 0x103ee389 */
  if (!C.zf) goto L_103ee389;
  /* 103ee37d mov dword ptr [0x10412d60], 0x200 */
  w32((uint32_t)(0x10412d60), (0x200u));
  /* 103ee387 jmp 0x103ee39c */
  goto L_103ee39c;
L_103ee389:;
  /* 103ee389 cmp dword ptr [0x10412d60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10412d60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee390 jge 0x103ee39c */
  if ((C.sf==C.of)) goto L_103ee39c;
  /* 103ee392 mov dword ptr [0x10412d60], 0x14 */
  w32((uint32_t)(0x10412d60), (0x14u));
L_103ee39c:;
  /* 103ee39c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 103ee3a1 push 0x1040d2d4 */
  push32((uint32_t)(0x1040d2d4u));
  /* 103ee3a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee3a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103ee3aa mov eax, dword ptr [0x10412d60] */
  EAX = (r32((uint32_t)(0x10412d60)));
  /* 103ee3af push eax */
  push32((uint32_t)(EAX));
  /* 103ee3b0 call 0x103e5ac0 */
  push32(0x103ee3b5u); f_103e5ac0();
  /* 103ee3b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee3b8 mov dword ptr [0x10411a08], eax */
  w32((uint32_t)(0x10411a08), (EAX));
  /* 103ee3bd cmp dword ptr [0x10411a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee3c4 jne 0x103ee405 */
  if (!C.zf) goto L_103ee405;
  /* 103ee3c6 mov dword ptr [0x10412d60], 0x14 */
  w32((uint32_t)(0x10412d60), (0x14u));
  /* 103ee3d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 103ee3d5 push 0x1040d2d4 */
  push32((uint32_t)(0x1040d2d4u));
  /* 103ee3da push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee3dc push 4 */
  push32((uint32_t)(0x4u));
  /* 103ee3de mov ecx, dword ptr [0x10412d60] */
  ECX = (r32((uint32_t)(0x10412d60)));
  /* 103ee3e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee3e5 call 0x103e5ac0 */
  push32(0x103ee3eau); f_103e5ac0();
  /* 103ee3ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee3ed mov dword ptr [0x10411a08], eax */
  w32((uint32_t)(0x10411a08), (EAX));
  /* 103ee3f2 cmp dword ptr [0x10411a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee3f9 jne 0x103ee405 */
  if (!C.zf) goto L_103ee405;
  /* 103ee3fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103ee3fd call 0x103e4620 */
  push32(0x103ee402u); f_103e4620();
  /* 103ee402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ee405:;
  /* 103ee405 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ee40c jmp 0x103ee417 */
  goto L_103ee417;
L_103ee40e:;
  /* 103ee40e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee411 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee414 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ee417:;
  /* 103ee417 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee41b jge 0x103ee436 */
  if ((C.sf==C.of)) goto L_103ee436;
  /* 103ee41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee420 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee423 add eax, 0x10410120 */
  { uint32_t _a=(EAX),_b=(0x10410120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee428 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee42b mov edx, dword ptr [0x10411a08] */
  EDX = (r32((uint32_t)(0x10411a08)));
  /* 103ee431 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 103ee434 jmp 0x103ee40e */
  goto L_103ee40e;
L_103ee436:;
  /* 103ee436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ee43d jmp 0x103ee448 */
  goto L_103ee448;
L_103ee43f:;
  /* 103ee43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee442 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee445 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ee448:;
  /* 103ee448 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee44c jge 0x103ee498 */
  if ((C.sf==C.of)) goto L_103ee498;
  /* 103ee44e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee451 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee457 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ee45a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee45d mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ee464 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee468 je 0x103ee486 */
  if (C.zf) goto L_103ee486;
  /* 103ee46a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee46d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee470 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee473 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ee476 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ee479 mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103ee480 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee484 jne 0x103ee496 */
  if (!C.zf) goto L_103ee496;
L_103ee486:;
  /* 103ee486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee489 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee48c mov dword ptr [ecx + 0x10410130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10410130), (0xffffffffu));
L_103ee496:;
  /* 103ee496 jmp 0x103ee43f */
  goto L_103ee43f;
L_103ee498:;
  /* 103ee498 mov esp, ebp */
  ESP = (EBP);
  /* 103ee49a pop ebp */
  EBP = (pop32());
  /* 103ee49b ret  */
  ESPCHK(0x103ee370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x103ee4a0 (26 bytes, 9 insns) */
void f_103ee4a0(void) {
  FTRACE(0x103ee4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee4a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ee4a3 call 0x103ef0a0 */
  push32(0x103ee4a8u); f_103ef0a0();
  /* 103ee4a8 movsx eax, byte ptr [0x104116b0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x104116b0))));
  /* 103ee4af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ee4b1 je 0x103ee4b8 */
  if (C.zf) goto L_103ee4b8;
  /* 103ee4b3 call 0x103eee60 */
  push32(0x103ee4b8u); f_103eee60();
L_103ee4b8:;
  /* 103ee4b8 pop ebp */
  EBP = (pop32());
  /* 103ee4b9 ret  */
  ESPCHK(0x103ee4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x103ee4c0 (61 bytes, 20 insns) */
void f_103ee4c0(void) {
  FTRACE(0x103ee4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee4c1 mov ebp, esp */
  EBP = (ESP);
  /* 103ee4c3 cmp dword ptr [ebp + 8], 0x10410120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10410120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee4ca jb 0x103ee4ee */
  if (C.cf) goto L_103ee4ee;
  /* 103ee4cc cmp dword ptr [ebp + 8], 0x10410380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10410380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee4d3 ja 0x103ee4ee */
  if ((!C.cf&&!C.zf)) goto L_103ee4ee;
  /* 103ee4d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee4d8 sub eax, 0x10410120 */
  { uint32_t _a=(EAX),_b=(0x10410120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee4dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee4e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee4e3 push eax */
  push32((uint32_t)(EAX));
  /* 103ee4e4 call 0x103e90b0 */
  push32(0x103ee4e9u); f_103e90b0();
  /* 103ee4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee4ec jmp 0x103ee4fb */
  goto L_103ee4fb;
L_103ee4ee:;
  /* 103ee4ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee4f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee4f5 call dword ptr [0x10414340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414340))), 0x103ee4fbu);
L_103ee4fb:;
  /* 103ee4fb pop ebp */
  EBP = (pop32());
  /* 103ee4fc ret  */
  ESPCHK(0x103ee4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e500 @ 0x103ee500 (41 bytes, 16 insns) */
void f_103ee500(void) {
  FTRACE(0x103ee500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee500 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee501 mov ebp, esp */
  EBP = (ESP);
  /* 103ee503 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee507 jge 0x103ee51a */
  if ((C.sf==C.of)) goto L_103ee51a;
  /* 103ee509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee50c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee50f push eax */
  push32((uint32_t)(EAX));
  /* 103ee510 call 0x103e90b0 */
  push32(0x103ee515u); f_103e90b0();
  /* 103ee515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee518 jmp 0x103ee527 */
  goto L_103ee527;
L_103ee51a:;
  /* 103ee51a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee51d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee520 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee521 call dword ptr [0x10414340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414340))), 0x103ee527u);
L_103ee527:;
  /* 103ee527 pop ebp */
  EBP = (pop32());
  /* 103ee528 ret  */
  ESPCHK(0x103ee500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x103ee530 (61 bytes, 20 insns) */
void f_103ee530(void) {
  FTRACE(0x103ee530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee530 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee531 mov ebp, esp */
  EBP = (ESP);
  /* 103ee533 cmp dword ptr [ebp + 8], 0x10410120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10410120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee53a jb 0x103ee55e */
  if (C.cf) goto L_103ee55e;
  /* 103ee53c cmp dword ptr [ebp + 8], 0x10410380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10410380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee543 ja 0x103ee55e */
  if ((!C.cf&&!C.zf)) goto L_103ee55e;
  /* 103ee545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee548 sub eax, 0x10410120 */
  { uint32_t _a=(EAX),_b=(0x10410120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee54d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ee550 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee553 push eax */
  push32((uint32_t)(EAX));
  /* 103ee554 call 0x103e9150 */
  push32(0x103ee559u); f_103e9150();
  /* 103ee559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee55c jmp 0x103ee56b */
  goto L_103ee56b;
L_103ee55e:;
  /* 103ee55e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee561 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee564 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee565 call dword ptr [0x1041433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041433c))), 0x103ee56bu);
L_103ee56b:;
  /* 103ee56b pop ebp */
  EBP = (pop32());
  /* 103ee56c ret  */
  ESPCHK(0x103ee530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x103ee570 (41 bytes, 16 insns) */
void f_103ee570(void) {
  FTRACE(0x103ee570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee570 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee571 mov ebp, esp */
  EBP = (ESP);
  /* 103ee573 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee577 jge 0x103ee58a */
  if ((C.sf==C.of)) goto L_103ee58a;
  /* 103ee579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee57c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee57f push eax */
  push32((uint32_t)(EAX));
  /* 103ee580 call 0x103e9150 */
  push32(0x103ee585u); f_103e9150();
  /* 103ee585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee588 jmp 0x103ee597 */
  goto L_103ee597;
L_103ee58a:;
  /* 103ee58a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee58d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee590 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee591 call dword ptr [0x1041433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041433c))), 0x103ee597u);
L_103ee597:;
  /* 103ee597 pop ebp */
  EBP = (pop32());
  /* 103ee598 ret  */
  ESPCHK(0x103ee570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x103ee5a0 (119 bytes, 34 insns) */
void f_103ee5a0(void) {
  FTRACE(0x103ee5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee5a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ee5a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee5a6 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103ee5ab call dword ptr [0x10414390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414390))), 0x103ee5b1u);
  /* 103ee5b1 cmp dword ptr [0x104119f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee5b8 je 0x103ee5d8 */
  if (C.zf) goto L_103ee5d8;
  /* 103ee5ba push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103ee5bf call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103ee5c5u);
  /* 103ee5c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ee5c7 call 0x103e90b0 */
  push32(0x103ee5ccu); f_103e90b0();
  /* 103ee5cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee5cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ee5d6 jmp 0x103ee5df */
  goto L_103ee5df;
L_103ee5d8:;
  /* 103ee5d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103ee5df:;
  /* 103ee5df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 103ee5e3 push eax */
  push32((uint32_t)(EAX));
  /* 103ee5e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee5e7 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee5e8 call 0x103ee620 */
  push32(0x103ee5edu); f_103ee620();
  /* 103ee5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee5f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ee5f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee5f7 je 0x103ee605 */
  if (C.zf) goto L_103ee605;
  /* 103ee5f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ee5fb call 0x103e9150 */
  push32(0x103ee600u); f_103e9150();
  /* 103ee600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee603 jmp 0x103ee610 */
  goto L_103ee610;
L_103ee605:;
  /* 103ee605 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103ee60a call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103ee610u);
L_103ee610:;
  /* 103ee610 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ee613 mov esp, ebp */
  ESP = (EBP);
  /* 103ee615 pop ebp */
  EBP = (pop32());
  /* 103ee616 ret  */
  ESPCHK(0x103ee5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e620 @ 0x103ee620 (160 bytes, 50 insns) */
void f_103ee620(void) {
  FTRACE(0x103ee620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee620 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee621 mov ebp, esp */
  EBP = (ESP);
  /* 103ee623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee626 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee62a jne 0x103ee633 */
  if (!C.zf) goto L_103ee633;
  /* 103ee62c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ee62e jmp 0x103ee6bc */
  goto L_103ee6bc;
L_103ee633:;
  /* 103ee633 cmp dword ptr [0x10411878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee63a jne 0x103ee66a */
  if (!C.zf) goto L_103ee66a;
  /* 103ee63c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ee63f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ee644 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee649 jle 0x103ee65b */
  if ((C.zf||C.sf!=C.of)) goto L_103ee65b;
  /* 103ee64b call 0x103ed580 */
  push32(0x103ee650u); f_103ed580();
  /* 103ee650 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 103ee656 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ee659 jmp 0x103ee6bc */
  goto L_103ee6bc;
L_103ee65b:;
  /* 103ee65b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee65e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 103ee661 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 103ee663 mov eax, 1 */
  EAX = (0x1u);
  /* 103ee668 jmp 0x103ee6bc */
  goto L_103ee6bc;
L_103ee66a:;
  /* 103ee66a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103ee671 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103ee674 push eax */
  push32((uint32_t)(EAX));
  /* 103ee675 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee677 mov ecx, dword ptr [0x1040fea4] */
  ECX = (r32((uint32_t)(0x1040fea4)));
  /* 103ee67d push ecx */
  push32((uint32_t)(ECX));
  /* 103ee67e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee681 push edx */
  push32((uint32_t)(EDX));
  /* 103ee682 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ee684 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 103ee687 push eax */
  push32((uint32_t)(EAX));
  /* 103ee688 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103ee68d mov ecx, dword ptr [0x10411888] */
  ECX = (r32((uint32_t)(0x10411888)));
  /* 103ee693 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee694 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103ee69au);
  /* 103ee69a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ee69d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee6a1 je 0x103ee6a9 */
  if (C.zf) goto L_103ee6a9;
  /* 103ee6a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee6a7 je 0x103ee6b9 */
  if (C.zf) goto L_103ee6b9;
L_103ee6a9:;
  /* 103ee6a9 call 0x103ed580 */
  push32(0x103ee6aeu); f_103ed580();
  /* 103ee6ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 103ee6b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ee6b7 jmp 0x103ee6bc */
  goto L_103ee6bc;
L_103ee6b9:;
  /* 103ee6b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ee6bc:;
  /* 103ee6bc mov esp, ebp */
  ESP = (EBP);
  /* 103ee6be pop ebp */
  EBP = (pop32());
  /* 103ee6bf ret  */
  ESPCHK(0x103ee620u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x103ee6c0 (32 bytes, 18 insns) */
void f_103ee6c0(void) {
  FTRACE(0x103ee6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee6c1 mov ebp, esp */
  EBP = (ESP);
  /* 103ee6c3 push ebx */
  push32((uint32_t)(EBX));
  /* 103ee6c4 push esi */
  push32((uint32_t)(ESI));
  /* 103ee6c5 push edi */
  push32((uint32_t)(EDI));
  /* 103ee6c6 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee6c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee6c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ee6cb push 0x103ee6d8 */
  push32((uint32_t)(0x103ee6d8u));
  /* 103ee6d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103ee6d3 call 0x103f5e0c */
  push32(0x103ee6d8u); f_103f5e0c();
  /* 103ee6d8 pop ebp */
  EBP = (pop32());
  /* 103ee6d9 pop edi */
  EDI = (pop32());
  /* 103ee6da pop esi */
  ESI = (pop32());
  /* 103ee6db pop ebx */
  EBX = (pop32());
  /* 103ee6dc mov esp, ebp */
  ESP = (EBP);
  /* 103ee6de pop ebp */
  EBP = (pop32());
  /* 103ee6df ret  */
  ESPCHK(0x103ee6c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x103ee702 (104 bytes, 33 insns) */
void f_103ee702(void) {
  FTRACE(0x103ee702u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee702 push ebx */
  push32((uint32_t)(EBX));
  /* 103ee703 push esi */
  push32((uint32_t)(ESI));
  /* 103ee704 push edi */
  push32((uint32_t)(EDI));
  /* 103ee705 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103ee709 push eax */
  push32((uint32_t)(EAX));
  /* 103ee70a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 103ee70c push 0x103ee6e0 */
  push32((uint32_t)(0x103ee6e0u));
  /* 103ee711 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 103ee718 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_103ee71f:;
  /* 103ee71f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 103ee723 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ee726 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 103ee729 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee72c je 0x103ee75c */
  if (C.zf) goto L_103ee75c;
  /* 103ee72e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee732 je 0x103ee75c */
  if (C.zf) goto L_103ee75c;
  /* 103ee734 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 103ee737 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 103ee73a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 103ee73e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 103ee741 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee746 jne 0x103ee75a */
  if (!C.zf) goto L_103ee75a;
  /* 103ee748 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103ee74d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 103ee751 call 0x103ee796 */
  push32(0x103ee756u); f_103ee796();
  /* 103ee756 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x103ee75au);
L_103ee75a:;
  /* 103ee75a jmp 0x103ee71f */
  goto L_103ee71f;
L_103ee75c:;
  /* 103ee75c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 103ee763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee766 pop edi */
  EDI = (pop32());
  /* 103ee767 pop esi */
  ESI = (pop32());
  /* 103ee768 pop ebx */
  EBX = (pop32());
  /* 103ee769 ret  */
  ESPCHK(0x103ee702u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e796 @ 0x103ee796 (24 bytes, 10 insns) */
void f_103ee796(void) {
  FTRACE(0x103ee796u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee796 push ebx */
  push32((uint32_t)(EBX));
  /* 103ee797 push ecx */
  push32((uint32_t)(ECX));
  /* 103ee798 mov ebx, 0x104103b8 */
  EBX = (0x104103b8u);
  /* 103ee79d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ee7a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 103ee7a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 103ee7a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 103ee7a9 pop ecx */
  ECX = (pop32());
  /* 103ee7aa pop ebx */
  EBX = (pop32());
  /* 103ee7ab ret 4 */
  ESPCHK(0x103ee796u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e875 @ 0x103ee875 (27 bytes, 11 insns) */
void f_103ee875(void) {
  FTRACE(0x103ee875u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee875 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee876 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 103ee87a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 103ee87c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103ee87f push eax */
  push32((uint32_t)(EAX));
  /* 103ee880 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 103ee883 push eax */
  push32((uint32_t)(EAX));
  /* 103ee884 call 0x103ee702 */
  push32(0x103ee889u); f_103ee702();
  /* 103ee889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee88c pop ebp */
  EBP = (pop32());
  /* 103ee88d ret 4 */
  ESPCHK(0x103ee875u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e890 @ 0x103ee890 (482 bytes, 138 insns) */
void f_103ee890(void) {
  FTRACE(0x103ee890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ee890 push ebp */
  push32((uint32_t)(EBP));
  /* 103ee891 mov ebp, esp */
  EBP = (ESP);
  /* 103ee893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee896 push esi */
  push32((uint32_t)(ESI));
  /* 103ee897 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 103ee89e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103ee8a0 call 0x103e90b0 */
  push32(0x103ee8a5u); f_103e90b0();
  /* 103ee8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee8a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ee8af jmp 0x103ee8ba */
  goto L_103ee8ba;
L_103ee8b1:;
  /* 103ee8b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee8b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ee8ba:;
  /* 103ee8ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee8be jge 0x103eea60 */
  if ((C.sf==C.of)) goto L_103eea60;
  /* 103ee8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee8c7 cmp dword ptr [ecx*4 + 0x10413060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10413060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee8cf je 0x103ee9c6 */
  if (C.zf) goto L_103ee9c6;
  /* 103ee8d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee8d8 mov eax, dword ptr [edx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103ee8df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ee8e2 jmp 0x103ee8ed */
  goto L_103ee8ed;
L_103ee8e4:;
  /* 103ee8e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee8e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee8ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ee8ed:;
  /* 103ee8ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee8f0 mov eax, dword ptr [edx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103ee8f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee8fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee8ff jae 0x103ee9b6 */
  if (!C.cf) goto L_103ee9b6;
  /* 103ee905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee908 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ee90c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ee90f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ee911 jne 0x103ee9b1 */
  if (!C.zf) goto L_103ee9b1;
  /* 103ee917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee91a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee91e jne 0x103ee959 */
  if (!C.zf) goto L_103ee959;
  /* 103ee920 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ee922 call 0x103e90b0 */
  push32(0x103ee927u); f_103e90b0();
  /* 103ee927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee92a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee92d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee931 jne 0x103ee94f */
  if (!C.zf) goto L_103ee94f;
  /* 103ee933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee936 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee939 push edx */
  push32((uint32_t)(EDX));
  /* 103ee93a call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103ee940u);
  /* 103ee940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee943 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ee946 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee94c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_103ee94f:;
  /* 103ee94f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ee951 call 0x103e9150 */
  push32(0x103ee956u); f_103e9150();
  /* 103ee956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ee959:;
  /* 103ee959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee95c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee95f push eax */
  push32((uint32_t)(EAX));
  /* 103ee960 call dword ptr [0x10414340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414340))), 0x103ee966u);
  /* 103ee966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee969 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ee96d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ee970 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ee972 je 0x103ee986 */
  if (C.zf) goto L_103ee986;
  /* 103ee974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee977 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee97a push eax */
  push32((uint32_t)(EAX));
  /* 103ee97b call dword ptr [0x1041433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041433c))), 0x103ee981u);
  /* 103ee981 jmp 0x103ee8e4 */
  goto L_103ee8e4;
L_103ee986:;
  /* 103ee986 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee989 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103ee98f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee992 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ee995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee99b sub eax, dword ptr [edx*4 + 0x10413060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10413060))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ee9a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ee9a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 103ee9a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ee9aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee9ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ee9af jmp 0x103ee9b6 */
  goto L_103ee9b6;
L_103ee9b1:;
  /* 103ee9b1 jmp 0x103ee8e4 */
  goto L_103ee8e4;
L_103ee9b6:;
  /* 103ee9b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee9ba je 0x103ee9c1 */
  if (C.zf) goto L_103ee9c1;
  /* 103ee9bc jmp 0x103eea60 */
  goto L_103eea60;
L_103ee9c1:;
  /* 103ee9c1 jmp 0x103eea5b */
  goto L_103eea5b;
L_103ee9c6:;
  /* 103ee9c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 103ee9c8 push 0x1040d2dc */
  push32((uint32_t)(0x1040d2dcu));
  /* 103ee9cd push 2 */
  push32((uint32_t)(0x2u));
  /* 103ee9cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103ee9d4 call 0x103e56b0 */
  push32(0x103ee9d9u); f_103e56b0();
  /* 103ee9d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee9dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ee9df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ee9e3 je 0x103eea59 */
  if (C.zf) goto L_103eea59;
  /* 103ee9e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ee9e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ee9eb mov dword ptr [eax*4 + 0x10413060], ecx */
  w32((uint32_t)(EAX*4 + 0x10413060), (ECX));
  /* 103ee9f2 mov edx, dword ptr [0x1041319c] */
  EDX = (r32((uint32_t)(0x1041319c)));
  /* 103ee9f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ee9fb mov dword ptr [0x1041319c], edx */
  w32((uint32_t)(0x1041319c), (EDX));
  /* 103eea01 jmp 0x103eea0c */
  goto L_103eea0c;
L_103eea03:;
  /* 103eea03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eea06 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eea09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103eea0c:;
  /* 103eea0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eea0f mov edx, dword ptr [ecx*4 + 0x10413060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103eea16 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eea1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eea1f jae 0x103eea44 */
  if (!C.cf) goto L_103eea44;
  /* 103eea21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eea24 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103eea28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eea2b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103eea31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eea34 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103eea38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eea3b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103eea42 jmp 0x103eea03 */
  goto L_103eea03;
L_103eea44:;
  /* 103eea44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103eea47 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103eea4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103eea4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eea50 push edx */
  push32((uint32_t)(EDX));
  /* 103eea51 call 0x103eeda0 */
  push32(0x103eea56u); f_103eeda0();
  /* 103eea56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103eea59:;
  /* 103eea59 jmp 0x103eea60 */
  goto L_103eea60;
L_103eea5b:;
  /* 103eea5b jmp 0x103ee8b1 */
  goto L_103ee8b1;
L_103eea60:;
  /* 103eea60 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103eea62 call 0x103e9150 */
  push32(0x103eea67u); f_103e9150();
  /* 103eea67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eea6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eea6d pop esi */
  ESI = (pop32());
  /* 103eea6e mov esp, ebp */
  ESP = (EBP);
  /* 103eea70 pop ebp */
  EBP = (pop32());
  /* 103eea71 ret  */
  ESPCHK(0x103ee890u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x103eea80 (183 bytes, 57 insns) */
void f_103eea80(void) {
  FTRACE(0x103eea80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eea80 push ebp */
  push32((uint32_t)(EBP));
  /* 103eea81 mov ebp, esp */
  EBP = (ESP);
  /* 103eea83 push ecx */
  push32((uint32_t)(ECX));
  /* 103eea84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eea87 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eea8d jae 0x103eeb1a */
  if (!C.cf) goto L_103eeb1a;
  /* 103eea93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eea96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103eea99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eea9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103eea9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eeaa2 mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103eeaa9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeaad jne 0x103eeb1a */
  if (!C.zf) goto L_103eeb1a;
  /* 103eeaaf cmp dword ptr [0x10411670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeab6 jne 0x103eeafa */
  if (!C.zf) goto L_103eeafa;
  /* 103eeab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeabb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103eeabe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeac2 je 0x103eead2 */
  if (C.zf) goto L_103eead2;
  /* 103eeac4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeac8 je 0x103eeae0 */
  if (C.zf) goto L_103eeae0;
  /* 103eeaca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeace je 0x103eeaee */
  if (C.zf) goto L_103eeaee;
  /* 103eead0 jmp 0x103eeafa */
  goto L_103eeafa;
L_103eead2:;
  /* 103eead2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eead5 push edx */
  push32((uint32_t)(EDX));
  /* 103eead6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 103eead8 call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eeadeu);
  /* 103eeade jmp 0x103eeafa */
  goto L_103eeafa;
L_103eeae0:;
  /* 103eeae0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eeae3 push eax */
  push32((uint32_t)(EAX));
  /* 103eeae4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103eeae6 call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eeaecu);
  /* 103eeaec jmp 0x103eeafa */
  goto L_103eeafa;
L_103eeaee:;
  /* 103eeaee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eeaf1 push ecx */
  push32((uint32_t)(ECX));
  /* 103eeaf2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103eeaf4 call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eeafau);
L_103eeafa:;
  /* 103eeafa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeafd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103eeb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb03 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103eeb06 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eeb09 mov ecx, dword ptr [edx*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103eeb10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eeb13 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 103eeb16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eeb18 jmp 0x103eeb33 */
  goto L_103eeb33;
L_103eeb1a:;
  /* 103eeb1a call 0x103ed580 */
  push32(0x103eeb1fu); f_103ed580();
  /* 103eeb1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103eeb25 call 0x103ed590 */
  push32(0x103eeb2au); f_103ed590();
  /* 103eeb2a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103eeb30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103eeb33:;
  /* 103eeb33 mov esp, ebp */
  ESP = (EBP);
  /* 103eeb35 pop ebp */
  EBP = (pop32());
  /* 103eeb36 ret  */
  ESPCHK(0x103eea80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x103eeb40 (216 bytes, 63 insns) */
void f_103eeb40(void) {
  FTRACE(0x103eeb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eeb40 push ebp */
  push32((uint32_t)(EBP));
  /* 103eeb41 mov ebp, esp */
  EBP = (ESP);
  /* 103eeb43 push ecx */
  push32((uint32_t)(ECX));
  /* 103eeb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb47 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeb4d jae 0x103eebfb */
  if (!C.cf) goto L_103eebfb;
  /* 103eeb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103eeb59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103eeb5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eeb62 mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103eeb69 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103eeb6e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103eeb71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eeb73 je 0x103eebfb */
  if (C.zf) goto L_103eebfb;
  /* 103eeb79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb7c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103eeb7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeb82 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103eeb85 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eeb88 mov ecx, dword ptr [edx*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103eeb8f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeb93 je 0x103eebfb */
  if (C.zf) goto L_103eebfb;
  /* 103eeb95 cmp dword ptr [0x10411670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeb9c jne 0x103eebda */
  if (!C.zf) goto L_103eebda;
  /* 103eeb9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeba1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103eeba4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeba8 je 0x103eebb8 */
  if (C.zf) goto L_103eebb8;
  /* 103eebaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eebae je 0x103eebc4 */
  if (C.zf) goto L_103eebc4;
  /* 103eebb0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eebb4 je 0x103eebd0 */
  if (C.zf) goto L_103eebd0;
  /* 103eebb6 jmp 0x103eebda */
  goto L_103eebda;
L_103eebb8:;
  /* 103eebb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eebba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 103eebbc call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eebc2u);
  /* 103eebc2 jmp 0x103eebda */
  goto L_103eebda;
L_103eebc4:;
  /* 103eebc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eebc6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103eebc8 call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eebceu);
  /* 103eebce jmp 0x103eebda */
  goto L_103eebda;
L_103eebd0:;
  /* 103eebd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103eebd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103eebd4 call dword ptr [0x104142fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142fc))), 0x103eebdau);
L_103eebda:;
  /* 103eebda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eebdd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103eebe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eebe3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103eebe6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eebe9 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103eebf0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 103eebf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eebf9 jmp 0x103eec14 */
  goto L_103eec14;
L_103eebfb:;
  /* 103eebfb call 0x103ed580 */
  push32(0x103eec00u); f_103ed580();
  /* 103eec00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103eec06 call 0x103ed590 */
  push32(0x103eec0bu); f_103ed590();
  /* 103eec0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103eec11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103eec14:;
  /* 103eec14 mov esp, ebp */
  ESP = (EBP);
  /* 103eec16 pop ebp */
  EBP = (pop32());
  /* 103eec17 ret  */
  ESPCHK(0x103eeb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x103eec20 (102 bytes, 30 insns) */
void f_103eec20(void) {
  FTRACE(0x103eec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eec20 push ebp */
  push32((uint32_t)(EBP));
  /* 103eec21 mov ebp, esp */
  EBP = (ESP);
  /* 103eec23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eec26 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eec2c jae 0x103eec6b */
  if (!C.cf) goto L_103eec6b;
  /* 103eec2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eec31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103eec34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eec37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103eec3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eec3d mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103eec44 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103eec49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103eec4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eec4e je 0x103eec6b */
  if (C.zf) goto L_103eec6b;
  /* 103eec50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eec53 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103eec56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eec59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103eec5c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eec5f mov ecx, dword ptr [edx*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103eec66 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 103eec69 jmp 0x103eec84 */
  goto L_103eec84;
L_103eec6b:;
  /* 103eec6b call 0x103ed580 */
  push32(0x103eec70u); f_103ed580();
  /* 103eec70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103eec76 call 0x103ed590 */
  push32(0x103eec7bu); f_103ed590();
  /* 103eec7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103eec81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103eec84:;
  /* 103eec84 pop ebp */
  EBP = (pop32());
  /* 103eec85 ret  */
  ESPCHK(0x103eec20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x103eec90 (260 bytes, 83 insns) */
void f_103eec90(void) {
  FTRACE(0x103eec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eec90 push ebp */
  push32((uint32_t)(EBP));
  /* 103eec91 mov ebp, esp */
  EBP = (ESP);
  /* 103eec93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eec96 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eec9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eec9d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103eeca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eeca2 je 0x103eecad */
  if (C.zf) goto L_103eecad;
  /* 103eeca4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eeca7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103eecaa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_103eecad:;
  /* 103eecad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eecb0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 103eecb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eecb8 je 0x103eecc2 */
  if (C.zf) goto L_103eecc2;
  /* 103eecba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eecbd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 103eecbf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_103eecc2:;
  /* 103eecc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103eecc5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 103eeccb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eeccd je 0x103eecd8 */
  if (C.zf) goto L_103eecd8;
  /* 103eeccf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eecd2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 103eecd5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_103eecd8:;
  /* 103eecd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eecdb push eax */
  push32((uint32_t)(EAX));
  /* 103eecdc call dword ptr [0x104143c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143c4))), 0x103eece2u);
  /* 103eece2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103eece5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eece9 jne 0x103eed02 */
  if (!C.zf) goto L_103eed02;
  /* 103eeceb call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103eecf1u);
  /* 103eecf1 push eax */
  push32((uint32_t)(EAX));
  /* 103eecf2 call 0x103ed4e0 */
  push32(0x103eecf7u); f_103ed4e0();
  /* 103eecf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eecfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eecfd jmp 0x103eed90 */
  goto L_103eed90;
L_103eed02:;
  /* 103eed02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eed06 jne 0x103eed13 */
  if (!C.zf) goto L_103eed13;
  /* 103eed08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eed0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 103eed0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 103eed11 jmp 0x103eed22 */
  goto L_103eed22;
L_103eed13:;
  /* 103eed13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eed17 jne 0x103eed22 */
  if (!C.zf) goto L_103eed22;
  /* 103eed19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eed1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 103eed1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_103eed22:;
  /* 103eed22 call 0x103ee890 */
  push32(0x103eed27u); f_103ee890();
  /* 103eed27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eed2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eed2e jne 0x103eed4b */
  if (!C.zf) goto L_103eed4b;
  /* 103eed30 call 0x103ed580 */
  push32(0x103eed35u); f_103ed580();
  /* 103eed35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 103eed3b call 0x103ed590 */
  push32(0x103eed40u); f_103ed590();
  /* 103eed40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103eed46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eed49 jmp 0x103eed90 */
  goto L_103eed90;
L_103eed4b:;
  /* 103eed4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eed4e push eax */
  push32((uint32_t)(EAX));
  /* 103eed4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eed52 push ecx */
  push32((uint32_t)(ECX));
  /* 103eed53 call 0x103eea80 */
  push32(0x103eed58u); f_103eea80();
  /* 103eed58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eed5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eed5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 103eed61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 103eed64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eed67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103eed6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eed6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103eed70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eed73 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103eed7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103eed7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 103eed81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eed84 push ecx */
  push32((uint32_t)(ECX));
  /* 103eed85 call 0x103eee30 */
  push32(0x103eed8au); f_103eee30();
  /* 103eed8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eed8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103eed90:;
  /* 103eed90 mov esp, ebp */
  ESP = (EBP);
  /* 103eed92 pop ebp */
  EBP = (pop32());
  /* 103eed93 ret  */
  ESPCHK(0x103eec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eda0 @ 0x103eeda0 (134 bytes, 44 insns) */
void f_103eeda0(void) {
  FTRACE(0x103eeda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eeda0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eeda1 mov ebp, esp */
  EBP = (ESP);
  /* 103eeda3 push ecx */
  push32((uint32_t)(ECX));
  /* 103eeda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeda7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103eedaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eedad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103eedb0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eedb3 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103eedba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eedbc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103eedbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eedc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eedc6 jne 0x103eee01 */
  if (!C.zf) goto L_103eee01;
  /* 103eedc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103eedca call 0x103e90b0 */
  push32(0x103eedcfu); f_103e90b0();
  /* 103eedcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eedd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eedd5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eedd9 jne 0x103eedf7 */
  if (!C.zf) goto L_103eedf7;
  /* 103eeddb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eedde add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eede1 push edx */
  push32((uint32_t)(EDX));
  /* 103eede2 call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103eede8u);
  /* 103eede8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eedeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103eedee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eedf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eedf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_103eedf7:;
  /* 103eedf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103eedf9 call 0x103e9150 */
  push32(0x103eedfeu); f_103e9150();
  /* 103eedfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103eee01:;
  /* 103eee01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eee04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103eee07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eee0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103eee0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eee10 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103eee17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 103eee1b push eax */
  push32((uint32_t)(EAX));
  /* 103eee1c call dword ptr [0x10414340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414340))), 0x103eee22u);
  /* 103eee22 mov esp, ebp */
  ESP = (EBP);
  /* 103eee24 pop ebp */
  EBP = (pop32());
  /* 103eee25 ret  */
  ESPCHK(0x103eeda0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x103eee30 (38 bytes, 13 insns) */
void f_103eee30(void) {
  FTRACE(0x103eee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eee30 push ebp */
  push32((uint32_t)(EBP));
  /* 103eee31 mov ebp, esp */
  EBP = (ESP);
  /* 103eee33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eee36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103eee39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eee3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103eee3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103eee42 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103eee49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 103eee4d push eax */
  push32((uint32_t)(EAX));
  /* 103eee4e call dword ptr [0x1041433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041433c))), 0x103eee54u);
  /* 103eee54 pop ebp */
  EBP = (pop32());
  /* 103eee55 ret  */
  ESPCHK(0x103eee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x103eee60 (218 bytes, 63 insns) */
void f_103eee60(void) {
  FTRACE(0x103eee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eee60 push ebp */
  push32((uint32_t)(EBP));
  /* 103eee61 mov ebp, esp */
  EBP = (ESP);
  /* 103eee63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eee66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103eee6d push 2 */
  push32((uint32_t)(0x2u));
  /* 103eee6f call 0x103e90b0 */
  push32(0x103eee74u); f_103e90b0();
  /* 103eee74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eee77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 103eee7e jmp 0x103eee89 */
  goto L_103eee89;
L_103eee80:;
  /* 103eee80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eee83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eee86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103eee89:;
  /* 103eee89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eee8c cmp ecx, dword ptr [0x10412d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10412d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eee92 jge 0x103eef29 */
  if ((C.sf==C.of)) goto L_103eef29;
  /* 103eee98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eee9b mov eax, dword ptr [0x10411a08] */
  EAX = (r32((uint32_t)(0x10411a08)));
  /* 103eeea0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeea4 je 0x103eef24 */
  if (C.zf) goto L_103eef24;
  /* 103eeea6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eeea9 mov edx, dword ptr [0x10411a08] */
  EDX = (r32((uint32_t)(0x10411a08)));
  /* 103eeeaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103eeeb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103eeeb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 103eeebb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103eeebd je 0x103eeee1 */
  if (C.zf) goto L_103eeee1;
  /* 103eeebf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eeec2 mov eax, dword ptr [0x10411a08] */
  EAX = (r32((uint32_t)(0x10411a08)));
  /* 103eeec7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103eeeca push ecx */
  push32((uint32_t)(ECX));
  /* 103eeecb call 0x103efc50 */
  push32(0x103eeed0u); f_103efc50();
  /* 103eeed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eeed3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeed6 je 0x103eeee1 */
  if (C.zf) goto L_103eeee1;
  /* 103eeed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eeedb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eeede mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103eeee1:;
  /* 103eeee1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eeee5 jl 0x103eef24 */
  if ((C.sf!=C.of)) goto L_103eef24;
  /* 103eeee7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eeeea mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103eeef0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103eeef3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eeef6 push edx */
  push32((uint32_t)(EDX));
  /* 103eeef7 call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103eeefdu);
  /* 103eeefd push 2 */
  push32((uint32_t)(0x2u));
  /* 103eeeff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eef02 mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103eef08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103eef0b push edx */
  push32((uint32_t)(EDX));
  /* 103eef0c call 0x103e6140 */
  push32(0x103eef11u); f_103e6140();
  /* 103eef11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eef17 mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103eef1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_103eef24:;
  /* 103eef24 jmp 0x103eee80 */
  goto L_103eee80;
L_103eef29:;
  /* 103eef29 push 2 */
  push32((uint32_t)(0x2u));
  /* 103eef2b call 0x103e9150 */
  push32(0x103eef30u); f_103e9150();
  /* 103eef30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eef36 mov esp, ebp */
  ESP = (EBP);
  /* 103eef38 pop ebp */
  EBP = (pop32());
  /* 103eef39 ret  */
  ESPCHK(0x103eee60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x103eef40 (68 bytes, 26 insns) */
void f_103eef40(void) {
  FTRACE(0x103eef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eef40 push ebp */
  push32((uint32_t)(EBP));
  /* 103eef41 mov ebp, esp */
  EBP = (ESP);
  /* 103eef43 push ecx */
  push32((uint32_t)(ECX));
  /* 103eef44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eef48 jne 0x103eef56 */
  if (!C.zf) goto L_103eef56;
  /* 103eef4a push 0 */
  push32((uint32_t)(0x0u));
  /* 103eef4c call 0x103ef0b0 */
  push32(0x103eef51u); f_103ef0b0();
  /* 103eef51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef54 jmp 0x103eef80 */
  goto L_103eef80;
L_103eef56:;
  /* 103eef56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eef59 push eax */
  push32((uint32_t)(EAX));
  /* 103eef5a call 0x103ee4c0 */
  push32(0x103eef5fu); f_103ee4c0();
  /* 103eef5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eef65 push ecx */
  push32((uint32_t)(ECX));
  /* 103eef66 call 0x103eef90 */
  push32(0x103eef6bu); f_103eef90();
  /* 103eef6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103eef71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eef74 push edx */
  push32((uint32_t)(EDX));
  /* 103eef75 call 0x103ee530 */
  push32(0x103eef7au); f_103ee530();
  /* 103eef7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103eef80:;
  /* 103eef80 mov esp, ebp */
  ESP = (EBP);
  /* 103eef82 pop ebp */
  EBP = (pop32());
  /* 103eef83 ret  */
  ESPCHK(0x103eef40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef90 @ 0x103eef90 (65 bytes, 26 insns) */
void f_103eef90(void) {
  FTRACE(0x103eef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eef90 push ebp */
  push32((uint32_t)(EBP));
  /* 103eef91 mov ebp, esp */
  EBP = (ESP);
  /* 103eef93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eef96 push eax */
  push32((uint32_t)(EAX));
  /* 103eef97 call 0x103eefe0 */
  push32(0x103eef9cu); f_103eefe0();
  /* 103eef9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eef9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103eefa1 je 0x103eefa8 */
  if (C.zf) goto L_103eefa8;
  /* 103eefa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eefa6 jmp 0x103eefcf */
  goto L_103eefcf;
L_103eefa8:;
  /* 103eefa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eefab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103eefae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 103eefb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103eefb6 je 0x103eefcd */
  if (C.zf) goto L_103eefcd;
  /* 103eefb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eefbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103eefbe push ecx */
  push32((uint32_t)(ECX));
  /* 103eefbf call 0x103efda0 */
  push32(0x103eefc4u); f_103efda0();
  /* 103eefc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eefc7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103eefc9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eefcb jmp 0x103eefcf */
  goto L_103eefcf;
L_103eefcd:;
  /* 103eefcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103eefcf:;
  /* 103eefcf pop ebp */
  EBP = (pop32());
  /* 103eefd0 ret  */
  ESPCHK(0x103eef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efe0 @ 0x103eefe0 (183 bytes, 62 insns) */
void f_103eefe0(void) {
  FTRACE(0x103eefe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eefe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103eefe1 mov ebp, esp */
  EBP = (ESP);
  /* 103eefe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eefe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103eefed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eeff0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103eeff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103eeff6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103eeff9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103eeffc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eefff jne 0x103ef07b */
  if (!C.zf) goto L_103ef07b;
  /* 103ef001 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef004 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ef007 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 103ef00d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ef00f je 0x103ef07b */
  if (C.zf) goto L_103ef07b;
  /* 103ef011 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef014 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef017 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 103ef019 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef01c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103ef01f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef023 jle 0x103ef07b */
  if ((C.zf||C.sf!=C.of)) goto L_103ef07b;
  /* 103ef025 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef028 push edx */
  push32((uint32_t)(EDX));
  /* 103ef029 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef02c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ef02f push ecx */
  push32((uint32_t)(ECX));
  /* 103ef030 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef033 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103ef036 push eax */
  push32((uint32_t)(EAX));
  /* 103ef037 call 0x103edf50 */
  push32(0x103ef03cu); f_103edf50();
  /* 103ef03c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef03f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef042 jne 0x103ef065 */
  if (!C.zf) goto L_103ef065;
  /* 103ef044 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef047 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ef04a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 103ef050 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ef052 je 0x103ef063 */
  if (C.zf) goto L_103ef063;
  /* 103ef054 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef057 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ef05a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 103ef05d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef060 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_103ef063:;
  /* 103ef063 jmp 0x103ef07b */
  goto L_103ef07b;
L_103ef065:;
  /* 103ef065 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef068 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ef06b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103ef06e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef071 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103ef074 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103ef07b:;
  /* 103ef07b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef07e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef081 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103ef084 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103ef086 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef089 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 103ef090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef093 mov esp, ebp */
  ESP = (EBP);
  /* 103ef095 pop ebp */
  EBP = (pop32());
  /* 103ef096 ret  */
  ESPCHK(0x103eefe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0a0 @ 0x103ef0a0 (15 bytes, 7 insns) */
void f_103ef0a0(void) {
  FTRACE(0x103ef0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef0a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ef0a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ef0a5 call 0x103ef0b0 */
  push32(0x103ef0aau); f_103ef0b0();
  /* 103ef0aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef0ad pop ebp */
  EBP = (pop32());
  /* 103ef0ae ret  */
  ESPCHK(0x103ef0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x103ef0b0 (319 bytes, 94 insns) */
void f_103ef0b0(void) {
  FTRACE(0x103ef0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef0b1 mov ebp, esp */
  EBP = (ESP);
  /* 103ef0b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef0b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ef0bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103ef0c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef0c6 call 0x103e90b0 */
  push32(0x103ef0cbu); f_103e90b0();
  /* 103ef0cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef0ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ef0d5 jmp 0x103ef0e0 */
  goto L_103ef0e0;
L_103ef0d7:;
  /* 103ef0d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef0da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef0dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ef0e0:;
  /* 103ef0e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef0e3 cmp ecx, dword ptr [0x10412d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10412d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef0e9 jge 0x103ef1d3 */
  if ((C.sf==C.of)) goto L_103ef1d3;
  /* 103ef0ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef0f2 mov eax, dword ptr [0x10411a08] */
  EAX = (r32((uint32_t)(0x10411a08)));
  /* 103ef0f7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef0fb je 0x103ef1ce */
  if (C.zf) goto L_103ef1ce;
  /* 103ef101 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef104 mov edx, dword ptr [0x10411a08] */
  EDX = (r32((uint32_t)(0x10411a08)));
  /* 103ef10a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103ef10d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ef110 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 103ef116 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ef118 je 0x103ef1ce */
  if (C.zf) goto L_103ef1ce;
  /* 103ef11e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef121 mov eax, dword ptr [0x10411a08] */
  EAX = (r32((uint32_t)(0x10411a08)));
  /* 103ef126 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103ef129 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef12a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef12d push edx */
  push32((uint32_t)(EDX));
  /* 103ef12e call 0x103ee500 */
  push32(0x103ef133u); f_103ee500();
  /* 103ef133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef136 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef139 mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103ef13f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ef142 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103ef145 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 103ef14a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef14c je 0x103ef1b5 */
  if (C.zf) goto L_103ef1b5;
  /* 103ef14e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef152 jne 0x103ef179 */
  if (!C.zf) goto L_103ef179;
  /* 103ef154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef157 mov edx, dword ptr [0x10411a08] */
  EDX = (r32((uint32_t)(0x10411a08)));
  /* 103ef15d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103ef160 push eax */
  push32((uint32_t)(EAX));
  /* 103ef161 call 0x103eef90 */
  push32(0x103ef166u); f_103eef90();
  /* 103ef166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef169 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef16c je 0x103ef177 */
  if (C.zf) goto L_103ef177;
  /* 103ef16e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef171 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef174 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ef177:;
  /* 103ef177 jmp 0x103ef1b5 */
  goto L_103ef1b5;
L_103ef179:;
  /* 103ef179 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef17d jne 0x103ef1b5 */
  if (!C.zf) goto L_103ef1b5;
  /* 103ef17f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef182 mov eax, dword ptr [0x10411a08] */
  EAX = (r32((uint32_t)(0x10411a08)));
  /* 103ef187 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103ef18a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ef18d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103ef190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ef192 je 0x103ef1b5 */
  if (C.zf) goto L_103ef1b5;
  /* 103ef194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef197 mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103ef19d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ef1a0 push edx */
  push32((uint32_t)(EDX));
  /* 103ef1a1 call 0x103eef90 */
  push32(0x103ef1a6u); f_103eef90();
  /* 103ef1a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef1a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef1ac jne 0x103ef1b5 */
  if (!C.zf) goto L_103ef1b5;
  /* 103ef1ae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_103ef1b5:;
  /* 103ef1b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef1b8 mov ecx, dword ptr [0x10411a08] */
  ECX = (r32((uint32_t)(0x10411a08)));
  /* 103ef1be mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ef1c1 push edx */
  push32((uint32_t)(EDX));
  /* 103ef1c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef1c5 push eax */
  push32((uint32_t)(EAX));
  /* 103ef1c6 call 0x103ee570 */
  push32(0x103ef1cbu); f_103ee570();
  /* 103ef1cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ef1ce:;
  /* 103ef1ce jmp 0x103ef0d7 */
  goto L_103ef0d7;
L_103ef1d3:;
  /* 103ef1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef1d5 call 0x103e9150 */
  push32(0x103ef1dau); f_103e9150();
  /* 103ef1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef1dd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef1e1 jne 0x103ef1e8 */
  if (!C.zf) goto L_103ef1e8;
  /* 103ef1e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef1e6 jmp 0x103ef1eb */
  goto L_103ef1eb;
L_103ef1e8:;
  /* 103ef1e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103ef1eb:;
  /* 103ef1eb mov esp, ebp */
  ESP = (EBP);
  /* 103ef1ed pop ebp */
  EBP = (pop32());
  /* 103ef1ee ret  */
  ESPCHK(0x103ef0b0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x103ef1f0 (15 bytes, 7 insns) */
void f_103ef1f0(void) {
  FTRACE(0x103ef1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef1f1 mov ebp, esp */
  EBP = (ESP);
  /* 103ef1f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef1f5 call 0x103e4620 */
  push32(0x103ef1fau); f_103e4620();
  /* 103ef1fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef1fd pop ebp */
  EBP = (pop32());
  /* 103ef1fe ret  */
  ESPCHK(0x103ef1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x103ef200 (1007 bytes, 269 insns) */
void f_103ef200(void) {
  FTRACE(0x103ef200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef200 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef201 mov ebp, esp */
  EBP = (ESP);
  /* 103ef203 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef209 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef20d jl 0x103ef215 */
  if ((C.sf!=C.of)) goto L_103ef215;
  /* 103ef20f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef213 jle 0x103ef21c */
  if ((C.zf||C.sf!=C.of)) goto L_103ef21c;
L_103ef215:;
  /* 103ef215 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef217 jmp 0x103ef5eb */
  goto L_103ef5eb;
L_103ef21c:;
  /* 103ef21c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ef21e call 0x103e90b0 */
  push32(0x103ef223u); f_103e90b0();
  /* 103ef223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef226 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ef22d mov eax, dword ptr [0x104119f4] */
  EAX = (r32((uint32_t)(0x104119f4)));
  /* 103ef232 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef235 mov dword ptr [0x104119f4], eax */
  w32((uint32_t)(0x104119f4), (EAX));
L_103ef23a:;
  /* 103ef23a cmp dword ptr [0x10411a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef241 je 0x103ef24d */
  if (C.zf) goto L_103ef24d;
  /* 103ef243 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ef245 call dword ptr [0x104142f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142f8))), 0x103ef24bu);
  /* 103ef24b jmp 0x103ef23a */
  goto L_103ef23a;
L_103ef24d:;
  /* 103ef24d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef251 je 0x103ef291 */
  if (C.zf) goto L_103ef291;
  /* 103ef253 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef257 je 0x103ef271 */
  if (C.zf) goto L_103ef271;
  /* 103ef259 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef25c push ecx */
  push32((uint32_t)(ECX));
  /* 103ef25d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef260 push edx */
  push32((uint32_t)(EDX));
  /* 103ef261 call 0x103ef5f0 */
  push32(0x103ef266u); f_103ef5f0();
  /* 103ef266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef269 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 103ef26f jmp 0x103ef283 */
  goto L_103ef283;
L_103ef271:;
  /* 103ef271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef274 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef277 mov ecx, dword ptr [eax + 0x104104dc] */
  ECX = (r32((uint32_t)(EAX + 0x104104dc)));
  /* 103ef27d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_103ef283:;
  /* 103ef283 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 103ef289 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103ef28c jmp 0x103ef5cb */
  goto L_103ef5cb;
L_103ef291:;
  /* 103ef291 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 103ef298 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ef29f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef2a3 je 0x103ef5c3 */
  if (C.zf) goto L_103ef5c3;
  /* 103ef2a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef2ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ef2af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef2b2 jne 0x103ef4d4 */
  if (!C.zf) goto L_103ef4d4;
  /* 103ef2b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef2bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103ef2bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef2c2 jne 0x103ef4d4 */
  if (!C.zf) goto L_103ef4d4;
  /* 103ef2c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef2cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 103ef2cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef2d2 jne 0x103ef4d4 */
  if (!C.zf) goto L_103ef4d4;
  /* 103ef2d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef2db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_103ef2e1:;
  /* 103ef2e1 push 0x1040d32c */
  push32((uint32_t)(0x1040d32cu));
  /* 103ef2e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103ef2ec push ecx */
  push32((uint32_t)(ECX));
  /* 103ef2ed call 0x103f1450 */
  push32(0x103ef2f2u); f_103f1450();
  /* 103ef2f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef2f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 103ef2fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef302 je 0x103ef32d */
  if (C.zf) goto L_103ef32d;
  /* 103ef304 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef30a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef310 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 103ef316 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef31d je 0x103ef32d */
  if (C.zf) goto L_103ef32d;
  /* 103ef31f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef325 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ef328 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef32b jne 0x103ef353 */
  if (!C.zf) goto L_103ef353;
L_103ef32d:;
  /* 103ef32d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef331 je 0x103ef34c */
  if (C.zf) goto L_103ef34c;
  /* 103ef333 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ef335 call 0x103e9150 */
  push32(0x103ef33au); f_103e9150();
  /* 103ef33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef33d mov edx, dword ptr [0x104119f4] */
  EDX = (r32((uint32_t)(0x104119f4)));
  /* 103ef343 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef346 mov dword ptr [0x104119f4], edx */
  w32((uint32_t)(0x104119f4), (EDX));
L_103ef34c:;
  /* 103ef34c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef34e jmp 0x103ef5eb */
  goto L_103ef5eb;
L_103ef353:;
  /* 103ef353 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103ef35a jmp 0x103ef365 */
  goto L_103ef365;
L_103ef35c:;
  /* 103ef35c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef35f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef362 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103ef365:;
  /* 103ef365 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef369 jg 0x103ef3b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ef3b3;
  /* 103ef36b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103ef371 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef372 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103ef378 push edx */
  push32((uint32_t)(EDX));
  /* 103ef379 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef37c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef37f mov ecx, dword ptr [eax + 0x104104d8] */
  ECX = (r32((uint32_t)(EAX + 0x104104d8)));
  /* 103ef385 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef386 call 0x103f1410 */
  push32(0x103ef38bu); f_103f1410();
  /* 103ef38b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef38e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef390 jne 0x103ef3b1 */
  if (!C.zf) goto L_103ef3b1;
  /* 103ef392 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef395 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef398 mov eax, dword ptr [edx + 0x104104d8] */
  EAX = (r32((uint32_t)(EDX + 0x104104d8)));
  /* 103ef39e push eax */
  push32((uint32_t)(EAX));
  /* 103ef39f call 0x103e84e0 */
  push32(0x103ef3a4u); f_103e84e0();
  /* 103ef3a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef3a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef3ad jne 0x103ef3b1 */
  if (!C.zf) goto L_103ef3b1;
  /* 103ef3af jmp 0x103ef3b3 */
  goto L_103ef3b3;
L_103ef3b1:;
  /* 103ef3b1 jmp 0x103ef35c */
  goto L_103ef35c;
L_103ef3b3:;
  /* 103ef3b3 push 0x1040d328 */
  push32((uint32_t)(0x1040d328u));
  /* 103ef3b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef3be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef3c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 103ef3c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef3cd push edx */
  push32((uint32_t)(EDX));
  /* 103ef3ce call 0x103f13d0 */
  push32(0x103ef3d3u); f_103f13d0();
  /* 103ef3d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef3d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 103ef3dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef3e3 jne 0x103ef419 */
  if (!C.zf) goto L_103ef419;
  /* 103ef3e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef3eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ef3ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef3f1 je 0x103ef419 */
  if (C.zf) goto L_103ef419;
  /* 103ef3f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef3f7 je 0x103ef412 */
  if (C.zf) goto L_103ef412;
  /* 103ef3f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ef3fb call 0x103e9150 */
  push32(0x103ef400u); f_103e9150();
  /* 103ef400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef403 mov edx, dword ptr [0x104119f4] */
  EDX = (r32((uint32_t)(0x104119f4)));
  /* 103ef409 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef40c mov dword ptr [0x104119f4], edx */
  w32((uint32_t)(0x104119f4), (EDX));
L_103ef412:;
  /* 103ef412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef414 jmp 0x103ef5eb */
  goto L_103ef5eb;
L_103ef419:;
  /* 103ef419 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef41d jg 0x103ef46a */
  if ((!C.zf&&C.sf==C.of)) goto L_103ef46a;
  /* 103ef41f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103ef425 push eax */
  push32((uint32_t)(EAX));
  /* 103ef426 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef42c push ecx */
  push32((uint32_t)(ECX));
  /* 103ef42d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 103ef433 push edx */
  push32((uint32_t)(EDX));
  /* 103ef434 call 0x103e8ed0 */
  push32(0x103ef439u); f_103e8ed0();
  /* 103ef439 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef43c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103ef442 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 103ef44a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 103ef450 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef451 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef454 push edx */
  push32((uint32_t)(EDX));
  /* 103ef455 call 0x103ef5f0 */
  push32(0x103ef45au); f_103ef5f0();
  /* 103ef45a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef45d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef45f je 0x103ef46a */
  if (C.zf) goto L_103ef46a;
  /* 103ef461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef464 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef467 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ef46a:;
  /* 103ef46a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef470 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef476 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 103ef47c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103ef482 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103ef485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef487 je 0x103ef498 */
  if (C.zf) goto L_103ef498;
  /* 103ef489 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103ef48f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef492 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_103ef498:;
  /* 103ef498 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103ef49e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103ef4a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef4a3 jne 0x103ef2e1 */
  if (!C.zf) goto L_103ef2e1;
  /* 103ef4a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef4ad je 0x103ef4bc */
  if (C.zf) goto L_103ef4bc;
  /* 103ef4af call 0x103ef790 */
  push32(0x103ef4b4u); f_103ef790();
  /* 103ef4b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 103ef4ba jmp 0x103ef4c6 */
  goto L_103ef4c6;
L_103ef4bc:;
  /* 103ef4bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_103ef4c6:;
  /* 103ef4c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 103ef4cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ef4cf jmp 0x103ef5c1 */
  goto L_103ef5c1;
L_103ef4d4:;
  /* 103ef4d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef4d7 push edx */
  push32((uint32_t)(EDX));
  /* 103ef4d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ef4da push 0 */
  push32((uint32_t)(0x0u));
  /* 103ef4dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 103ef4e2 push eax */
  push32((uint32_t)(EAX));
  /* 103ef4e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef4e7 call 0x103ef890 */
  push32(0x103ef4ecu); f_103ef890();
  /* 103ef4ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef4ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ef4f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef4f6 je 0x103ef5c1 */
  if (C.zf) goto L_103ef5c1;
  /* 103ef4fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103ef503 jmp 0x103ef50e */
  goto L_103ef50e;
L_103ef505:;
  /* 103ef505 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef50b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103ef50e:;
  /* 103ef50e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef512 jg 0x103ef570 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ef570;
  /* 103ef514 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef518 je 0x103ef56e */
  if (C.zf) goto L_103ef56e;
  /* 103ef51a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef51d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef520 mov ecx, dword ptr [eax + 0x104104dc] */
  ECX = (r32((uint32_t)(EAX + 0x104104dc)));
  /* 103ef526 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef527 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 103ef52d push edx */
  push32((uint32_t)(EDX));
  /* 103ef52e call 0x103f1340 */
  push32(0x103ef533u); f_103f1340();
  /* 103ef533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef538 je 0x103ef565 */
  if (C.zf) goto L_103ef565;
  /* 103ef53a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 103ef540 push eax */
  push32((uint32_t)(EAX));
  /* 103ef541 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ef544 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef545 call 0x103ef5f0 */
  push32(0x103ef54au); f_103ef5f0();
  /* 103ef54a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef54f je 0x103ef55c */
  if (C.zf) goto L_103ef55c;
  /* 103ef551 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef554 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef557 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103ef55a jmp 0x103ef563 */
  goto L_103ef563;
L_103ef55c:;
  /* 103ef55c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_103ef563:;
  /* 103ef563 jmp 0x103ef56e */
  goto L_103ef56e;
L_103ef565:;
  /* 103ef565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef568 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef56b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ef56e:;
  /* 103ef56e jmp 0x103ef505 */
  goto L_103ef505;
L_103ef570:;
  /* 103ef570 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef574 je 0x103ef59b */
  if (C.zf) goto L_103ef59b;
  /* 103ef576 call 0x103ef790 */
  push32(0x103ef57bu); f_103ef790();
  /* 103ef57b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ef57e push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef580 mov ecx, dword ptr [0x104104dc] */
  ECX = (r32((uint32_t)(0x104104dc)));
  /* 103ef586 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef587 call 0x103e6140 */
  push32(0x103ef58cu); f_103e6140();
  /* 103ef58c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef58f mov dword ptr [0x104104dc], 0 */
  w32((uint32_t)(0x104104dc), (0x0u));
  /* 103ef599 jmp 0x103ef5c1 */
  goto L_103ef5c1;
L_103ef59b:;
  /* 103ef59b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef59f je 0x103ef5ae */
  if (C.zf) goto L_103ef5ae;
  /* 103ef5a1 call 0x103ef790 */
  push32(0x103ef5a6u); f_103ef790();
  /* 103ef5a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 103ef5ac jmp 0x103ef5b8 */
  goto L_103ef5b8;
L_103ef5ae:;
  /* 103ef5ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_103ef5b8:;
  /* 103ef5b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 103ef5be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103ef5c1:;
  /* 103ef5c1 jmp 0x103ef5cb */
  goto L_103ef5cb;
L_103ef5c3:;
  /* 103ef5c3 call 0x103ef790 */
  push32(0x103ef5c8u); f_103ef790();
  /* 103ef5c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103ef5cb:;
  /* 103ef5cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef5cf je 0x103ef5e8 */
  if (C.zf) goto L_103ef5e8;
  /* 103ef5d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ef5d3 call 0x103e9150 */
  push32(0x103ef5d8u); f_103e9150();
  /* 103ef5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef5db mov eax, dword ptr [0x104119f4] */
  EAX = (r32((uint32_t)(0x104119f4)));
  /* 103ef5e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef5e3 mov dword ptr [0x104119f4], eax */
  w32((uint32_t)(0x104119f4), (EAX));
L_103ef5e8:;
  /* 103ef5e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103ef5eb:;
  /* 103ef5eb mov esp, ebp */
  ESP = (EBP);
  /* 103ef5ed pop ebp */
  EBP = (pop32());
  /* 103ef5ee ret  */
  ESPCHK(0x103ef200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x103ef5f0 (403 bytes, 117 insns) */
void f_103ef5f0(void) {
  FTRACE(0x103ef5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef5f1 mov ebp, esp */
  EBP = (ESP);
  /* 103ef5f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef5f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef5fc push eax */
  push32((uint32_t)(EAX));
  /* 103ef5fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 103ef603 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef604 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 103ef60a push edx */
  push32((uint32_t)(EDX));
  /* 103ef60b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 103ef611 push eax */
  push32((uint32_t)(EAX));
  /* 103ef612 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef615 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef616 call 0x103ef890 */
  push32(0x103ef61bu); f_103ef890();
  /* 103ef61b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef61e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef620 jne 0x103ef629 */
  if (!C.zf) goto L_103ef629;
  /* 103ef622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef624 jmp 0x103ef77f */
  goto L_103ef77f;
L_103ef629:;
  /* 103ef629 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 103ef62e push 0x1040d330 */
  push32((uint32_t)(0x1040d330u));
  /* 103ef633 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef635 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 103ef63b push edx */
  push32((uint32_t)(EDX));
  /* 103ef63c call 0x103e84e0 */
  push32(0x103ef641u); f_103e84e0();
  /* 103ef641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef647 push eax */
  push32((uint32_t)(EAX));
  /* 103ef648 call 0x103e56b0 */
  push32(0x103ef64du); f_103e56b0();
  /* 103ef64d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef650 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ef653 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef657 jne 0x103ef660 */
  if (!C.zf) goto L_103ef660;
  /* 103ef659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef65b jmp 0x103ef77f */
  goto L_103ef77f;
L_103ef660:;
  /* 103ef660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef663 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef666 mov ecx, dword ptr [eax + 0x104104dc] */
  ECX = (r32((uint32_t)(EAX + 0x104104dc)));
  /* 103ef66c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103ef66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef672 mov eax, dword ptr [edx*4 + 0x10411870] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10411870)));
  /* 103ef679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ef67c push 6 */
  push32((uint32_t)(0x6u));
  /* 103ef67e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef681 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef684 add ecx, 0x104118c0 */
  { uint32_t _a=(ECX),_b=(0x104118c0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef68a push ecx */
  push32((uint32_t)(ECX));
  /* 103ef68b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 103ef68e push edx */
  push32((uint32_t)(EDX));
  /* 103ef68f call 0x103ebf90 */
  push32(0x103ef694u); f_103ebf90();
  /* 103ef694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef697 mov eax, dword ptr [0x10411888] */
  EAX = (r32((uint32_t)(0x10411888)));
  /* 103ef69c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103ef69f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 103ef6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef6a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef6a9 push edx */
  push32((uint32_t)(EDX));
  /* 103ef6aa call 0x103e8660 */
  push32(0x103ef6afu); f_103e8660();
  /* 103ef6af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef6b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef6b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef6b8 mov dword ptr [ecx + 0x104104dc], eax */
  w32((uint32_t)(ECX + 0x104104dc), (EAX));
  /* 103ef6be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 103ef6c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103ef6ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef6cd mov dword ptr [eax*4 + 0x10411870], edx */
  w32((uint32_t)(EAX*4 + 0x10411870), (EDX));
  /* 103ef6d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 103ef6d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 103ef6dc push ecx */
  push32((uint32_t)(ECX));
  /* 103ef6dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef6e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef6e3 add edx, 0x104118c0 */
  { uint32_t _a=(EDX),_b=(0x104118c0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef6e9 push edx */
  push32((uint32_t)(EDX));
  /* 103ef6ea call 0x103ebf90 */
  push32(0x103ef6efu); f_103ebf90();
  /* 103ef6ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef6f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef6f6 jne 0x103ef703 */
  if (!C.zf) goto L_103ef703;
  /* 103ef6f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef6fe mov dword ptr [0x10411888], eax */
  w32((uint32_t)(0x10411888), (EAX));
L_103ef703:;
  /* 103ef703 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef707 jne 0x103ef715 */
  if (!C.zf) goto L_103ef715;
  /* 103ef709 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103ef70f mov dword ptr [0x1041188c], ecx */
  w32((uint32_t)(0x1041188c), (ECX));
L_103ef715:;
  /* 103ef715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef718 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef71b call dword ptr [edx + 0x104104e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x104104e0))), 0x103ef721u);
  /* 103ef721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef723 je 0x103ef75c */
  if (C.zf) goto L_103ef75c;
  /* 103ef725 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef728 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef72b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef72e mov dword ptr [eax + 0x104104dc], ecx */
  w32((uint32_t)(EAX + 0x104104dc), (ECX));
  /* 103ef734 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef736 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ef739 push edx */
  push32((uint32_t)(EDX));
  /* 103ef73a call 0x103e6140 */
  push32(0x103ef73fu); f_103e6140();
  /* 103ef73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef748 mov dword ptr [eax*4 + 0x10411870], ecx */
  w32((uint32_t)(EAX*4 + 0x10411870), (ECX));
  /* 103ef74f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103ef752 mov dword ptr [0x10411888], edx */
  w32((uint32_t)(0x10411888), (EDX));
  /* 103ef758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef75a jmp 0x103ef77f */
  goto L_103ef77f;
L_103ef75c:;
  /* 103ef75c cmp dword ptr [ebp - 0xc], 0x104103c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x104103c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef763 je 0x103ef773 */
  if (C.zf) goto L_103ef773;
  /* 103ef765 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ef76a push eax */
  push32((uint32_t)(EAX));
  /* 103ef76b call 0x103e6140 */
  push32(0x103ef770u); f_103e6140();
  /* 103ef770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ef773:;
  /* 103ef773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef776 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef779 mov eax, dword ptr [ecx + 0x104104dc] */
  EAX = (r32((uint32_t)(ECX + 0x104104dc)));
L_103ef77f:;
  /* 103ef77f mov esp, ebp */
  ESP = (EBP);
  /* 103ef781 pop ebp */
  EBP = (pop32());
  /* 103ef782 ret  */
  ESPCHK(0x103ef5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f790 @ 0x103ef790 (256 bytes, 72 insns) */
void f_103ef790(void) {
  FTRACE(0x103ef790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef790 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef791 mov ebp, esp */
  EBP = (ESP);
  /* 103ef793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef796 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103ef79d cmp dword ptr [0x104104dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104104dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef7a4 jne 0x103ef7c4 */
  if (!C.zf) goto L_103ef7c4;
  /* 103ef7a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 103ef7ab push 0x1040d330 */
  push32((uint32_t)(0x1040d330u));
  /* 103ef7b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef7b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 103ef7b7 call 0x103e56b0 */
  push32(0x103ef7bcu); f_103e56b0();
  /* 103ef7bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef7bf mov dword ptr [0x104104dc], eax */
  w32((uint32_t)(0x104104dc), (EAX));
L_103ef7c4:;
  /* 103ef7c4 mov eax, dword ptr [0x104104dc] */
  EAX = (r32((uint32_t)(0x104104dc)));
  /* 103ef7c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103ef7cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ef7d3 jmp 0x103ef7de */
  goto L_103ef7de;
L_103ef7d5:;
  /* 103ef7d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef7d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef7db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ef7de:;
  /* 103ef7de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef7e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef7e4 mov eax, dword ptr [edx + 0x104104dc] */
  EAX = (r32((uint32_t)(EDX + 0x104104dc)));
  /* 103ef7ea push eax */
  push32((uint32_t)(EAX));
  /* 103ef7eb push 0x1040d33c */
  push32((uint32_t)(0x1040d33cu));
  /* 103ef7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef7f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef7f6 mov edx, dword ptr [ecx + 0x104104d8] */
  EDX = (r32((uint32_t)(ECX + 0x104104d8)));
  /* 103ef7fc push edx */
  push32((uint32_t)(EDX));
  /* 103ef7fd push 3 */
  push32((uint32_t)(0x3u));
  /* 103ef7ff mov eax, dword ptr [0x104104dc] */
  EAX = (r32((uint32_t)(0x104104dc)));
  /* 103ef804 push eax */
  push32((uint32_t)(EAX));
  /* 103ef805 call 0x103efa30 */
  push32(0x103ef80au); f_103efa30();
  /* 103ef80a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef80d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef811 jge 0x103ef859 */
  if ((C.sf==C.of)) goto L_103ef859;
  /* 103ef813 push 0x1040d328 */
  push32((uint32_t)(0x1040d328u));
  /* 103ef818 mov ecx, dword ptr [0x104104dc] */
  ECX = (r32((uint32_t)(0x104104dc)));
  /* 103ef81e push ecx */
  push32((uint32_t)(ECX));
  /* 103ef81f call 0x103e8670 */
  push32(0x103ef824u); f_103e8670();
  /* 103ef824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef827 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef82a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef82d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef830 mov eax, dword ptr [edx + 0x104104dc] */
  EAX = (r32((uint32_t)(EDX + 0x104104dc)));
  /* 103ef836 push eax */
  push32((uint32_t)(EAX));
  /* 103ef837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ef83a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ef83d mov edx, dword ptr [ecx + 0x104104dc] */
  EDX = (r32((uint32_t)(ECX + 0x104104dc)));
  /* 103ef843 push edx */
  push32((uint32_t)(EDX));
  /* 103ef844 call 0x103f1340 */
  push32(0x103ef849u); f_103f1340();
  /* 103ef849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef84c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef84e je 0x103ef857 */
  if (C.zf) goto L_103ef857;
  /* 103ef850 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103ef857:;
  /* 103ef857 jmp 0x103ef887 */
  goto L_103ef887;
L_103ef859:;
  /* 103ef859 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef85d jne 0x103ef866 */
  if (!C.zf) goto L_103ef866;
  /* 103ef85f mov eax, dword ptr [0x104104dc] */
  EAX = (r32((uint32_t)(0x104104dc)));
  /* 103ef864 jmp 0x103ef88c */
  goto L_103ef88c;
L_103ef866:;
  /* 103ef866 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ef868 mov eax, dword ptr [0x104104dc] */
  EAX = (r32((uint32_t)(0x104104dc)));
  /* 103ef86d push eax */
  push32((uint32_t)(EAX));
  /* 103ef86e call 0x103e6140 */
  push32(0x103ef873u); f_103e6140();
  /* 103ef873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef876 mov dword ptr [0x104104dc], 0 */
  w32((uint32_t)(0x104104dc), (0x0u));
  /* 103ef880 mov eax, dword ptr [0x104104f4] */
  EAX = (r32((uint32_t)(0x104104f4)));
  /* 103ef885 jmp 0x103ef88c */
  goto L_103ef88c;
L_103ef887:;
  /* 103ef887 jmp 0x103ef7d5 */
  goto L_103ef7d5;
L_103ef88c:;
  /* 103ef88c mov esp, ebp */
  ESP = (EBP);
  /* 103ef88e pop ebp */
  EBP = (pop32());
  /* 103ef88f ret  */
  ESPCHK(0x103ef790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x103ef890 (388 bytes, 115 insns) */
void f_103ef890(void) {
  FTRACE(0x103ef890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ef890 push ebp */
  push32((uint32_t)(EBP));
  /* 103ef891 mov ebp, esp */
  EBP = (ESP);
  /* 103ef893 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ef899 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef89d jne 0x103ef8a6 */
  if (!C.zf) goto L_103ef8a6;
  /* 103ef89f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef8a1 jmp 0x103efa10 */
  goto L_103efa10;
L_103ef8a6:;
  /* 103ef8a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef8a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ef8ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef8af jne 0x103ef900 */
  if (!C.zf) goto L_103ef900;
  /* 103ef8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef8b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103ef8b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef8ba jne 0x103ef900 */
  if (!C.zf) goto L_103ef900;
  /* 103ef8bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef8bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 103ef8c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef8c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 103ef8c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef8cd je 0x103ef8e9 */
  if (C.zf) goto L_103ef8e9;
  /* 103ef8cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ef8d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 103ef8d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ef8da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 103ef8e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ef8e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_103ef8e9:;
  /* 103ef8e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef8ed je 0x103ef8f8 */
  if (C.zf) goto L_103ef8f8;
  /* 103ef8ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ef8f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103ef8f8:;
  /* 103ef8f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ef8fb jmp 0x103efa10 */
  goto L_103efa10;
L_103ef900:;
  /* 103ef900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef903 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef904 push 0x10410450 */
  push32((uint32_t)(0x10410450u));
  /* 103ef909 call 0x103f1340 */
  push32(0x103ef90eu); f_103f1340();
  /* 103ef90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef913 je 0x103ef9c8 */
  if (C.zf) goto L_103ef9c8;
  /* 103ef919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef91c push edx */
  push32((uint32_t)(EDX));
  /* 103ef91d push 0x104103cc */
  push32((uint32_t)(0x104103ccu));
  /* 103ef922 call 0x103f1340 */
  push32(0x103ef927u); f_103f1340();
  /* 103ef927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef92a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef92c je 0x103ef9c8 */
  if (C.zf) goto L_103ef9c8;
  /* 103ef932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef935 push eax */
  push32((uint32_t)(EAX));
  /* 103ef936 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 103ef93c push ecx */
  push32((uint32_t)(ECX));
  /* 103ef93d call 0x103efa80 */
  push32(0x103ef942u); f_103efa80();
  /* 103ef942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef947 je 0x103ef950 */
  if (C.zf) goto L_103ef950;
  /* 103ef949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef94b jmp 0x103efa10 */
  goto L_103efa10;
L_103ef950:;
  /* 103ef950 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 103ef956 push edx */
  push32((uint32_t)(EDX));
  /* 103ef957 push 0x10411898 */
  push32((uint32_t)(0x10411898u));
  /* 103ef95c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 103ef962 push eax */
  push32((uint32_t)(EAX));
  /* 103ef963 call 0x103f1490 */
  push32(0x103ef968u); f_103f1490();
  /* 103ef968 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ef96d jne 0x103ef976 */
  if (!C.zf) goto L_103ef976;
  /* 103ef96f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ef971 jmp 0x103efa10 */
  goto L_103efa10;
L_103ef976:;
  /* 103ef976 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ef978 mov cx, word ptr [0x1041189c] */
  CX = (r16((uint32_t)(0x1041189c)));
  /* 103ef97f mov dword ptr [0x104118a0], ecx */
  w32((uint32_t)(0x104118a0), (ECX));
  /* 103ef985 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 103ef98b push edx */
  push32((uint32_t)(EDX));
  /* 103ef98c push 0x10410450 */
  push32((uint32_t)(0x10410450u));
  /* 103ef991 call 0x103efbe0 */
  push32(0x103ef996u); f_103efbe0();
  /* 103ef996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef99c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ef99f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ef9a1 je 0x103ef9b6 */
  if (C.zf) goto L_103ef9b6;
  /* 103ef9a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ef9a6 push edx */
  push32((uint32_t)(EDX));
  /* 103ef9a7 push 0x104103cc */
  push32((uint32_t)(0x104103ccu));
  /* 103ef9ac call 0x103e8660 */
  push32(0x103ef9b1u); f_103e8660();
  /* 103ef9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ef9b4 jmp 0x103ef9c8 */
  goto L_103ef9c8;
L_103ef9b6:;
  /* 103ef9b6 push 0x10410450 */
  push32((uint32_t)(0x10410450u));
  /* 103ef9bb push 0x104103cc */
  push32((uint32_t)(0x104103ccu));
  /* 103ef9c0 call 0x103e8660 */
  push32(0x103ef9c5u); f_103e8660();
  /* 103ef9c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ef9c8:;
  /* 103ef9c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef9cc je 0x103ef9e1 */
  if (C.zf) goto L_103ef9e1;
  /* 103ef9ce push 6 */
  push32((uint32_t)(0x6u));
  /* 103ef9d0 push 0x10411898 */
  push32((uint32_t)(0x10411898u));
  /* 103ef9d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ef9d8 push eax */
  push32((uint32_t)(EAX));
  /* 103ef9d9 call 0x103ebf90 */
  push32(0x103ef9deu); f_103ebf90();
  /* 103ef9de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ef9e1:;
  /* 103ef9e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ef9e5 je 0x103ef9fa */
  if (C.zf) goto L_103ef9fa;
  /* 103ef9e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 103ef9e9 push 0x104118a0 */
  push32((uint32_t)(0x104118a0u));
  /* 103ef9ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ef9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 103ef9f2 call 0x103ebf90 */
  push32(0x103ef9f7u); f_103ebf90();
  /* 103ef9f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ef9fa:;
  /* 103ef9fa push 0x10410450 */
  push32((uint32_t)(0x10410450u));
  /* 103ef9ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efa02 push edx */
  push32((uint32_t)(EDX));
  /* 103efa03 call 0x103e8660 */
  push32(0x103efa08u); f_103e8660();
  /* 103efa08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efa0b mov eax, 0x10410450 */
  EAX = (0x10410450u);
L_103efa10:;
  /* 103efa10 mov esp, ebp */
  ESP = (EBP);
  /* 103efa12 pop ebp */
  EBP = (pop32());
  /* 103efa13 ret  */
  ESPCHK(0x103ef890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x103efa20 (7 bytes, 5 insns) */
void f_103efa20(void) {
  FTRACE(0x103efa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efa20 push ebp */
  push32((uint32_t)(EBP));
  /* 103efa21 mov ebp, esp */
  EBP = (ESP);
  /* 103efa23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103efa25 pop ebp */
  EBP = (pop32());
  /* 103efa26 ret  */
  ESPCHK(0x103efa20u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x103efa30 (79 bytes, 28 insns) */
void f_103efa30(void) {
  FTRACE(0x103efa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efa30 push ebp */
  push32((uint32_t)(EBP));
  /* 103efa31 mov ebp, esp */
  EBP = (ESP);
  /* 103efa33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103efa36 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103efa39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efa3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103efa43 jmp 0x103efa4e */
  goto L_103efa4e;
L_103efa45:;
  /* 103efa45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efa48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efa4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103efa4e:;
  /* 103efa4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efa51 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efa54 jge 0x103efa74 */
  if ((C.sf==C.of)) goto L_103efa74;
  /* 103efa56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efa59 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efa5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efa5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efa62 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103efa65 push edx */
  push32((uint32_t)(EDX));
  /* 103efa66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efa69 push eax */
  push32((uint32_t)(EAX));
  /* 103efa6a call 0x103e8670 */
  push32(0x103efa6fu); f_103e8670();
  /* 103efa6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efa72 jmp 0x103efa45 */
  goto L_103efa45;
L_103efa74:;
  /* 103efa74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103efa7b mov esp, ebp */
  ESP = (EBP);
  /* 103efa7d pop ebp */
  EBP = (pop32());
  /* 103efa7e ret  */
  ESPCHK(0x103efa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa80 @ 0x103efa80 (349 bytes, 122 insns) */
void f_103efa80(void) {
  FTRACE(0x103efa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efa80 push ebp */
  push32((uint32_t)(EBP));
  /* 103efa81 mov ebp, esp */
  EBP = (ESP);
  /* 103efa83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103efa86 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 103efa8b push 0 */
  push32((uint32_t)(0x0u));
  /* 103efa8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efa90 push eax */
  push32((uint32_t)(EAX));
  /* 103efa91 call 0x103e9420 */
  push32(0x103efa96u); f_103e9420();
  /* 103efa96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efa99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efa9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103efa9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103efaa1 jne 0x103efaaa */
  if (!C.zf) goto L_103efaaa;
  /* 103efaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103efaa5 jmp 0x103efbd9 */
  goto L_103efbd9;
L_103efaaa:;
  /* 103efaaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efaad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103efab0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efab3 jne 0x103efae0 */
  if (!C.zf) goto L_103efae0;
  /* 103efab5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efab8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103efabc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efabe je 0x103efae0 */
  if (C.zf) goto L_103efae0;
  /* 103efac0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efac3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efac6 push ecx */
  push32((uint32_t)(ECX));
  /* 103efac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efaca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efad0 push edx */
  push32((uint32_t)(EDX));
  /* 103efad1 call 0x103e8660 */
  push32(0x103efad6u); f_103e8660();
  /* 103efad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efad9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103efadb jmp 0x103efbd9 */
  goto L_103efbd9;
L_103efae0:;
  /* 103efae0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103efae7 jmp 0x103efaf2 */
  goto L_103efaf2;
L_103efae9:;
  /* 103efae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efaec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efaef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103efaf2:;
  /* 103efaf2 push 0x1040d340 */
  push32((uint32_t)(0x1040d340u));
  /* 103efaf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efafa push ecx */
  push32((uint32_t)(ECX));
  /* 103efafb call 0x103f13d0 */
  push32(0x103efb00u); f_103f13d0();
  /* 103efb00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efb03 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103efb06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb0a jne 0x103efb14 */
  if (!C.zf) goto L_103efb14;
  /* 103efb0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103efb0f jmp 0x103efbd9 */
  goto L_103efbd9;
L_103efb14:;
  /* 103efb14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efb17 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efb1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103efb1c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 103efb1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb23 jne 0x103efb4a */
  if (!C.zf) goto L_103efb4a;
  /* 103efb25 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb29 jge 0x103efb4a */
  if ((C.sf==C.of)) goto L_103efb4a;
  /* 103efb2b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efb2f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb32 je 0x103efb4a */
  if (C.zf) goto L_103efb4a;
  /* 103efb34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103efb37 push edx */
  push32((uint32_t)(EDX));
  /* 103efb38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efb3b push eax */
  push32((uint32_t)(EAX));
  /* 103efb3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efb3f push ecx */
  push32((uint32_t)(ECX));
  /* 103efb40 call 0x103e8ed0 */
  push32(0x103efb45u); f_103e8ed0();
  /* 103efb45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efb48 jmp 0x103efbb0 */
  goto L_103efbb0;
L_103efb4a:;
  /* 103efb4a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb4e jne 0x103efb78 */
  if (!C.zf) goto L_103efb78;
  /* 103efb50 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb54 jge 0x103efb78 */
  if ((C.sf==C.of)) goto L_103efb78;
  /* 103efb56 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efb5a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb5d je 0x103efb78 */
  if (C.zf) goto L_103efb78;
  /* 103efb5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103efb62 push eax */
  push32((uint32_t)(EAX));
  /* 103efb63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efb66 push ecx */
  push32((uint32_t)(ECX));
  /* 103efb67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efb6a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efb6d push edx */
  push32((uint32_t)(EDX));
  /* 103efb6e call 0x103e8ed0 */
  push32(0x103efb73u); f_103e8ed0();
  /* 103efb73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efb76 jmp 0x103efbb0 */
  goto L_103efbb0;
L_103efb78:;
  /* 103efb78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb7c jne 0x103efbab */
  if (!C.zf) goto L_103efbab;
  /* 103efb7e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efb82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efb84 je 0x103efb8f */
  if (C.zf) goto L_103efb8f;
  /* 103efb86 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efb8a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efb8d jne 0x103efbab */
  if (!C.zf) goto L_103efbab;
L_103efb8f:;
  /* 103efb8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103efb92 push edx */
  push32((uint32_t)(EDX));
  /* 103efb93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efb96 push eax */
  push32((uint32_t)(EAX));
  /* 103efb97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efb9a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efba0 push ecx */
  push32((uint32_t)(ECX));
  /* 103efba1 call 0x103e8ed0 */
  push32(0x103efba6u); f_103e8ed0();
  /* 103efba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efba9 jmp 0x103efbb0 */
  goto L_103efbb0;
L_103efbab:;
  /* 103efbab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103efbae jmp 0x103efbd9 */
  goto L_103efbd9;
L_103efbb0:;
  /* 103efbb0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efbb4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efbb7 jne 0x103efbbb */
  if (!C.zf) goto L_103efbbb;
  /* 103efbb9 jmp 0x103efbd7 */
  goto L_103efbd7;
L_103efbbb:;
  /* 103efbbb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103efbbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efbc1 jne 0x103efbc5 */
  if (!C.zf) goto L_103efbc5;
  /* 103efbc3 jmp 0x103efbd7 */
  goto L_103efbd7;
L_103efbc5:;
  /* 103efbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103efbc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efbcb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 103efbcf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103efbd2 jmp 0x103efae9 */
  goto L_103efae9;
L_103efbd7:;
  /* 103efbd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103efbd9:;
  /* 103efbd9 mov esp, ebp */
  ESP = (EBP);
  /* 103efbdb pop ebp */
  EBP = (pop32());
  /* 103efbdc ret  */
  ESPCHK(0x103efa80u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x103efbe0 (101 bytes, 36 insns) */
void f_103efbe0(void) {
  FTRACE(0x103efbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103efbe1 mov ebp, esp */
  EBP = (ESP);
  /* 103efbe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efbe6 push eax */
  push32((uint32_t)(EAX));
  /* 103efbe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efbea push ecx */
  push32((uint32_t)(ECX));
  /* 103efbeb call 0x103e8660 */
  push32(0x103efbf0u); f_103e8660();
  /* 103efbf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efbf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efbf6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 103efbfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efbfc je 0x103efc18 */
  if (C.zf) goto L_103efc18;
  /* 103efbfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efc01 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efc04 push ecx */
  push32((uint32_t)(ECX));
  /* 103efc05 push 0x1040d348 */
  push32((uint32_t)(0x1040d348u));
  /* 103efc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 103efc0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efc0f push edx */
  push32((uint32_t)(EDX));
  /* 103efc10 call 0x103efa30 */
  push32(0x103efc15u); f_103efa30();
  /* 103efc15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103efc18:;
  /* 103efc18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efc1b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 103efc22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103efc24 je 0x103efc43 */
  if (C.zf) goto L_103efc43;
  /* 103efc26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103efc29 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efc2f push edx */
  push32((uint32_t)(EDX));
  /* 103efc30 push 0x1040d344 */
  push32((uint32_t)(0x1040d344u));
  /* 103efc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 103efc37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efc3a push eax */
  push32((uint32_t)(EAX));
  /* 103efc3b call 0x103efa30 */
  push32(0x103efc40u); f_103efa30();
  /* 103efc40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103efc43:;
  /* 103efc43 pop ebp */
  EBP = (pop32());
  /* 103efc44 ret  */
  ESPCHK(0x103efbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x103efc50 (130 bytes, 50 insns) */
void f_103efc50(void) {
  FTRACE(0x103efc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efc50 push ebp */
  push32((uint32_t)(EBP));
  /* 103efc51 mov ebp, esp */
  EBP = (ESP);
  /* 103efc53 push ecx */
  push32((uint32_t)(ECX));
  /* 103efc54 push ebx */
  push32((uint32_t)(EBX));
  /* 103efc55 push esi */
  push32((uint32_t)(ESI));
  /* 103efc56 push edi */
  push32((uint32_t)(EDI));
  /* 103efc57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103efc5e:;
  /* 103efc5e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efc62 jne 0x103efc82 */
  if (!C.zf) goto L_103efc82;
  /* 103efc64 push 0x1040d358 */
  push32((uint32_t)(0x1040d358u));
  /* 103efc69 push 0 */
  push32((uint32_t)(0x0u));
  /* 103efc6b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103efc6d push 0x1040d34c */
  push32((uint32_t)(0x1040d34cu));
  /* 103efc72 push 2 */
  push32((uint32_t)(0x2u));
  /* 103efc74 call 0x103e4770 */
  push32(0x103efc79u); f_103e4770();
  /* 103efc79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efc7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efc7f jne 0x103efc82 */
  if (!C.zf) goto L_103efc82;
  /* 103efc81 int3  */
  x86_unimpl("int3 @ 0x103efc81");
L_103efc82:;
  /* 103efc82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103efc84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efc86 jne 0x103efc5e */
  if (!C.zf) goto L_103efc5e;
  /* 103efc88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efc8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103efc8e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 103efc91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103efc93 je 0x103efca1 */
  if (C.zf) goto L_103efca1;
  /* 103efc95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efc98 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 103efc9f jmp 0x103efcc8 */
  goto L_103efcc8;
L_103efca1:;
  /* 103efca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efca4 push ecx */
  push32((uint32_t)(ECX));
  /* 103efca5 call 0x103ee4c0 */
  push32(0x103efcaau); f_103ee4c0();
  /* 103efcaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efcad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efcb0 push edx */
  push32((uint32_t)(EDX));
  /* 103efcb1 call 0x103efce0 */
  push32(0x103efcb6u); f_103efce0();
  /* 103efcb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efcb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efcbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efcbf push eax */
  push32((uint32_t)(EAX));
  /* 103efcc0 call 0x103ee530 */
  push32(0x103efcc5u); f_103ee530();
  /* 103efcc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103efcc8:;
  /* 103efcc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efccb pop edi */
  EDI = (pop32());
  /* 103efccc pop esi */
  ESI = (pop32());
  /* 103efccd pop ebx */
  EBX = (pop32());
  /* 103efcce mov esp, ebp */
  ESP = (EBP);
  /* 103efcd0 pop ebp */
  EBP = (pop32());
  /* 103efcd1 ret  */
  ESPCHK(0x103efc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fce0 @ 0x103efce0 (190 bytes, 67 insns) */
void f_103efce0(void) {
  FTRACE(0x103efce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efce0 push ebp */
  push32((uint32_t)(EBP));
  /* 103efce1 mov ebp, esp */
  EBP = (ESP);
  /* 103efce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103efce6 push ebx */
  push32((uint32_t)(EBX));
  /* 103efce7 push esi */
  push32((uint32_t)(ESI));
  /* 103efce8 push edi */
  push32((uint32_t)(EDI));
  /* 103efce9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103efcf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efcf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103efcf6:;
  /* 103efcf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efcfa jne 0x103efd1a */
  if (!C.zf) goto L_103efd1a;
  /* 103efcfc push 0x1040d1f8 */
  push32((uint32_t)(0x1040d1f8u));
  /* 103efd01 push 0 */
  push32((uint32_t)(0x0u));
  /* 103efd03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 103efd05 push 0x1040d34c */
  push32((uint32_t)(0x1040d34cu));
  /* 103efd0a push 2 */
  push32((uint32_t)(0x2u));
  /* 103efd0c call 0x103e4770 */
  push32(0x103efd11u); f_103e4770();
  /* 103efd11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efd14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efd17 jne 0x103efd1a */
  if (!C.zf) goto L_103efd1a;
  /* 103efd19 int3  */
  x86_unimpl("int3 @ 0x103efd19");
L_103efd1a:;
  /* 103efd1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103efd1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103efd1e jne 0x103efcf6 */
  if (!C.zf) goto L_103efcf6;
  /* 103efd20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103efd26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 103efd2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efd2d je 0x103efd8a */
  if (C.zf) goto L_103efd8a;
  /* 103efd2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd32 push ecx */
  push32((uint32_t)(ECX));
  /* 103efd33 call 0x103eefe0 */
  push32(0x103efd38u); f_103eefe0();
  /* 103efd38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efd3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efd3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd41 push edx */
  push32((uint32_t)(EDX));
  /* 103efd42 call 0x103f2360 */
  push32(0x103efd47u); f_103f2360();
  /* 103efd47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efd4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103efd50 push ecx */
  push32((uint32_t)(ECX));
  /* 103efd51 call 0x103f2230 */
  push32(0x103efd56u); f_103f2230();
  /* 103efd56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efd59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efd5b jge 0x103efd66 */
  if ((C.sf==C.of)) goto L_103efd66;
  /* 103efd5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103efd64 jmp 0x103efd8a */
  goto L_103efd8a;
L_103efd66:;
  /* 103efd66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efd6d je 0x103efd8a */
  if (C.zf) goto L_103efd8a;
  /* 103efd6f push 2 */
  push32((uint32_t)(0x2u));
  /* 103efd71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103efd77 push ecx */
  push32((uint32_t)(ECX));
  /* 103efd78 call 0x103e6140 */
  push32(0x103efd7du); f_103e6140();
  /* 103efd7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efd80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_103efd8a:;
  /* 103efd8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103efd8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 103efd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efd97 pop edi */
  EDI = (pop32());
  /* 103efd98 pop esi */
  ESI = (pop32());
  /* 103efd99 pop ebx */
  EBX = (pop32());
  /* 103efd9a mov esp, ebp */
  ESP = (EBP);
  /* 103efd9c pop ebp */
  EBP = (pop32());
  /* 103efd9d ret  */
  ESPCHK(0x103efce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fda0 @ 0x103efda0 (210 bytes, 63 insns) */
void f_103efda0(void) {
  FTRACE(0x103efda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efda0 push ebp */
  push32((uint32_t)(EBP));
  /* 103efda1 mov ebp, esp */
  EBP = (ESP);
  /* 103efda3 push ecx */
  push32((uint32_t)(ECX));
  /* 103efda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efda7 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efdad jae 0x103efdd1 */
  if (!C.cf) goto L_103efdd1;
  /* 103efdaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efdb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103efdb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efdb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103efdbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103efdbe mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103efdc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103efdca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103efdcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103efdcf jne 0x103efde4 */
  if (!C.zf) goto L_103efde4;
L_103efdd1:;
  /* 103efdd1 call 0x103ed580 */
  push32(0x103efdd6u); f_103ed580();
  /* 103efdd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103efddc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103efddf jmp 0x103efe6e */
  goto L_103efe6e;
L_103efde4:;
  /* 103efde4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efde7 push edx */
  push32((uint32_t)(EDX));
  /* 103efde8 call 0x103eeda0 */
  push32(0x103efdedu); f_103eeda0();
  /* 103efded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efdf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efdf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103efdf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efdf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103efdfc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103efdff mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103efe06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103efe0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103efe0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efe10 je 0x103efe4d */
  if (C.zf) goto L_103efe4d;
  /* 103efe12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efe15 push ecx */
  push32((uint32_t)(ECX));
  /* 103efe16 call 0x103eec20 */
  push32(0x103efe1bu); f_103eec20();
  /* 103efe1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efe1e push eax */
  push32((uint32_t)(EAX));
  /* 103efe1f call dword ptr [0x104142f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142f4))), 0x103efe25u);
  /* 103efe25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efe27 jne 0x103efe34 */
  if (!C.zf) goto L_103efe34;
  /* 103efe29 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103efe2fu);
  /* 103efe2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efe32 jmp 0x103efe3b */
  goto L_103efe3b;
L_103efe34:;
  /* 103efe34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103efe3b:;
  /* 103efe3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efe3f jne 0x103efe43 */
  if (!C.zf) goto L_103efe43;
  /* 103efe41 jmp 0x103efe5f */
  goto L_103efe5f;
L_103efe43:;
  /* 103efe43 call 0x103ed590 */
  push32(0x103efe48u); f_103ed590();
  /* 103efe48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efe4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103efe4d:;
  /* 103efe4d call 0x103ed580 */
  push32(0x103efe52u); f_103ed580();
  /* 103efe52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103efe58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103efe5f:;
  /* 103efe5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efe62 push eax */
  push32((uint32_t)(EAX));
  /* 103efe63 call 0x103eee30 */
  push32(0x103efe68u); f_103eee30();
  /* 103efe68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efe6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103efe6e:;
  /* 103efe6e mov esp, ebp */
  ESP = (EBP);
  /* 103efe70 pop ebp */
  EBP = (pop32());
  /* 103efe71 ret  */
  ESPCHK(0x103efda0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x103efe80 (219 bytes, 64 insns) */
void f_103efe80(void) {
  FTRACE(0x103efe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103efe80 push ebp */
  push32((uint32_t)(EBP));
  /* 103efe81 mov ebp, esp */
  EBP = (ESP);
  /* 103efe83 push ecx */
  push32((uint32_t)(ECX));
  /* 103efe84 cmp dword ptr [0x10411884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efe8b je 0x103eff21 */
  if (C.zf) goto L_103eff21;
  /* 103efe91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103efe93 push 0x1040d368 */
  push32((uint32_t)(0x1040d368u));
  /* 103efe98 push 2 */
  push32((uint32_t)(0x2u));
  /* 103efe9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 103efe9f push 1 */
  push32((uint32_t)(0x1u));
  /* 103efea1 call 0x103e5ac0 */
  push32(0x103efea6u); f_103e5ac0();
  /* 103efea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103efeac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103efeb0 jne 0x103efebc */
  if (!C.zf) goto L_103efebc;
  /* 103efeb2 mov eax, 1 */
  EAX = (0x1u);
  /* 103efeb7 jmp 0x103eff57 */
  goto L_103eff57;
L_103efebc:;
  /* 103efebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efebf push eax */
  push32((uint32_t)(EAX));
  /* 103efec0 call 0x103eff60 */
  push32(0x103efec5u); f_103eff60();
  /* 103efec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103efeca je 0x103efeed */
  if (C.zf) goto L_103efeed;
  /* 103efecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efecf push ecx */
  push32((uint32_t)(ECX));
  /* 103efed0 call 0x103f04f0 */
  push32(0x103efed5u); f_103f04f0();
  /* 103efed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103efeda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efedd push edx */
  push32((uint32_t)(EDX));
  /* 103efede call 0x103e6140 */
  push32(0x103efee3u); f_103e6140();
  /* 103efee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103efee6 mov eax, 1 */
  EAX = (0x1u);
  /* 103efeeb jmp 0x103eff57 */
  goto L_103eff57;
L_103efeed:;
  /* 103efeed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efef0 mov dword ptr [0x10410c98], eax */
  w32((uint32_t)(0x10410c98), (EAX));
  /* 103efef5 mov ecx, dword ptr [0x104118a4] */
  ECX = (r32((uint32_t)(0x104118a4)));
  /* 103efefb push ecx */
  push32((uint32_t)(ECX));
  /* 103efefc call 0x103f04f0 */
  push32(0x103eff01u); f_103f04f0();
  /* 103eff01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eff04 push 2 */
  push32((uint32_t)(0x2u));
  /* 103eff06 mov edx, dword ptr [0x104118a4] */
  EDX = (r32((uint32_t)(0x104118a4)));
  /* 103eff0c push edx */
  push32((uint32_t)(EDX));
  /* 103eff0d call 0x103e6140 */
  push32(0x103eff12u); f_103e6140();
  /* 103eff12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eff15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eff18 mov dword ptr [0x104118a4], eax */
  w32((uint32_t)(0x104118a4), (EAX));
  /* 103eff1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eff1f jmp 0x103eff57 */
  goto L_103eff57;
L_103eff21:;
  /* 103eff21 mov dword ptr [0x10410c98], 0x10410ca0 */
  w32((uint32_t)(0x10410c98), (0x10410ca0u));
  /* 103eff2b mov ecx, dword ptr [0x104118a4] */
  ECX = (r32((uint32_t)(0x104118a4)));
  /* 103eff31 push ecx */
  push32((uint32_t)(ECX));
  /* 103eff32 call 0x103f04f0 */
  push32(0x103eff37u); f_103f04f0();
  /* 103eff37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eff3a push 2 */
  push32((uint32_t)(0x2u));
  /* 103eff3c mov edx, dword ptr [0x104118a4] */
  EDX = (r32((uint32_t)(0x104118a4)));
  /* 103eff42 push edx */
  push32((uint32_t)(EDX));
  /* 103eff43 call 0x103e6140 */
  push32(0x103eff48u); f_103e6140();
  /* 103eff48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103eff4b mov dword ptr [0x104118a4], 0 */
  w32((uint32_t)(0x104118a4), (0x0u));
  /* 103eff55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103eff57:;
  /* 103eff57 mov esp, ebp */
  ESP = (EBP);
  /* 103eff59 pop ebp */
  EBP = (pop32());
  /* 103eff5a ret  */
  ESPCHK(0x103efe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff60 @ 0x103eff60 (1423 bytes, 533 insns) */
void f_103eff60(void) {
  FTRACE(0x103eff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103eff60 push ebp */
  push32((uint32_t)(EBP));
  /* 103eff61 mov ebp, esp */
  EBP = (ESP);
  /* 103eff63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103eff66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103eff6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103eff6f mov ax, word ptr [0x104118de] */
  AX = (r16((uint32_t)(0x104118de)));
  /* 103eff75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103eff78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103eff7a mov cx, word ptr [0x104118e0] */
  CX = (r16((uint32_t)(0x104118e0)));
  /* 103eff81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103eff84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103eff88 jne 0x103eff92 */
  if (!C.zf) goto L_103eff92;
  /* 103eff8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103eff8d jmp 0x103f04eb */
  goto L_103f04eb;
L_103eff92:;
  /* 103eff92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103eff95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103eff98 push edx */
  push32((uint32_t)(EDX));
  /* 103eff99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 103eff9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103eff9e push eax */
  push32((uint32_t)(EAX));
  /* 103eff9f push 1 */
  push32((uint32_t)(0x1u));
  /* 103effa1 call 0x103f3870 */
  push32(0x103effa6u); f_103f3870();
  /* 103effa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103effa9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103effac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103effae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103effb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103effb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103effb7 push edx */
  push32((uint32_t)(EDX));
  /* 103effb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 103effba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103effbd push eax */
  push32((uint32_t)(EAX));
  /* 103effbe push 1 */
  push32((uint32_t)(0x1u));
  /* 103effc0 call 0x103f3870 */
  push32(0x103effc5u); f_103f3870();
  /* 103effc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103effc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103effcb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103effcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103effd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103effd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103effd6 push edx */
  push32((uint32_t)(EDX));
  /* 103effd7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103effd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103effdc push eax */
  push32((uint32_t)(EAX));
  /* 103effdd push 1 */
  push32((uint32_t)(0x1u));
  /* 103effdf call 0x103f3870 */
  push32(0x103effe4u); f_103f3870();
  /* 103effe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103effe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103effea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103effec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103effef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103efff2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103efff5 push edx */
  push32((uint32_t)(EDX));
  /* 103efff6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103efff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103efffb push eax */
  push32((uint32_t)(EAX));
  /* 103efffc push 1 */
  push32((uint32_t)(0x1u));
  /* 103efffe call 0x103f3870 */
  push32(0x103f0003u); f_103f3870();
  /* 103f0003 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0009 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f000b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f000e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0011 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0014 push edx */
  push32((uint32_t)(EDX));
  /* 103f0015 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103f0017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f001a push eax */
  push32((uint32_t)(EAX));
  /* 103f001b push 1 */
  push32((uint32_t)(0x1u));
  /* 103f001d call 0x103f3870 */
  push32(0x103f0022u); f_103f3870();
  /* 103f0022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0028 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f002a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f002d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0030 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0033 push edx */
  push32((uint32_t)(EDX));
  /* 103f0034 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 103f0036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0039 push eax */
  push32((uint32_t)(EAX));
  /* 103f003a push 1 */
  push32((uint32_t)(0x1u));
  /* 103f003c call 0x103f3870 */
  push32(0x103f0041u); f_103f3870();
  /* 103f0041 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0047 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0049 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f004c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f004f push edx */
  push32((uint32_t)(EDX));
  /* 103f0050 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 103f0052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0055 push eax */
  push32((uint32_t)(EAX));
  /* 103f0056 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0058 call 0x103f3870 */
  push32(0x103f005du); f_103f3870();
  /* 103f005d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0060 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0063 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0065 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f006b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f006e push edx */
  push32((uint32_t)(EDX));
  /* 103f006f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 103f0071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0074 push eax */
  push32((uint32_t)(EAX));
  /* 103f0075 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0077 call 0x103f3870 */
  push32(0x103f007cu); f_103f3870();
  /* 103f007c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f007f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0082 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0084 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f008a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f008d push edx */
  push32((uint32_t)(EDX));
  /* 103f008e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 103f0090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0093 push eax */
  push32((uint32_t)(EAX));
  /* 103f0094 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0096 call 0x103f3870 */
  push32(0x103f009bu); f_103f3870();
  /* 103f009b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f009e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f00a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f00a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f00a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f00a9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00ac push edx */
  push32((uint32_t)(EDX));
  /* 103f00ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 103f00af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f00b2 push eax */
  push32((uint32_t)(EAX));
  /* 103f00b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f00b5 call 0x103f3870 */
  push32(0x103f00bau); f_103f3870();
  /* 103f00ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f00c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f00c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f00c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f00c8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00cb push edx */
  push32((uint32_t)(EDX));
  /* 103f00cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 103f00ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f00d1 push eax */
  push32((uint32_t)(EAX));
  /* 103f00d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f00d4 call 0x103f3870 */
  push32(0x103f00d9u); f_103f3870();
  /* 103f00d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f00df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f00e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f00e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f00e7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00ea push edx */
  push32((uint32_t)(EDX));
  /* 103f00eb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 103f00ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f00f0 push eax */
  push32((uint32_t)(EAX));
  /* 103f00f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f00f3 call 0x103f3870 */
  push32(0x103f00f8u); f_103f3870();
  /* 103f00f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f00fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f00fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0100 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0106 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0109 push edx */
  push32((uint32_t)(EDX));
  /* 103f010a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 103f010c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f010f push eax */
  push32((uint32_t)(EAX));
  /* 103f0110 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0112 call 0x103f3870 */
  push32(0x103f0117u); f_103f3870();
  /* 103f0117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f011a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f011d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f011f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0122 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0125 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0128 push edx */
  push32((uint32_t)(EDX));
  /* 103f0129 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103f012b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f012e push eax */
  push32((uint32_t)(EAX));
  /* 103f012f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0131 call 0x103f3870 */
  push32(0x103f0136u); f_103f3870();
  /* 103f0136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f013c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f013e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0144 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0147 push edx */
  push32((uint32_t)(EDX));
  /* 103f0148 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 103f014a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f014d push eax */
  push32((uint32_t)(EAX));
  /* 103f014e push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0150 call 0x103f3870 */
  push32(0x103f0155u); f_103f3870();
  /* 103f0155 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0158 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f015b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f015d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0163 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0166 push edx */
  push32((uint32_t)(EDX));
  /* 103f0167 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 103f0169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f016c push eax */
  push32((uint32_t)(EAX));
  /* 103f016d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f016f call 0x103f3870 */
  push32(0x103f0174u); f_103f3870();
  /* 103f0174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f017a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f017c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f017f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0182 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0185 push edx */
  push32((uint32_t)(EDX));
  /* 103f0186 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103f0188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f018b push eax */
  push32((uint32_t)(EAX));
  /* 103f018c push 1 */
  push32((uint32_t)(0x1u));
  /* 103f018e call 0x103f3870 */
  push32(0x103f0193u); f_103f3870();
  /* 103f0193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0196 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0199 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f019b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f019e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f01a1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01a4 push edx */
  push32((uint32_t)(EDX));
  /* 103f01a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 103f01a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f01aa push eax */
  push32((uint32_t)(EAX));
  /* 103f01ab push 1 */
  push32((uint32_t)(0x1u));
  /* 103f01ad call 0x103f3870 */
  push32(0x103f01b2u); f_103f3870();
  /* 103f01b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f01b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f01ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f01bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f01c0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01c3 push edx */
  push32((uint32_t)(EDX));
  /* 103f01c4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103f01c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f01c9 push eax */
  push32((uint32_t)(EAX));
  /* 103f01ca push 1 */
  push32((uint32_t)(0x1u));
  /* 103f01cc call 0x103f3870 */
  push32(0x103f01d1u); f_103f3870();
  /* 103f01d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f01d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f01d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f01dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f01df add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01e2 push edx */
  push32((uint32_t)(EDX));
  /* 103f01e3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 103f01e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f01e8 push eax */
  push32((uint32_t)(EAX));
  /* 103f01e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f01eb call 0x103f3870 */
  push32(0x103f01f0u); f_103f3870();
  /* 103f01f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f01f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f01f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f01f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f01fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f01fe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0201 push edx */
  push32((uint32_t)(EDX));
  /* 103f0202 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 103f0204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0207 push eax */
  push32((uint32_t)(EAX));
  /* 103f0208 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f020a call 0x103f3870 */
  push32(0x103f020fu); f_103f3870();
  /* 103f020f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0212 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0215 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0217 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f021a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f021d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0220 push edx */
  push32((uint32_t)(EDX));
  /* 103f0221 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 103f0223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0226 push eax */
  push32((uint32_t)(EAX));
  /* 103f0227 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0229 call 0x103f3870 */
  push32(0x103f022eu); f_103f3870();
  /* 103f022e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0231 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0234 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0236 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f023c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f023f push edx */
  push32((uint32_t)(EDX));
  /* 103f0240 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 103f0242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0245 push eax */
  push32((uint32_t)(EAX));
  /* 103f0246 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0248 call 0x103f3870 */
  push32(0x103f024du); f_103f3870();
  /* 103f024d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0253 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0255 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f025b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f025e push edx */
  push32((uint32_t)(EDX));
  /* 103f025f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 103f0261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0264 push eax */
  push32((uint32_t)(EAX));
  /* 103f0265 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0267 call 0x103f3870 */
  push32(0x103f026cu); f_103f3870();
  /* 103f026c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f026f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0272 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0274 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f027a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f027d push edx */
  push32((uint32_t)(EDX));
  /* 103f027e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 103f0280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0283 push eax */
  push32((uint32_t)(EAX));
  /* 103f0284 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0286 call 0x103f3870 */
  push32(0x103f028bu); f_103f3870();
  /* 103f028b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f028e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0291 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0293 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0296 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0299 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f029c push edx */
  push32((uint32_t)(EDX));
  /* 103f029d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 103f029f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f02a2 push eax */
  push32((uint32_t)(EAX));
  /* 103f02a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f02a5 call 0x103f3870 */
  push32(0x103f02aau); f_103f3870();
  /* 103f02aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f02b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f02b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f02b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f02b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02bb push edx */
  push32((uint32_t)(EDX));
  /* 103f02bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 103f02be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f02c1 push eax */
  push32((uint32_t)(EAX));
  /* 103f02c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f02c4 call 0x103f3870 */
  push32(0x103f02c9u); f_103f3870();
  /* 103f02c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f02cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f02d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f02d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f02d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02da push edx */
  push32((uint32_t)(EDX));
  /* 103f02db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 103f02dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f02e0 push eax */
  push32((uint32_t)(EAX));
  /* 103f02e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f02e3 call 0x103f3870 */
  push32(0x103f02e8u); f_103f3870();
  /* 103f02e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f02ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f02f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f02f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f02f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f02f9 push edx */
  push32((uint32_t)(EDX));
  /* 103f02fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103f02fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f02ff push eax */
  push32((uint32_t)(EAX));
  /* 103f0300 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0302 call 0x103f3870 */
  push32(0x103f0307u); f_103f3870();
  /* 103f0307 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f030a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f030d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f030f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0315 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0318 push edx */
  push32((uint32_t)(EDX));
  /* 103f0319 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 103f031b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f031e push eax */
  push32((uint32_t)(EAX));
  /* 103f031f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0321 call 0x103f3870 */
  push32(0x103f0326u); f_103f3870();
  /* 103f0326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0329 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f032c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f032e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0334 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0337 push edx */
  push32((uint32_t)(EDX));
  /* 103f0338 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 103f033a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f033d push eax */
  push32((uint32_t)(EAX));
  /* 103f033e push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0340 call 0x103f3870 */
  push32(0x103f0345u); f_103f3870();
  /* 103f0345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0348 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f034b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f034d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0353 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0356 push edx */
  push32((uint32_t)(EDX));
  /* 103f0357 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103f0359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f035c push eax */
  push32((uint32_t)(EAX));
  /* 103f035d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f035f call 0x103f3870 */
  push32(0x103f0364u); f_103f3870();
  /* 103f0364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f036a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f036c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f036f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0372 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0378 push edx */
  push32((uint32_t)(EDX));
  /* 103f0379 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 103f037b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f037e push eax */
  push32((uint32_t)(EAX));
  /* 103f037f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0381 call 0x103f3870 */
  push32(0x103f0386u); f_103f3870();
  /* 103f0386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f038c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f038e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0394 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f039a push edx */
  push32((uint32_t)(EDX));
  /* 103f039b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103f039d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f03a0 push eax */
  push32((uint32_t)(EAX));
  /* 103f03a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f03a3 call 0x103f3870 */
  push32(0x103f03a8u); f_103f3870();
  /* 103f03a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f03ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f03ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f03b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f03b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f03b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f03bc push edx */
  push32((uint32_t)(EDX));
  /* 103f03bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103f03bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f03c2 push eax */
  push32((uint32_t)(EAX));
  /* 103f03c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f03c5 call 0x103f3870 */
  push32(0x103f03cau); f_103f3870();
  /* 103f03ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f03cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f03d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f03d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f03d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f03d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f03de push edx */
  push32((uint32_t)(EDX));
  /* 103f03df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 103f03e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f03e4 push eax */
  push32((uint32_t)(EAX));
  /* 103f03e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f03e7 call 0x103f3870 */
  push32(0x103f03ecu); f_103f3870();
  /* 103f03ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f03ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f03f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f03f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f03f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f03fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0400 push edx */
  push32((uint32_t)(EDX));
  /* 103f0401 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 103f0403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0406 push eax */
  push32((uint32_t)(EAX));
  /* 103f0407 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0409 call 0x103f3870 */
  push32(0x103f040eu); f_103f3870();
  /* 103f040e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0411 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0414 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0416 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f0419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f041c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0422 push edx */
  push32((uint32_t)(EDX));
  /* 103f0423 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 103f0425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0428 push eax */
  push32((uint32_t)(EAX));
  /* 103f0429 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f042b call 0x103f3870 */
  push32(0x103f0430u); f_103f3870();
  /* 103f0430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0436 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0438 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f043b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f043e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0444 push edx */
  push32((uint32_t)(EDX));
  /* 103f0445 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 103f0447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f044a push eax */
  push32((uint32_t)(EAX));
  /* 103f044b push 1 */
  push32((uint32_t)(0x1u));
  /* 103f044d call 0x103f3870 */
  push32(0x103f0452u); f_103f3870();
  /* 103f0452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f0458 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f045a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f045d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0460 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0466 push edx */
  push32((uint32_t)(EDX));
  /* 103f0467 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 103f0469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f046c push eax */
  push32((uint32_t)(EAX));
  /* 103f046d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f046f call 0x103f3870 */
  push32(0x103f0474u); f_103f3870();
  /* 103f0474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0477 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f047a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f047c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f047f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0482 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0488 push edx */
  push32((uint32_t)(EDX));
  /* 103f0489 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103f048b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f048e push eax */
  push32((uint32_t)(EAX));
  /* 103f048f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0491 call 0x103f3870 */
  push32(0x103f0496u); f_103f3870();
  /* 103f0496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0499 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f049c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f049e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f04a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f04a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f04aa push edx */
  push32((uint32_t)(EDX));
  /* 103f04ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103f04ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f04b0 push eax */
  push32((uint32_t)(EAX));
  /* 103f04b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f04b3 call 0x103f3870 */
  push32(0x103f04b8u); f_103f3870();
  /* 103f04b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f04bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f04be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f04c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f04c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f04c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f04cc push edx */
  push32((uint32_t)(EDX));
  /* 103f04cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 103f04d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f04d5 push eax */
  push32((uint32_t)(EAX));
  /* 103f04d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f04d8 call 0x103f3870 */
  push32(0x103f04ddu); f_103f3870();
  /* 103f04dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f04e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f04e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f04e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f04e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_103f04eb:;
  /* 103f04eb mov esp, ebp */
  ESP = (EBP);
  /* 103f04ed pop ebp */
  EBP = (pop32());
  /* 103f04ee ret  */
  ESPCHK(0x103eff60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x103f04f0 (779 bytes, 265 insns) */
void f_103f04f0(void) {
  FTRACE(0x103f04f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f04f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f04f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f04f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f04f7 jne 0x103f04fe */
  if (!C.zf) goto L_103f04fe;
  /* 103f04f9 jmp 0x103f07f9 */
  goto L_103f07f9;
L_103f04fe:;
  /* 103f04fe push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0503 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103f0506 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0507 call 0x103e6140 */
  push32(0x103f050cu); f_103e6140();
  /* 103f050c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f050f push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0514 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103f0517 push eax */
  push32((uint32_t)(EAX));
  /* 103f0518 call 0x103e6140 */
  push32(0x103f051du); f_103e6140();
  /* 103f051d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0520 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0525 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103f0528 push edx */
  push32((uint32_t)(EDX));
  /* 103f0529 call 0x103e6140 */
  push32(0x103f052eu); f_103e6140();
  /* 103f052e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0531 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0536 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103f0539 push ecx */
  push32((uint32_t)(ECX));
  /* 103f053a call 0x103e6140 */
  push32(0x103f053fu); f_103e6140();
  /* 103f053f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0542 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0547 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f054a push eax */
  push32((uint32_t)(EAX));
  /* 103f054b call 0x103e6140 */
  push32(0x103f0550u); f_103e6140();
  /* 103f0550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0553 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0555 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0558 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103f055b push edx */
  push32((uint32_t)(EDX));
  /* 103f055c call 0x103e6140 */
  push32(0x103f0561u); f_103e6140();
  /* 103f0561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0564 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0569 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f056b push ecx */
  push32((uint32_t)(ECX));
  /* 103f056c call 0x103e6140 */
  push32(0x103f0571u); f_103e6140();
  /* 103f0571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0574 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0576 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0579 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 103f057c push eax */
  push32((uint32_t)(EAX));
  /* 103f057d call 0x103e6140 */
  push32(0x103f0582u); f_103e6140();
  /* 103f0582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0585 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f058a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 103f058d push edx */
  push32((uint32_t)(EDX));
  /* 103f058e call 0x103e6140 */
  push32(0x103f0593u); f_103e6140();
  /* 103f0593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0596 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f059b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 103f059e push ecx */
  push32((uint32_t)(ECX));
  /* 103f059f call 0x103e6140 */
  push32(0x103f05a4u); f_103e6140();
  /* 103f05a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f05ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 103f05af push eax */
  push32((uint32_t)(EAX));
  /* 103f05b0 call 0x103e6140 */
  push32(0x103f05b5u); f_103e6140();
  /* 103f05b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f05bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 103f05c0 push edx */
  push32((uint32_t)(EDX));
  /* 103f05c1 call 0x103e6140 */
  push32(0x103f05c6u); f_103e6140();
  /* 103f05c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f05ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 103f05d1 push ecx */
  push32((uint32_t)(ECX));
  /* 103f05d2 call 0x103e6140 */
  push32(0x103f05d7u); f_103e6140();
  /* 103f05d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05da push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f05df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f05e2 push eax */
  push32((uint32_t)(EAX));
  /* 103f05e3 call 0x103e6140 */
  push32(0x103f05e8u); f_103e6140();
  /* 103f05e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05eb push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f05f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 103f05f3 push edx */
  push32((uint32_t)(EDX));
  /* 103f05f4 call 0x103e6140 */
  push32(0x103f05f9u); f_103e6140();
  /* 103f05f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f05fc push 2 */
  push32((uint32_t)(0x2u));
  /* 103f05fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0601 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 103f0604 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0605 call 0x103e6140 */
  push32(0x103f060au); f_103e6140();
  /* 103f060a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f060d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f060f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0612 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 103f0615 push eax */
  push32((uint32_t)(EAX));
  /* 103f0616 call 0x103e6140 */
  push32(0x103f061bu); f_103e6140();
  /* 103f061b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f061e push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0623 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 103f0626 push edx */
  push32((uint32_t)(EDX));
  /* 103f0627 call 0x103e6140 */
  push32(0x103f062cu); f_103e6140();
  /* 103f062c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f062f push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0634 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 103f0637 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0638 call 0x103e6140 */
  push32(0x103f063du); f_103e6140();
  /* 103f063d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0640 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0645 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 103f0648 push eax */
  push32((uint32_t)(EAX));
  /* 103f0649 call 0x103e6140 */
  push32(0x103f064eu); f_103e6140();
  /* 103f064e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0651 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0656 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103f0659 push edx */
  push32((uint32_t)(EDX));
  /* 103f065a call 0x103e6140 */
  push32(0x103f065fu); f_103e6140();
  /* 103f065f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0662 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0667 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 103f066a push ecx */
  push32((uint32_t)(ECX));
  /* 103f066b call 0x103e6140 */
  push32(0x103f0670u); f_103e6140();
  /* 103f0670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0673 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0678 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 103f067b push eax */
  push32((uint32_t)(EAX));
  /* 103f067c call 0x103e6140 */
  push32(0x103f0681u); f_103e6140();
  /* 103f0681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0684 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0689 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 103f068c push edx */
  push32((uint32_t)(EDX));
  /* 103f068d call 0x103e6140 */
  push32(0x103f0692u); f_103e6140();
  /* 103f0692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0695 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f069a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 103f069d push ecx */
  push32((uint32_t)(ECX));
  /* 103f069e call 0x103e6140 */
  push32(0x103f06a3u); f_103e6140();
  /* 103f06a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f06ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 103f06ae push eax */
  push32((uint32_t)(EAX));
  /* 103f06af call 0x103e6140 */
  push32(0x103f06b4u); f_103e6140();
  /* 103f06b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f06bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 103f06bf push edx */
  push32((uint32_t)(EDX));
  /* 103f06c0 call 0x103e6140 */
  push32(0x103f06c5u); f_103e6140();
  /* 103f06c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f06cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 103f06d0 push ecx */
  push32((uint32_t)(ECX));
  /* 103f06d1 call 0x103e6140 */
  push32(0x103f06d6u); f_103e6140();
  /* 103f06d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f06de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 103f06e1 push eax */
  push32((uint32_t)(EAX));
  /* 103f06e2 call 0x103e6140 */
  push32(0x103f06e7u); f_103e6140();
  /* 103f06e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06ea push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f06ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 103f06f2 push edx */
  push32((uint32_t)(EDX));
  /* 103f06f3 call 0x103e6140 */
  push32(0x103f06f8u); f_103e6140();
  /* 103f06f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f06fb push 2 */
  push32((uint32_t)(0x2u));
  /* 103f06fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0700 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 103f0703 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0704 call 0x103e6140 */
  push32(0x103f0709u); f_103e6140();
  /* 103f0709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f070c push 2 */
  push32((uint32_t)(0x2u));
  /* 103f070e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0711 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 103f0714 push eax */
  push32((uint32_t)(EAX));
  /* 103f0715 call 0x103e6140 */
  push32(0x103f071au); f_103e6140();
  /* 103f071a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f071d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f071f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0722 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 103f0728 push edx */
  push32((uint32_t)(EDX));
  /* 103f0729 call 0x103e6140 */
  push32(0x103f072eu); f_103e6140();
  /* 103f072e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0731 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0736 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 103f073c push ecx */
  push32((uint32_t)(ECX));
  /* 103f073d call 0x103e6140 */
  push32(0x103f0742u); f_103e6140();
  /* 103f0742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0745 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f074a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 103f0750 push eax */
  push32((uint32_t)(EAX));
  /* 103f0751 call 0x103e6140 */
  push32(0x103f0756u); f_103e6140();
  /* 103f0756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0759 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f075b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f075e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 103f0764 push edx */
  push32((uint32_t)(EDX));
  /* 103f0765 call 0x103e6140 */
  push32(0x103f076au); f_103e6140();
  /* 103f076a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f076d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f076f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0772 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 103f0778 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0779 call 0x103e6140 */
  push32(0x103f077eu); f_103e6140();
  /* 103f077e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0781 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0786 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 103f078c push eax */
  push32((uint32_t)(EAX));
  /* 103f078d call 0x103e6140 */
  push32(0x103f0792u); f_103e6140();
  /* 103f0792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0795 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f079a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 103f07a0 push edx */
  push32((uint32_t)(EDX));
  /* 103f07a1 call 0x103e6140 */
  push32(0x103f07a6u); f_103e6140();
  /* 103f07a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f07a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f07ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f07ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 103f07b4 push ecx */
  push32((uint32_t)(ECX));
  /* 103f07b5 call 0x103e6140 */
  push32(0x103f07bau); f_103e6140();
  /* 103f07ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f07bd push 2 */
  push32((uint32_t)(0x2u));
  /* 103f07bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f07c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 103f07c8 push eax */
  push32((uint32_t)(EAX));
  /* 103f07c9 call 0x103e6140 */
  push32(0x103f07ceu); f_103e6140();
  /* 103f07ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f07d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f07d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f07d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 103f07dc push edx */
  push32((uint32_t)(EDX));
  /* 103f07dd call 0x103e6140 */
  push32(0x103f07e2u); f_103e6140();
  /* 103f07e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f07e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f07e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f07ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 103f07f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103f07f1 call 0x103e6140 */
  push32(0x103f07f6u); f_103e6140();
  /* 103f07f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f07f9:;
  /* 103f07f9 pop ebp */
  EBP = (pop32());
  /* 103f07fa ret  */
  ESPCHK(0x103f04f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x103f0800 (678 bytes, 180 insns) */
void f_103f0800(void) {
  FTRACE(0x103f0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0800 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0801 mov ebp, esp */
  EBP = (ESP);
  /* 103f0803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f0806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f080d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f080f mov ax, word ptr [0x104118da] */
  AX = (r16((uint32_t)(0x104118da)));
  /* 103f0815 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f0818 cmp dword ptr [0x10411880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f081f je 0x103f097a */
  if (C.zf) goto L_103f097a;
  /* 103f0825 push 0x104118a8 */
  push32((uint32_t)(0x104118a8u));
  /* 103f082a push 0xe */
  push32((uint32_t)(0xeu));
  /* 103f082c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f082f push ecx */
  push32((uint32_t)(ECX));
  /* 103f0830 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0832 call 0x103f3870 */
  push32(0x103f0837u); f_103f3870();
  /* 103f0837 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f083a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f083d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103f083f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f0842 push 0x104118ac */
  push32((uint32_t)(0x104118acu));
  /* 103f0847 push 0xf */
  push32((uint32_t)(0xfu));
  /* 103f0849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f084c push eax */
  push32((uint32_t)(EAX));
  /* 103f084d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f084f call 0x103f3870 */
  push32(0x103f0854u); f_103f3870();
  /* 103f0854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0857 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f085a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f085c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f085f push 0x104118b0 */
  push32((uint32_t)(0x104118b0u));
  /* 103f0864 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103f0866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0869 push edx */
  push32((uint32_t)(EDX));
  /* 103f086a push 1 */
  push32((uint32_t)(0x1u));
  /* 103f086c call 0x103f3870 */
  push32(0x103f0871u); f_103f3870();
  /* 103f0871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0874 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0877 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0879 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f087c mov edx, dword ptr [0x104118b0] */
  EDX = (r32((uint32_t)(0x104118b0)));
  /* 103f0882 push edx */
  push32((uint32_t)(EDX));
  /* 103f0883 call 0x103f0ab0 */
  push32(0x103f0888u); f_103f0ab0();
  /* 103f0888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f088b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f088f je 0x103f08e9 */
  if (C.zf) goto L_103f08e9;
  /* 103f0891 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0893 mov eax, dword ptr [0x104118a8] */
  EAX = (r32((uint32_t)(0x104118a8)));
  /* 103f0898 push eax */
  push32((uint32_t)(EAX));
  /* 103f0899 call 0x103e6140 */
  push32(0x103f089eu); f_103e6140();
  /* 103f089e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f08a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f08a3 mov ecx, dword ptr [0x104118ac] */
  ECX = (r32((uint32_t)(0x104118ac)));
  /* 103f08a9 push ecx */
  push32((uint32_t)(ECX));
  /* 103f08aa call 0x103e6140 */
  push32(0x103f08afu); f_103e6140();
  /* 103f08af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f08b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f08b4 mov edx, dword ptr [0x104118b0] */
  EDX = (r32((uint32_t)(0x104118b0)));
  /* 103f08ba push edx */
  push32((uint32_t)(EDX));
  /* 103f08bb call 0x103e6140 */
  push32(0x103f08c0u); f_103e6140();
  /* 103f08c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f08c3 mov dword ptr [0x104118a8], 0 */
  w32((uint32_t)(0x104118a8), (0x0u));
  /* 103f08cd mov dword ptr [0x104118ac], 0 */
  w32((uint32_t)(0x104118ac), (0x0u));
  /* 103f08d7 mov dword ptr [0x104118b0], 0 */
  w32((uint32_t)(0x104118b0), (0x0u));
  /* 103f08e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f08e4 jmp 0x103f0aa2 */
  goto L_103f0aa2;
L_103f08e9:;
  /* 103f08e9 mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f08ee cmp dword ptr [eax], 0x10410d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10410d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f08f4 je 0x103f0930 */
  if (C.zf) goto L_103f0930;
  /* 103f08f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f08f8 mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f08fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f0900 push edx */
  push32((uint32_t)(EDX));
  /* 103f0901 call 0x103e6140 */
  push32(0x103f0906u); f_103e6140();
  /* 103f0906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0909 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f090b mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0910 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103f0913 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0914 call 0x103e6140 */
  push32(0x103f0919u); f_103e6140();
  /* 103f0919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f091c push 2 */
  push32((uint32_t)(0x2u));
  /* 103f091e mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0924 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103f0927 push eax */
  push32((uint32_t)(EAX));
  /* 103f0928 call 0x103e6140 */
  push32(0x103f092du); f_103e6140();
  /* 103f092d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f0930:;
  /* 103f0930 mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0936 mov edx, dword ptr [0x104118a8] */
  EDX = (r32((uint32_t)(0x104118a8)));
  /* 103f093c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103f093e mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0943 mov ecx, dword ptr [0x104118ac] */
  ECX = (r32((uint32_t)(0x104118ac)));
  /* 103f0949 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103f094c mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0952 mov eax, dword ptr [0x104118b0] */
  EAX = (r32((uint32_t)(0x104118b0)));
  /* 103f0957 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103f095a mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0960 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f0962 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f0964 mov byte ptr [0x1040fea8], al */
  w8((uint32_t)(0x1040fea8), (AL));
  /* 103f0969 mov dword ptr [0x1040feac], 1 */
  w32((uint32_t)(0x1040feac), (0x1u));
  /* 103f0973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f0975 jmp 0x103f0aa2 */
  goto L_103f0aa2;
L_103f097a:;
  /* 103f097a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f097c mov ecx, dword ptr [0x104118a8] */
  ECX = (r32((uint32_t)(0x104118a8)));
  /* 103f0982 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0983 call 0x103e6140 */
  push32(0x103f0988u); f_103e6140();
  /* 103f0988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f098b push 2 */
  push32((uint32_t)(0x2u));
  /* 103f098d mov edx, dword ptr [0x104118ac] */
  EDX = (r32((uint32_t)(0x104118ac)));
  /* 103f0993 push edx */
  push32((uint32_t)(EDX));
  /* 103f0994 call 0x103e6140 */
  push32(0x103f0999u); f_103e6140();
  /* 103f0999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f099c push 2 */
  push32((uint32_t)(0x2u));
  /* 103f099e mov eax, dword ptr [0x104118b0] */
  EAX = (r32((uint32_t)(0x104118b0)));
  /* 103f09a3 push eax */
  push32((uint32_t)(EAX));
  /* 103f09a4 call 0x103e6140 */
  push32(0x103f09a9u); f_103e6140();
  /* 103f09a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f09ac mov dword ptr [0x104118a8], 0 */
  w32((uint32_t)(0x104118a8), (0x0u));
  /* 103f09b6 mov dword ptr [0x104118ac], 0 */
  w32((uint32_t)(0x104118ac), (0x0u));
  /* 103f09c0 mov dword ptr [0x104118b0], 0 */
  w32((uint32_t)(0x104118b0), (0x0u));
  /* 103f09ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 103f09cf push 0x1040d374 */
  push32((uint32_t)(0x1040d374u));
  /* 103f09d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f09d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f09d8 call 0x103e56b0 */
  push32(0x103f09ddu); f_103e56b0();
  /* 103f09dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f09e0 mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f09e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f09e8 mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f09ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f09f1 jne 0x103f09fb */
  if (!C.zf) goto L_103f09fb;
  /* 103f09f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f09f6 jmp 0x103f0aa2 */
  goto L_103f0aa2;
L_103f09fb:;
  /* 103f09fb push 0x1040d344 */
  push32((uint32_t)(0x1040d344u));
  /* 103f0a00 mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a05 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f0a07 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0a08 call 0x103e8660 */
  push32(0x103f0a0du); f_103e8660();
  /* 103f0a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0a10 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 103f0a15 push 0x1040d374 */
  push32((uint32_t)(0x1040d374u));
  /* 103f0a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0a1c push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0a1e call 0x103e56b0 */
  push32(0x103f0a23u); f_103e56b0();
  /* 103f0a23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0a26 mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a2c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103f0a2f mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a34 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0a38 jne 0x103f0a3f */
  if (!C.zf) goto L_103f0a3f;
  /* 103f0a3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f0a3d jmp 0x103f0aa2 */
  goto L_103f0aa2;
L_103f0a3f:;
  /* 103f0a3f mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103f0a48 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103f0a4b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 103f0a50 push 0x1040d374 */
  push32((uint32_t)(0x1040d374u));
  /* 103f0a55 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0a59 call 0x103e56b0 */
  push32(0x103f0a5eu); f_103e56b0();
  /* 103f0a5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0a61 mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a67 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103f0a6a mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a70 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0a74 jne 0x103f0a7b */
  if (!C.zf) goto L_103f0a7b;
  /* 103f0a76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f0a79 jmp 0x103f0aa2 */
  goto L_103f0aa2;
L_103f0a7b:;
  /* 103f0a7b mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a80 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103f0a83 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103f0a86 mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0a8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f0a8e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f0a90 mov byte ptr [0x1040fea8], cl */
  w8((uint32_t)(0x1040fea8), (CL));
  /* 103f0a96 mov dword ptr [0x1040feac], 1 */
  w32((uint32_t)(0x1040feac), (0x1u));
  /* 103f0aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f0aa2:;
  /* 103f0aa2 mov esp, ebp */
  ESP = (EBP);
  /* 103f0aa4 pop ebp */
  EBP = (pop32());
  /* 103f0aa5 ret  */
  ESPCHK(0x103f0800u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x103f0ab0 (125 bytes, 49 insns) */
void f_103f0ab0(void) {
  FTRACE(0x103f0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 103f0ab3 push ecx */
  push32((uint32_t)(ECX));
L_103f0ab4:;
  /* 103f0ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ab7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f0aba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f0abc je 0x103f0b29 */
  if (C.zf) goto L_103f0b29;
  /* 103f0abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ac1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f0ac4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0ac7 jl 0x103f0aed */
  if ((C.sf!=C.of)) goto L_103f0aed;
  /* 103f0ac9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0acc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f0acf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0ad2 jg 0x103f0aed */
  if ((!C.zf&&C.sf==C.of)) goto L_103f0aed;
  /* 103f0ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f0ada sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f0add mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ae0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103f0ae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ae8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f0aeb jmp 0x103f0b27 */
  goto L_103f0b27;
L_103f0aed:;
  /* 103f0aed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0af0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f0af3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0af6 jne 0x103f0b1e */
  if (!C.zf) goto L_103f0b1e;
  /* 103f0af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f0afe:;
  /* 103f0afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b04 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103f0b07 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f0b09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f0b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b15 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f0b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f0b1a jne 0x103f0afe */
  if (!C.zf) goto L_103f0afe;
  /* 103f0b1c jmp 0x103f0b27 */
  goto L_103f0b27;
L_103f0b1e:;
  /* 103f0b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0b21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103f0b27:;
  /* 103f0b27 jmp 0x103f0ab4 */
  goto L_103f0ab4;
L_103f0b29:;
  /* 103f0b29 mov esp, ebp */
  ESP = (EBP);
  /* 103f0b2b pop ebp */
  EBP = (pop32());
  /* 103f0b2c ret  */
  ESPCHK(0x103f0ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x103f0b30 (304 bytes, 85 insns) */
void f_103f0b30(void) {
  FTRACE(0x103f0b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0b30 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0b31 mov ebp, esp */
  EBP = (ESP);
  /* 103f0b33 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0b34 cmp dword ptr [0x1041187c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041187c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0b3b je 0x103f0bfc */
  if (C.zf) goto L_103f0bfc;
  /* 103f0b41 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 103f0b43 push 0x1040d380 */
  push32((uint32_t)(0x1040d380u));
  /* 103f0b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0b4a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103f0b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0b4e call 0x103e5ac0 */
  push32(0x103f0b53u); f_103e5ac0();
  /* 103f0b53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f0b59 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0b5d jne 0x103f0b69 */
  if (!C.zf) goto L_103f0b69;
  /* 103f0b5f mov eax, 1 */
  EAX = (0x1u);
  /* 103f0b64 jmp 0x103f0c5c */
  goto L_103f0c5c;
L_103f0b69:;
  /* 103f0b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b6c push eax */
  push32((uint32_t)(EAX));
  /* 103f0b6d call 0x103f0c60 */
  push32(0x103f0b72u); f_103f0c60();
  /* 103f0b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f0b77 je 0x103f0b9d */
  if (C.zf) goto L_103f0b9d;
  /* 103f0b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b7c push ecx */
  push32((uint32_t)(ECX));
  /* 103f0b7d call 0x103f0ef0 */
  push32(0x103f0b82u); f_103f0ef0();
  /* 103f0b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0b87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0b8a push edx */
  push32((uint32_t)(EDX));
  /* 103f0b8b call 0x103e6140 */
  push32(0x103f0b90u); f_103e6140();
  /* 103f0b90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0b93 mov eax, 1 */
  EAX = (0x1u);
  /* 103f0b98 jmp 0x103f0c5c */
  goto L_103f0c5c;
L_103f0b9d:;
  /* 103f0b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0ba0 mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0ba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f0ba8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f0baa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0bad mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0bb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103f0bb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103f0bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0bbc mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0bc2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103f0bc5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103f0bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0bcb mov dword ptr [0x10410d88], eax */
  w32((uint32_t)(0x10410d88), (EAX));
  /* 103f0bd0 mov ecx, dword ptr [0x104118b4] */
  ECX = (r32((uint32_t)(0x104118b4)));
  /* 103f0bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0bd7 call 0x103f0ef0 */
  push32(0x103f0bdcu); f_103f0ef0();
  /* 103f0bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0bdf push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0be1 mov edx, dword ptr [0x104118b4] */
  EDX = (r32((uint32_t)(0x104118b4)));
  /* 103f0be7 push edx */
  push32((uint32_t)(EDX));
  /* 103f0be8 call 0x103e6140 */
  push32(0x103f0bedu); f_103e6140();
  /* 103f0bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0bf3 mov dword ptr [0x104118b4], eax */
  w32((uint32_t)(0x104118b4), (EAX));
  /* 103f0bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f0bfa jmp 0x103f0c5c */
  goto L_103f0c5c;
L_103f0bfc:;
  /* 103f0bfc mov ecx, dword ptr [0x10410d88] */
  ECX = (r32((uint32_t)(0x10410d88)));
  /* 103f0c02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f0c04 mov dword ptr [0x10410d58], edx */
  w32((uint32_t)(0x10410d58), (EDX));
  /* 103f0c0a mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f0c0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103f0c12 mov dword ptr [0x10410d5c], ecx */
  w32((uint32_t)(0x10410d5c), (ECX));
  /* 103f0c18 mov edx, dword ptr [0x10410d88] */
  EDX = (r32((uint32_t)(0x10410d88)));
  /* 103f0c1e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103f0c21 mov dword ptr [0x10410d60], eax */
  w32((uint32_t)(0x10410d60), (EAX));
  /* 103f0c26 mov dword ptr [0x10410d88], 0x10410d58 */
  w32((uint32_t)(0x10410d88), (0x10410d58u));
  /* 103f0c30 mov ecx, dword ptr [0x104118b4] */
  ECX = (r32((uint32_t)(0x104118b4)));
  /* 103f0c36 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0c37 call 0x103f0ef0 */
  push32(0x103f0c3cu); f_103f0ef0();
  /* 103f0c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0c41 mov edx, dword ptr [0x104118b4] */
  EDX = (r32((uint32_t)(0x104118b4)));
  /* 103f0c47 push edx */
  push32((uint32_t)(EDX));
  /* 103f0c48 call 0x103e6140 */
  push32(0x103f0c4du); f_103e6140();
  /* 103f0c4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0c50 mov dword ptr [0x104118b4], 0 */
  w32((uint32_t)(0x104118b4), (0x0u));
  /* 103f0c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f0c5c:;
  /* 103f0c5c mov esp, ebp */
  ESP = (EBP);
  /* 103f0c5e pop ebp */
  EBP = (pop32());
  /* 103f0c5f ret  */
  ESPCHK(0x103f0b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x103f0c60 (525 bytes, 200 insns) */
void f_103f0c60(void) {
  FTRACE(0x103f0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0c61 mov ebp, esp */
  EBP = (ESP);
  /* 103f0c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f0c66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f0c6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f0c6f mov ax, word ptr [0x104118d4] */
  AX = (r16((uint32_t)(0x104118d4)));
  /* 103f0c75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f0c78 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0c7c jne 0x103f0c86 */
  if (!C.zf) goto L_103f0c86;
  /* 103f0c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f0c81 jmp 0x103f0e69 */
  goto L_103f0e69;
L_103f0c86:;
  /* 103f0c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0c89 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0c8c push ecx */
  push32((uint32_t)(ECX));
  /* 103f0c8d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103f0c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0c92 push edx */
  push32((uint32_t)(EDX));
  /* 103f0c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0c95 call 0x103f3870 */
  push32(0x103f0c9au); f_103f3870();
  /* 103f0c9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0c9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0ca0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0ca2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ca8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0cab push edx */
  push32((uint32_t)(EDX));
  /* 103f0cac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103f0cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0cb1 push eax */
  push32((uint32_t)(EAX));
  /* 103f0cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0cb4 call 0x103f3870 */
  push32(0x103f0cb9u); f_103f3870();
  /* 103f0cb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0cbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0cbf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0cc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0cc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0cc7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0cca push edx */
  push32((uint32_t)(EDX));
  /* 103f0ccb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103f0ccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0cd0 push eax */
  push32((uint32_t)(EAX));
  /* 103f0cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0cd3 call 0x103f3870 */
  push32(0x103f0cd8u); f_103f3870();
  /* 103f0cd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0cde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0ce0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0ce3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ce6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ce9 push edx */
  push32((uint32_t)(EDX));
  /* 103f0cea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103f0cec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0cef push eax */
  push32((uint32_t)(EAX));
  /* 103f0cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0cf2 call 0x103f3870 */
  push32(0x103f0cf7u); f_103f3870();
  /* 103f0cf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0cfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0cfd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0cff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0d02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d08 push edx */
  push32((uint32_t)(EDX));
  /* 103f0d09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103f0d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0d0e push eax */
  push32((uint32_t)(EAX));
  /* 103f0d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0d11 call 0x103f3870 */
  push32(0x103f0d16u); f_103f3870();
  /* 103f0d16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0d1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0d1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f0d27 push eax */
  push32((uint32_t)(EAX));
  /* 103f0d28 call 0x103f0e70 */
  push32(0x103f0d2du); f_103f0e70();
  /* 103f0d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d36 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0d37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 103f0d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0d3c push edx */
  push32((uint32_t)(EDX));
  /* 103f0d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0d3f call 0x103f3870 */
  push32(0x103f0d44u); f_103f3870();
  /* 103f0d44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0d4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0d4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d55 push edx */
  push32((uint32_t)(EDX));
  /* 103f0d56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 103f0d58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0d5b push eax */
  push32((uint32_t)(EAX));
  /* 103f0d5c push 1 */
  push32((uint32_t)(0x1u));
  /* 103f0d5e call 0x103f3870 */
  push32(0x103f0d63u); f_103f3870();
  /* 103f0d63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0d69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0d6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d74 push edx */
  push32((uint32_t)(EDX));
  /* 103f0d75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103f0d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0d7a push eax */
  push32((uint32_t)(EAX));
  /* 103f0d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0d7d call 0x103f3870 */
  push32(0x103f0d82u); f_103f3870();
  /* 103f0d82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0d88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0d8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0d8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0d90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0d93 push edx */
  push32((uint32_t)(EDX));
  /* 103f0d94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103f0d96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0d99 push eax */
  push32((uint32_t)(EAX));
  /* 103f0d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0d9c call 0x103f3870 */
  push32(0x103f0da1u); f_103f3870();
  /* 103f0da1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0da4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0da7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0da9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0daf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0db2 push edx */
  push32((uint32_t)(EDX));
  /* 103f0db3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 103f0db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0db8 push eax */
  push32((uint32_t)(EAX));
  /* 103f0db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0dbb call 0x103f3870 */
  push32(0x103f0dc0u); f_103f3870();
  /* 103f0dc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0dc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0dc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0dc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0dcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0dce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0dd1 push edx */
  push32((uint32_t)(EDX));
  /* 103f0dd2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 103f0dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0dd7 push eax */
  push32((uint32_t)(EAX));
  /* 103f0dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0dda call 0x103f3870 */
  push32(0x103f0ddfu); f_103f3870();
  /* 103f0ddf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0de2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0de5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0de7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0dea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ded add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0df0 push edx */
  push32((uint32_t)(EDX));
  /* 103f0df1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 103f0df3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0df6 push eax */
  push32((uint32_t)(EAX));
  /* 103f0df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0df9 call 0x103f3870 */
  push32(0x103f0dfeu); f_103f3870();
  /* 103f0dfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0e04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0e06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0e09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e0f push edx */
  push32((uint32_t)(EDX));
  /* 103f0e10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 103f0e12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0e15 push eax */
  push32((uint32_t)(EAX));
  /* 103f0e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0e18 call 0x103f3870 */
  push32(0x103f0e1du); f_103f3870();
  /* 103f0e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0e23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0e25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0e28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e2e push edx */
  push32((uint32_t)(EDX));
  /* 103f0e2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 103f0e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0e34 push eax */
  push32((uint32_t)(EAX));
  /* 103f0e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0e37 call 0x103f3870 */
  push32(0x103f0e3cu); f_103f3870();
  /* 103f0e3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0e42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0e44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e4d push edx */
  push32((uint32_t)(EDX));
  /* 103f0e4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 103f0e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0e53 push eax */
  push32((uint32_t)(EAX));
  /* 103f0e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0e56 call 0x103f3870 */
  push32(0x103f0e5bu); f_103f3870();
  /* 103f0e5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0e5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f0e61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f0e63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f0e66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103f0e69:;
  /* 103f0e69 mov esp, ebp */
  ESP = (EBP);
  /* 103f0e6b pop ebp */
  EBP = (pop32());
  /* 103f0e6c ret  */
  ESPCHK(0x103f0c60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x103f0e70 (125 bytes, 49 insns) */
void f_103f0e70(void) {
  FTRACE(0x103f0e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0e70 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0e71 mov ebp, esp */
  EBP = (ESP);
  /* 103f0e73 push ecx */
  push32((uint32_t)(ECX));
L_103f0e74:;
  /* 103f0e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f0e7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f0e7c je 0x103f0ee9 */
  if (C.zf) goto L_103f0ee9;
  /* 103f0e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f0e84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0e87 jl 0x103f0ead */
  if ((C.sf!=C.of)) goto L_103f0ead;
  /* 103f0e89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f0e8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0e92 jg 0x103f0ead */
  if ((!C.zf&&C.sf==C.of)) goto L_103f0ead;
  /* 103f0e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0e97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f0e9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f0e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ea0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103f0ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ea5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ea8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f0eab jmp 0x103f0ee7 */
  goto L_103f0ee7;
L_103f0ead:;
  /* 103f0ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0eb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f0eb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0eb6 jne 0x103f0ede */
  if (!C.zf) goto L_103f0ede;
  /* 103f0eb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f0ebe:;
  /* 103f0ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0ec4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103f0ec7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f0ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0ecc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ecf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f0ed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f0ed5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f0ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f0eda jne 0x103f0ebe */
  if (!C.zf) goto L_103f0ebe;
  /* 103f0edc jmp 0x103f0ee7 */
  goto L_103f0ee7;
L_103f0ede:;
  /* 103f0ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0ee1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ee4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103f0ee7:;
  /* 103f0ee7 jmp 0x103f0e74 */
  goto L_103f0e74;
L_103f0ee9:;
  /* 103f0ee9 mov esp, ebp */
  ESP = (EBP);
  /* 103f0eeb pop ebp */
  EBP = (pop32());
  /* 103f0eec ret  */
  ESPCHK(0x103f0e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ef0 @ 0x103f0ef0 (147 bytes, 52 insns) */
void f_103f0ef0(void) {
  FTRACE(0x103f0ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0ef1 mov ebp, esp */
  EBP = (ESP);
  /* 103f0ef3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0ef7 jne 0x103f0efe */
  if (!C.zf) goto L_103f0efe;
  /* 103f0ef9 jmp 0x103f0f81 */
  goto L_103f0f81;
L_103f0efe:;
  /* 103f0efe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f01 cmp dword ptr [eax + 0xc], 0x10411910 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10411910u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0f08 je 0x103f0f81 */
  if (C.zf) goto L_103f0f81;
  /* 103f0f0a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103f0f12 push edx */
  push32((uint32_t)(EDX));
  /* 103f0f13 call 0x103e6140 */
  push32(0x103f0f18u); f_103e6140();
  /* 103f0f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103f0f23 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0f24 call 0x103e6140 */
  push32(0x103f0f29u); f_103e6140();
  /* 103f0f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f2c push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f0f34 push eax */
  push32((uint32_t)(EAX));
  /* 103f0f35 call 0x103e6140 */
  push32(0x103f0f3au); f_103e6140();
  /* 103f0f3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103f0f45 push edx */
  push32((uint32_t)(EDX));
  /* 103f0f46 call 0x103e6140 */
  push32(0x103f0f4bu); f_103e6140();
  /* 103f0f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f4e push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103f0f56 push ecx */
  push32((uint32_t)(ECX));
  /* 103f0f57 call 0x103e6140 */
  push32(0x103f0f5cu); f_103e6140();
  /* 103f0f5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f5f push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 103f0f67 push eax */
  push32((uint32_t)(EAX));
  /* 103f0f68 call 0x103e6140 */
  push32(0x103f0f6du); f_103e6140();
  /* 103f0f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0f72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f0f75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 103f0f78 push edx */
  push32((uint32_t)(EDX));
  /* 103f0f79 call 0x103e6140 */
  push32(0x103f0f7eu); f_103e6140();
  /* 103f0f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f0f81:;
  /* 103f0f81 pop ebp */
  EBP = (pop32());
  /* 103f0f82 ret  */
  ESPCHK(0x103f0ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x103f0f90 (928 bytes, 284 insns) */
void f_103f0f90(void) {
  FTRACE(0x103f0f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f0f90 push ebp */
  push32((uint32_t)(EBP));
  /* 103f0f91 mov ebp, esp */
  EBP = (ESP);
  /* 103f0f93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f0f96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 103f0f9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 103f0fa4 cmp dword ptr [0x10411878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0fab je 0x103f12e1 */
  if (C.zf) goto L_103f12e1;
  /* 103f0fb1 cmp dword ptr [0x10411888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f0fb8 jne 0x103f0fe0 */
  if (!C.zf) goto L_103f0fe0;
  /* 103f0fba push 0x10411888 */
  push32((uint32_t)(0x10411888u));
  /* 103f0fbf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 103f0fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f0fc6 mov ax, word ptr [0x104118cc] */
  AX = (r16((uint32_t)(0x104118cc)));
  /* 103f0fcc push eax */
  push32((uint32_t)(EAX));
  /* 103f0fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 103f0fcf call 0x103f3870 */
  push32(0x103f0fd4u); f_103f3870();
  /* 103f0fd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f0fd9 je 0x103f0fe0 */
  if (C.zf) goto L_103f0fe0;
  /* 103f0fdb jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f0fe0:;
  /* 103f0fe0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 103f0fe2 push 0x1040d38c */
  push32((uint32_t)(0x1040d38cu));
  /* 103f0fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f0fe9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103f0fee call 0x103e56b0 */
  push32(0x103f0ff3u); f_103e56b0();
  /* 103f0ff3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f0ff6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103f0ff9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103f0ffb push 0x1040d38c */
  push32((uint32_t)(0x1040d38cu));
  /* 103f1000 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1002 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103f1007 call 0x103e56b0 */
  push32(0x103f100cu); f_103e56b0();
  /* 103f100c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f100f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103f1012 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 103f1014 push 0x1040d38c */
  push32((uint32_t)(0x1040d38cu));
  /* 103f1019 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f101b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103f1020 call 0x103e56b0 */
  push32(0x103f1025u); f_103e56b0();
  /* 103f1025 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1028 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103f102b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 103f102d push 0x1040d38c */
  push32((uint32_t)(0x1040d38cu));
  /* 103f1032 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1034 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103f1039 call 0x103e56b0 */
  push32(0x103f103eu); f_103e56b0();
  /* 103f103e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1041 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103f1044 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1048 je 0x103f105c */
  if (C.zf) goto L_103f105c;
  /* 103f104a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f104e je 0x103f105c */
  if (C.zf) goto L_103f105c;
  /* 103f1050 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1054 je 0x103f105c */
  if (C.zf) goto L_103f105c;
  /* 103f1056 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f105a jne 0x103f1061 */
  if (!C.zf) goto L_103f1061;
L_103f105c:;
  /* 103f105c jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f1061:;
  /* 103f1061 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f1064 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103f1067 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103f106e jmp 0x103f1079 */
  goto L_103f1079;
L_103f1070:;
  /* 103f1070 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f1073 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1076 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103f1079:;
  /* 103f1079 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1080 jge 0x103f1095 */
  if ((C.sf==C.of)) goto L_103f1095;
  /* 103f1082 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f1085 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 103f1088 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103f108a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f108d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1090 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103f1093 jmp 0x103f1070 */
  goto L_103f1070;
L_103f1095:;
  /* 103f1095 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 103f1098 push eax */
  push32((uint32_t)(EAX));
  /* 103f1099 mov ecx, dword ptr [0x10411888] */
  ECX = (r32((uint32_t)(0x10411888)));
  /* 103f109f push ecx */
  push32((uint32_t)(ECX));
  /* 103f10a0 call dword ptr [0x10414324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414324))), 0x103f10a6u);
  /* 103f10a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f10a8 jne 0x103f10af */
  if (!C.zf) goto L_103f10af;
  /* 103f10aa jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f10af:;
  /* 103f10af cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f10b3 jbe 0x103f10ba */
  if ((C.cf||C.zf)) goto L_103f10ba;
  /* 103f10b5 jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f10ba:;
  /* 103f10ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f10bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f10c3 mov dword ptr [0x1040fea4], edx */
  w32((uint32_t)(0x1040fea4), (EDX));
  /* 103f10c9 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f10d0 jle 0x103f1129 */
  if ((C.zf||C.sf!=C.of)) goto L_103f1129;
  /* 103f10d2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 103f10d5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103f10d8 jmp 0x103f10e3 */
  goto L_103f10e3;
L_103f10da:;
  /* 103f10da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f10dd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f10e0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_103f10e3:;
  /* 103f10e3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f10e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f10e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f10ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f10ec je 0x103f1129 */
  if (C.zf) goto L_103f1129;
  /* 103f10ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f10f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f10f3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103f10f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f10f8 je 0x103f1129 */
  if (C.zf) goto L_103f1129;
  /* 103f10fa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f10fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f10ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f1101 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103f1104 jmp 0x103f110f */
  goto L_103f110f;
L_103f1106:;
  /* 103f1106 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f1109 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f110c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103f110f:;
  /* 103f110f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f1112 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1114 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103f1117 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f111a jg 0x103f1127 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f1127;
  /* 103f111c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f111f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1122 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103f1125 jmp 0x103f1106 */
  goto L_103f1106;
L_103f1127:;
  /* 103f1127 jmp 0x103f10da */
  goto L_103f10da;
L_103f1129:;
  /* 103f1129 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f112b push 0 */
  push32((uint32_t)(0x0u));
  /* 103f112d push 0 */
  push32((uint32_t)(0x0u));
  /* 103f112f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f1132 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1135 push eax */
  push32((uint32_t)(EAX));
  /* 103f1136 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103f113b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f113e push ecx */
  push32((uint32_t)(ECX));
  /* 103f113f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1141 call 0x103ed8e0 */
  push32(0x103f1146u); f_103ed8e0();
  /* 103f1146 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f114b jne 0x103f1152 */
  if (!C.zf) goto L_103f1152;
  /* 103f114d jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f1152:;
  /* 103f1152 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f1155 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 103f115a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f115d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103f1160 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103f1167 jmp 0x103f1172 */
  goto L_103f1172;
L_103f1169:;
  /* 103f1169 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f116c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f116f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103f1172:;
  /* 103f1172 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1179 jge 0x103f1190 */
  if ((C.sf==C.of)) goto L_103f1190;
  /* 103f117b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f117e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 103f1182 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 103f1185 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f1188 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f118b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103f118e jmp 0x103f1169 */
  goto L_103f1169;
L_103f1190:;
  /* 103f1190 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f1192 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f1194 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f1197 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f119a push edx */
  push32((uint32_t)(EDX));
  /* 103f119b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103f11a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f11a3 push eax */
  push32((uint32_t)(EAX));
  /* 103f11a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f11a6 call 0x103f3b10 */
  push32(0x103f11abu); f_103f3b10();
  /* 103f11ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f11ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f11b0 jne 0x103f11b7 */
  if (!C.zf) goto L_103f11b7;
  /* 103f11b2 jmp 0x103f12a2 */
  goto L_103f12a2;
L_103f11b7:;
  /* 103f11b7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f11ba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 103f11bf cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f11c6 jle 0x103f1223 */
  if ((C.zf||C.sf!=C.of)) goto L_103f1223;
  /* 103f11c8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 103f11cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103f11ce jmp 0x103f11d9 */
  goto L_103f11d9;
L_103f11d0:;
  /* 103f11d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f11d3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f11d6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103f11d9:;
  /* 103f11d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f11dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f11de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f11e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f11e2 je 0x103f1223 */
  if (C.zf) goto L_103f1223;
  /* 103f11e4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f11e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f11e9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103f11ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f11ee je 0x103f1223 */
  if (C.zf) goto L_103f1223;
  /* 103f11f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f11f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f11f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f11f7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103f11fa jmp 0x103f1205 */
  goto L_103f1205;
L_103f11fc:;
  /* 103f11fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f11ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1202 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103f1205:;
  /* 103f1205 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f1208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f120a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103f120d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1210 jg 0x103f1221 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f1221;
  /* 103f1212 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f1215 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f1218 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 103f121f jmp 0x103f11fc */
  goto L_103f11fc;
L_103f1221:;
  /* 103f1221 jmp 0x103f11d0 */
  goto L_103f11d0;
L_103f1223:;
  /* 103f1223 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f1226 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1229 mov dword ptr [0x1040fc98], eax */
  w32((uint32_t)(0x1040fc98), (EAX));
  /* 103f122e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f1231 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1234 mov dword ptr [0x1040fc9c], ecx */
  w32((uint32_t)(0x1040fc9c), (ECX));
  /* 103f123a cmp dword ptr [0x104118b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1241 je 0x103f1254 */
  if (C.zf) goto L_103f1254;
  /* 103f1243 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1245 mov edx, dword ptr [0x104118b8] */
  EDX = (r32((uint32_t)(0x104118b8)));
  /* 103f124b push edx */
  push32((uint32_t)(EDX));
  /* 103f124c call 0x103e6140 */
  push32(0x103f1251u); f_103e6140();
  /* 103f1251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1254:;
  /* 103f1254 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f1257 mov dword ptr [0x104118b8], eax */
  w32((uint32_t)(0x104118b8), (EAX));
  /* 103f125c cmp dword ptr [0x104118bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1263 je 0x103f1276 */
  if (C.zf) goto L_103f1276;
  /* 103f1265 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1267 mov ecx, dword ptr [0x104118bc] */
  ECX = (r32((uint32_t)(0x104118bc)));
  /* 103f126d push ecx */
  push32((uint32_t)(ECX));
  /* 103f126e call 0x103e6140 */
  push32(0x103f1273u); f_103e6140();
  /* 103f1273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1276:;
  /* 103f1276 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f1279 mov dword ptr [0x104118bc], edx */
  w32((uint32_t)(0x104118bc), (EDX));
  /* 103f127f push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1281 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f1284 push eax */
  push32((uint32_t)(EAX));
  /* 103f1285 call 0x103e6140 */
  push32(0x103f128au); f_103e6140();
  /* 103f128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f128d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f128f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f1292 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1293 call 0x103e6140 */
  push32(0x103f1298u); f_103e6140();
  /* 103f1298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f129b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f129d jmp 0x103f132c */
  goto L_103f132c;
L_103f12a2:;
  /* 103f12a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f12a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f12a7 push edx */
  push32((uint32_t)(EDX));
  /* 103f12a8 call 0x103e6140 */
  push32(0x103f12adu); f_103e6140();
  /* 103f12ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f12b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f12b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f12b5 push eax */
  push32((uint32_t)(EAX));
  /* 103f12b6 call 0x103e6140 */
  push32(0x103f12bbu); f_103e6140();
  /* 103f12bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f12be push 2 */
  push32((uint32_t)(0x2u));
  /* 103f12c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f12c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f12c4 call 0x103e6140 */
  push32(0x103f12c9u); f_103e6140();
  /* 103f12c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f12cc push 2 */
  push32((uint32_t)(0x2u));
  /* 103f12ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f12d1 push edx */
  push32((uint32_t)(EDX));
  /* 103f12d2 call 0x103e6140 */
  push32(0x103f12d7u); f_103e6140();
  /* 103f12d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f12da mov eax, 1 */
  EAX = (0x1u);
  /* 103f12df jmp 0x103f132c */
  goto L_103f132c;
L_103f12e1:;
  /* 103f12e1 mov dword ptr [0x1040fc98], 0x1040fca2 */
  w32((uint32_t)(0x1040fc98), (0x1040fca2u));
  /* 103f12eb mov dword ptr [0x1040fc9c], 0x1040fca2 */
  w32((uint32_t)(0x1040fc9c), (0x1040fca2u));
  /* 103f12f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f12f7 mov eax, dword ptr [0x104118b8] */
  EAX = (r32((uint32_t)(0x104118b8)));
  /* 103f12fc push eax */
  push32((uint32_t)(EAX));
  /* 103f12fd call 0x103e6140 */
  push32(0x103f1302u); f_103e6140();
  /* 103f1302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1305 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f1307 mov ecx, dword ptr [0x104118bc] */
  ECX = (r32((uint32_t)(0x104118bc)));
  /* 103f130d push ecx */
  push32((uint32_t)(ECX));
  /* 103f130e call 0x103e6140 */
  push32(0x103f1313u); f_103e6140();
  /* 103f1313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1316 mov dword ptr [0x104118b8], 0 */
  w32((uint32_t)(0x104118b8), (0x0u));
  /* 103f1320 mov dword ptr [0x104118bc], 0 */
  w32((uint32_t)(0x104118bc), (0x0u));
  /* 103f132a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f132c:;
  /* 103f132c mov esp, ebp */
  ESP = (EBP);
  /* 103f132e pop ebp */
  EBP = (pop32());
  /* 103f132f ret  */
  ESPCHK(0x103f0f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x103f1330 (7 bytes, 5 insns) */
void f_103f1330(void) {
  FTRACE(0x103f1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1330 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1331 mov ebp, esp */
  EBP = (ESP);
  /* 103f1333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1335 pop ebp */
  EBP = (pop32());
  /* 103f1336 ret  */
  ESPCHK(0x103f1330u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x103f1340 (129 bytes, 56 insns) */
void f_103f1340(void) {
  FTRACE(0x103f1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1340 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 103f1344 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 103f1348 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103f134e jne 0x103f138c */
  if (!C.zf) goto L_103f138c;
L_103f1350:;
  /* 103f1350 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f1352 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f1354 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f1356 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f1358 je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f135a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f135d jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f135f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103f1361 je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f1363 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103f1366 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f1369 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f136b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f136d je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f136f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f1372 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f1374 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1377 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f137a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103f137c jne 0x103f1350 */
  if (!C.zf) goto L_103f1350;
  /* 103f137e mov edi, edi */
  EDI = (EDI);
L_103f1380:;
  /* 103f1380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1382 ret  */
  ESPCHK(0x103f1340u, _esp0);
  ESP += 4; return;
  /* 103f1383 nop  */
  /* nop */
L_103f1384:;
  /* 103f1384 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1386 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f1388 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103f1389 ret  */
  ESPCHK(0x103f1340u, _esp0);
  ESP += 4; return;
  /* 103f138a mov edi, edi */
  EDI = (EDI);
L_103f138c:;
  /* 103f138c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 103f1392 je 0x103f13a8 */
  if (C.zf) goto L_103f13a8;
  /* 103f1394 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f1396 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103f1397 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f1399 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f139b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103f139c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f139e je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f13a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 103f13a6 je 0x103f1350 */
  if (C.zf) goto L_103f1350;
L_103f13a8:;
  /* 103f13a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 103f13ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f13ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f13b0 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f13b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f13b4 je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f13b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f13b9 jne 0x103f1384 */
  if (!C.zf) goto L_103f1384;
  /* 103f13bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103f13bd je 0x103f1380 */
  if (C.zf) goto L_103f1380;
  /* 103f13bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f13c2 jmp 0x103f1350 */
  goto L_103f1350;
}

/* FUN_100113d0 @ 0x103f13d0 (62 bytes, 35 insns) */
void f_103f13d0(void) {
  FTRACE(0x103f13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f13d1 mov ebp, esp */
  EBP = (ESP);
  /* 103f13d3 push esi */
  push32((uint32_t)(ESI));
  /* 103f13d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f13d6 push eax */
  push32((uint32_t)(EAX));
  /* 103f13d7 push eax */
  push32((uint32_t)(EAX));
  /* 103f13d8 push eax */
  push32((uint32_t)(EAX));
  /* 103f13d9 push eax */
  push32((uint32_t)(EAX));
  /* 103f13da push eax */
  push32((uint32_t)(EAX));
  /* 103f13db push eax */
  push32((uint32_t)(EAX));
  /* 103f13dc push eax */
  push32((uint32_t)(EAX));
  /* 103f13dd push eax */
  push32((uint32_t)(EAX));
  /* 103f13de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f13e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103f13e4:;
  /* 103f13e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f13e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f13e8 je 0x103f13f1 */
  if (C.zf) goto L_103f13f1;
  /* 103f13ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103f13eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x103f13eb");
  /* 103f13ef jmp 0x103f13e4 */
  goto L_103f13e4;
L_103f13f1:;
  /* 103f13f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 103f13f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103f13f7 nop  */
  /* nop */
L_103f13f8:;
  /* 103f13f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103f13f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103f13fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f13fd je 0x103f1406 */
  if (C.zf) goto L_103f1406;
  /* 103f13ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f1400 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x103f1400");
  /* 103f1404 jae 0x103f13f8 */
  if (!C.cf) goto L_103f13f8;
L_103f1406:;
  /* 103f1406 mov eax, ecx */
  EAX = (ECX);
  /* 103f1408 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f140b pop esi */
  ESI = (pop32());
  /* 103f140c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103f140d ret  */
  ESPCHK(0x103f13d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x103f1410 (56 bytes, 31 insns) */
void f_103f1410(void) {
  FTRACE(0x103f1410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1410 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1411 mov ebp, esp */
  EBP = (ESP);
  /* 103f1413 push edi */
  push32((uint32_t)(EDI));
  /* 103f1414 push esi */
  push32((uint32_t)(ESI));
  /* 103f1415 push ebx */
  push32((uint32_t)(EBX));
  /* 103f1416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f1419 jecxz 0x103f1441 */
  x86_unimpl("jecxz @ 0x103f1419");
  /* 103f141b mov ebx, ecx */
  EBX = (ECX);
  /* 103f141d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1420 mov esi, edi */
  ESI = (EDI);
  /* 103f1422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1424 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 103f1426 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1428 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f142a mov edi, esi */
  EDI = (ESI);
  /* 103f142c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103f142f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 103f1431 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 103f1434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1436 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f1439 ja 0x103f143f */
  if ((!C.cf&&!C.zf)) goto L_103f143f;
  /* 103f143b je 0x103f1441 */
  if (C.zf) goto L_103f1441;
  /* 103f143d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103f143e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_103f143f:;
  /* 103f143f not ecx */
  ECX = (~(ECX));
L_103f1441:;
  /* 103f1441 mov eax, ecx */
  EAX = (ECX);
  /* 103f1443 pop ebx */
  EBX = (pop32());
  /* 103f1444 pop esi */
  ESI = (pop32());
  /* 103f1445 pop edi */
  EDI = (pop32());
  /* 103f1446 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103f1447 ret  */
  ESPCHK(0x103f1410u, _esp0);
  ESP += 4; return;
}

/* FUN_10011450 @ 0x103f1450 (58 bytes, 32 insns) */
void f_103f1450(void) {
  FTRACE(0x103f1450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1450 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1451 mov ebp, esp */
  EBP = (ESP);
  /* 103f1453 push esi */
  push32((uint32_t)(ESI));
  /* 103f1454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1456 push eax */
  push32((uint32_t)(EAX));
  /* 103f1457 push eax */
  push32((uint32_t)(EAX));
  /* 103f1458 push eax */
  push32((uint32_t)(EAX));
  /* 103f1459 push eax */
  push32((uint32_t)(EAX));
  /* 103f145a push eax */
  push32((uint32_t)(EAX));
  /* 103f145b push eax */
  push32((uint32_t)(EAX));
  /* 103f145c push eax */
  push32((uint32_t)(EAX));
  /* 103f145d push eax */
  push32((uint32_t)(EAX));
  /* 103f145e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f1461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103f1464:;
  /* 103f1464 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f1466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f1468 je 0x103f1471 */
  if (C.zf) goto L_103f1471;
  /* 103f146a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103f146b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x103f146b");
  /* 103f146f jmp 0x103f1464 */
  goto L_103f1464;
L_103f1471:;
  /* 103f1471 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_103f1474:;
  /* 103f1474 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103f1476 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f1478 je 0x103f1484 */
  if (C.zf) goto L_103f1484;
  /* 103f147a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f147b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x103f147b");
  /* 103f147f jae 0x103f1474 */
  if (!C.cf) goto L_103f1474;
  /* 103f1481 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_103f1484:;
  /* 103f1484 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1487 pop esi */
  ESI = (pop32());
  /* 103f1488 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103f1489 ret  */
  ESPCHK(0x103f1450u, _esp0);
  ESP += 4; return;
}

/* FUN_10011490 @ 0x103f1490 (512 bytes, 147 insns) */
void f_103f1490(void) {
  FTRACE(0x103f1490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1490 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1491 mov ebp, esp */
  EBP = (ESP);
  /* 103f1493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1496 cmp dword ptr [0x10411904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f149d jne 0x103f14c2 */
  if (!C.zf) goto L_103f14c2;
  /* 103f149f call 0x103f1f60 */
  push32(0x103f14a4u); f_103f1f60();
  /* 103f14a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f14a6 je 0x103f14b2 */
  if (C.zf) goto L_103f14b2;
  /* 103f14a8 mov eax, dword ptr [0x104142e8] */
  EAX = (r32((uint32_t)(0x104142e8)));
  /* 103f14ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f14b0 jmp 0x103f14b9 */
  goto L_103f14b9;
L_103f14b2:;
  /* 103f14b2 mov dword ptr [ebp - 8], 0x103f1fb0 */
  w32((uint32_t)(EBP + -0x8), (0x103f1fb0u));
L_103f14b9:;
  /* 103f14b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f14bc mov dword ptr [0x10411904], ecx */
  w32((uint32_t)(0x10411904), (ECX));
L_103f14c2:;
  /* 103f14c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f14c6 jne 0x103f14d2 */
  if (!C.zf) goto L_103f14d2;
  /* 103f14c8 call 0x103f1db0 */
  push32(0x103f14cdu); f_103f1db0();
  /* 103f14cd jmp 0x103f159e */
  goto L_103f159e;
L_103f14d2:;
  /* 103f14d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f14d5 mov dword ptr [0x104118f4], edx */
  w32((uint32_t)(0x104118f4), (EDX));
  /* 103f14db cmp dword ptr [0x104118f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f14e2 je 0x103f1504 */
  if (C.zf) goto L_103f1504;
  /* 103f14e4 mov eax, dword ptr [0x104118f4] */
  EAX = (r32((uint32_t)(0x104118f4)));
  /* 103f14e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f14ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f14ee je 0x103f1504 */
  if (C.zf) goto L_103f1504;
  /* 103f14f0 push 0x104118f4 */
  push32((uint32_t)(0x104118f4u));
  /* 103f14f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103f14f7 push 0x10410a90 */
  push32((uint32_t)(0x10410a90u));
  /* 103f14fc call 0x103f1690 */
  push32(0x103f1501u); f_103f1690();
  /* 103f1501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1504:;
  /* 103f1504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1507 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f150a mov dword ptr [0x104118f8], edx */
  w32((uint32_t)(0x104118f8), (EDX));
  /* 103f1510 cmp dword ptr [0x104118f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1517 je 0x103f1539 */
  if (C.zf) goto L_103f1539;
  /* 103f1519 mov eax, dword ptr [0x104118f8] */
  EAX = (r32((uint32_t)(0x104118f8)));
  /* 103f151e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f1521 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f1523 je 0x103f1539 */
  if (C.zf) goto L_103f1539;
  /* 103f1525 push 0x104118f8 */
  push32((uint32_t)(0x104118f8u));
  /* 103f152a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103f152c push 0x104109d8 */
  push32((uint32_t)(0x104109d8u));
  /* 103f1531 call 0x103f1690 */
  push32(0x103f1536u); f_103f1690();
  /* 103f1536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1539:;
  /* 103f1539 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f1543 cmp dword ptr [0x104118f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f154a je 0x103f157d */
  if (C.zf) goto L_103f157d;
  /* 103f154c mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1552 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f1555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1557 je 0x103f157d */
  if (C.zf) goto L_103f157d;
  /* 103f1559 cmp dword ptr [0x104118f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1560 je 0x103f1576 */
  if (C.zf) goto L_103f1576;
  /* 103f1562 mov ecx, dword ptr [0x104118f8] */
  ECX = (r32((uint32_t)(0x104118f8)));
  /* 103f1568 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f156b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f156d je 0x103f1576 */
  if (C.zf) goto L_103f1576;
  /* 103f156f call 0x103f1720 */
  push32(0x103f1574u); f_103f1720();
  /* 103f1574 jmp 0x103f157b */
  goto L_103f157b;
L_103f1576:;
  /* 103f1576 call 0x103f1b10 */
  push32(0x103f157bu); f_103f1b10();
L_103f157b:;
  /* 103f157b jmp 0x103f159e */
  goto L_103f159e;
L_103f157d:;
  /* 103f157d cmp dword ptr [0x104118f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1584 je 0x103f1599 */
  if (C.zf) goto L_103f1599;
  /* 103f1586 mov eax, dword ptr [0x104118f8] */
  EAX = (r32((uint32_t)(0x104118f8)));
  /* 103f158b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f158e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f1590 je 0x103f1599 */
  if (C.zf) goto L_103f1599;
  /* 103f1592 call 0x103f1cb0 */
  push32(0x103f1597u); f_103f1cb0();
  /* 103f1597 jmp 0x103f159e */
  goto L_103f159e;
L_103f1599:;
  /* 103f1599 call 0x103f1db0 */
  push32(0x103f159eu); f_103f1db0();
L_103f159e:;
  /* 103f159e cmp dword ptr [0x104118fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f15a5 jne 0x103f15ae */
  if (!C.zf) goto L_103f15ae;
  /* 103f15a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f15a9 jmp 0x103f168c */
  goto L_103f168c;
L_103f15ae:;
  /* 103f15ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f15b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f15b7 push edx */
  push32((uint32_t)(EDX));
  /* 103f15b8 call 0x103f1de0 */
  push32(0x103f15bdu); f_103f1de0();
  /* 103f15bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f15c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f15c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f15c7 je 0x103f15dc */
  if (C.zf) goto L_103f15dc;
  /* 103f15c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f15cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f15d1 push eax */
  push32((uint32_t)(EAX));
  /* 103f15d2 call dword ptr [0x104142ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142ec))), 0x103f15d8u);
  /* 103f15d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f15da jne 0x103f15e3 */
  if (!C.zf) goto L_103f15e3;
L_103f15dc:;
  /* 103f15dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f15de jmp 0x103f168c */
  goto L_103f168c;
L_103f15e3:;
  /* 103f15e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f15e5 mov ecx, dword ptr [0x104118e4] */
  ECX = (r32((uint32_t)(0x104118e4)));
  /* 103f15eb push ecx */
  push32((uint32_t)(ECX));
  /* 103f15ec call dword ptr [0x104142f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142f0))), 0x103f15f2u);
  /* 103f15f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f15f4 jne 0x103f15fd */
  if (!C.zf) goto L_103f15fd;
  /* 103f15f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f15f8 jmp 0x103f168c */
  goto L_103f168c;
L_103f15fd:;
  /* 103f15fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1601 je 0x103f1628 */
  if (C.zf) goto L_103f1628;
  /* 103f1603 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f1606 mov ax, word ptr [0x104118e4] */
  AX = (r16((uint32_t)(0x104118e4)));
  /* 103f160c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 103f160f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f1612 mov dx, word ptr [0x10411900] */
  DX = (r16((uint32_t)(0x10411900)));
  /* 103f1619 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 103f161d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f1620 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 103f1624 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_103f1628:;
  /* 103f1628 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f162c je 0x103f1687 */
  if (C.zf) goto L_103f1687;
  /* 103f162e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103f1630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f1633 push edx */
  push32((uint32_t)(EDX));
  /* 103f1634 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 103f1639 mov eax, dword ptr [0x104118e4] */
  EAX = (r32((uint32_t)(0x104118e4)));
  /* 103f163e push eax */
  push32((uint32_t)(EAX));
  /* 103f163f call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1645u);
  /* 103f1645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1647 jne 0x103f164d */
  if (!C.zf) goto L_103f164d;
  /* 103f1649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f164b jmp 0x103f168c */
  goto L_103f168c;
L_103f164d:;
  /* 103f164d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103f164f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f1652 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1655 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1656 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 103f165b mov edx, dword ptr [0x10411900] */
  EDX = (r32((uint32_t)(0x10411900)));
  /* 103f1661 push edx */
  push32((uint32_t)(EDX));
  /* 103f1662 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1668u);
  /* 103f1668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f166a jne 0x103f1670 */
  if (!C.zf) goto L_103f1670;
  /* 103f166c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f166e jmp 0x103f168c */
  goto L_103f168c;
L_103f1670:;
  /* 103f1670 push 0xa */
  push32((uint32_t)(0xau));
  /* 103f1672 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f1675 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f167a push eax */
  push32((uint32_t)(EAX));
  /* 103f167b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f167e push ecx */
  push32((uint32_t)(ECX));
  /* 103f167f call 0x103e81f0 */
  push32(0x103f1684u); f_103e81f0();
  /* 103f1684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1687:;
  /* 103f1687 mov eax, 1 */
  EAX = (0x1u);
L_103f168c:;
  /* 103f168c mov esp, ebp */
  ESP = (EBP);
  /* 103f168e pop ebp */
  EBP = (pop32());
  /* 103f168f ret  */
  ESPCHK(0x103f1490u, _esp0);
  ESP += 4; return;
}

/* FUN_10011690 @ 0x103f1690 (130 bytes, 47 insns) */
void f_103f1690(void) {
  FTRACE(0x103f1690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1690 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1691 mov ebp, esp */
  EBP = (ESP);
  /* 103f1693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1696 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103f169d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103f16a4:;
  /* 103f16a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f16a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f16aa jg 0x103f170e */
  if ((!C.zf&&C.sf==C.of)) goto L_103f170e;
  /* 103f16ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f16b0 je 0x103f170e */
  if (C.zf) goto L_103f170e;
  /* 103f16b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f16b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f16b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f16b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f16bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f16bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f16c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f16c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f16c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 103f16c9 push eax */
  push32((uint32_t)(EAX));
  /* 103f16ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f16cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f16cf push edx */
  push32((uint32_t)(EDX));
  /* 103f16d0 call 0x103f3d80 */
  push32(0x103f16d5u); f_103f3d80();
  /* 103f16d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f16d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f16db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f16df jne 0x103f16f2 */
  if (!C.zf) goto L_103f16f2;
  /* 103f16e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f16e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f16e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 103f16eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f16ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f16f0 jmp 0x103f170c */
  goto L_103f170c;
L_103f16f2:;
  /* 103f16f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f16f6 jge 0x103f1703 */
  if ((C.sf==C.of)) goto L_103f1703;
  /* 103f16f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f16fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f16fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103f1701 jmp 0x103f170c */
  goto L_103f170c;
L_103f1703:;
  /* 103f1703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f1706 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1709 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103f170c:;
  /* 103f170c jmp 0x103f16a4 */
  goto L_103f16a4;
L_103f170e:;
  /* 103f170e mov esp, ebp */
  ESP = (EBP);
  /* 103f1710 pop ebp */
  EBP = (pop32());
  /* 103f1711 ret  */
  ESPCHK(0x103f1690u, _esp0);
  ESP += 4; return;
}

/* FUN_10011720 @ 0x103f1720 (186 bytes, 50 insns) */
void f_103f1720(void) {
  FTRACE(0x103f1720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1720 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1721 mov ebp, esp */
  EBP = (ESP);
  /* 103f1723 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1724 mov eax, dword ptr [0x104118f4] */
  EAX = (r32((uint32_t)(0x104118f4)));
  /* 103f1729 push eax */
  push32((uint32_t)(EAX));
  /* 103f172a call 0x103e84e0 */
  push32(0x103f172fu); f_103e84e0();
  /* 103f172f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1732 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1734 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1737 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103f173a mov dword ptr [0x104118f0], ecx */
  w32((uint32_t)(0x104118f0), (ECX));
  /* 103f1740 mov edx, dword ptr [0x104118f8] */
  EDX = (r32((uint32_t)(0x104118f8)));
  /* 103f1746 push edx */
  push32((uint32_t)(EDX));
  /* 103f1747 call 0x103e84e0 */
  push32(0x103f174cu); f_103e84e0();
  /* 103f174c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f174f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1751 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1754 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103f1757 mov dword ptr [0x104118e8], ecx */
  w32((uint32_t)(0x104118e8), (ECX));
  /* 103f175d mov dword ptr [0x104118e4], 0 */
  w32((uint32_t)(0x104118e4), (0x0u));
  /* 103f1767 cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f176e je 0x103f1779 */
  if (C.zf) goto L_103f1779;
  /* 103f1770 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103f1777 jmp 0x103f178b */
  goto L_103f178b;
L_103f1779:;
  /* 103f1779 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f177f push edx */
  push32((uint32_t)(EDX));
  /* 103f1780 call 0x103f21c0 */
  push32(0x103f1785u); f_103f21c0();
  /* 103f1785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1788 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f178b:;
  /* 103f178b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f178e mov dword ptr [0x104118ec], eax */
  w32((uint32_t)(0x104118ec), (EAX));
  /* 103f1793 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1795 push 0x103f17e0 */
  push32((uint32_t)(0x103f17e0u));
  /* 103f179a call dword ptr [0x104142e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e4))), 0x103f17a0u);
  /* 103f17a0 mov ecx, dword ptr [0x104118fc] */
  ECX = (r32((uint32_t)(0x104118fc)));
  /* 103f17a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 103f17ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f17ae je 0x103f17cc */
  if (C.zf) goto L_103f17cc;
  /* 103f17b0 mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f17b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 103f17bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f17be je 0x103f17cc */
  if (C.zf) goto L_103f17cc;
  /* 103f17c0 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f17c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 103f17c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f17ca jne 0x103f17d6 */
  if (!C.zf) goto L_103f17d6;
L_103f17cc:;
  /* 103f17cc mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
L_103f17d6:;
  /* 103f17d6 mov esp, ebp */
  ESP = (EBP);
  /* 103f17d8 pop ebp */
  EBP = (pop32());
  /* 103f17d9 ret  */
  ESPCHK(0x103f1720u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x103f17e0 (804 bytes, 220 insns) */
void f_103f17e0(void) {
  FTRACE(0x103f17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f17e1 mov ebp, esp */
  EBP = (ESP);
  /* 103f17e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f17e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f17e9 push eax */
  push32((uint32_t)(EAX));
  /* 103f17ea call 0x103f2140 */
  push32(0x103f17efu); f_103f2140();
  /* 103f17ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f17f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103f17f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f17f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f17fa push ecx */
  push32((uint32_t)(ECX));
  /* 103f17fb mov edx, dword ptr [0x104118e8] */
  EDX = (r32((uint32_t)(0x104118e8)));
  /* 103f1801 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1803 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1805 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 103f180b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1811 push edx */
  push32((uint32_t)(EDX));
  /* 103f1812 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1815 push eax */
  push32((uint32_t)(EAX));
  /* 103f1816 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f181cu);
  /* 103f181c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f181e jne 0x103f1834 */
  if (!C.zf) goto L_103f1834;
  /* 103f1820 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f182a mov eax, 1 */
  EAX = (0x1u);
  /* 103f182f jmp 0x103f1afe */
  goto L_103f1afe;
L_103f1834:;
  /* 103f1834 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f1837 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1838 mov edx, dword ptr [0x104118f8] */
  EDX = (r32((uint32_t)(0x104118f8)));
  /* 103f183e push edx */
  push32((uint32_t)(EDX));
  /* 103f183f call 0x103f3d80 */
  push32(0x103f1844u); f_103f3d80();
  /* 103f1844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1849 jne 0x103f196f */
  if (!C.zf) goto L_103f196f;
  /* 103f184f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f1851 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103f1854 push eax */
  push32((uint32_t)(EAX));
  /* 103f1855 mov ecx, dword ptr [0x104118f0] */
  ECX = (r32((uint32_t)(0x104118f0)));
  /* 103f185b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f185d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f185f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 103f1865 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f186b push ecx */
  push32((uint32_t)(ECX));
  /* 103f186c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f186f push edx */
  push32((uint32_t)(EDX));
  /* 103f1870 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1876u);
  /* 103f1876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1878 jne 0x103f188e */
  if (!C.zf) goto L_103f188e;
  /* 103f187a mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f1884 mov eax, 1 */
  EAX = (0x1u);
  /* 103f1889 jmp 0x103f1afe */
  goto L_103f1afe;
L_103f188e:;
  /* 103f188e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103f1891 push eax */
  push32((uint32_t)(EAX));
  /* 103f1892 mov ecx, dword ptr [0x104118f4] */
  ECX = (r32((uint32_t)(0x104118f4)));
  /* 103f1898 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1899 call 0x103f3d80 */
  push32(0x103f189eu); f_103f3d80();
  /* 103f189e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f18a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f18a3 jne 0x103f18d0 */
  if (!C.zf) goto L_103f18d0;
  /* 103f18a5 mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f18ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 103f18b1 mov dword ptr [0x104118fc], edx */
  w32((uint32_t)(0x104118fc), (EDX));
  /* 103f18b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f18ba mov dword ptr [0x10411900], eax */
  w32((uint32_t)(0x10411900), (EAX));
  /* 103f18bf mov ecx, dword ptr [0x10411900] */
  ECX = (r32((uint32_t)(0x10411900)));
  /* 103f18c5 mov dword ptr [0x104118e4], ecx */
  w32((uint32_t)(0x104118e4), (ECX));
  /* 103f18cb jmp 0x103f196f */
  goto L_103f196f;
L_103f18d0:;
  /* 103f18d0 mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f18d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103f18d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f18db jne 0x103f196f */
  if (!C.zf) goto L_103f196f;
  /* 103f18e1 cmp dword ptr [0x104118ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f18e8 je 0x103f193d */
  if (C.zf) goto L_103f193d;
  /* 103f18ea mov eax, dword ptr [0x104118ec] */
  EAX = (r32((uint32_t)(0x104118ec)));
  /* 103f18ef push eax */
  push32((uint32_t)(EAX));
  /* 103f18f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f18f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f18f4 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f18fa push edx */
  push32((uint32_t)(EDX));
  /* 103f18fb call 0x103f3e50 */
  push32(0x103f1900u); f_103f3e50();
  /* 103f1900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1905 jne 0x103f193d */
  if (!C.zf) goto L_103f193d;
  /* 103f1907 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f190c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 103f190e mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1913 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1916 mov dword ptr [0x10411900], ecx */
  w32((uint32_t)(0x10411900), (ECX));
  /* 103f191c mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1922 push edx */
  push32((uint32_t)(EDX));
  /* 103f1923 call 0x103e84e0 */
  push32(0x103f1928u); f_103e84e0();
  /* 103f1928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f192b cmp eax, dword ptr [0x104118ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104118ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1931 jne 0x103f193b */
  if (!C.zf) goto L_103f193b;
  /* 103f1933 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1936 mov dword ptr [0x104118e4], eax */
  w32((uint32_t)(0x104118e4), (EAX));
L_103f193b:;
  /* 103f193b jmp 0x103f196f */
  goto L_103f196f;
L_103f193d:;
  /* 103f193d mov ecx, dword ptr [0x104118fc] */
  ECX = (r32((uint32_t)(0x104118fc)));
  /* 103f1943 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103f1946 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f1948 jne 0x103f196f */
  if (!C.zf) goto L_103f196f;
  /* 103f194a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f194d push edx */
  push32((uint32_t)(EDX));
  /* 103f194e call 0x103f1e80 */
  push32(0x103f1953u); f_103f1e80();
  /* 103f1953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1958 je 0x103f196f */
  if (C.zf) goto L_103f196f;
  /* 103f195a mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f195f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 103f1961 mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1966 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1969 mov dword ptr [0x10411900], ecx */
  w32((uint32_t)(0x10411900), (ECX));
L_103f196f:;
  /* 103f196f mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f1975 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 103f197b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1981 je 0x103f1af1 */
  if (C.zf) goto L_103f1af1;
  /* 103f1987 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f1989 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103f198c push eax */
  push32((uint32_t)(EAX));
  /* 103f198d mov ecx, dword ptr [0x104118f0] */
  ECX = (r32((uint32_t)(0x104118f0)));
  /* 103f1993 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1995 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1997 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 103f199d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f19a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f19a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f19a7 push edx */
  push32((uint32_t)(EDX));
  /* 103f19a8 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f19aeu);
  /* 103f19ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f19b0 jne 0x103f19c6 */
  if (!C.zf) goto L_103f19c6;
  /* 103f19b2 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f19bc mov eax, 1 */
  EAX = (0x1u);
  /* 103f19c1 jmp 0x103f1afe */
  goto L_103f1afe;
L_103f19c6:;
  /* 103f19c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103f19c9 push eax */
  push32((uint32_t)(EAX));
  /* 103f19ca mov ecx, dword ptr [0x104118f4] */
  ECX = (r32((uint32_t)(0x104118f4)));
  /* 103f19d0 push ecx */
  push32((uint32_t)(ECX));
  /* 103f19d1 call 0x103f3d80 */
  push32(0x103f19d6u); f_103f3d80();
  /* 103f19d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f19d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f19db jne 0x103f1a90 */
  if (!C.zf) goto L_103f1a90;
  /* 103f19e1 mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f19e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103f19ea mov dword ptr [0x104118fc], edx */
  w32((uint32_t)(0x104118fc), (EDX));
  /* 103f19f0 cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f19f7 je 0x103f1a1a */
  if (C.zf) goto L_103f1a1a;
  /* 103f19f9 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f19fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103f1a01 mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1a06 cmp dword ptr [0x104118e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a0d jne 0x103f1a18 */
  if (!C.zf) goto L_103f1a18;
  /* 103f1a0f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1a12 mov dword ptr [0x104118e4], ecx */
  w32((uint32_t)(0x104118e4), (ECX));
L_103f1a18:;
  /* 103f1a18 jmp 0x103f1a8e */
  goto L_103f1a8e;
L_103f1a1a:;
  /* 103f1a1a cmp dword ptr [0x104118ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a21 je 0x103f1a6f */
  if (C.zf) goto L_103f1a6f;
  /* 103f1a23 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1a29 push edx */
  push32((uint32_t)(EDX));
  /* 103f1a2a call 0x103e84e0 */
  push32(0x103f1a2fu); f_103e84e0();
  /* 103f1a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1a32 cmp eax, dword ptr [0x104118ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104118ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a38 jne 0x103f1a6f */
  if (!C.zf) goto L_103f1a6f;
  /* 103f1a3a push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1a3c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1a3f push eax */
  push32((uint32_t)(EAX));
  /* 103f1a40 call 0x103f1ed0 */
  push32(0x103f1a45u); f_103f1ed0();
  /* 103f1a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1a4a je 0x103f1a6d */
  if (C.zf) goto L_103f1a6d;
  /* 103f1a4c mov ecx, dword ptr [0x104118fc] */
  ECX = (r32((uint32_t)(0x104118fc)));
  /* 103f1a52 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103f1a55 mov dword ptr [0x104118fc], ecx */
  w32((uint32_t)(0x104118fc), (ECX));
  /* 103f1a5b cmp dword ptr [0x104118e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a62 jne 0x103f1a6d */
  if (!C.zf) goto L_103f1a6d;
  /* 103f1a64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1a67 mov dword ptr [0x104118e4], edx */
  w32((uint32_t)(0x104118e4), (EDX));
L_103f1a6d:;
  /* 103f1a6d jmp 0x103f1a8e */
  goto L_103f1a8e;
L_103f1a6f:;
  /* 103f1a6f mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1a74 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103f1a77 mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1a7c cmp dword ptr [0x104118e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a83 jne 0x103f1a8e */
  if (!C.zf) goto L_103f1a8e;
  /* 103f1a85 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1a88 mov dword ptr [0x104118e4], ecx */
  w32((uint32_t)(0x104118e4), (ECX));
L_103f1a8e:;
  /* 103f1a8e jmp 0x103f1af1 */
  goto L_103f1af1;
L_103f1a90:;
  /* 103f1a90 cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1a97 jne 0x103f1af1 */
  if (!C.zf) goto L_103f1af1;
  /* 103f1a99 cmp dword ptr [0x104118ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1aa0 je 0x103f1af1 */
  if (C.zf) goto L_103f1af1;
  /* 103f1aa2 mov edx, dword ptr [0x104118ec] */
  EDX = (r32((uint32_t)(0x104118ec)));
  /* 103f1aa8 push edx */
  push32((uint32_t)(EDX));
  /* 103f1aa9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103f1aac push eax */
  push32((uint32_t)(EAX));
  /* 103f1aad mov ecx, dword ptr [0x104118f4] */
  ECX = (r32((uint32_t)(0x104118f4)));
  /* 103f1ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1ab4 call 0x103f3e50 */
  push32(0x103f1ab9u); f_103f3e50();
  /* 103f1ab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1abe jne 0x103f1af1 */
  if (!C.zf) goto L_103f1af1;
  /* 103f1ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f1ac2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1ac5 push edx */
  push32((uint32_t)(EDX));
  /* 103f1ac6 call 0x103f1ed0 */
  push32(0x103f1acbu); f_103f1ed0();
  /* 103f1acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1ad0 je 0x103f1af1 */
  if (C.zf) goto L_103f1af1;
  /* 103f1ad2 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1ad7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103f1ada mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1adf cmp dword ptr [0x104118e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1ae6 jne 0x103f1af1 */
  if (!C.zf) goto L_103f1af1;
  /* 103f1ae8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1aeb mov dword ptr [0x104118e4], ecx */
  w32((uint32_t)(0x104118e4), (ECX));
L_103f1af1:;
  /* 103f1af1 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1af6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103f1af9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1afb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1afd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103f1afe:;
  /* 103f1afe mov esp, ebp */
  ESP = (EBP);
  /* 103f1b00 pop ebp */
  EBP = (pop32());
  /* 103f1b01 ret 4 */
  ESPCHK(0x103f17e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011b10 @ 0x103f1b10 (116 bytes, 33 insns) */
void f_103f1b10(void) {
  FTRACE(0x103f1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1b10 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1b11 mov ebp, esp */
  EBP = (ESP);
  /* 103f1b13 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1b14 mov eax, dword ptr [0x104118f4] */
  EAX = (r32((uint32_t)(0x104118f4)));
  /* 103f1b19 push eax */
  push32((uint32_t)(EAX));
  /* 103f1b1a call 0x103e84e0 */
  push32(0x103f1b1fu); f_103e84e0();
  /* 103f1b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1b22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1b24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1b27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103f1b2a mov dword ptr [0x104118f0], ecx */
  w32((uint32_t)(0x104118f0), (ECX));
  /* 103f1b30 cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1b37 je 0x103f1b42 */
  if (C.zf) goto L_103f1b42;
  /* 103f1b39 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103f1b40 jmp 0x103f1b54 */
  goto L_103f1b54;
L_103f1b42:;
  /* 103f1b42 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1b48 push edx */
  push32((uint32_t)(EDX));
  /* 103f1b49 call 0x103f21c0 */
  push32(0x103f1b4eu); f_103f21c0();
  /* 103f1b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1b51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f1b54:;
  /* 103f1b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f1b57 mov dword ptr [0x104118ec], eax */
  w32((uint32_t)(0x104118ec), (EAX));
  /* 103f1b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1b5e push 0x103f1b90 */
  push32((uint32_t)(0x103f1b90u));
  /* 103f1b63 call dword ptr [0x104142e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e4))), 0x103f1b69u);
  /* 103f1b69 mov ecx, dword ptr [0x104118fc] */
  ECX = (r32((uint32_t)(0x104118fc)));
  /* 103f1b6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103f1b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f1b74 jne 0x103f1b80 */
  if (!C.zf) goto L_103f1b80;
  /* 103f1b76 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
L_103f1b80:;
  /* 103f1b80 mov esp, ebp */
  ESP = (EBP);
  /* 103f1b82 pop ebp */
  EBP = (pop32());
  /* 103f1b83 ret  */
  ESPCHK(0x103f1b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x103f1b90 (287 bytes, 86 insns) */
void f_103f1b90(void) {
  FTRACE(0x103f1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1b91 mov ebp, esp */
  EBP = (ESP);
  /* 103f1b93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1b99 push eax */
  push32((uint32_t)(EAX));
  /* 103f1b9a call 0x103f2140 */
  push32(0x103f1b9fu); f_103f2140();
  /* 103f1b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1ba2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103f1ba5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f1ba7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f1baa push ecx */
  push32((uint32_t)(ECX));
  /* 103f1bab mov edx, dword ptr [0x104118f0] */
  EDX = (r32((uint32_t)(0x104118f0)));
  /* 103f1bb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1bb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1bb5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 103f1bbb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1bc1 push edx */
  push32((uint32_t)(EDX));
  /* 103f1bc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1bc5 push eax */
  push32((uint32_t)(EAX));
  /* 103f1bc6 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1bccu);
  /* 103f1bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1bce jne 0x103f1be4 */
  if (!C.zf) goto L_103f1be4;
  /* 103f1bd0 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f1bda mov eax, 1 */
  EAX = (0x1u);
  /* 103f1bdf jmp 0x103f1ca9 */
  goto L_103f1ca9;
L_103f1be4:;
  /* 103f1be4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f1be7 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1be8 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1bee push edx */
  push32((uint32_t)(EDX));
  /* 103f1bef call 0x103f3d80 */
  push32(0x103f1bf4u); f_103f3d80();
  /* 103f1bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1bf9 jne 0x103f1c39 */
  if (!C.zf) goto L_103f1c39;
  /* 103f1bfb cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1c02 jne 0x103f1c16 */
  if (!C.zf) goto L_103f1c16;
  /* 103f1c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1c06 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1c09 push eax */
  push32((uint32_t)(EAX));
  /* 103f1c0a call 0x103f1ed0 */
  push32(0x103f1c0fu); f_103f1ed0();
  /* 103f1c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1c14 je 0x103f1c37 */
  if (C.zf) goto L_103f1c37;
L_103f1c16:;
  /* 103f1c16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1c19 mov dword ptr [0x10411900], ecx */
  w32((uint32_t)(0x10411900), (ECX));
  /* 103f1c1f mov edx, dword ptr [0x10411900] */
  EDX = (r32((uint32_t)(0x10411900)));
  /* 103f1c25 mov dword ptr [0x104118e4], edx */
  w32((uint32_t)(0x104118e4), (EDX));
  /* 103f1c2b mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1c30 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103f1c32 mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
L_103f1c37:;
  /* 103f1c37 jmp 0x103f1c9c */
  goto L_103f1c9c;
L_103f1c39:;
  /* 103f1c39 cmp dword ptr [0x104118f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1c40 jne 0x103f1c9c */
  if (!C.zf) goto L_103f1c9c;
  /* 103f1c42 cmp dword ptr [0x104118ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104118ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1c49 je 0x103f1c9c */
  if (C.zf) goto L_103f1c9c;
  /* 103f1c4b mov ecx, dword ptr [0x104118ec] */
  ECX = (r32((uint32_t)(0x104118ec)));
  /* 103f1c51 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1c52 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 103f1c55 push edx */
  push32((uint32_t)(EDX));
  /* 103f1c56 mov eax, dword ptr [0x104118f4] */
  EAX = (r32((uint32_t)(0x104118f4)));
  /* 103f1c5b push eax */
  push32((uint32_t)(EAX));
  /* 103f1c5c call 0x103f3e50 */
  push32(0x103f1c61u); f_103f3e50();
  /* 103f1c61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1c66 jne 0x103f1c9c */
  if (!C.zf) goto L_103f1c9c;
  /* 103f1c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f1c6a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1c6d push ecx */
  push32((uint32_t)(ECX));
  /* 103f1c6e call 0x103f1ed0 */
  push32(0x103f1c73u); f_103f1ed0();
  /* 103f1c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1c78 je 0x103f1c9c */
  if (C.zf) goto L_103f1c9c;
  /* 103f1c7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1c7d mov dword ptr [0x10411900], edx */
  w32((uint32_t)(0x10411900), (EDX));
  /* 103f1c83 mov eax, dword ptr [0x10411900] */
  EAX = (r32((uint32_t)(0x10411900)));
  /* 103f1c88 mov dword ptr [0x104118e4], eax */
  w32((uint32_t)(0x104118e4), (EAX));
  /* 103f1c8d mov ecx, dword ptr [0x104118fc] */
  ECX = (r32((uint32_t)(0x104118fc)));
  /* 103f1c93 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103f1c96 mov dword ptr [0x104118fc], ecx */
  w32((uint32_t)(0x104118fc), (ECX));
L_103f1c9c:;
  /* 103f1c9c mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1ca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103f1ca4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1ca6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1ca8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103f1ca9:;
  /* 103f1ca9 mov esp, ebp */
  ESP = (EBP);
  /* 103f1cab pop ebp */
  EBP = (pop32());
  /* 103f1cac ret 4 */
  ESPCHK(0x103f1b90u, _esp0);
  ESP += 8; return;
}

/* FUN_10011cb0 @ 0x103f1cb0 (69 bytes, 20 insns) */
void f_103f1cb0(void) {
  FTRACE(0x103f1cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1cb1 mov ebp, esp */
  EBP = (ESP);
  /* 103f1cb3 mov eax, dword ptr [0x104118f8] */
  EAX = (r32((uint32_t)(0x104118f8)));
  /* 103f1cb8 push eax */
  push32((uint32_t)(EAX));
  /* 103f1cb9 call 0x103e84e0 */
  push32(0x103f1cbeu); f_103e84e0();
  /* 103f1cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1cc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1cc3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1cc6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103f1cc9 mov dword ptr [0x104118e8], ecx */
  w32((uint32_t)(0x104118e8), (ECX));
  /* 103f1ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1cd1 push 0x103f1d00 */
  push32((uint32_t)(0x103f1d00u));
  /* 103f1cd6 call dword ptr [0x104142e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e4))), 0x103f1cdcu);
  /* 103f1cdc mov edx, dword ptr [0x104118fc] */
  EDX = (r32((uint32_t)(0x104118fc)));
  /* 103f1ce2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103f1ce5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f1ce7 jne 0x103f1cf3 */
  if (!C.zf) goto L_103f1cf3;
  /* 103f1ce9 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
L_103f1cf3:;
  /* 103f1cf3 pop ebp */
  EBP = (pop32());
  /* 103f1cf4 ret  */
  ESPCHK(0x103f1cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x103f1d00 (172 bytes, 54 insns) */
void f_103f1d00(void) {
  FTRACE(0x103f1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1d01 mov ebp, esp */
  EBP = (ESP);
  /* 103f1d03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1d09 push eax */
  push32((uint32_t)(EAX));
  /* 103f1d0a call 0x103f2140 */
  push32(0x103f1d0fu); f_103f2140();
  /* 103f1d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1d12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103f1d15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f1d17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f1d1a push ecx */
  push32((uint32_t)(ECX));
  /* 103f1d1b mov edx, dword ptr [0x104118e8] */
  EDX = (r32((uint32_t)(0x104118e8)));
  /* 103f1d21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1d23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1d25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 103f1d2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1d31 push edx */
  push32((uint32_t)(EDX));
  /* 103f1d32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1d35 push eax */
  push32((uint32_t)(EAX));
  /* 103f1d36 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1d3cu);
  /* 103f1d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1d3e jne 0x103f1d51 */
  if (!C.zf) goto L_103f1d51;
  /* 103f1d40 mov dword ptr [0x104118fc], 0 */
  w32((uint32_t)(0x104118fc), (0x0u));
  /* 103f1d4a mov eax, 1 */
  EAX = (0x1u);
  /* 103f1d4f jmp 0x103f1da6 */
  goto L_103f1da6;
L_103f1d51:;
  /* 103f1d51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103f1d54 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1d55 mov edx, dword ptr [0x104118f8] */
  EDX = (r32((uint32_t)(0x104118f8)));
  /* 103f1d5b push edx */
  push32((uint32_t)(EDX));
  /* 103f1d5c call 0x103f3d80 */
  push32(0x103f1d61u); f_103f3d80();
  /* 103f1d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1d66 jne 0x103f1d99 */
  if (!C.zf) goto L_103f1d99;
  /* 103f1d68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1d6b push eax */
  push32((uint32_t)(EAX));
  /* 103f1d6c call 0x103f1e80 */
  push32(0x103f1d71u); f_103f1e80();
  /* 103f1d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1d76 je 0x103f1d99 */
  if (C.zf) goto L_103f1d99;
  /* 103f1d78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103f1d7b mov dword ptr [0x10411900], ecx */
  w32((uint32_t)(0x10411900), (ECX));
  /* 103f1d81 mov edx, dword ptr [0x10411900] */
  EDX = (r32((uint32_t)(0x10411900)));
  /* 103f1d87 mov dword ptr [0x104118e4], edx */
  w32((uint32_t)(0x104118e4), (EDX));
  /* 103f1d8d mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1d92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103f1d94 mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
L_103f1d99:;
  /* 103f1d99 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1d9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103f1da1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f1da3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1da5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103f1da6:;
  /* 103f1da6 mov esp, ebp */
  ESP = (EBP);
  /* 103f1da8 pop ebp */
  EBP = (pop32());
  /* 103f1da9 ret 4 */
  ESPCHK(0x103f1d00u, _esp0);
  ESP += 8; return;
}

/* FUN_10011db0 @ 0x103f1db0 (43 bytes, 11 insns) */
void f_103f1db0(void) {
  FTRACE(0x103f1db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1db0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1db1 mov ebp, esp */
  EBP = (ESP);
  /* 103f1db3 mov eax, dword ptr [0x104118fc] */
  EAX = (r32((uint32_t)(0x104118fc)));
  /* 103f1db8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 103f1dbd mov dword ptr [0x104118fc], eax */
  w32((uint32_t)(0x104118fc), (EAX));
  /* 103f1dc2 call dword ptr [0x104142e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e0))), 0x103f1dc8u);
  /* 103f1dc8 mov dword ptr [0x10411900], eax */
  w32((uint32_t)(0x10411900), (EAX));
  /* 103f1dcd mov ecx, dword ptr [0x10411900] */
  ECX = (r32((uint32_t)(0x10411900)));
  /* 103f1dd3 mov dword ptr [0x104118e4], ecx */
  w32((uint32_t)(0x104118e4), (ECX));
  /* 103f1dd9 pop ebp */
  EBP = (pop32());
  /* 103f1dda ret  */
  ESPCHK(0x103f1db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011de0 @ 0x103f1de0 (155 bytes, 57 insns) */
void f_103f1de0(void) {
  FTRACE(0x103f1de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1de0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1de1 mov ebp, esp */
  EBP = (ESP);
  /* 103f1de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1de6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1dea je 0x103f1e0b */
  if (C.zf) goto L_103f1e0b;
  /* 103f1dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1def movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f1df2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f1df4 je 0x103f1e0b */
  if (C.zf) goto L_103f1e0b;
  /* 103f1df6 push 0x1040da1c */
  push32((uint32_t)(0x1040da1cu));
  /* 103f1dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1dfe push edx */
  push32((uint32_t)(EDX));
  /* 103f1dff call 0x103f1340 */
  push32(0x103f1e04u); f_103f1340();
  /* 103f1e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1e09 jne 0x103f1e33 */
  if (!C.zf) goto L_103f1e33;
L_103f1e0b:;
  /* 103f1e0b push 8 */
  push32((uint32_t)(0x8u));
  /* 103f1e0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103f1e10 push eax */
  push32((uint32_t)(EAX));
  /* 103f1e11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 103f1e16 mov ecx, dword ptr [0x10411900] */
  ECX = (r32((uint32_t)(0x10411900)));
  /* 103f1e1c push ecx */
  push32((uint32_t)(ECX));
  /* 103f1e1d call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1e23u);
  /* 103f1e23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1e25 jne 0x103f1e2b */
  if (!C.zf) goto L_103f1e2b;
  /* 103f1e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1e29 jmp 0x103f1e77 */
  goto L_103f1e77;
L_103f1e2b:;
  /* 103f1e2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 103f1e2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103f1e31 jmp 0x103f1e6b */
  goto L_103f1e6b;
L_103f1e33:;
  /* 103f1e33 push 0x1040da18 */
  push32((uint32_t)(0x1040da18u));
  /* 103f1e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1e3b push eax */
  push32((uint32_t)(EAX));
  /* 103f1e3c call 0x103f1340 */
  push32(0x103f1e41u); f_103f1340();
  /* 103f1e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1e46 jne 0x103f1e6b */
  if (!C.zf) goto L_103f1e6b;
  /* 103f1e48 push 8 */
  push32((uint32_t)(0x8u));
  /* 103f1e4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103f1e4d push ecx */
  push32((uint32_t)(ECX));
  /* 103f1e4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f1e50 mov edx, dword ptr [0x10411900] */
  EDX = (r32((uint32_t)(0x10411900)));
  /* 103f1e56 push edx */
  push32((uint32_t)(EDX));
  /* 103f1e57 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1e5du);
  /* 103f1e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1e5f jne 0x103f1e65 */
  if (!C.zf) goto L_103f1e65;
  /* 103f1e61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1e63 jmp 0x103f1e77 */
  goto L_103f1e77;
L_103f1e65:;
  /* 103f1e65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103f1e68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103f1e6b:;
  /* 103f1e6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1e6e push ecx */
  push32((uint32_t)(ECX));
  /* 103f1e6f call 0x103f3f60 */
  push32(0x103f1e74u); f_103f3f60();
  /* 103f1e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f1e77:;
  /* 103f1e77 mov esp, ebp */
  ESP = (EBP);
  /* 103f1e79 pop ebp */
  EBP = (pop32());
  /* 103f1e7a ret  */
  ESPCHK(0x103f1de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x103f1e80 (79 bytes, 26 insns) */
void f_103f1e80(void) {
  FTRACE(0x103f1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1e81 mov ebp, esp */
  EBP = (ESP);
  /* 103f1e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1e86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 103f1e8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 103f1e8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f1e95 jmp 0x103f1ea0 */
  goto L_103f1ea0;
L_103f1e97:;
  /* 103f1e97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f1e9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1e9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103f1ea0:;
  /* 103f1ea0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1ea4 jae 0x103f1ec6 */
  if (!C.cf) goto L_103f1ec6;
  /* 103f1ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f1ea9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f1eaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f1eb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f1eb4 mov cx, word ptr [eax*2 + 0x104109c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x104109c4)));
  /* 103f1ebc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1ebe jne 0x103f1ec4 */
  if (!C.zf) goto L_103f1ec4;
  /* 103f1ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1ec2 jmp 0x103f1ecb */
  goto L_103f1ecb;
L_103f1ec4:;
  /* 103f1ec4 jmp 0x103f1e97 */
  goto L_103f1e97;
L_103f1ec6:;
  /* 103f1ec6 mov eax, 1 */
  EAX = (0x1u);
L_103f1ecb:;
  /* 103f1ecb mov esp, ebp */
  ESP = (EBP);
  /* 103f1ecd pop ebp */
  EBP = (pop32());
  /* 103f1ece ret  */
  ESPCHK(0x103f1e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x103f1ed0 (135 bytes, 48 insns) */
void f_103f1ed0(void) {
  FTRACE(0x103f1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1ed1 mov ebp, esp */
  EBP = (ESP);
  /* 103f1ed3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1ed6 push esi */
  push32((uint32_t)(ESI));
  /* 103f1ed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1eda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f1edf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f1ee4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f1ee9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 103f1eec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f1ef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f1ef4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103f1ef6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 103f1ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 103f1efa push 1 */
  push32((uint32_t)(0x1u));
  /* 103f1efc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f1eff push edx */
  push32((uint32_t)(EDX));
  /* 103f1f00 call dword ptr [0x10411904] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411904))), 0x103f1f06u);
  /* 103f1f06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1f08 jne 0x103f1f0e */
  if (!C.zf) goto L_103f1f0e;
  /* 103f1f0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1f0c jmp 0x103f1f52 */
  goto L_103f1f52;
L_103f1f0e:;
  /* 103f1f0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 103f1f11 push eax */
  push32((uint32_t)(EAX));
  /* 103f1f12 call 0x103f2140 */
  push32(0x103f1f17u); f_103f2140();
  /* 103f1f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1f1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1f1d je 0x103f1f4d */
  if (C.zf) goto L_103f1f4d;
  /* 103f1f1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1f23 je 0x103f1f4d */
  if (C.zf) goto L_103f1f4d;
  /* 103f1f25 mov ecx, dword ptr [0x104118f4] */
  ECX = (r32((uint32_t)(0x104118f4)));
  /* 103f1f2b push ecx */
  push32((uint32_t)(ECX));
  /* 103f1f2c call 0x103f21c0 */
  push32(0x103f1f31u); f_103f21c0();
  /* 103f1f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1f34 mov esi, eax */
  ESI = (EAX);
  /* 103f1f36 mov edx, dword ptr [0x104118f4] */
  EDX = (r32((uint32_t)(0x104118f4)));
  /* 103f1f3c push edx */
  push32((uint32_t)(EDX));
  /* 103f1f3d call 0x103e84e0 */
  push32(0x103f1f42u); f_103e84e0();
  /* 103f1f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1f45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1f47 jne 0x103f1f4d */
  if (!C.zf) goto L_103f1f4d;
  /* 103f1f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f1f4b jmp 0x103f1f52 */
  goto L_103f1f52;
L_103f1f4d:;
  /* 103f1f4d mov eax, 1 */
  EAX = (0x1u);
L_103f1f52:;
  /* 103f1f52 pop esi */
  ESI = (pop32());
  /* 103f1f53 mov esp, ebp */
  ESP = (EBP);
  /* 103f1f55 pop ebp */
  EBP = (pop32());
  /* 103f1f56 ret  */
  ESPCHK(0x103f1ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x103f1f60 (77 bytes, 18 insns) */
void f_103f1f60(void) {
  FTRACE(0x103f1f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1f60 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1f61 mov ebp, esp */
  EBP = (ESP);
  /* 103f1f63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1f69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 103f1f73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 103f1f79 push eax */
  push32((uint32_t)(EAX));
  /* 103f1f7a call dword ptr [0x104142dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142dc))), 0x103f1f80u);
  /* 103f1f80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f1f82 je 0x103f1f99 */
  if (C.zf) goto L_103f1f99;
  /* 103f1f84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1f8b jne 0x103f1f99 */
  if (!C.zf) goto L_103f1f99;
  /* 103f1f8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 103f1f97 jmp 0x103f1fa3 */
  goto L_103f1fa3;
L_103f1f99:;
  /* 103f1f99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_103f1fa3:;
  /* 103f1fa3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103f1fa9 mov esp, ebp */
  ESP = (EBP);
  /* 103f1fab pop ebp */
  EBP = (pop32());
  /* 103f1fac ret  */
  ESPCHK(0x103f1f60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x103f1fb0 (388 bytes, 118 insns) */
void f_103f1fb0(void) {
  FTRACE(0x103f1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f1fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f1fb1 mov ebp, esp */
  EBP = (ESP);
  /* 103f1fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1fb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f1fbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 103f1fc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103f1fcb:;
  /* 103f1fcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f1fce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1fd1 jg 0x103f2118 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f2118;
  /* 103f1fd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f1fda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f1fdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f1fde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f1fe0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f1fe2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f1fe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f1fe8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f1feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f1fee cmp edx, dword ptr [ecx + 0x10410520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10410520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f1ff4 jne 0x103f20ee */
  if (!C.zf) goto L_103f20ee;
  /* 103f1ffa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f1ffd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f2000 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2004 ja 0x103f2027 */
  if ((!C.cf&&!C.zf)) goto L_103f2027;
  /* 103f2006 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f200a je 0x103f2099 */
  if (C.zf) goto L_103f2099;
  /* 103f2010 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2014 je 0x103f2044 */
  if (C.zf) goto L_103f2044;
  /* 103f2016 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f201a je 0x103f2066 */
  if (C.zf) goto L_103f2066;
  /* 103f201c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2020 je 0x103f2088 */
  if (C.zf) goto L_103f2088;
  /* 103f2022 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2027:;
  /* 103f2027 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f202e je 0x103f2055 */
  if (C.zf) goto L_103f2055;
  /* 103f2030 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2037 je 0x103f2077 */
  if (C.zf) goto L_103f2077;
  /* 103f2039 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2040 je 0x103f20aa */
  if (C.zf) goto L_103f20aa;
  /* 103f2042 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2044:;
  /* 103f2044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2047 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f204a add ecx, 0x10410524 */
  { uint32_t _a=(ECX),_b=(0x10410524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2050 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f2053 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2055:;
  /* 103f2055 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2058 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f205b mov eax, dword ptr [edx + 0x1041052c] */
  EAX = (r32((uint32_t)(EDX + 0x1041052c)));
  /* 103f2061 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f2064 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2066:;
  /* 103f2066 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2069 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f206c add ecx, 0x10410530 */
  { uint32_t _a=(ECX),_b=(0x10410530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2072 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f2075 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2077:;
  /* 103f2077 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f207a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f207d mov eax, dword ptr [edx + 0x10410534] */
  EAX = (r32((uint32_t)(EDX + 0x10410534)));
  /* 103f2083 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f2086 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2088:;
  /* 103f2088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f208b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f208e add ecx, 0x10410538 */
  { uint32_t _a=(ECX),_b=(0x10410538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2094 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f2097 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f2099:;
  /* 103f2099 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f209c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f209f add edx, 0x1041053c */
  { uint32_t _a=(EDX),_b=(0x1041053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f20a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f20a8 jmp 0x103f20b8 */
  goto L_103f20b8;
L_103f20aa:;
  /* 103f20aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f20ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f20b0 add eax, 0x10410544 */
  { uint32_t _a=(EAX),_b=(0x10410544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f20b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103f20b8:;
  /* 103f20b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f20bc je 0x103f20c4 */
  if (C.zf) goto L_103f20c4;
  /* 103f20be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f20c2 jge 0x103f20c6 */
  if ((C.sf==C.of)) goto L_103f20c6;
L_103f20c4:;
  /* 103f20c4 jmp 0x103f2118 */
  goto L_103f2118;
L_103f20c6:;
  /* 103f20c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f20c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f20cc push ecx */
  push32((uint32_t)(ECX));
  /* 103f20cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f20d0 push edx */
  push32((uint32_t)(EDX));
  /* 103f20d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f20d4 push eax */
  push32((uint32_t)(EAX));
  /* 103f20d5 call 0x103e8ed0 */
  push32(0x103f20dau); f_103e8ed0();
  /* 103f20da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f20dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f20e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f20e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 103f20e7 mov eax, 1 */
  EAX = (0x1u);
  /* 103f20ec jmp 0x103f212e */
  goto L_103f212e;
L_103f20ee:;
  /* 103f20ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f20f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f20f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f20f7 cmp eax, dword ptr [edx + 0x10410520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10410520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f20fd jae 0x103f210a */
  if (!C.cf) goto L_103f210a;
  /* 103f20ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2102 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2105 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f2108 jmp 0x103f2113 */
  goto L_103f2113;
L_103f210a:;
  /* 103f210a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f210d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2110 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f2113:;
  /* 103f2113 jmp 0x103f1fcb */
  goto L_103f1fcb;
L_103f2118:;
  /* 103f2118 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f211b push eax */
  push32((uint32_t)(EAX));
  /* 103f211c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f211f push ecx */
  push32((uint32_t)(ECX));
  /* 103f2120 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2123 push edx */
  push32((uint32_t)(EDX));
  /* 103f2124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2127 push eax */
  push32((uint32_t)(EAX));
  /* 103f2128 call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f212eu);
L_103f212e:;
  /* 103f212e mov esp, ebp */
  ESP = (EBP);
  /* 103f2130 pop ebp */
  EBP = (pop32());
  /* 103f2131 ret 0x10 */
  ESPCHK(0x103f1fb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012140 @ 0x103f2140 (118 bytes, 42 insns) */
void f_103f2140(void) {
  FTRACE(0x103f2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2140 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2141 mov ebp, esp */
  EBP = (ESP);
  /* 103f2143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103f214d:;
  /* 103f214d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2150 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f2152 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 103f2155 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f2159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f215c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f215f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f2162 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f2164 je 0x103f21af */
  if (C.zf) goto L_103f21af;
  /* 103f2166 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f216a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f216d jl 0x103f2182 */
  if ((C.sf!=C.of)) goto L_103f2182;
  /* 103f216f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f2173 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2176 jg 0x103f2182 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f2182;
  /* 103f2178 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103f217b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f217d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 103f2180 jmp 0x103f219c */
  goto L_103f219c;
L_103f2182:;
  /* 103f2182 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f2186 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2189 jl 0x103f219c */
  if ((C.sf!=C.of)) goto L_103f219c;
  /* 103f218b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f218f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2192 jg 0x103f219c */
  if ((!C.zf&&C.sf==C.of)) goto L_103f219c;
  /* 103f2194 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103f2197 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f2199 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_103f219c:;
  /* 103f219c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f219f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103f21a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f21a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103f21aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f21ad jmp 0x103f214d */
  goto L_103f214d;
L_103f21af:;
  /* 103f21af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f21b2 mov esp, ebp */
  ESP = (EBP);
  /* 103f21b4 pop ebp */
  EBP = (pop32());
  /* 103f21b5 ret  */
  ESPCHK(0x103f2140u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x103f21c0 (101 bytes, 36 insns) */
void f_103f21c0(void) {
  FTRACE(0x103f21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f21c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f21c1 mov ebp, esp */
  EBP = (ESP);
  /* 103f21c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f21c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f21cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f21d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f21d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 103f21d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f21d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f21db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103f21de:;
  /* 103f21de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103f21e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f21e5 jl 0x103f21f0 */
  if ((C.sf!=C.of)) goto L_103f21f0;
  /* 103f21e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103f21eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f21ee jle 0x103f2202 */
  if ((C.zf||C.sf!=C.of)) goto L_103f2202;
L_103f21f0:;
  /* 103f21f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103f21f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f21f7 jl 0x103f221e */
  if ((C.sf!=C.of)) goto L_103f221e;
  /* 103f21f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103f21fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2200 jg 0x103f221e */
  if ((!C.zf&&C.sf==C.of)) goto L_103f221e;
L_103f2202:;
  /* 103f2202 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2208 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f220b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f220e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f2210 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 103f2213 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2216 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2219 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103f221c jmp 0x103f21de */
  goto L_103f21de;
L_103f221e:;
  /* 103f221e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2221 mov esp, ebp */
  ESP = (EBP);
  /* 103f2223 pop ebp */
  EBP = (pop32());
  /* 103f2224 ret  */
  ESPCHK(0x103f21c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x103f2230 (122 bytes, 39 insns) */
void f_103f2230(void) {
  FTRACE(0x103f2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2230 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2231 mov ebp, esp */
  EBP = (ESP);
  /* 103f2233 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2237 cmp eax, dword ptr [0x1041319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1041319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f223d jae 0x103f2261 */
  if (!C.cf) goto L_103f2261;
  /* 103f223f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2242 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103f2245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2248 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103f224b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f224e mov eax, dword ptr [ecx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103f2255 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103f225a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103f225d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f225f jne 0x103f227c */
  if (!C.zf) goto L_103f227c;
L_103f2261:;
  /* 103f2261 call 0x103ed580 */
  push32(0x103f2266u); f_103ed580();
  /* 103f2266 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103f226c call 0x103ed590 */
  push32(0x103f2271u); f_103ed590();
  /* 103f2271 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103f2277 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f227a jmp 0x103f22a6 */
  goto L_103f22a6;
L_103f227c:;
  /* 103f227c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f227f push edx */
  push32((uint32_t)(EDX));
  /* 103f2280 call 0x103eeda0 */
  push32(0x103f2285u); f_103eeda0();
  /* 103f2285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f228b push eax */
  push32((uint32_t)(EAX));
  /* 103f228c call 0x103f22b0 */
  push32(0x103f2291u); f_103f22b0();
  /* 103f2291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2294 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f2297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f229a push ecx */
  push32((uint32_t)(ECX));
  /* 103f229b call 0x103eee30 */
  push32(0x103f22a0u); f_103eee30();
  /* 103f22a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f22a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103f22a6:;
  /* 103f22a6 mov esp, ebp */
  ESP = (EBP);
  /* 103f22a8 pop ebp */
  EBP = (pop32());
  /* 103f22a9 ret  */
  ESPCHK(0x103f2230u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x103f22b0 (170 bytes, 59 insns) */
void f_103f22b0(void) {
  FTRACE(0x103f22b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f22b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f22b1 mov ebp, esp */
  EBP = (ESP);
  /* 103f22b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f22b4 push esi */
  push32((uint32_t)(ESI));
  /* 103f22b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f22b8 push eax */
  push32((uint32_t)(EAX));
  /* 103f22b9 call 0x103eec20 */
  push32(0x103f22beu); f_103eec20();
  /* 103f22be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f22c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f22c4 je 0x103f2303 */
  if (C.zf) goto L_103f2303;
  /* 103f22c6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f22ca je 0x103f22d2 */
  if (C.zf) goto L_103f22d2;
  /* 103f22cc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f22d0 jne 0x103f22ec */
  if (!C.zf) goto L_103f22ec;
L_103f22d2:;
  /* 103f22d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f22d4 call 0x103eec20 */
  push32(0x103f22d9u); f_103eec20();
  /* 103f22d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f22dc mov esi, eax */
  ESI = (EAX);
  /* 103f22de push 2 */
  push32((uint32_t)(0x2u));
  /* 103f22e0 call 0x103eec20 */
  push32(0x103f22e5u); f_103eec20();
  /* 103f22e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f22e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f22ea je 0x103f2303 */
  if (C.zf) goto L_103f2303;
L_103f22ec:;
  /* 103f22ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f22ef push ecx */
  push32((uint32_t)(ECX));
  /* 103f22f0 call 0x103eec20 */
  push32(0x103f22f5u); f_103eec20();
  /* 103f22f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f22f8 push eax */
  push32((uint32_t)(EAX));
  /* 103f22f9 call dword ptr [0x104142d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d8))), 0x103f22ffu);
  /* 103f22ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f2301 je 0x103f230c */
  if (C.zf) goto L_103f230c;
L_103f2303:;
  /* 103f2303 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f230a jmp 0x103f2315 */
  goto L_103f2315;
L_103f230c:;
  /* 103f230c call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103f2312u);
  /* 103f2312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f2315:;
  /* 103f2315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2318 push edx */
  push32((uint32_t)(EDX));
  /* 103f2319 call 0x103eeb40 */
  push32(0x103f231eu); f_103eeb40();
  /* 103f231e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2324 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103f2327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f232a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103f232d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f2330 mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103f2337 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 103f233c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2340 je 0x103f2353 */
  if (C.zf) goto L_103f2353;
  /* 103f2342 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2345 push eax */
  push32((uint32_t)(EAX));
  /* 103f2346 call 0x103ed4e0 */
  push32(0x103f234bu); f_103ed4e0();
  /* 103f234b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f234e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f2351 jmp 0x103f2355 */
  goto L_103f2355;
L_103f2353:;
  /* 103f2353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f2355:;
  /* 103f2355 pop esi */
  ESI = (pop32());
  /* 103f2356 mov esp, ebp */
  ESP = (EBP);
  /* 103f2358 pop ebp */
  EBP = (pop32());
  /* 103f2359 ret  */
  ESPCHK(0x103f22b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x103f2360 (146 bytes, 52 insns) */
void f_103f2360(void) {
  FTRACE(0x103f2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2360 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2361 mov ebp, esp */
  EBP = (ESP);
  /* 103f2363 push ebx */
  push32((uint32_t)(EBX));
  /* 103f2364 push esi */
  push32((uint32_t)(ESI));
  /* 103f2365 push edi */
  push32((uint32_t)(EDI));
L_103f2366:;
  /* 103f2366 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f236a jne 0x103f238a */
  if (!C.zf) goto L_103f238a;
  /* 103f236c push 0x1040d358 */
  push32((uint32_t)(0x1040d358u));
  /* 103f2371 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f2373 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103f2375 push 0x1040da20 */
  push32((uint32_t)(0x1040da20u));
  /* 103f237a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f237c call 0x103e4770 */
  push32(0x103f2381u); f_103e4770();
  /* 103f2381 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2387 jne 0x103f238a */
  if (!C.zf) goto L_103f238a;
  /* 103f2389 int3  */
  x86_unimpl("int3 @ 0x103f2389");
L_103f238a:;
  /* 103f238a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f238c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f238e jne 0x103f2366 */
  if (!C.zf) goto L_103f2366;
  /* 103f2390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2393 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103f2396 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 103f239c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f239e je 0x103f23ed */
  if (C.zf) goto L_103f23ed;
  /* 103f23a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103f23a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103f23a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f23ab je 0x103f23ed */
  if (C.zf) goto L_103f23ed;
  /* 103f23ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103f23af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103f23b5 push eax */
  push32((uint32_t)(EAX));
  /* 103f23b6 call 0x103e6140 */
  push32(0x103f23bbu); f_103e6140();
  /* 103f23bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f23be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103f23c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 103f23ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103f23d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 103f23d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103f23e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f23e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_103f23ed:;
  /* 103f23ed pop edi */
  EDI = (pop32());
  /* 103f23ee pop esi */
  ESI = (pop32());
  /* 103f23ef pop ebx */
  EBX = (pop32());
  /* 103f23f0 pop ebp */
  EBP = (pop32());
  /* 103f23f1 ret  */
  ESPCHK(0x103f2360u, _esp0);
  ESP += 4; return;
}

