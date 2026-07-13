#include "recomp.h"

/* FUN_10013770 @ 0x11ec3770 (393 bytes, 123 insns) */
void f_11ec3770(void) {
  FTRACE(0x11ec3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3770 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3771 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3773 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3776 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec377a jne 0x11ec3786 */
  if (!C.zf) goto L_11ec3786;
  /* 11ec377c mov eax, dword ptr [0x11ee1c98] */
  EAX = (r32((uint32_t)(0x11ee1c98)));
  /* 11ec3781 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ec3784 jmp 0x11ec378c */
  goto L_11ec378c;
L_11ec3786:;
  /* 11ec3786 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3789 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ec378c:;
  /* 11ec378c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec378f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec3792 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3795 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec3798 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec379d call dword ptr [0x11ee53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a4))), 0x11ec37a3u);
  /* 11ec37a3 cmp dword ptr [0x11ee2b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec37aa je 0x11ec37ca */
  if (C.zf) goto L_11ec37ca;
  /* 11ec37ac push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec37b1 call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ec37b7u);
  /* 11ec37b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec37b9 call 0x11eb9e30 */
  push32(0x11ec37beu); f_11eb9e30();
  /* 11ec37be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec37c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ec37c8 jmp 0x11ec37d1 */
  goto L_11ec37d1;
L_11ec37ca:;
  /* 11ec37ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ec37d1:;
  /* 11ec37d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec37d5 jbe 0x11ec38c2 */
  if ((C.cf||C.zf)) goto L_11ec38c2;
  /* 11ec37db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec37de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec37e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11ec37e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec37e7 je 0x11ec37f1 */
  if (C.zf) goto L_11ec37f1;
  /* 11ec37e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec37ed je 0x11ec37f6 */
  if (C.zf) goto L_11ec37f6;
  /* 11ec37ef jmp 0x11ec3850 */
  goto L_11ec3850;
L_11ec37f1:;
  /* 11ec37f1 jmp 0x11ec38c2 */
  goto L_11ec38c2;
L_11ec37f6:;
  /* 11ec37f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec37f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec37fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ec37ff mov dword ptr [0x11ee2af0], 0 */
  w32((uint32_t)(0x11ee2af0), (0x0u));
  /* 11ec3809 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec380c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec380f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3812 jne 0x11ec3827 */
  if (!C.zf) goto L_11ec3827;
  /* 11ec3814 mov dword ptr [0x11ee2af0], 1 */
  w32((uint32_t)(0x11ee2af0), (0x1u));
  /* 11ec381e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3824 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11ec3827:;
  /* 11ec3827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec382a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec382b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ec382e push edx */
  push32((uint32_t)(EDX));
  /* 11ec382f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ec3832 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3833 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3836 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3837 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec383a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec383c push eax */
  push32((uint32_t)(EAX));
  /* 11ec383d call 0x11ec3900 */
  push32(0x11ec3842u); f_11ec3900();
  /* 11ec3842 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3845 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3848 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec384b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ec384e jmp 0x11ec38bd */
  goto L_11ec38bd;
L_11ec3850:;
  /* 11ec3850 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec3855 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec3857 mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec385d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec385f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec3863 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec3869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec386b je 0x11ec3898 */
  if (C.zf) goto L_11ec3898;
  /* 11ec386d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3871 jbe 0x11ec3898 */
  if ((C.cf||C.zf)) goto L_11ec3898;
  /* 11ec3873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3876 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3879 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec387b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ec387d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3883 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec3886 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3889 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec388c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ec388f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3892 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3895 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ec3898:;
  /* 11ec3898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec389b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec389e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec38a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ec38a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec38a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec38a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec38ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec38ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec38b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ec38b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec38b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec38ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ec38bd:;
  /* 11ec38bd jmp 0x11ec37d1 */
  goto L_11ec37d1;
L_11ec38c2:;
  /* 11ec38c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec38c6 je 0x11ec38d4 */
  if (C.zf) goto L_11ec38d4;
  /* 11ec38c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec38ca call 0x11eb9ed0 */
  push32(0x11ec38cfu); f_11eb9ed0();
  /* 11ec38cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec38d2 jmp 0x11ec38df */
  goto L_11ec38df;
L_11ec38d4:;
  /* 11ec38d4 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec38d9 call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ec38dfu);
L_11ec38df:;
  /* 11ec38df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec38e3 jbe 0x11ec38f3 */
  if ((C.cf||C.zf)) goto L_11ec38f3;
  /* 11ec38e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec38e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ec38eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec38ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec38f1 jmp 0x11ec38f5 */
  goto L_11ec38f5;
L_11ec38f3:;
  /* 11ec38f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec38f5:;
  /* 11ec38f5 mov esp, ebp */
  ESP = (EBP);
  /* 11ec38f7 pop ebp */
  EBP = (pop32());
  /* 11ec38f8 ret  */
  ESPCHK(0x11ec3770u, _esp0);
  ESP += 4; return;
}

/* FUN_10013900 @ 0x11ec3900 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11ec3900(void) {
  FTRACE(0x11ec3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3900 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3901 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3906 push esi */
  push32((uint32_t)(ESI));
  /* 11ec3907 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11ec390b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec390e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3911 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3914 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec3917 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec391b ja 0x11ec3e68 */
  if ((!C.cf&&!C.zf)) goto L_11ec3e68;
  /* 11ec3921 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3924 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec3926 mov dl, byte ptr [eax + 0x11ec3ec9] */
  DL = (r8((uint32_t)(EAX + 0x11ec3ec9)));
  /* 11ec392c jmp dword ptr [edx*4 + 0x11ec3e6d] */
  switch (EDX) {
    case 0: goto L_11ec3e46;
    case 1: goto L_11ec3955;
    case 2: goto L_11ec399b;
    case 3: goto L_11ec3ae8;
    case 4: goto L_11ec3b10;
    case 5: goto L_11ec3baf;
    case 6: goto L_11ec3c1b;
    case 7: goto L_11ec3c44;
    case 8: goto L_11ec3c85;
    case 9: goto L_11ec3d67;
    case 10: goto L_11ec3dce;
    case 11: goto L_11ec3e1b;
    case 12: goto L_11ec3933;
    case 13: goto L_11ec3978;
    case 14: goto L_11ec39be;
    case 15: goto L_11ec3abe;
    case 16: goto L_11ec3b55;
    case 17: goto L_11ec3b82;
    case 18: goto L_11ec3bd7;
    case 19: goto L_11ec3c5b;
    case 20: goto L_11ec3d09;
    case 21: goto L_11ec3d98;
    case 22: goto L_11ec3e68;
    default: x86_unimpl("switch@0x11ec392c out of table"); return;
  }
L_11ec3933:;
  /* 11ec3933 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3936 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3937 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec393a push edx */
  push32((uint32_t)(EDX));
  /* 11ec393b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec393e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ec3941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3944 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ec3947 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3948 call 0x11ec3f20 */
  push32(0x11ec394du); f_11ec3f20();
  /* 11ec394d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3950 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3955:;
  /* 11ec3955 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3958 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3959 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec395c push edx */
  push32((uint32_t)(EDX));
  /* 11ec395d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3960 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ec3963 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3966 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11ec396a push eax */
  push32((uint32_t)(EAX));
  /* 11ec396b call 0x11ec3f20 */
  push32(0x11ec3970u); f_11ec3f20();
  /* 11ec3970 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3973 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3978:;
  /* 11ec3978 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec397b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec397c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec397f push edx */
  push32((uint32_t)(EDX));
  /* 11ec3980 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3983 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ec3986 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3989 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ec398d push eax */
  push32((uint32_t)(EAX));
  /* 11ec398e call 0x11ec3f20 */
  push32(0x11ec3993u); f_11ec3f20();
  /* 11ec3993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3996 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec399b:;
  /* 11ec399b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec399e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec399f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec39a2 push edx */
  push32((uint32_t)(EDX));
  /* 11ec39a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec39a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ec39a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec39ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ec39b0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec39b1 call 0x11ec3f20 */
  push32(0x11ec39b6u); f_11ec3f20();
  /* 11ec39b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec39b9 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec39be:;
  /* 11ec39be cmp dword ptr [0x11ee2af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec39c5 je 0x11ec3a46 */
  if (C.zf) goto L_11ec3a46;
  /* 11ec39c7 mov dword ptr [0x11ee2af0], 0 */
  w32((uint32_t)(0x11ee2af0), (0x0u));
  /* 11ec39d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec39d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec39d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec39d8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec39d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec39dc push eax */
  push32((uint32_t)(EAX));
  /* 11ec39dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec39e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec39e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec39e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11ec39ea push eax */
  push32((uint32_t)(EAX));
  /* 11ec39eb call 0x11ec40d0 */
  push32(0x11ec39f0u); f_11ec40d0();
  /* 11ec39f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec39f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec39f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec39f9 jne 0x11ec3a00 */
  if (!C.zf) goto L_11ec3a00;
  /* 11ec39fb jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3a00:;
  /* 11ec3a00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec3a05 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11ec3a08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3a0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3a10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3a15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3a1a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3a1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3a22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3a26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a29 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3a2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a2d push eax */
  push32((uint32_t)(EAX));
  /* 11ec3a2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3a31 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3a32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3a35 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11ec3a3b push eax */
  push32((uint32_t)(EAX));
  /* 11ec3a3c call 0x11ec40d0 */
  push32(0x11ec3a41u); f_11ec40d0();
  /* 11ec3a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3a44 jmp 0x11ec3ab9 */
  goto L_11ec3ab9;
L_11ec3a46:;
  /* 11ec3a46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3a49 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3a4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a4d push edx */
  push32((uint32_t)(EDX));
  /* 11ec3a4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a51 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3a52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3a55 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3a56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3a59 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11ec3a5f push eax */
  push32((uint32_t)(EAX));
  /* 11ec3a60 call 0x11ec40d0 */
  push32(0x11ec3a65u); f_11ec40d0();
  /* 11ec3a65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3a68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a6b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3a6e jne 0x11ec3a75 */
  if (!C.zf) goto L_11ec3a75;
  /* 11ec3a70 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3a75:;
  /* 11ec3a75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec3a7a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11ec3a7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3a82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3a85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3a88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3a8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3a8f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3a92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a95 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3a97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3a9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3a9e push edx */
  push32((uint32_t)(EDX));
  /* 11ec3a9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3aa2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3aa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3aa7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3aaa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11ec3ab0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3ab1 call 0x11ec40d0 */
  push32(0x11ec3ab6u); f_11ec40d0();
  /* 11ec3ab6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec3ab9:;
  /* 11ec3ab9 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3abe:;
  /* 11ec3abe mov ecx, dword ptr [0x11ee2af0] */
  ECX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3ac4 mov dword ptr [0x11ee2b00], ecx */
  w32((uint32_t)(0x11ee2b00), (ECX));
  /* 11ec3aca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3acd push edx */
  push32((uint32_t)(EDX));
  /* 11ec3ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3ad4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3ad7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec3ada push edx */
  push32((uint32_t)(EDX));
  /* 11ec3adb call 0x11ec3f70 */
  push32(0x11ec3ae0u); f_11ec3f70();
  /* 11ec3ae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3ae3 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3ae8:;
  /* 11ec3ae8 mov eax, dword ptr [0x11ee2af0] */
  EAX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3aed mov dword ptr [0x11ee2b00], eax */
  w32((uint32_t)(0x11ee2b00), (EAX));
  /* 11ec3af2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3af5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3af6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3af9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3afa push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3afc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3aff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ec3b02 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3b03 call 0x11ec3f70 */
  push32(0x11ec3b08u); f_11ec3f70();
  /* 11ec3b08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3b0b jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3b10:;
  /* 11ec3b10 mov edx, dword ptr [0x11ee2af0] */
  EDX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3b16 mov dword ptr [0x11ee2b00], edx */
  w32((uint32_t)(0x11ee2b00), (EDX));
  /* 11ec3b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3b1f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ec3b22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3b23 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11ec3b28 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3b2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec3b2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3b31 jne 0x11ec3b3a */
  if (!C.zf) goto L_11ec3b3a;
  /* 11ec3b33 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11ec3b3a:;
  /* 11ec3b3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3b3d push edx */
  push32((uint32_t)(EDX));
  /* 11ec3b3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3b41 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3b47 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3b48 call 0x11ec3f70 */
  push32(0x11ec3b4du); f_11ec3f70();
  /* 11ec3b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3b50 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3b55:;
  /* 11ec3b55 mov edx, dword ptr [0x11ee2af0] */
  EDX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3b5b mov dword ptr [0x11ee2b00], edx */
  w32((uint32_t)(0x11ee2b00), (EDX));
  /* 11ec3b61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3b64 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3b65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3b68 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3b69 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ec3b6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3b6e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec3b71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3b74 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3b75 call 0x11ec3f70 */
  push32(0x11ec3b7au); f_11ec3f70();
  /* 11ec3b7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3b7d jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3b82:;
  /* 11ec3b82 mov ecx, dword ptr [0x11ee2af0] */
  ECX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3b88 mov dword ptr [0x11ee2b00], ecx */
  w32((uint32_t)(0x11ee2b00), (ECX));
  /* 11ec3b8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3b91 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3b92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3b95 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3b98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3b9b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ec3b9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3ba1 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3ba2 call 0x11ec3f70 */
  push32(0x11ec3ba7u); f_11ec3f70();
  /* 11ec3ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3baa jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3baf:;
  /* 11ec3baf mov eax, dword ptr [0x11ee2af0] */
  EAX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3bb4 mov dword ptr [0x11ee2b00], eax */
  w32((uint32_t)(0x11ee2b00), (EAX));
  /* 11ec3bb9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3bbc push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3bbd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3bc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3bc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3bc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ec3bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3bca call 0x11ec3f70 */
  push32(0x11ec3bcfu); f_11ec3f70();
  /* 11ec3bcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3bd2 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3bd7:;
  /* 11ec3bd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3bda cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3bde jg 0x11ec3bfc */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec3bfc;
  /* 11ec3be0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3be3 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3be4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3be7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3be8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3beb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11ec3bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3bf2 call 0x11ec3f20 */
  push32(0x11ec3bf7u); f_11ec3f20();
  /* 11ec3bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3bfa jmp 0x11ec3c16 */
  goto L_11ec3c16;
L_11ec3bfc:;
  /* 11ec3bfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3bff push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3c00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3c03 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3c04 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3c07 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11ec3c0d push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3c0e call 0x11ec3f20 */
  push32(0x11ec3c13u); f_11ec3f20();
  /* 11ec3c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec3c16:;
  /* 11ec3c16 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3c1b:;
  /* 11ec3c1b mov edx, dword ptr [0x11ee2af0] */
  EDX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3c21 mov dword ptr [0x11ee2b00], edx */
  w32((uint32_t)(0x11ee2b00), (EDX));
  /* 11ec3c27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3c2a push eax */
  push32((uint32_t)(EAX));
  /* 11ec3c2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3c2e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3c31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3c34 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec3c36 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3c37 call 0x11ec3f70 */
  push32(0x11ec3c3cu); f_11ec3f70();
  /* 11ec3c3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3c3f jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3c44:;
  /* 11ec3c44 mov ecx, dword ptr [0x11ee2af0] */
  ECX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3c4a mov dword ptr [0x11ee2b00], ecx */
  w32((uint32_t)(0x11ee2b00), (ECX));
  /* 11ec3c50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3c53 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ec3c56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec3c59 jmp 0x11ec3cad */
  goto L_11ec3cad;
L_11ec3c5b:;
  /* 11ec3c5b mov ecx, dword ptr [0x11ee2af0] */
  ECX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3c61 mov dword ptr [0x11ee2b00], ecx */
  w32((uint32_t)(0x11ee2b00), (ECX));
  /* 11ec3c67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3c6a push edx */
  push32((uint32_t)(EDX));
  /* 11ec3c6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3c6e push eax */
  push32((uint32_t)(EAX));
  /* 11ec3c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec3c71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3c74 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ec3c77 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3c78 call 0x11ec3f70 */
  push32(0x11ec3c7du); f_11ec3f70();
  /* 11ec3c7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3c80 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3c85:;
  /* 11ec3c85 mov eax, dword ptr [0x11ee2af0] */
  EAX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3c8a mov dword ptr [0x11ee2b00], eax */
  w32((uint32_t)(0x11ee2b00), (EAX));
  /* 11ec3c8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3c92 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3c96 jne 0x11ec3ca1 */
  if (!C.zf) goto L_11ec3ca1;
  /* 11ec3c98 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11ec3c9f jmp 0x11ec3cad */
  goto L_11ec3cad;
L_11ec3ca1:;
  /* 11ec3ca1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3ca4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ec3ca7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3caa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec3cad:;
  /* 11ec3cad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3cb0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ec3cb3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3cb6 jge 0x11ec3cc1 */
  if ((C.sf==C.of)) goto L_11ec3cc1;
  /* 11ec3cb8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec3cbf jmp 0x11ec3cee */
  goto L_11ec3cee;
L_11ec3cc1:;
  /* 11ec3cc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3cc4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec3cc7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3cc8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11ec3ccd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3ccf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec3cd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3cd5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec3cd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3cd9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11ec3cde idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3ce0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3ce3 jl 0x11ec3cee */
  if ((C.sf!=C.of)) goto L_11ec3cee;
  /* 11ec3ce5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3ce8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3ceb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ec3cee:;
  /* 11ec3cee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3cf2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3cfb push edx */
  push32((uint32_t)(EDX));
  /* 11ec3cfc call 0x11ec3f70 */
  push32(0x11ec3d01u); f_11ec3f70();
  /* 11ec3d01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3d04 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3d09:;
  /* 11ec3d09 cmp dword ptr [0x11ee2af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3d10 je 0x11ec3d40 */
  if (C.zf) goto L_11ec3d40;
  /* 11ec3d12 mov dword ptr [0x11ee2af0], 0 */
  w32((uint32_t)(0x11ee2af0), (0x0u));
  /* 11ec3d1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d1f push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3d24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3d27 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3d2b push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d2c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d2f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11ec3d35 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d36 call 0x11ec40d0 */
  push32(0x11ec3d3bu); f_11ec40d0();
  /* 11ec3d3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3d3e jmp 0x11ec3d62 */
  goto L_11ec3d62;
L_11ec3d40:;
  /* 11ec3d40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d43 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3d47 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3d48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3d4b push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3d4f push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d53 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11ec3d59 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d5a call 0x11ec40d0 */
  push32(0x11ec3d5fu); f_11ec40d0();
  /* 11ec3d5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec3d62:;
  /* 11ec3d62 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3d67:;
  /* 11ec3d67 mov dword ptr [0x11ee2af0], 0 */
  w32((uint32_t)(0x11ee2af0), (0x0u));
  /* 11ec3d71 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d74 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3d78 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3d79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3d7c push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3d80 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3d81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec3d84 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11ec3d8a push edx */
  push32((uint32_t)(EDX));
  /* 11ec3d8b call 0x11ec40d0 */
  push32(0x11ec3d90u); f_11ec40d0();
  /* 11ec3d90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3d93 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3d98:;
  /* 11ec3d98 mov eax, dword ptr [0x11ee2af0] */
  EAX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3d9d mov dword ptr [0x11ee2b00], eax */
  w32((uint32_t)(0x11ee2b00), (EAX));
  /* 11ec3da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3da5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ec3da8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3da9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ec3dae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3db0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec3db3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3db6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3db7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3dba push eax */
  push32((uint32_t)(EAX));
  /* 11ec3dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3dc1 call 0x11ec3f70 */
  push32(0x11ec3dc6u); f_11ec3f70();
  /* 11ec3dc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3dc9 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3dce:;
  /* 11ec3dce mov edx, dword ptr [0x11ee2af0] */
  EDX = (r32((uint32_t)(0x11ee2af0)));
  /* 11ec3dd4 mov dword ptr [0x11ee2b00], edx */
  w32((uint32_t)(0x11ee2b00), (EDX));
  /* 11ec3dda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3ddd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ec3de0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3de1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ec3de6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3de8 mov ecx, eax */
  ECX = (EAX);
  /* 11ec3dea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3ded imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec3df0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3df3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec3df6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3df7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11ec3dfc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3dfe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3e00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec3e03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3e06 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3e07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3e0a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3e0b push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec3e0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3e10 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3e11 call 0x11ec3f70 */
  push32(0x11ec3e16u); f_11ec3f70();
  /* 11ec3e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3e19 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3e1b:;
  /* 11ec3e1b call 0x11ec4f30 */
  push32(0x11ec3e20u); f_11ec4f30();
  /* 11ec3e20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3e23 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3e24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3e27 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3e28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec3e2d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3e31 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11ec3e34 mov ecx, dword ptr [eax*4 + 0x11ee1e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee1e1c)));
  /* 11ec3e3b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3e3c call 0x11ec3f20 */
  push32(0x11ec3e41u); f_11ec3f20();
  /* 11ec3e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3e44 jmp 0x11ec3e68 */
  goto L_11ec3e68;
L_11ec3e46:;
  /* 11ec3e46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3e49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec3e4b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11ec3e4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3e51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3e53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3e59 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3e5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3e5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3e60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3e63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3e66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ec3e68:;
  /* 11ec3e68 pop esi */
  ESI = (pop32());
  /* 11ec3e69 mov esp, ebp */
  ESP = (EBP);
  /* 11ec3e6b pop ebp */
  EBP = (pop32());
  /* 11ec3e6c ret  */
  ESPCHK(0x11ec3900u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11ec3f20 (72 bytes, 30 insns) */
void f_11ec3f20(void) {
  FTRACE(0x11ec3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3f21 mov ebp, esp */
  EBP = (ESP);
L_11ec3f23:;
  /* 11ec3f23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3f26 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3f29 je 0x11ec3f66 */
  if (C.zf) goto L_11ec3f66;
  /* 11ec3f2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3f2e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec3f31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec3f33 je 0x11ec3f66 */
  if (C.zf) goto L_11ec3f66;
  /* 11ec3f35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3f38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec3f3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3f3d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec3f3f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec3f41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3f44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec3f46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3f4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec3f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3f51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3f54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ec3f57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3f5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec3f5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3f5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3f62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec3f64 jmp 0x11ec3f23 */
  goto L_11ec3f23;
L_11ec3f66:;
  /* 11ec3f66 pop ebp */
  EBP = (pop32());
  /* 11ec3f67 ret  */
  ESPCHK(0x11ec3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f70 @ 0x11ec3f70 (173 bytes, 64 insns) */
void f_11ec3f70(void) {
  FTRACE(0x11ec3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3f71 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec3f7b cmp dword ptr [0x11ee2b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3f82 je 0x11ec3f9a */
  if (C.zf) goto L_11ec3f9a;
  /* 11ec3f84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3f87 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3f88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3f8b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3f8f push edx */
  push32((uint32_t)(EDX));
  /* 11ec3f90 call 0x11ec4020 */
  push32(0x11ec3f95u); f_11ec4020();
  /* 11ec3f95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3f98 jmp 0x11ec4019 */
  goto L_11ec4019;
L_11ec3f9a:;
  /* 11ec3f9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3fa0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3fa2 jae 0x11ec4010 */
  if (!C.cf) goto L_11ec4010;
  /* 11ec3fa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3fa7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3faa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11ec3fad jmp 0x11ec3fb8 */
  goto L_11ec3fb8;
L_11ec3faf:;
  /* 11ec3faf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3fb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3fb5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ec3fb8:;
  /* 11ec3fb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3fbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3fbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec3fc0 je 0x11ec3ff4 */
  if (C.zf) goto L_11ec3ff4;
  /* 11ec3fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3fc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3fc6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ec3fcb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3fcd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3fd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec3fd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3fd8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11ec3fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3fde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec3fdf mov ecx, 0xa */
  ECX = (0xau);
  /* 11ec3fe4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec3fe6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec3fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3fec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3fef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec3ff2 jmp 0x11ec3faf */
  goto L_11ec3faf;
L_11ec3ff4:;
  /* 11ec3ff4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3ff7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec3ff9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3ffc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec3fff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ec4001 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4004 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec4006 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4009 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec400c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ec400e jmp 0x11ec4019 */
  goto L_11ec4019;
L_11ec4010:;
  /* 11ec4010 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4013 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ec4019:;
  /* 11ec4019 mov esp, ebp */
  ESP = (EBP);
  /* 11ec401b pop ebp */
  EBP = (pop32());
  /* 11ec401c ret  */
  ESPCHK(0x11ec3f70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11ec4020 (172 bytes, 65 insns) */
void f_11ec4020(void) {
  FTRACE(0x11ec4020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4020 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4021 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4026 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec4029 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec402b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec402e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4031 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4034 jbe 0x11ec407b */
  if ((C.cf||C.zf)) goto L_11ec407b;
L_11ec4036:;
  /* 11ec4036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4039 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec403a mov ecx, 0xa */
  ECX = (0xau);
  /* 11ec403f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec4041 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4047 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ec4049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec404c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec404f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec4052 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4055 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec4057 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec405a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec405d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec405f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4062 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec4063 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ec4068 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec406a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec406d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4071 jle 0x11ec407b */
  if ((C.zf||C.sf!=C.of)) goto L_11ec407b;
  /* 11ec4073 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4076 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4079 ja 0x11ec4036 */
  if ((!C.cf&&!C.zf)) goto L_11ec4036;
L_11ec407b:;
  /* 11ec407b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec407e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec4080 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec4083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec4086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4089 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ec408b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec408e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4091 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ec4094:;
  /* 11ec4094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4097 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4099 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ec409c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec409f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec40a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec40a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec40a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec40a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec40ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec40af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec40b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ec40b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ec40b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec40ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec40bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec40c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec40c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec40c6 jb 0x11ec4094 */
  if (C.cf) goto L_11ec4094;
  /* 11ec40c8 mov esp, ebp */
  ESP = (EBP);
  /* 11ec40ca pop ebp */
  EBP = (pop32());
  /* 11ec40cb ret  */
  ESPCHK(0x11ec4020u, _esp0);
  ESP += 4; return;
}

/* FUN_100140d0 @ 0x11ec40d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11ec40d0(void) {
  FTRACE(0x11ec40d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec40d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec40d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec40d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11ec40d6:;
  /* 11ec40d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec40d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec40dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec40de je 0x11ec454c */
  if (C.zf) goto L_11ec454c;
  /* 11ec40e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec40e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec40ea je 0x11ec454c */
  if (C.zf) goto L_11ec454c;
  /* 11ec40f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec40f4 mov dword ptr [0x11ee2b00], 0 */
  w32((uint32_t)(0x11ee2b00), (0x0u));
  /* 11ec40fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ec4105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4108 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec410b jmp 0x11ec4116 */
  goto L_11ec4116;
L_11ec410d:;
  /* 11ec410d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4110 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4113 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ec4116:;
  /* 11ec4116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4119 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec411c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec411f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec4122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4128 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec412b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec412d jne 0x11ec4131 */
  if (!C.zf) goto L_11ec4131;
  /* 11ec412f jmp 0x11ec410d */
  goto L_11ec410d;
L_11ec4131:;
  /* 11ec4131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4134 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4137 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec413a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec413d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec4140 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec4143 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec4146 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4149 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec414c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4150 ja 0x11ec44a0 */
  if ((!C.cf&&!C.zf)) goto L_11ec44a0;
  /* 11ec4156 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec4159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec415b mov al, byte ptr [ecx + 0x11ec457c] */
  AL = (r8((uint32_t)(ECX + 0x11ec457c)));
  /* 11ec4161 jmp dword ptr [eax*4 + 0x11ec4550] */
  switch (EAX) {
    case 0: goto L_11ec43bf;
    case 1: goto L_11ec42a3;
    case 2: goto L_11ec422e;
    case 3: goto L_11ec4168;
    case 4: goto L_11ec41a6;
    case 5: goto L_11ec4207;
    case 6: goto L_11ec4255;
    case 7: goto L_11ec427c;
    case 8: goto L_11ec42ea;
    case 9: goto L_11ec41e4;
    case 10: goto L_11ec44a0;
    default: x86_unimpl("switch@0x11ec4161 out of table"); return;
  }
L_11ec4168:;
  /* 11ec4168 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec416b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ec416e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec4171 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4174 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ec4177 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec417b ja 0x11ec41a1 */
  if ((!C.cf&&!C.zf)) goto L_11ec41a1;
  /* 11ec417d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec4180 jmp dword ptr [ecx*4 + 0x11ec45cf] */
  switch (ECX) {
    case 0: goto L_11ec4187;
    case 1: goto L_11ec4191;
    case 2: goto L_11ec4197;
    case 3: goto L_11ec419d;
    case 4: goto L_11ec41c5;
    case 5: goto L_11ec41cf;
    case 6: goto L_11ec41d5;
    case 7: goto L_11ec41db;
    default: x86_unimpl("switch@0x11ec4180 out of table"); return;
  }
L_11ec4187:;
  /* 11ec4187 mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec4191:;
  /* 11ec4191 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11ec4195 jmp 0x11ec41a1 */
  goto L_11ec41a1;
L_11ec4197:;
  /* 11ec4197 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11ec419b jmp 0x11ec41a1 */
  goto L_11ec41a1;
L_11ec419d:;
  /* 11ec419d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11ec41a1:;
  /* 11ec41a1 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec41a6:;
  /* 11ec41a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec41a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ec41ac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec41af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec41b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ec41b5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec41b9 ja 0x11ec41df */
  if ((!C.cf&&!C.zf)) goto L_11ec41df;
  /* 11ec41bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec41be jmp dword ptr [ecx*4 + 0x11ec45df] */
  switch (ECX) {
    case 0: goto L_11ec41c5;
    case 1: goto L_11ec41cf;
    case 2: goto L_11ec41d5;
    case 3: goto L_11ec41db;
    default: x86_unimpl("switch@0x11ec41be out of table"); return;
  }
L_11ec41c5:;
  /* 11ec41c5 mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec41cf:;
  /* 11ec41cf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11ec41d3 jmp 0x11ec41df */
  goto L_11ec41df;
L_11ec41d5:;
  /* 11ec41d5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11ec41d9 jmp 0x11ec41df */
  goto L_11ec41df;
L_11ec41db:;
  /* 11ec41db mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11ec41df:;
  /* 11ec41df jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec41e4:;
  /* 11ec41e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec41e7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ec41ea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec41ee je 0x11ec41f8 */
  if (C.zf) goto L_11ec41f8;
  /* 11ec41f0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec41f4 je 0x11ec41fe */
  if (C.zf) goto L_11ec41fe;
  /* 11ec41f6 jmp 0x11ec4202 */
  goto L_11ec4202;
L_11ec41f8:;
  /* 11ec41f8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11ec41fc jmp 0x11ec4202 */
  goto L_11ec4202;
L_11ec41fe:;
  /* 11ec41fe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11ec4202:;
  /* 11ec4202 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec4207:;
  /* 11ec4207 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec420a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ec420d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4211 je 0x11ec421b */
  if (C.zf) goto L_11ec421b;
  /* 11ec4213 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4217 je 0x11ec4225 */
  if (C.zf) goto L_11ec4225;
  /* 11ec4219 jmp 0x11ec4229 */
  goto L_11ec4229;
L_11ec421b:;
  /* 11ec421b mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec4225:;
  /* 11ec4225 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11ec4229:;
  /* 11ec4229 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec422e:;
  /* 11ec422e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4231 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ec4234 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4238 je 0x11ec4242 */
  if (C.zf) goto L_11ec4242;
  /* 11ec423a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec423e je 0x11ec424c */
  if (C.zf) goto L_11ec424c;
  /* 11ec4240 jmp 0x11ec4250 */
  goto L_11ec4250;
L_11ec4242:;
  /* 11ec4242 mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec424c:;
  /* 11ec424c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11ec4250:;
  /* 11ec4250 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec4255:;
  /* 11ec4255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4258 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11ec425b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec425f je 0x11ec4269 */
  if (C.zf) goto L_11ec4269;
  /* 11ec4261 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4265 je 0x11ec4273 */
  if (C.zf) goto L_11ec4273;
  /* 11ec4267 jmp 0x11ec4277 */
  goto L_11ec4277;
L_11ec4269:;
  /* 11ec4269 mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec4273:;
  /* 11ec4273 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11ec4277:;
  /* 11ec4277 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec427c:;
  /* 11ec427c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec427f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ec4282 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4286 je 0x11ec4290 */
  if (C.zf) goto L_11ec4290;
  /* 11ec4288 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec428c je 0x11ec429a */
  if (C.zf) goto L_11ec429a;
  /* 11ec428e jmp 0x11ec429e */
  goto L_11ec429e;
L_11ec4290:;
  /* 11ec4290 mov dword ptr [0x11ee2b00], 1 */
  w32((uint32_t)(0x11ee2b00), (0x1u));
L_11ec429a:;
  /* 11ec429a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11ec429e:;
  /* 11ec429e jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec42a3:;
  /* 11ec42a3 push 0x11edebcc */
  push32((uint32_t)(0x11edebccu));
  /* 11ec42a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec42ab push ecx */
  push32((uint32_t)(ECX));
  /* 11ec42ac call 0x11ec4b00 */
  push32(0x11ec42b1u); f_11ec4b00();
  /* 11ec42b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec42b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec42b6 jne 0x11ec42c3 */
  if (!C.zf) goto L_11ec42c3;
  /* 11ec42b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec42bb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec42be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec42c1 jmp 0x11ec42e1 */
  goto L_11ec42e1;
L_11ec42c3:;
  /* 11ec42c3 push 0x11edebc8 */
  push32((uint32_t)(0x11edebc8u));
  /* 11ec42c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec42cb push eax */
  push32((uint32_t)(EAX));
  /* 11ec42cc call 0x11ec4b00 */
  push32(0x11ec42d1u); f_11ec4b00();
  /* 11ec42d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec42d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec42d6 jne 0x11ec42e1 */
  if (!C.zf) goto L_11ec42e1;
  /* 11ec42d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec42db add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec42de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ec42e1:;
  /* 11ec42e1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11ec42e5 jmp 0x11ec44a0 */
  goto L_11ec44a0;
L_11ec42ea:;
  /* 11ec42ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec42ed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec42f1 jg 0x11ec4301 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec4301;
  /* 11ec42f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec42f6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11ec42fc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ec42ff jmp 0x11ec430d */
  goto L_11ec430d;
L_11ec4301:;
  /* 11ec4301 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec4304 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11ec430a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ec430d:;
  /* 11ec430d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4311 jle 0x11ec43b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec43b4;
  /* 11ec4317 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec431a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec431d jbe 0x11ec43b4 */
  if ((C.cf||C.zf)) goto L_11ec43b4;
  /* 11ec4323 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec4326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4328 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec432a mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4330 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4332 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4336 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec433c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec433e je 0x11ec4377 */
  if (C.zf) goto L_11ec4377;
  /* 11ec4340 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4343 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4346 jbe 0x11ec4377 */
  if ((C.cf||C.zf)) goto L_11ec4377;
  /* 11ec4348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec434b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec434d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec4350 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4352 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ec4354 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4357 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec4359 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec435c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec435f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec4361 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec4364 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4367 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ec436a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec436d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec436f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4372 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4375 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ec4377:;
  /* 11ec4377 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec437a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec437c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec437f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4381 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec4383 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4386 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec4388 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec438b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec438e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec4390 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec4393 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4396 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ec4399 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec439c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec439e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec43a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec43a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec43a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec43a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec43ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ec43af jmp 0x11ec430d */
  goto L_11ec430d;
L_11ec43b4:;
  /* 11ec43b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec43b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec43ba jmp 0x11ec40d6 */
  goto L_11ec40d6;
L_11ec43bf:;
  /* 11ec43bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec43c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec43c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec43c7 je 0x11ec4492 */
  if (C.zf) goto L_11ec4492;
  /* 11ec43cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec43d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec43d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ec43d6:;
  /* 11ec43d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec43d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec43dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec43de je 0x11ec4490 */
  if (C.zf) goto L_11ec4490;
  /* 11ec43e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec43e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec43ea je 0x11ec4490 */
  if (C.zf) goto L_11ec4490;
  /* 11ec43f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec43f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec43f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec43f9 jne 0x11ec4409 */
  if (!C.zf) goto L_11ec4409;
  /* 11ec43fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec43fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4401 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ec4404 jmp 0x11ec4490 */
  goto L_11ec4490;
L_11ec4409:;
  /* 11ec4409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec440c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec440e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4410 mov edx, dword ptr [0x11ee0c98] */
  EDX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4418 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ec441c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec4423 je 0x11ec445c */
  if (C.zf) goto L_11ec445c;
  /* 11ec4425 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4428 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec442b jbe 0x11ec445c */
  if ((C.cf||C.zf)) goto L_11ec445c;
  /* 11ec442d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4430 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec4432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4435 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec4437 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ec4439 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec443c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec443e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4441 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4444 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ec4446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec444c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec444f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4452 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec4454 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4457 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec445a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ec445c:;
  /* 11ec445c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec445f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec4461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4464 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4466 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ec4468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec446b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec446d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4470 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4473 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec4475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4478 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec447b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ec447e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4481 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec4483 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4486 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4489 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ec448b jmp 0x11ec43d6 */
  goto L_11ec43d6;
L_11ec4490:;
  /* 11ec4490 jmp 0x11ec449b */
  goto L_11ec449b;
L_11ec4492:;
  /* 11ec4492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4495 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4498 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ec449b:;
  /* 11ec449b jmp 0x11ec40d6 */
  goto L_11ec40d6;
L_11ec44a0:;
  /* 11ec44a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec44a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec44a6 je 0x11ec44cc */
  if (C.zf) goto L_11ec44cc;
  /* 11ec44a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec44ab push edx */
  push32((uint32_t)(EDX));
  /* 11ec44ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec44af push eax */
  push32((uint32_t)(EAX));
  /* 11ec44b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec44b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec44b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec44b7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec44b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ec44bb push eax */
  push32((uint32_t)(EAX));
  /* 11ec44bc call 0x11ec3900 */
  push32(0x11ec44c1u); f_11ec3900();
  /* 11ec44c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec44c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec44c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ec44ca jmp 0x11ec4547 */
  goto L_11ec4547;
L_11ec44cc:;
  /* 11ec44cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec44cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec44d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec44d3 mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec44d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec44db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec44df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec44e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec44e7 je 0x11ec4518 */
  if (C.zf) goto L_11ec4518;
  /* 11ec44e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec44ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec44ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec44f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec44f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec44f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec44f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec44fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec44fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4500 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec4502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4505 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4508 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ec450b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec450e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec4510 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4513 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4516 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ec4518:;
  /* 11ec4518 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec451b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec451d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4520 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec4522 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ec4524 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4527 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec4529 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec452c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec452f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ec4531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4534 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4537 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec453a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec453d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec453f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4542 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4545 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ec4547:;
  /* 11ec4547 jmp 0x11ec40d6 */
  goto L_11ec40d6;
L_11ec454c:;
  /* 11ec454c mov esp, ebp */
  ESP = (EBP);
  /* 11ec454e pop ebp */
  EBP = (pop32());
  /* 11ec454f ret  */
  ESPCHK(0x11ec40d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x11ec45f0 (650 bytes, 178 insns) */
void f_11ec45f0(void) {
  FTRACE(0x11ec45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec45f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec45f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec45f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec45fd jne 0x11ec4759 */
  if (!C.zf) goto L_11ec4759;
  /* 11ec4603 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4606 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11ec460c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11ec4612 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec4615 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec461c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11ec4626 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4628 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ec462e push edx */
  push32((uint32_t)(EDX));
  /* 11ec462f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4632 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4633 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4636 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4637 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec463a push edx */
  push32((uint32_t)(EDX));
  /* 11ec463b call 0x11ec5a10 */
  push32(0x11ec4640u); f_11ec5a10();
  /* 11ec4640 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4643 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec4646 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec464a jne 0x11ec46df */
  if (!C.zf) goto L_11ec46df;
  /* 11ec4650 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ec4656u);
  /* 11ec4656 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4659 je 0x11ec4660 */
  if (C.zf) goto L_11ec4660;
  /* 11ec465b jmp 0x11ec473d */
  goto L_11ec473d;
L_11ec4660:;
  /* 11ec4660 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4666 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4669 push eax */
  push32((uint32_t)(EAX));
  /* 11ec466a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec466d push ecx */
  push32((uint32_t)(ECX));
  /* 11ec466e call 0x11ec5a10 */
  push32(0x11ec4673u); f_11ec5a10();
  /* 11ec4673 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4676 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11ec467c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4683 jne 0x11ec468a */
  if (!C.zf) goto L_11ec468a;
  /* 11ec4685 jmp 0x11ec473d */
  goto L_11ec473d;
L_11ec468a:;
  /* 11ec468a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11ec468c push 0x11edebd4 */
  push32((uint32_t)(0x11edebd4u));
  /* 11ec4691 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec4693 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ec4699 push edx */
  push32((uint32_t)(EDX));
  /* 11ec469a call 0x11eb6430 */
  push32(0x11ec469fu); f_11eb6430();
  /* 11ec469f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec46a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec46a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec46a9 jne 0x11ec46b0 */
  if (!C.zf) goto L_11ec46b0;
  /* 11ec46ab jmp 0x11ec473d */
  goto L_11ec473d;
L_11ec46b0:;
  /* 11ec46b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ec46b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec46b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ec46bf push eax */
  push32((uint32_t)(EAX));
  /* 11ec46c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec46c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec46c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec46c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec46c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec46cb push eax */
  push32((uint32_t)(EAX));
  /* 11ec46cc call 0x11ec5a10 */
  push32(0x11ec46d1u); f_11ec5a10();
  /* 11ec46d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec46d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec46d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec46db jne 0x11ec46df */
  if (!C.zf) goto L_11ec46df;
  /* 11ec46dd jmp 0x11ec473d */
  goto L_11ec473d;
L_11ec46df:;
  /* 11ec46df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ec46e1 push 0x11edebd4 */
  push32((uint32_t)(0x11edebd4u));
  /* 11ec46e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec46e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec46eb push ecx */
  push32((uint32_t)(ECX));
  /* 11ec46ec call 0x11eb6430 */
  push32(0x11ec46f1u); f_11eb6430();
  /* 11ec46f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec46f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ec46fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ec46fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ec4702 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4705 jne 0x11ec4709 */
  if (!C.zf) goto L_11ec4709;
  /* 11ec4707 jmp 0x11ec473d */
  goto L_11ec473d;
L_11ec4709:;
  /* 11ec4709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec470c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec470d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4710 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4711 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ec4717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec4719 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec471a call 0x11eb9c50 */
  push32(0x11ec471fu); f_11eb9c50();
  /* 11ec471f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4722 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4726 je 0x11ec4736 */
  if (C.zf) goto L_11ec4736;
  /* 11ec4728 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec472a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec472d push edx */
  push32((uint32_t)(EDX));
  /* 11ec472e call 0x11eb6ec0 */
  push32(0x11ec4733u); f_11eb6ec0();
  /* 11ec4733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec4736:;
  /* 11ec4736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4738 jmp 0x11ec4876 */
  goto L_11ec4876;
L_11ec473d:;
  /* 11ec473d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4741 je 0x11ec4751 */
  if (C.zf) goto L_11ec4751;
  /* 11ec4743 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec4745 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4748 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4749 call 0x11eb6ec0 */
  push32(0x11ec474eu); f_11eb6ec0();
  /* 11ec474e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec4751:;
  /* 11ec4751 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4754 jmp 0x11ec4876 */
  goto L_11ec4876;
L_11ec4759:;
  /* 11ec4759 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec475d jne 0x11ec4873 */
  if (!C.zf) goto L_11ec4873;
  /* 11ec4763 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11ec476d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4770 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ec4776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4778 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ec477e push edx */
  push32((uint32_t)(EDX));
  /* 11ec477f push 0x11ee2a18 */
  push32((uint32_t)(0x11ee2a18u));
  /* 11ec4784 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4787 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4788 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec478b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec478c call 0x11ec5870 */
  push32(0x11ec4791u); f_11ec5870();
  /* 11ec4791 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec4796 jne 0x11ec47a0 */
  if (!C.zf) goto L_11ec47a0;
  /* 11ec4798 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec479b jmp 0x11ec4876 */
  goto L_11ec4876;
L_11ec47a0:;
  /* 11ec47a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec47a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ec47a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11ec47b3 jmp 0x11ec47c4 */
  goto L_11ec47c4;
L_11ec47b5:;
  /* 11ec47b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec47bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec47be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11ec47c4:;
  /* 11ec47c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec47cb jge 0x11ec486f */
  if ((C.sf==C.of)) goto L_11ec486f;
  /* 11ec47d1 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec47d8 jle 0x11ec480b */
  if ((C.zf||C.sf!=C.of)) goto L_11ec480b;
  /* 11ec47da push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec47dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec47e2 mov dl, byte ptr [ecx*2 + 0x11ee2a18] */
  DL = (r8((uint32_t)(ECX*2 + 0x11ee2a18)));
  /* 11ec47e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11ec47ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ec47f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec47fa push eax */
  push32((uint32_t)(EAX));
  /* 11ec47fb call 0x11ebc440 */
  push32(0x11ec4800u); f_11ebc440();
  /* 11ec4800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4803 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11ec4809 jmp 0x11ec483e */
  goto L_11ec483e;
L_11ec480b:;
  /* 11ec480b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec4811 mov dl, byte ptr [ecx*2 + 0x11ee2a18] */
  DL = (r8((uint32_t)(ECX*2 + 0x11ee2a18)));
  /* 11ec4818 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11ec481e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ec4824 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4829 mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec482f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4831 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4835 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4838 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11ec483e:;
  /* 11ec483e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4845 je 0x11ec4868 */
  if (C.zf) goto L_11ec4868;
  /* 11ec4847 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec484d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec4850 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec4853 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11ec485a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ec485e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec4864 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec4866 jmp 0x11ec486a */
  goto L_11ec486a;
L_11ec4868:;
  /* 11ec4868 jmp 0x11ec486f */
  goto L_11ec486f;
L_11ec486a:;
  /* 11ec486a jmp 0x11ec47b5 */
  goto L_11ec47b5;
L_11ec486f:;
  /* 11ec486f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4871 jmp 0x11ec4876 */
  goto L_11ec4876;
L_11ec4873:;
  /* 11ec4873 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ec4876:;
  /* 11ec4876 mov esp, ebp */
  ESP = (EBP);
  /* 11ec4878 pop ebp */
  EBP = (pop32());
  /* 11ec4879 ret  */
  ESPCHK(0x11ec45f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014880 @ 0x11ec4880 (10 bytes, 5 insns) */
void f_11ec4880(void) {
  FTRACE(0x11ec4880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4880 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4881 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4883 mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec4888 pop ebp */
  EBP = (pop32());
  /* 11ec4889 ret  */
  ESPCHK(0x11ec4880u, _esp0);
  ESP += 4; return;
}

/* FUN_10014890 @ 0x11ec4890 (575 bytes, 196 insns) */
void f_11ec4890(void) {
  FTRACE(0x11ec4890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4890 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4891 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4893 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec4895 push 0x11edebe0 */
  push32((uint32_t)(0x11edebe0u));
  /* 11ec489a push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ec489f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ec48a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec48a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ec48ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec48b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec48b1 push esi */
  push32((uint32_t)(ESI));
  /* 11ec48b2 push edi */
  push32((uint32_t)(EDI));
  /* 11ec48b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec48b6 cmp dword ptr [0x11ee2a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec48bd jne 0x11ec490e */
  if (!C.zf) goto L_11ec490e;
  /* 11ec48bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ec48c2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec48c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec48c5 push 0x11ede314 */
  push32((uint32_t)(0x11ede314u));
  /* 11ec48ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec48cc call dword ptr [0x11ee531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee531c))), 0x11ec48d2u);
  /* 11ec48d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec48d4 je 0x11ec48e2 */
  if (C.zf) goto L_11ec48e2;
  /* 11ec48d6 mov dword ptr [0x11ee2a24], 1 */
  w32((uint32_t)(0x11ee2a24), (0x1u));
  /* 11ec48e0 jmp 0x11ec490e */
  goto L_11ec490e;
L_11ec48e2:;
  /* 11ec48e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11ec48e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec48e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec48e8 push 0x11ede310 */
  push32((uint32_t)(0x11ede310u));
  /* 11ec48ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec48ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec48f1 call dword ptr [0x11ee5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5320))), 0x11ec48f7u);
  /* 11ec48f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec48f9 je 0x11ec4907 */
  if (C.zf) goto L_11ec4907;
  /* 11ec48fb mov dword ptr [0x11ee2a24], 2 */
  w32((uint32_t)(0x11ee2a24), (0x2u));
  /* 11ec4905 jmp 0x11ec490e */
  goto L_11ec490e;
L_11ec4907:;
  /* 11ec4907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4909 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec490e:;
  /* 11ec490e cmp dword ptr [0x11ee2a24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4915 jne 0x11ec4932 */
  if (!C.zf) goto L_11ec4932;
  /* 11ec4917 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec491a push edx */
  push32((uint32_t)(EDX));
  /* 11ec491b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec491e push eax */
  push32((uint32_t)(EAX));
  /* 11ec491f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec4922 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4923 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4926 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4927 call dword ptr [0x11ee531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee531c))), 0x11ec492du);
  /* 11ec492d jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec4932:;
  /* 11ec4932 cmp dword ptr [0x11ee2a24], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4939 jne 0x11ec4ae7 */
  if (!C.zf) goto L_11ec4ae7;
  /* 11ec493f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4943 jne 0x11ec494d */
  if (!C.zf) goto L_11ec494d;
  /* 11ec4945 mov eax, dword ptr [0x11ee2998] */
  EAX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec494a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11ec494d:;
  /* 11ec494d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec494f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4953 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4958 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4959 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec495c push edx */
  push32((uint32_t)(EDX));
  /* 11ec495d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec4962 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec4965 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4966 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec496cu);
  /* 11ec496c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ec496f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4973 jne 0x11ec497c */
  if (!C.zf) goto L_11ec497c;
  /* 11ec4975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4977 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec497c:;
  /* 11ec497c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec4983 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec4986 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4989 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec498b call 0x11eb95d0 */
  push32(0x11ec4990u); f_11eb95d0();
  /* 11ec4990 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11ec4993 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec4996 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec4999 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ec499c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec499f push edx */
  push32((uint32_t)(EDX));
  /* 11ec49a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec49a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec49a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec49a6 call 0x11eba1a0 */
  push32(0x11ec49abu); f_11eba1a0();
  /* 11ec49ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec49ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec49b5 jmp 0x11ec49ce */
  goto L_11ec49ce;
  /* 11ec49b7 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec49bc ret  */
  ESPCHK(0x11ec4890u, _esp0);
  ESP += 4; return;
  /* 11ec49bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec49c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ec49c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec49ce:;
  /* 11ec49ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec49d2 jne 0x11ec49db */
  if (!C.zf) goto L_11ec49db;
  /* 11ec49d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec49d6 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec49db:;
  /* 11ec49db push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec49dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec49df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec49e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec49e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec49e6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec49e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec49ea push eax */
  push32((uint32_t)(EAX));
  /* 11ec49eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec49ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ec49ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec49f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec49f7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec49f8 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec49feu);
  /* 11ec49fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec4a00 jne 0x11ec4a09 */
  if (!C.zf) goto L_11ec4a09;
  /* 11ec4a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4a04 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec4a09:;
  /* 11ec4a09 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ec4a10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec4a13 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11ec4a17 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4a1a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec4a1c call 0x11eb95d0 */
  push32(0x11ec4a21u); f_11eb95d0();
  /* 11ec4a21 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11ec4a24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec4a27 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ec4a2a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ec4a2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec4a34 jmp 0x11ec4a4d */
  goto L_11ec4a4d;
  /* 11ec4a36 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec4a3b ret  */
  ESPCHK(0x11ec4890u, _esp0);
  ESP += 4; return;
  /* 11ec4a3c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec4a3f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ec4a46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec4a4d:;
  /* 11ec4a4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4a51 jne 0x11ec4a5a */
  if (!C.zf) goto L_11ec4a5a;
  /* 11ec4a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4a55 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec4a5a:;
  /* 11ec4a5a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4a5e jne 0x11ec4a69 */
  if (!C.zf) goto L_11ec4a69;
  /* 11ec4a60 mov edx, dword ptr [0x11ee2988] */
  EDX = (r32((uint32_t)(0x11ee2988)));
  /* 11ec4a66 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11ec4a69:;
  /* 11ec4a69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4a6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4a6f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11ec4a75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4a78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4a7b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11ec4a82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4a85 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4a86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec4a89 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4a8a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec4a8d push eax */
  push32((uint32_t)(EAX));
  /* 11ec4a8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4a91 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4a92 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec4a95 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4a96 call dword ptr [0x11ee5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5320))), 0x11ec4a9cu);
  /* 11ec4a9c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ec4a9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4aa2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4aa5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4aa7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11ec4aac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ab2 je 0x11ec4ac8 */
  if (C.zf) goto L_11ec4ac8;
  /* 11ec4ab4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4ab7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4aba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4abc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4ac0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ac6 je 0x11ec4acc */
  if (C.zf) goto L_11ec4acc;
L_11ec4ac8:;
  /* 11ec4ac8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4aca jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec4acc:;
  /* 11ec4acc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4acf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec4ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4ad2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec4ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4ad6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec4ad9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4ada call 0x11ebe320 */
  push32(0x11ec4adfu); f_11ebe320();
  /* 11ec4adf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4ae2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec4ae5 jmp 0x11ec4ae9 */
  goto L_11ec4ae9;
L_11ec4ae7:;
  /* 11ec4ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec4ae9:;
  /* 11ec4ae9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11ec4aec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec4aef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ec4af6 pop edi */
  EDI = (pop32());
  /* 11ec4af7 pop esi */
  ESI = (pop32());
  /* 11ec4af8 pop ebx */
  EBX = (pop32());
  /* 11ec4af9 mov esp, ebp */
  ESP = (EBP);
  /* 11ec4afb pop ebp */
  EBP = (pop32());
  /* 11ec4afc ret  */
  ESPCHK(0x11ec4890u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b00 @ 0x11ec4b00 (208 bytes, 85 insns) */
void f_11ec4b00(void) {
  FTRACE(0x11ec4b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4b01 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4b03 push edi */
  push32((uint32_t)(EDI));
  /* 11ec4b04 push esi */
  push32((uint32_t)(ESI));
  /* 11ec4b05 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec4b06 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec4b09 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4b0c lea eax, [0x11ee2980] */
  EAX = ((uint32_t)(0x11ee2980));
  /* 11ec4b12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4b16 jne 0x11ec4b53 */
  if (!C.zf) goto L_11ec4b53;
  /* 11ec4b18 mov al, 0xff */
  AL = (0xffu);
  /* 11ec4b1a mov edi, edi */
  EDI = (EDI);
L_11ec4b1c:;
  /* 11ec4b1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec4b1e je 0x11ec4b4e */
  if (C.zf) goto L_11ec4b4e;
  /* 11ec4b20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ec4b22 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec4b23 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11ec4b25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ec4b26 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4b28 je 0x11ec4b1c */
  if (C.zf) goto L_11ec4b1c;
  /* 11ec4b2a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ec4b2c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4b2e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ec4b30 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ec4b33 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec4b35 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec4b37 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11ec4b39 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ec4b3b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4b3d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ec4b3f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ec4b42 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec4b44 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec4b46 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4b48 je 0x11ec4b1c */
  if (C.zf) goto L_11ec4b1c;
  /* 11ec4b4a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ec4b4c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11ec4b4e:;
  /* 11ec4b4e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11ec4b51 jmp 0x11ec4bcb */
  goto L_11ec4bcb;
L_11ec4b53:;
  /* 11ec4b53 lock inc dword ptr [0x11ee2b14] */
  x86_unimpl("lock inc @ 0x11ec4b53");
  /* 11ec4b5a cmp dword ptr [0x11ee2b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4b61 jg 0x11ec4b67 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec4b67;
  /* 11ec4b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4b65 jmp 0x11ec4b7c */
  goto L_11ec4b7c;
L_11ec4b67:;
  /* 11ec4b67 lock dec dword ptr [0x11ee2b14] */
  x86_unimpl("lock dec @ 0x11ec4b67");
  /* 11ec4b6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec4b70 call 0x11eb9e30 */
  push32(0x11ec4b75u); f_11eb9e30();
  /* 11ec4b75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11ec4b7c:;
  /* 11ec4b7c mov eax, 0xff */
  EAX = (0xffu);
  /* 11ec4b81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ec4b83 nop  */
  /* nop */
L_11ec4b84:;
  /* 11ec4b84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec4b86 je 0x11ec4baf */
  if (C.zf) goto L_11ec4baf;
  /* 11ec4b88 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ec4b8a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec4b8b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ec4b8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ec4b8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4b90 je 0x11ec4b84 */
  if (C.zf) goto L_11ec4b84;
  /* 11ec4b92 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4b93 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec4b94 call 0x11ec5c70 */
  push32(0x11ec4b99u); f_11ec5c70();
  /* 11ec4b99 mov ebx, eax */
  EBX = (EAX);
  /* 11ec4b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4b9e call 0x11ec5c70 */
  push32(0x11ec4ba3u); f_11ec5c70();
  /* 11ec4ba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4ba6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4ba8 je 0x11ec4b84 */
  if (C.zf) goto L_11ec4b84;
  /* 11ec4baa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4bac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ec4baf:;
  /* 11ec4baf mov ebx, eax */
  EBX = (EAX);
  /* 11ec4bb1 pop eax */
  EAX = (pop32());
  /* 11ec4bb2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4bb4 jne 0x11ec4bbf */
  if (!C.zf) goto L_11ec4bbf;
  /* 11ec4bb6 lock dec dword ptr [0x11ee2b14] */
  x86_unimpl("lock dec @ 0x11ec4bb6");
  /* 11ec4bbd jmp 0x11ec4bc9 */
  goto L_11ec4bc9;
L_11ec4bbf:;
  /* 11ec4bbf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec4bc1 call 0x11eb9ed0 */
  push32(0x11ec4bc6u); f_11eb9ed0();
  /* 11ec4bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec4bc9:;
  /* 11ec4bc9 mov eax, ebx */
  EAX = (EBX);
L_11ec4bcb:;
  /* 11ec4bcb pop ebx */
  EBX = (pop32());
  /* 11ec4bcc pop esi */
  ESI = (pop32());
  /* 11ec4bcd pop edi */
  EDI = (pop32());
  /* 11ec4bce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ec4bcf ret  */
  ESPCHK(0x11ec4b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bd0 @ 0x11ec4bd0 (257 bytes, 103 insns) */
void f_11ec4bd0(void) {
  FTRACE(0x11ec4bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4bd3 push edi */
  push32((uint32_t)(EDI));
  /* 11ec4bd4 push esi */
  push32((uint32_t)(ESI));
  /* 11ec4bd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec4bd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec4bd9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4bdb je 0x11ec4cca */
  if (C.zf) goto L_11ec4cca;
  /* 11ec4be1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4be4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec4be7 lea eax, [0x11ee2980] */
  EAX = ((uint32_t)(0x11ee2980));
  /* 11ec4bed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4bf1 jne 0x11ec4c41 */
  if (!C.zf) goto L_11ec4c41;
  /* 11ec4bf3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11ec4bf5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11ec4bf7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11ec4bf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ec4bfc:;
  /* 11ec4bfc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11ec4bfe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ec4c00 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11ec4c02 je 0x11ec4c25 */
  if (C.zf) goto L_11ec4c25;
  /* 11ec4c04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec4c06 je 0x11ec4c25 */
  if (C.zf) goto L_11ec4c25;
  /* 11ec4c08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec4c09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ec4c0a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c0c jb 0x11ec4c14 */
  if (C.cf) goto L_11ec4c14;
  /* 11ec4c0e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c10 ja 0x11ec4c14 */
  if ((!C.cf&&!C.zf)) goto L_11ec4c14;
  /* 11ec4c12 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11ec4c14:;
  /* 11ec4c14 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c16 jb 0x11ec4c1e */
  if (C.cf) goto L_11ec4c1e;
  /* 11ec4c18 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c1a ja 0x11ec4c1e */
  if ((!C.cf&&!C.zf)) goto L_11ec4c1e;
  /* 11ec4c1c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11ec4c1e:;
  /* 11ec4c1e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c20 jne 0x11ec4c2f */
  if (!C.zf) goto L_11ec4c2f;
  /* 11ec4c22 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ec4c23 jne 0x11ec4bfc */
  if (!C.zf) goto L_11ec4bfc;
L_11ec4c25:;
  /* 11ec4c25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4c27 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec4c29 je 0x11ec4cca */
  if (C.zf) goto L_11ec4cca;
L_11ec4c2f:;
  /* 11ec4c2f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ec4c34 jb 0x11ec4cca */
  if (C.cf) goto L_11ec4cca;
  /* 11ec4c3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec4c3c jmp 0x11ec4cca */
  goto L_11ec4cca;
L_11ec4c41:;
  /* 11ec4c41 lock inc dword ptr [0x11ee2b14] */
  x86_unimpl("lock inc @ 0x11ec4c41");
  /* 11ec4c48 cmp dword ptr [0x11ee2b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4c4f jg 0x11ec4c55 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec4c55;
  /* 11ec4c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4c53 jmp 0x11ec4c6e */
  goto L_11ec4c6e;
L_11ec4c55:;
  /* 11ec4c55 lock dec dword ptr [0x11ee2b14] */
  x86_unimpl("lock dec @ 0x11ec4c55");
  /* 11ec4c5c mov ebx, ecx */
  EBX = (ECX);
  /* 11ec4c5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec4c60 call 0x11eb9e30 */
  push32(0x11ec4c65u); f_11eb9e30();
  /* 11ec4c65 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11ec4c6c mov ecx, ebx */
  ECX = (EBX);
L_11ec4c6e:;
  /* 11ec4c6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4c70 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ec4c72 mov edi, edi */
  EDI = (EDI);
L_11ec4c74:;
  /* 11ec4c74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ec4c76 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4c78 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ec4c7a je 0x11ec4c9f */
  if (C.zf) goto L_11ec4c9f;
  /* 11ec4c7c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ec4c7e je 0x11ec4c9f */
  if (C.zf) goto L_11ec4c9f;
  /* 11ec4c80 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec4c81 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ec4c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4c83 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4c84 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec4c85 call 0x11ec5c70 */
  push32(0x11ec4c8au); f_11ec5c70();
  /* 11ec4c8a mov ebx, eax */
  EBX = (EAX);
  /* 11ec4c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4c8f call 0x11ec5c70 */
  push32(0x11ec4c94u); f_11ec5c70();
  /* 11ec4c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4c97 pop ecx */
  ECX = (pop32());
  /* 11ec4c98 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4c9a jne 0x11ec4ca5 */
  if (!C.zf) goto L_11ec4ca5;
  /* 11ec4c9c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ec4c9d jne 0x11ec4c74 */
  if (!C.zf) goto L_11ec4c74;
L_11ec4c9f:;
  /* 11ec4c9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4ca1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ca3 je 0x11ec4cae */
  if (C.zf) goto L_11ec4cae;
L_11ec4ca5:;
  /* 11ec4ca5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ec4caa jb 0x11ec4cae */
  if (C.cf) goto L_11ec4cae;
  /* 11ec4cac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11ec4cae:;
  /* 11ec4cae pop eax */
  EAX = (pop32());
  /* 11ec4caf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4cb1 jne 0x11ec4cbc */
  if (!C.zf) goto L_11ec4cbc;
  /* 11ec4cb3 lock dec dword ptr [0x11ee2b14] */
  x86_unimpl("lock dec @ 0x11ec4cb3");
  /* 11ec4cba jmp 0x11ec4cca */
  goto L_11ec4cca;
L_11ec4cbc:;
  /* 11ec4cbc mov ebx, ecx */
  EBX = (ECX);
  /* 11ec4cbe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec4cc0 call 0x11eb9ed0 */
  push32(0x11ec4cc5u); f_11eb9ed0();
  /* 11ec4cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4cc8 mov ecx, ebx */
  ECX = (EBX);
L_11ec4cca:;
  /* 11ec4cca mov eax, ecx */
  EAX = (ECX);
  /* 11ec4ccc pop ebx */
  EBX = (pop32());
  /* 11ec4ccd pop esi */
  ESI = (pop32());
  /* 11ec4cce pop edi */
  EDI = (pop32());
  /* 11ec4ccf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ec4cd0 ret  */
  ESPCHK(0x11ec4bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x11ec4ce0 (255 bytes, 88 insns) */
void f_11ec4ce0(void) {
  FTRACE(0x11ec4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4ce3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11ec4ce6:;
  /* 11ec4ce6 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ced jle 0x11ec4d06 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec4d06;
  /* 11ec4cef push 8 */
  push32((uint32_t)(0x8u));
  /* 11ec4cf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4cf4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4cf6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4cf9 call 0x11ebc440 */
  push32(0x11ec4cfeu); f_11ebc440();
  /* 11ec4cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4d01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ec4d04 jmp 0x11ec4d1f */
  goto L_11ec4d1f;
L_11ec4d06:;
  /* 11ec4d06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4d0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4d0d mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4d13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4d15 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4d19 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4d1c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec4d1f:;
  /* 11ec4d1f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4d23 je 0x11ec4d30 */
  if (C.zf) goto L_11ec4d30;
  /* 11ec4d25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4d2b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec4d2e jmp 0x11ec4ce6 */
  goto L_11ec4ce6;
L_11ec4d30:;
  /* 11ec4d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4d35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec4d37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec4d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4d40 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec4d43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4d46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec4d49 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4d4d je 0x11ec4d55 */
  if (C.zf) goto L_11ec4d55;
  /* 11ec4d4f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4d53 jne 0x11ec4d68 */
  if (!C.zf) goto L_11ec4d68;
L_11ec4d55:;
  /* 11ec4d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4d5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4d5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec4d5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4d62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4d65 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ec4d68:;
  /* 11ec4d68 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ec4d6f:;
  /* 11ec4d6f cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4d76 jle 0x11ec4d8b */
  if ((C.zf||C.sf!=C.of)) goto L_11ec4d8b;
  /* 11ec4d78 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec4d7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4d7d push edx */
  push32((uint32_t)(EDX));
  /* 11ec4d7e call 0x11ebc440 */
  push32(0x11ec4d83u); f_11ebc440();
  /* 11ec4d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4d86 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec4d89 jmp 0x11ec4da0 */
  goto L_11ec4da0;
L_11ec4d8b:;
  /* 11ec4d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4d8e mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4d96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4d9a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4d9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ec4da0:;
  /* 11ec4da0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4da4 je 0x11ec4dcb */
  if (C.zf) goto L_11ec4dcb;
  /* 11ec4da6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec4da9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec4dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4daf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11ec4db3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec4db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4db9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4dbb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4dbd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec4dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4dc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4dc6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ec4dc9 jmp 0x11ec4d6f */
  goto L_11ec4d6f;
L_11ec4dcb:;
  /* 11ec4dcb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4dcf jne 0x11ec4dd8 */
  if (!C.zf) goto L_11ec4dd8;
  /* 11ec4dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec4dd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec4dd6 jmp 0x11ec4ddb */
  goto L_11ec4ddb;
L_11ec4dd8:;
  /* 11ec4dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ec4ddb:;
  /* 11ec4ddb mov esp, ebp */
  ESP = (EBP);
  /* 11ec4ddd pop ebp */
  EBP = (pop32());
  /* 11ec4dde ret  */
  ESPCHK(0x11ec4ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014de0 @ 0x11ec4de0 (17 bytes, 8 insns) */
void f_11ec4de0(void) {
  FTRACE(0x11ec4de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4de6 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4de7 call 0x11ec4ce0 */
  push32(0x11ec4decu); f_11ec4ce0();
  /* 11ec4dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4def pop ebp */
  EBP = (pop32());
  /* 11ec4df0 ret  */
  ESPCHK(0x11ec4de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e00 @ 0x11ec4e00 (297 bytes, 106 insns) */
void f_11ec4e00(void) {
  FTRACE(0x11ec4e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4e01 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4e03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4e06 push esi */
  push32((uint32_t)(ESI));
L_11ec4e07:;
  /* 11ec4e07 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4e0e jle 0x11ec4e27 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec4e27;
  /* 11ec4e10 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ec4e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec4e17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec4e19 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4e1a call 0x11ebc440 */
  push32(0x11ec4e1fu); f_11ebc440();
  /* 11ec4e1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4e22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec4e25 jmp 0x11ec4e40 */
  goto L_11ec4e40;
L_11ec4e27:;
  /* 11ec4e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4e2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4e2e mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4e34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4e36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4e3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4e3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ec4e40:;
  /* 11ec4e40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4e44 je 0x11ec4e51 */
  if (C.zf) goto L_11ec4e51;
  /* 11ec4e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4e4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec4e4f jmp 0x11ec4e07 */
  goto L_11ec4e07;
L_11ec4e51:;
  /* 11ec4e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4e56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec4e58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec4e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4e61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec4e64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4e67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ec4e6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4e6e je 0x11ec4e76 */
  if (C.zf) goto L_11ec4e76;
  /* 11ec4e70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4e74 jne 0x11ec4e89 */
  if (!C.zf) goto L_11ec4e89;
L_11ec4e76:;
  /* 11ec4e76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4e7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4e7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec4e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4e83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4e86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ec4e89:;
  /* 11ec4e89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ec4e90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ec4e97:;
  /* 11ec4e97 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4e9e jle 0x11ec4eb3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec4eb3;
  /* 11ec4ea0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec4ea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4ea5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec4ea6 call 0x11ebc440 */
  push32(0x11ec4eabu); f_11ebc440();
  /* 11ec4eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4eae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ec4eb1 jmp 0x11ec4ec8 */
  goto L_11ec4ec8;
L_11ec4eb3:;
  /* 11ec4eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4eb6 mov ecx, dword ptr [0x11ee0c98] */
  ECX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec4ebc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4ebe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ec4ec2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec4ec5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11ec4ec8:;
  /* 11ec4ec8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ecc je 0x11ec4f09 */
  if (C.zf) goto L_11ec4f09;
  /* 11ec4ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec4ed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ec4ed2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec4ed5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec4ed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec4eda call 0x11ec5da0 */
  push32(0x11ec4edfu); f_11ec5da0();
  /* 11ec4edf mov ecx, eax */
  ECX = (EAX);
  /* 11ec4ee1 mov esi, edx */
  ESI = (EDX);
  /* 11ec4ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec4ee6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4ee9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec4eea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4eec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4eee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec4ef1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11ec4ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec4ef9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec4efb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec4efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec4f01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ec4f07 jmp 0x11ec4e97 */
  goto L_11ec4e97;
L_11ec4f09:;
  /* 11ec4f09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4f0d jne 0x11ec4f1e */
  if (!C.zf) goto L_11ec4f1e;
  /* 11ec4f0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4f12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec4f14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec4f17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec4f1c jmp 0x11ec4f24 */
  goto L_11ec4f24;
L_11ec4f1e:;
  /* 11ec4f1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec4f21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11ec4f24:;
  /* 11ec4f24 pop esi */
  ESI = (pop32());
  /* 11ec4f25 mov esp, ebp */
  ESP = (EBP);
  /* 11ec4f27 pop ebp */
  EBP = (pop32());
  /* 11ec4f28 ret  */
  ESPCHK(0x11ec4e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x11ec4f30 (61 bytes, 18 insns) */
void f_11ec4f30(void) {
  FTRACE(0x11ec4f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4f31 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4f33 cmp dword ptr [0x11ee2ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4f3a jne 0x11ec4f6b */
  if (!C.zf) goto L_11ec4f6b;
  /* 11ec4f3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec4f3e call 0x11eb9e30 */
  push32(0x11ec4f43u); f_11eb9e30();
  /* 11ec4f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f46 cmp dword ptr [0x11ee2ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4f4d jne 0x11ec4f61 */
  if (!C.zf) goto L_11ec4f61;
  /* 11ec4f4f call 0x11ec4f90 */
  push32(0x11ec4f54u); f_11ec4f90();
  /* 11ec4f54 mov eax, dword ptr [0x11ee2ae0] */
  EAX = (r32((uint32_t)(0x11ee2ae0)));
  /* 11ec4f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f5c mov dword ptr [0x11ee2ae0], eax */
  w32((uint32_t)(0x11ee2ae0), (EAX));
L_11ec4f61:;
  /* 11ec4f61 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec4f63 call 0x11eb9ed0 */
  push32(0x11ec4f68u); f_11eb9ed0();
  /* 11ec4f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec4f6b:;
  /* 11ec4f6b pop ebp */
  EBP = (pop32());
  /* 11ec4f6c ret  */
  ESPCHK(0x11ec4f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f70 @ 0x11ec4f70 (30 bytes, 11 insns) */
void f_11ec4f70(void) {
  FTRACE(0x11ec4f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4f71 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4f73 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec4f75 call 0x11eb9e30 */
  push32(0x11ec4f7au); f_11eb9e30();
  /* 11ec4f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f7d call 0x11ec4f90 */
  push32(0x11ec4f82u); f_11ec4f90();
  /* 11ec4f82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec4f84 call 0x11eb9ed0 */
  push32(0x11ec4f89u); f_11eb9ed0();
  /* 11ec4f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4f8c pop ebp */
  EBP = (pop32());
  /* 11ec4f8d ret  */
  ESPCHK(0x11ec4f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x11ec4f90 (939 bytes, 266 insns) */
void f_11ec4f90(void) {
  FTRACE(0x11ec4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec4f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec4f91 mov ebp, esp */
  EBP = (ESP);
  /* 11ec4f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec4f96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec4f9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec4f9f call 0x11eb9e30 */
  push32(0x11ec4fa4u); f_11eb9e30();
  /* 11ec4fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4fa7 mov dword ptr [0x11ee2a28], 0 */
  w32((uint32_t)(0x11ee2a28), (0x0u));
  /* 11ec4fb1 mov dword ptr [0x11ee1e38], 0xffffffff */
  w32((uint32_t)(0x11ee1e38), (0xffffffffu));
  /* 11ec4fbb mov eax, dword ptr [0x11ee1e38] */
  EAX = (r32((uint32_t)(0x11ee1e38)));
  /* 11ec4fc0 mov dword ptr [0x11ee1e28], eax */
  w32((uint32_t)(0x11ee1e28), (EAX));
  /* 11ec4fc5 push 0x11edec40 */
  push32((uint32_t)(0x11edec40u));
  /* 11ec4fca call 0x11ec5e10 */
  push32(0x11ec4fcfu); f_11ec5e10();
  /* 11ec4fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4fd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec4fd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4fd9 jne 0x11ec5113 */
  if (!C.zf) goto L_11ec5113;
  /* 11ec4fdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec4fe1 call 0x11eb9ed0 */
  push32(0x11ec4fe6u); f_11eb9ed0();
  /* 11ec4fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec4fe9 push 0x11ee2a30 */
  push32((uint32_t)(0x11ee2a30u));
  /* 11ec4fee call dword ptr [0x11ee52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52e0))), 0x11ec4ff4u);
  /* 11ec4ff4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec4ff7 je 0x11ec510e */
  if (C.zf) goto L_11ec510e;
  /* 11ec4ffd mov dword ptr [0x11ee2a28], 1 */
  w32((uint32_t)(0x11ee2a28), (0x1u));
  /* 11ec5007 mov ecx, dword ptr [0x11ee2a30] */
  ECX = (r32((uint32_t)(0x11ee2a30)));
  /* 11ec500d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5010 mov dword ptr [0x11ee1d90], ecx */
  w32((uint32_t)(0x11ee1d90), (ECX));
  /* 11ec5016 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5018 mov dx, word ptr [0x11ee2a76] */
  DX = (r16((uint32_t)(0x11ee2a76)));
  /* 11ec501f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec5021 je 0x11ec5039 */
  if (C.zf) goto L_11ec5039;
  /* 11ec5023 mov eax, dword ptr [0x11ee2a84] */
  EAX = (r32((uint32_t)(0x11ee2a84)));
  /* 11ec5028 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec502b mov ecx, dword ptr [0x11ee1d90] */
  ECX = (r32((uint32_t)(0x11ee1d90)));
  /* 11ec5031 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5033 mov dword ptr [0x11ee1d90], ecx */
  w32((uint32_t)(0x11ee1d90), (ECX));
L_11ec5039:;
  /* 11ec5039 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec503b mov dx, word ptr [0x11ee2aca] */
  DX = (r16((uint32_t)(0x11ee2aca)));
  /* 11ec5042 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec5044 je 0x11ec506e */
  if (C.zf) goto L_11ec506e;
  /* 11ec5046 cmp dword ptr [0x11ee2ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec504d je 0x11ec506e */
  if (C.zf) goto L_11ec506e;
  /* 11ec504f mov dword ptr [0x11ee1d94], 1 */
  w32((uint32_t)(0x11ee1d94), (0x1u));
  /* 11ec5059 mov eax, dword ptr [0x11ee2ad8] */
  EAX = (r32((uint32_t)(0x11ee2ad8)));
  /* 11ec505e sub eax, dword ptr [0x11ee2a84] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee2a84))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5064 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5067 mov dword ptr [0x11ee1d98], eax */
  w32((uint32_t)(0x11ee1d98), (EAX));
  /* 11ec506c jmp 0x11ec5082 */
  goto L_11ec5082;
L_11ec506e:;
  /* 11ec506e mov dword ptr [0x11ee1d94], 0 */
  w32((uint32_t)(0x11ee1d94), (0x0u));
  /* 11ec5078 mov dword ptr [0x11ee1d98], 0 */
  w32((uint32_t)(0x11ee1d98), (0x0u));
L_11ec5082:;
  /* 11ec5082 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ec5085 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5086 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5088 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ec508a mov edx, dword ptr [0x11ee1e1c] */
  EDX = (r32((uint32_t)(0x11ee1e1c)));
  /* 11ec5090 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5091 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5093 push 0x11ee2a34 */
  push32((uint32_t)(0x11ee2a34u));
  /* 11ec5098 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec509d mov eax, dword ptr [0x11ee2998] */
  EAX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec50a2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec50a3 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec50a9u);
  /* 11ec50a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec50ab je 0x11ec50bf */
  if (C.zf) goto L_11ec50bf;
  /* 11ec50ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec50b1 jne 0x11ec50bf */
  if (!C.zf) goto L_11ec50bf;
  /* 11ec50b3 mov ecx, dword ptr [0x11ee1e1c] */
  ECX = (r32((uint32_t)(0x11ee1e1c)));
  /* 11ec50b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11ec50bd jmp 0x11ec50c8 */
  goto L_11ec50c8;
L_11ec50bf:;
  /* 11ec50bf mov edx, dword ptr [0x11ee1e1c] */
  EDX = (r32((uint32_t)(0x11ee1e1c)));
  /* 11ec50c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11ec50c8:;
  /* 11ec50c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ec50cb push eax */
  push32((uint32_t)(EAX));
  /* 11ec50cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec50ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ec50d0 mov ecx, dword ptr [0x11ee1e20] */
  ECX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec50d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec50d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec50d9 push 0x11ee2a88 */
  push32((uint32_t)(0x11ee2a88u));
  /* 11ec50de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec50e3 mov edx, dword ptr [0x11ee2998] */
  EDX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec50e9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec50ea call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec50f0u);
  /* 11ec50f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec50f2 je 0x11ec5105 */
  if (C.zf) goto L_11ec5105;
  /* 11ec50f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec50f8 jne 0x11ec5105 */
  if (!C.zf) goto L_11ec5105;
  /* 11ec50fa mov eax, dword ptr [0x11ee1e20] */
  EAX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec50ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11ec5103 jmp 0x11ec510e */
  goto L_11ec510e;
L_11ec5105:;
  /* 11ec5105 mov ecx, dword ptr [0x11ee1e20] */
  ECX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec510b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11ec510e:;
  /* 11ec510e jmp 0x11ec5337 */
  goto L_11ec5337;
L_11ec5113:;
  /* 11ec5113 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5116 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec5119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec511b je 0x11ec513d */
  if (C.zf) goto L_11ec513d;
  /* 11ec511d cmp dword ptr [0x11ee2adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5124 je 0x11ec514c */
  if (C.zf) goto L_11ec514c;
  /* 11ec5126 mov ecx, dword ptr [0x11ee2adc] */
  ECX = (r32((uint32_t)(0x11ee2adc)));
  /* 11ec512c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec512d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5130 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5131 call 0x11ec20c0 */
  push32(0x11ec5136u); f_11ec20c0();
  /* 11ec5136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec513b jne 0x11ec514c */
  if (!C.zf) goto L_11ec514c;
L_11ec513d:;
  /* 11ec513d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec513f call 0x11eb9ed0 */
  push32(0x11ec5144u); f_11eb9ed0();
  /* 11ec5144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5147 jmp 0x11ec5337 */
  goto L_11ec5337;
L_11ec514c:;
  /* 11ec514c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec514e mov eax, dword ptr [0x11ee2adc] */
  EAX = (r32((uint32_t)(0x11ee2adc)));
  /* 11ec5153 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5154 call 0x11eb6ec0 */
  push32(0x11ec5159u); f_11eb6ec0();
  /* 11ec5159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec515c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11ec5161 push 0x11edec38 */
  push32((uint32_t)(0x11edec38u));
  /* 11ec5166 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec5168 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec516b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec516c call 0x11eb9260 */
  push32(0x11ec5171u); f_11eb9260();
  /* 11ec5171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5177 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5178 call 0x11eb6430 */
  push32(0x11ec517du); f_11eb6430();
  /* 11ec517d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5180 mov dword ptr [0x11ee2adc], eax */
  w32((uint32_t)(0x11ee2adc), (EAX));
  /* 11ec5185 cmp dword ptr [0x11ee2adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec518c jne 0x11ec519d */
  if (!C.zf) goto L_11ec519d;
  /* 11ec518e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec5190 call 0x11eb9ed0 */
  push32(0x11ec5195u); f_11eb9ed0();
  /* 11ec5195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5198 jmp 0x11ec5337 */
  goto L_11ec5337;
L_11ec519d:;
  /* 11ec519d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec51a0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec51a1 mov eax, dword ptr [0x11ee2adc] */
  EAX = (r32((uint32_t)(0x11ee2adc)));
  /* 11ec51a6 push eax */
  push32((uint32_t)(EAX));
  /* 11ec51a7 call 0x11eb93e0 */
  push32(0x11ec51acu); f_11eb93e0();
  /* 11ec51ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51af push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec51b1 call 0x11eb9ed0 */
  push32(0x11ec51b6u); f_11eb9ed0();
  /* 11ec51b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ec51bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec51be push ecx */
  push32((uint32_t)(ECX));
  /* 11ec51bf mov edx, dword ptr [0x11ee1e1c] */
  EDX = (r32((uint32_t)(0x11ee1e1c)));
  /* 11ec51c5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec51c6 call 0x11eb9c50 */
  push32(0x11ec51cbu); f_11eb9c50();
  /* 11ec51cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51ce mov eax, dword ptr [0x11ee1e1c] */
  EAX = (r32((uint32_t)(0x11ee1e1c)));
  /* 11ec51d3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11ec51d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec51da add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec51e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec51e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec51e6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec51e9 jne 0x11ec51fd */
  if (!C.zf) goto L_11ec51fd;
  /* 11ec51eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec51ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec51f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec51f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec51fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ec51fd:;
  /* 11ec51fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5200 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5201 call 0x11ec4ce0 */
  push32(0x11ec5206u); f_11ec4ce0();
  /* 11ec5206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5209 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec520f mov dword ptr [0x11ee1d90], eax */
  w32((uint32_t)(0x11ee1d90), (EAX));
L_11ec5214:;
  /* 11ec5214 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5217 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec521a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec521d je 0x11ec5235 */
  if (C.zf) goto L_11ec5235;
  /* 11ec521f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5222 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec5225 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5228 jl 0x11ec5240 */
  if ((C.sf!=C.of)) goto L_11ec5240;
  /* 11ec522a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec522d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec5230 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5233 jg 0x11ec5240 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec5240;
L_11ec5235:;
  /* 11ec5235 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec523b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec523e jmp 0x11ec5214 */
  goto L_11ec5214;
L_11ec5240:;
  /* 11ec5240 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5243 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec5246 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5249 jne 0x11ec52e5 */
  if (!C.zf) goto L_11ec52e5;
  /* 11ec524f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5255 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec5258 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec525b push edx */
  push32((uint32_t)(EDX));
  /* 11ec525c call 0x11ec4ce0 */
  push32(0x11ec5261u); f_11ec4ce0();
  /* 11ec5261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5264 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5267 mov ecx, dword ptr [0x11ee1d90] */
  ECX = (r32((uint32_t)(0x11ee1d90)));
  /* 11ec526d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec526f mov dword ptr [0x11ee1d90], ecx */
  w32((uint32_t)(0x11ee1d90), (ECX));
L_11ec5275:;
  /* 11ec5275 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5278 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec527b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec527e jl 0x11ec5296 */
  if ((C.sf!=C.of)) goto L_11ec5296;
  /* 11ec5280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5283 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec5286 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5289 jg 0x11ec5296 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec5296;
  /* 11ec528b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec528e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5291 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec5294 jmp 0x11ec5275 */
  goto L_11ec5275;
L_11ec5296:;
  /* 11ec5296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5299 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec529c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec529f jne 0x11ec52e5 */
  if (!C.zf) goto L_11ec52e5;
  /* 11ec52a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec52a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec52aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52ad push ecx */
  push32((uint32_t)(ECX));
  /* 11ec52ae call 0x11ec4ce0 */
  push32(0x11ec52b3u); f_11ec4ce0();
  /* 11ec52b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec52b6 mov edx, dword ptr [0x11ee1d90] */
  EDX = (r32((uint32_t)(0x11ee1d90)));
  /* 11ec52bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec52be mov dword ptr [0x11ee1d90], edx */
  w32((uint32_t)(0x11ee1d90), (EDX));
L_11ec52c4:;
  /* 11ec52c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec52ca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec52cd jl 0x11ec52e5 */
  if ((C.sf!=C.of)) goto L_11ec52e5;
  /* 11ec52cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec52d5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec52d8 jg 0x11ec52e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec52e5;
  /* 11ec52da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec52e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec52e3 jmp 0x11ec52c4 */
  goto L_11ec52c4;
L_11ec52e5:;
  /* 11ec52e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec52e9 je 0x11ec52f9 */
  if (C.zf) goto L_11ec52f9;
  /* 11ec52eb mov edx, dword ptr [0x11ee1d90] */
  EDX = (r32((uint32_t)(0x11ee1d90)));
  /* 11ec52f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec52f3 mov dword ptr [0x11ee1d90], edx */
  w32((uint32_t)(0x11ee1d90), (EDX));
L_11ec52f9:;
  /* 11ec52f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec52fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec52ff mov dword ptr [0x11ee1d94], ecx */
  w32((uint32_t)(0x11ee1d94), (ECX));
  /* 11ec5305 cmp dword ptr [0x11ee1d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee1d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec530c je 0x11ec532e */
  if (C.zf) goto L_11ec532e;
  /* 11ec530e push 3 */
  push32((uint32_t)(0x3u));
  /* 11ec5310 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5313 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5314 mov eax, dword ptr [0x11ee1e20] */
  EAX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec5319 push eax */
  push32((uint32_t)(EAX));
  /* 11ec531a call 0x11eb9c50 */
  push32(0x11ec531fu); f_11eb9c50();
  /* 11ec531f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5322 mov ecx, dword ptr [0x11ee1e20] */
  ECX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec5328 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11ec532c jmp 0x11ec5337 */
  goto L_11ec5337;
L_11ec532e:;
  /* 11ec532e mov edx, dword ptr [0x11ee1e20] */
  EDX = (r32((uint32_t)(0x11ee1e20)));
  /* 11ec5334 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11ec5337:;
  /* 11ec5337 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5339 pop ebp */
  EBP = (pop32());
  /* 11ec533a ret  */
  ESPCHK(0x11ec4f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x11ec5340 (46 bytes, 18 insns) */
void f_11ec5340(void) {
  FTRACE(0x11ec5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5340 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5341 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5343 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5344 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec5346 call 0x11eb9e30 */
  push32(0x11ec534bu); f_11eb9e30();
  /* 11ec534b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec534e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5351 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5352 call 0x11ec5370 */
  push32(0x11ec5357u); f_11ec5370();
  /* 11ec5357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec535a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec535d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec535f call 0x11eb9ed0 */
  push32(0x11ec5364u); f_11eb9ed0();
  /* 11ec5364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec536a mov esp, ebp */
  ESP = (EBP);
  /* 11ec536c pop ebp */
  EBP = (pop32());
  /* 11ec536d ret  */
  ESPCHK(0x11ec5340u, _esp0);
  ESP += 4; return;
}

/* FUN_10015370 @ 0x11ec5370 (762 bytes, 246 insns) */
void f_11ec5370(void) {
  FTRACE(0x11ec5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5370 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5371 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5373 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5374 cmp dword ptr [0x11ee1d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee1d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec537b jne 0x11ec5384 */
  if (!C.zf) goto L_11ec5384;
  /* 11ec537d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec537f jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec5384:;
  /* 11ec5384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5387 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ec538a cmp ecx, dword ptr [0x11ee1e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee1e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5390 jne 0x11ec53a4 */
  if (!C.zf) goto L_11ec53a4;
  /* 11ec5392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec5398 cmp eax, dword ptr [0x11ee1e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee1e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec539e je 0x11ec556b */
  if (C.zf) goto L_11ec556b;
L_11ec53a4:;
  /* 11ec53a4 cmp dword ptr [0x11ee2a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec53ab je 0x11ec5525 */
  if (C.zf) goto L_11ec5525;
  /* 11ec53b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec53b3 mov cx, word ptr [0x11ee2ac8] */
  CX = (r16((uint32_t)(0x11ee2ac8)));
  /* 11ec53ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec53bc jne 0x11ec5419 */
  if (!C.zf) goto L_11ec5419;
  /* 11ec53be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec53c0 mov dx, word ptr [0x11ee2ad6] */
  DX = (r16((uint32_t)(0x11ee2ad6)));
  /* 11ec53c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec53c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec53ca mov ax, word ptr [0x11ee2ad4] */
  AX = (r16((uint32_t)(0x11ee2ad4)));
  /* 11ec53d0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec53d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec53d3 mov cx, word ptr [0x11ee2ad2] */
  CX = (r16((uint32_t)(0x11ee2ad2)));
  /* 11ec53da push ecx */
  push32((uint32_t)(ECX));
  /* 11ec53db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec53dd mov dx, word ptr [0x11ee2ad0] */
  DX = (r16((uint32_t)(0x11ee2ad0)));
  /* 11ec53e4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec53e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec53e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec53e9 mov ax, word ptr [0x11ee2acc] */
  AX = (r16((uint32_t)(0x11ee2acc)));
  /* 11ec53ef push eax */
  push32((uint32_t)(EAX));
  /* 11ec53f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec53f2 mov cx, word ptr [0x11ee2ace] */
  CX = (r16((uint32_t)(0x11ee2ace)));
  /* 11ec53f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec53fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec53fc mov dx, word ptr [0x11ee2aca] */
  DX = (r16((uint32_t)(0x11ee2aca)));
  /* 11ec5403 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5407 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ec540a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec540b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec540d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec540f call 0x11ec5670 */
  push32(0x11ec5414u); f_11ec5670();
  /* 11ec5414 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5417 jmp 0x11ec546a */
  goto L_11ec546a;
L_11ec5419:;
  /* 11ec5419 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec541b mov dx, word ptr [0x11ee2ad6] */
  DX = (r16((uint32_t)(0x11ee2ad6)));
  /* 11ec5422 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5425 mov ax, word ptr [0x11ee2ad4] */
  AX = (r16((uint32_t)(0x11ee2ad4)));
  /* 11ec542b push eax */
  push32((uint32_t)(EAX));
  /* 11ec542c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec542e mov cx, word ptr [0x11ee2ad2] */
  CX = (r16((uint32_t)(0x11ee2ad2)));
  /* 11ec5435 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5436 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5438 mov dx, word ptr [0x11ee2ad0] */
  DX = (r16((uint32_t)(0x11ee2ad0)));
  /* 11ec543f push edx */
  push32((uint32_t)(EDX));
  /* 11ec5440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5442 mov ax, word ptr [0x11ee2ace] */
  AX = (r16((uint32_t)(0x11ee2ace)));
  /* 11ec5448 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5449 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec544b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec544d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec544f mov cx, word ptr [0x11ee2aca] */
  CX = (r16((uint32_t)(0x11ee2aca)));
  /* 11ec5456 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec545a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec545d push eax */
  push32((uint32_t)(EAX));
  /* 11ec545e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5462 call 0x11ec5670 */
  push32(0x11ec5467u); f_11ec5670();
  /* 11ec5467 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec546a:;
  /* 11ec546a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec546c mov cx, word ptr [0x11ee2a74] */
  CX = (r16((uint32_t)(0x11ee2a74)));
  /* 11ec5473 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec5475 jne 0x11ec54d2 */
  if (!C.zf) goto L_11ec54d2;
  /* 11ec5477 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5479 mov dx, word ptr [0x11ee2a82] */
  DX = (r16((uint32_t)(0x11ee2a82)));
  /* 11ec5480 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5481 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5483 mov ax, word ptr [0x11ee2a80] */
  AX = (r16((uint32_t)(0x11ee2a80)));
  /* 11ec5489 push eax */
  push32((uint32_t)(EAX));
  /* 11ec548a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec548c mov cx, word ptr [0x11ee2a7e] */
  CX = (r16((uint32_t)(0x11ee2a7e)));
  /* 11ec5493 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5496 mov dx, word ptr [0x11ee2a7c] */
  DX = (r16((uint32_t)(0x11ee2a7c)));
  /* 11ec549d push edx */
  push32((uint32_t)(EDX));
  /* 11ec549e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec54a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec54a2 mov ax, word ptr [0x11ee2a78] */
  AX = (r16((uint32_t)(0x11ee2a78)));
  /* 11ec54a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec54a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec54ab mov cx, word ptr [0x11ee2a7a] */
  CX = (r16((uint32_t)(0x11ee2a7a)));
  /* 11ec54b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec54b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec54b5 mov dx, word ptr [0x11ee2a76] */
  DX = (r16((uint32_t)(0x11ee2a76)));
  /* 11ec54bc push edx */
  push32((uint32_t)(EDX));
  /* 11ec54bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec54c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ec54c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec54c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec54c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec54c8 call 0x11ec5670 */
  push32(0x11ec54cdu); f_11ec5670();
  /* 11ec54cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec54d0 jmp 0x11ec5523 */
  goto L_11ec5523;
L_11ec54d2:;
  /* 11ec54d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec54d4 mov dx, word ptr [0x11ee2a82] */
  DX = (r16((uint32_t)(0x11ee2a82)));
  /* 11ec54db push edx */
  push32((uint32_t)(EDX));
  /* 11ec54dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec54de mov ax, word ptr [0x11ee2a80] */
  AX = (r16((uint32_t)(0x11ee2a80)));
  /* 11ec54e4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec54e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec54e7 mov cx, word ptr [0x11ee2a7e] */
  CX = (r16((uint32_t)(0x11ee2a7e)));
  /* 11ec54ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ec54ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec54f1 mov dx, word ptr [0x11ee2a7c] */
  DX = (r16((uint32_t)(0x11ee2a7c)));
  /* 11ec54f8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec54f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec54fb mov ax, word ptr [0x11ee2a7a] */
  AX = (r16((uint32_t)(0x11ee2a7a)));
  /* 11ec5501 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5502 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5504 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5506 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5508 mov cx, word ptr [0x11ee2a76] */
  CX = (r16((uint32_t)(0x11ee2a76)));
  /* 11ec550f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5513 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec5516 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5519 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec551b call 0x11ec5670 */
  push32(0x11ec5520u); f_11ec5670();
  /* 11ec5520 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec5523:;
  /* 11ec5523 jmp 0x11ec556b */
  goto L_11ec556b;
L_11ec5525:;
  /* 11ec5525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5529 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec552b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec552d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec552f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5531 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5533 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec5535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5538 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ec553b push edx */
  push32((uint32_t)(EDX));
  /* 11ec553c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec553e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5540 call 0x11ec5670 */
  push32(0x11ec5545u); f_11ec5670();
  /* 11ec5545 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5548 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec554a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec554c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec554e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec5550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5554 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ec5556 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ec5558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec555b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ec555e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec555f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5563 call 0x11ec5670 */
  push32(0x11ec5568u); f_11ec5670();
  /* 11ec5568 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec556b:;
  /* 11ec556b mov edx, dword ptr [0x11ee1e2c] */
  EDX = (r32((uint32_t)(0x11ee1e2c)));
  /* 11ec5571 cmp edx, dword ptr [0x11ee1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5577 jge 0x11ec55c4 */
  if ((C.sf==C.of)) goto L_11ec55c4;
  /* 11ec5579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec557c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec557f cmp ecx, dword ptr [0x11ee1e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee1e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5585 jl 0x11ec5595 */
  if ((C.sf!=C.of)) goto L_11ec5595;
  /* 11ec5587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec558a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec558d cmp eax, dword ptr [0x11ee1e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5593 jle 0x11ec559c */
  if ((C.zf||C.sf!=C.of)) goto L_11ec559c;
L_11ec5595:;
  /* 11ec5595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5597 jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec559c:;
  /* 11ec559c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec559f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ec55a2 cmp edx, dword ptr [0x11ee1e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee1e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec55a8 jle 0x11ec55c2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec55c2;
  /* 11ec55aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec55ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec55b0 cmp ecx, dword ptr [0x11ee1e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec55b6 jge 0x11ec55c2 */
  if ((C.sf==C.of)) goto L_11ec55c2;
  /* 11ec55b8 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec55bd jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec55c2:;
  /* 11ec55c2 jmp 0x11ec5607 */
  goto L_11ec5607;
L_11ec55c4:;
  /* 11ec55c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec55c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec55ca cmp eax, dword ptr [0x11ee1e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec55d0 jl 0x11ec55e0 */
  if ((C.sf!=C.of)) goto L_11ec55e0;
  /* 11ec55d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec55d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ec55d8 cmp edx, dword ptr [0x11ee1e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee1e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec55de jle 0x11ec55e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec55e7;
L_11ec55e0:;
  /* 11ec55e0 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec55e5 jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec55e7:;
  /* 11ec55e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec55ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec55ed cmp ecx, dword ptr [0x11ee1e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec55f3 jle 0x11ec5607 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec5607;
  /* 11ec55f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec55f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec55fb cmp eax, dword ptr [0x11ee1e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee1e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5601 jge 0x11ec5607 */
  if ((C.sf==C.of)) goto L_11ec5607;
  /* 11ec5603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5605 jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec5607:;
  /* 11ec5607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec560a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ec560d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5613 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec5615 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec561a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ec561d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5623 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5625 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec562b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec562e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5631 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ec5634 cmp edx, dword ptr [0x11ee1e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee1e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec563a jne 0x11ec5652 */
  if (!C.zf) goto L_11ec5652;
  /* 11ec563c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec563f cmp eax, dword ptr [0x11ee1e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee1e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5645 jl 0x11ec564e */
  if ((C.sf!=C.of)) goto L_11ec564e;
  /* 11ec5647 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec564c jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec564e:;
  /* 11ec564e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5650 jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec5652:;
  /* 11ec5652 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5655 cmp ecx, dword ptr [0x11ee1e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee1e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec565b jge 0x11ec5664 */
  if ((C.sf==C.of)) goto L_11ec5664;
  /* 11ec565d mov eax, 1 */
  EAX = (0x1u);
  /* 11ec5662 jmp 0x11ec5666 */
  goto L_11ec5666;
L_11ec5664:;
  /* 11ec5664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec5666:;
  /* 11ec5666 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5668 pop ebp */
  EBP = (pop32());
  /* 11ec5669 ret  */
  ESPCHK(0x11ec5370u, _esp0);
  ESP += 4; return;
}

/* FUN_10015670 @ 0x11ec5670 (504 bytes, 145 insns) */
void f_11ec5670(void) {
  FTRACE(0x11ec5670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5670 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5671 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5673 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5676 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec567a jne 0x11ec574c */
  if (!C.zf) goto L_11ec574c;
  /* 11ec5680 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5683 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5688 jne 0x11ec5699 */
  if (!C.zf) goto L_11ec5699;
  /* 11ec568a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec568d mov edx, dword ptr [ecx*4 + 0x11ee1e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee1e4c)));
  /* 11ec5694 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ec5697 jmp 0x11ec56a6 */
  goto L_11ec56a6;
L_11ec5699:;
  /* 11ec5699 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec569c mov ecx, dword ptr [eax*4 + 0x11ee1e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee1e80)));
  /* 11ec56a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ec56a6:;
  /* 11ec56a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec56a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec56ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec56af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec56b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec56b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec56bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec56be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec56c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec56c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec56c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11ec56c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11ec56cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec56ce mov ecx, 7 */
  ECX = (0x7u);
  /* 11ec56d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ec56d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec56d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec56db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec56de jge 0x11ec56f9 */
  if ((C.sf==C.of)) goto L_11ec56f9;
  /* 11ec56e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec56e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec56e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec56e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec56ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec56ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec56f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec56f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec56f7 jmp 0x11ec570d */
  goto L_11ec570d;
L_11ec56f9:;
  /* 11ec56f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec56fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec56ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec5702 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5705 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5708 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec570a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec570d:;
  /* 11ec570d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5711 jne 0x11ec574a */
  if (!C.zf) goto L_11ec574a;
  /* 11ec5713 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5716 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec571b jne 0x11ec572c */
  if (!C.zf) goto L_11ec572c;
  /* 11ec571d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec5720 mov eax, dword ptr [edx*4 + 0x11ee1e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee1e50)));
  /* 11ec5727 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ec572a jmp 0x11ec5739 */
  goto L_11ec5739;
L_11ec572c:;
  /* 11ec572c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec572f mov edx, dword ptr [ecx*4 + 0x11ee1e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee1e84)));
  /* 11ec5736 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec5739:;
  /* 11ec5739 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec573c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec573f jle 0x11ec574a */
  if ((C.zf||C.sf!=C.of)) goto L_11ec574a;
  /* 11ec5741 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5744 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5747 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ec574a:;
  /* 11ec574a jmp 0x11ec5781 */
  goto L_11ec5781;
L_11ec574c:;
  /* 11ec574c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec574f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec5754 jne 0x11ec5765 */
  if (!C.zf) goto L_11ec5765;
  /* 11ec5756 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec5759 mov ecx, dword ptr [eax*4 + 0x11ee1e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee1e4c)));
  /* 11ec5760 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec5763 jmp 0x11ec5772 */
  goto L_11ec5772;
L_11ec5765:;
  /* 11ec5765 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec5768 mov eax, dword ptr [edx*4 + 0x11ee1e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee1e80)));
  /* 11ec576f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ec5772:;
  /* 11ec5772 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec5775 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec5778 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec577b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec577e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ec5781:;
  /* 11ec5781 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5785 jne 0x11ec57c1 */
  if (!C.zf) goto L_11ec57c1;
  /* 11ec5787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec578a mov dword ptr [0x11ee1e2c], eax */
  w32((uint32_t)(0x11ee1e2c), (EAX));
  /* 11ec578f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ec5792 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec5795 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ec5798 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec579a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec579d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11ec57a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec57a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec57a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11ec57ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec57ad mov dword ptr [0x11ee1e30], ecx */
  w32((uint32_t)(0x11ee1e30), (ECX));
  /* 11ec57b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec57b6 mov dword ptr [0x11ee1e28], edx */
  w32((uint32_t)(0x11ee1e28), (EDX));
  /* 11ec57bc jmp 0x11ec5864 */
  goto L_11ec5864;
L_11ec57c1:;
  /* 11ec57c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec57c4 mov dword ptr [0x11ee1e3c], eax */
  w32((uint32_t)(0x11ee1e3c), (EAX));
  /* 11ec57c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ec57cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec57cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ec57d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec57d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec57d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11ec57da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec57dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec57e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11ec57e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec57e7 mov dword ptr [0x11ee1e40], ecx */
  w32((uint32_t)(0x11ee1e40), (ECX));
  /* 11ec57ed mov edx, dword ptr [0x11ee1d98] */
  EDX = (r32((uint32_t)(0x11ee1d98)));
  /* 11ec57f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec57f9 mov eax, dword ptr [0x11ee1e40] */
  EAX = (r32((uint32_t)(0x11ee1e40)));
  /* 11ec57fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5800 mov dword ptr [0x11ee1e40], eax */
  w32((uint32_t)(0x11ee1e40), (EAX));
  /* 11ec5805 cmp dword ptr [0x11ee1e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee1e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec580c jge 0x11ec5831 */
  if ((C.sf==C.of)) goto L_11ec5831;
  /* 11ec580e mov ecx, dword ptr [0x11ee1e40] */
  ECX = (r32((uint32_t)(0x11ee1e40)));
  /* 11ec5814 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec581a mov dword ptr [0x11ee1e40], ecx */
  w32((uint32_t)(0x11ee1e40), (ECX));
  /* 11ec5820 mov edx, dword ptr [0x11ee1e3c] */
  EDX = (r32((uint32_t)(0x11ee1e3c)));
  /* 11ec5826 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5829 mov dword ptr [0x11ee1e3c], edx */
  w32((uint32_t)(0x11ee1e3c), (EDX));
  /* 11ec582f jmp 0x11ec585b */
  goto L_11ec585b;
L_11ec5831:;
  /* 11ec5831 cmp dword ptr [0x11ee1e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11ee1e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec583b jl 0x11ec585b */
  if ((C.sf!=C.of)) goto L_11ec585b;
  /* 11ec583d mov eax, dword ptr [0x11ee1e40] */
  EAX = (r32((uint32_t)(0x11ee1e40)));
  /* 11ec5842 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5847 mov dword ptr [0x11ee1e40], eax */
  w32((uint32_t)(0x11ee1e40), (EAX));
  /* 11ec584c mov ecx, dword ptr [0x11ee1e3c] */
  ECX = (r32((uint32_t)(0x11ee1e3c)));
  /* 11ec5852 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5855 mov dword ptr [0x11ee1e3c], ecx */
  w32((uint32_t)(0x11ee1e3c), (ECX));
L_11ec585b:;
  /* 11ec585b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec585e mov dword ptr [0x11ee1e38], edx */
  w32((uint32_t)(0x11ee1e38), (EDX));
L_11ec5864:;
  /* 11ec5864 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5866 pop ebp */
  EBP = (pop32());
  /* 11ec5867 ret  */
  ESPCHK(0x11ec5670u, _esp0);
  ESP += 4; return;
}

/* FUN_10015870 @ 0x11ec5870 (382 bytes, 135 insns) */
void f_11ec5870(void) {
  FTRACE(0x11ec5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5870 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5871 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5873 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5875 push 0x11edec48 */
  push32((uint32_t)(0x11edec48u));
  /* 11ec587a push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ec587f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ec5885 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5886 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ec588d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5890 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec5891 push esi */
  push32((uint32_t)(ESI));
  /* 11ec5892 push edi */
  push32((uint32_t)(EDI));
  /* 11ec5893 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec5896 cmp dword ptr [0x11ee2ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec589d jne 0x11ec58e2 */
  if (!C.zf) goto L_11ec58e2;
  /* 11ec589f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec58a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58a7 call dword ptr [0x11ee52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52dc))), 0x11ec58adu);
  /* 11ec58ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec58af je 0x11ec58bd */
  if (C.zf) goto L_11ec58bd;
  /* 11ec58b1 mov dword ptr [0x11ee2ae4], 1 */
  w32((uint32_t)(0x11ee2ae4), (0x1u));
  /* 11ec58bb jmp 0x11ec58e2 */
  goto L_11ec58e2;
L_11ec58bd:;
  /* 11ec58bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec58c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec58c5 call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec58cbu);
  /* 11ec58cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec58cd je 0x11ec58db */
  if (C.zf) goto L_11ec58db;
  /* 11ec58cf mov dword ptr [0x11ee2ae4], 2 */
  w32((uint32_t)(0x11ee2ae4), (0x2u));
  /* 11ec58d9 jmp 0x11ec58e2 */
  goto L_11ec58e2;
L_11ec58db:;
  /* 11ec58db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec58dd jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec58e2:;
  /* 11ec58e2 cmp dword ptr [0x11ee2ae4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec58e9 jne 0x11ec5906 */
  if (!C.zf) goto L_11ec5906;
  /* 11ec58eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec58ee push eax */
  push32((uint32_t)(EAX));
  /* 11ec58ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec58f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec58f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec58f6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec58f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec58fa push eax */
  push32((uint32_t)(EAX));
  /* 11ec58fb call dword ptr [0x11ee52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52dc))), 0x11ec5901u);
  /* 11ec5901 jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec5906:;
  /* 11ec5906 cmp dword ptr [0x11ee2ae4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec590d jne 0x11ec59ef */
  if (!C.zf) goto L_11ec59ef;
  /* 11ec5913 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5917 jne 0x11ec5922 */
  if (!C.zf) goto L_11ec5922;
  /* 11ec5919 mov ecx, dword ptr [0x11ee2998] */
  ECX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec591f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11ec5922:;
  /* 11ec5922 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5929 push edx */
  push32((uint32_t)(EDX));
  /* 11ec592a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec592d push eax */
  push32((uint32_t)(EAX));
  /* 11ec592e call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec5934u);
  /* 11ec5934 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ec5937 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec593b jne 0x11ec5944 */
  if (!C.zf) goto L_11ec5944;
  /* 11ec593d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec593f jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec5944:;
  /* 11ec5944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec594b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec594e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5951 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec5953 call 0x11eb95d0 */
  push32(0x11ec5958u); f_11eb95d0();
  /* 11ec5958 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11ec595b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec595e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec5961 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ec5964 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec596b jmp 0x11ec5984 */
  goto L_11ec5984;
  /* 11ec596d mov eax, 1 */
  EAX = (0x1u);
  /* 11ec5972 ret  */
  ESPCHK(0x11ec5870u, _esp0);
  ESP += 4; return;
  /* 11ec5973 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec5976 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ec597d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec5984:;
  /* 11ec5984 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5988 jne 0x11ec598e */
  if (!C.zf) goto L_11ec598e;
  /* 11ec598a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec598c jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec598e:;
  /* 11ec598e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec5991 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5992 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec5995 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5996 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5999 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec599a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec599d push edx */
  push32((uint32_t)(EDX));
  /* 11ec599e call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec59a4u);
  /* 11ec59a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec59a6 jne 0x11ec59ac */
  if (!C.zf) goto L_11ec59ac;
  /* 11ec59a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec59aa jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec59ac:;
  /* 11ec59ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec59b0 jne 0x11ec59cd */
  if (!C.zf) goto L_11ec59cd;
  /* 11ec59b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec59b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec59b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec59b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec59bb push eax */
  push32((uint32_t)(EAX));
  /* 11ec59bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec59be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec59c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec59c2 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec59c8u);
  /* 11ec59c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ec59cb jmp 0x11ec59ea */
  goto L_11ec59ea;
L_11ec59cd:;
  /* 11ec59cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec59d0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec59d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec59d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec59d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec59d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec59da push ecx */
  push32((uint32_t)(ECX));
  /* 11ec59db push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec59dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec59e0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec59e1 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec59e7u);
  /* 11ec59e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ec59ea:;
  /* 11ec59ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec59ed jmp 0x11ec59f1 */
  goto L_11ec59f1;
L_11ec59ef:;
  /* 11ec59ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec59f1:;
  /* 11ec59f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ec59f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec59f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ec59fe pop edi */
  EDI = (pop32());
  /* 11ec59ff pop esi */
  ESI = (pop32());
  /* 11ec5a00 pop ebx */
  EBX = (pop32());
  /* 11ec5a01 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5a03 pop ebp */
  EBP = (pop32());
  /* 11ec5a04 ret  */
  ESPCHK(0x11ec5870u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a10 @ 0x11ec5a10 (398 bytes, 140 insns) */
void f_11ec5a10(void) {
  FTRACE(0x11ec5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5a11 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5a13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5a15 push 0x11edec58 */
  push32((uint32_t)(0x11edec58u));
  /* 11ec5a1a push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ec5a1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ec5a25 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5a26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ec5a2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5a30 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec5a31 push esi */
  push32((uint32_t)(ESI));
  /* 11ec5a32 push edi */
  push32((uint32_t)(EDI));
  /* 11ec5a33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec5a36 cmp dword ptr [0x11ee2ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5a3d jne 0x11ec5a82 */
  if (!C.zf) goto L_11ec5a82;
  /* 11ec5a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a47 call dword ptr [0x11ee52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52dc))), 0x11ec5a4du);
  /* 11ec5a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5a4f je 0x11ec5a5d */
  if (C.zf) goto L_11ec5a5d;
  /* 11ec5a51 mov dword ptr [0x11ee2ae8], 1 */
  w32((uint32_t)(0x11ee2ae8), (0x1u));
  /* 11ec5a5b jmp 0x11ec5a82 */
  goto L_11ec5a82;
L_11ec5a5d:;
  /* 11ec5a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5a65 call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec5a6bu);
  /* 11ec5a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5a6d je 0x11ec5a7b */
  if (C.zf) goto L_11ec5a7b;
  /* 11ec5a6f mov dword ptr [0x11ee2ae8], 2 */
  w32((uint32_t)(0x11ee2ae8), (0x2u));
  /* 11ec5a79 jmp 0x11ec5a82 */
  goto L_11ec5a82;
L_11ec5a7b:;
  /* 11ec5a7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5a7d jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5a82:;
  /* 11ec5a82 cmp dword ptr [0x11ee2ae8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5a89 jne 0x11ec5aa6 */
  if (!C.zf) goto L_11ec5aa6;
  /* 11ec5a8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec5a8e push eax */
  push32((uint32_t)(EAX));
  /* 11ec5a8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5a92 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5a93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5a96 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5a97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5a9a push eax */
  push32((uint32_t)(EAX));
  /* 11ec5a9b call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec5aa1u);
  /* 11ec5aa1 jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5aa6:;
  /* 11ec5aa6 cmp dword ptr [0x11ee2ae8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2ae8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5aad jne 0x11ec5b9f */
  if (!C.zf) goto L_11ec5b9f;
  /* 11ec5ab3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5ab7 jne 0x11ec5ac2 */
  if (!C.zf) goto L_11ec5ac2;
  /* 11ec5ab9 mov ecx, dword ptr [0x11ee2998] */
  ECX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec5abf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11ec5ac2:;
  /* 11ec5ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5ac6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5ac9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5acd push eax */
  push32((uint32_t)(EAX));
  /* 11ec5ace call dword ptr [0x11ee52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52dc))), 0x11ec5ad4u);
  /* 11ec5ad4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ec5ad7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5adb jne 0x11ec5ae4 */
  if (!C.zf) goto L_11ec5ae4;
  /* 11ec5add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5adf jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5ae4:;
  /* 11ec5ae4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec5aeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec5aee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec5af0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5af3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec5af5 call 0x11eb95d0 */
  push32(0x11ec5afau); f_11eb95d0();
  /* 11ec5afa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11ec5afd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec5b00 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec5b03 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ec5b06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec5b0d jmp 0x11ec5b26 */
  goto L_11ec5b26;
  /* 11ec5b0f mov eax, 1 */
  EAX = (0x1u);
  /* 11ec5b14 ret  */
  ESPCHK(0x11ec5a10u, _esp0);
  ESP += 4; return;
  /* 11ec5b15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec5b18 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ec5b1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec5b26:;
  /* 11ec5b26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5b2a jne 0x11ec5b30 */
  if (!C.zf) goto L_11ec5b30;
  /* 11ec5b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5b2e jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5b30:;
  /* 11ec5b30 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec5b33 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5b34 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec5b37 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5b38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5b3b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5b3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5b3f push edx */
  push32((uint32_t)(EDX));
  /* 11ec5b40 call dword ptr [0x11ee52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52dc))), 0x11ec5b46u);
  /* 11ec5b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5b48 jne 0x11ec5b4e */
  if (!C.zf) goto L_11ec5b4e;
  /* 11ec5b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5b4c jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5b4e:;
  /* 11ec5b4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5b52 jne 0x11ec5b76 */
  if (!C.zf) goto L_11ec5b76;
  /* 11ec5b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b5c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5b5e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec5b61 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5b62 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec5b67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec5b6a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5b6b call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec5b71u);
  /* 11ec5b71 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ec5b74 jmp 0x11ec5b9a */
  goto L_11ec5b9a;
L_11ec5b76:;
  /* 11ec5b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5b7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec5b7d push edx */
  push32((uint32_t)(EDX));
  /* 11ec5b7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5b81 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5b82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5b84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec5b87 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5b88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ec5b8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec5b90 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5b91 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec5b97u);
  /* 11ec5b97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ec5b9a:;
  /* 11ec5b9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec5b9d jmp 0x11ec5ba1 */
  goto L_11ec5ba1;
L_11ec5b9f:;
  /* 11ec5b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec5ba1:;
  /* 11ec5ba1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ec5ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec5ba7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ec5bae pop edi */
  EDI = (pop32());
  /* 11ec5baf pop esi */
  ESI = (pop32());
  /* 11ec5bb0 pop ebx */
  EBX = (pop32());
  /* 11ec5bb1 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5bb3 pop ebp */
  EBP = (pop32());
  /* 11ec5bb4 ret  */
  ESPCHK(0x11ec5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bc0 @ 0x11ec5bc0 (11 bytes, 6 insns) */
void f_11ec5bc0(void) {
  FTRACE(0x11ec5bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5bc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5bc6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5bc9 pop ebp */
  EBP = (pop32());
  /* 11ec5bca ret  */
  ESPCHK(0x11ec5bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bd0 @ 0x11ec5bd0 (147 bytes, 43 insns) */
void f_11ec5bd0(void) {
  FTRACE(0x11ec5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5bd4 cmp dword ptr [0x11ee2988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5bdb jne 0x11ec5bf7 */
  if (!C.zf) goto L_11ec5bf7;
  /* 11ec5bdd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5be1 jl 0x11ec5bf2 */
  if ((C.sf!=C.of)) goto L_11ec5bf2;
  /* 11ec5be3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5be7 jg 0x11ec5bf2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec5bf2;
  /* 11ec5be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5bec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5bef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ec5bf2:;
  /* 11ec5bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5bf5 jmp 0x11ec5c5f */
  goto L_11ec5c5f;
L_11ec5bf7:;
  /* 11ec5bf7 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec5bfc call dword ptr [0x11ee53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a4))), 0x11ec5c02u);
  /* 11ec5c02 cmp dword ptr [0x11ee2b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5c09 je 0x11ec5c29 */
  if (C.zf) goto L_11ec5c29;
  /* 11ec5c0b push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec5c10 call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ec5c16u);
  /* 11ec5c16 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec5c18 call 0x11eb9e30 */
  push32(0x11ec5c1du); f_11eb9e30();
  /* 11ec5c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5c20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ec5c27 jmp 0x11ec5c30 */
  goto L_11ec5c30;
L_11ec5c29:;
  /* 11ec5c29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ec5c30:;
  /* 11ec5c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5c34 call 0x11ec5c70 */
  push32(0x11ec5c39u); f_11ec5c70();
  /* 11ec5c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5c3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec5c3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5c43 je 0x11ec5c51 */
  if (C.zf) goto L_11ec5c51;
  /* 11ec5c45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec5c47 call 0x11eb9ed0 */
  push32(0x11ec5c4cu); f_11eb9ed0();
  /* 11ec5c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5c4f jmp 0x11ec5c5c */
  goto L_11ec5c5c;
L_11ec5c51:;
  /* 11ec5c51 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ec5c56 call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ec5c5cu);
L_11ec5c5c:;
  /* 11ec5c5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ec5c5f:;
  /* 11ec5c5f mov esp, ebp */
  ESP = (EBP);
  /* 11ec5c61 pop ebp */
  EBP = (pop32());
  /* 11ec5c62 ret  */
  ESPCHK(0x11ec5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c70 @ 0x11ec5c70 (299 bytes, 91 insns) */
void f_11ec5c70(void) {
  FTRACE(0x11ec5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5c71 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5c73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5c76 cmp dword ptr [0x11ee2988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5c7d jne 0x11ec5c9c */
  if (!C.zf) goto L_11ec5c9c;
  /* 11ec5c7f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5c83 jl 0x11ec5c94 */
  if ((C.sf!=C.of)) goto L_11ec5c94;
  /* 11ec5c85 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5c89 jg 0x11ec5c94 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec5c94;
  /* 11ec5c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5c8e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5c91 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ec5c94:;
  /* 11ec5c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5c97 jmp 0x11ec5d97 */
  goto L_11ec5d97;
L_11ec5c9c:;
  /* 11ec5c9c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5ca3 jge 0x11ec5ce3 */
  if ((C.sf==C.of)) goto L_11ec5ce3;
  /* 11ec5ca5 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5cac jle 0x11ec5cc1 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec5cc1;
  /* 11ec5cae push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5cb4 call 0x11ebc440 */
  push32(0x11ec5cb9u); f_11ebc440();
  /* 11ec5cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5cbc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ec5cbf jmp 0x11ec5cd5 */
  goto L_11ec5cd5;
L_11ec5cc1:;
  /* 11ec5cc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5cc4 mov eax, dword ptr [0x11ee0c98] */
  EAX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec5cc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5ccb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ec5ccf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5cd2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ec5cd5:;
  /* 11ec5cd5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5cd9 jne 0x11ec5ce3 */
  if (!C.zf) goto L_11ec5ce3;
  /* 11ec5cdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5cde jmp 0x11ec5d97 */
  goto L_11ec5d97;
L_11ec5ce3:;
  /* 11ec5ce3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5ce6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ec5ce9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5cef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5cf5 mov eax, dword ptr [0x11ee0c98] */
  EAX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ec5cfa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5cfc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ec5d00 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5d06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec5d08 je 0x11ec5d2c */
  if (C.zf) goto L_11ec5d2c;
  /* 11ec5d0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5d0d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ec5d10 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec5d16 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11ec5d19 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ec5d1c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11ec5d1f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11ec5d23 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ec5d2a jmp 0x11ec5d3d */
  goto L_11ec5d3d;
L_11ec5d2c:;
  /* 11ec5d2c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ec5d2f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ec5d32 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11ec5d36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11ec5d3d:;
  /* 11ec5d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5d41 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ec5d43 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ec5d46 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5d4a push eax */
  push32((uint32_t)(EAX));
  /* 11ec5d4b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ec5d4e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5d4f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ec5d54 mov edx, dword ptr [0x11ee2988] */
  EDX = (r32((uint32_t)(0x11ee2988)));
  /* 11ec5d5a push edx */
  push32((uint32_t)(EDX));
  /* 11ec5d5b call 0x11ebe820 */
  push32(0x11ec5d60u); f_11ebe820();
  /* 11ec5d60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5d63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec5d66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5d6a jne 0x11ec5d71 */
  if (!C.zf) goto L_11ec5d71;
  /* 11ec5d6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5d6f jmp 0x11ec5d97 */
  goto L_11ec5d97;
L_11ec5d71:;
  /* 11ec5d71 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5d75 jne 0x11ec5d81 */
  if (!C.zf) goto L_11ec5d81;
  /* 11ec5d77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5d7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5d7f jmp 0x11ec5d97 */
  goto L_11ec5d97;
L_11ec5d81:;
  /* 11ec5d81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5d84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5d89 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11ec5d8c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5d92 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ec5d95 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11ec5d97:;
  /* 11ec5d97 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5d99 pop ebp */
  EBP = (pop32());
  /* 11ec5d9a ret  */
  ESPCHK(0x11ec5c70u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11ec5da0 (52 bytes, 19 insns) */
void f_11ec5da0(void) {
  FTRACE(0x11ec5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5da0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ec5da4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ec5da8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec5daa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ec5dae jne 0x11ec5db9 */
  if (!C.zf) goto L_11ec5db9;
  /* 11ec5db0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ec5db4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ec5db6 ret 0x10 */
  ESPCHK(0x11ec5da0u, _esp0);
  ESP += 20; return;
L_11ec5db9:;
  /* 11ec5db9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec5dba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ec5dbc mov ebx, eax */
  EBX = (EAX);
  /* 11ec5dbe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ec5dc2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ec5dc6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5dc8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ec5dcc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ec5dce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5dd0 pop ebx */
  EBX = (pop32());
  /* 11ec5dd1 ret 0x10 */
  ESPCHK(0x11ec5da0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015de0 @ 0x11ec5de0 (46 bytes, 18 insns) */
void f_11ec5de0(void) {
  FTRACE(0x11ec5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5de4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec5de6 call 0x11eb9e30 */
  push32(0x11ec5debu); f_11eb9e30();
  /* 11ec5deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5df1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5df2 call 0x11ec5e10 */
  push32(0x11ec5df7u); f_11ec5e10();
  /* 11ec5df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5dfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec5dfd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ec5dff call 0x11eb9ed0 */
  push32(0x11ec5e04u); f_11eb9ed0();
  /* 11ec5e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5e0a mov esp, ebp */
  ESP = (EBP);
  /* 11ec5e0c pop ebp */
  EBP = (pop32());
  /* 11ec5e0d ret  */
  ESPCHK(0x11ec5de0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11ec5e10 (198 bytes, 69 insns) */
void f_11ec5e10(void) {
  FTRACE(0x11ec5e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5e11 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5e16 mov eax, dword ptr [0x11ee27a4] */
  EAX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec5e1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec5e1e cmp dword ptr [0x11ee42a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e25 jne 0x11ec5e2e */
  if (!C.zf) goto L_11ec5e2e;
  /* 11ec5e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5e29 jmp 0x11ec5ed2 */
  goto L_11ec5ed2;
L_11ec5e2e:;
  /* 11ec5e2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e32 jne 0x11ec5e56 */
  if (!C.zf) goto L_11ec5e56;
  /* 11ec5e34 cmp dword ptr [0x11ee27ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e3b je 0x11ec5e56 */
  if (C.zf) goto L_11ec5e56;
  /* 11ec5e3d call 0x11ec5f30 */
  push32(0x11ec5e42u); f_11ec5f30();
  /* 11ec5e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5e44 je 0x11ec5e4d */
  if (C.zf) goto L_11ec5e4d;
  /* 11ec5e46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5e48 jmp 0x11ec5ed2 */
  goto L_11ec5ed2;
L_11ec5e4d:;
  /* 11ec5e4d mov ecx, dword ptr [0x11ee27a4] */
  ECX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec5e53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ec5e56:;
  /* 11ec5e56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e5a je 0x11ec5ed0 */
  if (C.zf) goto L_11ec5ed0;
  /* 11ec5e5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e60 je 0x11ec5ed0 */
  if (C.zf) goto L_11ec5ed0;
  /* 11ec5e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5e65 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5e66 call 0x11eb9260 */
  push32(0x11ec5e6bu); f_11eb9260();
  /* 11ec5e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5e6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec5e71:;
  /* 11ec5e71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5e74 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e77 je 0x11ec5ed0 */
  if (C.zf) goto L_11ec5ed0;
  /* 11ec5e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5e7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec5e7e push edx */
  push32((uint32_t)(EDX));
  /* 11ec5e7f call 0x11eb9260 */
  push32(0x11ec5e84u); f_11eb9260();
  /* 11ec5e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5e87 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e8a jbe 0x11ec5ec5 */
  if ((C.cf||C.zf)) goto L_11ec5ec5;
  /* 11ec5e8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5e8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec5e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5e94 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11ec5e98 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5e9b jne 0x11ec5ec5 */
  if (!C.zf) goto L_11ec5ec5;
  /* 11ec5e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5ea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5ea5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5ea8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec5eaa push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5eab call 0x11ec5ee0 */
  push32(0x11ec5eb0u); f_11ec5ee0();
  /* 11ec5eb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5eb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5eb5 jne 0x11ec5ec5 */
  if (!C.zf) goto L_11ec5ec5;
  /* 11ec5eb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5eba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec5ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5ebf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11ec5ec3 jmp 0x11ec5ed2 */
  goto L_11ec5ed2;
L_11ec5ec5:;
  /* 11ec5ec5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5ec8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5ecb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec5ece jmp 0x11ec5e71 */
  goto L_11ec5e71;
L_11ec5ed0:;
  /* 11ec5ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec5ed2:;
  /* 11ec5ed2 mov esp, ebp */
  ESP = (EBP);
  /* 11ec5ed4 pop ebp */
  EBP = (pop32());
  /* 11ec5ed5 ret  */
  ESPCHK(0x11ec5e10u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11ec5ee0 (79 bytes, 32 insns) */
void f_11ec5ee0(void) {
  FTRACE(0x11ec5ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5ee4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5ee8 jne 0x11ec5eee */
  if (!C.zf) goto L_11ec5eee;
  /* 11ec5eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5eec jmp 0x11ec5f2b */
  goto L_11ec5f2b;
L_11ec5eee:;
  /* 11ec5eee mov eax, dword ptr [0x11ee3e64] */
  EAX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ec5ef3 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5ef4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5ef8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec5efb push edx */
  push32((uint32_t)(EDX));
  /* 11ec5efc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec5eff push eax */
  push32((uint32_t)(EAX));
  /* 11ec5f00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec5f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5f04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5f06 mov edx, dword ptr [0x11ee4104] */
  EDX = (r32((uint32_t)(0x11ee4104)));
  /* 11ec5f0c push edx */
  push32((uint32_t)(EDX));
  /* 11ec5f0d call 0x11ec5fe0 */
  push32(0x11ec5f12u); f_11ec5fe0();
  /* 11ec5f12 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5f15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec5f18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5f1c jne 0x11ec5f25 */
  if (!C.zf) goto L_11ec5f25;
  /* 11ec5f1e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11ec5f23 jmp 0x11ec5f2b */
  goto L_11ec5f2b;
L_11ec5f25:;
  /* 11ec5f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5f28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ec5f2b:;
  /* 11ec5f2b mov esp, ebp */
  ESP = (EBP);
  /* 11ec5f2d pop ebp */
  EBP = (pop32());
  /* 11ec5f2e ret  */
  ESPCHK(0x11ec5ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x11ec5f30 (174 bytes, 66 insns) */
void f_11ec5f30(void) {
  FTRACE(0x11ec5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5f31 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5f33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec5f36 mov eax, dword ptr [0x11ee27ac] */
  EAX = (r32((uint32_t)(0x11ee27ac)));
  /* 11ec5f3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec5f3e:;
  /* 11ec5f3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5f41 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5f44 je 0x11ec5fd8 */
  if (C.zf) goto L_11ec5fd8;
  /* 11ec5f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5f54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5f57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec5f59 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5f5e call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec5f64u);
  /* 11ec5f64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec5f67 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5f6b jne 0x11ec5f72 */
  if (!C.zf) goto L_11ec5f72;
  /* 11ec5f6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5f70 jmp 0x11ec5fda */
  goto L_11ec5fda;
L_11ec5f72:;
  /* 11ec5f72 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ec5f74 push 0x11edec64 */
  push32((uint32_t)(0x11edec64u));
  /* 11ec5f79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec5f7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5f7e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec5f7f call 0x11eb6430 */
  push32(0x11ec5f84u); f_11eb6430();
  /* 11ec5f84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5f87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec5f8a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec5f8e jne 0x11ec5f95 */
  if (!C.zf) goto L_11ec5f95;
  /* 11ec5f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5f93 jmp 0x11ec5fda */
  goto L_11ec5fda;
L_11ec5f95:;
  /* 11ec5f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5f99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec5f9c push edx */
  push32((uint32_t)(EDX));
  /* 11ec5f9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5fa0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5fa1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5fa6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec5fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec5fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5fab push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec5fad call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ec5fb3u);
  /* 11ec5fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec5fb5 jne 0x11ec5fbc */
  if (!C.zf) goto L_11ec5fbc;
  /* 11ec5fb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec5fba jmp 0x11ec5fda */
  goto L_11ec5fda;
L_11ec5fbc:;
  /* 11ec5fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec5fbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec5fc1 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5fc2 call 0x11ec6430 */
  push32(0x11ec5fc7u); f_11ec6430();
  /* 11ec5fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec5fcd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec5fd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec5fd3 jmp 0x11ec5f3e */
  goto L_11ec5f3e;
L_11ec5fd8:;
  /* 11ec5fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec5fda:;
  /* 11ec5fda mov esp, ebp */
  ESP = (EBP);
  /* 11ec5fdc pop ebp */
  EBP = (pop32());
  /* 11ec5fdd ret  */
  ESPCHK(0x11ec5f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fe0 @ 0x11ec5fe0 (970 bytes, 340 insns) */
void f_11ec5fe0(void) {
  FTRACE(0x11ec5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec5fe3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ec5fe5 push 0x11edecb8 */
  push32((uint32_t)(0x11edecb8u));
  /* 11ec5fea push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ec5fef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ec5ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec5ff6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ec5ffd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6000 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec6001 push esi */
  push32((uint32_t)(ESI));
  /* 11ec6002 push edi */
  push32((uint32_t)(EDI));
  /* 11ec6003 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec6006 cmp dword ptr [0x11ee2aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec600d jne 0x11ec6066 */
  if (!C.zf) goto L_11ec6066;
  /* 11ec600f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec6011 push 0x11ede314 */
  push32((uint32_t)(0x11ede314u));
  /* 11ec6016 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec6018 push 0x11ede314 */
  push32((uint32_t)(0x11ede314u));
  /* 11ec601d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec601f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec6021 call dword ptr [0x11ee52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52d4))), 0x11ec6027u);
  /* 11ec6027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec6029 je 0x11ec6037 */
  if (C.zf) goto L_11ec6037;
  /* 11ec602b mov dword ptr [0x11ee2aec], 1 */
  w32((uint32_t)(0x11ee2aec), (0x1u));
  /* 11ec6035 jmp 0x11ec6066 */
  goto L_11ec6066;
L_11ec6037:;
  /* 11ec6037 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec6039 push 0x11ede310 */
  push32((uint32_t)(0x11ede310u));
  /* 11ec603e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec6040 push 0x11ede310 */
  push32((uint32_t)(0x11ede310u));
  /* 11ec6045 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec6047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec6049 call dword ptr [0x11ee52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52d8))), 0x11ec604fu);
  /* 11ec604f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec6051 je 0x11ec605f */
  if (C.zf) goto L_11ec605f;
  /* 11ec6053 mov dword ptr [0x11ee2aec], 2 */
  w32((uint32_t)(0x11ee2aec), (0x2u));
  /* 11ec605d jmp 0x11ec6066 */
  goto L_11ec6066;
L_11ec605f:;
  /* 11ec605f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6061 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6066:;
  /* 11ec6066 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec606a jle 0x11ec607f */
  if ((C.zf||C.sf!=C.of)) goto L_11ec607f;
  /* 11ec606c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec606f push eax */
  push32((uint32_t)(EAX));
  /* 11ec6070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec6073 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6074 call 0x11ec63e0 */
  push32(0x11ec6079u); f_11ec63e0();
  /* 11ec6079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec607c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ec607f:;
  /* 11ec607f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6083 jle 0x11ec6098 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec6098;
  /* 11ec6085 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec6088 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec608c push eax */
  push32((uint32_t)(EAX));
  /* 11ec608d call 0x11ec63e0 */
  push32(0x11ec6092u); f_11ec63e0();
  /* 11ec6092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6095 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11ec6098:;
  /* 11ec6098 cmp dword ptr [0x11ee2aec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2aec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec609f jne 0x11ec60c4 */
  if (!C.zf) goto L_11ec60c4;
  /* 11ec60a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec60a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec60a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec60a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec60a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec60ac push eax */
  push32((uint32_t)(EAX));
  /* 11ec60ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec60b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec60b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec60b4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec60b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec60b8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec60b9 call dword ptr [0x11ee52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52d8))), 0x11ec60bfu);
  /* 11ec60bf jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec60c4:;
  /* 11ec60c4 cmp dword ptr [0x11ee2aec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2aec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec60cb jne 0x11ec63c2 */
  if (!C.zf) goto L_11ec63c2;
  /* 11ec60d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec60d5 jne 0x11ec60e0 */
  if (!C.zf) goto L_11ec60e0;
  /* 11ec60d7 mov ecx, dword ptr [0x11ee2998] */
  ECX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec60dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11ec60e0:;
  /* 11ec60e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec60e4 je 0x11ec60f0 */
  if (C.zf) goto L_11ec60f0;
  /* 11ec60e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec60ea jne 0x11ec626c */
  if (!C.zf) goto L_11ec626c;
L_11ec60f0:;
  /* 11ec60f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec60f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec60f6 jne 0x11ec6102 */
  if (!C.zf) goto L_11ec6102;
  /* 11ec60f8 mov eax, 2 */
  EAX = (0x2u);
  /* 11ec60fd jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6102:;
  /* 11ec6102 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6106 jle 0x11ec6112 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec6112;
  /* 11ec6108 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec610d jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6112:;
  /* 11ec6112 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6116 jle 0x11ec6122 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec6122;
  /* 11ec6118 mov eax, 3 */
  EAX = (0x3u);
  /* 11ec611d jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6122:;
  /* 11ec6122 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11ec6125 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6126 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ec6129 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec612a call dword ptr [0x11ee5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5330))), 0x11ec6130u);
  /* 11ec6130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec6132 jne 0x11ec613b */
  if (!C.zf) goto L_11ec613b;
  /* 11ec6134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6136 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec613b:;
  /* 11ec613b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec613f jne 0x11ec6147 */
  if (!C.zf) goto L_11ec6147;
  /* 11ec6141 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6145 je 0x11ec6174 */
  if (C.zf) goto L_11ec6174;
L_11ec6147:;
  /* 11ec6147 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec614b jne 0x11ec6153 */
  if (!C.zf) goto L_11ec6153;
  /* 11ec614d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6151 je 0x11ec6174 */
  if (C.zf) goto L_11ec6174;
L_11ec6153:;
  /* 11ec6153 push 0x11edec78 */
  push32((uint32_t)(0x11edec78u));
  /* 11ec6158 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec615a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11ec615f push 0x11edec70 */
  push32((uint32_t)(0x11edec70u));
  /* 11ec6164 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec6166 call 0x11eb54f0 */
  push32(0x11ec616bu); f_11eb54f0();
  /* 11ec616b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec616e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6171 jne 0x11ec6174 */
  if (!C.zf) goto L_11ec6174;
  /* 11ec6173 int3  */
  x86_unimpl("int3 @ 0x11ec6173");
L_11ec6174:;
  /* 11ec6174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec6176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec6178 jne 0x11ec613b */
  if (!C.zf) goto L_11ec613b;
  /* 11ec617a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec617e jle 0x11ec61f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec61f3;
  /* 11ec6180 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6184 jae 0x11ec6190 */
  if (!C.cf) goto L_11ec6190;
  /* 11ec6186 mov eax, 3 */
  EAX = (0x3u);
  /* 11ec618b jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6190:;
  /* 11ec6190 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11ec6193 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ec6196 jmp 0x11ec61a1 */
  goto L_11ec61a1;
L_11ec6198:;
  /* 11ec6198 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec619b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec619e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11ec61a1:;
  /* 11ec61a1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec61a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec61a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec61a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec61aa je 0x11ec61e9 */
  if (C.zf) goto L_11ec61e9;
  /* 11ec61ac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec61af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec61b1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ec61b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec61b6 je 0x11ec61e9 */
  if (C.zf) goto L_11ec61e9;
  /* 11ec61b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec61bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec61bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec61bf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec61c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec61c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec61c6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec61c8 jl 0x11ec61e7 */
  if ((C.sf!=C.of)) goto L_11ec61e7;
  /* 11ec61ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec61cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec61cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec61d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec61d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec61d6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ec61d9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec61db jg 0x11ec61e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec61e7;
  /* 11ec61dd mov eax, 2 */
  EAX = (0x2u);
  /* 11ec61e2 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec61e7:;
  /* 11ec61e7 jmp 0x11ec6198 */
  goto L_11ec6198;
L_11ec61e9:;
  /* 11ec61e9 mov eax, 3 */
  EAX = (0x3u);
  /* 11ec61ee jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec61f3:;
  /* 11ec61f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec61f7 jle 0x11ec626c */
  if ((C.zf||C.sf!=C.of)) goto L_11ec626c;
  /* 11ec61f9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec61fd jae 0x11ec6209 */
  if (!C.cf) goto L_11ec6209;
  /* 11ec61ff mov eax, 1 */
  EAX = (0x1u);
  /* 11ec6204 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6209:;
  /* 11ec6209 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11ec620c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11ec620f jmp 0x11ec621a */
  goto L_11ec621a;
L_11ec6211:;
  /* 11ec6211 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec6214 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6217 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11ec621a:;
  /* 11ec621a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec621d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec621f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec6221 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec6223 je 0x11ec6262 */
  if (C.zf) goto L_11ec6262;
  /* 11ec6225 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec6228 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec622a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ec622d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec622f je 0x11ec6262 */
  if (C.zf) goto L_11ec6262;
  /* 11ec6231 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec6234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6236 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec6238 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec623b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec623d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec623f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6241 jl 0x11ec6260 */
  if ((C.sf!=C.of)) goto L_11ec6260;
  /* 11ec6243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec6246 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec6248 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec624a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ec624d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec624f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ec6252 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6254 jg 0x11ec6260 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec6260;
  /* 11ec6256 mov eax, 2 */
  EAX = (0x2u);
  /* 11ec625b jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6260:;
  /* 11ec6260 jmp 0x11ec6211 */
  goto L_11ec6211;
L_11ec6262:;
  /* 11ec6262 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec6267 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec626c:;
  /* 11ec626c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec626e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec6270 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec6273 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6274 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec6277 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6278 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ec627a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ec627d push eax */
  push32((uint32_t)(EAX));
  /* 11ec627e call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec6284u);
  /* 11ec6284 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ec6287 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec628b jne 0x11ec6294 */
  if (!C.zf) goto L_11ec6294;
  /* 11ec628d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec628f jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6294:;
  /* 11ec6294 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec629b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec629e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec62a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec62a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec62a5 call 0x11eb95d0 */
  push32(0x11ec62aau); f_11eb95d0();
  /* 11ec62aa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11ec62ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec62b0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ec62b3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ec62b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec62bd jmp 0x11ec62d6 */
  goto L_11ec62d6;
  /* 11ec62bf mov eax, 1 */
  EAX = (0x1u);
  /* 11ec62c4 ret  */
  ESPCHK(0x11ec5fe0u, _esp0);
  ESP += 4; return;
  /* 11ec62c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec62c8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ec62cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec62d6:;
  /* 11ec62d6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec62da jne 0x11ec62e3 */
  if (!C.zf) goto L_11ec62e3;
  /* 11ec62dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec62de jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec62e3:;
  /* 11ec62e3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec62e6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec62e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec62ea push eax */
  push32((uint32_t)(EAX));
  /* 11ec62eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec62ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ec62ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec62f2 push edx */
  push32((uint32_t)(EDX));
  /* 11ec62f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec62f5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ec62f8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec62f9 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec62ffu);
  /* 11ec62ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec6301 jne 0x11ec630a */
  if (!C.zf) goto L_11ec630a;
  /* 11ec6303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6305 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec630a:;
  /* 11ec630a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec630c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec630e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec6311 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6312 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec6315 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6316 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ec6318 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ec631b push eax */
  push32((uint32_t)(EAX));
  /* 11ec631c call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec6322u);
  /* 11ec6322 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ec6325 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6329 jne 0x11ec6332 */
  if (!C.zf) goto L_11ec6332;
  /* 11ec632b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec632d jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec6332:;
  /* 11ec6332 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ec6339 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec633c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec633e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ec6343 call 0x11eb95d0 */
  push32(0x11ec6348u); f_11eb95d0();
  /* 11ec6348 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11ec634b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ec634e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ec6351 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ec6354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec635b jmp 0x11ec6374 */
  goto L_11ec6374;
  /* 11ec635d mov eax, 1 */
  EAX = (0x1u);
  /* 11ec6362 ret  */
  ESPCHK(0x11ec5fe0u, _esp0);
  ESP += 4; return;
  /* 11ec6363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec6366 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ec636d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec6374:;
  /* 11ec6374 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6378 jne 0x11ec637e */
  if (!C.zf) goto L_11ec637e;
  /* 11ec637a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec637c jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec637e:;
  /* 11ec637e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec6381 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6382 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec6385 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6386 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ec6389 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec638a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ec638d push edx */
  push32((uint32_t)(EDX));
  /* 11ec638e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec6390 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ec6393 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6394 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ec639au);
  /* 11ec639a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec639c jne 0x11ec63a2 */
  if (!C.zf) goto L_11ec63a2;
  /* 11ec639e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec63a0 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec63a2:;
  /* 11ec63a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec63a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec63a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec63a9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec63aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec63ad push eax */
  push32((uint32_t)(EAX));
  /* 11ec63ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec63b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec63b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec63b5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec63b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec63b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec63ba call dword ptr [0x11ee52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52d4))), 0x11ec63c0u);
  /* 11ec63c0 jmp 0x11ec63c4 */
  goto L_11ec63c4;
L_11ec63c2:;
  /* 11ec63c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec63c4:;
  /* 11ec63c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11ec63c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec63ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ec63d1 pop edi */
  EDI = (pop32());
  /* 11ec63d2 pop esi */
  ESI = (pop32());
  /* 11ec63d3 pop ebx */
  EBX = (pop32());
  /* 11ec63d4 mov esp, ebp */
  ESP = (EBP);
  /* 11ec63d6 pop ebp */
  EBP = (pop32());
  /* 11ec63d7 ret  */
  ESPCHK(0x11ec5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163e0 @ 0x11ec63e0 (80 bytes, 32 insns) */
void f_11ec63e0(void) {
  FTRACE(0x11ec63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec63e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec63e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec63e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec63e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec63ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec63ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ec63f2:;
  /* 11ec63f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec63f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec63f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec63fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec63fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec6400 je 0x11ec6417 */
  if (C.zf) goto L_11ec6417;
  /* 11ec6402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6405 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec6408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec640a je 0x11ec6417 */
  if (C.zf) goto L_11ec6417;
  /* 11ec640c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec640f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6412 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec6415 jmp 0x11ec63f2 */
  goto L_11ec63f2;
L_11ec6417:;
  /* 11ec6417 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec641a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec641d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec641f jne 0x11ec6429 */
  if (!C.zf) goto L_11ec6429;
  /* 11ec6421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6424 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6427 jmp 0x11ec642c */
  goto L_11ec642c;
L_11ec6429:;
  /* 11ec6429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ec642c:;
  /* 11ec642c mov esp, ebp */
  ESP = (EBP);
  /* 11ec642e pop ebp */
  EBP = (pop32());
  /* 11ec642f ret  */
  ESPCHK(0x11ec63e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016430 @ 0x11ec6430 (736 bytes, 224 insns) */
void f_11ec6430(void) {
  FTRACE(0x11ec6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6430 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec6431 mov ebp, esp */
  EBP = (ESP);
  /* 11ec6433 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6436 push esi */
  push32((uint32_t)(ESI));
  /* 11ec6437 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec643b je 0x11ec645c */
  if (C.zf) goto L_11ec645c;
  /* 11ec643d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ec643f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6442 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6443 call 0x11ec6880 */
  push32(0x11ec6448u); f_11ec6880();
  /* 11ec6448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec644b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ec644e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6452 je 0x11ec645c */
  if (C.zf) goto L_11ec645c;
  /* 11ec6454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6457 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec645a jne 0x11ec6464 */
  if (!C.zf) goto L_11ec6464;
L_11ec645c:;
  /* 11ec645c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec645f jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec6464:;
  /* 11ec6464 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec6467 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ec646b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec646d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec646f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ec6470 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec6473 mov ecx, dword ptr [0x11ee27a4] */
  ECX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec6479 cmp ecx, dword ptr [0x11ee27a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee27a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec647f jne 0x11ec6495 */
  if (!C.zf) goto L_11ec6495;
  /* 11ec6481 mov edx, dword ptr [0x11ee27a4] */
  EDX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec6487 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6488 call 0x11ec6790 */
  push32(0x11ec648du); f_11ec6790();
  /* 11ec648d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6490 mov dword ptr [0x11ee27a4], eax */
  w32((uint32_t)(0x11ee27a4), (EAX));
L_11ec6495:;
  /* 11ec6495 cmp dword ptr [0x11ee27a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec649c jne 0x11ec6555 */
  if (!C.zf) goto L_11ec6555;
  /* 11ec64a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec64a6 je 0x11ec64c7 */
  if (C.zf) goto L_11ec64c7;
  /* 11ec64a8 cmp dword ptr [0x11ee27ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec64af je 0x11ec64c7 */
  if (C.zf) goto L_11ec64c7;
  /* 11ec64b1 call 0x11ec5f30 */
  push32(0x11ec64b6u); f_11ec5f30();
  /* 11ec64b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec64b8 je 0x11ec64c2 */
  if (C.zf) goto L_11ec64c2;
  /* 11ec64ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec64bd jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec64c2:;
  /* 11ec64c2 jmp 0x11ec6555 */
  goto L_11ec6555;
L_11ec64c7:;
  /* 11ec64c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec64cb je 0x11ec64d4 */
  if (C.zf) goto L_11ec64d4;
  /* 11ec64cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec64cf jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec64d4:;
  /* 11ec64d4 cmp dword ptr [0x11ee27a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec64db jne 0x11ec6514 */
  if (!C.zf) goto L_11ec6514;
  /* 11ec64dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11ec64e2 push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec64e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec64e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec64eb call 0x11eb6430 */
  push32(0x11ec64f0u); f_11eb6430();
  /* 11ec64f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec64f3 mov dword ptr [0x11ee27a4], eax */
  w32((uint32_t)(0x11ee27a4), (EAX));
  /* 11ec64f8 cmp dword ptr [0x11ee27a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec64ff jne 0x11ec6509 */
  if (!C.zf) goto L_11ec6509;
  /* 11ec6501 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6504 jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec6509:;
  /* 11ec6509 mov eax, dword ptr [0x11ee27a4] */
  EAX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec650e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ec6514:;
  /* 11ec6514 cmp dword ptr [0x11ee27ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec651b jne 0x11ec6555 */
  if (!C.zf) goto L_11ec6555;
  /* 11ec651d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11ec6522 push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec6527 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec6529 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec652b call 0x11eb6430 */
  push32(0x11ec6530u); f_11eb6430();
  /* 11ec6530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6533 mov dword ptr [0x11ee27ac], eax */
  w32((uint32_t)(0x11ee27ac), (EAX));
  /* 11ec6538 cmp dword ptr [0x11ee27ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec653f jne 0x11ec6549 */
  if (!C.zf) goto L_11ec6549;
  /* 11ec6541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6544 jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec6549:;
  /* 11ec6549 mov ecx, dword ptr [0x11ee27ac] */
  ECX = (r32((uint32_t)(0x11ee27ac)));
  /* 11ec654f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11ec6555:;
  /* 11ec6555 mov edx, dword ptr [0x11ee27a4] */
  EDX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec655b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ec655e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec6561 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6564 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6568 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6569 call 0x11ec6710 */
  push32(0x11ec656eu); f_11ec6710();
  /* 11ec656e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6571 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec6574 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6578 jl 0x11ec6611 */
  if ((C.sf!=C.of)) goto L_11ec6611;
  /* 11ec657e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6581 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6584 je 0x11ec6611 */
  if (C.zf) goto L_11ec6611;
  /* 11ec658a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec658e je 0x11ec6603 */
  if (C.zf) goto L_11ec6603;
  /* 11ec6590 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec6592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6595 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6598 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ec659b push edx */
  push32((uint32_t)(EDX));
  /* 11ec659c call 0x11eb6ec0 */
  push32(0x11ec65a1u); f_11eb6ec0();
  /* 11ec65a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec65a4 jmp 0x11ec65af */
  goto L_11ec65af;
L_11ec65a6:;
  /* 11ec65a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec65a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec65ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec65af:;
  /* 11ec65af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec65b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec65b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec65b9 je 0x11ec65d0 */
  if (C.zf) goto L_11ec65d0;
  /* 11ec65bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec65be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec65c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec65c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec65c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11ec65cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ec65ce jmp 0x11ec65a6 */
  goto L_11ec65a6;
L_11ec65d0:;
  /* 11ec65d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11ec65d5 push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec65da push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec65dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec65df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ec65e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec65e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec65e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec65e7 call 0x11eb68c0 */
  push32(0x11ec65ecu); f_11eb68c0();
  /* 11ec65ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec65ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec65f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec65f6 je 0x11ec6601 */
  if (C.zf) goto L_11ec6601;
  /* 11ec65f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec65fb mov dword ptr [0x11ee27a4], edx */
  w32((uint32_t)(0x11ee27a4), (EDX));
L_11ec6601:;
  /* 11ec6601 jmp 0x11ec660f */
  goto L_11ec660f;
L_11ec6603:;
  /* 11ec6603 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6606 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6609 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec660c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11ec660f:;
  /* 11ec660f jmp 0x11ec6684 */
  goto L_11ec6684;
L_11ec6611:;
  /* 11ec6611 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6615 jne 0x11ec667d */
  if (!C.zf) goto L_11ec667d;
  /* 11ec6617 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec661b jge 0x11ec6625 */
  if ((C.sf==C.of)) goto L_11ec6625;
  /* 11ec661d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6620 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec6622 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec6625:;
  /* 11ec6625 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11ec662a push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec662f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec6631 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6634 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11ec663b push edx */
  push32((uint32_t)(EDX));
  /* 11ec663c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec663f push eax */
  push32((uint32_t)(EAX));
  /* 11ec6640 call 0x11eb68c0 */
  push32(0x11ec6645u); f_11eb68c0();
  /* 11ec6645 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6648 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec664b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec664f jne 0x11ec6659 */
  if (!C.zf) goto L_11ec6659;
  /* 11ec6651 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6654 jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec6659:;
  /* 11ec6659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec665c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec665f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6662 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ec6665 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6668 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec666b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11ec6673 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6676 mov dword ptr [0x11ee27a4], eax */
  w32((uint32_t)(0x11ee27a4), (EAX));
  /* 11ec667b jmp 0x11ec6684 */
  goto L_11ec6684;
L_11ec667d:;
  /* 11ec667d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec667f jmp 0x11ec670b */
  goto L_11ec670b;
L_11ec6684:;
  /* 11ec6684 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6688 je 0x11ec6709 */
  if (C.zf) goto L_11ec6709;
  /* 11ec668a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11ec668f push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec6694 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec6696 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6699 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec669a call 0x11eb9260 */
  push32(0x11ec669fu); f_11eb9260();
  /* 11ec669f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec66a6 call 0x11eb6430 */
  push32(0x11ec66abu); f_11eb6430();
  /* 11ec66ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ec66b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec66b5 je 0x11ec6709 */
  if (C.zf) goto L_11ec6709;
  /* 11ec66b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec66ba push edx */
  push32((uint32_t)(EDX));
  /* 11ec66bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec66be push eax */
  push32((uint32_t)(EAX));
  /* 11ec66bf call 0x11eb93e0 */
  push32(0x11ec66c4u); f_11eb93e0();
  /* 11ec66c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec66ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec66cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec66d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ec66d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec66d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ec66db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec66de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec66e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec66e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec66e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec66e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec66eb not edx */
  EDX = (~(EDX));
  /* 11ec66ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ec66f0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec66f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec66f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec66f5 call dword ptr [0x11ee52d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52d0))), 0x11ec66fbu);
  /* 11ec66fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec66fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec6700 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6701 call 0x11eb6ec0 */
  push32(0x11ec6706u); f_11eb6ec0();
  /* 11ec6706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec6709:;
  /* 11ec6709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec670b:;
  /* 11ec670b pop esi */
  ESI = (pop32());
  /* 11ec670c mov esp, ebp */
  ESP = (EBP);
  /* 11ec670e pop ebp */
  EBP = (pop32());
  /* 11ec670f ret  */
  ESPCHK(0x11ec6430u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11ec6710 (124 bytes, 47 insns) */
void f_11ec6710(void) {
  FTRACE(0x11ec6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec6711 mov ebp, esp */
  EBP = (ESP);
  /* 11ec6713 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6714 mov eax, dword ptr [0x11ee27a4] */
  EAX = (r32((uint32_t)(0x11ee27a4)));
  /* 11ec6719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec671c jmp 0x11ec6727 */
  goto L_11ec6727;
L_11ec671e:;
  /* 11ec671e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6721 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6724 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ec6727:;
  /* 11ec6727 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec672a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec672d je 0x11ec677a */
  if (C.zf) goto L_11ec677a;
  /* 11ec672f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec6732 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec6738 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec673c push eax */
  push32((uint32_t)(EAX));
  /* 11ec673d call 0x11ec5ee0 */
  push32(0x11ec6742u); f_11ec5ee0();
  /* 11ec6742 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec6747 jne 0x11ec6778 */
  if (!C.zf) goto L_11ec6778;
  /* 11ec6749 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec674c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec674e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec6751 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11ec6755 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6758 je 0x11ec676a */
  if (C.zf) goto L_11ec676a;
  /* 11ec675a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec675d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec675f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec6762 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11ec6766 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec6768 jne 0x11ec6778 */
  if (!C.zf) goto L_11ec6778;
L_11ec676a:;
  /* 11ec676a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec676d sub eax, dword ptr [0x11ee27a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee27a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6773 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ec6776 jmp 0x11ec6788 */
  goto L_11ec6788;
L_11ec6778:;
  /* 11ec6778 jmp 0x11ec671e */
  goto L_11ec671e;
L_11ec677a:;
  /* 11ec677a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec677d sub eax, dword ptr [0x11ee27a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee27a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6783 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ec6786 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11ec6788:;
  /* 11ec6788 mov esp, ebp */
  ESP = (EBP);
  /* 11ec678a pop ebp */
  EBP = (pop32());
  /* 11ec678b ret  */
  ESPCHK(0x11ec6710u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11ec6790 (238 bytes, 80 insns) */
void f_11ec6790(void) {
  FTRACE(0x11ec6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6790 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec6791 mov ebp, esp */
  EBP = (ESP);
  /* 11ec6793 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6796 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec679d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec67a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec67a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec67a7 jne 0x11ec67b0 */
  if (!C.zf) goto L_11ec67b0;
  /* 11ec67a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec67ab jmp 0x11ec687a */
  goto L_11ec687a;
L_11ec67b0:;
  /* 11ec67b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec67b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec67b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec67b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec67bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec67be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec67c0 je 0x11ec67cd */
  if (C.zf) goto L_11ec67cd;
  /* 11ec67c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec67c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec67c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ec67cb jmp 0x11ec67b0 */
  goto L_11ec67b0;
L_11ec67cd:;
  /* 11ec67cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11ec67d2 push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec67d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec67d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec67dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11ec67e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ec67e4 call 0x11eb6430 */
  push32(0x11ec67e9u); f_11eb6430();
  /* 11ec67e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec67ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec67ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec67f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec67f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec67f9 jne 0x11ec6805 */
  if (!C.zf) goto L_11ec6805;
  /* 11ec67fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11ec67fd call 0x11eb53a0 */
  push32(0x11ec6802u); f_11eb53a0();
  /* 11ec6802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec6805:;
  /* 11ec6805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6808 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ec680b:;
  /* 11ec680b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec680e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6811 je 0x11ec686e */
  if (C.zf) goto L_11ec686e;
  /* 11ec6813 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11ec6818 push 0x11edecd0 */
  push32((uint32_t)(0x11edecd0u));
  /* 11ec681d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec681f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6822 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec6824 push edx */
  push32((uint32_t)(EDX));
  /* 11ec6825 call 0x11eb9260 */
  push32(0x11ec682au); f_11eb9260();
  /* 11ec682a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec682d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6830 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6831 call 0x11eb6430 */
  push32(0x11ec6836u); f_11eb6430();
  /* 11ec6836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec683c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec683e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6841 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6844 je 0x11ec685a */
  if (C.zf) goto L_11ec685a;
  /* 11ec6846 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec6849 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec684b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec684c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec684f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec6851 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6852 call 0x11eb93e0 */
  push32(0x11ec6857u); f_11eb93e0();
  /* 11ec6857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec685a:;
  /* 11ec685a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec685d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6860 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec6863 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6866 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6869 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec686c jmp 0x11ec680b */
  goto L_11ec680b;
L_11ec686e:;
  /* 11ec686e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec6871 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ec6877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ec687a:;
  /* 11ec687a mov esp, ebp */
  ESP = (EBP);
  /* 11ec687c pop ebp */
  EBP = (pop32());
  /* 11ec687d ret  */
  ESPCHK(0x11ec6790u, _esp0);
  ESP += 4; return;
}

/* FUN_10016880 @ 0x11ec6880 (237 bytes, 81 insns) */
void f_11ec6880(void) {
  FTRACE(0x11ec6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6880 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec6881 mov ebp, esp */
  EBP = (ESP);
  /* 11ec6883 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6884 cmp dword ptr [0x11ee3eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee3eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec688b jne 0x11ec68a2 */
  if (!C.zf) goto L_11ec68a2;
  /* 11ec688d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec6890 push eax */
  push32((uint32_t)(EAX));
  /* 11ec6891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6894 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec6895 call 0x11ec6980 */
  push32(0x11ec689au); f_11ec6980();
  /* 11ec689a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec689d jmp 0x11ec6969 */
  goto L_11ec6969;
L_11ec68a2:;
  /* 11ec68a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ec68a4 call 0x11eb9e30 */
  push32(0x11ec68a9u); f_11eb9e30();
  /* 11ec68a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec68ac jmp 0x11ec68b7 */
  goto L_11ec68b7;
L_11ec68ae:;
  /* 11ec68ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec68b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec68b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ec68b7:;
  /* 11ec68b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec68ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11ec68be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ec68c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec68c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec68cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec68cd je 0x11ec694b */
  if (C.zf) goto L_11ec694b;
  /* 11ec68cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec68d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec68d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec68d9 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11ec68df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec68e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec68e4 je 0x11ec6936 */
  if (C.zf) goto L_11ec6936;
  /* 11ec68e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec68e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec68ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ec68ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec68f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec68f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec68f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec68f8 jne 0x11ec6908 */
  if (!C.zf) goto L_11ec6908;
  /* 11ec68fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ec68fc call 0x11eb9ed0 */
  push32(0x11ec6901u); f_11eb9ed0();
  /* 11ec6901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6906 jmp 0x11ec6969 */
  goto L_11ec6969;
L_11ec6908:;
  /* 11ec6908 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec690b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec6911 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ec6914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6917 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec6919 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec691b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec691d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6920 jne 0x11ec6934 */
  if (!C.zf) goto L_11ec6934;
  /* 11ec6922 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ec6924 call 0x11eb9ed0 */
  push32(0x11ec6929u); f_11eb9ed0();
  /* 11ec6929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec692c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec692f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec6932 jmp 0x11ec6969 */
  goto L_11ec6969;
L_11ec6934:;
  /* 11ec6934 jmp 0x11ec6946 */
  goto L_11ec6946;
L_11ec6936:;
  /* 11ec6936 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6939 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec693f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6942 jne 0x11ec6946 */
  if (!C.zf) goto L_11ec6946;
  /* 11ec6944 jmp 0x11ec694b */
  goto L_11ec694b;
L_11ec6946:;
  /* 11ec6946 jmp 0x11ec68ae */
  goto L_11ec68ae;
L_11ec694b:;
  /* 11ec694b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ec694d call 0x11eb9ed0 */
  push32(0x11ec6952u); f_11eb9ed0();
  /* 11ec6952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec6955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec6958 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec695d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec6960 jne 0x11ec6967 */
  if (!C.zf) goto L_11ec6967;
  /* 11ec6962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec6965 jmp 0x11ec6969 */
  goto L_11ec6969;
L_11ec6967:;
  /* 11ec6967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec6969:;
  /* 11ec6969 mov esp, ebp */
  ESP = (EBP);
  /* 11ec696b pop ebp */
  EBP = (pop32());
  /* 11ec696c ret  */
  ESPCHK(0x11ec6880u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11ec6980 (193 bytes, 87 insns) */
void f_11ec6980(void) {
  FTRACE(0x11ec6980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6980 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec6982 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ec6986 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec6987 mov ebx, eax */
  EBX = (EAX);
  /* 11ec6989 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ec698c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ec6990 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ec6996 je 0x11ec69ab */
  if (C.zf) goto L_11ec69ab;
L_11ec6998:;
  /* 11ec6998 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ec699a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ec699b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec699d je 0x11ec6970 */
  if (C.zf) { jmp_ind(0x11ec6970u); return; }
  /* 11ec699f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11ec69a1 je 0x11ec69f4 */
  if (C.zf) goto L_11ec69f4;
  /* 11ec69a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ec69a9 jne 0x11ec6998 */
  if (!C.zf) goto L_11ec6998;
L_11ec69ab:;
  /* 11ec69ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11ec69ad push edi */
  push32((uint32_t)(EDI));
  /* 11ec69ae mov eax, ebx */
  EAX = (EBX);
  /* 11ec69b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11ec69b3 push esi */
  push32((uint32_t)(ESI));
  /* 11ec69b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11ec69b6:;
  /* 11ec69b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ec69b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11ec69bd mov eax, ecx */
  EAX = (ECX);
  /* 11ec69bf mov esi, edi */
  ESI = (EDI);
  /* 11ec69c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec69c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec69c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec69c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ec69ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec69cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ec69cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ec69d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec69d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec69da jne 0x11ec69f8 */
  if (!C.zf) goto L_11ec69f8;
  /* 11ec69dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec69e1 je 0x11ec69b6 */
  if (C.zf) goto L_11ec69b6;
  /* 11ec69e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec69e8 jne 0x11ec69f2 */
  if (!C.zf) goto L_11ec69f2;
  /* 11ec69ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11ec69f0 jne 0x11ec69b6 */
  if (!C.zf) goto L_11ec69b6;
L_11ec69f2:;
  /* 11ec69f2 pop esi */
  ESI = (pop32());
  /* 11ec69f3 pop edi */
  EDI = (pop32());
L_11ec69f4:;
  /* 11ec69f4 pop ebx */
  EBX = (pop32());
  /* 11ec69f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec69f7 ret  */
  ESPCHK(0x11ec6980u, _esp0);
  ESP += 4; return;
L_11ec69f8:;
  /* 11ec69f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ec69fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec69fd je 0x11ec6a35 */
  if (C.zf) goto L_11ec6a35;
  /* 11ec69ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ec6a01 je 0x11ec69f2 */
  if (C.zf) goto L_11ec69f2;
  /* 11ec6a03 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec6a05 je 0x11ec6a2e */
  if (C.zf) goto L_11ec6a2e;
  /* 11ec6a07 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ec6a09 je 0x11ec69f2 */
  if (C.zf) goto L_11ec69f2;
  /* 11ec6a0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ec6a0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec6a10 je 0x11ec6a27 */
  if (C.zf) goto L_11ec6a27;
  /* 11ec6a12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ec6a14 je 0x11ec69f2 */
  if (C.zf) goto L_11ec69f2;
  /* 11ec6a16 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec6a18 je 0x11ec6a20 */
  if (C.zf) goto L_11ec6a20;
  /* 11ec6a1a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ec6a1c je 0x11ec69f2 */
  if (C.zf) goto L_11ec69f2;
  /* 11ec6a1e jmp 0x11ec69b6 */
  goto L_11ec69b6;
L_11ec6a20:;
  /* 11ec6a20 pop esi */
  ESI = (pop32());
  /* 11ec6a21 pop edi */
  EDI = (pop32());
  /* 11ec6a22 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11ec6a25 pop ebx */
  EBX = (pop32());
  /* 11ec6a26 ret  */
  ESPCHK(0x11ec6980u, _esp0);
  ESP += 4; return;
L_11ec6a27:;
  /* 11ec6a27 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11ec6a2a pop esi */
  ESI = (pop32());
  /* 11ec6a2b pop edi */
  EDI = (pop32());
  /* 11ec6a2c pop ebx */
  EBX = (pop32());
  /* 11ec6a2d ret  */
  ESPCHK(0x11ec6980u, _esp0);
  ESP += 4; return;
L_11ec6a2e:;
  /* 11ec6a2e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11ec6a31 pop esi */
  ESI = (pop32());
  /* 11ec6a32 pop edi */
  EDI = (pop32());
  /* 11ec6a33 pop ebx */
  EBX = (pop32());
  /* 11ec6a34 ret  */
  ESPCHK(0x11ec6980u, _esp0);
  ESP += 4; return;
L_11ec6a35:;
  /* 11ec6a35 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11ec6a38 pop esi */
  ESI = (pop32());
  /* 11ec6a39 pop edi */
  EDI = (pop32());
  /* 11ec6a3a pop ebx */
  EBX = (pop32());
  /* 11ec6a3b ret  */
  ESPCHK(0x11ec6980u, _esp0);
  ESP += 4; return;
  /* 11ec6a3c jmp dword ptr [0x11ee5380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ee5380)))); return;
}

/* RtlUnwind @ 0x11ec6b8c (6 bytes, 1 insns) */
void f_11ec6b8c(void) {
  FTRACE(0x11ec6b8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec6b8c jmp dword ptr [0x11ee530c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ee530c)))); return;
}

