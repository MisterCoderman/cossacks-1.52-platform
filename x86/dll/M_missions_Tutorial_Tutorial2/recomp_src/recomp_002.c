#include "recomp.h"

/* FUN_10013730 @ 0x123e3730 (393 bytes, 123 insns) */
void f_123e3730(void) {
  FTRACE(0x123e3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3730 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3731 mov ebp, esp */
  EBP = (ESP);
  /* 123e3733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3736 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e373a jne 0x123e3746 */
  if (!C.zf) goto L_123e3746;
  /* 123e373c mov eax, dword ptr [0x12401c98] */
  EAX = (r32((uint32_t)(0x12401c98)));
  /* 123e3741 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123e3744 jmp 0x123e374c */
  goto L_123e374c;
L_123e3746:;
  /* 123e3746 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3749 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123e374c:;
  /* 123e374c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e374f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e3752 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3755 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e3758 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e375d call dword ptr [0x12405330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405330))), 0x123e3763u);
  /* 123e3763 cmp dword ptr [0x12402b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e376a je 0x123e378a */
  if (C.zf) goto L_123e378a;
  /* 123e376c push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e3771 call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123e3777u);
  /* 123e3777 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e3779 call 0x123d9df0 */
  push32(0x123e377eu); f_123d9df0();
  /* 123e377e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3781 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123e3788 jmp 0x123e3791 */
  goto L_123e3791;
L_123e378a:;
  /* 123e378a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123e3791:;
  /* 123e3791 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3795 jbe 0x123e3882 */
  if ((C.cf||C.zf)) goto L_123e3882;
  /* 123e379b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e379e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e37a0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 123e37a3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e37a7 je 0x123e37b1 */
  if (C.zf) goto L_123e37b1;
  /* 123e37a9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e37ad je 0x123e37b6 */
  if (C.zf) goto L_123e37b6;
  /* 123e37af jmp 0x123e3810 */
  goto L_123e3810;
L_123e37b1:;
  /* 123e37b1 jmp 0x123e3882 */
  goto L_123e3882;
L_123e37b6:;
  /* 123e37b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e37b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e37bc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 123e37bf mov dword ptr [0x12402b38], 0 */
  w32((uint32_t)(0x12402b38), (0x0u));
  /* 123e37c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e37cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e37cf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e37d2 jne 0x123e37e7 */
  if (!C.zf) goto L_123e37e7;
  /* 123e37d4 mov dword ptr [0x12402b38], 1 */
  w32((uint32_t)(0x12402b38), (0x1u));
  /* 123e37de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e37e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e37e4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123e37e7:;
  /* 123e37e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e37ea push ecx */
  push32((uint32_t)(ECX));
  /* 123e37eb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123e37ee push edx */
  push32((uint32_t)(EDX));
  /* 123e37ef lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 123e37f2 push eax */
  push32((uint32_t)(EAX));
  /* 123e37f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e37f6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e37f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e37fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e37fc push eax */
  push32((uint32_t)(EAX));
  /* 123e37fd call 0x123e38c0 */
  push32(0x123e3802u); f_123e38c0();
  /* 123e3802 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3805 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e380b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123e380e jmp 0x123e387d */
  goto L_123e387d;
L_123e3810:;
  /* 123e3810 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e3815 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e3817 mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e381d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e381f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e3823 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123e3829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e382b je 0x123e3858 */
  if (C.zf) goto L_123e3858;
  /* 123e382d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3831 jbe 0x123e3858 */
  if ((C.cf||C.zf)) goto L_123e3858;
  /* 123e3833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3836 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3839 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e383b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123e383d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3840 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3843 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e3846 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3849 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e384c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123e384f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3852 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3855 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123e3858:;
  /* 123e3858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e385b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e385e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e3860 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123e3862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3868 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e386b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e386e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3871 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123e3874 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3877 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e387a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123e387d:;
  /* 123e387d jmp 0x123e3791 */
  goto L_123e3791;
L_123e3882:;
  /* 123e3882 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3886 je 0x123e3894 */
  if (C.zf) goto L_123e3894;
  /* 123e3888 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e388a call 0x123d9e90 */
  push32(0x123e388fu); f_123d9e90();
  /* 123e388f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3892 jmp 0x123e389f */
  goto L_123e389f;
L_123e3894:;
  /* 123e3894 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e3899 call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123e389fu);
L_123e389f:;
  /* 123e389f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e38a3 jbe 0x123e38b3 */
  if ((C.cf||C.zf)) goto L_123e38b3;
  /* 123e38a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e38a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123e38ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e38ae sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e38b1 jmp 0x123e38b5 */
  goto L_123e38b5;
L_123e38b3:;
  /* 123e38b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e38b5:;
  /* 123e38b5 mov esp, ebp */
  ESP = (EBP);
  /* 123e38b7 pop ebp */
  EBP = (pop32());
  /* 123e38b8 ret  */
  ESPCHK(0x123e3730u, _esp0);
  ESP += 4; return;
}

/* FUN_100138c0 @ 0x123e38c0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_123e38c0(void) {
  FTRACE(0x123e38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e38c1 mov ebp, esp */
  EBP = (ESP);
  /* 123e38c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e38c6 push esi */
  push32((uint32_t)(ESI));
  /* 123e38c7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 123e38cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e38ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e38d1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e38d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e38d7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e38db ja 0x123e3e28 */
  if ((!C.cf&&!C.zf)) goto L_123e3e28;
  /* 123e38e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e38e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e38e6 mov dl, byte ptr [eax + 0x123e3e89] */
  DL = (r8((uint32_t)(EAX + 0x123e3e89)));
  /* 123e38ec jmp dword ptr [edx*4 + 0x123e3e2d] */
  switch (EDX) {
    case 0: goto L_123e3e06;
    case 1: goto L_123e3915;
    case 2: goto L_123e395b;
    case 3: goto L_123e3aa8;
    case 4: goto L_123e3ad0;
    case 5: goto L_123e3b6f;
    case 6: goto L_123e3bdb;
    case 7: goto L_123e3c04;
    case 8: goto L_123e3c45;
    case 9: goto L_123e3d27;
    case 10: goto L_123e3d8e;
    case 11: goto L_123e3ddb;
    case 12: goto L_123e38f3;
    case 13: goto L_123e3938;
    case 14: goto L_123e397e;
    case 15: goto L_123e3a7e;
    case 16: goto L_123e3b15;
    case 17: goto L_123e3b42;
    case 18: goto L_123e3b97;
    case 19: goto L_123e3c1b;
    case 20: goto L_123e3cc9;
    case 21: goto L_123e3d58;
    case 22: goto L_123e3e28;
    default: x86_unimpl("switch@0x123e38ec out of table"); return;
  }
L_123e38f3:;
  /* 123e38f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e38f6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e38f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e38fa push edx */
  push32((uint32_t)(EDX));
  /* 123e38fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e38fe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123e3901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3904 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123e3907 push eax */
  push32((uint32_t)(EAX));
  /* 123e3908 call 0x123e3ee0 */
  push32(0x123e390du); f_123e3ee0();
  /* 123e390d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3910 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3915:;
  /* 123e3915 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3918 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3919 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e391c push edx */
  push32((uint32_t)(EDX));
  /* 123e391d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3920 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123e3923 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3926 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123e392a push eax */
  push32((uint32_t)(EAX));
  /* 123e392b call 0x123e3ee0 */
  push32(0x123e3930u); f_123e3ee0();
  /* 123e3930 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3933 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3938:;
  /* 123e3938 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e393b push ecx */
  push32((uint32_t)(ECX));
  /* 123e393c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e393f push edx */
  push32((uint32_t)(EDX));
  /* 123e3940 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3943 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123e3946 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3949 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123e394d push eax */
  push32((uint32_t)(EAX));
  /* 123e394e call 0x123e3ee0 */
  push32(0x123e3953u); f_123e3ee0();
  /* 123e3953 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3956 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e395b:;
  /* 123e395b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e395e push ecx */
  push32((uint32_t)(ECX));
  /* 123e395f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3962 push edx */
  push32((uint32_t)(EDX));
  /* 123e3963 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3966 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123e3969 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e396c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123e3970 push eax */
  push32((uint32_t)(EAX));
  /* 123e3971 call 0x123e3ee0 */
  push32(0x123e3976u); f_123e3ee0();
  /* 123e3976 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3979 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e397e:;
  /* 123e397e cmp dword ptr [0x12402b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3985 je 0x123e3a06 */
  if (C.zf) goto L_123e3a06;
  /* 123e3987 mov dword ptr [0x12402b38], 0 */
  w32((uint32_t)(0x12402b38), (0x0u));
  /* 123e3991 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3994 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3995 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3998 push edx */
  push32((uint32_t)(EDX));
  /* 123e3999 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e399c push eax */
  push32((uint32_t)(EAX));
  /* 123e399d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e39a0 push ecx */
  push32((uint32_t)(ECX));
  /* 123e39a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e39a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123e39aa push eax */
  push32((uint32_t)(EAX));
  /* 123e39ab call 0x123e4090 */
  push32(0x123e39b0u); f_123e4090();
  /* 123e39b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e39b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e39b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e39b9 jne 0x123e39c0 */
  if (!C.zf) goto L_123e39c0;
  /* 123e39bb jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e39c0:;
  /* 123e39c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e39c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e39c5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 123e39c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e39cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e39cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e39d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e39d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e39d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e39d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e39da sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e39dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e39e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e39e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e39e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e39e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e39e9 push edx */
  push32((uint32_t)(EDX));
  /* 123e39ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e39ed push eax */
  push32((uint32_t)(EAX));
  /* 123e39ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e39f1 push ecx */
  push32((uint32_t)(ECX));
  /* 123e39f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e39f5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123e39fb push eax */
  push32((uint32_t)(EAX));
  /* 123e39fc call 0x123e4090 */
  push32(0x123e3a01u); f_123e4090();
  /* 123e3a01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3a04 jmp 0x123e3a79 */
  goto L_123e3a79;
L_123e3a06:;
  /* 123e3a06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3a09 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3a0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a0d push edx */
  push32((uint32_t)(EDX));
  /* 123e3a0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a11 push eax */
  push32((uint32_t)(EAX));
  /* 123e3a12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3a15 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3a16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3a19 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 123e3a1f push eax */
  push32((uint32_t)(EAX));
  /* 123e3a20 call 0x123e4090 */
  push32(0x123e3a25u); f_123e4090();
  /* 123e3a25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3a28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a2b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3a2e jne 0x123e3a35 */
  if (!C.zf) goto L_123e3a35;
  /* 123e3a30 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3a35:;
  /* 123e3a35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e3a3a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 123e3a3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e3a42 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3a45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a48 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e3a4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e3a4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3a52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e3a57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3a5a push ecx */
  push32((uint32_t)(ECX));
  /* 123e3a5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a5e push edx */
  push32((uint32_t)(EDX));
  /* 123e3a5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a62 push eax */
  push32((uint32_t)(EAX));
  /* 123e3a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3a66 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3a67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3a6a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123e3a70 push eax */
  push32((uint32_t)(EAX));
  /* 123e3a71 call 0x123e4090 */
  push32(0x123e3a76u); f_123e4090();
  /* 123e3a76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e3a79:;
  /* 123e3a79 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3a7e:;
  /* 123e3a7e mov ecx, dword ptr [0x12402b38] */
  ECX = (r32((uint32_t)(0x12402b38)));
  /* 123e3a84 mov dword ptr [0x12402b48], ecx */
  w32((uint32_t)(0x12402b48), (ECX));
  /* 123e3a8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3a8d push edx */
  push32((uint32_t)(EDX));
  /* 123e3a8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3a91 push eax */
  push32((uint32_t)(EAX));
  /* 123e3a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3a94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3a97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e3a9a push edx */
  push32((uint32_t)(EDX));
  /* 123e3a9b call 0x123e3f30 */
  push32(0x123e3aa0u); f_123e3f30();
  /* 123e3aa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3aa3 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3aa8:;
  /* 123e3aa8 mov eax, dword ptr [0x12402b38] */
  EAX = (r32((uint32_t)(0x12402b38)));
  /* 123e3aad mov dword ptr [0x12402b48], eax */
  w32((uint32_t)(0x12402b48), (EAX));
  /* 123e3ab2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3ab6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3ab9 push edx */
  push32((uint32_t)(EDX));
  /* 123e3aba push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3abc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3abf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123e3ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3ac3 call 0x123e3f30 */
  push32(0x123e3ac8u); f_123e3f30();
  /* 123e3ac8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3acb jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3ad0:;
  /* 123e3ad0 mov edx, dword ptr [0x12402b38] */
  EDX = (r32((uint32_t)(0x12402b38)));
  /* 123e3ad6 mov dword ptr [0x12402b48], edx */
  w32((uint32_t)(0x12402b48), (EDX));
  /* 123e3adc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3adf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 123e3ae2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3ae3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 123e3ae8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3aea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e3aed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3af1 jne 0x123e3afa */
  if (!C.zf) goto L_123e3afa;
  /* 123e3af3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_123e3afa:;
  /* 123e3afa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3afd push edx */
  push32((uint32_t)(EDX));
  /* 123e3afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3b01 push eax */
  push32((uint32_t)(EAX));
  /* 123e3b02 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3b07 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3b08 call 0x123e3f30 */
  push32(0x123e3b0du); f_123e3f30();
  /* 123e3b0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b10 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3b15:;
  /* 123e3b15 mov edx, dword ptr [0x12402b38] */
  EDX = (r32((uint32_t)(0x12402b38)));
  /* 123e3b1b mov dword ptr [0x12402b48], edx */
  w32((uint32_t)(0x12402b48), (EDX));
  /* 123e3b21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3b24 push eax */
  push32((uint32_t)(EAX));
  /* 123e3b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3b28 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3b29 push 3 */
  push32((uint32_t)(0x3u));
  /* 123e3b2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3b2e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e3b31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b34 push eax */
  push32((uint32_t)(EAX));
  /* 123e3b35 call 0x123e3f30 */
  push32(0x123e3b3au); f_123e3f30();
  /* 123e3b3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b3d jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3b42:;
  /* 123e3b42 mov ecx, dword ptr [0x12402b38] */
  ECX = (r32((uint32_t)(0x12402b38)));
  /* 123e3b48 mov dword ptr [0x12402b48], ecx */
  w32((uint32_t)(0x12402b48), (ECX));
  /* 123e3b4e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3b51 push edx */
  push32((uint32_t)(EDX));
  /* 123e3b52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3b55 push eax */
  push32((uint32_t)(EAX));
  /* 123e3b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3b58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3b5b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123e3b5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b61 push edx */
  push32((uint32_t)(EDX));
  /* 123e3b62 call 0x123e3f30 */
  push32(0x123e3b67u); f_123e3f30();
  /* 123e3b67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b6a jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3b6f:;
  /* 123e3b6f mov eax, dword ptr [0x12402b38] */
  EAX = (r32((uint32_t)(0x12402b38)));
  /* 123e3b74 mov dword ptr [0x12402b48], eax */
  w32((uint32_t)(0x12402b48), (EAX));
  /* 123e3b79 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3b7c push ecx */
  push32((uint32_t)(ECX));
  /* 123e3b7d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3b80 push edx */
  push32((uint32_t)(EDX));
  /* 123e3b81 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3b83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3b86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123e3b89 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3b8a call 0x123e3f30 */
  push32(0x123e3b8fu); f_123e3f30();
  /* 123e3b8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3b92 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3b97:;
  /* 123e3b97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3b9a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3b9e jg 0x123e3bbc */
  if ((!C.zf&&C.sf==C.of)) goto L_123e3bbc;
  /* 123e3ba0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3ba3 push eax */
  push32((uint32_t)(EAX));
  /* 123e3ba4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3ba8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3bab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 123e3bb1 push eax */
  push32((uint32_t)(EAX));
  /* 123e3bb2 call 0x123e3ee0 */
  push32(0x123e3bb7u); f_123e3ee0();
  /* 123e3bb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3bba jmp 0x123e3bd6 */
  goto L_123e3bd6;
L_123e3bbc:;
  /* 123e3bbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3bbf push ecx */
  push32((uint32_t)(ECX));
  /* 123e3bc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3bc3 push edx */
  push32((uint32_t)(EDX));
  /* 123e3bc4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3bc7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 123e3bcd push ecx */
  push32((uint32_t)(ECX));
  /* 123e3bce call 0x123e3ee0 */
  push32(0x123e3bd3u); f_123e3ee0();
  /* 123e3bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e3bd6:;
  /* 123e3bd6 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3bdb:;
  /* 123e3bdb mov edx, dword ptr [0x12402b38] */
  EDX = (r32((uint32_t)(0x12402b38)));
  /* 123e3be1 mov dword ptr [0x12402b48], edx */
  w32((uint32_t)(0x12402b48), (EDX));
  /* 123e3be7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3bea push eax */
  push32((uint32_t)(EAX));
  /* 123e3beb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3bee push ecx */
  push32((uint32_t)(ECX));
  /* 123e3bef push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3bf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3bf4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e3bf6 push eax */
  push32((uint32_t)(EAX));
  /* 123e3bf7 call 0x123e3f30 */
  push32(0x123e3bfcu); f_123e3f30();
  /* 123e3bfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3bff jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3c04:;
  /* 123e3c04 mov ecx, dword ptr [0x12402b38] */
  ECX = (r32((uint32_t)(0x12402b38)));
  /* 123e3c0a mov dword ptr [0x12402b48], ecx */
  w32((uint32_t)(0x12402b48), (ECX));
  /* 123e3c10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c13 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 123e3c16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e3c19 jmp 0x123e3c6d */
  goto L_123e3c6d;
L_123e3c1b:;
  /* 123e3c1b mov ecx, dword ptr [0x12402b38] */
  ECX = (r32((uint32_t)(0x12402b38)));
  /* 123e3c21 mov dword ptr [0x12402b48], ecx */
  w32((uint32_t)(0x12402b48), (ECX));
  /* 123e3c27 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3c2a push edx */
  push32((uint32_t)(EDX));
  /* 123e3c2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3c2e push eax */
  push32((uint32_t)(EAX));
  /* 123e3c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e3c31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c34 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123e3c37 push edx */
  push32((uint32_t)(EDX));
  /* 123e3c38 call 0x123e3f30 */
  push32(0x123e3c3du); f_123e3f30();
  /* 123e3c3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3c40 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3c45:;
  /* 123e3c45 mov eax, dword ptr [0x12402b38] */
  EAX = (r32((uint32_t)(0x12402b38)));
  /* 123e3c4a mov dword ptr [0x12402b48], eax */
  w32((uint32_t)(0x12402b48), (EAX));
  /* 123e3c4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c52 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3c56 jne 0x123e3c61 */
  if (!C.zf) goto L_123e3c61;
  /* 123e3c58 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 123e3c5f jmp 0x123e3c6d */
  goto L_123e3c6d;
L_123e3c61:;
  /* 123e3c61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c64 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 123e3c67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3c6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e3c6d:;
  /* 123e3c6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c70 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123e3c73 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3c76 jge 0x123e3c81 */
  if ((C.sf==C.of)) goto L_123e3c81;
  /* 123e3c78 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e3c7f jmp 0x123e3cae */
  goto L_123e3cae;
L_123e3c81:;
  /* 123e3c81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c84 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e3c87 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3c88 mov ecx, 7 */
  ECX = (0x7u);
  /* 123e3c8d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3c8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e3c92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3c95 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e3c98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3c99 mov ecx, 7 */
  ECX = (0x7u);
  /* 123e3c9e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3ca0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3ca3 jl 0x123e3cae */
  if ((C.sf!=C.of)) goto L_123e3cae;
  /* 123e3ca5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3ca8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3cab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123e3cae:;
  /* 123e3cae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3cb1 push eax */
  push32((uint32_t)(EAX));
  /* 123e3cb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3cb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3cb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3cbb push edx */
  push32((uint32_t)(EDX));
  /* 123e3cbc call 0x123e3f30 */
  push32(0x123e3cc1u); f_123e3f30();
  /* 123e3cc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3cc4 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3cc9:;
  /* 123e3cc9 cmp dword ptr [0x12402b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3cd0 je 0x123e3d00 */
  if (C.zf) goto L_123e3d00;
  /* 123e3cd2 mov dword ptr [0x12402b38], 0 */
  w32((uint32_t)(0x12402b38), (0x0u));
  /* 123e3cdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3cdf push eax */
  push32((uint32_t)(EAX));
  /* 123e3ce0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3ce4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3ce7 push edx */
  push32((uint32_t)(EDX));
  /* 123e3ce8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3ceb push eax */
  push32((uint32_t)(EAX));
  /* 123e3cec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3cef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 123e3cf5 push edx */
  push32((uint32_t)(EDX));
  /* 123e3cf6 call 0x123e4090 */
  push32(0x123e3cfbu); f_123e4090();
  /* 123e3cfb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3cfe jmp 0x123e3d22 */
  goto L_123e3d22;
L_123e3d00:;
  /* 123e3d00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3d03 push eax */
  push32((uint32_t)(EAX));
  /* 123e3d04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3d07 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3d08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3d0b push edx */
  push32((uint32_t)(EDX));
  /* 123e3d0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3d0f push eax */
  push32((uint32_t)(EAX));
  /* 123e3d10 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3d13 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 123e3d19 push edx */
  push32((uint32_t)(EDX));
  /* 123e3d1a call 0x123e4090 */
  push32(0x123e3d1fu); f_123e4090();
  /* 123e3d1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e3d22:;
  /* 123e3d22 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3d27:;
  /* 123e3d27 mov dword ptr [0x12402b38], 0 */
  w32((uint32_t)(0x12402b38), (0x0u));
  /* 123e3d31 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3d34 push eax */
  push32((uint32_t)(EAX));
  /* 123e3d35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3d38 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3d39 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3d3c push edx */
  push32((uint32_t)(EDX));
  /* 123e3d3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3d40 push eax */
  push32((uint32_t)(EAX));
  /* 123e3d41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e3d44 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 123e3d4a push edx */
  push32((uint32_t)(EDX));
  /* 123e3d4b call 0x123e4090 */
  push32(0x123e3d50u); f_123e4090();
  /* 123e3d50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3d53 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3d58:;
  /* 123e3d58 mov eax, dword ptr [0x12402b38] */
  EAX = (r32((uint32_t)(0x12402b38)));
  /* 123e3d5d mov dword ptr [0x12402b48], eax */
  w32((uint32_t)(0x12402b48), (EAX));
  /* 123e3d62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3d65 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 123e3d68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3d69 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 123e3d6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3d70 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e3d73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3d76 push edx */
  push32((uint32_t)(EDX));
  /* 123e3d77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3d7a push eax */
  push32((uint32_t)(EAX));
  /* 123e3d7b push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3d7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3d80 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3d81 call 0x123e3f30 */
  push32(0x123e3d86u); f_123e3f30();
  /* 123e3d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3d89 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3d8e:;
  /* 123e3d8e mov edx, dword ptr [0x12402b38] */
  EDX = (r32((uint32_t)(0x12402b38)));
  /* 123e3d94 mov dword ptr [0x12402b48], edx */
  w32((uint32_t)(0x12402b48), (EDX));
  /* 123e3d9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3d9d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 123e3da0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3da1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 123e3da6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3da8 mov ecx, eax */
  ECX = (EAX);
  /* 123e3daa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3dad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e3db0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3db3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e3db6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3db7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 123e3dbc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3dbe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3dc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e3dc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3dc6 push eax */
  push32((uint32_t)(EAX));
  /* 123e3dc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3dca push ecx */
  push32((uint32_t)(ECX));
  /* 123e3dcb push 4 */
  push32((uint32_t)(0x4u));
  /* 123e3dcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3dd0 push edx */
  push32((uint32_t)(EDX));
  /* 123e3dd1 call 0x123e3f30 */
  push32(0x123e3dd6u); f_123e3f30();
  /* 123e3dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3dd9 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3ddb:;
  /* 123e3ddb call 0x123e4ef0 */
  push32(0x123e3de0u); f_123e4ef0();
  /* 123e3de0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3de3 push eax */
  push32((uint32_t)(EAX));
  /* 123e3de4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3de7 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3de8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e3ded cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3df1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 123e3df4 mov ecx, dword ptr [eax*4 + 0x12401e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12401e1c)));
  /* 123e3dfb push ecx */
  push32((uint32_t)(ECX));
  /* 123e3dfc call 0x123e3ee0 */
  push32(0x123e3e01u); f_123e3ee0();
  /* 123e3e01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3e04 jmp 0x123e3e28 */
  goto L_123e3e28;
L_123e3e06:;
  /* 123e3e06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3e09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e3e0b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 123e3e0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3e11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e3e13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3e16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3e19 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e3e1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3e1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e3e20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3e26 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123e3e28:;
  /* 123e3e28 pop esi */
  ESI = (pop32());
  /* 123e3e29 mov esp, ebp */
  ESP = (EBP);
  /* 123e3e2b pop ebp */
  EBP = (pop32());
  /* 123e3e2c ret  */
  ESPCHK(0x123e38c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x123e3ee0 (72 bytes, 30 insns) */
void f_123e3ee0(void) {
  FTRACE(0x123e3ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3ee1 mov ebp, esp */
  EBP = (ESP);
L_123e3ee3:;
  /* 123e3ee3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3ee6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3ee9 je 0x123e3f26 */
  if (C.zf) goto L_123e3f26;
  /* 123e3eeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3eee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e3ef1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e3ef3 je 0x123e3f26 */
  if (C.zf) goto L_123e3f26;
  /* 123e3ef5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3ef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e3efa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3efd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e3eff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e3f01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e3f06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f0c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e3f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3f11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3f14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123e3f17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3f1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e3f1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3f1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3f22 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e3f24 jmp 0x123e3ee3 */
  goto L_123e3ee3;
L_123e3f26:;
  /* 123e3f26 pop ebp */
  EBP = (pop32());
  /* 123e3f27 ret  */
  ESPCHK(0x123e3ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f30 @ 0x123e3f30 (173 bytes, 64 insns) */
void f_123e3f30(void) {
  FTRACE(0x123e3f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3f30 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3f31 mov ebp, esp */
  EBP = (ESP);
  /* 123e3f33 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3f34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e3f3b cmp dword ptr [0x12402b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3f42 je 0x123e3f5a */
  if (C.zf) goto L_123e3f5a;
  /* 123e3f44 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3f47 push eax */
  push32((uint32_t)(EAX));
  /* 123e3f48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3f4b push ecx */
  push32((uint32_t)(ECX));
  /* 123e3f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3f4f push edx */
  push32((uint32_t)(EDX));
  /* 123e3f50 call 0x123e3fe0 */
  push32(0x123e3f55u); f_123e3fe0();
  /* 123e3f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3f58 jmp 0x123e3fd9 */
  goto L_123e3fd9;
L_123e3f5a:;
  /* 123e3f5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f60 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3f62 jae 0x123e3fd0 */
  if (!C.cf) goto L_123e3fd0;
  /* 123e3f64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3f6a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123e3f6d jmp 0x123e3f78 */
  goto L_123e3f78;
L_123e3f6f:;
  /* 123e3f6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3f75 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_123e3f78:;
  /* 123e3f78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3f7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e3f80 je 0x123e3fb4 */
  if (C.zf) goto L_123e3fb4;
  /* 123e3f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3f85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3f86 mov ecx, 0xa */
  ECX = (0xau);
  /* 123e3f8b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3f8d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3f90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3f93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e3f95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3f98 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 123e3f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3f9e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3f9f mov ecx, 0xa */
  ECX = (0xau);
  /* 123e3fa4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e3fa6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e3fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3fac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3faf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e3fb2 jmp 0x123e3f6f */
  goto L_123e3f6f;
L_123e3fb4:;
  /* 123e3fb4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3fb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e3fb9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3fbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3fbf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123e3fc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3fc4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e3fc6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3fc9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3fcc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123e3fce jmp 0x123e3fd9 */
  goto L_123e3fd9;
L_123e3fd0:;
  /* 123e3fd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3fd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123e3fd9:;
  /* 123e3fd9 mov esp, ebp */
  ESP = (EBP);
  /* 123e3fdb pop ebp */
  EBP = (pop32());
  /* 123e3fdc ret  */
  ESPCHK(0x123e3f30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x123e3fe0 (172 bytes, 65 insns) */
void f_123e3fe0(void) {
  FTRACE(0x123e3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3fe1 mov ebp, esp */
  EBP = (ESP);
  /* 123e3fe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3fe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e3feb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e3fee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e3ff1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3ff4 jbe 0x123e403b */
  if ((C.cf||C.zf)) goto L_123e403b;
L_123e3ff6:;
  /* 123e3ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3ff9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e3ffa mov ecx, 0xa */
  ECX = (0xau);
  /* 123e3fff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e4001 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4007 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123e4009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e400c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e400f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e4012 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4015 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e4017 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e401a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e401d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e401f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4022 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e4023 mov ecx, 0xa */
  ECX = (0xau);
  /* 123e4028 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e402a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e402d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4031 jle 0x123e403b */
  if ((C.zf||C.sf!=C.of)) goto L_123e403b;
  /* 123e4033 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4036 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4039 ja 0x123e3ff6 */
  if ((!C.cf&&!C.zf)) goto L_123e3ff6;
L_123e403b:;
  /* 123e403b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e403e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e4040 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e4043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e4046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4049 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123e404b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e404e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4051 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123e4054:;
  /* 123e4054 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4057 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4059 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 123e405c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e405f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4062 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4064 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e4066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4069 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e406c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e406f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4072 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 123e4075 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 123e4077 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e407a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e407d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e4080 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4083 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4086 jb 0x123e4054 */
  if (C.cf) goto L_123e4054;
  /* 123e4088 mov esp, ebp */
  ESP = (EBP);
  /* 123e408a pop ebp */
  EBP = (pop32());
  /* 123e408b ret  */
  ESPCHK(0x123e3fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x123e4090 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_123e4090(void) {
  FTRACE(0x123e4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4090 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4091 mov ebp, esp */
  EBP = (ESP);
  /* 123e4093 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_123e4096:;
  /* 123e4096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4099 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e409c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e409e je 0x123e450c */
  if (C.zf) goto L_123e450c;
  /* 123e40a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e40a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e40aa je 0x123e450c */
  if (C.zf) goto L_123e450c;
  /* 123e40b0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e40b4 mov dword ptr [0x12402b48], 0 */
  w32((uint32_t)(0x12402b48), (0x0u));
  /* 123e40be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123e40c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e40c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e40cb jmp 0x123e40d6 */
  goto L_123e40d6;
L_123e40cd:;
  /* 123e40cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e40d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e40d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123e40d6:;
  /* 123e40d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e40d9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e40dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e40df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e40e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e40e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e40e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e40eb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e40ed jne 0x123e40f1 */
  if (!C.zf) goto L_123e40f1;
  /* 123e40ef jmp 0x123e40cd */
  goto L_123e40cd;
L_123e40f1:;
  /* 123e40f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e40f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e40f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e40fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e40fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e4100 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e4103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e4106 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4109 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e410c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4110 ja 0x123e4460 */
  if ((!C.cf&&!C.zf)) goto L_123e4460;
  /* 123e4116 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e4119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e411b mov al, byte ptr [ecx + 0x123e453c] */
  AL = (r8((uint32_t)(ECX + 0x123e453c)));
  /* 123e4121 jmp dword ptr [eax*4 + 0x123e4510] */
  switch (EAX) {
    case 0: goto L_123e437f;
    case 1: goto L_123e4263;
    case 2: goto L_123e41ee;
    case 3: goto L_123e4128;
    case 4: goto L_123e4166;
    case 5: goto L_123e41c7;
    case 6: goto L_123e4215;
    case 7: goto L_123e423c;
    case 8: goto L_123e42aa;
    case 9: goto L_123e41a4;
    case 10: goto L_123e4460;
    default: x86_unimpl("switch@0x123e4121 out of table"); return;
  }
L_123e4128:;
  /* 123e4128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e412b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123e412e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e4131 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4134 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123e4137 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e413b ja 0x123e4161 */
  if ((!C.cf&&!C.zf)) goto L_123e4161;
  /* 123e413d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e4140 jmp dword ptr [ecx*4 + 0x123e458f] */
  switch (ECX) {
    case 0: goto L_123e4147;
    case 1: goto L_123e4151;
    case 2: goto L_123e4157;
    case 3: goto L_123e415d;
    case 4: goto L_123e4185;
    case 5: goto L_123e418f;
    case 6: goto L_123e4195;
    case 7: goto L_123e419b;
    default: x86_unimpl("switch@0x123e4140 out of table"); return;
  }
L_123e4147:;
  /* 123e4147 mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e4151:;
  /* 123e4151 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 123e4155 jmp 0x123e4161 */
  goto L_123e4161;
L_123e4157:;
  /* 123e4157 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 123e415b jmp 0x123e4161 */
  goto L_123e4161;
L_123e415d:;
  /* 123e415d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_123e4161:;
  /* 123e4161 jmp 0x123e4460 */
  goto L_123e4460;
L_123e4166:;
  /* 123e4166 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4169 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123e416c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e416f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4172 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123e4175 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4179 ja 0x123e419f */
  if ((!C.cf&&!C.zf)) goto L_123e419f;
  /* 123e417b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e417e jmp dword ptr [ecx*4 + 0x123e459f] */
  switch (ECX) {
    case 0: goto L_123e4185;
    case 1: goto L_123e418f;
    case 2: goto L_123e4195;
    case 3: goto L_123e419b;
    default: x86_unimpl("switch@0x123e417e out of table"); return;
  }
L_123e4185:;
  /* 123e4185 mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e418f:;
  /* 123e418f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 123e4193 jmp 0x123e419f */
  goto L_123e419f;
L_123e4195:;
  /* 123e4195 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 123e4199 jmp 0x123e419f */
  goto L_123e419f;
L_123e419b:;
  /* 123e419b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_123e419f:;
  /* 123e419f jmp 0x123e4460 */
  goto L_123e4460;
L_123e41a4:;
  /* 123e41a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e41a7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123e41aa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41ae je 0x123e41b8 */
  if (C.zf) goto L_123e41b8;
  /* 123e41b0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41b4 je 0x123e41be */
  if (C.zf) goto L_123e41be;
  /* 123e41b6 jmp 0x123e41c2 */
  goto L_123e41c2;
L_123e41b8:;
  /* 123e41b8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 123e41bc jmp 0x123e41c2 */
  goto L_123e41c2;
L_123e41be:;
  /* 123e41be mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_123e41c2:;
  /* 123e41c2 jmp 0x123e4460 */
  goto L_123e4460;
L_123e41c7:;
  /* 123e41c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e41ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123e41cd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41d1 je 0x123e41db */
  if (C.zf) goto L_123e41db;
  /* 123e41d3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41d7 je 0x123e41e5 */
  if (C.zf) goto L_123e41e5;
  /* 123e41d9 jmp 0x123e41e9 */
  goto L_123e41e9;
L_123e41db:;
  /* 123e41db mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e41e5:;
  /* 123e41e5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_123e41e9:;
  /* 123e41e9 jmp 0x123e4460 */
  goto L_123e4460;
L_123e41ee:;
  /* 123e41ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e41f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123e41f4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41f8 je 0x123e4202 */
  if (C.zf) goto L_123e4202;
  /* 123e41fa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e41fe je 0x123e420c */
  if (C.zf) goto L_123e420c;
  /* 123e4200 jmp 0x123e4210 */
  goto L_123e4210;
L_123e4202:;
  /* 123e4202 mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e420c:;
  /* 123e420c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_123e4210:;
  /* 123e4210 jmp 0x123e4460 */
  goto L_123e4460;
L_123e4215:;
  /* 123e4215 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4218 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 123e421b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e421f je 0x123e4229 */
  if (C.zf) goto L_123e4229;
  /* 123e4221 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4225 je 0x123e4233 */
  if (C.zf) goto L_123e4233;
  /* 123e4227 jmp 0x123e4237 */
  goto L_123e4237;
L_123e4229:;
  /* 123e4229 mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e4233:;
  /* 123e4233 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_123e4237:;
  /* 123e4237 jmp 0x123e4460 */
  goto L_123e4460;
L_123e423c:;
  /* 123e423c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e423f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123e4242 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4246 je 0x123e4250 */
  if (C.zf) goto L_123e4250;
  /* 123e4248 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e424c je 0x123e425a */
  if (C.zf) goto L_123e425a;
  /* 123e424e jmp 0x123e425e */
  goto L_123e425e;
L_123e4250:;
  /* 123e4250 mov dword ptr [0x12402b48], 1 */
  w32((uint32_t)(0x12402b48), (0x1u));
L_123e425a:;
  /* 123e425a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_123e425e:;
  /* 123e425e jmp 0x123e4460 */
  goto L_123e4460;
L_123e4263:;
  /* 123e4263 push 0x123fee74 */
  push32((uint32_t)(0x123fee74u));
  /* 123e4268 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e426b push ecx */
  push32((uint32_t)(ECX));
  /* 123e426c call 0x123e4ac0 */
  push32(0x123e4271u); f_123e4ac0();
  /* 123e4271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e4276 jne 0x123e4283 */
  if (!C.zf) goto L_123e4283;
  /* 123e4278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e427b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e427e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e4281 jmp 0x123e42a1 */
  goto L_123e42a1;
L_123e4283:;
  /* 123e4283 push 0x123fee70 */
  push32((uint32_t)(0x123fee70u));
  /* 123e4288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e428b push eax */
  push32((uint32_t)(EAX));
  /* 123e428c call 0x123e4ac0 */
  push32(0x123e4291u); f_123e4ac0();
  /* 123e4291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e4296 jne 0x123e42a1 */
  if (!C.zf) goto L_123e42a1;
  /* 123e4298 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e429b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e429e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123e42a1:;
  /* 123e42a1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 123e42a5 jmp 0x123e4460 */
  goto L_123e4460;
L_123e42aa:;
  /* 123e42aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e42ad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e42b1 jg 0x123e42c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e42c1;
  /* 123e42b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e42b6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 123e42bc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123e42bf jmp 0x123e42cd */
  goto L_123e42cd;
L_123e42c1:;
  /* 123e42c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e42c4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 123e42ca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123e42cd:;
  /* 123e42cd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e42d1 jle 0x123e4374 */
  if ((C.zf||C.sf!=C.of)) goto L_123e4374;
  /* 123e42d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e42da cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e42dd jbe 0x123e4374 */
  if ((C.cf||C.zf)) goto L_123e4374;
  /* 123e42e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e42e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e42e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e42ea mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e42f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e42f2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e42f6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123e42fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e42fe je 0x123e4337 */
  if (C.zf) goto L_123e4337;
  /* 123e4300 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4303 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4306 jbe 0x123e4337 */
  if ((C.cf||C.zf)) goto L_123e4337;
  /* 123e4308 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e430b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e430d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e4310 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e4312 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123e4314 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4317 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e4319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e431c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e431f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e4321 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e4324 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4327 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123e432a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e432d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e432f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4332 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4335 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123e4337:;
  /* 123e4337 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e433a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e433c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e433f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4341 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e4343 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4346 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e4348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e434b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e434e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e4350 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e4353 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4356 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123e4359 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e435c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e435e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4361 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4364 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e4366 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4369 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e436c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123e436f jmp 0x123e42cd */
  goto L_123e42cd;
L_123e4374:;
  /* 123e4374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4377 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e437a jmp 0x123e4096 */
  goto L_123e4096;
L_123e437f:;
  /* 123e437f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4382 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123e4385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e4387 je 0x123e4452 */
  if (C.zf) goto L_123e4452;
  /* 123e438d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4390 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4393 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123e4396:;
  /* 123e4396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4399 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e439c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e439e je 0x123e4450 */
  if (C.zf) goto L_123e4450;
  /* 123e43a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e43a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e43aa je 0x123e4450 */
  if (C.zf) goto L_123e4450;
  /* 123e43b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e43b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e43b6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e43b9 jne 0x123e43c9 */
  if (!C.zf) goto L_123e43c9;
  /* 123e43bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e43be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e43c1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123e43c4 jmp 0x123e4450 */
  goto L_123e4450;
L_123e43c9:;
  /* 123e43c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e43cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e43ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e43d0 mov edx, dword ptr [0x12400c98] */
  EDX = (r32((uint32_t)(0x12400c98)));
  /* 123e43d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e43d8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123e43dc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123e43e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e43e3 je 0x123e441c */
  if (C.zf) goto L_123e441c;
  /* 123e43e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e43e8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e43eb jbe 0x123e441c */
  if ((C.cf||C.zf)) goto L_123e441c;
  /* 123e43ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e43f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e43f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e43f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e43f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123e43f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e43fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e43fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4401 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4404 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123e4406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e440c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e440f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4412 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e4414 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4417 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e441a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123e441c:;
  /* 123e441c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e441f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e4421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4424 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e4426 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123e4428 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e442b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e442d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4430 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4433 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e4435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4438 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e443b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123e443e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4441 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e4443 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4446 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4449 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123e444b jmp 0x123e4396 */
  goto L_123e4396;
L_123e4450:;
  /* 123e4450 jmp 0x123e445b */
  goto L_123e445b;
L_123e4452:;
  /* 123e4452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4455 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4458 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123e445b:;
  /* 123e445b jmp 0x123e4096 */
  goto L_123e4096;
L_123e4460:;
  /* 123e4460 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e4464 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e4466 je 0x123e448c */
  if (C.zf) goto L_123e448c;
  /* 123e4468 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e446b push edx */
  push32((uint32_t)(EDX));
  /* 123e446c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e446f push eax */
  push32((uint32_t)(EAX));
  /* 123e4470 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4473 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4474 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e4477 push edx */
  push32((uint32_t)(EDX));
  /* 123e4478 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123e447b push eax */
  push32((uint32_t)(EAX));
  /* 123e447c call 0x123e38c0 */
  push32(0x123e4481u); f_123e38c0();
  /* 123e4481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4487 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123e448a jmp 0x123e4507 */
  goto L_123e4507;
L_123e448c:;
  /* 123e448c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e448f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4491 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4493 mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e4499 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e449b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e449f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123e44a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e44a7 je 0x123e44d8 */
  if (C.zf) goto L_123e44d8;
  /* 123e44a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e44ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e44b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e44b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e44b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e44ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e44bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e44c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e44c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e44c8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123e44cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e44ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e44d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e44d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e44d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123e44d8:;
  /* 123e44d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e44dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e44e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e44e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123e44e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e44e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e44ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e44ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123e44f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e44f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e44f7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e44fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e44fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e44ff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4502 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4505 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123e4507:;
  /* 123e4507 jmp 0x123e4096 */
  goto L_123e4096;
L_123e450c:;
  /* 123e450c mov esp, ebp */
  ESP = (EBP);
  /* 123e450e pop ebp */
  EBP = (pop32());
  /* 123e450f ret  */
  ESPCHK(0x123e4090u, _esp0);
  ESP += 4; return;
}

/* FUN_100145b0 @ 0x123e45b0 (650 bytes, 178 insns) */
void f_123e45b0(void) {
  FTRACE(0x123e45b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e45b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e45b1 mov ebp, esp */
  EBP = (ESP);
  /* 123e45b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e45b9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e45bd jne 0x123e4719 */
  if (!C.zf) goto L_123e4719;
  /* 123e45c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e45c6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 123e45cc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 123e45d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e45d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e45dc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 123e45e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e45e8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123e45ee push edx */
  push32((uint32_t)(EDX));
  /* 123e45ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e45f2 push eax */
  push32((uint32_t)(EAX));
  /* 123e45f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e45f6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e45f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e45fa push edx */
  push32((uint32_t)(EDX));
  /* 123e45fb call 0x123e59d0 */
  push32(0x123e4600u); f_123e59d0();
  /* 123e4600 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4603 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e4606 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e460a jne 0x123e469f */
  if (!C.zf) goto L_123e469f;
  /* 123e4610 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123e4616u);
  /* 123e4616 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4619 je 0x123e4620 */
  if (C.zf) goto L_123e4620;
  /* 123e461b jmp 0x123e46fd */
  goto L_123e46fd;
L_123e4620:;
  /* 123e4620 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4622 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4624 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4629 push eax */
  push32((uint32_t)(EAX));
  /* 123e462a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e462d push ecx */
  push32((uint32_t)(ECX));
  /* 123e462e call 0x123e59d0 */
  push32(0x123e4633u); f_123e59d0();
  /* 123e4633 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4636 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 123e463c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4643 jne 0x123e464a */
  if (!C.zf) goto L_123e464a;
  /* 123e4645 jmp 0x123e46fd */
  goto L_123e46fd;
L_123e464a:;
  /* 123e464a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 123e464c push 0x123fee7c */
  push32((uint32_t)(0x123fee7cu));
  /* 123e4651 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e4653 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123e4659 push edx */
  push32((uint32_t)(EDX));
  /* 123e465a call 0x123d63f0 */
  push32(0x123e465fu); f_123d63f0();
  /* 123e465f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4662 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e4665 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4669 jne 0x123e4670 */
  if (!C.zf) goto L_123e4670;
  /* 123e466b jmp 0x123e46fd */
  goto L_123e46fd;
L_123e4670:;
  /* 123e4670 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123e4677 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4679 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 123e467f push eax */
  push32((uint32_t)(EAX));
  /* 123e4680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4683 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4684 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4687 push edx */
  push32((uint32_t)(EDX));
  /* 123e4688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e468b push eax */
  push32((uint32_t)(EAX));
  /* 123e468c call 0x123e59d0 */
  push32(0x123e4691u); f_123e59d0();
  /* 123e4691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4694 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e4697 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e469b jne 0x123e469f */
  if (!C.zf) goto L_123e469f;
  /* 123e469d jmp 0x123e46fd */
  goto L_123e46fd;
L_123e469f:;
  /* 123e469f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 123e46a1 push 0x123fee7c */
  push32((uint32_t)(0x123fee7cu));
  /* 123e46a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e46a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e46ab push ecx */
  push32((uint32_t)(ECX));
  /* 123e46ac call 0x123d63f0 */
  push32(0x123e46b1u); f_123d63f0();
  /* 123e46b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e46b4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 123e46ba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123e46bc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123e46c2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e46c5 jne 0x123e46c9 */
  if (!C.zf) goto L_123e46c9;
  /* 123e46c7 jmp 0x123e46fd */
  goto L_123e46fd;
L_123e46c9:;
  /* 123e46c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e46cc push ecx */
  push32((uint32_t)(ECX));
  /* 123e46cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e46d0 push edx */
  push32((uint32_t)(EDX));
  /* 123e46d1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123e46d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e46d9 push ecx */
  push32((uint32_t)(ECX));
  /* 123e46da call 0x123d9c10 */
  push32(0x123e46dfu); f_123d9c10();
  /* 123e46df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e46e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e46e6 je 0x123e46f6 */
  if (C.zf) goto L_123e46f6;
  /* 123e46e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e46ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e46ed push edx */
  push32((uint32_t)(EDX));
  /* 123e46ee call 0x123d6e80 */
  push32(0x123e46f3u); f_123d6e80();
  /* 123e46f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e46f6:;
  /* 123e46f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e46f8 jmp 0x123e4836 */
  goto L_123e4836;
L_123e46fd:;
  /* 123e46fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4701 je 0x123e4711 */
  if (C.zf) goto L_123e4711;
  /* 123e4703 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e4705 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4708 push eax */
  push32((uint32_t)(EAX));
  /* 123e4709 call 0x123d6e80 */
  push32(0x123e470eu); f_123d6e80();
  /* 123e470e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e4711:;
  /* 123e4711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e4714 jmp 0x123e4836 */
  goto L_123e4836;
L_123e4719:;
  /* 123e4719 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e471d jne 0x123e4833 */
  if (!C.zf) goto L_123e4833;
  /* 123e4723 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 123e472d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4730 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 123e4736 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4738 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 123e473e push edx */
  push32((uint32_t)(EDX));
  /* 123e473f push 0x12402a60 */
  push32((uint32_t)(0x12402a60u));
  /* 123e4744 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4747 push eax */
  push32((uint32_t)(EAX));
  /* 123e4748 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e474b push ecx */
  push32((uint32_t)(ECX));
  /* 123e474c call 0x123e5830 */
  push32(0x123e4751u); f_123e5830();
  /* 123e4751 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e4756 jne 0x123e4760 */
  if (!C.zf) goto L_123e4760;
  /* 123e4758 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e475b jmp 0x123e4836 */
  goto L_123e4836;
L_123e4760:;
  /* 123e4760 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e4766 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123e4769 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 123e4773 jmp 0x123e4784 */
  goto L_123e4784;
L_123e4775:;
  /* 123e4775 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e477b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e477e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_123e4784:;
  /* 123e4784 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e478b jge 0x123e482f */
  if ((C.sf==C.of)) goto L_123e482f;
  /* 123e4791 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4798 jle 0x123e47cb */
  if ((C.zf||C.sf!=C.of)) goto L_123e47cb;
  /* 123e479a push 4 */
  push32((uint32_t)(0x4u));
  /* 123e479c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e47a2 mov dl, byte ptr [ecx*2 + 0x12402a60] */
  DL = (r8((uint32_t)(ECX*2 + 0x12402a60)));
  /* 123e47a9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123e47af mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123e47b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e47ba push eax */
  push32((uint32_t)(EAX));
  /* 123e47bb call 0x123dc400 */
  push32(0x123e47c0u); f_123dc400();
  /* 123e47c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e47c3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 123e47c9 jmp 0x123e47fe */
  goto L_123e47fe;
L_123e47cb:;
  /* 123e47cb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e47d1 mov dl, byte ptr [ecx*2 + 0x12402a60] */
  DL = (r8((uint32_t)(ECX*2 + 0x12402a60)));
  /* 123e47d8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123e47de mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123e47e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e47e9 mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e47ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e47f1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e47f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123e47f8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_123e47fe:;
  /* 123e47fe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4805 je 0x123e4828 */
  if (C.zf) goto L_123e4828;
  /* 123e4807 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e480d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e4810 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e4813 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 123e481a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123e481e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e4824 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e4826 jmp 0x123e482a */
  goto L_123e482a;
L_123e4828:;
  /* 123e4828 jmp 0x123e482f */
  goto L_123e482f;
L_123e482a:;
  /* 123e482a jmp 0x123e4775 */
  goto L_123e4775;
L_123e482f:;
  /* 123e482f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4831 jmp 0x123e4836 */
  goto L_123e4836;
L_123e4833:;
  /* 123e4833 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123e4836:;
  /* 123e4836 mov esp, ebp */
  ESP = (EBP);
  /* 123e4838 pop ebp */
  EBP = (pop32());
  /* 123e4839 ret  */
  ESPCHK(0x123e45b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014840 @ 0x123e4840 (10 bytes, 5 insns) */
void f_123e4840(void) {
  FTRACE(0x123e4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4840 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4841 mov ebp, esp */
  EBP = (ESP);
  /* 123e4843 mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e4848 pop ebp */
  EBP = (pop32());
  /* 123e4849 ret  */
  ESPCHK(0x123e4840u, _esp0);
  ESP += 4; return;
}

/* FUN_10014850 @ 0x123e4850 (575 bytes, 196 insns) */
void f_123e4850(void) {
  FTRACE(0x123e4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4850 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4851 mov ebp, esp */
  EBP = (ESP);
  /* 123e4853 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e4855 push 0x123fee88 */
  push32((uint32_t)(0x123fee88u));
  /* 123e485a push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123e485f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123e4865 push eax */
  push32((uint32_t)(EAX));
  /* 123e4866 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123e486d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4870 push ebx */
  push32((uint32_t)(EBX));
  /* 123e4871 push esi */
  push32((uint32_t)(ESI));
  /* 123e4872 push edi */
  push32((uint32_t)(EDI));
  /* 123e4873 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e4876 cmp dword ptr [0x12402a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e487d jne 0x123e48ce */
  if (!C.zf) goto L_123e48ce;
  /* 123e487f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 123e4882 push eax */
  push32((uint32_t)(EAX));
  /* 123e4883 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e4885 push 0x123fe5b8 */
  push32((uint32_t)(0x123fe5b8u));
  /* 123e488a push 1 */
  push32((uint32_t)(0x1u));
  /* 123e488c call dword ptr [0x124052d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d8))), 0x123e4892u);
  /* 123e4892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e4894 je 0x123e48a2 */
  if (C.zf) goto L_123e48a2;
  /* 123e4896 mov dword ptr [0x12402a6c], 1 */
  w32((uint32_t)(0x12402a6c), (0x1u));
  /* 123e48a0 jmp 0x123e48ce */
  goto L_123e48ce;
L_123e48a2:;
  /* 123e48a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 123e48a5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e48a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e48a8 push 0x123fe5b4 */
  push32((uint32_t)(0x123fe5b4u));
  /* 123e48ad push 1 */
  push32((uint32_t)(0x1u));
  /* 123e48af push 0 */
  push32((uint32_t)(0x0u));
  /* 123e48b1 call dword ptr [0x124052e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e8))), 0x123e48b7u);
  /* 123e48b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e48b9 je 0x123e48c7 */
  if (C.zf) goto L_123e48c7;
  /* 123e48bb mov dword ptr [0x12402a6c], 2 */
  w32((uint32_t)(0x12402a6c), (0x2u));
  /* 123e48c5 jmp 0x123e48ce */
  goto L_123e48ce;
L_123e48c7:;
  /* 123e48c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e48c9 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e48ce:;
  /* 123e48ce cmp dword ptr [0x12402a6c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402a6c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e48d5 jne 0x123e48f2 */
  if (!C.zf) goto L_123e48f2;
  /* 123e48d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e48da push edx */
  push32((uint32_t)(EDX));
  /* 123e48db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e48de push eax */
  push32((uint32_t)(EAX));
  /* 123e48df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e48e2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e48e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e48e6 push edx */
  push32((uint32_t)(EDX));
  /* 123e48e7 call dword ptr [0x124052d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d8))), 0x123e48edu);
  /* 123e48ed jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e48f2:;
  /* 123e48f2 cmp dword ptr [0x12402a6c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12402a6c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e48f9 jne 0x123e4aa7 */
  if (!C.zf) goto L_123e4aa7;
  /* 123e48ff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4903 jne 0x123e490d */
  if (!C.zf) goto L_123e490d;
  /* 123e4905 mov eax, dword ptr [0x124029e0] */
  EAX = (r32((uint32_t)(0x124029e0)));
  /* 123e490a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_123e490d:;
  /* 123e490d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e490f push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4911 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4913 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4918 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4919 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e491c push edx */
  push32((uint32_t)(EDX));
  /* 123e491d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e4922 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e4925 push eax */
  push32((uint32_t)(EAX));
  /* 123e4926 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e492cu);
  /* 123e492c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123e492f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4933 jne 0x123e493c */
  if (!C.zf) goto L_123e493c;
  /* 123e4935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4937 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e493c:;
  /* 123e493c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e4943 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e4946 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4949 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e494b call 0x123d9590 */
  push32(0x123e4950u); f_123d9590();
  /* 123e4950 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 123e4953 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e4956 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e4959 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123e495c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e495f push edx */
  push32((uint32_t)(EDX));
  /* 123e4960 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4962 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e4965 push eax */
  push32((uint32_t)(EAX));
  /* 123e4966 call 0x123da160 */
  push32(0x123e496bu); f_123da160();
  /* 123e496b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e496e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e4975 jmp 0x123e498e */
  goto L_123e498e;
  /* 123e4977 mov eax, 1 */
  EAX = (0x1u);
  /* 123e497c ret  */
  ESPCHK(0x123e4850u, _esp0);
  ESP += 4; return;
  /* 123e497d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e4980 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 123e4987 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e498e:;
  /* 123e498e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4992 jne 0x123e499b */
  if (!C.zf) goto L_123e499b;
  /* 123e4994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4996 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e499b:;
  /* 123e499b push 0 */
  push32((uint32_t)(0x0u));
  /* 123e499d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e499f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e49a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e49a3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e49a6 push edx */
  push32((uint32_t)(EDX));
  /* 123e49a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e49aa push eax */
  push32((uint32_t)(EAX));
  /* 123e49ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e49ae push ecx */
  push32((uint32_t)(ECX));
  /* 123e49af push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e49b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e49b7 push edx */
  push32((uint32_t)(EDX));
  /* 123e49b8 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e49beu);
  /* 123e49be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e49c0 jne 0x123e49c9 */
  if (!C.zf) goto L_123e49c9;
  /* 123e49c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e49c4 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e49c9:;
  /* 123e49c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123e49d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e49d3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 123e49d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e49da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e49dc call 0x123d9590 */
  push32(0x123e49e1u); f_123d9590();
  /* 123e49e1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 123e49e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e49e7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123e49ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123e49ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e49f4 jmp 0x123e4a0d */
  goto L_123e4a0d;
  /* 123e49f6 mov eax, 1 */
  EAX = (0x1u);
  /* 123e49fb ret  */
  ESPCHK(0x123e4850u, _esp0);
  ESP += 4; return;
  /* 123e49fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e49ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123e4a06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e4a0d:;
  /* 123e4a0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4a11 jne 0x123e4a1a */
  if (!C.zf) goto L_123e4a1a;
  /* 123e4a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4a15 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e4a1a:;
  /* 123e4a1a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4a1e jne 0x123e4a29 */
  if (!C.zf) goto L_123e4a29;
  /* 123e4a20 mov edx, dword ptr [0x124029d0] */
  EDX = (r32((uint32_t)(0x124029d0)));
  /* 123e4a26 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_123e4a29:;
  /* 123e4a29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4a2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a2f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 123e4a35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4a38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a3b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 123e4a42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a45 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4a46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e4a49 push edx */
  push32((uint32_t)(EDX));
  /* 123e4a4a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e4a4d push eax */
  push32((uint32_t)(EAX));
  /* 123e4a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4a51 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4a52 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e4a55 push edx */
  push32((uint32_t)(EDX));
  /* 123e4a56 call dword ptr [0x124052e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e8))), 0x123e4a5cu);
  /* 123e4a5c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123e4a5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4a62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4a67 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 123e4a6c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4a72 je 0x123e4a88 */
  if (C.zf) goto L_123e4a88;
  /* 123e4a74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4a77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4a7c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e4a80 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4a86 je 0x123e4a8c */
  if (C.zf) goto L_123e4a8c;
L_123e4a88:;
  /* 123e4a88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4a8a jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e4a8c:;
  /* 123e4a8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4a8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e4a91 push eax */
  push32((uint32_t)(EAX));
  /* 123e4a92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e4a95 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4a96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e4a99 push edx */
  push32((uint32_t)(EDX));
  /* 123e4a9a call 0x123de2e0 */
  push32(0x123e4a9fu); f_123de2e0();
  /* 123e4a9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4aa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e4aa5 jmp 0x123e4aa9 */
  goto L_123e4aa9;
L_123e4aa7:;
  /* 123e4aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e4aa9:;
  /* 123e4aa9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 123e4aac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e4aaf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123e4ab6 pop edi */
  EDI = (pop32());
  /* 123e4ab7 pop esi */
  ESI = (pop32());
  /* 123e4ab8 pop ebx */
  EBX = (pop32());
  /* 123e4ab9 mov esp, ebp */
  ESP = (EBP);
  /* 123e4abb pop ebp */
  EBP = (pop32());
  /* 123e4abc ret  */
  ESPCHK(0x123e4850u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x123e4ac0 (208 bytes, 85 insns) */
void f_123e4ac0(void) {
  FTRACE(0x123e4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 123e4ac3 push edi */
  push32((uint32_t)(EDI));
  /* 123e4ac4 push esi */
  push32((uint32_t)(ESI));
  /* 123e4ac5 push ebx */
  push32((uint32_t)(EBX));
  /* 123e4ac6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123e4ac9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4acc lea eax, [0x124029c8] */
  EAX = ((uint32_t)(0x124029c8));
  /* 123e4ad2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4ad6 jne 0x123e4b13 */
  if (!C.zf) goto L_123e4b13;
  /* 123e4ad8 mov al, 0xff */
  AL = (0xffu);
  /* 123e4ada mov edi, edi */
  EDI = (EDI);
L_123e4adc:;
  /* 123e4adc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e4ade je 0x123e4b0e */
  if (C.zf) goto L_123e4b0e;
  /* 123e4ae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123e4ae2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e4ae3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 123e4ae5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123e4ae6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4ae8 je 0x123e4adc */
  if (C.zf) goto L_123e4adc;
  /* 123e4aea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123e4aec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4aee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123e4af0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123e4af3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e4af5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e4af7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 123e4af9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123e4afb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4afd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123e4aff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123e4b02 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e4b04 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e4b06 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4b08 je 0x123e4adc */
  if (C.zf) goto L_123e4adc;
  /* 123e4b0a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123e4b0c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_123e4b0e:;
  /* 123e4b0e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 123e4b11 jmp 0x123e4b8b */
  goto L_123e4b8b;
L_123e4b13:;
  /* 123e4b13 lock inc dword ptr [0x12402b5c] */
  x86_unimpl("lock inc @ 0x123e4b13");
  /* 123e4b1a cmp dword ptr [0x12402b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4b21 jg 0x123e4b27 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e4b27;
  /* 123e4b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4b25 jmp 0x123e4b3c */
  goto L_123e4b3c;
L_123e4b27:;
  /* 123e4b27 lock dec dword ptr [0x12402b5c] */
  x86_unimpl("lock dec @ 0x123e4b27");
  /* 123e4b2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e4b30 call 0x123d9df0 */
  push32(0x123e4b35u); f_123d9df0();
  /* 123e4b35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_123e4b3c:;
  /* 123e4b3c mov eax, 0xff */
  EAX = (0xffu);
  /* 123e4b41 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123e4b43 nop  */
  /* nop */
L_123e4b44:;
  /* 123e4b44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e4b46 je 0x123e4b6f */
  if (C.zf) goto L_123e4b6f;
  /* 123e4b48 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123e4b4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e4b4b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 123e4b4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123e4b4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4b50 je 0x123e4b44 */
  if (C.zf) goto L_123e4b44;
  /* 123e4b52 push eax */
  push32((uint32_t)(EAX));
  /* 123e4b53 push ebx */
  push32((uint32_t)(EBX));
  /* 123e4b54 call 0x123e5c30 */
  push32(0x123e4b59u); f_123e5c30();
  /* 123e4b59 mov ebx, eax */
  EBX = (EAX);
  /* 123e4b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4b5e call 0x123e5c30 */
  push32(0x123e4b63u); f_123e5c30();
  /* 123e4b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4b66 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4b68 je 0x123e4b44 */
  if (C.zf) goto L_123e4b44;
  /* 123e4b6a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4b6c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_123e4b6f:;
  /* 123e4b6f mov ebx, eax */
  EBX = (EAX);
  /* 123e4b71 pop eax */
  EAX = (pop32());
  /* 123e4b72 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4b74 jne 0x123e4b7f */
  if (!C.zf) goto L_123e4b7f;
  /* 123e4b76 lock dec dword ptr [0x12402b5c] */
  x86_unimpl("lock dec @ 0x123e4b76");
  /* 123e4b7d jmp 0x123e4b89 */
  goto L_123e4b89;
L_123e4b7f:;
  /* 123e4b7f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e4b81 call 0x123d9e90 */
  push32(0x123e4b86u); f_123d9e90();
  /* 123e4b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e4b89:;
  /* 123e4b89 mov eax, ebx */
  EAX = (EBX);
L_123e4b8b:;
  /* 123e4b8b pop ebx */
  EBX = (pop32());
  /* 123e4b8c pop esi */
  ESI = (pop32());
  /* 123e4b8d pop edi */
  EDI = (pop32());
  /* 123e4b8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123e4b8f ret  */
  ESPCHK(0x123e4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b90 @ 0x123e4b90 (257 bytes, 103 insns) */
void f_123e4b90(void) {
  FTRACE(0x123e4b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4b90 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4b91 mov ebp, esp */
  EBP = (ESP);
  /* 123e4b93 push edi */
  push32((uint32_t)(EDI));
  /* 123e4b94 push esi */
  push32((uint32_t)(ESI));
  /* 123e4b95 push ebx */
  push32((uint32_t)(EBX));
  /* 123e4b96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e4b99 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4b9b je 0x123e4c8a */
  if (C.zf) goto L_123e4c8a;
  /* 123e4ba1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4ba4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 123e4ba7 lea eax, [0x124029c8] */
  EAX = ((uint32_t)(0x124029c8));
  /* 123e4bad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4bb1 jne 0x123e4c01 */
  if (!C.zf) goto L_123e4c01;
  /* 123e4bb3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 123e4bb5 mov bl, 0x5a */
  BL = (0x5au);
  /* 123e4bb7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 123e4bb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123e4bbc:;
  /* 123e4bbc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 123e4bbe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123e4bc0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 123e4bc2 je 0x123e4be5 */
  if (C.zf) goto L_123e4be5;
  /* 123e4bc4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e4bc6 je 0x123e4be5 */
  if (C.zf) goto L_123e4be5;
  /* 123e4bc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e4bc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123e4bca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4bcc jb 0x123e4bd4 */
  if (C.cf) goto L_123e4bd4;
  /* 123e4bce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4bd0 ja 0x123e4bd4 */
  if ((!C.cf&&!C.zf)) goto L_123e4bd4;
  /* 123e4bd2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_123e4bd4:;
  /* 123e4bd4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4bd6 jb 0x123e4bde */
  if (C.cf) goto L_123e4bde;
  /* 123e4bd8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4bda ja 0x123e4bde */
  if ((!C.cf&&!C.zf)) goto L_123e4bde;
  /* 123e4bdc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_123e4bde:;
  /* 123e4bde cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4be0 jne 0x123e4bef */
  if (!C.zf) goto L_123e4bef;
  /* 123e4be2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123e4be3 jne 0x123e4bbc */
  if (!C.zf) goto L_123e4bbc;
L_123e4be5:;
  /* 123e4be5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4be7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e4be9 je 0x123e4c8a */
  if (C.zf) goto L_123e4c8a;
L_123e4bef:;
  /* 123e4bef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 123e4bf4 jb 0x123e4c8a */
  if (C.cf) goto L_123e4c8a;
  /* 123e4bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e4bfc jmp 0x123e4c8a */
  goto L_123e4c8a;
L_123e4c01:;
  /* 123e4c01 lock inc dword ptr [0x12402b5c] */
  x86_unimpl("lock inc @ 0x123e4c01");
  /* 123e4c08 cmp dword ptr [0x12402b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4c0f jg 0x123e4c15 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e4c15;
  /* 123e4c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4c13 jmp 0x123e4c2e */
  goto L_123e4c2e;
L_123e4c15:;
  /* 123e4c15 lock dec dword ptr [0x12402b5c] */
  x86_unimpl("lock dec @ 0x123e4c15");
  /* 123e4c1c mov ebx, ecx */
  EBX = (ECX);
  /* 123e4c1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e4c20 call 0x123d9df0 */
  push32(0x123e4c25u); f_123d9df0();
  /* 123e4c25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 123e4c2c mov ecx, ebx */
  ECX = (EBX);
L_123e4c2e:;
  /* 123e4c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4c30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123e4c32 mov edi, edi */
  EDI = (EDI);
L_123e4c34:;
  /* 123e4c34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123e4c36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4c38 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 123e4c3a je 0x123e4c5f */
  if (C.zf) goto L_123e4c5f;
  /* 123e4c3c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123e4c3e je 0x123e4c5f */
  if (C.zf) goto L_123e4c5f;
  /* 123e4c40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e4c41 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123e4c42 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4c43 push eax */
  push32((uint32_t)(EAX));
  /* 123e4c44 push ebx */
  push32((uint32_t)(EBX));
  /* 123e4c45 call 0x123e5c30 */
  push32(0x123e4c4au); f_123e5c30();
  /* 123e4c4a mov ebx, eax */
  EBX = (EAX);
  /* 123e4c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4c4f call 0x123e5c30 */
  push32(0x123e4c54u); f_123e5c30();
  /* 123e4c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4c57 pop ecx */
  ECX = (pop32());
  /* 123e4c58 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4c5a jne 0x123e4c65 */
  if (!C.zf) goto L_123e4c65;
  /* 123e4c5c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123e4c5d jne 0x123e4c34 */
  if (!C.zf) goto L_123e4c34;
L_123e4c5f:;
  /* 123e4c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4c61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4c63 je 0x123e4c6e */
  if (C.zf) goto L_123e4c6e;
L_123e4c65:;
  /* 123e4c65 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 123e4c6a jb 0x123e4c6e */
  if (C.cf) goto L_123e4c6e;
  /* 123e4c6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_123e4c6e:;
  /* 123e4c6e pop eax */
  EAX = (pop32());
  /* 123e4c6f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4c71 jne 0x123e4c7c */
  if (!C.zf) goto L_123e4c7c;
  /* 123e4c73 lock dec dword ptr [0x12402b5c] */
  x86_unimpl("lock dec @ 0x123e4c73");
  /* 123e4c7a jmp 0x123e4c8a */
  goto L_123e4c8a;
L_123e4c7c:;
  /* 123e4c7c mov ebx, ecx */
  EBX = (ECX);
  /* 123e4c7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e4c80 call 0x123d9e90 */
  push32(0x123e4c85u); f_123d9e90();
  /* 123e4c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4c88 mov ecx, ebx */
  ECX = (EBX);
L_123e4c8a:;
  /* 123e4c8a mov eax, ecx */
  EAX = (ECX);
  /* 123e4c8c pop ebx */
  EBX = (pop32());
  /* 123e4c8d pop esi */
  ESI = (pop32());
  /* 123e4c8e pop edi */
  EDI = (pop32());
  /* 123e4c8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123e4c90 ret  */
  ESPCHK(0x123e4b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ca0 @ 0x123e4ca0 (255 bytes, 88 insns) */
void f_123e4ca0(void) {
  FTRACE(0x123e4ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4ca1 mov ebp, esp */
  EBP = (ESP);
  /* 123e4ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_123e4ca6:;
  /* 123e4ca6 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4cad jle 0x123e4cc6 */
  if ((C.zf||C.sf!=C.of)) goto L_123e4cc6;
  /* 123e4caf push 8 */
  push32((uint32_t)(0x8u));
  /* 123e4cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4cb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4cb6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e4cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4cb9 call 0x123dc400 */
  push32(0x123e4cbeu); f_123dc400();
  /* 123e4cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4cc1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123e4cc4 jmp 0x123e4cdf */
  goto L_123e4cdf;
L_123e4cc6:;
  /* 123e4cc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4cc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4ccb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4ccd mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e4cd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4cd5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e4cd9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123e4cdc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e4cdf:;
  /* 123e4cdf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4ce3 je 0x123e4cf0 */
  if (C.zf) goto L_123e4cf0;
  /* 123e4ce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4ce8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4ceb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e4cee jmp 0x123e4ca6 */
  goto L_123e4ca6;
L_123e4cf0:;
  /* 123e4cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4cf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4cf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e4cf7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e4cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4cfd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4d00 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e4d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4d06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e4d09 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4d0d je 0x123e4d15 */
  if (C.zf) goto L_123e4d15;
  /* 123e4d0f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4d13 jne 0x123e4d28 */
  if (!C.zf) goto L_123e4d28;
L_123e4d15:;
  /* 123e4d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4d18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4d1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4d1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e4d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4d22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4d25 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123e4d28:;
  /* 123e4d28 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123e4d2f:;
  /* 123e4d2f cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4d36 jle 0x123e4d4b */
  if ((C.zf||C.sf!=C.of)) goto L_123e4d4b;
  /* 123e4d38 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e4d3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4d3d push edx */
  push32((uint32_t)(EDX));
  /* 123e4d3e call 0x123dc400 */
  push32(0x123e4d43u); f_123dc400();
  /* 123e4d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4d46 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e4d49 jmp 0x123e4d60 */
  goto L_123e4d60;
L_123e4d4b:;
  /* 123e4d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4d4e mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e4d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4d56 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e4d5a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123e4d5d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123e4d60:;
  /* 123e4d60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4d64 je 0x123e4d8b */
  if (C.zf) goto L_123e4d8b;
  /* 123e4d66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4d69 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e4d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4d6f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 123e4d73 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e4d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4d79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4d7b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e4d7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e4d80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4d83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4d86 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123e4d89 jmp 0x123e4d2f */
  goto L_123e4d2f;
L_123e4d8b:;
  /* 123e4d8b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4d8f jne 0x123e4d98 */
  if (!C.zf) goto L_123e4d98;
  /* 123e4d91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4d94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e4d96 jmp 0x123e4d9b */
  goto L_123e4d9b;
L_123e4d98:;
  /* 123e4d98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123e4d9b:;
  /* 123e4d9b mov esp, ebp */
  ESP = (EBP);
  /* 123e4d9d pop ebp */
  EBP = (pop32());
  /* 123e4d9e ret  */
  ESPCHK(0x123e4ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014da0 @ 0x123e4da0 (17 bytes, 8 insns) */
void f_123e4da0(void) {
  FTRACE(0x123e4da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4da0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4da1 mov ebp, esp */
  EBP = (ESP);
  /* 123e4da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4da6 push eax */
  push32((uint32_t)(EAX));
  /* 123e4da7 call 0x123e4ca0 */
  push32(0x123e4dacu); f_123e4ca0();
  /* 123e4dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4daf pop ebp */
  EBP = (pop32());
  /* 123e4db0 ret  */
  ESPCHK(0x123e4da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014dc0 @ 0x123e4dc0 (297 bytes, 106 insns) */
void f_123e4dc0(void) {
  FTRACE(0x123e4dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4dc1 mov ebp, esp */
  EBP = (ESP);
  /* 123e4dc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4dc6 push esi */
  push32((uint32_t)(ESI));
L_123e4dc7:;
  /* 123e4dc7 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4dce jle 0x123e4de7 */
  if ((C.zf||C.sf!=C.of)) goto L_123e4de7;
  /* 123e4dd0 push 8 */
  push32((uint32_t)(0x8u));
  /* 123e4dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4dd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e4dd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e4dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4dda call 0x123dc400 */
  push32(0x123e4ddfu); f_123dc400();
  /* 123e4ddf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4de2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e4de5 jmp 0x123e4e00 */
  goto L_123e4e00;
L_123e4de7:;
  /* 123e4de7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4dec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4dee mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e4df4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4df6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e4dfa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123e4dfd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123e4e00:;
  /* 123e4e00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4e04 je 0x123e4e11 */
  if (C.zf) goto L_123e4e11;
  /* 123e4e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4e09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4e0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e4e0f jmp 0x123e4dc7 */
  goto L_123e4dc7;
L_123e4e11:;
  /* 123e4e11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e4e18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e4e1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e4e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4e27 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123e4e2a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4e2e je 0x123e4e36 */
  if (C.zf) goto L_123e4e36;
  /* 123e4e30 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4e34 jne 0x123e4e49 */
  if (!C.zf) goto L_123e4e49;
L_123e4e36:;
  /* 123e4e36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4e3b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4e3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e4e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4e43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4e46 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123e4e49:;
  /* 123e4e49 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123e4e50 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123e4e57:;
  /* 123e4e57 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4e5e jle 0x123e4e73 */
  if ((C.zf||C.sf!=C.of)) goto L_123e4e73;
  /* 123e4e60 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e4e62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4e65 push edx */
  push32((uint32_t)(EDX));
  /* 123e4e66 call 0x123dc400 */
  push32(0x123e4e6bu); f_123dc400();
  /* 123e4e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4e6e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123e4e71 jmp 0x123e4e88 */
  goto L_123e4e88;
L_123e4e73:;
  /* 123e4e73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4e76 mov ecx, dword ptr [0x12400c98] */
  ECX = (r32((uint32_t)(0x12400c98)));
  /* 123e4e7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4e7e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123e4e82 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123e4e85 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_123e4e88:;
  /* 123e4e88 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4e8c je 0x123e4ec9 */
  if (C.zf) goto L_123e4ec9;
  /* 123e4e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 123e4e90 push 0xa */
  push32((uint32_t)(0xau));
  /* 123e4e92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4e95 push eax */
  push32((uint32_t)(EAX));
  /* 123e4e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4e99 push ecx */
  push32((uint32_t)(ECX));
  /* 123e4e9a call 0x123e5d60 */
  push32(0x123e4e9fu); f_123e5d60();
  /* 123e4e9f mov ecx, eax */
  ECX = (EAX);
  /* 123e4ea1 mov esi, edx */
  ESI = (EDX);
  /* 123e4ea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e4ea6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4ea9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e4eaa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4eac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4eae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e4eb1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 123e4eb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e4eb9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e4ebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e4ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e4ec1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4ec4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123e4ec7 jmp 0x123e4e57 */
  goto L_123e4e57;
L_123e4ec9:;
  /* 123e4ec9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4ecd jne 0x123e4ede */
  if (!C.zf) goto L_123e4ede;
  /* 123e4ecf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4ed2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e4ed4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e4ed7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4eda neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e4edc jmp 0x123e4ee4 */
  goto L_123e4ee4;
L_123e4ede:;
  /* 123e4ede mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e4ee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_123e4ee4:;
  /* 123e4ee4 pop esi */
  ESI = (pop32());
  /* 123e4ee5 mov esp, ebp */
  ESP = (EBP);
  /* 123e4ee7 pop ebp */
  EBP = (pop32());
  /* 123e4ee8 ret  */
  ESPCHK(0x123e4dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ef0 @ 0x123e4ef0 (61 bytes, 18 insns) */
void f_123e4ef0(void) {
  FTRACE(0x123e4ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4ef1 mov ebp, esp */
  EBP = (ESP);
  /* 123e4ef3 cmp dword ptr [0x12402b28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4efa jne 0x123e4f2b */
  if (!C.zf) goto L_123e4f2b;
  /* 123e4efc push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e4efe call 0x123d9df0 */
  push32(0x123e4f03u); f_123d9df0();
  /* 123e4f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f06 cmp dword ptr [0x12402b28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4f0d jne 0x123e4f21 */
  if (!C.zf) goto L_123e4f21;
  /* 123e4f0f call 0x123e4f50 */
  push32(0x123e4f14u); f_123e4f50();
  /* 123e4f14 mov eax, dword ptr [0x12402b28] */
  EAX = (r32((uint32_t)(0x12402b28)));
  /* 123e4f19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f1c mov dword ptr [0x12402b28], eax */
  w32((uint32_t)(0x12402b28), (EAX));
L_123e4f21:;
  /* 123e4f21 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e4f23 call 0x123d9e90 */
  push32(0x123e4f28u); f_123d9e90();
  /* 123e4f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e4f2b:;
  /* 123e4f2b pop ebp */
  EBP = (pop32());
  /* 123e4f2c ret  */
  ESPCHK(0x123e4ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x123e4f30 (30 bytes, 11 insns) */
void f_123e4f30(void) {
  FTRACE(0x123e4f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4f30 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4f31 mov ebp, esp */
  EBP = (ESP);
  /* 123e4f33 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e4f35 call 0x123d9df0 */
  push32(0x123e4f3au); f_123d9df0();
  /* 123e4f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f3d call 0x123e4f50 */
  push32(0x123e4f42u); f_123e4f50();
  /* 123e4f42 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e4f44 call 0x123d9e90 */
  push32(0x123e4f49u); f_123d9e90();
  /* 123e4f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f4c pop ebp */
  EBP = (pop32());
  /* 123e4f4d ret  */
  ESPCHK(0x123e4f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f50 @ 0x123e4f50 (939 bytes, 266 insns) */
void f_123e4f50(void) {
  FTRACE(0x123e4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 123e4f51 mov ebp, esp */
  EBP = (ESP);
  /* 123e4f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e4f56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e4f5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e4f5f call 0x123d9df0 */
  push32(0x123e4f64u); f_123d9df0();
  /* 123e4f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f67 mov dword ptr [0x12402a70], 0 */
  w32((uint32_t)(0x12402a70), (0x0u));
  /* 123e4f71 mov dword ptr [0x12401e38], 0xffffffff */
  w32((uint32_t)(0x12401e38), (0xffffffffu));
  /* 123e4f7b mov eax, dword ptr [0x12401e38] */
  EAX = (r32((uint32_t)(0x12401e38)));
  /* 123e4f80 mov dword ptr [0x12401e28], eax */
  w32((uint32_t)(0x12401e28), (EAX));
  /* 123e4f85 push 0x123feee8 */
  push32((uint32_t)(0x123feee8u));
  /* 123e4f8a call 0x123e5dd0 */
  push32(0x123e4f8fu); f_123e5dd0();
  /* 123e4f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4f92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e4f95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4f99 jne 0x123e50d3 */
  if (!C.zf) goto L_123e50d3;
  /* 123e4f9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e4fa1 call 0x123d9e90 */
  push32(0x123e4fa6u); f_123d9e90();
  /* 123e4fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4fa9 push 0x12402a78 */
  push32((uint32_t)(0x12402a78u));
  /* 123e4fae call dword ptr [0x1240529c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240529c))), 0x123e4fb4u);
  /* 123e4fb4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e4fb7 je 0x123e50ce */
  if (C.zf) goto L_123e50ce;
  /* 123e4fbd mov dword ptr [0x12402a70], 1 */
  w32((uint32_t)(0x12402a70), (0x1u));
  /* 123e4fc7 mov ecx, dword ptr [0x12402a78] */
  ECX = (r32((uint32_t)(0x12402a78)));
  /* 123e4fcd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e4fd0 mov dword ptr [0x12401d90], ecx */
  w32((uint32_t)(0x12401d90), (ECX));
  /* 123e4fd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4fd8 mov dx, word ptr [0x12402abe] */
  DX = (r16((uint32_t)(0x12402abe)));
  /* 123e4fdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e4fe1 je 0x123e4ff9 */
  if (C.zf) goto L_123e4ff9;
  /* 123e4fe3 mov eax, dword ptr [0x12402acc] */
  EAX = (r32((uint32_t)(0x12402acc)));
  /* 123e4fe8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e4feb mov ecx, dword ptr [0x12401d90] */
  ECX = (r32((uint32_t)(0x12401d90)));
  /* 123e4ff1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e4ff3 mov dword ptr [0x12401d90], ecx */
  w32((uint32_t)(0x12401d90), (ECX));
L_123e4ff9:;
  /* 123e4ff9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e4ffb mov dx, word ptr [0x12402b12] */
  DX = (r16((uint32_t)(0x12402b12)));
  /* 123e5002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e5004 je 0x123e502e */
  if (C.zf) goto L_123e502e;
  /* 123e5006 cmp dword ptr [0x12402b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e500d je 0x123e502e */
  if (C.zf) goto L_123e502e;
  /* 123e500f mov dword ptr [0x12401d94], 1 */
  w32((uint32_t)(0x12401d94), (0x1u));
  /* 123e5019 mov eax, dword ptr [0x12402b20] */
  EAX = (r32((uint32_t)(0x12402b20)));
  /* 123e501e sub eax, dword ptr [0x12402acc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12402acc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5024 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e5027 mov dword ptr [0x12401d98], eax */
  w32((uint32_t)(0x12401d98), (EAX));
  /* 123e502c jmp 0x123e5042 */
  goto L_123e5042;
L_123e502e:;
  /* 123e502e mov dword ptr [0x12401d94], 0 */
  w32((uint32_t)(0x12401d94), (0x0u));
  /* 123e5038 mov dword ptr [0x12401d98], 0 */
  w32((uint32_t)(0x12401d98), (0x0u));
L_123e5042:;
  /* 123e5042 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123e5045 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5046 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5048 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 123e504a mov edx, dword ptr [0x12401e1c] */
  EDX = (r32((uint32_t)(0x12401e1c)));
  /* 123e5050 push edx */
  push32((uint32_t)(EDX));
  /* 123e5051 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5053 push 0x12402a7c */
  push32((uint32_t)(0x12402a7cu));
  /* 123e5058 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e505d mov eax, dword ptr [0x124029e0] */
  EAX = (r32((uint32_t)(0x124029e0)));
  /* 123e5062 push eax */
  push32((uint32_t)(EAX));
  /* 123e5063 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e5069u);
  /* 123e5069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e506b je 0x123e507f */
  if (C.zf) goto L_123e507f;
  /* 123e506d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5071 jne 0x123e507f */
  if (!C.zf) goto L_123e507f;
  /* 123e5073 mov ecx, dword ptr [0x12401e1c] */
  ECX = (r32((uint32_t)(0x12401e1c)));
  /* 123e5079 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 123e507d jmp 0x123e5088 */
  goto L_123e5088;
L_123e507f:;
  /* 123e507f mov edx, dword ptr [0x12401e1c] */
  EDX = (r32((uint32_t)(0x12401e1c)));
  /* 123e5085 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123e5088:;
  /* 123e5088 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123e508b push eax */
  push32((uint32_t)(EAX));
  /* 123e508c push 0 */
  push32((uint32_t)(0x0u));
  /* 123e508e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 123e5090 mov ecx, dword ptr [0x12401e20] */
  ECX = (r32((uint32_t)(0x12401e20)));
  /* 123e5096 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5097 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5099 push 0x12402ad0 */
  push32((uint32_t)(0x12402ad0u));
  /* 123e509e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e50a3 mov edx, dword ptr [0x124029e0] */
  EDX = (r32((uint32_t)(0x124029e0)));
  /* 123e50a9 push edx */
  push32((uint32_t)(EDX));
  /* 123e50aa call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e50b0u);
  /* 123e50b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e50b2 je 0x123e50c5 */
  if (C.zf) goto L_123e50c5;
  /* 123e50b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e50b8 jne 0x123e50c5 */
  if (!C.zf) goto L_123e50c5;
  /* 123e50ba mov eax, dword ptr [0x12401e20] */
  EAX = (r32((uint32_t)(0x12401e20)));
  /* 123e50bf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 123e50c3 jmp 0x123e50ce */
  goto L_123e50ce;
L_123e50c5:;
  /* 123e50c5 mov ecx, dword ptr [0x12401e20] */
  ECX = (r32((uint32_t)(0x12401e20)));
  /* 123e50cb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_123e50ce:;
  /* 123e50ce jmp 0x123e52f7 */
  goto L_123e52f7;
L_123e50d3:;
  /* 123e50d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e50d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e50d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e50db je 0x123e50fd */
  if (C.zf) goto L_123e50fd;
  /* 123e50dd cmp dword ptr [0x12402b24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e50e4 je 0x123e510c */
  if (C.zf) goto L_123e510c;
  /* 123e50e6 mov ecx, dword ptr [0x12402b24] */
  ECX = (r32((uint32_t)(0x12402b24)));
  /* 123e50ec push ecx */
  push32((uint32_t)(ECX));
  /* 123e50ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e50f0 push edx */
  push32((uint32_t)(EDX));
  /* 123e50f1 call 0x123e2080 */
  push32(0x123e50f6u); f_123e2080();
  /* 123e50f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e50f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e50fb jne 0x123e510c */
  if (!C.zf) goto L_123e510c;
L_123e50fd:;
  /* 123e50fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e50ff call 0x123d9e90 */
  push32(0x123e5104u); f_123d9e90();
  /* 123e5104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5107 jmp 0x123e52f7 */
  goto L_123e52f7;
L_123e510c:;
  /* 123e510c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e510e mov eax, dword ptr [0x12402b24] */
  EAX = (r32((uint32_t)(0x12402b24)));
  /* 123e5113 push eax */
  push32((uint32_t)(EAX));
  /* 123e5114 call 0x123d6e80 */
  push32(0x123e5119u); f_123d6e80();
  /* 123e5119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e511c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 123e5121 push 0x123feee0 */
  push32((uint32_t)(0x123feee0u));
  /* 123e5126 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e5128 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e512b push ecx */
  push32((uint32_t)(ECX));
  /* 123e512c call 0x123d9220 */
  push32(0x123e5131u); f_123d9220();
  /* 123e5131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5137 push eax */
  push32((uint32_t)(EAX));
  /* 123e5138 call 0x123d63f0 */
  push32(0x123e513du); f_123d63f0();
  /* 123e513d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5140 mov dword ptr [0x12402b24], eax */
  w32((uint32_t)(0x12402b24), (EAX));
  /* 123e5145 cmp dword ptr [0x12402b24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e514c jne 0x123e515d */
  if (!C.zf) goto L_123e515d;
  /* 123e514e push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e5150 call 0x123d9e90 */
  push32(0x123e5155u); f_123d9e90();
  /* 123e5155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5158 jmp 0x123e52f7 */
  goto L_123e52f7;
L_123e515d:;
  /* 123e515d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5160 push edx */
  push32((uint32_t)(EDX));
  /* 123e5161 mov eax, dword ptr [0x12402b24] */
  EAX = (r32((uint32_t)(0x12402b24)));
  /* 123e5166 push eax */
  push32((uint32_t)(EAX));
  /* 123e5167 call 0x123d93a0 */
  push32(0x123e516cu); f_123d93a0();
  /* 123e516c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e516f push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e5171 call 0x123d9e90 */
  push32(0x123e5176u); f_123d9e90();
  /* 123e5176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5179 push 3 */
  push32((uint32_t)(0x3u));
  /* 123e517b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e517e push ecx */
  push32((uint32_t)(ECX));
  /* 123e517f mov edx, dword ptr [0x12401e1c] */
  EDX = (r32((uint32_t)(0x12401e1c)));
  /* 123e5185 push edx */
  push32((uint32_t)(EDX));
  /* 123e5186 call 0x123d9c10 */
  push32(0x123e518bu); f_123d9c10();
  /* 123e518b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e518e mov eax, dword ptr [0x12401e1c] */
  EAX = (r32((uint32_t)(0x12401e1c)));
  /* 123e5193 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 123e5197 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e519a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e519d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e51a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e51a6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e51a9 jne 0x123e51bd */
  if (!C.zf) goto L_123e51bd;
  /* 123e51ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e51ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e51b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e51b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e51ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123e51bd:;
  /* 123e51bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51c0 push eax */
  push32((uint32_t)(EAX));
  /* 123e51c1 call 0x123e4ca0 */
  push32(0x123e51c6u); f_123e4ca0();
  /* 123e51c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e51c9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e51cf mov dword ptr [0x12401d90], eax */
  w32((uint32_t)(0x12401d90), (EAX));
L_123e51d4:;
  /* 123e51d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e51da cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e51dd je 0x123e51f5 */
  if (C.zf) goto L_123e51f5;
  /* 123e51df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51e2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e51e5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e51e8 jl 0x123e5200 */
  if ((C.sf!=C.of)) goto L_123e5200;
  /* 123e51ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e51f0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e51f3 jg 0x123e5200 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e5200;
L_123e51f5:;
  /* 123e51f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e51f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e51fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e51fe jmp 0x123e51d4 */
  goto L_123e51d4;
L_123e5200:;
  /* 123e5200 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5203 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e5206 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5209 jne 0x123e52a5 */
  if (!C.zf) goto L_123e52a5;
  /* 123e520f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5215 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e5218 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e521b push edx */
  push32((uint32_t)(EDX));
  /* 123e521c call 0x123e4ca0 */
  push32(0x123e5221u); f_123e4ca0();
  /* 123e5221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5224 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e5227 mov ecx, dword ptr [0x12401d90] */
  ECX = (r32((uint32_t)(0x12401d90)));
  /* 123e522d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e522f mov dword ptr [0x12401d90], ecx */
  w32((uint32_t)(0x12401d90), (ECX));
L_123e5235:;
  /* 123e5235 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5238 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e523b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e523e jl 0x123e5256 */
  if ((C.sf!=C.of)) goto L_123e5256;
  /* 123e5240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5243 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e5246 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5249 jg 0x123e5256 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e5256;
  /* 123e524b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e524e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5251 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e5254 jmp 0x123e5235 */
  goto L_123e5235;
L_123e5256:;
  /* 123e5256 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5259 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e525c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e525f jne 0x123e52a5 */
  if (!C.zf) goto L_123e52a5;
  /* 123e5261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5264 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5267 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e526a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e526d push ecx */
  push32((uint32_t)(ECX));
  /* 123e526e call 0x123e4ca0 */
  push32(0x123e5273u); f_123e4ca0();
  /* 123e5273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5276 mov edx, dword ptr [0x12401d90] */
  EDX = (r32((uint32_t)(0x12401d90)));
  /* 123e527c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e527e mov dword ptr [0x12401d90], edx */
  w32((uint32_t)(0x12401d90), (EDX));
L_123e5284:;
  /* 123e5284 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5287 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e528a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e528d jl 0x123e52a5 */
  if ((C.sf!=C.of)) goto L_123e52a5;
  /* 123e528f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5292 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e5295 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5298 jg 0x123e52a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e52a5;
  /* 123e529a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e529d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e52a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e52a3 jmp 0x123e5284 */
  goto L_123e5284;
L_123e52a5:;
  /* 123e52a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e52a9 je 0x123e52b9 */
  if (C.zf) goto L_123e52b9;
  /* 123e52ab mov edx, dword ptr [0x12401d90] */
  EDX = (r32((uint32_t)(0x12401d90)));
  /* 123e52b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e52b3 mov dword ptr [0x12401d90], edx */
  w32((uint32_t)(0x12401d90), (EDX));
L_123e52b9:;
  /* 123e52b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e52bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e52bf mov dword ptr [0x12401d94], ecx */
  w32((uint32_t)(0x12401d94), (ECX));
  /* 123e52c5 cmp dword ptr [0x12401d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12401d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e52cc je 0x123e52ee */
  if (C.zf) goto L_123e52ee;
  /* 123e52ce push 3 */
  push32((uint32_t)(0x3u));
  /* 123e52d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e52d3 push edx */
  push32((uint32_t)(EDX));
  /* 123e52d4 mov eax, dword ptr [0x12401e20] */
  EAX = (r32((uint32_t)(0x12401e20)));
  /* 123e52d9 push eax */
  push32((uint32_t)(EAX));
  /* 123e52da call 0x123d9c10 */
  push32(0x123e52dfu); f_123d9c10();
  /* 123e52df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e52e2 mov ecx, dword ptr [0x12401e20] */
  ECX = (r32((uint32_t)(0x12401e20)));
  /* 123e52e8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 123e52ec jmp 0x123e52f7 */
  goto L_123e52f7;
L_123e52ee:;
  /* 123e52ee mov edx, dword ptr [0x12401e20] */
  EDX = (r32((uint32_t)(0x12401e20)));
  /* 123e52f4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123e52f7:;
  /* 123e52f7 mov esp, ebp */
  ESP = (EBP);
  /* 123e52f9 pop ebp */
  EBP = (pop32());
  /* 123e52fa ret  */
  ESPCHK(0x123e4f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015300 @ 0x123e5300 (46 bytes, 18 insns) */
void f_123e5300(void) {
  FTRACE(0x123e5300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5300 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5301 mov ebp, esp */
  EBP = (ESP);
  /* 123e5303 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5304 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e5306 call 0x123d9df0 */
  push32(0x123e530bu); f_123d9df0();
  /* 123e530b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e530e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5311 push eax */
  push32((uint32_t)(EAX));
  /* 123e5312 call 0x123e5330 */
  push32(0x123e5317u); f_123e5330();
  /* 123e5317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e531a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e531d push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e531f call 0x123d9e90 */
  push32(0x123e5324u); f_123d9e90();
  /* 123e5324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e532a mov esp, ebp */
  ESP = (EBP);
  /* 123e532c pop ebp */
  EBP = (pop32());
  /* 123e532d ret  */
  ESPCHK(0x123e5300u, _esp0);
  ESP += 4; return;
}

/* FUN_10015330 @ 0x123e5330 (762 bytes, 246 insns) */
void f_123e5330(void) {
  FTRACE(0x123e5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5330 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5331 mov ebp, esp */
  EBP = (ESP);
  /* 123e5333 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5334 cmp dword ptr [0x12401d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12401d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e533b jne 0x123e5344 */
  if (!C.zf) goto L_123e5344;
  /* 123e533d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e533f jmp 0x123e5626 */
  goto L_123e5626;
L_123e5344:;
  /* 123e5344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5347 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123e534a cmp ecx, dword ptr [0x12401e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12401e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5350 jne 0x123e5364 */
  if (!C.zf) goto L_123e5364;
  /* 123e5352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5355 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e5358 cmp eax, dword ptr [0x12401e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12401e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e535e je 0x123e552b */
  if (C.zf) goto L_123e552b;
L_123e5364:;
  /* 123e5364 cmp dword ptr [0x12402a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e536b je 0x123e54e5 */
  if (C.zf) goto L_123e54e5;
  /* 123e5371 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e5373 mov cx, word ptr [0x12402b10] */
  CX = (r16((uint32_t)(0x12402b10)));
  /* 123e537a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e537c jne 0x123e53d9 */
  if (!C.zf) goto L_123e53d9;
  /* 123e537e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e5380 mov dx, word ptr [0x12402b1e] */
  DX = (r16((uint32_t)(0x12402b1e)));
  /* 123e5387 push edx */
  push32((uint32_t)(EDX));
  /* 123e5388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e538a mov ax, word ptr [0x12402b1c] */
  AX = (r16((uint32_t)(0x12402b1c)));
  /* 123e5390 push eax */
  push32((uint32_t)(EAX));
  /* 123e5391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e5393 mov cx, word ptr [0x12402b1a] */
  CX = (r16((uint32_t)(0x12402b1a)));
  /* 123e539a push ecx */
  push32((uint32_t)(ECX));
  /* 123e539b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e539d mov dx, word ptr [0x12402b18] */
  DX = (r16((uint32_t)(0x12402b18)));
  /* 123e53a4 push edx */
  push32((uint32_t)(EDX));
  /* 123e53a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e53a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e53a9 mov ax, word ptr [0x12402b14] */
  AX = (r16((uint32_t)(0x12402b14)));
  /* 123e53af push eax */
  push32((uint32_t)(EAX));
  /* 123e53b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e53b2 mov cx, word ptr [0x12402b16] */
  CX = (r16((uint32_t)(0x12402b16)));
  /* 123e53b9 push ecx */
  push32((uint32_t)(ECX));
  /* 123e53ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e53bc mov dx, word ptr [0x12402b12] */
  DX = (r16((uint32_t)(0x12402b12)));
  /* 123e53c3 push edx */
  push32((uint32_t)(EDX));
  /* 123e53c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e53c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123e53ca push ecx */
  push32((uint32_t)(ECX));
  /* 123e53cb push 1 */
  push32((uint32_t)(0x1u));
  /* 123e53cd push 1 */
  push32((uint32_t)(0x1u));
  /* 123e53cf call 0x123e5630 */
  push32(0x123e53d4u); f_123e5630();
  /* 123e53d4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e53d7 jmp 0x123e542a */
  goto L_123e542a;
L_123e53d9:;
  /* 123e53d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e53db mov dx, word ptr [0x12402b1e] */
  DX = (r16((uint32_t)(0x12402b1e)));
  /* 123e53e2 push edx */
  push32((uint32_t)(EDX));
  /* 123e53e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e53e5 mov ax, word ptr [0x12402b1c] */
  AX = (r16((uint32_t)(0x12402b1c)));
  /* 123e53eb push eax */
  push32((uint32_t)(EAX));
  /* 123e53ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e53ee mov cx, word ptr [0x12402b1a] */
  CX = (r16((uint32_t)(0x12402b1a)));
  /* 123e53f5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e53f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e53f8 mov dx, word ptr [0x12402b18] */
  DX = (r16((uint32_t)(0x12402b18)));
  /* 123e53ff push edx */
  push32((uint32_t)(EDX));
  /* 123e5400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5402 mov ax, word ptr [0x12402b16] */
  AX = (r16((uint32_t)(0x12402b16)));
  /* 123e5408 push eax */
  push32((uint32_t)(EAX));
  /* 123e5409 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e540b push 0 */
  push32((uint32_t)(0x0u));
  /* 123e540d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e540f mov cx, word ptr [0x12402b12] */
  CX = (r16((uint32_t)(0x12402b12)));
  /* 123e5416 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e541a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e541d push eax */
  push32((uint32_t)(EAX));
  /* 123e541e push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5420 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5422 call 0x123e5630 */
  push32(0x123e5427u); f_123e5630();
  /* 123e5427 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e542a:;
  /* 123e542a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e542c mov cx, word ptr [0x12402abc] */
  CX = (r16((uint32_t)(0x12402abc)));
  /* 123e5433 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e5435 jne 0x123e5492 */
  if (!C.zf) goto L_123e5492;
  /* 123e5437 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e5439 mov dx, word ptr [0x12402aca] */
  DX = (r16((uint32_t)(0x12402aca)));
  /* 123e5440 push edx */
  push32((uint32_t)(EDX));
  /* 123e5441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5443 mov ax, word ptr [0x12402ac8] */
  AX = (r16((uint32_t)(0x12402ac8)));
  /* 123e5449 push eax */
  push32((uint32_t)(EAX));
  /* 123e544a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e544c mov cx, word ptr [0x12402ac6] */
  CX = (r16((uint32_t)(0x12402ac6)));
  /* 123e5453 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e5456 mov dx, word ptr [0x12402ac4] */
  DX = (r16((uint32_t)(0x12402ac4)));
  /* 123e545d push edx */
  push32((uint32_t)(EDX));
  /* 123e545e push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5462 mov ax, word ptr [0x12402ac0] */
  AX = (r16((uint32_t)(0x12402ac0)));
  /* 123e5468 push eax */
  push32((uint32_t)(EAX));
  /* 123e5469 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e546b mov cx, word ptr [0x12402ac2] */
  CX = (r16((uint32_t)(0x12402ac2)));
  /* 123e5472 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5473 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e5475 mov dx, word ptr [0x12402abe] */
  DX = (r16((uint32_t)(0x12402abe)));
  /* 123e547c push edx */
  push32((uint32_t)(EDX));
  /* 123e547d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5480 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123e5483 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5484 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5486 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5488 call 0x123e5630 */
  push32(0x123e548du); f_123e5630();
  /* 123e548d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5490 jmp 0x123e54e3 */
  goto L_123e54e3;
L_123e5492:;
  /* 123e5492 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e5494 mov dx, word ptr [0x12402aca] */
  DX = (r16((uint32_t)(0x12402aca)));
  /* 123e549b push edx */
  push32((uint32_t)(EDX));
  /* 123e549c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e549e mov ax, word ptr [0x12402ac8] */
  AX = (r16((uint32_t)(0x12402ac8)));
  /* 123e54a4 push eax */
  push32((uint32_t)(EAX));
  /* 123e54a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e54a7 mov cx, word ptr [0x12402ac6] */
  CX = (r16((uint32_t)(0x12402ac6)));
  /* 123e54ae push ecx */
  push32((uint32_t)(ECX));
  /* 123e54af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e54b1 mov dx, word ptr [0x12402ac4] */
  DX = (r16((uint32_t)(0x12402ac4)));
  /* 123e54b8 push edx */
  push32((uint32_t)(EDX));
  /* 123e54b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e54bb mov ax, word ptr [0x12402ac2] */
  AX = (r16((uint32_t)(0x12402ac2)));
  /* 123e54c1 push eax */
  push32((uint32_t)(EAX));
  /* 123e54c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e54c8 mov cx, word ptr [0x12402abe] */
  CX = (r16((uint32_t)(0x12402abe)));
  /* 123e54cf push ecx */
  push32((uint32_t)(ECX));
  /* 123e54d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e54d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e54d6 push eax */
  push32((uint32_t)(EAX));
  /* 123e54d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54db call 0x123e5630 */
  push32(0x123e54e0u); f_123e5630();
  /* 123e54e0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e54e3:;
  /* 123e54e3 jmp 0x123e552b */
  goto L_123e552b;
L_123e54e5:;
  /* 123e54e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54eb push 2 */
  push32((uint32_t)(0x2u));
  /* 123e54ed push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54ef push 0 */
  push32((uint32_t)(0x0u));
  /* 123e54f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e54f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e54f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e54f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123e54fb push edx */
  push32((uint32_t)(EDX));
  /* 123e54fc push 1 */
  push32((uint32_t)(0x1u));
  /* 123e54fe push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5500 call 0x123e5630 */
  push32(0x123e5505u); f_123e5630();
  /* 123e5505 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5508 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e550a push 0 */
  push32((uint32_t)(0x0u));
  /* 123e550c push 0 */
  push32((uint32_t)(0x0u));
  /* 123e550e push 2 */
  push32((uint32_t)(0x2u));
  /* 123e5510 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5512 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5514 push 5 */
  push32((uint32_t)(0x5u));
  /* 123e5516 push 0xa */
  push32((uint32_t)(0xau));
  /* 123e5518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e551b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123e551e push ecx */
  push32((uint32_t)(ECX));
  /* 123e551f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5521 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5523 call 0x123e5630 */
  push32(0x123e5528u); f_123e5630();
  /* 123e5528 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e552b:;
  /* 123e552b mov edx, dword ptr [0x12401e2c] */
  EDX = (r32((uint32_t)(0x12401e2c)));
  /* 123e5531 cmp edx, dword ptr [0x12401e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12401e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5537 jge 0x123e5584 */
  if ((C.sf==C.of)) goto L_123e5584;
  /* 123e5539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e553c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e553f cmp ecx, dword ptr [0x12401e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12401e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5545 jl 0x123e5555 */
  if ((C.sf!=C.of)) goto L_123e5555;
  /* 123e5547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e554a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e554d cmp eax, dword ptr [0x12401e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12401e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5553 jle 0x123e555c */
  if ((C.zf||C.sf!=C.of)) goto L_123e555c;
L_123e5555:;
  /* 123e5555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5557 jmp 0x123e5626 */
  goto L_123e5626;
L_123e555c:;
  /* 123e555c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e555f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123e5562 cmp edx, dword ptr [0x12401e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12401e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5568 jle 0x123e5582 */
  if ((C.zf||C.sf!=C.of)) goto L_123e5582;
  /* 123e556a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e556d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e5570 cmp ecx, dword ptr [0x12401e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12401e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5576 jge 0x123e5582 */
  if ((C.sf==C.of)) goto L_123e5582;
  /* 123e5578 mov eax, 1 */
  EAX = (0x1u);
  /* 123e557d jmp 0x123e5626 */
  goto L_123e5626;
L_123e5582:;
  /* 123e5582 jmp 0x123e55c7 */
  goto L_123e55c7;
L_123e5584:;
  /* 123e5584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5587 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e558a cmp eax, dword ptr [0x12401e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12401e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5590 jl 0x123e55a0 */
  if ((C.sf!=C.of)) goto L_123e55a0;
  /* 123e5592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5595 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123e5598 cmp edx, dword ptr [0x12401e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12401e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e559e jle 0x123e55a7 */
  if ((C.zf||C.sf!=C.of)) goto L_123e55a7;
L_123e55a0:;
  /* 123e55a0 mov eax, 1 */
  EAX = (0x1u);
  /* 123e55a5 jmp 0x123e5626 */
  goto L_123e5626;
L_123e55a7:;
  /* 123e55a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55aa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e55ad cmp ecx, dword ptr [0x12401e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12401e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e55b3 jle 0x123e55c7 */
  if ((C.zf||C.sf!=C.of)) goto L_123e55c7;
  /* 123e55b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55b8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e55bb cmp eax, dword ptr [0x12401e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12401e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e55c1 jge 0x123e55c7 */
  if ((C.sf==C.of)) goto L_123e55c7;
  /* 123e55c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e55c5 jmp 0x123e5626 */
  goto L_123e5626;
L_123e55c7:;
  /* 123e55c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123e55cd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e55d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e55d5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e55d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55da mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123e55dd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e55e3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e55e5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e55eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e55ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e55f1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123e55f4 cmp edx, dword ptr [0x12401e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12401e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e55fa jne 0x123e5612 */
  if (!C.zf) goto L_123e5612;
  /* 123e55fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e55ff cmp eax, dword ptr [0x12401e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12401e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5605 jl 0x123e560e */
  if ((C.sf!=C.of)) goto L_123e560e;
  /* 123e5607 mov eax, 1 */
  EAX = (0x1u);
  /* 123e560c jmp 0x123e5626 */
  goto L_123e5626;
L_123e560e:;
  /* 123e560e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5610 jmp 0x123e5626 */
  goto L_123e5626;
L_123e5612:;
  /* 123e5612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5615 cmp ecx, dword ptr [0x12401e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12401e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e561b jge 0x123e5624 */
  if ((C.sf==C.of)) goto L_123e5624;
  /* 123e561d mov eax, 1 */
  EAX = (0x1u);
  /* 123e5622 jmp 0x123e5626 */
  goto L_123e5626;
L_123e5624:;
  /* 123e5624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e5626:;
  /* 123e5626 mov esp, ebp */
  ESP = (EBP);
  /* 123e5628 pop ebp */
  EBP = (pop32());
  /* 123e5629 ret  */
  ESPCHK(0x123e5330u, _esp0);
  ESP += 4; return;
}

/* FUN_10015630 @ 0x123e5630 (504 bytes, 145 insns) */
void f_123e5630(void) {
  FTRACE(0x123e5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5630 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5631 mov ebp, esp */
  EBP = (ESP);
  /* 123e5633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5636 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e563a jne 0x123e570c */
  if (!C.zf) goto L_123e570c;
  /* 123e5640 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5643 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123e5646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5648 jne 0x123e5659 */
  if (!C.zf) goto L_123e5659;
  /* 123e564a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e564d mov edx, dword ptr [ecx*4 + 0x12401e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12401e4c)));
  /* 123e5654 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123e5657 jmp 0x123e5666 */
  goto L_123e5666;
L_123e5659:;
  /* 123e5659 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e565c mov ecx, dword ptr [eax*4 + 0x12401e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12401e80)));
  /* 123e5663 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123e5666:;
  /* 123e5666 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5669 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e566c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e566f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5672 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5675 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e567b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e567e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5680 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5683 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5686 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 123e5689 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 123e568d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e568e mov ecx, 7 */
  ECX = (0x7u);
  /* 123e5693 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123e5695 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e5698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e569b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e569e jge 0x123e56b9 */
  if ((C.sf==C.of)) goto L_123e56b9;
  /* 123e56a0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e56a3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e56a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e56a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e56ac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e56af add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e56b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e56b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e56b7 jmp 0x123e56cd */
  goto L_123e56cd;
L_123e56b9:;
  /* 123e56b9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e56bc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e56bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e56c2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e56c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e56c8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e56ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e56cd:;
  /* 123e56cd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e56d1 jne 0x123e570a */
  if (!C.zf) goto L_123e570a;
  /* 123e56d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e56d6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 123e56d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e56db jne 0x123e56ec */
  if (!C.zf) goto L_123e56ec;
  /* 123e56dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e56e0 mov eax, dword ptr [edx*4 + 0x12401e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12401e50)));
  /* 123e56e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123e56ea jmp 0x123e56f9 */
  goto L_123e56f9;
L_123e56ec:;
  /* 123e56ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e56ef mov edx, dword ptr [ecx*4 + 0x12401e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12401e84)));
  /* 123e56f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e56f9:;
  /* 123e56f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e56fc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e56ff jle 0x123e570a */
  if ((C.zf||C.sf!=C.of)) goto L_123e570a;
  /* 123e5701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5704 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5707 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123e570a:;
  /* 123e570a jmp 0x123e5741 */
  goto L_123e5741;
L_123e570c:;
  /* 123e570c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e570f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123e5712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e5714 jne 0x123e5725 */
  if (!C.zf) goto L_123e5725;
  /* 123e5716 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e5719 mov ecx, dword ptr [eax*4 + 0x12401e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12401e4c)));
  /* 123e5720 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e5723 jmp 0x123e5732 */
  goto L_123e5732;
L_123e5725:;
  /* 123e5725 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e5728 mov eax, dword ptr [edx*4 + 0x12401e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12401e80)));
  /* 123e572f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_123e5732:;
  /* 123e5732 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e5735 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e5738 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e573b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e573e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123e5741:;
  /* 123e5741 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5745 jne 0x123e5781 */
  if (!C.zf) goto L_123e5781;
  /* 123e5747 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e574a mov dword ptr [0x12401e2c], eax */
  w32((uint32_t)(0x12401e2c), (EAX));
  /* 123e574f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 123e5752 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e5755 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 123e5758 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e575a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e575d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 123e5760 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5762 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e5768 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 123e576b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e576d mov dword ptr [0x12401e30], ecx */
  w32((uint32_t)(0x12401e30), (ECX));
  /* 123e5773 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5776 mov dword ptr [0x12401e28], edx */
  w32((uint32_t)(0x12401e28), (EDX));
  /* 123e577c jmp 0x123e5824 */
  goto L_123e5824;
L_123e5781:;
  /* 123e5781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5784 mov dword ptr [0x12401e3c], eax */
  w32((uint32_t)(0x12401e3c), (EAX));
  /* 123e5789 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 123e578c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e578f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 123e5792 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5794 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e5797 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 123e579a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e579c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e57a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 123e57a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e57a7 mov dword ptr [0x12401e40], ecx */
  w32((uint32_t)(0x12401e40), (ECX));
  /* 123e57ad mov edx, dword ptr [0x12401d98] */
  EDX = (r32((uint32_t)(0x12401d98)));
  /* 123e57b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e57b9 mov eax, dword ptr [0x12401e40] */
  EAX = (r32((uint32_t)(0x12401e40)));
  /* 123e57be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e57c0 mov dword ptr [0x12401e40], eax */
  w32((uint32_t)(0x12401e40), (EAX));
  /* 123e57c5 cmp dword ptr [0x12401e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12401e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e57cc jge 0x123e57f1 */
  if ((C.sf==C.of)) goto L_123e57f1;
  /* 123e57ce mov ecx, dword ptr [0x12401e40] */
  ECX = (r32((uint32_t)(0x12401e40)));
  /* 123e57d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e57da mov dword ptr [0x12401e40], ecx */
  w32((uint32_t)(0x12401e40), (ECX));
  /* 123e57e0 mov edx, dword ptr [0x12401e3c] */
  EDX = (r32((uint32_t)(0x12401e3c)));
  /* 123e57e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e57e9 mov dword ptr [0x12401e3c], edx */
  w32((uint32_t)(0x12401e3c), (EDX));
  /* 123e57ef jmp 0x123e581b */
  goto L_123e581b;
L_123e57f1:;
  /* 123e57f1 cmp dword ptr [0x12401e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12401e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e57fb jl 0x123e581b */
  if ((C.sf!=C.of)) goto L_123e581b;
  /* 123e57fd mov eax, dword ptr [0x12401e40] */
  EAX = (r32((uint32_t)(0x12401e40)));
  /* 123e5802 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5807 mov dword ptr [0x12401e40], eax */
  w32((uint32_t)(0x12401e40), (EAX));
  /* 123e580c mov ecx, dword ptr [0x12401e3c] */
  ECX = (r32((uint32_t)(0x12401e3c)));
  /* 123e5812 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5815 mov dword ptr [0x12401e3c], ecx */
  w32((uint32_t)(0x12401e3c), (ECX));
L_123e581b:;
  /* 123e581b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e581e mov dword ptr [0x12401e38], edx */
  w32((uint32_t)(0x12401e38), (EDX));
L_123e5824:;
  /* 123e5824 mov esp, ebp */
  ESP = (EBP);
  /* 123e5826 pop ebp */
  EBP = (pop32());
  /* 123e5827 ret  */
  ESPCHK(0x123e5630u, _esp0);
  ESP += 4; return;
}

/* FUN_10015830 @ 0x123e5830 (382 bytes, 135 insns) */
void f_123e5830(void) {
  FTRACE(0x123e5830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5830 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5831 mov ebp, esp */
  EBP = (ESP);
  /* 123e5833 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5835 push 0x123feef0 */
  push32((uint32_t)(0x123feef0u));
  /* 123e583a push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123e583f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123e5845 push eax */
  push32((uint32_t)(EAX));
  /* 123e5846 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123e584d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5850 push ebx */
  push32((uint32_t)(EBX));
  /* 123e5851 push esi */
  push32((uint32_t)(ESI));
  /* 123e5852 push edi */
  push32((uint32_t)(EDI));
  /* 123e5853 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e5856 cmp dword ptr [0x12402b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e585d jne 0x123e58a2 */
  if (!C.zf) goto L_123e58a2;
  /* 123e585f push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5861 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5863 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5865 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5867 call dword ptr [0x12405298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405298))), 0x123e586du);
  /* 123e586d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e586f je 0x123e587d */
  if (C.zf) goto L_123e587d;
  /* 123e5871 mov dword ptr [0x12402b2c], 1 */
  w32((uint32_t)(0x12402b2c), (0x1u));
  /* 123e587b jmp 0x123e58a2 */
  goto L_123e58a2;
L_123e587d:;
  /* 123e587d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e587f push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5881 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5883 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5885 call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e588bu);
  /* 123e588b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e588d je 0x123e589b */
  if (C.zf) goto L_123e589b;
  /* 123e588f mov dword ptr [0x12402b2c], 2 */
  w32((uint32_t)(0x12402b2c), (0x2u));
  /* 123e5899 jmp 0x123e58a2 */
  goto L_123e58a2;
L_123e589b:;
  /* 123e589b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e589d jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e58a2:;
  /* 123e58a2 cmp dword ptr [0x12402b2c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402b2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e58a9 jne 0x123e58c6 */
  if (!C.zf) goto L_123e58c6;
  /* 123e58ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e58ae push eax */
  push32((uint32_t)(EAX));
  /* 123e58af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e58b2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e58b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e58b6 push edx */
  push32((uint32_t)(EDX));
  /* 123e58b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e58ba push eax */
  push32((uint32_t)(EAX));
  /* 123e58bb call dword ptr [0x12405298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405298))), 0x123e58c1u);
  /* 123e58c1 jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e58c6:;
  /* 123e58c6 cmp dword ptr [0x12402b2c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12402b2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e58cd jne 0x123e59af */
  if (!C.zf) goto L_123e59af;
  /* 123e58d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e58d7 jne 0x123e58e2 */
  if (!C.zf) goto L_123e58e2;
  /* 123e58d9 mov ecx, dword ptr [0x124029e0] */
  ECX = (r32((uint32_t)(0x124029e0)));
  /* 123e58df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123e58e2:;
  /* 123e58e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e58e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e58e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e58e9 push edx */
  push32((uint32_t)(EDX));
  /* 123e58ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e58ed push eax */
  push32((uint32_t)(EAX));
  /* 123e58ee call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e58f4u);
  /* 123e58f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123e58f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e58fb jne 0x123e5904 */
  if (!C.zf) goto L_123e5904;
  /* 123e58fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e58ff jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e5904:;
  /* 123e5904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e590b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e590e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5911 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e5913 call 0x123d9590 */
  push32(0x123e5918u); f_123d9590();
  /* 123e5918 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 123e591b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e591e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e5921 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123e5924 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e592b jmp 0x123e5944 */
  goto L_123e5944;
  /* 123e592d mov eax, 1 */
  EAX = (0x1u);
  /* 123e5932 ret  */
  ESPCHK(0x123e5830u, _esp0);
  ESP += 4; return;
  /* 123e5933 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e5936 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123e593d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e5944:;
  /* 123e5944 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5948 jne 0x123e594e */
  if (!C.zf) goto L_123e594e;
  /* 123e594a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e594c jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e594e:;
  /* 123e594e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e5951 push edx */
  push32((uint32_t)(EDX));
  /* 123e5952 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e5955 push eax */
  push32((uint32_t)(EAX));
  /* 123e5956 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e5959 push ecx */
  push32((uint32_t)(ECX));
  /* 123e595a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e595d push edx */
  push32((uint32_t)(EDX));
  /* 123e595e call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e5964u);
  /* 123e5964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5966 jne 0x123e596c */
  if (!C.zf) goto L_123e596c;
  /* 123e5968 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e596a jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e596c:;
  /* 123e596c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5970 jne 0x123e598d */
  if (!C.zf) goto L_123e598d;
  /* 123e5972 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5974 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5976 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5978 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e597b push eax */
  push32((uint32_t)(EAX));
  /* 123e597c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e597e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e5981 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5982 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e5988u);
  /* 123e5988 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123e598b jmp 0x123e59aa */
  goto L_123e59aa;
L_123e598d:;
  /* 123e598d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e5990 push edx */
  push32((uint32_t)(EDX));
  /* 123e5991 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5994 push eax */
  push32((uint32_t)(EAX));
  /* 123e5995 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5997 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e599a push ecx */
  push32((uint32_t)(ECX));
  /* 123e599b push 1 */
  push32((uint32_t)(0x1u));
  /* 123e599d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e59a0 push edx */
  push32((uint32_t)(EDX));
  /* 123e59a1 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e59a7u);
  /* 123e59a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123e59aa:;
  /* 123e59aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e59ad jmp 0x123e59b1 */
  goto L_123e59b1;
L_123e59af:;
  /* 123e59af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e59b1:;
  /* 123e59b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 123e59b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e59b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123e59be pop edi */
  EDI = (pop32());
  /* 123e59bf pop esi */
  ESI = (pop32());
  /* 123e59c0 pop ebx */
  EBX = (pop32());
  /* 123e59c1 mov esp, ebp */
  ESP = (EBP);
  /* 123e59c3 pop ebp */
  EBP = (pop32());
  /* 123e59c4 ret  */
  ESPCHK(0x123e5830u, _esp0);
  ESP += 4; return;
}

/* FUN_100159d0 @ 0x123e59d0 (398 bytes, 140 insns) */
void f_123e59d0(void) {
  FTRACE(0x123e59d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e59d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e59d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e59d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e59d5 push 0x123fef00 */
  push32((uint32_t)(0x123fef00u));
  /* 123e59da push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123e59df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123e59e5 push eax */
  push32((uint32_t)(EAX));
  /* 123e59e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123e59ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e59f0 push ebx */
  push32((uint32_t)(EBX));
  /* 123e59f1 push esi */
  push32((uint32_t)(ESI));
  /* 123e59f2 push edi */
  push32((uint32_t)(EDI));
  /* 123e59f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e59f6 cmp dword ptr [0x12402b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e59fd jne 0x123e5a42 */
  if (!C.zf) goto L_123e5a42;
  /* 123e59ff push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a07 call dword ptr [0x12405298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405298))), 0x123e5a0du);
  /* 123e5a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5a0f je 0x123e5a1d */
  if (C.zf) goto L_123e5a1d;
  /* 123e5a11 mov dword ptr [0x12402b30], 1 */
  w32((uint32_t)(0x12402b30), (0x1u));
  /* 123e5a1b jmp 0x123e5a42 */
  goto L_123e5a42;
L_123e5a1d:;
  /* 123e5a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a25 call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e5a2bu);
  /* 123e5a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5a2d je 0x123e5a3b */
  if (C.zf) goto L_123e5a3b;
  /* 123e5a2f mov dword ptr [0x12402b30], 2 */
  w32((uint32_t)(0x12402b30), (0x2u));
  /* 123e5a39 jmp 0x123e5a42 */
  goto L_123e5a42;
L_123e5a3b:;
  /* 123e5a3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5a3d jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5a42:;
  /* 123e5a42 cmp dword ptr [0x12402b30], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12402b30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5a49 jne 0x123e5a66 */
  if (!C.zf) goto L_123e5a66;
  /* 123e5a4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e5a4e push eax */
  push32((uint32_t)(EAX));
  /* 123e5a4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5a52 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5a53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e5a56 push edx */
  push32((uint32_t)(EDX));
  /* 123e5a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5a5a push eax */
  push32((uint32_t)(EAX));
  /* 123e5a5b call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e5a61u);
  /* 123e5a61 jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5a66:;
  /* 123e5a66 cmp dword ptr [0x12402b30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402b30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5a6d jne 0x123e5b5f */
  if (!C.zf) goto L_123e5b5f;
  /* 123e5a73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5a77 jne 0x123e5a82 */
  if (!C.zf) goto L_123e5a82;
  /* 123e5a79 mov ecx, dword ptr [0x124029e0] */
  ECX = (r32((uint32_t)(0x124029e0)));
  /* 123e5a7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123e5a82:;
  /* 123e5a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5a86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e5a89 push edx */
  push32((uint32_t)(EDX));
  /* 123e5a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5a8d push eax */
  push32((uint32_t)(EAX));
  /* 123e5a8e call dword ptr [0x12405298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405298))), 0x123e5a94u);
  /* 123e5a94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123e5a97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5a9b jne 0x123e5aa4 */
  if (!C.zf) goto L_123e5aa4;
  /* 123e5a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5a9f jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5aa4:;
  /* 123e5aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e5aab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e5aae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e5ab0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5ab3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e5ab5 call 0x123d9590 */
  push32(0x123e5abau); f_123d9590();
  /* 123e5aba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 123e5abd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e5ac0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e5ac3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123e5ac6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e5acd jmp 0x123e5ae6 */
  goto L_123e5ae6;
  /* 123e5acf mov eax, 1 */
  EAX = (0x1u);
  /* 123e5ad4 ret  */
  ESPCHK(0x123e59d0u, _esp0);
  ESP += 4; return;
  /* 123e5ad5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e5ad8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123e5adf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e5ae6:;
  /* 123e5ae6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5aea jne 0x123e5af0 */
  if (!C.zf) goto L_123e5af0;
  /* 123e5aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5aee jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5af0:;
  /* 123e5af0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e5af3 push edx */
  push32((uint32_t)(EDX));
  /* 123e5af4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e5af7 push eax */
  push32((uint32_t)(EAX));
  /* 123e5af8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e5afb push ecx */
  push32((uint32_t)(ECX));
  /* 123e5afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5aff push edx */
  push32((uint32_t)(EDX));
  /* 123e5b00 call dword ptr [0x12405298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405298))), 0x123e5b06u);
  /* 123e5b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5b08 jne 0x123e5b0e */
  if (!C.zf) goto L_123e5b0e;
  /* 123e5b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5b0c jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5b0e:;
  /* 123e5b0e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5b12 jne 0x123e5b36 */
  if (!C.zf) goto L_123e5b36;
  /* 123e5b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b1c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5b1e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e5b21 push eax */
  push32((uint32_t)(EAX));
  /* 123e5b22 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e5b27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e5b2a push ecx */
  push32((uint32_t)(ECX));
  /* 123e5b2b call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e5b31u);
  /* 123e5b31 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123e5b34 jmp 0x123e5b5a */
  goto L_123e5b5a;
L_123e5b36:;
  /* 123e5b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5b3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e5b3d push edx */
  push32((uint32_t)(EDX));
  /* 123e5b3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5b41 push eax */
  push32((uint32_t)(EAX));
  /* 123e5b42 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5b44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e5b47 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5b48 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123e5b4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e5b50 push edx */
  push32((uint32_t)(EDX));
  /* 123e5b51 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e5b57u);
  /* 123e5b57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123e5b5a:;
  /* 123e5b5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e5b5d jmp 0x123e5b61 */
  goto L_123e5b61;
L_123e5b5f:;
  /* 123e5b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e5b61:;
  /* 123e5b61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 123e5b64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e5b67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123e5b6e pop edi */
  EDI = (pop32());
  /* 123e5b6f pop esi */
  ESI = (pop32());
  /* 123e5b70 pop ebx */
  EBX = (pop32());
  /* 123e5b71 mov esp, ebp */
  ESP = (EBP);
  /* 123e5b73 pop ebp */
  EBP = (pop32());
  /* 123e5b74 ret  */
  ESPCHK(0x123e59d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b80 @ 0x123e5b80 (11 bytes, 6 insns) */
void f_123e5b80(void) {
  FTRACE(0x123e5b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5b80 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5b81 mov ebp, esp */
  EBP = (ESP);
  /* 123e5b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5b86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5b89 pop ebp */
  EBP = (pop32());
  /* 123e5b8a ret  */
  ESPCHK(0x123e5b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x123e5b90 (147 bytes, 43 insns) */
void f_123e5b90(void) {
  FTRACE(0x123e5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5b91 mov ebp, esp */
  EBP = (ESP);
  /* 123e5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5b94 cmp dword ptr [0x124029d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5b9b jne 0x123e5bb7 */
  if (!C.zf) goto L_123e5bb7;
  /* 123e5b9d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5ba1 jl 0x123e5bb2 */
  if ((C.sf!=C.of)) goto L_123e5bb2;
  /* 123e5ba3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5ba7 jg 0x123e5bb2 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e5bb2;
  /* 123e5ba9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5bac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5baf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123e5bb2:;
  /* 123e5bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5bb5 jmp 0x123e5c1f */
  goto L_123e5c1f;
L_123e5bb7:;
  /* 123e5bb7 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e5bbc call dword ptr [0x12405330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405330))), 0x123e5bc2u);
  /* 123e5bc2 cmp dword ptr [0x12402b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5bc9 je 0x123e5be9 */
  if (C.zf) goto L_123e5be9;
  /* 123e5bcb push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e5bd0 call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123e5bd6u);
  /* 123e5bd6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e5bd8 call 0x123d9df0 */
  push32(0x123e5bddu); f_123d9df0();
  /* 123e5bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5be0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123e5be7 jmp 0x123e5bf0 */
  goto L_123e5bf0;
L_123e5be9:;
  /* 123e5be9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123e5bf0:;
  /* 123e5bf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5bf4 call 0x123e5c30 */
  push32(0x123e5bf9u); f_123e5c30();
  /* 123e5bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5bfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e5bff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c03 je 0x123e5c11 */
  if (C.zf) goto L_123e5c11;
  /* 123e5c05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e5c07 call 0x123d9e90 */
  push32(0x123e5c0cu); f_123d9e90();
  /* 123e5c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5c0f jmp 0x123e5c1c */
  goto L_123e5c1c;
L_123e5c11:;
  /* 123e5c11 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123e5c16 call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123e5c1cu);
L_123e5c1c:;
  /* 123e5c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_123e5c1f:;
  /* 123e5c1f mov esp, ebp */
  ESP = (EBP);
  /* 123e5c21 pop ebp */
  EBP = (pop32());
  /* 123e5c22 ret  */
  ESPCHK(0x123e5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c30 @ 0x123e5c30 (299 bytes, 91 insns) */
void f_123e5c30(void) {
  FTRACE(0x123e5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5c31 mov ebp, esp */
  EBP = (ESP);
  /* 123e5c33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5c36 cmp dword ptr [0x124029d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c3d jne 0x123e5c5c */
  if (!C.zf) goto L_123e5c5c;
  /* 123e5c3f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c43 jl 0x123e5c54 */
  if ((C.sf!=C.of)) goto L_123e5c54;
  /* 123e5c45 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c49 jg 0x123e5c54 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e5c54;
  /* 123e5c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5c4e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5c51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123e5c54:;
  /* 123e5c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5c57 jmp 0x123e5d57 */
  goto L_123e5d57;
L_123e5c5c:;
  /* 123e5c5c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c63 jge 0x123e5ca3 */
  if ((C.sf==C.of)) goto L_123e5ca3;
  /* 123e5c65 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c6c jle 0x123e5c81 */
  if ((C.zf||C.sf!=C.of)) goto L_123e5c81;
  /* 123e5c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5c70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5c73 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5c74 call 0x123dc400 */
  push32(0x123e5c79u); f_123dc400();
  /* 123e5c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5c7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123e5c7f jmp 0x123e5c95 */
  goto L_123e5c95;
L_123e5c81:;
  /* 123e5c81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5c84 mov eax, dword ptr [0x12400c98] */
  EAX = (r32((uint32_t)(0x12400c98)));
  /* 123e5c89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e5c8b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123e5c8f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123e5c92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123e5c95:;
  /* 123e5c95 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5c99 jne 0x123e5ca3 */
  if (!C.zf) goto L_123e5ca3;
  /* 123e5c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5c9e jmp 0x123e5d57 */
  goto L_123e5d57;
L_123e5ca3:;
  /* 123e5ca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5ca6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123e5ca9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e5caf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e5cb5 mov eax, dword ptr [0x12400c98] */
  EAX = (r32((uint32_t)(0x12400c98)));
  /* 123e5cba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e5cbc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123e5cc0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 123e5cc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e5cc8 je 0x123e5cec */
  if (C.zf) goto L_123e5cec;
  /* 123e5cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5ccd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123e5cd0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e5cd6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 123e5cd9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 123e5cdc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 123e5cdf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 123e5ce3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123e5cea jmp 0x123e5cfd */
  goto L_123e5cfd;
L_123e5cec:;
  /* 123e5cec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 123e5cef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 123e5cf2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 123e5cf6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_123e5cfd:;
  /* 123e5cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5cff push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5d01 push 3 */
  push32((uint32_t)(0x3u));
  /* 123e5d03 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123e5d06 push edx */
  push32((uint32_t)(EDX));
  /* 123e5d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5d0a push eax */
  push32((uint32_t)(EAX));
  /* 123e5d0b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123e5d0e push ecx */
  push32((uint32_t)(ECX));
  /* 123e5d0f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123e5d14 mov edx, dword ptr [0x124029d0] */
  EDX = (r32((uint32_t)(0x124029d0)));
  /* 123e5d1a push edx */
  push32((uint32_t)(EDX));
  /* 123e5d1b call 0x123de7e0 */
  push32(0x123e5d20u); f_123de7e0();
  /* 123e5d20 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e5d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5d2a jne 0x123e5d31 */
  if (!C.zf) goto L_123e5d31;
  /* 123e5d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5d2f jmp 0x123e5d57 */
  goto L_123e5d57;
L_123e5d31:;
  /* 123e5d31 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5d35 jne 0x123e5d41 */
  if (!C.zf) goto L_123e5d41;
  /* 123e5d37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5d3a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e5d3f jmp 0x123e5d57 */
  goto L_123e5d57;
L_123e5d41:;
  /* 123e5d41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5d44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e5d49 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 123e5d4c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123e5d52 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 123e5d55 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_123e5d57:;
  /* 123e5d57 mov esp, ebp */
  ESP = (EBP);
  /* 123e5d59 pop ebp */
  EBP = (pop32());
  /* 123e5d5a ret  */
  ESPCHK(0x123e5c30u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x123e5d60 (52 bytes, 19 insns) */
void f_123e5d60(void) {
  FTRACE(0x123e5d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5d60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123e5d64 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 123e5d68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e5d6a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123e5d6e jne 0x123e5d79 */
  if (!C.zf) goto L_123e5d79;
  /* 123e5d70 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 123e5d74 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123e5d76 ret 0x10 */
  ESPCHK(0x123e5d60u, _esp0);
  ESP += 20; return;
L_123e5d79:;
  /* 123e5d79 push ebx */
  push32((uint32_t)(EBX));
  /* 123e5d7a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123e5d7c mov ebx, eax */
  EBX = (EAX);
  /* 123e5d7e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123e5d82 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123e5d86 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5d88 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123e5d8c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123e5d8e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5d90 pop ebx */
  EBX = (pop32());
  /* 123e5d91 ret 0x10 */
  ESPCHK(0x123e5d60u, _esp0);
  ESP += 20; return;
}

/* FUN_10015da0 @ 0x123e5da0 (46 bytes, 18 insns) */
void f_123e5da0(void) {
  FTRACE(0x123e5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5da1 mov ebp, esp */
  EBP = (ESP);
  /* 123e5da3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5da4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e5da6 call 0x123d9df0 */
  push32(0x123e5dabu); f_123d9df0();
  /* 123e5dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5dae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5db1 push eax */
  push32((uint32_t)(EAX));
  /* 123e5db2 call 0x123e5dd0 */
  push32(0x123e5db7u); f_123e5dd0();
  /* 123e5db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5dba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e5dbd push 0xc */
  push32((uint32_t)(0xcu));
  /* 123e5dbf call 0x123d9e90 */
  push32(0x123e5dc4u); f_123d9e90();
  /* 123e5dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5dca mov esp, ebp */
  ESP = (EBP);
  /* 123e5dcc pop ebp */
  EBP = (pop32());
  /* 123e5dcd ret  */
  ESPCHK(0x123e5da0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x123e5dd0 (198 bytes, 69 insns) */
void f_123e5dd0(void) {
  FTRACE(0x123e5dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5dd1 mov ebp, esp */
  EBP = (ESP);
  /* 123e5dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5dd6 mov eax, dword ptr [0x124027f0] */
  EAX = (r32((uint32_t)(0x124027f0)));
  /* 123e5ddb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e5dde cmp dword ptr [0x124042e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5de5 jne 0x123e5dee */
  if (!C.zf) goto L_123e5dee;
  /* 123e5de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5de9 jmp 0x123e5e92 */
  goto L_123e5e92;
L_123e5dee:;
  /* 123e5dee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5df2 jne 0x123e5e16 */
  if (!C.zf) goto L_123e5e16;
  /* 123e5df4 cmp dword ptr [0x124027f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5dfb je 0x123e5e16 */
  if (C.zf) goto L_123e5e16;
  /* 123e5dfd call 0x123e5ef0 */
  push32(0x123e5e02u); f_123e5ef0();
  /* 123e5e02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5e04 je 0x123e5e0d */
  if (C.zf) goto L_123e5e0d;
  /* 123e5e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5e08 jmp 0x123e5e92 */
  goto L_123e5e92;
L_123e5e0d:;
  /* 123e5e0d mov ecx, dword ptr [0x124027f0] */
  ECX = (r32((uint32_t)(0x124027f0)));
  /* 123e5e13 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123e5e16:;
  /* 123e5e16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5e1a je 0x123e5e90 */
  if (C.zf) goto L_123e5e90;
  /* 123e5e1c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5e20 je 0x123e5e90 */
  if (C.zf) goto L_123e5e90;
  /* 123e5e22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5e25 push edx */
  push32((uint32_t)(EDX));
  /* 123e5e26 call 0x123d9220 */
  push32(0x123e5e2bu); f_123d9220();
  /* 123e5e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5e2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e5e31:;
  /* 123e5e31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e34 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5e37 je 0x123e5e90 */
  if (C.zf) goto L_123e5e90;
  /* 123e5e39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e3c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e5e3e push edx */
  push32((uint32_t)(EDX));
  /* 123e5e3f call 0x123d9220 */
  push32(0x123e5e44u); f_123d9220();
  /* 123e5e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5e47 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5e4a jbe 0x123e5e85 */
  if ((C.cf||C.zf)) goto L_123e5e85;
  /* 123e5e4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e5e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5e54 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 123e5e58 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5e5b jne 0x123e5e85 */
  if (!C.zf) goto L_123e5e85;
  /* 123e5e5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5e60 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5e64 push edx */
  push32((uint32_t)(EDX));
  /* 123e5e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e5e6a push ecx */
  push32((uint32_t)(ECX));
  /* 123e5e6b call 0x123e5ea0 */
  push32(0x123e5e70u); f_123e5ea0();
  /* 123e5e70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5e73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5e75 jne 0x123e5e85 */
  if (!C.zf) goto L_123e5e85;
  /* 123e5e77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e5e7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5e7f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 123e5e83 jmp 0x123e5e92 */
  goto L_123e5e92;
L_123e5e85:;
  /* 123e5e85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5e88 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5e8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e5e8e jmp 0x123e5e31 */
  goto L_123e5e31;
L_123e5e90:;
  /* 123e5e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e5e92:;
  /* 123e5e92 mov esp, ebp */
  ESP = (EBP);
  /* 123e5e94 pop ebp */
  EBP = (pop32());
  /* 123e5e95 ret  */
  ESPCHK(0x123e5dd0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x123e5ea0 (79 bytes, 32 insns) */
void f_123e5ea0(void) {
  FTRACE(0x123e5ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5ea1 mov ebp, esp */
  EBP = (ESP);
  /* 123e5ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5ea4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5ea8 jne 0x123e5eae */
  if (!C.zf) goto L_123e5eae;
  /* 123e5eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e5eac jmp 0x123e5eeb */
  goto L_123e5eeb;
L_123e5eae:;
  /* 123e5eae mov eax, dword ptr [0x12403ea4] */
  EAX = (r32((uint32_t)(0x12403ea4)));
  /* 123e5eb3 push eax */
  push32((uint32_t)(EAX));
  /* 123e5eb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5eb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e5ebb push edx */
  push32((uint32_t)(EDX));
  /* 123e5ebc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e5ebf push eax */
  push32((uint32_t)(EAX));
  /* 123e5ec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e5ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e5ec4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5ec6 mov edx, dword ptr [0x12404144] */
  EDX = (r32((uint32_t)(0x12404144)));
  /* 123e5ecc push edx */
  push32((uint32_t)(EDX));
  /* 123e5ecd call 0x123e5fa0 */
  push32(0x123e5ed2u); f_123e5fa0();
  /* 123e5ed2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5ed5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e5ed8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5edc jne 0x123e5ee5 */
  if (!C.zf) goto L_123e5ee5;
  /* 123e5ede mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 123e5ee3 jmp 0x123e5eeb */
  goto L_123e5eeb;
L_123e5ee5:;
  /* 123e5ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5ee8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_123e5eeb:;
  /* 123e5eeb mov esp, ebp */
  ESP = (EBP);
  /* 123e5eed pop ebp */
  EBP = (pop32());
  /* 123e5eee ret  */
  ESPCHK(0x123e5ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ef0 @ 0x123e5ef0 (174 bytes, 66 insns) */
void f_123e5ef0(void) {
  FTRACE(0x123e5ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5ef1 mov ebp, esp */
  EBP = (ESP);
  /* 123e5ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e5ef6 mov eax, dword ptr [0x124027f8] */
  EAX = (r32((uint32_t)(0x124027f8)));
  /* 123e5efb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e5efe:;
  /* 123e5efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5f01 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5f04 je 0x123e5f98 */
  if (C.zf) goto L_123e5f98;
  /* 123e5f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5f17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e5f19 push eax */
  push32((uint32_t)(EAX));
  /* 123e5f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5f1e call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e5f24u);
  /* 123e5f24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e5f27 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5f2b jne 0x123e5f32 */
  if (!C.zf) goto L_123e5f32;
  /* 123e5f2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e5f30 jmp 0x123e5f9a */
  goto L_123e5f9a;
L_123e5f32:;
  /* 123e5f32 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123e5f34 push 0x123fef0c */
  push32((uint32_t)(0x123fef0cu));
  /* 123e5f39 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e5f3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5f3e push ecx */
  push32((uint32_t)(ECX));
  /* 123e5f3f call 0x123d63f0 */
  push32(0x123e5f44u); f_123d63f0();
  /* 123e5f44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5f47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e5f4a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5f4e jne 0x123e5f55 */
  if (!C.zf) goto L_123e5f55;
  /* 123e5f50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e5f53 jmp 0x123e5f9a */
  goto L_123e5f9a;
L_123e5f55:;
  /* 123e5f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e5f5c push edx */
  push32((uint32_t)(EDX));
  /* 123e5f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5f60 push eax */
  push32((uint32_t)(EAX));
  /* 123e5f61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5f63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5f66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e5f68 push edx */
  push32((uint32_t)(EDX));
  /* 123e5f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5f6d call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123e5f73u);
  /* 123e5f73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5f75 jne 0x123e5f7c */
  if (!C.zf) goto L_123e5f7c;
  /* 123e5f77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e5f7a jmp 0x123e5f9a */
  goto L_123e5f9a;
L_123e5f7c:;
  /* 123e5f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5f7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e5f81 push eax */
  push32((uint32_t)(EAX));
  /* 123e5f82 call 0x123e63f0 */
  push32(0x123e5f87u); f_123e63f0();
  /* 123e5f87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e5f8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5f90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e5f93 jmp 0x123e5efe */
  goto L_123e5efe;
L_123e5f98:;
  /* 123e5f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e5f9a:;
  /* 123e5f9a mov esp, ebp */
  ESP = (EBP);
  /* 123e5f9c pop ebp */
  EBP = (pop32());
  /* 123e5f9d ret  */
  ESPCHK(0x123e5ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fa0 @ 0x123e5fa0 (970 bytes, 340 insns) */
void f_123e5fa0(void) {
  FTRACE(0x123e5fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e5fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e5fa1 mov ebp, esp */
  EBP = (ESP);
  /* 123e5fa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123e5fa5 push 0x123fef60 */
  push32((uint32_t)(0x123fef60u));
  /* 123e5faa push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123e5faf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123e5fb5 push eax */
  push32((uint32_t)(EAX));
  /* 123e5fb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123e5fbd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e5fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 123e5fc1 push esi */
  push32((uint32_t)(ESI));
  /* 123e5fc2 push edi */
  push32((uint32_t)(EDI));
  /* 123e5fc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e5fc6 cmp dword ptr [0x12402b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e5fcd jne 0x123e6026 */
  if (!C.zf) goto L_123e6026;
  /* 123e5fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5fd1 push 0x123fe5b8 */
  push32((uint32_t)(0x123fe5b8u));
  /* 123e5fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5fd8 push 0x123fe5b8 */
  push32((uint32_t)(0x123fe5b8u));
  /* 123e5fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 123e5fe1 call dword ptr [0x12405294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405294))), 0x123e5fe7u);
  /* 123e5fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e5fe9 je 0x123e5ff7 */
  if (C.zf) goto L_123e5ff7;
  /* 123e5feb mov dword ptr [0x12402b34], 1 */
  w32((uint32_t)(0x12402b34), (0x1u));
  /* 123e5ff5 jmp 0x123e6026 */
  goto L_123e6026;
L_123e5ff7:;
  /* 123e5ff7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e5ff9 push 0x123fe5b4 */
  push32((uint32_t)(0x123fe5b4u));
  /* 123e5ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 123e6000 push 0x123fe5b4 */
  push32((uint32_t)(0x123fe5b4u));
  /* 123e6005 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e6007 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e6009 call dword ptr [0x124052a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052a0))), 0x123e600fu);
  /* 123e600f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e6011 je 0x123e601f */
  if (C.zf) goto L_123e601f;
  /* 123e6013 mov dword ptr [0x12402b34], 2 */
  w32((uint32_t)(0x12402b34), (0x2u));
  /* 123e601d jmp 0x123e6026 */
  goto L_123e6026;
L_123e601f:;
  /* 123e601f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e6021 jmp 0x123e6384 */
  goto L_123e6384;
L_123e6026:;
  /* 123e6026 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e602a jle 0x123e603f */
  if ((C.zf||C.sf!=C.of)) goto L_123e603f;
  /* 123e602c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e602f push eax */
  push32((uint32_t)(EAX));
  /* 123e6030 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e6033 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6034 call 0x123e63a0 */
  push32(0x123e6039u); f_123e63a0();
  /* 123e6039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e603c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_123e603f:;
  /* 123e603f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6043 jle 0x123e6058 */
  if ((C.zf||C.sf!=C.of)) goto L_123e6058;
  /* 123e6045 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e6048 push edx */
  push32((uint32_t)(EDX));
  /* 123e6049 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e604c push eax */
  push32((uint32_t)(EAX));
  /* 123e604d call 0x123e63a0 */
  push32(0x123e6052u); f_123e63a0();
  /* 123e6052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6055 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_123e6058:;
  /* 123e6058 cmp dword ptr [0x12402b34], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12402b34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e605f jne 0x123e6084 */
  if (!C.zf) goto L_123e6084;
  /* 123e6061 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e6064 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6065 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e6068 push edx */
  push32((uint32_t)(EDX));
  /* 123e6069 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e606c push eax */
  push32((uint32_t)(EAX));
  /* 123e606d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e6070 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6071 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e6074 push edx */
  push32((uint32_t)(EDX));
  /* 123e6075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6078 push eax */
  push32((uint32_t)(EAX));
  /* 123e6079 call dword ptr [0x124052a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052a0))), 0x123e607fu);
  /* 123e607f jmp 0x123e6384 */
  goto L_123e6384;
L_123e6084:;
  /* 123e6084 cmp dword ptr [0x12402b34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402b34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e608b jne 0x123e6382 */
  if (!C.zf) goto L_123e6382;
  /* 123e6091 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6095 jne 0x123e60a0 */
  if (!C.zf) goto L_123e60a0;
  /* 123e6097 mov ecx, dword ptr [0x124029e0] */
  ECX = (r32((uint32_t)(0x124029e0)));
  /* 123e609d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_123e60a0:;
  /* 123e60a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60a4 je 0x123e60b0 */
  if (C.zf) goto L_123e60b0;
  /* 123e60a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60aa jne 0x123e622c */
  if (!C.zf) goto L_123e622c;
L_123e60b0:;
  /* 123e60b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e60b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60b6 jne 0x123e60c2 */
  if (!C.zf) goto L_123e60c2;
  /* 123e60b8 mov eax, 2 */
  EAX = (0x2u);
  /* 123e60bd jmp 0x123e6384 */
  goto L_123e6384;
L_123e60c2:;
  /* 123e60c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60c6 jle 0x123e60d2 */
  if ((C.zf||C.sf!=C.of)) goto L_123e60d2;
  /* 123e60c8 mov eax, 1 */
  EAX = (0x1u);
  /* 123e60cd jmp 0x123e6384 */
  goto L_123e6384;
L_123e60d2:;
  /* 123e60d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60d6 jle 0x123e60e2 */
  if ((C.zf||C.sf!=C.of)) goto L_123e60e2;
  /* 123e60d8 mov eax, 3 */
  EAX = (0x3u);
  /* 123e60dd jmp 0x123e6384 */
  goto L_123e6384;
L_123e60e2:;
  /* 123e60e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 123e60e5 push eax */
  push32((uint32_t)(EAX));
  /* 123e60e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 123e60e9 push ecx */
  push32((uint32_t)(ECX));
  /* 123e60ea call dword ptr [0x124052ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052ec))), 0x123e60f0u);
  /* 123e60f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e60f2 jne 0x123e60fb */
  if (!C.zf) goto L_123e60fb;
  /* 123e60f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e60f6 jmp 0x123e6384 */
  goto L_123e6384;
L_123e60fb:;
  /* 123e60fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e60ff jne 0x123e6107 */
  if (!C.zf) goto L_123e6107;
  /* 123e6101 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6105 je 0x123e6134 */
  if (C.zf) goto L_123e6134;
L_123e6107:;
  /* 123e6107 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e610b jne 0x123e6113 */
  if (!C.zf) goto L_123e6113;
  /* 123e610d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6111 je 0x123e6134 */
  if (C.zf) goto L_123e6134;
L_123e6113:;
  /* 123e6113 push 0x123fef20 */
  push32((uint32_t)(0x123fef20u));
  /* 123e6118 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e611a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123e611f push 0x123fef18 */
  push32((uint32_t)(0x123fef18u));
  /* 123e6124 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e6126 call 0x123d54b0 */
  push32(0x123e612bu); f_123d54b0();
  /* 123e612b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e612e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6131 jne 0x123e6134 */
  if (!C.zf) goto L_123e6134;
  /* 123e6133 int3  */
  x86_unimpl("int3 @ 0x123e6133");
L_123e6134:;
  /* 123e6134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e6136 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e6138 jne 0x123e60fb */
  if (!C.zf) goto L_123e60fb;
  /* 123e613a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e613e jle 0x123e61b3 */
  if ((C.zf||C.sf!=C.of)) goto L_123e61b3;
  /* 123e6140 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6144 jae 0x123e6150 */
  if (!C.cf) goto L_123e6150;
  /* 123e6146 mov eax, 3 */
  EAX = (0x3u);
  /* 123e614b jmp 0x123e6384 */
  goto L_123e6384;
L_123e6150:;
  /* 123e6150 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 123e6153 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 123e6156 jmp 0x123e6161 */
  goto L_123e6161;
L_123e6158:;
  /* 123e6158 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e615b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e615e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_123e6161:;
  /* 123e6161 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e6164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e6166 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e6168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e616a je 0x123e61a9 */
  if (C.zf) goto L_123e61a9;
  /* 123e616c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e616f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e6171 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123e6174 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e6176 je 0x123e61a9 */
  if (C.zf) goto L_123e61a9;
  /* 123e6178 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e617b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e617d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e617f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e6182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e6184 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e6186 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6188 jl 0x123e61a7 */
  if ((C.sf!=C.of)) goto L_123e61a7;
  /* 123e618a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e618d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e618f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e6191 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e6194 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e6196 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123e6199 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e619b jg 0x123e61a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e61a7;
  /* 123e619d mov eax, 2 */
  EAX = (0x2u);
  /* 123e61a2 jmp 0x123e6384 */
  goto L_123e6384;
L_123e61a7:;
  /* 123e61a7 jmp 0x123e6158 */
  goto L_123e6158;
L_123e61a9:;
  /* 123e61a9 mov eax, 3 */
  EAX = (0x3u);
  /* 123e61ae jmp 0x123e6384 */
  goto L_123e6384;
L_123e61b3:;
  /* 123e61b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e61b7 jle 0x123e622c */
  if ((C.zf||C.sf!=C.of)) goto L_123e622c;
  /* 123e61b9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e61bd jae 0x123e61c9 */
  if (!C.cf) goto L_123e61c9;
  /* 123e61bf mov eax, 1 */
  EAX = (0x1u);
  /* 123e61c4 jmp 0x123e6384 */
  goto L_123e6384;
L_123e61c9:;
  /* 123e61c9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 123e61cc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 123e61cf jmp 0x123e61da */
  goto L_123e61da;
L_123e61d1:;
  /* 123e61d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e61d4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e61d7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_123e61da:;
  /* 123e61da mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e61dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e61df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e61e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e61e3 je 0x123e6222 */
  if (C.zf) goto L_123e6222;
  /* 123e61e5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e61e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e61ea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123e61ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e61ef je 0x123e6222 */
  if (C.zf) goto L_123e6222;
  /* 123e61f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e61f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e61f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e61f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e61fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e61fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e61ff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6201 jl 0x123e6220 */
  if ((C.sf!=C.of)) goto L_123e6220;
  /* 123e6203 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e6206 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e6208 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e620a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123e620d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e620f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123e6212 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6214 jg 0x123e6220 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e6220;
  /* 123e6216 mov eax, 2 */
  EAX = (0x2u);
  /* 123e621b jmp 0x123e6384 */
  goto L_123e6384;
L_123e6220:;
  /* 123e6220 jmp 0x123e61d1 */
  goto L_123e61d1;
L_123e6222:;
  /* 123e6222 mov eax, 1 */
  EAX = (0x1u);
  /* 123e6227 jmp 0x123e6384 */
  goto L_123e6384;
L_123e622c:;
  /* 123e622c push 0 */
  push32((uint32_t)(0x0u));
  /* 123e622e push 0 */
  push32((uint32_t)(0x0u));
  /* 123e6230 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e6233 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6234 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e6237 push edx */
  push32((uint32_t)(EDX));
  /* 123e6238 push 9 */
  push32((uint32_t)(0x9u));
  /* 123e623a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123e623d push eax */
  push32((uint32_t)(EAX));
  /* 123e623e call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e6244u);
  /* 123e6244 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123e6247 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e624b jne 0x123e6254 */
  if (!C.zf) goto L_123e6254;
  /* 123e624d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e624f jmp 0x123e6384 */
  goto L_123e6384;
L_123e6254:;
  /* 123e6254 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e625b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e625e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e6260 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6263 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e6265 call 0x123d9590 */
  push32(0x123e626au); f_123d9590();
  /* 123e626a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 123e626d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e6270 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 123e6273 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123e6276 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e627d jmp 0x123e6296 */
  goto L_123e6296;
  /* 123e627f mov eax, 1 */
  EAX = (0x1u);
  /* 123e6284 ret  */
  ESPCHK(0x123e5fa0u, _esp0);
  ESP += 4; return;
  /* 123e6285 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e6288 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123e628f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e6296:;
  /* 123e6296 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e629a jne 0x123e62a3 */
  if (!C.zf) goto L_123e62a3;
  /* 123e629c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e629e jmp 0x123e6384 */
  goto L_123e6384;
L_123e62a3:;
  /* 123e62a3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e62a6 push edx */
  push32((uint32_t)(EDX));
  /* 123e62a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e62aa push eax */
  push32((uint32_t)(EAX));
  /* 123e62ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e62ae push ecx */
  push32((uint32_t)(ECX));
  /* 123e62af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e62b2 push edx */
  push32((uint32_t)(EDX));
  /* 123e62b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e62b5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123e62b8 push eax */
  push32((uint32_t)(EAX));
  /* 123e62b9 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e62bfu);
  /* 123e62bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e62c1 jne 0x123e62ca */
  if (!C.zf) goto L_123e62ca;
  /* 123e62c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e62c5 jmp 0x123e6384 */
  goto L_123e6384;
L_123e62ca:;
  /* 123e62ca push 0 */
  push32((uint32_t)(0x0u));
  /* 123e62cc push 0 */
  push32((uint32_t)(0x0u));
  /* 123e62ce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e62d1 push ecx */
  push32((uint32_t)(ECX));
  /* 123e62d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e62d5 push edx */
  push32((uint32_t)(EDX));
  /* 123e62d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 123e62d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123e62db push eax */
  push32((uint32_t)(EAX));
  /* 123e62dc call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e62e2u);
  /* 123e62e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123e62e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e62e9 jne 0x123e62f2 */
  if (!C.zf) goto L_123e62f2;
  /* 123e62eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e62ed jmp 0x123e6384 */
  goto L_123e6384;
L_123e62f2:;
  /* 123e62f2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123e62f9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e62fc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e62fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6301 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123e6303 call 0x123d9590 */
  push32(0x123e6308u); f_123d9590();
  /* 123e6308 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 123e630b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123e630e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 123e6311 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123e6314 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e631b jmp 0x123e6334 */
  goto L_123e6334;
  /* 123e631d mov eax, 1 */
  EAX = (0x1u);
  /* 123e6322 ret  */
  ESPCHK(0x123e5fa0u, _esp0);
  ESP += 4; return;
  /* 123e6323 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123e6326 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 123e632d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e6334:;
  /* 123e6334 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6338 jne 0x123e633e */
  if (!C.zf) goto L_123e633e;
  /* 123e633a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e633c jmp 0x123e6384 */
  goto L_123e6384;
L_123e633e:;
  /* 123e633e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e6341 push edx */
  push32((uint32_t)(EDX));
  /* 123e6342 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e6345 push eax */
  push32((uint32_t)(EAX));
  /* 123e6346 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123e6349 push ecx */
  push32((uint32_t)(ECX));
  /* 123e634a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123e634d push edx */
  push32((uint32_t)(EDX));
  /* 123e634e push 1 */
  push32((uint32_t)(0x1u));
  /* 123e6350 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123e6353 push eax */
  push32((uint32_t)(EAX));
  /* 123e6354 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123e635au);
  /* 123e635a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e635c jne 0x123e6362 */
  if (!C.zf) goto L_123e6362;
  /* 123e635e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e6360 jmp 0x123e6384 */
  goto L_123e6384;
L_123e6362:;
  /* 123e6362 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e6365 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6366 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e6369 push edx */
  push32((uint32_t)(EDX));
  /* 123e636a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e636d push eax */
  push32((uint32_t)(EAX));
  /* 123e636e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e6371 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e6375 push edx */
  push32((uint32_t)(EDX));
  /* 123e6376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6379 push eax */
  push32((uint32_t)(EAX));
  /* 123e637a call dword ptr [0x12405294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405294))), 0x123e6380u);
  /* 123e6380 jmp 0x123e6384 */
  goto L_123e6384;
L_123e6382:;
  /* 123e6382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e6384:;
  /* 123e6384 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 123e6387 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e638a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123e6391 pop edi */
  EDI = (pop32());
  /* 123e6392 pop esi */
  ESI = (pop32());
  /* 123e6393 pop ebx */
  EBX = (pop32());
  /* 123e6394 mov esp, ebp */
  ESP = (EBP);
  /* 123e6396 pop ebp */
  EBP = (pop32());
  /* 123e6397 ret  */
  ESPCHK(0x123e5fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163a0 @ 0x123e63a0 (80 bytes, 32 insns) */
void f_123e63a0(void) {
  FTRACE(0x123e63a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e63a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e63a1 mov ebp, esp */
  EBP = (ESP);
  /* 123e63a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e63a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e63a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e63ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e63af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123e63b2:;
  /* 123e63b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e63b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e63b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e63bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e63be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e63c0 je 0x123e63d7 */
  if (C.zf) goto L_123e63d7;
  /* 123e63c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e63c5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e63c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e63ca je 0x123e63d7 */
  if (C.zf) goto L_123e63d7;
  /* 123e63cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e63cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e63d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e63d5 jmp 0x123e63b2 */
  goto L_123e63b2;
L_123e63d7:;
  /* 123e63d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e63da movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e63dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e63df jne 0x123e63e9 */
  if (!C.zf) goto L_123e63e9;
  /* 123e63e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e63e4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e63e7 jmp 0x123e63ec */
  goto L_123e63ec;
L_123e63e9:;
  /* 123e63e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_123e63ec:;
  /* 123e63ec mov esp, ebp */
  ESP = (EBP);
  /* 123e63ee pop ebp */
  EBP = (pop32());
  /* 123e63ef ret  */
  ESPCHK(0x123e63a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163f0 @ 0x123e63f0 (736 bytes, 224 insns) */
void f_123e63f0(void) {
  FTRACE(0x123e63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e63f1 mov ebp, esp */
  EBP = (ESP);
  /* 123e63f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e63f6 push esi */
  push32((uint32_t)(ESI));
  /* 123e63f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e63fb je 0x123e641c */
  if (C.zf) goto L_123e641c;
  /* 123e63fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123e63ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6402 push eax */
  push32((uint32_t)(EAX));
  /* 123e6403 call 0x123e6840 */
  push32(0x123e6408u); f_123e6840();
  /* 123e6408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e640b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123e640e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6412 je 0x123e641c */
  if (C.zf) goto L_123e641c;
  /* 123e6414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6417 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e641a jne 0x123e6424 */
  if (!C.zf) goto L_123e6424;
L_123e641c:;
  /* 123e641c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e641f jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6424:;
  /* 123e6424 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e6427 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123e642b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e642d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e642f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 123e6430 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e6433 mov ecx, dword ptr [0x124027f0] */
  ECX = (r32((uint32_t)(0x124027f0)));
  /* 123e6439 cmp ecx, dword ptr [0x124027f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124027f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e643f jne 0x123e6455 */
  if (!C.zf) goto L_123e6455;
  /* 123e6441 mov edx, dword ptr [0x124027f0] */
  EDX = (r32((uint32_t)(0x124027f0)));
  /* 123e6447 push edx */
  push32((uint32_t)(EDX));
  /* 123e6448 call 0x123e6750 */
  push32(0x123e644du); f_123e6750();
  /* 123e644d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6450 mov dword ptr [0x124027f0], eax */
  w32((uint32_t)(0x124027f0), (EAX));
L_123e6455:;
  /* 123e6455 cmp dword ptr [0x124027f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e645c jne 0x123e6515 */
  if (!C.zf) goto L_123e6515;
  /* 123e6462 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6466 je 0x123e6487 */
  if (C.zf) goto L_123e6487;
  /* 123e6468 cmp dword ptr [0x124027f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e646f je 0x123e6487 */
  if (C.zf) goto L_123e6487;
  /* 123e6471 call 0x123e5ef0 */
  push32(0x123e6476u); f_123e5ef0();
  /* 123e6476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e6478 je 0x123e6482 */
  if (C.zf) goto L_123e6482;
  /* 123e647a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e647d jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6482:;
  /* 123e6482 jmp 0x123e6515 */
  goto L_123e6515;
L_123e6487:;
  /* 123e6487 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e648b je 0x123e6494 */
  if (C.zf) goto L_123e6494;
  /* 123e648d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e648f jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6494:;
  /* 123e6494 cmp dword ptr [0x124027f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e649b jne 0x123e64d4 */
  if (!C.zf) goto L_123e64d4;
  /* 123e649d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 123e64a2 push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e64a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e64a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e64ab call 0x123d63f0 */
  push32(0x123e64b0u); f_123d63f0();
  /* 123e64b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e64b3 mov dword ptr [0x124027f0], eax */
  w32((uint32_t)(0x124027f0), (EAX));
  /* 123e64b8 cmp dword ptr [0x124027f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e64bf jne 0x123e64c9 */
  if (!C.zf) goto L_123e64c9;
  /* 123e64c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e64c4 jmp 0x123e66cb */
  goto L_123e66cb;
L_123e64c9:;
  /* 123e64c9 mov eax, dword ptr [0x124027f0] */
  EAX = (r32((uint32_t)(0x124027f0)));
  /* 123e64ce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123e64d4:;
  /* 123e64d4 cmp dword ptr [0x124027f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e64db jne 0x123e6515 */
  if (!C.zf) goto L_123e6515;
  /* 123e64dd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 123e64e2 push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e64e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e64e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e64eb call 0x123d63f0 */
  push32(0x123e64f0u); f_123d63f0();
  /* 123e64f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e64f3 mov dword ptr [0x124027f8], eax */
  w32((uint32_t)(0x124027f8), (EAX));
  /* 123e64f8 cmp dword ptr [0x124027f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e64ff jne 0x123e6509 */
  if (!C.zf) goto L_123e6509;
  /* 123e6501 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e6504 jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6509:;
  /* 123e6509 mov ecx, dword ptr [0x124027f8] */
  ECX = (r32((uint32_t)(0x124027f8)));
  /* 123e650f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_123e6515:;
  /* 123e6515 mov edx, dword ptr [0x124027f0] */
  EDX = (r32((uint32_t)(0x124027f0)));
  /* 123e651b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123e651e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e6521 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e6524 push eax */
  push32((uint32_t)(EAX));
  /* 123e6525 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6528 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6529 call 0x123e66d0 */
  push32(0x123e652eu); f_123e66d0();
  /* 123e652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6531 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e6534 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6538 jl 0x123e65d1 */
  if ((C.sf!=C.of)) goto L_123e65d1;
  /* 123e653e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6541 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6544 je 0x123e65d1 */
  if (C.zf) goto L_123e65d1;
  /* 123e654a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e654e je 0x123e65c3 */
  if (C.zf) goto L_123e65c3;
  /* 123e6550 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e6552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6555 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6558 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123e655b push edx */
  push32((uint32_t)(EDX));
  /* 123e655c call 0x123d6e80 */
  push32(0x123e6561u); f_123d6e80();
  /* 123e6561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6564 jmp 0x123e656f */
  goto L_123e656f;
L_123e6566:;
  /* 123e6566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e656c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e656f:;
  /* 123e656f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6572 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6575 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6579 je 0x123e6590 */
  if (C.zf) goto L_123e6590;
  /* 123e657b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e657e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6584 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6587 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 123e658b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 123e658e jmp 0x123e6566 */
  goto L_123e6566;
L_123e6590:;
  /* 123e6590 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 123e6595 push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e659a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e659c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e659f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123e65a2 push eax */
  push32((uint32_t)(EAX));
  /* 123e65a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e65a6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e65a7 call 0x123d6880 */
  push32(0x123e65acu); f_123d6880();
  /* 123e65ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e65af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e65b2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e65b6 je 0x123e65c1 */
  if (C.zf) goto L_123e65c1;
  /* 123e65b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e65bb mov dword ptr [0x124027f0], edx */
  w32((uint32_t)(0x124027f0), (EDX));
L_123e65c1:;
  /* 123e65c1 jmp 0x123e65cf */
  goto L_123e65cf;
L_123e65c3:;
  /* 123e65c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e65c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e65c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e65cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_123e65cf:;
  /* 123e65cf jmp 0x123e6644 */
  goto L_123e6644;
L_123e65d1:;
  /* 123e65d1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e65d5 jne 0x123e663d */
  if (!C.zf) goto L_123e663d;
  /* 123e65d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e65db jge 0x123e65e5 */
  if ((C.sf==C.of)) goto L_123e65e5;
  /* 123e65dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e65e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e65e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e65e5:;
  /* 123e65e5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 123e65ea push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e65ef push 2 */
  push32((uint32_t)(0x2u));
  /* 123e65f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e65f4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 123e65fb push edx */
  push32((uint32_t)(EDX));
  /* 123e65fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e65ff push eax */
  push32((uint32_t)(EAX));
  /* 123e6600 call 0x123d6880 */
  push32(0x123e6605u); f_123d6880();
  /* 123e6605 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6608 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e660b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e660f jne 0x123e6619 */
  if (!C.zf) goto L_123e6619;
  /* 123e6611 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e6614 jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6619:;
  /* 123e6619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e661c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e661f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6622 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 123e6625 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6628 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e662b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 123e6633 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6636 mov dword ptr [0x124027f0], eax */
  w32((uint32_t)(0x124027f0), (EAX));
  /* 123e663b jmp 0x123e6644 */
  goto L_123e6644;
L_123e663d:;
  /* 123e663d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e663f jmp 0x123e66cb */
  goto L_123e66cb;
L_123e6644:;
  /* 123e6644 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6648 je 0x123e66c9 */
  if (C.zf) goto L_123e66c9;
  /* 123e664a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 123e664f push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e6654 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e6656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6659 push ecx */
  push32((uint32_t)(ECX));
  /* 123e665a call 0x123d9220 */
  push32(0x123e665fu); f_123d9220();
  /* 123e665f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6662 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6665 push eax */
  push32((uint32_t)(EAX));
  /* 123e6666 call 0x123d63f0 */
  push32(0x123e666bu); f_123d63f0();
  /* 123e666b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e666e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123e6671 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6675 je 0x123e66c9 */
  if (C.zf) goto L_123e66c9;
  /* 123e6677 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e667a push edx */
  push32((uint32_t)(EDX));
  /* 123e667b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e667e push eax */
  push32((uint32_t)(EAX));
  /* 123e667f call 0x123d93a0 */
  push32(0x123e6684u); f_123d93a0();
  /* 123e6684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6687 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e668a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e668d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e6690 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6692 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123e6695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e6698 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123e669b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e669e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e66a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e66a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e66a7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e66a9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e66ab not edx */
  EDX = (~(EDX));
  /* 123e66ad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 123e66b0 push edx */
  push32((uint32_t)(EDX));
  /* 123e66b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e66b4 push eax */
  push32((uint32_t)(EAX));
  /* 123e66b5 call dword ptr [0x12405290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405290))), 0x123e66bbu);
  /* 123e66bb push 2 */
  push32((uint32_t)(0x2u));
  /* 123e66bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e66c0 push ecx */
  push32((uint32_t)(ECX));
  /* 123e66c1 call 0x123d6e80 */
  push32(0x123e66c6u); f_123d6e80();
  /* 123e66c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e66c9:;
  /* 123e66c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e66cb:;
  /* 123e66cb pop esi */
  ESI = (pop32());
  /* 123e66cc mov esp, ebp */
  ESP = (EBP);
  /* 123e66ce pop ebp */
  EBP = (pop32());
  /* 123e66cf ret  */
  ESPCHK(0x123e63f0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x123e66d0 (124 bytes, 47 insns) */
void f_123e66d0(void) {
  FTRACE(0x123e66d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e66d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e66d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e66d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e66d4 mov eax, dword ptr [0x124027f0] */
  EAX = (r32((uint32_t)(0x124027f0)));
  /* 123e66d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e66dc jmp 0x123e66e7 */
  goto L_123e66e7;
L_123e66de:;
  /* 123e66de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e66e1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e66e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123e66e7:;
  /* 123e66e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e66ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e66ed je 0x123e673a */
  if (C.zf) goto L_123e673a;
  /* 123e66ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e66f2 push eax */
  push32((uint32_t)(EAX));
  /* 123e66f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e66f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e66f8 push edx */
  push32((uint32_t)(EDX));
  /* 123e66f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e66fc push eax */
  push32((uint32_t)(EAX));
  /* 123e66fd call 0x123e5ea0 */
  push32(0x123e6702u); f_123e5ea0();
  /* 123e6702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e6707 jne 0x123e6738 */
  if (!C.zf) goto L_123e6738;
  /* 123e6709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e670c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e670e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e6711 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 123e6715 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6718 je 0x123e672a */
  if (C.zf) goto L_123e672a;
  /* 123e671a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e671d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e671f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e6722 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 123e6726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e6728 jne 0x123e6738 */
  if (!C.zf) goto L_123e6738;
L_123e672a:;
  /* 123e672a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e672d sub eax, dword ptr [0x124027f0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124027f0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e6733 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123e6736 jmp 0x123e6748 */
  goto L_123e6748;
L_123e6738:;
  /* 123e6738 jmp 0x123e66de */
  goto L_123e66de;
L_123e673a:;
  /* 123e673a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e673d sub eax, dword ptr [0x124027f0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124027f0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e6743 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123e6746 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_123e6748:;
  /* 123e6748 mov esp, ebp */
  ESP = (EBP);
  /* 123e674a pop ebp */
  EBP = (pop32());
  /* 123e674b ret  */
  ESPCHK(0x123e66d0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x123e6750 (238 bytes, 80 insns) */
void f_123e6750(void) {
  FTRACE(0x123e6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e6750 push ebp */
  push32((uint32_t)(EBP));
  /* 123e6751 mov ebp, esp */
  EBP = (ESP);
  /* 123e6753 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e6756 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e675d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6760 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e6763 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6767 jne 0x123e6770 */
  if (!C.zf) goto L_123e6770;
  /* 123e6769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e676b jmp 0x123e683a */
  goto L_123e683a;
L_123e6770:;
  /* 123e6770 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6773 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e6775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6778 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e677b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e677e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e6780 je 0x123e678d */
  if (C.zf) goto L_123e678d;
  /* 123e6782 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e6785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6788 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123e678b jmp 0x123e6770 */
  goto L_123e6770;
L_123e678d:;
  /* 123e678d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 123e6792 push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e6797 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e6799 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e679c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 123e67a3 push eax */
  push32((uint32_t)(EAX));
  /* 123e67a4 call 0x123d63f0 */
  push32(0x123e67a9u); f_123d63f0();
  /* 123e67a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e67ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e67af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e67b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e67b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e67b9 jne 0x123e67c5 */
  if (!C.zf) goto L_123e67c5;
  /* 123e67bb push 9 */
  push32((uint32_t)(0x9u));
  /* 123e67bd call 0x123d5360 */
  push32(0x123e67c2u); f_123d5360();
  /* 123e67c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e67c5:;
  /* 123e67c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e67c8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123e67cb:;
  /* 123e67cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e67ce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e67d1 je 0x123e682e */
  if (C.zf) goto L_123e682e;
  /* 123e67d3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 123e67d8 push 0x123fef78 */
  push32((uint32_t)(0x123fef78u));
  /* 123e67dd push 2 */
  push32((uint32_t)(0x2u));
  /* 123e67df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e67e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e67e4 push edx */
  push32((uint32_t)(EDX));
  /* 123e67e5 call 0x123d9220 */
  push32(0x123e67eau); f_123d9220();
  /* 123e67ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e67ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e67f0 push eax */
  push32((uint32_t)(EAX));
  /* 123e67f1 call 0x123d63f0 */
  push32(0x123e67f6u); f_123d63f0();
  /* 123e67f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e67f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e67fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e67fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6801 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6804 je 0x123e681a */
  if (C.zf) goto L_123e681a;
  /* 123e6806 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e6809 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e680b push ecx */
  push32((uint32_t)(ECX));
  /* 123e680c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e680f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e6811 push eax */
  push32((uint32_t)(EAX));
  /* 123e6812 call 0x123d93a0 */
  push32(0x123e6817u); f_123d93a0();
  /* 123e6817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e681a:;
  /* 123e681a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e681d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6820 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e6823 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6826 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6829 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e682c jmp 0x123e67cb */
  goto L_123e67cb;
L_123e682e:;
  /* 123e682e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e6831 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123e6837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123e683a:;
  /* 123e683a mov esp, ebp */
  ESP = (EBP);
  /* 123e683c pop ebp */
  EBP = (pop32());
  /* 123e683d ret  */
  ESPCHK(0x123e6750u, _esp0);
  ESP += 4; return;
}

/* FUN_10016840 @ 0x123e6840 (237 bytes, 81 insns) */
void f_123e6840(void) {
  FTRACE(0x123e6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e6840 push ebp */
  push32((uint32_t)(EBP));
  /* 123e6841 mov ebp, esp */
  EBP = (ESP);
  /* 123e6843 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6844 cmp dword ptr [0x12403f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12403f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e684b jne 0x123e6862 */
  if (!C.zf) goto L_123e6862;
  /* 123e684d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e6850 push eax */
  push32((uint32_t)(EAX));
  /* 123e6851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6854 push ecx */
  push32((uint32_t)(ECX));
  /* 123e6855 call 0x123e6940 */
  push32(0x123e685au); f_123e6940();
  /* 123e685a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e685d jmp 0x123e6929 */
  goto L_123e6929;
L_123e6862:;
  /* 123e6862 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123e6864 call 0x123d9df0 */
  push32(0x123e6869u); f_123d9df0();
  /* 123e6869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e686c jmp 0x123e6877 */
  goto L_123e6877;
L_123e686e:;
  /* 123e686e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6871 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6874 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123e6877:;
  /* 123e6877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e687a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 123e687e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 123e6882 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e6885 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e688b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e688d je 0x123e690b */
  if (C.zf) goto L_123e690b;
  /* 123e688f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e6892 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e6897 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e6899 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123e689f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123e68a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e68a4 je 0x123e68f6 */
  if (C.zf) goto L_123e68f6;
  /* 123e68a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e68a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e68ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123e68af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e68b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e68b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e68b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e68b8 jne 0x123e68c8 */
  if (!C.zf) goto L_123e68c8;
  /* 123e68ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123e68bc call 0x123d9e90 */
  push32(0x123e68c1u); f_123d9e90();
  /* 123e68c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e68c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e68c6 jmp 0x123e6929 */
  goto L_123e6929;
L_123e68c8:;
  /* 123e68c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e68cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e68d1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123e68d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e68d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e68d9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e68db or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123e68dd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e68e0 jne 0x123e68f4 */
  if (!C.zf) goto L_123e68f4;
  /* 123e68e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123e68e4 call 0x123d9e90 */
  push32(0x123e68e9u); f_123d9e90();
  /* 123e68e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e68ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e68ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e68f2 jmp 0x123e6929 */
  goto L_123e6929;
L_123e68f4:;
  /* 123e68f4 jmp 0x123e6906 */
  goto L_123e6906;
L_123e68f6:;
  /* 123e68f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e68f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e68ff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6902 jne 0x123e6906 */
  if (!C.zf) goto L_123e6906;
  /* 123e6904 jmp 0x123e690b */
  goto L_123e690b;
L_123e6906:;
  /* 123e6906 jmp 0x123e686e */
  goto L_123e686e;
L_123e690b:;
  /* 123e690b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123e690d call 0x123d9e90 */
  push32(0x123e6912u); f_123d9e90();
  /* 123e6912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e6918 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e691d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e6920 jne 0x123e6927 */
  if (!C.zf) goto L_123e6927;
  /* 123e6922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e6925 jmp 0x123e6929 */
  goto L_123e6929;
L_123e6927:;
  /* 123e6927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e6929:;
  /* 123e6929 mov esp, ebp */
  ESP = (EBP);
  /* 123e692b pop ebp */
  EBP = (pop32());
  /* 123e692c ret  */
  ESPCHK(0x123e6840u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x123e6940 (193 bytes, 87 insns) */
void f_123e6940(void) {
  FTRACE(0x123e6940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e6940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e6942 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 123e6946 push ebx */
  push32((uint32_t)(EBX));
  /* 123e6947 mov ebx, eax */
  EBX = (EAX);
  /* 123e6949 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 123e694c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 123e6950 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123e6956 je 0x123e696b */
  if (C.zf) goto L_123e696b;
L_123e6958:;
  /* 123e6958 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 123e695a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123e695b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e695d je 0x123e6930 */
  if (C.zf) { jmp_ind(0x123e6930u); return; }
  /* 123e695f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 123e6961 je 0x123e69b4 */
  if (C.zf) goto L_123e69b4;
  /* 123e6963 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123e6969 jne 0x123e6958 */
  if (!C.zf) goto L_123e6958;
L_123e696b:;
  /* 123e696b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 123e696d push edi */
  push32((uint32_t)(EDI));
  /* 123e696e mov eax, ebx */
  EAX = (EBX);
  /* 123e6970 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 123e6973 push esi */
  push32((uint32_t)(ESI));
  /* 123e6974 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_123e6976:;
  /* 123e6976 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 123e6978 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 123e697d mov eax, ecx */
  EAX = (ECX);
  /* 123e697f mov esi, edi */
  ESI = (EDI);
  /* 123e6981 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 123e6983 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6985 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6987 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123e698a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e698d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 123e698f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 123e6991 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e6994 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 123e699a jne 0x123e69b8 */
  if (!C.zf) goto L_123e69b8;
  /* 123e699c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 123e69a1 je 0x123e6976 */
  if (C.zf) goto L_123e6976;
  /* 123e69a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 123e69a8 jne 0x123e69b2 */
  if (!C.zf) goto L_123e69b2;
  /* 123e69aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 123e69b0 jne 0x123e6976 */
  if (!C.zf) goto L_123e6976;
L_123e69b2:;
  /* 123e69b2 pop esi */
  ESI = (pop32());
  /* 123e69b3 pop edi */
  EDI = (pop32());
L_123e69b4:;
  /* 123e69b4 pop ebx */
  EBX = (pop32());
  /* 123e69b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e69b7 ret  */
  ESPCHK(0x123e6940u, _esp0);
  ESP += 4; return;
L_123e69b8:;
  /* 123e69b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 123e69bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e69bd je 0x123e69f5 */
  if (C.zf) goto L_123e69f5;
  /* 123e69bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123e69c1 je 0x123e69b2 */
  if (C.zf) goto L_123e69b2;
  /* 123e69c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e69c5 je 0x123e69ee */
  if (C.zf) goto L_123e69ee;
  /* 123e69c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123e69c9 je 0x123e69b2 */
  if (C.zf) goto L_123e69b2;
  /* 123e69cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123e69ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e69d0 je 0x123e69e7 */
  if (C.zf) goto L_123e69e7;
  /* 123e69d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123e69d4 je 0x123e69b2 */
  if (C.zf) goto L_123e69b2;
  /* 123e69d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e69d8 je 0x123e69e0 */
  if (C.zf) goto L_123e69e0;
  /* 123e69da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123e69dc je 0x123e69b2 */
  if (C.zf) goto L_123e69b2;
  /* 123e69de jmp 0x123e6976 */
  goto L_123e6976;
L_123e69e0:;
  /* 123e69e0 pop esi */
  ESI = (pop32());
  /* 123e69e1 pop edi */
  EDI = (pop32());
  /* 123e69e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 123e69e5 pop ebx */
  EBX = (pop32());
  /* 123e69e6 ret  */
  ESPCHK(0x123e6940u, _esp0);
  ESP += 4; return;
L_123e69e7:;
  /* 123e69e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 123e69ea pop esi */
  ESI = (pop32());
  /* 123e69eb pop edi */
  EDI = (pop32());
  /* 123e69ec pop ebx */
  EBX = (pop32());
  /* 123e69ed ret  */
  ESPCHK(0x123e6940u, _esp0);
  ESP += 4; return;
L_123e69ee:;
  /* 123e69ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 123e69f1 pop esi */
  ESI = (pop32());
  /* 123e69f2 pop edi */
  EDI = (pop32());
  /* 123e69f3 pop ebx */
  EBX = (pop32());
  /* 123e69f4 ret  */
  ESPCHK(0x123e6940u, _esp0);
  ESP += 4; return;
L_123e69f5:;
  /* 123e69f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 123e69f8 pop esi */
  ESI = (pop32());
  /* 123e69f9 pop edi */
  EDI = (pop32());
  /* 123e69fa pop ebx */
  EBX = (pop32());
  /* 123e69fb ret  */
  ESPCHK(0x123e6940u, _esp0);
  ESP += 4; return;
  /* 123e69fc jmp dword ptr [0x1240530c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1240530c)))); return;
}

/* RtlUnwind @ 0x123e6b4c (6 bytes, 1 insns) */
void f_123e6b4c(void) {
  FTRACE(0x123e6b4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e6b4c jmp dword ptr [0x124052c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x124052c8)))); return;
}

