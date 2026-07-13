#include "recomp.h"

/* FUN_1001c8b0 @ 0x11f0c8b0 (186 bytes, 50 insns) */
void f_11f0c8b0(void) {
  FTRACE(0x11f0c8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c8b4 mov eax, dword ptr [0x11f30a38] */
  EAX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0c8b9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c8ba call 0x11f00050 */
  push32(0x11f0c8bfu); f_11f00050();
  /* 11f0c8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c8c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c8c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c8c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f0c8ca mov dword ptr [0x11f30a34], ecx */
  w32((uint32_t)(0x11f30a34), (ECX));
  /* 11f0c8d0 mov edx, dword ptr [0x11f30a3c] */
  EDX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0c8d6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c8d7 call 0x11f00050 */
  push32(0x11f0c8dcu); f_11f00050();
  /* 11f0c8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c8df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c8e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c8e4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f0c8e7 mov dword ptr [0x11f30a2c], ecx */
  w32((uint32_t)(0x11f30a2c), (ECX));
  /* 11f0c8ed mov dword ptr [0x11f30a28], 0 */
  w32((uint32_t)(0x11f30a28), (0x0u));
  /* 11f0c8f7 cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c8fe je 0x11f0c909 */
  if (C.zf) goto L_11f0c909;
  /* 11f0c900 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f0c907 jmp 0x11f0c91b */
  goto L_11f0c91b;
L_11f0c909:;
  /* 11f0c909 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0c90f push edx */
  push32((uint32_t)(EDX));
  /* 11f0c910 call 0x11f0d350 */
  push32(0x11f0c915u); f_11f0d350();
  /* 11f0c915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c918 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0c91b:;
  /* 11f0c91b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c91e mov dword ptr [0x11f30a30], eax */
  w32((uint32_t)(0x11f30a30), (EAX));
  /* 11f0c923 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0c925 push 0x11f0c970 */
  push32((uint32_t)(0x11f0c970u));
  /* 11f0c92a call dword ptr [0x11f33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33340))), 0x11f0c930u);
  /* 11f0c930 mov ecx, dword ptr [0x11f30a40] */
  ECX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0c936 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c93e je 0x11f0c95c */
  if (C.zf) goto L_11f0c95c;
  /* 11f0c940 mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0c946 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0c94c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0c94e je 0x11f0c95c */
  if (C.zf) goto L_11f0c95c;
  /* 11f0c950 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0c955 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c95a jne 0x11f0c966 */
  if (!C.zf) goto L_11f0c966;
L_11f0c95c:;
  /* 11f0c95c mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
L_11f0c966:;
  /* 11f0c966 mov esp, ebp */
  ESP = (EBP);
  /* 11f0c968 pop ebp */
  EBP = (pop32());
  /* 11f0c969 ret  */
  ESPCHK(0x11f0c8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c970 @ 0x11f0c970 (804 bytes, 220 insns) */
void f_11f0c970(void) {
  FTRACE(0x11f0c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c970 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c971 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c973 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c979 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c97a call 0x11f0d2d0 */
  push32(0x11f0c97fu); f_11f0d2d0();
  /* 11f0c97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c982 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11f0c985 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0c987 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0c98a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c98b mov edx, dword ptr [0x11f30a2c] */
  EDX = (r32((uint32_t)(0x11f30a2c)));
  /* 11f0c991 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0c993 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c995 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0c99b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c9a1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c9a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0c9a5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c9a6 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0c9acu);
  /* 11f0c9ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c9ae jne 0x11f0c9c4 */
  if (!C.zf) goto L_11f0c9c4;
  /* 11f0c9b0 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0c9ba mov eax, 1 */
  EAX = (0x1u);
  /* 11f0c9bf jmp 0x11f0cc8e */
  goto L_11f0cc8e;
L_11f0c9c4:;
  /* 11f0c9c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0c9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c9c8 mov edx, dword ptr [0x11f30a3c] */
  EDX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0c9ce push edx */
  push32((uint32_t)(EDX));
  /* 11f0c9cf call 0x11f0fcf0 */
  push32(0x11f0c9d4u); f_11f0fcf0();
  /* 11f0c9d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c9d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c9d9 jne 0x11f0caff */
  if (!C.zf) goto L_11f0caff;
  /* 11f0c9df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0c9e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11f0c9e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c9e5 mov ecx, dword ptr [0x11f30a34] */
  ECX = (r32((uint32_t)(0x11f30a34)));
  /* 11f0c9eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0c9ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c9ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c9f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c9fb push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c9fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0c9ff push edx */
  push32((uint32_t)(EDX));
  /* 11f0ca00 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0ca06u);
  /* 11f0ca06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ca08 jne 0x11f0ca1e */
  if (!C.zf) goto L_11f0ca1e;
  /* 11f0ca0a mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0ca14 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0ca19 jmp 0x11f0cc8e */
  goto L_11f0cc8e;
L_11f0ca1e:;
  /* 11f0ca1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11f0ca21 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ca22 mov ecx, dword ptr [0x11f30a38] */
  ECX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0ca28 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ca29 call 0x11f0fcf0 */
  push32(0x11f0ca2eu); f_11f0fcf0();
  /* 11f0ca2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ca31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ca33 jne 0x11f0ca60 */
  if (!C.zf) goto L_11f0ca60;
  /* 11f0ca35 mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ca3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ca41 mov dword ptr [0x11f30a40], edx */
  w32((uint32_t)(0x11f30a40), (EDX));
  /* 11f0ca47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0ca4a mov dword ptr [0x11f30a44], eax */
  w32((uint32_t)(0x11f30a44), (EAX));
  /* 11f0ca4f mov ecx, dword ptr [0x11f30a44] */
  ECX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0ca55 mov dword ptr [0x11f30a28], ecx */
  w32((uint32_t)(0x11f30a28), (ECX));
  /* 11f0ca5b jmp 0x11f0caff */
  goto L_11f0caff;
L_11f0ca60:;
  /* 11f0ca60 mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ca66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ca69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0ca6b jne 0x11f0caff */
  if (!C.zf) goto L_11f0caff;
  /* 11f0ca71 cmp dword ptr [0x11f30a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ca78 je 0x11f0cacd */
  if (C.zf) goto L_11f0cacd;
  /* 11f0ca7a mov eax, dword ptr [0x11f30a30] */
  EAX = (r32((uint32_t)(0x11f30a30)));
  /* 11f0ca7f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ca80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0ca83 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ca84 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0ca8a push edx */
  push32((uint32_t)(EDX));
  /* 11f0ca8b call 0x11f0fdc0 */
  push32(0x11f0ca90u); f_11f0fdc0();
  /* 11f0ca90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ca93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ca95 jne 0x11f0cacd */
  if (!C.zf) goto L_11f0cacd;
  /* 11f0ca97 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ca9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11f0ca9e mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0caa3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0caa6 mov dword ptr [0x11f30a44], ecx */
  w32((uint32_t)(0x11f30a44), (ECX));
  /* 11f0caac mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cab2 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cab3 call 0x11f00050 */
  push32(0x11f0cab8u); f_11f00050();
  /* 11f0cab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cabb cmp eax, dword ptr [0x11f30a30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f30a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cac1 jne 0x11f0cacb */
  if (!C.zf) goto L_11f0cacb;
  /* 11f0cac3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cac6 mov dword ptr [0x11f30a28], eax */
  w32((uint32_t)(0x11f30a28), (EAX));
L_11f0cacb:;
  /* 11f0cacb jmp 0x11f0caff */
  goto L_11f0caff;
L_11f0cacd:;
  /* 11f0cacd mov ecx, dword ptr [0x11f30a40] */
  ECX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cad3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0cad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0cad8 jne 0x11f0caff */
  if (!C.zf) goto L_11f0caff;
  /* 11f0cada mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cadd push edx */
  push32((uint32_t)(EDX));
  /* 11f0cade call 0x11f0d010 */
  push32(0x11f0cae3u); f_11f0d010();
  /* 11f0cae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cae8 je 0x11f0caff */
  if (C.zf) goto L_11f0caff;
  /* 11f0caea mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0caef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f0caf1 mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0caf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0caf9 mov dword ptr [0x11f30a44], ecx */
  w32((uint32_t)(0x11f30a44), (ECX));
L_11f0caff:;
  /* 11f0caff mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cb05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0cb0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cb11 je 0x11f0cc81 */
  if (C.zf) goto L_11f0cc81;
  /* 11f0cb17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0cb19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11f0cb1c push eax */
  push32((uint32_t)(EAX));
  /* 11f0cb1d mov ecx, dword ptr [0x11f30a34] */
  ECX = (r32((uint32_t)(0x11f30a34)));
  /* 11f0cb23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0cb25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cb27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0cb2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cb33 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cb34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cb37 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cb38 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0cb3eu);
  /* 11f0cb3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cb40 jne 0x11f0cb56 */
  if (!C.zf) goto L_11f0cb56;
  /* 11f0cb42 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0cb4c mov eax, 1 */
  EAX = (0x1u);
  /* 11f0cb51 jmp 0x11f0cc8e */
  goto L_11f0cc8e;
L_11f0cb56:;
  /* 11f0cb56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11f0cb59 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cb5a mov ecx, dword ptr [0x11f30a38] */
  ECX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cb60 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cb61 call 0x11f0fcf0 */
  push32(0x11f0cb66u); f_11f0fcf0();
  /* 11f0cb66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cb69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cb6b jne 0x11f0cc20 */
  if (!C.zf) goto L_11f0cc20;
  /* 11f0cb71 mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cb77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f0cb7a mov dword ptr [0x11f30a40], edx */
  w32((uint32_t)(0x11f30a40), (EDX));
  /* 11f0cb80 cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cb87 je 0x11f0cbaa */
  if (C.zf) goto L_11f0cbaa;
  /* 11f0cb89 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cb8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11f0cb91 mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0cb96 cmp dword ptr [0x11f30a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cb9d jne 0x11f0cba8 */
  if (!C.zf) goto L_11f0cba8;
  /* 11f0cb9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cba2 mov dword ptr [0x11f30a28], ecx */
  w32((uint32_t)(0x11f30a28), (ECX));
L_11f0cba8:;
  /* 11f0cba8 jmp 0x11f0cc1e */
  goto L_11f0cc1e;
L_11f0cbaa:;
  /* 11f0cbaa cmp dword ptr [0x11f30a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cbb1 je 0x11f0cbff */
  if (C.zf) goto L_11f0cbff;
  /* 11f0cbb3 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cbb9 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cbba call 0x11f00050 */
  push32(0x11f0cbbfu); f_11f00050();
  /* 11f0cbbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cbc2 cmp eax, dword ptr [0x11f30a30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f30a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cbc8 jne 0x11f0cbff */
  if (!C.zf) goto L_11f0cbff;
  /* 11f0cbca push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0cbcc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cbcf push eax */
  push32((uint32_t)(EAX));
  /* 11f0cbd0 call 0x11f0d060 */
  push32(0x11f0cbd5u); f_11f0d060();
  /* 11f0cbd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cbd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cbda je 0x11f0cbfd */
  if (C.zf) goto L_11f0cbfd;
  /* 11f0cbdc mov ecx, dword ptr [0x11f30a40] */
  ECX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cbe2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0cbe5 mov dword ptr [0x11f30a40], ecx */
  w32((uint32_t)(0x11f30a40), (ECX));
  /* 11f0cbeb cmp dword ptr [0x11f30a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cbf2 jne 0x11f0cbfd */
  if (!C.zf) goto L_11f0cbfd;
  /* 11f0cbf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cbf7 mov dword ptr [0x11f30a28], edx */
  w32((uint32_t)(0x11f30a28), (EDX));
L_11f0cbfd:;
  /* 11f0cbfd jmp 0x11f0cc1e */
  goto L_11f0cc1e;
L_11f0cbff:;
  /* 11f0cbff mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cc04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11f0cc07 mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0cc0c cmp dword ptr [0x11f30a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cc13 jne 0x11f0cc1e */
  if (!C.zf) goto L_11f0cc1e;
  /* 11f0cc15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cc18 mov dword ptr [0x11f30a28], ecx */
  w32((uint32_t)(0x11f30a28), (ECX));
L_11f0cc1e:;
  /* 11f0cc1e jmp 0x11f0cc81 */
  goto L_11f0cc81;
L_11f0cc20:;
  /* 11f0cc20 cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cc27 jne 0x11f0cc81 */
  if (!C.zf) goto L_11f0cc81;
  /* 11f0cc29 cmp dword ptr [0x11f30a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cc30 je 0x11f0cc81 */
  if (C.zf) goto L_11f0cc81;
  /* 11f0cc32 mov edx, dword ptr [0x11f30a30] */
  EDX = (r32((uint32_t)(0x11f30a30)));
  /* 11f0cc38 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cc39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11f0cc3c push eax */
  push32((uint32_t)(EAX));
  /* 11f0cc3d mov ecx, dword ptr [0x11f30a38] */
  ECX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cc43 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cc44 call 0x11f0fdc0 */
  push32(0x11f0cc49u); f_11f0fdc0();
  /* 11f0cc49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cc4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cc4e jne 0x11f0cc81 */
  if (!C.zf) goto L_11f0cc81;
  /* 11f0cc50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0cc52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cc55 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cc56 call 0x11f0d060 */
  push32(0x11f0cc5bu); f_11f0d060();
  /* 11f0cc5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cc5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cc60 je 0x11f0cc81 */
  if (C.zf) goto L_11f0cc81;
  /* 11f0cc62 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cc67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11f0cc6a mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0cc6f cmp dword ptr [0x11f30a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cc76 jne 0x11f0cc81 */
  if (!C.zf) goto L_11f0cc81;
  /* 11f0cc78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cc7b mov dword ptr [0x11f30a28], ecx */
  w32((uint32_t)(0x11f30a28), (ECX));
L_11f0cc81:;
  /* 11f0cc81 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cc86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0cc89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0cc8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cc8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f0cc8e:;
  /* 11f0cc8e mov esp, ebp */
  ESP = (EBP);
  /* 11f0cc90 pop ebp */
  EBP = (pop32());
  /* 11f0cc91 ret 4 */
  ESPCHK(0x11f0c970u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cca0 @ 0x11f0cca0 (116 bytes, 33 insns) */
void f_11f0cca0(void) {
  FTRACE(0x11f0cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0cca1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0cca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cca4 mov eax, dword ptr [0x11f30a38] */
  EAX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cca9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ccaa call 0x11f00050 */
  push32(0x11f0ccafu); f_11f00050();
  /* 11f0ccaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ccb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ccb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ccb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f0ccba mov dword ptr [0x11f30a34], ecx */
  w32((uint32_t)(0x11f30a34), (ECX));
  /* 11f0ccc0 cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ccc7 je 0x11f0ccd2 */
  if (C.zf) goto L_11f0ccd2;
  /* 11f0ccc9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f0ccd0 jmp 0x11f0cce4 */
  goto L_11f0cce4;
L_11f0ccd2:;
  /* 11f0ccd2 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0ccd8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ccd9 call 0x11f0d350 */
  push32(0x11f0ccdeu); f_11f0d350();
  /* 11f0ccde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0cce4:;
  /* 11f0cce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0cce7 mov dword ptr [0x11f30a30], eax */
  w32((uint32_t)(0x11f30a30), (EAX));
  /* 11f0ccec push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ccee push 0x11f0cd20 */
  push32((uint32_t)(0x11f0cd20u));
  /* 11f0ccf3 call dword ptr [0x11f33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33340))), 0x11f0ccf9u);
  /* 11f0ccf9 mov ecx, dword ptr [0x11f30a40] */
  ECX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ccff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0cd02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0cd04 jne 0x11f0cd10 */
  if (!C.zf) goto L_11f0cd10;
  /* 11f0cd06 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
L_11f0cd10:;
  /* 11f0cd10 mov esp, ebp */
  ESP = (EBP);
  /* 11f0cd12 pop ebp */
  EBP = (pop32());
  /* 11f0cd13 ret  */
  ESPCHK(0x11f0cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cd20 @ 0x11f0cd20 (287 bytes, 86 insns) */
void f_11f0cd20(void) {
  FTRACE(0x11f0cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0cd21 mov ebp, esp */
  EBP = (ESP);
  /* 11f0cd23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cd26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0cd29 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cd2a call 0x11f0d2d0 */
  push32(0x11f0cd2fu); f_11f0d2d0();
  /* 11f0cd2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cd32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11f0cd35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0cd37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0cd3a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cd3b mov edx, dword ptr [0x11f30a34] */
  EDX = (r32((uint32_t)(0x11f30a34)));
  /* 11f0cd41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0cd43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cd45 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0cd4b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cd51 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cd52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cd55 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cd56 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0cd5cu);
  /* 11f0cd5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cd5e jne 0x11f0cd74 */
  if (!C.zf) goto L_11f0cd74;
  /* 11f0cd60 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0cd6a mov eax, 1 */
  EAX = (0x1u);
  /* 11f0cd6f jmp 0x11f0ce39 */
  goto L_11f0ce39;
L_11f0cd74:;
  /* 11f0cd74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0cd77 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cd78 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cd7e push edx */
  push32((uint32_t)(EDX));
  /* 11f0cd7f call 0x11f0fcf0 */
  push32(0x11f0cd84u); f_11f0fcf0();
  /* 11f0cd84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cd87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cd89 jne 0x11f0cdc9 */
  if (!C.zf) goto L_11f0cdc9;
  /* 11f0cd8b cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cd92 jne 0x11f0cda6 */
  if (!C.zf) goto L_11f0cda6;
  /* 11f0cd94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0cd96 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cd99 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cd9a call 0x11f0d060 */
  push32(0x11f0cd9fu); f_11f0d060();
  /* 11f0cd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cda2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cda4 je 0x11f0cdc7 */
  if (C.zf) goto L_11f0cdc7;
L_11f0cda6:;
  /* 11f0cda6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cda9 mov dword ptr [0x11f30a44], ecx */
  w32((uint32_t)(0x11f30a44), (ECX));
  /* 11f0cdaf mov edx, dword ptr [0x11f30a44] */
  EDX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0cdb5 mov dword ptr [0x11f30a28], edx */
  w32((uint32_t)(0x11f30a28), (EDX));
  /* 11f0cdbb mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cdc0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11f0cdc2 mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
L_11f0cdc7:;
  /* 11f0cdc7 jmp 0x11f0ce2c */
  goto L_11f0ce2c;
L_11f0cdc9:;
  /* 11f0cdc9 cmp dword ptr [0x11f30a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cdd0 jne 0x11f0ce2c */
  if (!C.zf) goto L_11f0ce2c;
  /* 11f0cdd2 cmp dword ptr [0x11f30a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cdd9 je 0x11f0ce2c */
  if (C.zf) goto L_11f0ce2c;
  /* 11f0cddb mov ecx, dword ptr [0x11f30a30] */
  ECX = (r32((uint32_t)(0x11f30a30)));
  /* 11f0cde1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cde2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11f0cde5 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cde6 mov eax, dword ptr [0x11f30a38] */
  EAX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0cdeb push eax */
  push32((uint32_t)(EAX));
  /* 11f0cdec call 0x11f0fdc0 */
  push32(0x11f0cdf1u); f_11f0fdc0();
  /* 11f0cdf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cdf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cdf6 jne 0x11f0ce2c */
  if (!C.zf) goto L_11f0ce2c;
  /* 11f0cdf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0cdfa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cdfd push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cdfe call 0x11f0d060 */
  push32(0x11f0ce03u); f_11f0d060();
  /* 11f0ce03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ce06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ce08 je 0x11f0ce2c */
  if (C.zf) goto L_11f0ce2c;
  /* 11f0ce0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0ce0d mov dword ptr [0x11f30a44], edx */
  w32((uint32_t)(0x11f30a44), (EDX));
  /* 11f0ce13 mov eax, dword ptr [0x11f30a44] */
  EAX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0ce18 mov dword ptr [0x11f30a28], eax */
  w32((uint32_t)(0x11f30a28), (EAX));
  /* 11f0ce1d mov ecx, dword ptr [0x11f30a40] */
  ECX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ce23 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ce26 mov dword ptr [0x11f30a40], ecx */
  w32((uint32_t)(0x11f30a40), (ECX));
L_11f0ce2c:;
  /* 11f0ce2c mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ce31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ce34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0ce36 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ce38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f0ce39:;
  /* 11f0ce39 mov esp, ebp */
  ESP = (EBP);
  /* 11f0ce3b pop ebp */
  EBP = (pop32());
  /* 11f0ce3c ret 4 */
  ESPCHK(0x11f0cd20u, _esp0);
  ESP += 8; return;
}

/* FUN_1001ce40 @ 0x11f0ce40 (69 bytes, 20 insns) */
void f_11f0ce40(void) {
  FTRACE(0x11f0ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ce41 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ce43 mov eax, dword ptr [0x11f30a3c] */
  EAX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0ce48 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ce49 call 0x11f00050 */
  push32(0x11f0ce4eu); f_11f00050();
  /* 11f0ce4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ce51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ce53 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ce56 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f0ce59 mov dword ptr [0x11f30a2c], ecx */
  w32((uint32_t)(0x11f30a2c), (ECX));
  /* 11f0ce5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ce61 push 0x11f0ce90 */
  push32((uint32_t)(0x11f0ce90u));
  /* 11f0ce66 call dword ptr [0x11f33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33340))), 0x11f0ce6cu);
  /* 11f0ce6c mov edx, dword ptr [0x11f30a40] */
  EDX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0ce72 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ce75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0ce77 jne 0x11f0ce83 */
  if (!C.zf) goto L_11f0ce83;
  /* 11f0ce79 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
L_11f0ce83:;
  /* 11f0ce83 pop ebp */
  EBP = (pop32());
  /* 11f0ce84 ret  */
  ESPCHK(0x11f0ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce90 @ 0x11f0ce90 (172 bytes, 54 insns) */
void f_11f0ce90(void) {
  FTRACE(0x11f0ce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ce90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ce91 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ce93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ce96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ce99 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ce9a call 0x11f0d2d0 */
  push32(0x11f0ce9fu); f_11f0d2d0();
  /* 11f0ce9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cea2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11f0cea5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0cea7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0ceaa push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ceab mov edx, dword ptr [0x11f30a2c] */
  EDX = (r32((uint32_t)(0x11f30a2c)));
  /* 11f0ceb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0ceb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ceb5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0cebb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cec1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cec2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cec5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cec6 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0ceccu);
  /* 11f0cecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cece jne 0x11f0cee1 */
  if (!C.zf) goto L_11f0cee1;
  /* 11f0ced0 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0ceda mov eax, 1 */
  EAX = (0x1u);
  /* 11f0cedf jmp 0x11f0cf36 */
  goto L_11f0cf36;
L_11f0cee1:;
  /* 11f0cee1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11f0cee4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cee5 mov edx, dword ptr [0x11f30a3c] */
  EDX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0ceeb push edx */
  push32((uint32_t)(EDX));
  /* 11f0ceec call 0x11f0fcf0 */
  push32(0x11f0cef1u); f_11f0fcf0();
  /* 11f0cef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cef6 jne 0x11f0cf29 */
  if (!C.zf) goto L_11f0cf29;
  /* 11f0cef8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cefb push eax */
  push32((uint32_t)(EAX));
  /* 11f0cefc call 0x11f0d010 */
  push32(0x11f0cf01u); f_11f0d010();
  /* 11f0cf01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cf04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cf06 je 0x11f0cf29 */
  if (C.zf) goto L_11f0cf29;
  /* 11f0cf08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0cf0b mov dword ptr [0x11f30a44], ecx */
  w32((uint32_t)(0x11f30a44), (ECX));
  /* 11f0cf11 mov edx, dword ptr [0x11f30a44] */
  EDX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0cf17 mov dword ptr [0x11f30a28], edx */
  w32((uint32_t)(0x11f30a28), (EDX));
  /* 11f0cf1d mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cf22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11f0cf24 mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
L_11f0cf29:;
  /* 11f0cf29 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cf2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0cf31 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0cf33 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cf35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f0cf36:;
  /* 11f0cf36 mov esp, ebp */
  ESP = (EBP);
  /* 11f0cf38 pop ebp */
  EBP = (pop32());
  /* 11f0cf39 ret 4 */
  ESPCHK(0x11f0ce90u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cf40 @ 0x11f0cf40 (43 bytes, 11 insns) */
void f_11f0cf40(void) {
  FTRACE(0x11f0cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0cf41 mov ebp, esp */
  EBP = (ESP);
  /* 11f0cf43 mov eax, dword ptr [0x11f30a40] */
  EAX = (r32((uint32_t)(0x11f30a40)));
  /* 11f0cf48 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0cf4d mov dword ptr [0x11f30a40], eax */
  w32((uint32_t)(0x11f30a40), (EAX));
  /* 11f0cf52 call dword ptr [0x11f3333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3333c))), 0x11f0cf58u);
  /* 11f0cf58 mov dword ptr [0x11f30a44], eax */
  w32((uint32_t)(0x11f30a44), (EAX));
  /* 11f0cf5d mov ecx, dword ptr [0x11f30a44] */
  ECX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0cf63 mov dword ptr [0x11f30a28], ecx */
  w32((uint32_t)(0x11f30a28), (ECX));
  /* 11f0cf69 pop ebp */
  EBP = (pop32());
  /* 11f0cf6a ret  */
  ESPCHK(0x11f0cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf70 @ 0x11f0cf70 (155 bytes, 57 insns) */
void f_11f0cf70(void) {
  FTRACE(0x11f0cf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0cf70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0cf71 mov ebp, esp */
  EBP = (ESP);
  /* 11f0cf73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0cf76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0cf7a je 0x11f0cf9b */
  if (C.zf) goto L_11f0cf9b;
  /* 11f0cf7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0cf7f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0cf82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0cf84 je 0x11f0cf9b */
  if (C.zf) goto L_11f0cf9b;
  /* 11f0cf86 push 0x11f2bba8 */
  push32((uint32_t)(0x11f2bba8u));
  /* 11f0cf8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0cf8e push edx */
  push32((uint32_t)(EDX));
  /* 11f0cf8f call 0x11f04660 */
  push32(0x11f0cf94u); f_11f04660();
  /* 11f0cf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cf97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cf99 jne 0x11f0cfc3 */
  if (!C.zf) goto L_11f0cfc3;
L_11f0cf9b:;
  /* 11f0cf9b push 8 */
  push32((uint32_t)(0x8u));
  /* 11f0cf9d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f0cfa0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0cfa1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11f0cfa6 mov ecx, dword ptr [0x11f30a44] */
  ECX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0cfac push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cfad call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0cfb3u);
  /* 11f0cfb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cfb5 jne 0x11f0cfbb */
  if (!C.zf) goto L_11f0cfbb;
  /* 11f0cfb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0cfb9 jmp 0x11f0d007 */
  goto L_11f0d007;
L_11f0cfbb:;
  /* 11f0cfbb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11f0cfbe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f0cfc1 jmp 0x11f0cffb */
  goto L_11f0cffb;
L_11f0cfc3:;
  /* 11f0cfc3 push 0x11f2bba4 */
  push32((uint32_t)(0x11f2bba4u));
  /* 11f0cfc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0cfcb push eax */
  push32((uint32_t)(EAX));
  /* 11f0cfcc call 0x11f04660 */
  push32(0x11f0cfd1u); f_11f04660();
  /* 11f0cfd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0cfd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cfd6 jne 0x11f0cffb */
  if (!C.zf) goto L_11f0cffb;
  /* 11f0cfd8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f0cfda lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11f0cfdd push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cfde push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f0cfe0 mov edx, dword ptr [0x11f30a44] */
  EDX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0cfe6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0cfe7 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0cfedu);
  /* 11f0cfed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0cfef jne 0x11f0cff5 */
  if (!C.zf) goto L_11f0cff5;
  /* 11f0cff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0cff3 jmp 0x11f0d007 */
  goto L_11f0d007;
L_11f0cff5:;
  /* 11f0cff5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f0cff8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f0cffb:;
  /* 11f0cffb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0cffe push ecx */
  push32((uint32_t)(ECX));
  /* 11f0cfff call 0x11f0a1e0 */
  push32(0x11f0d004u); f_11f0a1e0();
  /* 11f0d004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0d007:;
  /* 11f0d007 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d009 pop ebp */
  EBP = (pop32());
  /* 11f0d00a ret  */
  ESPCHK(0x11f0cf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d010 @ 0x11f0d010 (79 bytes, 26 insns) */
void f_11f0d010(void) {
  FTRACE(0x11f0d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d010 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d011 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d016 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11f0d01a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f0d01e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0d025 jmp 0x11f0d030 */
  goto L_11f0d030;
L_11f0d027:;
  /* 11f0d027 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d02a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d02d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f0d030:;
  /* 11f0d030 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d034 jae 0x11f0d056 */
  if (!C.cf) goto L_11f0d056;
  /* 11f0d036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d039 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d03f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d042 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d044 mov cx, word ptr [eax*2 + 0x11f2f054] */
  CX = (r16((uint32_t)(EAX*2 + 0x11f2f054)));
  /* 11f0d04c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d04e jne 0x11f0d054 */
  if (!C.zf) goto L_11f0d054;
  /* 11f0d050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d052 jmp 0x11f0d05b */
  goto L_11f0d05b;
L_11f0d054:;
  /* 11f0d054 jmp 0x11f0d027 */
  goto L_11f0d027;
L_11f0d056:;
  /* 11f0d056 mov eax, 1 */
  EAX = (0x1u);
L_11f0d05b:;
  /* 11f0d05b mov esp, ebp */
  ESP = (EBP);
  /* 11f0d05d pop ebp */
  EBP = (pop32());
  /* 11f0d05e ret  */
  ESPCHK(0x11f0d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d060 @ 0x11f0d060 (135 bytes, 48 insns) */
void f_11f0d060(void) {
  FTRACE(0x11f0d060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d060 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d061 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d063 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d066 push esi */
  push32((uint32_t)(ESI));
  /* 11f0d067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d06a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d06f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d074 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d079 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11f0d07c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d081 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0d084 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11f0d086 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11f0d089 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d08a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0d08c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d08f push edx */
  push32((uint32_t)(EDX));
  /* 11f0d090 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0d096u);
  /* 11f0d096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d098 jne 0x11f0d09e */
  if (!C.zf) goto L_11f0d09e;
  /* 11f0d09a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d09c jmp 0x11f0d0e2 */
  goto L_11f0d0e2;
L_11f0d09e:;
  /* 11f0d09e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11f0d0a1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d0a2 call 0x11f0d2d0 */
  push32(0x11f0d0a7u); f_11f0d2d0();
  /* 11f0d0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d0aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d0ad je 0x11f0d0dd */
  if (C.zf) goto L_11f0d0dd;
  /* 11f0d0af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d0b3 je 0x11f0d0dd */
  if (C.zf) goto L_11f0d0dd;
  /* 11f0d0b5 mov ecx, dword ptr [0x11f30a38] */
  ECX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0d0bb push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d0bc call 0x11f0d350 */
  push32(0x11f0d0c1u); f_11f0d350();
  /* 11f0d0c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d0c4 mov esi, eax */
  ESI = (EAX);
  /* 11f0d0c6 mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0d0cc push edx */
  push32((uint32_t)(EDX));
  /* 11f0d0cd call 0x11f00050 */
  push32(0x11f0d0d2u); f_11f00050();
  /* 11f0d0d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d0d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d0d7 jne 0x11f0d0dd */
  if (!C.zf) goto L_11f0d0dd;
  /* 11f0d0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d0db jmp 0x11f0d0e2 */
  goto L_11f0d0e2;
L_11f0d0dd:;
  /* 11f0d0dd mov eax, 1 */
  EAX = (0x1u);
L_11f0d0e2:;
  /* 11f0d0e2 pop esi */
  ESI = (pop32());
  /* 11f0d0e3 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d0e5 pop ebp */
  EBP = (pop32());
  /* 11f0d0e6 ret  */
  ESPCHK(0x11f0d060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d0f0 @ 0x11f0d0f0 (77 bytes, 18 insns) */
void f_11f0d0f0(void) {
  FTRACE(0x11f0d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d0f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d0f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11f0d103 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11f0d109 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d10a call dword ptr [0x11f33338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33338))), 0x11f0d110u);
  /* 11f0d110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d112 je 0x11f0d129 */
  if (C.zf) goto L_11f0d129;
  /* 11f0d114 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d11b jne 0x11f0d129 */
  if (!C.zf) goto L_11f0d129;
  /* 11f0d11d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11f0d127 jmp 0x11f0d133 */
  goto L_11f0d133;
L_11f0d129:;
  /* 11f0d129 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11f0d133:;
  /* 11f0d133 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11f0d139 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d13b pop ebp */
  EBP = (pop32());
  /* 11f0d13c ret  */
  ESPCHK(0x11f0d0f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11f0d140 (388 bytes, 118 insns) */
void f_11f0d140(void) {
  FTRACE(0x11f0d140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d140 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d141 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d146 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0d14d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11f0d154 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11f0d15b:;
  /* 11f0d15b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0d15e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d161 jg 0x11f0d2a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d2a8;
  /* 11f0d167 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0d16a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d16d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0d16e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d170 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f0d172 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0d175 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d178 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d17e cmp edx, dword ptr [ecx + 0x11f2ebb0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11f2ebb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d184 jne 0x11f0d27e */
  if (!C.zf) goto L_11f0d27e;
  /* 11f0d18a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d18d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0d190 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d194 ja 0x11f0d1b7 */
  if ((!C.cf&&!C.zf)) goto L_11f0d1b7;
  /* 11f0d196 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d19a je 0x11f0d229 */
  if (C.zf) goto L_11f0d229;
  /* 11f0d1a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1a4 je 0x11f0d1d4 */
  if (C.zf) goto L_11f0d1d4;
  /* 11f0d1a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1aa je 0x11f0d1f6 */
  if (C.zf) goto L_11f0d1f6;
  /* 11f0d1ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1b0 je 0x11f0d218 */
  if (C.zf) goto L_11f0d218;
  /* 11f0d1b2 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d1b7:;
  /* 11f0d1b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1be je 0x11f0d1e5 */
  if (C.zf) goto L_11f0d1e5;
  /* 11f0d1c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1c7 je 0x11f0d207 */
  if (C.zf) goto L_11f0d207;
  /* 11f0d1c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d1d0 je 0x11f0d23a */
  if (C.zf) goto L_11f0d23a;
  /* 11f0d1d2 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d1d4:;
  /* 11f0d1d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d1d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d1da add ecx, 0x11f2ebb4 */
  { uint32_t _a=(ECX),_b=(0x11f2ebb4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d1e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0d1e3 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d1e5:;
  /* 11f0d1e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d1e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d1eb mov eax, dword ptr [edx + 0x11f2ebbc] */
  EAX = (r32((uint32_t)(EDX + 0x11f2ebbc)));
  /* 11f0d1f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0d1f4 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d1f6:;
  /* 11f0d1f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d1f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d1fc add ecx, 0x11f2ebc0 */
  { uint32_t _a=(ECX),_b=(0x11f2ebc0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d202 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0d205 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d207:;
  /* 11f0d207 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d20a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d20d mov eax, dword ptr [edx + 0x11f2ebc4] */
  EAX = (r32((uint32_t)(EDX + 0x11f2ebc4)));
  /* 11f0d213 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0d216 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d218:;
  /* 11f0d218 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d21b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d21e add ecx, 0x11f2ebc8 */
  { uint32_t _a=(ECX),_b=(0x11f2ebc8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0d227 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d229:;
  /* 11f0d229 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d22c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d22f add edx, 0x11f2ebcc */
  { uint32_t _a=(EDX),_b=(0x11f2ebccu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d235 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0d238 jmp 0x11f0d248 */
  goto L_11f0d248;
L_11f0d23a:;
  /* 11f0d23a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d23d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d240 add eax, 0x11f2ebd4 */
  { uint32_t _a=(EAX),_b=(0x11f2ebd4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d245 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f0d248:;
  /* 11f0d248 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d24c je 0x11f0d254 */
  if (C.zf) goto L_11f0d254;
  /* 11f0d24e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d252 jge 0x11f0d256 */
  if ((C.sf==C.of)) goto L_11f0d256;
L_11f0d254:;
  /* 11f0d254 jmp 0x11f0d2a8 */
  goto L_11f0d2a8;
L_11f0d256:;
  /* 11f0d256 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0d259 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d25c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d25d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d260 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d261 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0d264 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d265 call 0x11f00a40 */
  push32(0x11f0d26au); f_11f00a40();
  /* 11f0d26a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d26d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0d270 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d273 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11f0d277 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0d27c jmp 0x11f0d2be */
  goto L_11f0d2be;
L_11f0d27e:;
  /* 11f0d27e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d281 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d287 cmp eax, dword ptr [edx + 0x11f2ebb0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11f2ebb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d28d jae 0x11f0d29a */
  if (!C.cf) goto L_11f0d29a;
  /* 11f0d28f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d292 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d295 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0d298 jmp 0x11f0d2a3 */
  goto L_11f0d2a3;
L_11f0d29a:;
  /* 11f0d29a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d29d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d2a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0d2a3:;
  /* 11f0d2a3 jmp 0x11f0d15b */
  goto L_11f0d15b;
L_11f0d2a8:;
  /* 11f0d2a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0d2ab push eax */
  push32((uint32_t)(EAX));
  /* 11f0d2ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0d2af push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d2b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d2b3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d2b7 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d2b8 call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f0d2beu);
L_11f0d2be:;
  /* 11f0d2be mov esp, ebp */
  ESP = (EBP);
  /* 11f0d2c0 pop ebp */
  EBP = (pop32());
  /* 11f0d2c1 ret 0x10 */
  ESPCHK(0x11f0d140u, _esp0);
  ESP += 20; return;
}

/* FUN_1001d2d0 @ 0x11f0d2d0 (118 bytes, 42 insns) */
void f_11f0d2d0(void) {
  FTRACE(0x11f0d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d2d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d2d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f0d2dd:;
  /* 11f0d2dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d2e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0d2e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11f0d2e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d2e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d2ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d2ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0d2f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0d2f4 je 0x11f0d33f */
  if (C.zf) goto L_11f0d33f;
  /* 11f0d2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d2fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d2fd jl 0x11f0d312 */
  if ((C.sf!=C.of)) goto L_11f0d312;
  /* 11f0d2ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d303 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d306 jg 0x11f0d312 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d312;
  /* 11f0d308 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11f0d30b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0d30d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11f0d310 jmp 0x11f0d32c */
  goto L_11f0d32c;
L_11f0d312:;
  /* 11f0d312 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d316 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d319 jl 0x11f0d32c */
  if ((C.sf!=C.of)) goto L_11f0d32c;
  /* 11f0d31b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d31f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d322 jg 0x11f0d32c */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d32c;
  /* 11f0d324 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11f0d327 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0d329 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11f0d32c:;
  /* 11f0d32c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d32f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f0d332 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0d336 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11f0d33a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0d33d jmp 0x11f0d2dd */
  goto L_11f0d2dd;
L_11f0d33f:;
  /* 11f0d33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d342 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d344 pop ebp */
  EBP = (pop32());
  /* 11f0d345 ret  */
  ESPCHK(0x11f0d2d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11f0d350 (101 bytes, 36 insns) */
void f_11f0d350(void) {
  FTRACE(0x11f0d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d350 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d351 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0d35d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d360 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0d362 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11f0d365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d368 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d36b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11f0d36e:;
  /* 11f0d36e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f0d372 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d375 jl 0x11f0d380 */
  if ((C.sf!=C.of)) goto L_11f0d380;
  /* 11f0d377 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f0d37b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d37e jle 0x11f0d392 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0d392;
L_11f0d380:;
  /* 11f0d380 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f0d384 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d387 jl 0x11f0d3ae */
  if ((C.sf!=C.of)) goto L_11f0d3ae;
  /* 11f0d389 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f0d38d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d390 jg 0x11f0d3ae */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d3ae;
L_11f0d392:;
  /* 11f0d392 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d398 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0d39b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d39e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0d3a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11f0d3a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d3a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d3a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0d3ac jmp 0x11f0d36e */
  goto L_11f0d36e;
L_11f0d3ae:;
  /* 11f0d3ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d3b1 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d3b3 pop ebp */
  EBP = (pop32());
  /* 11f0d3b4 ret  */
  ESPCHK(0x11f0d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d3c0 @ 0x11f0d3c0 (1085 bytes, 299 insns) */
void f_11f0d3c0(void) {
  FTRACE(0x11f0d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d3c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d3c6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11f0d3cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0d3d3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11f0d3da mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0d3e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0d3e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d3eb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11f0d3ef mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11f0d3f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d3f6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11f0d3fa mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11f0d3fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0d401 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d407 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0d40a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d410 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d412 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d418 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11f0d41c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11f0d420 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11f0d424 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11f0d428 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11f0d42c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11f0d431 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11f0d435 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0d438 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d43e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0d441 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d446 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d448 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11f0d44c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0d44f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d455 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d45b jge 0x11f0d47d */
  if ((C.sf==C.of)) goto L_11f0d47d;
  /* 11f0d45d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0d460 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d466 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d46c jge 0x11f0d47d */
  if ((C.sf==C.of)) goto L_11f0d47d;
  /* 11f0d46e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0d471 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d476 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d47b jle 0x11f0d4b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0d4b4;
L_11f0d47d:;
  /* 11f0d47d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0d480 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d486 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0d488 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d48a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d490 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d496 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d499 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f0d49c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d49f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f0d4a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d4a9 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11f0d4af jmp 0x11f0d7f9 */
  goto L_11f0d7f9;
L_11f0d4b4:;
  /* 11f0d4b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0d4b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d4bd cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d4c3 jg 0x11f0d4e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d4e7;
  /* 11f0d4c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d4c8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11f0d4cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d4d2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f0d4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d4dc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11f0d4e2 jmp 0x11f0d7f9 */
  goto L_11f0d7f9;
L_11f0d4e7:;
  /* 11f0d4e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0d4ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d4ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d4f1 jne 0x11f0d52d */
  if (!C.zf) goto L_11f0d52d;
  /* 11f0d4f3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d4f7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d4fb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11f0d4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d502 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0d505 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d50a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d50c jne 0x11f0d52d */
  if (!C.zf) goto L_11f0d52d;
  /* 11f0d50e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d511 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d515 jne 0x11f0d52d */
  if (!C.zf) goto L_11f0d52d;
  /* 11f0d517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d51a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d51d jne 0x11f0d52d */
  if (!C.zf) goto L_11f0d52d;
  /* 11f0d51f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d522 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11f0d528 jmp 0x11f0d7f9 */
  goto L_11f0d7f9;
L_11f0d52d:;
  /* 11f0d52d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0d530 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0d538 jne 0x11f0d589 */
  if (!C.zf) goto L_11f0d589;
  /* 11f0d53a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d53e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d542 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11f0d546 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d549 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0d54c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0d554 jne 0x11f0d589 */
  if (!C.zf) goto L_11f0d589;
  /* 11f0d556 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d559 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d55d jne 0x11f0d589 */
  if (!C.zf) goto L_11f0d589;
  /* 11f0d55f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d562 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d565 jne 0x11f0d589 */
  if (!C.zf) goto L_11f0d589;
  /* 11f0d567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d56a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11f0d571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d574 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11f0d57b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d57e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0d584 jmp 0x11f0d7f9 */
  goto L_11f0d7f9;
L_11f0d589:;
  /* 11f0d589 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11f0d590 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f0d597 jmp 0x11f0d5a2 */
  goto L_11f0d5a2;
L_11f0d599:;
  /* 11f0d599 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0d59c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d59f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11f0d5a2:;
  /* 11f0d5a2 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d5a6 jge 0x11f0d661 */
  if ((C.sf==C.of)) goto L_11f0d661;
  /* 11f0d5ac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0d5af shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f0d5b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f0d5b4 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11f0d5bb mov eax, 5 */
  EAX = (0x5u);
  /* 11f0d5c0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d5c3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11f0d5c6 jmp 0x11f0d5d1 */
  goto L_11f0d5d1;
L_11f0d5c8:;
  /* 11f0d5c8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f0d5cb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d5ce mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11f0d5d1:;
  /* 11f0d5d1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d5d5 jle 0x11f0d653 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0d653;
  /* 11f0d5d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d5da add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d5dd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11f0d5e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d5e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d5e6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11f0d5e9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0d5ec lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11f0d5f0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11f0d5f3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0d5f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d5f8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11f0d5fb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0d5fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d600 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f0d603 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d606 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11f0d609 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f0d60c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d60d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f0d610 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d611 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f0d614 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0d616 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d617 call 0x11f08e40 */
  push32(0x11f0d61cu); f_11f08e40();
  /* 11f0d61c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d61f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11f0d622 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d626 je 0x11f0d63c */
  if (C.zf) goto L_11f0d63c;
  /* 11f0d628 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0d62b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11f0d630 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d634 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0d637 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11f0d63c:;
  /* 11f0d63c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0d63f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d642 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f0d645 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d648 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d64b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0d64e jmp 0x11f0d5c8 */
  goto L_11f0d5c8;
L_11f0d653:;
  /* 11f0d653 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0d656 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d659 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11f0d65c jmp 0x11f0d599 */
  goto L_11f0d599;
L_11f0d661:;
  /* 11f0d661 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d665 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f0d66a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11f0d66e:;
  /* 11f0d66e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11f0d672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d674 jle 0x11f0d69d */
  if ((C.zf||C.sf!=C.of)) goto L_11f0d69d;
  /* 11f0d676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d679 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d67f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0d681 jne 0x11f0d69d */
  if (!C.zf) goto L_11f0d69d;
  /* 11f0d683 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11f0d686 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d687 call 0x11f08f30 */
  push32(0x11f0d68cu); f_11f08f30();
  /* 11f0d68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d68f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d693 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f0d697 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11f0d69b jmp 0x11f0d66e */
  goto L_11f0d66e;
L_11f0d69d:;
  /* 11f0d69d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11f0d6a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0d6a3 jg 0x11f0d6fd */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d6fd;
  /* 11f0d6a5 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d6a9 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f0d6ad mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11f0d6b1:;
  /* 11f0d6b1 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11f0d6b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d6b7 jge 0x11f0d6ec */
  if ((C.sf==C.of)) goto L_11f0d6ec;
  /* 11f0d6b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0d6bc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d6c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d6c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0d6c7 je 0x11f0d6d2 */
  if (C.zf) goto L_11f0d6d2;
  /* 11f0d6c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d6cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d6cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0d6d2:;
  /* 11f0d6d2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f0d6d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d6d6 call 0x11f08f90 */
  push32(0x11f0d6dbu); f_11f08f90();
  /* 11f0d6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d6de mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d6e2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d6e6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11f0d6ea jmp 0x11f0d6b1 */
  goto L_11f0d6b1;
L_11f0d6ec:;
  /* 11f0d6ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d6f0 je 0x11f0d6fd */
  if (C.zf) goto L_11f0d6fd;
  /* 11f0d6f2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11f0d6f6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11f0d6f9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11f0d6fd:;
  /* 11f0d6fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0d700 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d705 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d70a jg 0x11f0d71d */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0d71d;
  /* 11f0d70c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0d70f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d715 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d71b jne 0x11f0d77e */
  if (!C.zf) goto L_11f0d77e;
L_11f0d71d:;
  /* 11f0d71d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d721 jne 0x11f0d775 */
  if (!C.zf) goto L_11f0d775;
  /* 11f0d723 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11f0d72a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d72e jne 0x11f0d76a */
  if (!C.zf) goto L_11f0d76a;
  /* 11f0d730 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11f0d737 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11f0d73a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d740 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d746 jne 0x11f0d75c */
  if (!C.zf) goto L_11f0d75c;
  /* 11f0d748 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11f0d74e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11f0d752 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d756 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11f0d75a jmp 0x11f0d768 */
  goto L_11f0d768;
L_11f0d75c:;
  /* 11f0d75c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11f0d760 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0d764 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11f0d768:;
  /* 11f0d768 jmp 0x11f0d773 */
  goto L_11f0d773;
L_11f0d76a:;
  /* 11f0d76a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11f0d76d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d770 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11f0d773:;
  /* 11f0d773 jmp 0x11f0d77e */
  goto L_11f0d77e;
L_11f0d775:;
  /* 11f0d775 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11f0d778 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d77b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11f0d77e:;
  /* 11f0d77e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0d781 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d787 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d78d jl 0x11f0d7c3 */
  if ((C.sf!=C.of)) goto L_11f0d7c3;
  /* 11f0d78f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0d792 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d798 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0d79a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d79c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d7a2 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f0d7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7b1 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f0d7b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7bb mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11f0d7c1 jmp 0x11f0d7f9 */
  goto L_11f0d7f9;
L_11f0d7c3:;
  /* 11f0d7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7c6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11f0d7ca mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11f0d7cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0d7d3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11f0d7d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d7dc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11f0d7df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0d7e2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d7e7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0d7ea and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d7f0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d7f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d7f5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11f0d7f9:;
  /* 11f0d7f9 mov esp, ebp */
  ESP = (EBP);
  /* 11f0d7fb pop ebp */
  EBP = (pop32());
  /* 11f0d7fc ret  */
  ESPCHK(0x11f0d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d800 @ 0x11f0d800 (195 bytes, 67 insns) */
void f_11f0d800(void) {
  FTRACE(0x11f0d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d800 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d801 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d803 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d806 mov eax, 0x11f2f430 */
  EAX = (0x11f2f430u);
  /* 11f0d80b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d80e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0d811 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d815 jne 0x11f0d81c */
  if (!C.zf) goto L_11f0d81c;
  /* 11f0d817 jmp 0x11f0d8bf */
  goto L_11f0d8bf;
L_11f0d81c:;
  /* 11f0d81c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d820 jge 0x11f0d835 */
  if ((C.sf==C.of)) goto L_11f0d835;
  /* 11f0d822 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d825 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0d827 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f0d82a mov edx, 0x11f2f590 */
  EDX = (0x11f2f590u);
  /* 11f0d82f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d832 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0d835:;
  /* 11f0d835 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d839 jne 0x11f0d843 */
  if (!C.zf) goto L_11f0d843;
  /* 11f0d83b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d83e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11f0d843:;
  /* 11f0d843 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d847 je 0x11f0d8bf */
  if (C.zf) goto L_11f0d8bf;
  /* 11f0d849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d84c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d84f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0d852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d855 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0d858 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f0d85b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d85e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f0d861 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f0d864 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d868 jne 0x11f0d86c */
  if (!C.zf) goto L_11f0d86c;
  /* 11f0d86a jmp 0x11f0d843 */
  goto L_11f0d843;
L_11f0d86c:;
  /* 11f0d86c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0d86f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0d872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d875 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d877 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0d87a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d87d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d87f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11f0d882 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d888 jl 0x11f0d8ad */
  if ((C.sf!=C.of)) goto L_11f0d8ad;
  /* 11f0d88a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d88d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0d88f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0d892 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0d895 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0d898 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0d89b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f0d89e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11f0d8a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d8a4 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11f0d8a7 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11f0d8aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f0d8ad:;
  /* 11f0d8ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d8b0 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d8b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d8b4 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d8b5 call 0x11f0d3c0 */
  push32(0x11f0d8bau); f_11f0d3c0();
  /* 11f0d8ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d8bd jmp 0x11f0d843 */
  goto L_11f0d843;
L_11f0d8bf:;
  /* 11f0d8bf mov esp, ebp */
  ESP = (EBP);
  /* 11f0d8c1 pop ebp */
  EBP = (pop32());
  /* 11f0d8c2 ret  */
  ESPCHK(0x11f0d800u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11f0d8d0 (52 bytes, 19 insns) */
void f_11f0d8d0(void) {
  FTRACE(0x11f0d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d8d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f0d8d4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f0d8d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0d8da mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f0d8de jne 0x11f0d8e9 */
  if (!C.zf) goto L_11f0d8e9;
  /* 11f0d8e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f0d8e4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f0d8e6 ret 0x10 */
  ESPCHK(0x11f0d8d0u, _esp0);
  ESP += 20; return;
L_11f0d8e9:;
  /* 11f0d8e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0d8ea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f0d8ec mov ebx, eax */
  EBX = (EAX);
  /* 11f0d8ee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f0d8f2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f0d8f6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d8f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f0d8fc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f0d8fe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d900 pop ebx */
  EBX = (pop32());
  /* 11f0d901 ret 0x10 */
  ESPCHK(0x11f0d8d0u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11f0d910 (79 bytes, 32 insns) */
void f_11f0d910(void) {
  FTRACE(0x11f0d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d910 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d911 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d913 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d914 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d918 jne 0x11f0d91e */
  if (!C.zf) goto L_11f0d91e;
  /* 11f0d91a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d91c jmp 0x11f0d95b */
  goto L_11f0d95b;
L_11f0d91e:;
  /* 11f0d91e mov eax, dword ptr [0x11f31dd8] */
  EAX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f0d923 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d924 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0d927 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d928 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0d92b push edx */
  push32((uint32_t)(EDX));
  /* 11f0d92c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0d92f push eax */
  push32((uint32_t)(EAX));
  /* 11f0d930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0d933 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d934 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0d936 mov edx, dword ptr [0x11f32064] */
  EDX = (r32((uint32_t)(0x11f32064)));
  /* 11f0d93c push edx */
  push32((uint32_t)(EDX));
  /* 11f0d93d call 0x11f0fed0 */
  push32(0x11f0d942u); f_11f0fed0();
  /* 11f0d942 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0d948 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d94c jne 0x11f0d955 */
  if (!C.zf) goto L_11f0d955;
  /* 11f0d94e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11f0d953 jmp 0x11f0d95b */
  goto L_11f0d95b;
L_11f0d955:;
  /* 11f0d955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d958 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f0d95b:;
  /* 11f0d95b mov esp, ebp */
  ESP = (EBP);
  /* 11f0d95d pop ebp */
  EBP = (pop32());
  /* 11f0d95e ret  */
  ESPCHK(0x11f0d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d960 @ 0x11f0d960 (174 bytes, 66 insns) */
void f_11f0d960(void) {
  FTRACE(0x11f0d960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0d960 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0d961 mov ebp, esp */
  EBP = (ESP);
  /* 11f0d963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0d966 mov eax, dword ptr [0x11f30794] */
  EAX = (r32((uint32_t)(0x11f30794)));
  /* 11f0d96b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0d96e:;
  /* 11f0d96e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d971 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d974 je 0x11f0da08 */
  if (C.zf) goto L_11f0da08;
  /* 11f0d97a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d97c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d97e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d982 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f0d984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d987 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0d989 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d98a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d98c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0d98e call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f0d994u);
  /* 11f0d994 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0d997 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d99b jne 0x11f0d9a2 */
  if (!C.zf) goto L_11f0d9a2;
  /* 11f0d99d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d9a0 jmp 0x11f0da0a */
  goto L_11f0da0a;
L_11f0d9a2:;
  /* 11f0d9a2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11f0d9a4 push 0x11f2bbac */
  push32((uint32_t)(0x11f2bbacu));
  /* 11f0d9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0d9ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d9ae push ecx */
  push32((uint32_t)(ECX));
  /* 11f0d9af call 0x11efbac0 */
  push32(0x11f0d9b4u); f_11efbac0();
  /* 11f0d9b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d9b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0d9ba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0d9be jne 0x11f0d9c5 */
  if (!C.zf) goto L_11f0d9c5;
  /* 11f0d9c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d9c3 jmp 0x11f0da0a */
  goto L_11f0da0a;
L_11f0d9c5:;
  /* 11f0d9c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d9c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d9c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0d9cc push edx */
  push32((uint32_t)(EDX));
  /* 11f0d9cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d9d0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d9d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f0d9d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d9d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0d9d8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0d9d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d9db push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0d9dd call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f0d9e3u);
  /* 11f0d9e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0d9e5 jne 0x11f0d9ec */
  if (!C.zf) goto L_11f0d9ec;
  /* 11f0d9e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0d9ea jmp 0x11f0da0a */
  goto L_11f0da0a;
L_11f0d9ec:;
  /* 11f0d9ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0d9ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0d9f1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0d9f2 call 0x11f10320 */
  push32(0x11f0d9f7u); f_11f10320();
  /* 11f0d9f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0d9fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0d9fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0da00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0da03 jmp 0x11f0d96e */
  goto L_11f0d96e;
L_11f0da08:;
  /* 11f0da08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0da0a:;
  /* 11f0da0a mov esp, ebp */
  ESP = (EBP);
  /* 11f0da0c pop ebp */
  EBP = (pop32());
  /* 11f0da0d ret  */
  ESPCHK(0x11f0d960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da10 @ 0x11f0da10 (482 bytes, 138 insns) */
void f_11f0da10(void) {
  FTRACE(0x11f0da10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0da10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0da11 mov ebp, esp */
  EBP = (ESP);
  /* 11f0da13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0da16 push esi */
  push32((uint32_t)(ESI));
  /* 11f0da17 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11f0da1e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f0da20 call 0x11efb9c0 */
  push32(0x11f0da25u); f_11efb9c0();
  /* 11f0da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0da28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0da2f jmp 0x11f0da3a */
  goto L_11f0da3a;
L_11f0da31:;
  /* 11f0da31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0da34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0da37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f0da3a:;
  /* 11f0da3a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0da3e jge 0x11f0dbe0 */
  if ((C.sf==C.of)) goto L_11f0dbe0;
  /* 11f0da44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0da47 cmp dword ptr [ecx*4 + 0x11f320a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11f320a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0da4f je 0x11f0db46 */
  if (C.zf) goto L_11f0db46;
  /* 11f0da55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0da58 mov eax, dword ptr [edx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0da5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0da62 jmp 0x11f0da6d */
  goto L_11f0da6d;
L_11f0da64:;
  /* 11f0da64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0da67 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0da6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0da6d:;
  /* 11f0da6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0da70 mov eax, dword ptr [edx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0da77 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0da7c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0da7f jae 0x11f0db36 */
  if (!C.cf) goto L_11f0db36;
  /* 11f0da85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0da88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f0da8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0da8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0da91 jne 0x11f0db31 */
  if (!C.zf) goto L_11f0db31;
  /* 11f0da97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0da9a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0da9e jne 0x11f0dad9 */
  if (!C.zf) goto L_11f0dad9;
  /* 11f0daa0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f0daa2 call 0x11efb9c0 */
  push32(0x11f0daa7u); f_11efb9c0();
  /* 11f0daa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0daaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0daad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dab1 jne 0x11f0dacf */
  if (!C.zf) goto L_11f0dacf;
  /* 11f0dab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dab6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dab9 push edx */
  push32((uint32_t)(EDX));
  /* 11f0daba call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11f0dac0u);
  /* 11f0dac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dac3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0dac6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dacc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f0dacf:;
  /* 11f0dacf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f0dad1 call 0x11efba60 */
  push32(0x11f0dad6u); f_11efba60();
  /* 11f0dad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0dad9:;
  /* 11f0dad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dadc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dadf push eax */
  push32((uint32_t)(EAX));
  /* 11f0dae0 call dword ptr [0x11f33438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33438))), 0x11f0dae6u);
  /* 11f0dae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dae9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f0daed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0daf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0daf2 je 0x11f0db06 */
  if (C.zf) goto L_11f0db06;
  /* 11f0daf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0daf7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dafa push eax */
  push32((uint32_t)(EAX));
  /* 11f0dafb call dword ptr [0x11f3343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3343c))), 0x11f0db01u);
  /* 11f0db01 jmp 0x11f0da64 */
  goto L_11f0da64;
L_11f0db06:;
  /* 11f0db06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0db09 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f0db0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0db12 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0db15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0db18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0db1b sub eax, dword ptr [edx*4 + 0x11f320a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11f320a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0db22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0db23 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11f0db28 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0db2a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0db2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0db2f jmp 0x11f0db36 */
  goto L_11f0db36;
L_11f0db31:;
  /* 11f0db31 jmp 0x11f0da64 */
  goto L_11f0da64;
L_11f0db36:;
  /* 11f0db36 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0db3a je 0x11f0db41 */
  if (C.zf) goto L_11f0db41;
  /* 11f0db3c jmp 0x11f0dbe0 */
  goto L_11f0dbe0;
L_11f0db41:;
  /* 11f0db41 jmp 0x11f0dbdb */
  goto L_11f0dbdb;
L_11f0db46:;
  /* 11f0db46 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11f0db48 push 0x11f2bbb8 */
  push32((uint32_t)(0x11f2bbb8u));
  /* 11f0db4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0db4f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f0db54 call 0x11efbac0 */
  push32(0x11f0db59u); f_11efbac0();
  /* 11f0db59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0db5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0db5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0db63 je 0x11f0dbd9 */
  if (C.zf) goto L_11f0dbd9;
  /* 11f0db65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0db68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0db6b mov dword ptr [eax*4 + 0x11f320a0], ecx */
  w32((uint32_t)(EAX*4 + 0x11f320a0), (ECX));
  /* 11f0db72 mov edx, dword ptr [0x11f321dc] */
  EDX = (r32((uint32_t)(0x11f321dc)));
  /* 11f0db78 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0db7b mov dword ptr [0x11f321dc], edx */
  w32((uint32_t)(0x11f321dc), (EDX));
  /* 11f0db81 jmp 0x11f0db8c */
  goto L_11f0db8c;
L_11f0db83:;
  /* 11f0db83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0db86 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0db89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0db8c:;
  /* 11f0db8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0db8f mov edx, dword ptr [ecx*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0db96 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0db9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0db9f jae 0x11f0dbc4 */
  if (!C.cf) goto L_11f0dbc4;
  /* 11f0dba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dba4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f0dba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dbab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f0dbb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dbb4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11f0dbb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0dbbb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11f0dbc2 jmp 0x11f0db83 */
  goto L_11f0db83;
L_11f0dbc4:;
  /* 11f0dbc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0dbc7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0dbca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0dbcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0dbd0 push edx */
  push32((uint32_t)(EDX));
  /* 11f0dbd1 call 0x11f0df20 */
  push32(0x11f0dbd6u); f_11f0df20();
  /* 11f0dbd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0dbd9:;
  /* 11f0dbd9 jmp 0x11f0dbe0 */
  goto L_11f0dbe0;
L_11f0dbdb:;
  /* 11f0dbdb jmp 0x11f0da31 */
  goto L_11f0da31;
L_11f0dbe0:;
  /* 11f0dbe0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f0dbe2 call 0x11efba60 */
  push32(0x11f0dbe7u); f_11efba60();
  /* 11f0dbe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dbea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0dbed pop esi */
  ESI = (pop32());
  /* 11f0dbee mov esp, ebp */
  ESP = (EBP);
  /* 11f0dbf0 pop ebp */
  EBP = (pop32());
  /* 11f0dbf1 ret  */
  ESPCHK(0x11f0da10u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11f0dc00 (183 bytes, 57 insns) */
void f_11f0dc00(void) {
  FTRACE(0x11f0dc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0dc00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0dc01 mov ebp, esp */
  EBP = (ESP);
  /* 11f0dc03 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0dc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc07 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc0d jae 0x11f0dc9a */
  if (!C.cf) goto L_11f0dc9a;
  /* 11f0dc13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0dc19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0dc1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dc22 mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0dc29 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc2d jne 0x11f0dc9a */
  if (!C.zf) goto L_11f0dc9a;
  /* 11f0dc2f cmp dword ptr [0x11f306f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc36 jne 0x11f0dc7a */
  if (!C.zf) goto L_11f0dc7a;
  /* 11f0dc38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0dc3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc42 je 0x11f0dc52 */
  if (C.zf) goto L_11f0dc52;
  /* 11f0dc44 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc48 je 0x11f0dc60 */
  if (C.zf) goto L_11f0dc60;
  /* 11f0dc4a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dc4e je 0x11f0dc6e */
  if (C.zf) goto L_11f0dc6e;
  /* 11f0dc50 jmp 0x11f0dc7a */
  goto L_11f0dc7a;
L_11f0dc52:;
  /* 11f0dc52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0dc55 push edx */
  push32((uint32_t)(EDX));
  /* 11f0dc56 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f0dc58 call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dc5eu);
  /* 11f0dc5e jmp 0x11f0dc7a */
  goto L_11f0dc7a;
L_11f0dc60:;
  /* 11f0dc60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0dc63 push eax */
  push32((uint32_t)(EAX));
  /* 11f0dc64 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11f0dc66 call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dc6cu);
  /* 11f0dc6c jmp 0x11f0dc7a */
  goto L_11f0dc7a;
L_11f0dc6e:;
  /* 11f0dc6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0dc71 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0dc72 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f0dc74 call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dc7au);
L_11f0dc7a:;
  /* 11f0dc7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc7d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f0dc80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dc83 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dc86 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dc89 mov ecx, dword ptr [edx*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0dc90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0dc93 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11f0dc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dc98 jmp 0x11f0dcb3 */
  goto L_11f0dcb3;
L_11f0dc9a:;
  /* 11f0dc9a call 0x11f07150 */
  push32(0x11f0dc9fu); f_11f07150();
  /* 11f0dc9f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0dca5 call 0x11f07160 */
  push32(0x11f0dcaau); f_11f07160();
  /* 11f0dcaa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0dcb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f0dcb3:;
  /* 11f0dcb3 mov esp, ebp */
  ESP = (EBP);
  /* 11f0dcb5 pop ebp */
  EBP = (pop32());
  /* 11f0dcb6 ret  */
  ESPCHK(0x11f0dc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dcc0 @ 0x11f0dcc0 (216 bytes, 63 insns) */
void f_11f0dcc0(void) {
  FTRACE(0x11f0dcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0dcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0dcc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0dcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0dcc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dcc7 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dccd jae 0x11f0dd7b */
  if (!C.cf) goto L_11f0dd7b;
  /* 11f0dcd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dcd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0dcd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dcdc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0dcdf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dce2 mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0dce9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0dcee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0dcf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0dcf3 je 0x11f0dd7b */
  if (C.zf) goto L_11f0dd7b;
  /* 11f0dcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dcfc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f0dcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dd02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dd05 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dd08 mov ecx, dword ptr [edx*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0dd0f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dd13 je 0x11f0dd7b */
  if (C.zf) goto L_11f0dd7b;
  /* 11f0dd15 cmp dword ptr [0x11f306f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dd1c jne 0x11f0dd5a */
  if (!C.zf) goto L_11f0dd5a;
  /* 11f0dd1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dd21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0dd24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dd28 je 0x11f0dd38 */
  if (C.zf) goto L_11f0dd38;
  /* 11f0dd2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dd2e je 0x11f0dd44 */
  if (C.zf) goto L_11f0dd44;
  /* 11f0dd30 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0dd34 je 0x11f0dd50 */
  if (C.zf) goto L_11f0dd50;
  /* 11f0dd36 jmp 0x11f0dd5a */
  goto L_11f0dd5a;
L_11f0dd38:;
  /* 11f0dd38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0dd3a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f0dd3c call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dd42u);
  /* 11f0dd42 jmp 0x11f0dd5a */
  goto L_11f0dd5a;
L_11f0dd44:;
  /* 11f0dd44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0dd46 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11f0dd48 call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dd4eu);
  /* 11f0dd4e jmp 0x11f0dd5a */
  goto L_11f0dd5a;
L_11f0dd50:;
  /* 11f0dd50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0dd52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f0dd54 call dword ptr [0x11f33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33334))), 0x11f0dd5au);
L_11f0dd5a:;
  /* 11f0dd5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dd5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0dd60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dd63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0dd66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dd69 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0dd70 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11f0dd77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dd79 jmp 0x11f0dd94 */
  goto L_11f0dd94;
L_11f0dd7b:;
  /* 11f0dd7b call 0x11f07150 */
  push32(0x11f0dd80u); f_11f07150();
  /* 11f0dd80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0dd86 call 0x11f07160 */
  push32(0x11f0dd8bu); f_11f07160();
  /* 11f0dd8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0dd91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f0dd94:;
  /* 11f0dd94 mov esp, ebp */
  ESP = (EBP);
  /* 11f0dd96 pop ebp */
  EBP = (pop32());
  /* 11f0dd97 ret  */
  ESPCHK(0x11f0dcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dda0 @ 0x11f0dda0 (102 bytes, 30 insns) */
void f_11f0dda0(void) {
  FTRACE(0x11f0dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0dda1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0dda3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dda6 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ddac jae 0x11f0ddeb */
  if (!C.cf) goto L_11f0ddeb;
  /* 11f0ddae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ddb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0ddb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ddb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ddba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0ddbd mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0ddc4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0ddc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ddcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0ddce je 0x11f0ddeb */
  if (C.zf) goto L_11f0ddeb;
  /* 11f0ddd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ddd3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f0ddd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ddd9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dddc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dddf mov ecx, dword ptr [edx*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0dde6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11f0dde9 jmp 0x11f0de04 */
  goto L_11f0de04;
L_11f0ddeb:;
  /* 11f0ddeb call 0x11f07150 */
  push32(0x11f0ddf0u); f_11f07150();
  /* 11f0ddf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0ddf6 call 0x11f07160 */
  push32(0x11f0ddfbu); f_11f07160();
  /* 11f0ddfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0de01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f0de04:;
  /* 11f0de04 pop ebp */
  EBP = (pop32());
  /* 11f0de05 ret  */
  ESPCHK(0x11f0dda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de10 @ 0x11f0de10 (260 bytes, 83 insns) */
void f_11f0de10(void) {
  FTRACE(0x11f0de10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0de10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0de11 mov ebp, esp */
  EBP = (ESP);
  /* 11f0de13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0de16 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0de1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0de1d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0de20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0de22 je 0x11f0de2d */
  if (C.zf) goto L_11f0de2d;
  /* 11f0de24 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0de27 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f0de2a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11f0de2d:;
  /* 11f0de2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0de30 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0de36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0de38 je 0x11f0de42 */
  if (C.zf) goto L_11f0de42;
  /* 11f0de3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0de3d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11f0de3f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11f0de42:;
  /* 11f0de42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0de45 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0de4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0de4d je 0x11f0de58 */
  if (C.zf) goto L_11f0de58;
  /* 11f0de4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0de52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11f0de55 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11f0de58:;
  /* 11f0de58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0de5b push eax */
  push32((uint32_t)(EAX));
  /* 11f0de5c call dword ptr [0x11f333c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333c0))), 0x11f0de62u);
  /* 11f0de62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0de65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0de69 jne 0x11f0de82 */
  if (!C.zf) goto L_11f0de82;
  /* 11f0de6b call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f0de71u);
  /* 11f0de71 push eax */
  push32((uint32_t)(EAX));
  /* 11f0de72 call 0x11f070b0 */
  push32(0x11f0de77u); f_11f070b0();
  /* 11f0de77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0de7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0de7d jmp 0x11f0df10 */
  goto L_11f0df10;
L_11f0de82:;
  /* 11f0de82 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0de86 jne 0x11f0de93 */
  if (!C.zf) goto L_11f0de93;
  /* 11f0de88 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0de8b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11f0de8e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11f0de91 jmp 0x11f0dea2 */
  goto L_11f0dea2;
L_11f0de93:;
  /* 11f0de93 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0de97 jne 0x11f0dea2 */
  if (!C.zf) goto L_11f0dea2;
  /* 11f0de99 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0de9c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11f0de9f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11f0dea2:;
  /* 11f0dea2 call 0x11f0da10 */
  push32(0x11f0dea7u); f_11f0da10();
  /* 11f0dea7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0deaa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0deae jne 0x11f0decb */
  if (!C.zf) goto L_11f0decb;
  /* 11f0deb0 call 0x11f07150 */
  push32(0x11f0deb5u); f_11f07150();
  /* 11f0deb5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11f0debb call 0x11f07160 */
  push32(0x11f0dec0u); f_11f07160();
  /* 11f0dec0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0dec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0dec9 jmp 0x11f0df10 */
  goto L_11f0df10;
L_11f0decb:;
  /* 11f0decb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dece push eax */
  push32((uint32_t)(EAX));
  /* 11f0decf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0ded2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ded3 call 0x11f0dc00 */
  push32(0x11f0ded8u); f_11f0dc00();
  /* 11f0ded8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dedb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0dede or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11f0dee1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11f0dee4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0dee7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0deea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0deed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0def0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0def3 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0defa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0defd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11f0df01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0df04 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0df05 call 0x11f0dfb0 */
  push32(0x11f0df0au); f_11f0dfb0();
  /* 11f0df0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0df0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0df10:;
  /* 11f0df10 mov esp, ebp */
  ESP = (EBP);
  /* 11f0df12 pop ebp */
  EBP = (pop32());
  /* 11f0df13 ret  */
  ESPCHK(0x11f0de10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001df20 @ 0x11f0df20 (134 bytes, 44 insns) */
void f_11f0df20(void) {
  FTRACE(0x11f0df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0df20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0df21 mov ebp, esp */
  EBP = (ESP);
  /* 11f0df23 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0df24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0df27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0df2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0df2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0df30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0df33 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0df3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0df3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0df3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0df42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0df46 jne 0x11f0df81 */
  if (!C.zf) goto L_11f0df81;
  /* 11f0df48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f0df4a call 0x11efb9c0 */
  push32(0x11f0df4fu); f_11efb9c0();
  /* 11f0df4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0df52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0df55 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0df59 jne 0x11f0df77 */
  if (!C.zf) goto L_11f0df77;
  /* 11f0df5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0df5e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0df61 push edx */
  push32((uint32_t)(EDX));
  /* 11f0df62 call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11f0df68u);
  /* 11f0df68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0df6b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0df6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0df71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0df74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f0df77:;
  /* 11f0df77 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f0df79 call 0x11efba60 */
  push32(0x11f0df7eu); f_11efba60();
  /* 11f0df7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0df81:;
  /* 11f0df81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0df84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0df87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0df8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0df8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0df90 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0df97 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11f0df9b push eax */
  push32((uint32_t)(EAX));
  /* 11f0df9c call dword ptr [0x11f33438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33438))), 0x11f0dfa2u);
  /* 11f0dfa2 mov esp, ebp */
  ESP = (EBP);
  /* 11f0dfa4 pop ebp */
  EBP = (pop32());
  /* 11f0dfa5 ret  */
  ESPCHK(0x11f0df20u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11f0dfb0 (38 bytes, 13 insns) */
void f_11f0dfb0(void) {
  FTRACE(0x11f0dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0dfb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dfb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0dfb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0dfbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0dfbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0dfc2 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0dfc9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11f0dfcd push eax */
  push32((uint32_t)(EAX));
  /* 11f0dfce call dword ptr [0x11f3343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3343c))), 0x11f0dfd4u);
  /* 11f0dfd4 pop ebp */
  EBP = (pop32());
  /* 11f0dfd5 ret  */
  ESPCHK(0x11f0dfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dfe0 @ 0x11f0dfe0 (218 bytes, 63 insns) */
void f_11f0dfe0(void) {
  FTRACE(0x11f0dfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0dfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0dfe1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0dfe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0dfe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0dfed push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0dfef call 0x11efb9c0 */
  push32(0x11f0dff4u); f_11efb9c0();
  /* 11f0dff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0dff7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11f0dffe jmp 0x11f0e009 */
  goto L_11f0e009;
L_11f0e000:;
  /* 11f0e000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e003 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e006 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f0e009:;
  /* 11f0e009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e00c cmp ecx, dword ptr [0x11f31dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f31dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e012 jge 0x11f0e0a9 */
  if ((C.sf==C.of)) goto L_11f0e0a9;
  /* 11f0e018 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e01b mov eax, dword ptr [0x11f30a7c] */
  EAX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e020 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e024 je 0x11f0e0a4 */
  if (C.zf) goto L_11f0e0a4;
  /* 11f0e026 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e029 mov edx, dword ptr [0x11f30a7c] */
  EDX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e02f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0e032 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0e035 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0e03b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0e03d je 0x11f0e061 */
  if (C.zf) goto L_11f0e061;
  /* 11f0e03f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e042 mov eax, dword ptr [0x11f30a7c] */
  EAX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e047 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e04a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e04b call 0x11f10770 */
  push32(0x11f0e050u); f_11f10770();
  /* 11f0e050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e053 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e056 je 0x11f0e061 */
  if (C.zf) goto L_11f0e061;
  /* 11f0e058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e05b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e05e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0e061:;
  /* 11f0e061 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e065 jl 0x11f0e0a4 */
  if ((C.sf!=C.of)) goto L_11f0e0a4;
  /* 11f0e067 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e06a mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e070 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e073 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e076 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e077 call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11f0e07du);
  /* 11f0e07d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0e07f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e082 mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e088 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e08b push edx */
  push32((uint32_t)(EDX));
  /* 11f0e08c call 0x11efc550 */
  push32(0x11f0e091u); f_11efc550();
  /* 11f0e091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e097 mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e09d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11f0e0a4:;
  /* 11f0e0a4 jmp 0x11f0e000 */
  goto L_11f0e000;
L_11f0e0a9:;
  /* 11f0e0a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0e0ab call 0x11efba60 */
  push32(0x11f0e0b0u); f_11efba60();
  /* 11f0e0b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e0b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e0b6 mov esp, ebp */
  ESP = (EBP);
  /* 11f0e0b8 pop ebp */
  EBP = (pop32());
  /* 11f0e0b9 ret  */
  ESPCHK(0x11f0dfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e0c0 @ 0x11f0e0c0 (68 bytes, 26 insns) */
void f_11f0e0c0(void) {
  FTRACE(0x11f0e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e0c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e0c8 jne 0x11f0e0d6 */
  if (!C.zf) goto L_11f0e0d6;
  /* 11f0e0ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0e0cc call 0x11f0e230 */
  push32(0x11f0e0d1u); f_11f0e230();
  /* 11f0e0d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e0d4 jmp 0x11f0e100 */
  goto L_11f0e100;
L_11f0e0d6:;
  /* 11f0e0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e0d9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e0da call 0x11f0abf0 */
  push32(0x11f0e0dfu); f_11f0abf0();
  /* 11f0e0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e0e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e0e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e0e6 call 0x11f0e110 */
  push32(0x11f0e0ebu); f_11f0e110();
  /* 11f0e0eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0e0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e0f4 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e0f5 call 0x11f0ac60 */
  push32(0x11f0e0fau); f_11f0ac60();
  /* 11f0e0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f0e100:;
  /* 11f0e100 mov esp, ebp */
  ESP = (EBP);
  /* 11f0e102 pop ebp */
  EBP = (pop32());
  /* 11f0e103 ret  */
  ESPCHK(0x11f0e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e110 @ 0x11f0e110 (65 bytes, 26 insns) */
void f_11f0e110(void) {
  FTRACE(0x11f0e110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e110 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e111 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e116 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e117 call 0x11f0e160 */
  push32(0x11f0e11cu); f_11f0e160();
  /* 11f0e11c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0e121 je 0x11f0e128 */
  if (C.zf) goto L_11f0e128;
  /* 11f0e123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0e126 jmp 0x11f0e14f */
  goto L_11f0e14f;
L_11f0e128:;
  /* 11f0e128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e12b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0e12e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0e134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0e136 je 0x11f0e14d */
  if (C.zf) goto L_11f0e14d;
  /* 11f0e138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e13b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0e13e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e13f call 0x11f108c0 */
  push32(0x11f0e144u); f_11f108c0();
  /* 11f0e144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e147 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0e149 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e14b jmp 0x11f0e14f */
  goto L_11f0e14f;
L_11f0e14d:;
  /* 11f0e14d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0e14f:;
  /* 11f0e14f pop ebp */
  EBP = (pop32());
  /* 11f0e150 ret  */
  ESPCHK(0x11f0e110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e160 @ 0x11f0e160 (183 bytes, 62 insns) */
void f_11f0e160(void) {
  FTRACE(0x11f0e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e160 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e161 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0e16d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e170 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0e173 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e176 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0e179 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0e17c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e17f jne 0x11f0e1fb */
  if (!C.zf) goto L_11f0e1fb;
  /* 11f0e181 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e184 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0e187 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0e18d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0e18f je 0x11f0e1fb */
  if (C.zf) goto L_11f0e1fb;
  /* 11f0e191 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e197 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f0e199 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e19c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0e19f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e1a3 jle 0x11f0e1fb */
  if ((C.zf||C.sf!=C.of)) goto L_11f0e1fb;
  /* 11f0e1a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e1a8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e1a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0e1af push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e1b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f0e1b6 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e1b7 call 0x11f0a680 */
  push32(0x11f0e1bcu); f_11f0a680();
  /* 11f0e1bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e1bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e1c2 jne 0x11f0e1e5 */
  if (!C.zf) goto L_11f0e1e5;
  /* 11f0e1c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0e1ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0e1d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0e1d2 je 0x11f0e1e3 */
  if (C.zf) goto L_11f0e1e3;
  /* 11f0e1d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0e1da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0e1dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11f0e1e3:;
  /* 11f0e1e3 jmp 0x11f0e1fb */
  goto L_11f0e1fb;
L_11f0e1e5:;
  /* 11f0e1e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0e1eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0e1ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f0e1f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f0e1fb:;
  /* 11f0e1fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e1fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e201 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f0e204 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0e206 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e209 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f0e210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e213 mov esp, ebp */
  ESP = (EBP);
  /* 11f0e215 pop ebp */
  EBP = (pop32());
  /* 11f0e216 ret  */
  ESPCHK(0x11f0e160u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e220 @ 0x11f0e220 (15 bytes, 7 insns) */
void f_11f0e220(void) {
  FTRACE(0x11f0e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e220 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e221 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e223 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0e225 call 0x11f0e230 */
  push32(0x11f0e22au); f_11f0e230();
  /* 11f0e22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e22d pop ebp */
  EBP = (pop32());
  /* 11f0e22e ret  */
  ESPCHK(0x11f0e220u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e230 @ 0x11f0e230 (319 bytes, 94 insns) */
void f_11f0e230(void) {
  FTRACE(0x11f0e230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e230 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e231 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e236 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0e23d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0e244 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0e246 call 0x11efb9c0 */
  push32(0x11f0e24bu); f_11efb9c0();
  /* 11f0e24b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e24e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0e255 jmp 0x11f0e260 */
  goto L_11f0e260;
L_11f0e257:;
  /* 11f0e257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e25a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e25d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f0e260:;
  /* 11f0e260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e263 cmp ecx, dword ptr [0x11f31dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f31dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e269 jge 0x11f0e353 */
  if ((C.sf==C.of)) goto L_11f0e353;
  /* 11f0e26f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e272 mov eax, dword ptr [0x11f30a7c] */
  EAX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e277 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e27b je 0x11f0e34e */
  if (C.zf) goto L_11f0e34e;
  /* 11f0e281 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e284 mov edx, dword ptr [0x11f30a7c] */
  EDX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e28a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0e28d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0e290 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0e296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0e298 je 0x11f0e34e */
  if (C.zf) goto L_11f0e34e;
  /* 11f0e29e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e2a1 mov eax, dword ptr [0x11f30a7c] */
  EAX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e2a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e2a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e2aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e2ad push edx */
  push32((uint32_t)(EDX));
  /* 11f0e2ae call 0x11f0ac30 */
  push32(0x11f0e2b3u); f_11f0ac30();
  /* 11f0e2b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e2b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e2b9 mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e2bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e2c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f0e2c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0e2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0e2cc je 0x11f0e335 */
  if (C.zf) goto L_11f0e335;
  /* 11f0e2ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e2d2 jne 0x11f0e2f9 */
  if (!C.zf) goto L_11f0e2f9;
  /* 11f0e2d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e2d7 mov edx, dword ptr [0x11f30a7c] */
  EDX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e2dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0e2e0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e2e1 call 0x11f0e110 */
  push32(0x11f0e2e6u); f_11f0e110();
  /* 11f0e2e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e2e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e2ec je 0x11f0e2f7 */
  if (C.zf) goto L_11f0e2f7;
  /* 11f0e2ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e2f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e2f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0e2f7:;
  /* 11f0e2f7 jmp 0x11f0e335 */
  goto L_11f0e335;
L_11f0e2f9:;
  /* 11f0e2f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e2fd jne 0x11f0e335 */
  if (!C.zf) goto L_11f0e335;
  /* 11f0e2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e302 mov eax, dword ptr [0x11f30a7c] */
  EAX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e307 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e30a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0e30d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0e310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0e312 je 0x11f0e335 */
  if (C.zf) goto L_11f0e335;
  /* 11f0e314 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e317 mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e31d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e320 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e321 call 0x11f0e110 */
  push32(0x11f0e326u); f_11f0e110();
  /* 11f0e326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e329 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e32c jne 0x11f0e335 */
  if (!C.zf) goto L_11f0e335;
  /* 11f0e32e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11f0e335:;
  /* 11f0e335 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e338 mov ecx, dword ptr [0x11f30a7c] */
  ECX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0e33e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e341 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e342 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e345 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e346 call 0x11f0aca0 */
  push32(0x11f0e34bu); f_11f0aca0();
  /* 11f0e34b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0e34e:;
  /* 11f0e34e jmp 0x11f0e257 */
  goto L_11f0e257;
L_11f0e353:;
  /* 11f0e353 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0e355 call 0x11efba60 */
  push32(0x11f0e35au); f_11efba60();
  /* 11f0e35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e35d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e361 jne 0x11f0e368 */
  if (!C.zf) goto L_11f0e368;
  /* 11f0e363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e366 jmp 0x11f0e36b */
  goto L_11f0e36b;
L_11f0e368:;
  /* 11f0e368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0e36b:;
  /* 11f0e36b mov esp, ebp */
  ESP = (EBP);
  /* 11f0e36d pop ebp */
  EBP = (pop32());
  /* 11f0e36e ret  */
  ESPCHK(0x11f0e230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e370 @ 0x11f0e370 (289 bytes, 97 insns) */
void f_11f0e370(void) {
  FTRACE(0x11f0e370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e370 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e371 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e376 push esi */
  push32((uint32_t)(ESI));
  /* 11f0e377 mov eax, dword ptr [0x11f2f330] */
  EAX = (r32((uint32_t)(0x11f2f330)));
  /* 11f0e37c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0e37f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0e386 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e38d jmp 0x11f0e398 */
  goto L_11f0e398;
L_11f0e38f:;
  /* 11f0e38f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e392 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e395 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f0e398:;
  /* 11f0e398 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e39c jae 0x11f0e3d1 */
  if (!C.cf) goto L_11f0e3d1;
  /* 11f0e39e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e3a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e3a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e3a8 call 0x11f00050 */
  push32(0x11f0e3adu); f_11f00050();
  /* 11f0e3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e3b0 mov esi, eax */
  ESI = (EAX);
  /* 11f0e3b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e3b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e3b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11f0e3bc push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e3bd call 0x11f00050 */
  push32(0x11f0e3c2u); f_11f00050();
  /* 11f0e3c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e3c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e3c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11f0e3cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0e3cf jmp 0x11f0e38f */
  goto L_11f0e38f;
L_11f0e3d1:;
  /* 11f0e3d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e3d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e3d7 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e3d8 call 0x11efbaa0 */
  push32(0x11f0e3ddu); f_11efbaa0();
  /* 11f0e3dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e3e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0e3e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e3e7 je 0x11f0e489 */
  if (C.zf) goto L_11f0e489;
  /* 11f0e3ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e3f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e3f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e3fa jmp 0x11f0e405 */
  goto L_11f0e405;
L_11f0e3fc:;
  /* 11f0e3fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e3ff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e402 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0e405:;
  /* 11f0e405 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e409 jae 0x11f0e47a */
  if (!C.cf) goto L_11f0e47a;
  /* 11f0e40b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e40e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11f0e411 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e414 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e417 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e41a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e41d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e420 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e423 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e424 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e427 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e428 call 0x11f001d0 */
  push32(0x11f0e42du); f_11f001d0();
  /* 11f0e42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e430 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e431 call 0x11f00050 */
  push32(0x11f0e436u); f_11f00050();
  /* 11f0e436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e439 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e43c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e43e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e441 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e444 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11f0e447 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e44d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e450 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e453 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e456 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11f0e45a push eax */
  push32((uint32_t)(EAX));
  /* 11f0e45b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e45e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e45f call 0x11f001d0 */
  push32(0x11f0e464u); f_11f001d0();
  /* 11f0e464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e467 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e468 call 0x11f00050 */
  push32(0x11f0e46du); f_11f00050();
  /* 11f0e46d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e470 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e473 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e475 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e478 jmp 0x11f0e3fc */
  goto L_11f0e3fc;
L_11f0e47a:;
  /* 11f0e47a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e47d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f0e480 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e483 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e486 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f0e489:;
  /* 11f0e489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e48c pop esi */
  ESI = (pop32());
  /* 11f0e48d mov esp, ebp */
  ESP = (EBP);
  /* 11f0e48f pop ebp */
  EBP = (pop32());
  /* 11f0e490 ret  */
  ESPCHK(0x11f0e370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e4a0 @ 0x11f0e4a0 (291 bytes, 97 insns) */
void f_11f0e4a0(void) {
  FTRACE(0x11f0e4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e4a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e4a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e4a6 push esi */
  push32((uint32_t)(ESI));
  /* 11f0e4a7 mov eax, dword ptr [0x11f2f330] */
  EAX = (r32((uint32_t)(0x11f2f330)));
  /* 11f0e4ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0e4af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0e4b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e4bd jmp 0x11f0e4c8 */
  goto L_11f0e4c8;
L_11f0e4bf:;
  /* 11f0e4bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e4c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e4c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f0e4c8:;
  /* 11f0e4c8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e4cc jae 0x11f0e502 */
  if (!C.cf) goto L_11f0e502;
  /* 11f0e4ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e4d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e4d4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11f0e4d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e4d9 call 0x11f00050 */
  push32(0x11f0e4deu); f_11f00050();
  /* 11f0e4de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e4e1 mov esi, eax */
  ESI = (EAX);
  /* 11f0e4e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e4e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e4e9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11f0e4ed push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e4ee call 0x11f00050 */
  push32(0x11f0e4f3u); f_11f00050();
  /* 11f0e4f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e4f6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e4f9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11f0e4fd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0e500 jmp 0x11f0e4bf */
  goto L_11f0e4bf;
L_11f0e502:;
  /* 11f0e502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e505 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e508 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e509 call 0x11efbaa0 */
  push32(0x11f0e50eu); f_11efbaa0();
  /* 11f0e50e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e511 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0e514 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e518 je 0x11f0e5bb */
  if (C.zf) goto L_11f0e5bb;
  /* 11f0e51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e521 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e524 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e52b jmp 0x11f0e536 */
  goto L_11f0e536;
L_11f0e52d:;
  /* 11f0e52d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e530 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e533 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0e536:;
  /* 11f0e536 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e53a jae 0x11f0e5ac */
  if (!C.cf) goto L_11f0e5ac;
  /* 11f0e53c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e53f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11f0e542 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e548 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e54b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e54e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e551 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11f0e555 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e556 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e559 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e55a call 0x11f001d0 */
  push32(0x11f0e55fu); f_11f001d0();
  /* 11f0e55f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e562 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e563 call 0x11f00050 */
  push32(0x11f0e568u); f_11f00050();
  /* 11f0e568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e56b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e56e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e570 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0e573 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e576 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11f0e579 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e57c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e57f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e582 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e585 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e588 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11f0e58c push eax */
  push32((uint32_t)(EAX));
  /* 11f0e58d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e590 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e591 call 0x11f001d0 */
  push32(0x11f0e596u); f_11f001d0();
  /* 11f0e596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e599 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e59a call 0x11f00050 */
  push32(0x11f0e59fu); f_11f00050();
  /* 11f0e59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e5a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e5a5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e5a7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e5aa jmp 0x11f0e52d */
  goto L_11f0e52d;
L_11f0e5ac:;
  /* 11f0e5ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e5af mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f0e5b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e5b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e5b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f0e5bb:;
  /* 11f0e5bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e5be pop esi */
  ESI = (pop32());
  /* 11f0e5bf mov esp, ebp */
  ESP = (EBP);
  /* 11f0e5c1 pop ebp */
  EBP = (pop32());
  /* 11f0e5c2 ret  */
  ESPCHK(0x11f0e4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e5d0 @ 0x11f0e5d0 (878 bytes, 273 insns) */
void f_11f0e5d0(void) {
  FTRACE(0x11f0e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e5d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e5d6 push esi */
  push32((uint32_t)(ESI));
  /* 11f0e5d7 mov eax, dword ptr [0x11f2f330] */
  EAX = (r32((uint32_t)(0x11f2f330)));
  /* 11f0e5dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0e5df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0e5e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e5ed jmp 0x11f0e5f8 */
  goto L_11f0e5f8;
L_11f0e5ef:;
  /* 11f0e5ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e5f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e5f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f0e5f8:;
  /* 11f0e5f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e5fc jae 0x11f0e631 */
  if (!C.cf) goto L_11f0e631;
  /* 11f0e5fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e601 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e604 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f0e607 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e608 call 0x11f00050 */
  push32(0x11f0e60du); f_11f00050();
  /* 11f0e60d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e610 mov esi, eax */
  ESI = (EAX);
  /* 11f0e612 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e615 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e618 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11f0e61c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e61d call 0x11f00050 */
  push32(0x11f0e622u); f_11f00050();
  /* 11f0e622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e625 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e628 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11f0e62c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0e62f jmp 0x11f0e5ef */
  goto L_11f0e5ef;
L_11f0e631:;
  /* 11f0e631 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e638 jmp 0x11f0e643 */
  goto L_11f0e643;
L_11f0e63a:;
  /* 11f0e63a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e63d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e640 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11f0e643:;
  /* 11f0e643 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e647 jae 0x11f0e67d */
  if (!C.cf) goto L_11f0e67d;
  /* 11f0e649 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e64c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e64f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11f0e653 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e654 call 0x11f00050 */
  push32(0x11f0e659u); f_11f00050();
  /* 11f0e659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e65c mov esi, eax */
  ESI = (EAX);
  /* 11f0e65e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e661 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e664 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11f0e668 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e669 call 0x11f00050 */
  push32(0x11f0e66eu); f_11f00050();
  /* 11f0e66e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e671 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e674 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11f0e678 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0e67b jmp 0x11f0e63a */
  goto L_11f0e63a;
L_11f0e67d:;
  /* 11f0e67d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e680 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11f0e686 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e687 call 0x11f00050 */
  push32(0x11f0e68cu); f_11f00050();
  /* 11f0e68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e68f mov esi, eax */
  ESI = (EAX);
  /* 11f0e691 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e694 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11f0e69a push edx */
  push32((uint32_t)(EDX));
  /* 11f0e69b call 0x11f00050 */
  push32(0x11f0e6a0u); f_11f00050();
  /* 11f0e6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e6a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e6a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11f0e6aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0e6ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e6b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11f0e6b6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e6b7 call 0x11f00050 */
  push32(0x11f0e6bcu); f_11f00050();
  /* 11f0e6bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e6bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e6c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e6c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0e6c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e6cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11f0e6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e6d3 call 0x11f00050 */
  push32(0x11f0e6d8u); f_11f00050();
  /* 11f0e6d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e6db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e6de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11f0e6e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0e6e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e6e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11f0e6ee push edx */
  push32((uint32_t)(EDX));
  /* 11f0e6ef call 0x11f00050 */
  push32(0x11f0e6f4u); f_11f00050();
  /* 11f0e6f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e6f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e6fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e6fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0e701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0e704 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e709 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e70a call 0x11efbaa0 */
  push32(0x11f0e70fu); f_11efbaa0();
  /* 11f0e70f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e712 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0e715 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e719 je 0x11f0e936 */
  if (C.zf) goto L_11f0e936;
  /* 11f0e71f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e722 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f0e725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e728 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e72e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e731 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11f0e736 mov eax, dword ptr [0x11f2f330] */
  EAX = (r32((uint32_t)(0x11f2f330)));
  /* 11f0e73b push eax */
  push32((uint32_t)(EAX));
  /* 11f0e73c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e73f push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e740 call 0x11f05b60 */
  push32(0x11f0e745u); f_11f05b60();
  /* 11f0e745 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e748 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e74f jmp 0x11f0e75a */
  goto L_11f0e75a;
L_11f0e751:;
  /* 11f0e751 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e754 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e757 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0e75a:;
  /* 11f0e75a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e75e jae 0x11f0e7ce */
  if (!C.cf) goto L_11f0e7ce;
  /* 11f0e760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e763 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e766 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e769 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11f0e76c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e76f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e772 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0e775 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e776 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e779 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e77a call 0x11f001d0 */
  push32(0x11f0e77fu); f_11f001d0();
  /* 11f0e77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e782 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e783 call 0x11f00050 */
  push32(0x11f0e788u); f_11f00050();
  /* 11f0e788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e78b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e78e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e792 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e795 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e798 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e79b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e79e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11f0e7a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e7a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e7a8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11f0e7ac push edx */
  push32((uint32_t)(EDX));
  /* 11f0e7ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e7b0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e7b1 call 0x11f001d0 */
  push32(0x11f0e7b6u); f_11f001d0();
  /* 11f0e7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e7b9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e7ba call 0x11f00050 */
  push32(0x11f0e7bfu); f_11f00050();
  /* 11f0e7bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e7c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e7c5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e7c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e7cc jmp 0x11f0e751 */
  goto L_11f0e751;
L_11f0e7ce:;
  /* 11f0e7ce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0e7d5 jmp 0x11f0e7e0 */
  goto L_11f0e7e0;
L_11f0e7d7:;
  /* 11f0e7d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e7da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e7dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11f0e7e0:;
  /* 11f0e7e0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e7e4 jae 0x11f0e856 */
  if (!C.cf) goto L_11f0e856;
  /* 11f0e7e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e7e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e7ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e7ef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11f0e7f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e7f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e7f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11f0e7fd push eax */
  push32((uint32_t)(EAX));
  /* 11f0e7fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e801 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e802 call 0x11f001d0 */
  push32(0x11f0e807u); f_11f001d0();
  /* 11f0e807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e80a push eax */
  push32((uint32_t)(EAX));
  /* 11f0e80b call 0x11f00050 */
  push32(0x11f0e810u); f_11f00050();
  /* 11f0e810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e816 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11f0e81a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e81d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e820 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e823 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e826 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11f0e82a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e82d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e830 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11f0e834 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e835 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e838 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e839 call 0x11f001d0 */
  push32(0x11f0e83eu); f_11f001d0();
  /* 11f0e83e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e841 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e842 call 0x11f00050 */
  push32(0x11f0e847u); f_11f00050();
  /* 11f0e847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e84a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e84d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11f0e851 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e854 jmp 0x11f0e7d7 */
  goto L_11f0e7d7;
L_11f0e856:;
  /* 11f0e856 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e859 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e85c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11f0e862 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e865 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11f0e86b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e86c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e86f push edx */
  push32((uint32_t)(EDX));
  /* 11f0e870 call 0x11f001d0 */
  push32(0x11f0e875u); f_11f001d0();
  /* 11f0e875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e878 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e879 call 0x11f00050 */
  push32(0x11f0e87eu); f_11f00050();
  /* 11f0e87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e884 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e888 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e88b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e88e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e891 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11f0e897 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e89a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11f0e8a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e8a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e8a5 call 0x11f001d0 */
  push32(0x11f0e8aau); f_11f001d0();
  /* 11f0e8aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e8ad push eax */
  push32((uint32_t)(EAX));
  /* 11f0e8ae call 0x11f00050 */
  push32(0x11f0e8b3u); f_11f00050();
  /* 11f0e8b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e8b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11f0e8bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e8c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e8c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11f0e8cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e8cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11f0e8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e8d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8d9 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e8da call 0x11f001d0 */
  push32(0x11f0e8dfu); f_11f001d0();
  /* 11f0e8df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e8e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e8e3 call 0x11f00050 */
  push32(0x11f0e8e8u); f_11f00050();
  /* 11f0e8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e8eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11f0e8f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0e8f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e8f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e8fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11f0e901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0e904 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11f0e90a push eax */
  push32((uint32_t)(EAX));
  /* 11f0e90b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e90e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e90f call 0x11f001d0 */
  push32(0x11f0e914u); f_11f001d0();
  /* 11f0e914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e917 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e918 call 0x11f00050 */
  push32(0x11f0e91du); f_11f00050();
  /* 11f0e91d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e920 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e923 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11f0e927 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0e92a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0e92d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0e930 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11f0e936:;
  /* 11f0e936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0e939 pop esi */
  ESI = (pop32());
  /* 11f0e93a mov esp, ebp */
  ESP = (EBP);
  /* 11f0e93c pop ebp */
  EBP = (pop32());
  /* 11f0e93d ret  */
  ESPCHK(0x11f0e5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e940 @ 0x11f0e940 (31 bytes, 15 insns) */
void f_11f0e940(void) {
  FTRACE(0x11f0e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e940 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e941 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0e945 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0e948 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e949 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0e94c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0e94d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0e950 push edx */
  push32((uint32_t)(EDX));
  /* 11f0e951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0e954 push eax */
  push32((uint32_t)(EAX));
  /* 11f0e955 call 0x11f0e960 */
  push32(0x11f0e95au); f_11f0e960();
  /* 11f0e95a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e95d pop ebp */
  EBP = (pop32());
  /* 11f0e95e ret  */
  ESPCHK(0x11f0e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e960 @ 0x11f0e960 (393 bytes, 123 insns) */
void f_11f0e960(void) {
  FTRACE(0x11f0e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0e960 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0e961 mov ebp, esp */
  EBP = (ESP);
  /* 11f0e963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0e966 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e96a jne 0x11f0e976 */
  if (!C.zf) goto L_11f0e976;
  /* 11f0e96c mov eax, dword ptr [0x11f2f330] */
  EAX = (r32((uint32_t)(0x11f2f330)));
  /* 11f0e971 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0e974 jmp 0x11f0e97c */
  goto L_11f0e97c;
L_11f0e976:;
  /* 11f0e976 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0e979 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f0e97c:;
  /* 11f0e97c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0e97f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0e982 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0e985 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0e988 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0e98d call dword ptr [0x11f33428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33428))), 0x11f0e993u);
  /* 11f0e993 cmp dword ptr [0x11f31dc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e99a je 0x11f0e9ba */
  if (C.zf) goto L_11f0e9ba;
  /* 11f0e99c push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0e9a1 call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f0e9a7u);
  /* 11f0e9a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0e9a9 call 0x11efb9c0 */
  push32(0x11f0e9aeu); f_11efb9c0();
  /* 11f0e9ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e9b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f0e9b8 jmp 0x11f0e9c1 */
  goto L_11f0e9c1;
L_11f0e9ba:;
  /* 11f0e9ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11f0e9c1:;
  /* 11f0e9c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0e9c5 jbe 0x11f0eab2 */
  if ((C.cf||C.zf)) goto L_11f0eab2;
  /* 11f0e9cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0e9ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0e9d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11f0e9d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0e9d7 je 0x11f0e9e1 */
  if (C.zf) goto L_11f0e9e1;
  /* 11f0e9d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0e9dd je 0x11f0e9e6 */
  if (C.zf) goto L_11f0e9e6;
  /* 11f0e9df jmp 0x11f0ea40 */
  goto L_11f0ea40;
L_11f0e9e1:;
  /* 11f0e9e1 jmp 0x11f0eab2 */
  goto L_11f0eab2;
L_11f0e9e6:;
  /* 11f0e9e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0e9e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0e9ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11f0e9ef mov dword ptr [0x11f30a68], 0 */
  w32((uint32_t)(0x11f30a68), (0x0u));
  /* 11f0e9f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0e9fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0e9ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ea02 jne 0x11f0ea17 */
  if (!C.zf) goto L_11f0ea17;
  /* 11f0ea04 mov dword ptr [0x11f30a68], 1 */
  w32((uint32_t)(0x11f30a68), (0x1u));
  /* 11f0ea0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea14 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11f0ea17:;
  /* 11f0ea17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ea1a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ea1b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f0ea1e push edx */
  push32((uint32_t)(EDX));
  /* 11f0ea1f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f0ea22 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ea23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ea27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0ea2c push eax */
  push32((uint32_t)(EAX));
  /* 11f0ea2d call 0x11f0eaf0 */
  push32(0x11f0ea32u); f_11f0eaf0();
  /* 11f0ea32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f0ea3e jmp 0x11f0eaad */
  goto L_11f0eaad;
L_11f0ea40:;
  /* 11f0ea40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ea45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0ea47 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0ea4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ea4f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0ea53 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ea59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0ea5b je 0x11f0ea88 */
  if (C.zf) goto L_11f0ea88;
  /* 11f0ea5d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ea61 jbe 0x11f0ea88 */
  if ((C.cf||C.zf)) goto L_11f0ea88;
  /* 11f0ea63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ea66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea69 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0ea6b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0ea6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ea70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea73 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0ea76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f0ea7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0ea82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ea85 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f0ea88:;
  /* 11f0ea88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ea8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0ea90 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0ea92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ea95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ea98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0ea9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ea9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eaa1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f0eaa4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0eaa7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0eaaa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f0eaad:;
  /* 11f0eaad jmp 0x11f0e9c1 */
  goto L_11f0e9c1;
L_11f0eab2:;
  /* 11f0eab2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0eab6 je 0x11f0eac4 */
  if (C.zf) goto L_11f0eac4;
  /* 11f0eab8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0eaba call 0x11efba60 */
  push32(0x11f0eabfu); f_11efba60();
  /* 11f0eabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eac2 jmp 0x11f0eacf */
  goto L_11f0eacf;
L_11f0eac4:;
  /* 11f0eac4 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0eac9 call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f0eacfu);
L_11f0eacf:;
  /* 11f0eacf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ead3 jbe 0x11f0eae3 */
  if ((C.cf||C.zf)) goto L_11f0eae3;
  /* 11f0ead5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ead8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f0eadb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eade sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0eae1 jmp 0x11f0eae5 */
  goto L_11f0eae5;
L_11f0eae3:;
  /* 11f0eae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0eae5:;
  /* 11f0eae5 mov esp, ebp */
  ESP = (EBP);
  /* 11f0eae7 pop ebp */
  EBP = (pop32());
  /* 11f0eae8 ret  */
  ESPCHK(0x11f0e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eaf0 @ 0x11f0eaf0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11f0eaf0(void) {
  FTRACE(0x11f0eaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0eaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0eaf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0eaf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0eaf6 push esi */
  push32((uint32_t)(ESI));
  /* 11f0eaf7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11f0eafb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0eafe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0eb01 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0eb04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0eb07 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0eb0b ja 0x11f0f058 */
  if ((!C.cf&&!C.zf)) goto L_11f0f058;
  /* 11f0eb11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0eb14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0eb16 mov dl, byte ptr [eax + 0x11f0f0b9] */
  DL = (r8((uint32_t)(EAX + 0x11f0f0b9)));
  /* 11f0eb1c jmp dword ptr [edx*4 + 0x11f0f05d] */
  switch (EDX) {
    case 0: goto L_11f0f036;
    case 1: goto L_11f0eb45;
    case 2: goto L_11f0eb8b;
    case 3: goto L_11f0ecd8;
    case 4: goto L_11f0ed00;
    case 5: goto L_11f0ed9f;
    case 6: goto L_11f0ee0b;
    case 7: goto L_11f0ee34;
    case 8: goto L_11f0ee75;
    case 9: goto L_11f0ef57;
    case 10: goto L_11f0efbe;
    case 11: goto L_11f0f00b;
    case 12: goto L_11f0eb23;
    case 13: goto L_11f0eb68;
    case 14: goto L_11f0ebae;
    case 15: goto L_11f0ecae;
    case 16: goto L_11f0ed45;
    case 17: goto L_11f0ed72;
    case 18: goto L_11f0edc7;
    case 19: goto L_11f0ee4b;
    case 20: goto L_11f0eef9;
    case 21: goto L_11f0ef88;
    case 22: goto L_11f0f058;
    default: x86_unimpl("switch@0x11f0eb1c out of table"); return;
  }
L_11f0eb23:;
  /* 11f0eb23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eb26 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0eb27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0eb2a push edx */
  push32((uint32_t)(EDX));
  /* 11f0eb2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eb2e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11f0eb31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0eb34 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0eb37 push eax */
  push32((uint32_t)(EAX));
  /* 11f0eb38 call 0x11f0f110 */
  push32(0x11f0eb3du); f_11f0f110();
  /* 11f0eb3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eb40 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0eb45:;
  /* 11f0eb45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eb48 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0eb49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0eb4c push edx */
  push32((uint32_t)(EDX));
  /* 11f0eb4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eb50 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11f0eb53 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0eb56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11f0eb5a push eax */
  push32((uint32_t)(EAX));
  /* 11f0eb5b call 0x11f0f110 */
  push32(0x11f0eb60u); f_11f0f110();
  /* 11f0eb60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eb63 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0eb68:;
  /* 11f0eb68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eb6b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0eb6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0eb6f push edx */
  push32((uint32_t)(EDX));
  /* 11f0eb70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eb73 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0eb76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0eb79 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11f0eb7d push eax */
  push32((uint32_t)(EAX));
  /* 11f0eb7e call 0x11f0f110 */
  push32(0x11f0eb83u); f_11f0f110();
  /* 11f0eb83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eb86 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0eb8b:;
  /* 11f0eb8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eb8e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0eb8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0eb92 push edx */
  push32((uint32_t)(EDX));
  /* 11f0eb93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eb96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0eb99 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0eb9c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11f0eba0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0eba1 call 0x11f0f110 */
  push32(0x11f0eba6u); f_11f0f110();
  /* 11f0eba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eba9 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ebae:;
  /* 11f0ebae cmp dword ptr [0x11f30a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ebb5 je 0x11f0ec36 */
  if (C.zf) goto L_11f0ec36;
  /* 11f0ebb7 mov dword ptr [0x11f30a68], 0 */
  w32((uint32_t)(0x11f30a68), (0x0u));
  /* 11f0ebc1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ebc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ebc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ebc8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ebc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ebcc push eax */
  push32((uint32_t)(EAX));
  /* 11f0ebcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ebd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ebd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ebd4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11f0ebda push eax */
  push32((uint32_t)(EAX));
  /* 11f0ebdb call 0x11f0f2c0 */
  push32(0x11f0ebe0u); f_11f0f2c0();
  /* 11f0ebe0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ebe3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ebe6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ebe9 jne 0x11f0ebf0 */
  if (!C.zf) goto L_11f0ebf0;
  /* 11f0ebeb jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ebf0:;
  /* 11f0ebf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ebf3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0ebf5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11f0ebf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ebfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0ebfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ec00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0ec05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0ec0a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ec0d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0ec12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec15 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec19 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ec1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec1d push eax */
  push32((uint32_t)(EAX));
  /* 11f0ec1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ec21 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec25 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11f0ec2b push eax */
  push32((uint32_t)(EAX));
  /* 11f0ec2c call 0x11f0f2c0 */
  push32(0x11f0ec31u); f_11f0f2c0();
  /* 11f0ec31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ec34 jmp 0x11f0eca9 */
  goto L_11f0eca9;
L_11f0ec36:;
  /* 11f0ec36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec39 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec3d push edx */
  push32((uint32_t)(EDX));
  /* 11f0ec3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec41 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ec42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ec45 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec49 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11f0ec4f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ec50 call 0x11f0f2c0 */
  push32(0x11f0ec55u); f_11f0f2c0();
  /* 11f0ec55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ec58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec5b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ec5e jne 0x11f0ec65 */
  if (!C.zf) goto L_11f0ec65;
  /* 11f0ec60 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ec65:;
  /* 11f0ec65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0ec6a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11f0ec6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0ec72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ec75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec78 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0ec7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0ec7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ec82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0ec87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec8a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ec8e push edx */
  push32((uint32_t)(EDX));
  /* 11f0ec8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ec92 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ec93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ec96 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ec97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ec9a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11f0eca0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0eca1 call 0x11f0f2c0 */
  push32(0x11f0eca6u); f_11f0f2c0();
  /* 11f0eca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0eca9:;
  /* 11f0eca9 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ecae:;
  /* 11f0ecae mov ecx, dword ptr [0x11f30a68] */
  ECX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ecb4 mov dword ptr [0x11f30a78], ecx */
  w32((uint32_t)(0x11f30a78), (ECX));
  /* 11f0ecba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ecbd push edx */
  push32((uint32_t)(EDX));
  /* 11f0ecbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ecc1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ecc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ecc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ecc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0ecca push edx */
  push32((uint32_t)(EDX));
  /* 11f0eccb call 0x11f0f160 */
  push32(0x11f0ecd0u); f_11f0f160();
  /* 11f0ecd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ecd3 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ecd8:;
  /* 11f0ecd8 mov eax, dword ptr [0x11f30a68] */
  EAX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ecdd mov dword ptr [0x11f30a78], eax */
  w32((uint32_t)(0x11f30a78), (EAX));
  /* 11f0ece2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ece5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ece6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ece9 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ecea push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ecec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ecef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0ecf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ecf3 call 0x11f0f160 */
  push32(0x11f0ecf8u); f_11f0f160();
  /* 11f0ecf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ecfb jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ed00:;
  /* 11f0ed00 mov edx, dword ptr [0x11f30a68] */
  EDX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ed06 mov dword ptr [0x11f30a78], edx */
  w32((uint32_t)(0x11f30a78), (EDX));
  /* 11f0ed0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ed0f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0ed12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0ed13 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11f0ed18 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0ed1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0ed1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ed21 jne 0x11f0ed2a */
  if (!C.zf) goto L_11f0ed2a;
  /* 11f0ed23 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11f0ed2a:;
  /* 11f0ed2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ed2d push edx */
  push32((uint32_t)(EDX));
  /* 11f0ed2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ed31 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ed32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ed34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ed37 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ed38 call 0x11f0f160 */
  push32(0x11f0ed3du); f_11f0f160();
  /* 11f0ed3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ed40 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ed45:;
  /* 11f0ed45 mov edx, dword ptr [0x11f30a68] */
  EDX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ed4b mov dword ptr [0x11f30a78], edx */
  w32((uint32_t)(0x11f30a78), (EDX));
  /* 11f0ed51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ed54 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ed55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ed58 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ed59 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f0ed5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ed5e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f0ed61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ed64 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ed65 call 0x11f0f160 */
  push32(0x11f0ed6au); f_11f0f160();
  /* 11f0ed6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ed6d jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ed72:;
  /* 11f0ed72 mov ecx, dword ptr [0x11f30a68] */
  ECX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ed78 mov dword ptr [0x11f30a78], ecx */
  w32((uint32_t)(0x11f30a78), (ECX));
  /* 11f0ed7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ed81 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ed82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ed85 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ed86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ed88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ed8b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f0ed8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ed91 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ed92 call 0x11f0f160 */
  push32(0x11f0ed97u); f_11f0f160();
  /* 11f0ed97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ed9a jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ed9f:;
  /* 11f0ed9f mov eax, dword ptr [0x11f30a68] */
  EAX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0eda4 mov dword ptr [0x11f30a78], eax */
  w32((uint32_t)(0x11f30a78), (EAX));
  /* 11f0eda9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0edac push ecx */
  push32((uint32_t)(ECX));
  /* 11f0edad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0edb0 push edx */
  push32((uint32_t)(EDX));
  /* 11f0edb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0edb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0edb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0edb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0edba call 0x11f0f160 */
  push32(0x11f0edbfu); f_11f0f160();
  /* 11f0edbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0edc2 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0edc7:;
  /* 11f0edc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0edca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0edce jg 0x11f0edec */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0edec;
  /* 11f0edd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0edd3 push eax */
  push32((uint32_t)(EAX));
  /* 11f0edd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0edd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0edd8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0eddb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11f0ede1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ede2 call 0x11f0f110 */
  push32(0x11f0ede7u); f_11f0f110();
  /* 11f0ede7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0edea jmp 0x11f0ee06 */
  goto L_11f0ee06;
L_11f0edec:;
  /* 11f0edec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0edef push ecx */
  push32((uint32_t)(ECX));
  /* 11f0edf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0edf3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0edf4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0edf7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11f0edfd push ecx */
  push32((uint32_t)(ECX));
  /* 11f0edfe call 0x11f0f110 */
  push32(0x11f0ee03u); f_11f0f110();
  /* 11f0ee03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0ee06:;
  /* 11f0ee06 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ee0b:;
  /* 11f0ee0b mov edx, dword ptr [0x11f30a68] */
  EDX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ee11 mov dword ptr [0x11f30a78], edx */
  w32((uint32_t)(0x11f30a78), (EDX));
  /* 11f0ee17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ee1a push eax */
  push32((uint32_t)(EAX));
  /* 11f0ee1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ee1e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ee1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ee21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ee24 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0ee26 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ee27 call 0x11f0f160 */
  push32(0x11f0ee2cu); f_11f0f160();
  /* 11f0ee2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ee2f jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ee34:;
  /* 11f0ee34 mov ecx, dword ptr [0x11f30a68] */
  ECX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ee3a mov dword ptr [0x11f30a78], ecx */
  w32((uint32_t)(0x11f30a78), (ECX));
  /* 11f0ee40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ee43 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11f0ee46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0ee49 jmp 0x11f0ee9d */
  goto L_11f0ee9d;
L_11f0ee4b:;
  /* 11f0ee4b mov ecx, dword ptr [0x11f30a68] */
  ECX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ee51 mov dword ptr [0x11f30a78], ecx */
  w32((uint32_t)(0x11f30a78), (ECX));
  /* 11f0ee57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ee5a push edx */
  push32((uint32_t)(EDX));
  /* 11f0ee5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ee5e push eax */
  push32((uint32_t)(EAX));
  /* 11f0ee5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ee61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ee64 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f0ee67 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ee68 call 0x11f0f160 */
  push32(0x11f0ee6du); f_11f0f160();
  /* 11f0ee6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ee70 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ee75:;
  /* 11f0ee75 mov eax, dword ptr [0x11f30a68] */
  EAX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ee7a mov dword ptr [0x11f30a78], eax */
  w32((uint32_t)(0x11f30a78), (EAX));
  /* 11f0ee7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ee82 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ee86 jne 0x11f0ee91 */
  if (!C.zf) goto L_11f0ee91;
  /* 11f0ee88 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11f0ee8f jmp 0x11f0ee9d */
  goto L_11f0ee9d;
L_11f0ee91:;
  /* 11f0ee91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ee94 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11f0ee97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ee9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f0ee9d:;
  /* 11f0ee9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eea0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f0eea3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0eea6 jge 0x11f0eeb1 */
  if ((C.sf==C.of)) goto L_11f0eeb1;
  /* 11f0eea8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0eeaf jmp 0x11f0eede */
  goto L_11f0eede;
L_11f0eeb1:;
  /* 11f0eeb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eeb4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f0eeb7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0eeb8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11f0eebd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0eebf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0eec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0eec5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f0eec8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0eec9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11f0eece idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0eed0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0eed3 jl 0x11f0eede */
  if ((C.sf!=C.of)) goto L_11f0eede;
  /* 11f0eed5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0eed8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eedb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0eede:;
  /* 11f0eede mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eee1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0eee2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0eee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0eee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0eee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0eeeb push edx */
  push32((uint32_t)(EDX));
  /* 11f0eeec call 0x11f0f160 */
  push32(0x11f0eef1u); f_11f0f160();
  /* 11f0eef1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eef4 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0eef9:;
  /* 11f0eef9 cmp dword ptr [0x11f30a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ef00 je 0x11f0ef30 */
  if (C.zf) goto L_11f0ef30;
  /* 11f0ef02 mov dword ptr [0x11f30a68], 0 */
  w32((uint32_t)(0x11f30a68), (0x0u));
  /* 11f0ef0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef0f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ef13 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ef14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ef17 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ef1b push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef1c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef1f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11f0ef25 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef26 call 0x11f0f2c0 */
  push32(0x11f0ef2bu); f_11f0f2c0();
  /* 11f0ef2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ef2e jmp 0x11f0ef52 */
  goto L_11f0ef52;
L_11f0ef30:;
  /* 11f0ef30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef33 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ef37 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ef38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ef3b push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ef3f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef43 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11f0ef49 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef4a call 0x11f0f2c0 */
  push32(0x11f0ef4fu); f_11f0f2c0();
  /* 11f0ef4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0ef52:;
  /* 11f0ef52 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ef57:;
  /* 11f0ef57 mov dword ptr [0x11f30a68], 0 */
  w32((uint32_t)(0x11f30a68), (0x0u));
  /* 11f0ef61 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef64 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ef68 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ef69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ef6c push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ef70 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ef71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ef74 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11f0ef7a push edx */
  push32((uint32_t)(EDX));
  /* 11f0ef7b call 0x11f0f2c0 */
  push32(0x11f0ef80u); f_11f0f2c0();
  /* 11f0ef80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ef83 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0ef88:;
  /* 11f0ef88 mov eax, dword ptr [0x11f30a68] */
  EAX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0ef8d mov dword ptr [0x11f30a78], eax */
  w32((uint32_t)(0x11f30a78), (EAX));
  /* 11f0ef92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ef95 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11f0ef98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0ef99 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11f0ef9e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0efa0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0efa3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0efa6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0efa7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0efaa push eax */
  push32((uint32_t)(EAX));
  /* 11f0efab push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0efad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0efb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0efb1 call 0x11f0f160 */
  push32(0x11f0efb6u); f_11f0f160();
  /* 11f0efb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0efb9 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0efbe:;
  /* 11f0efbe mov edx, dword ptr [0x11f30a68] */
  EDX = (r32((uint32_t)(0x11f30a68)));
  /* 11f0efc4 mov dword ptr [0x11f30a78], edx */
  w32((uint32_t)(0x11f30a78), (EDX));
  /* 11f0efca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0efcd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f0efd0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0efd1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11f0efd6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0efd8 mov ecx, eax */
  ECX = (EAX);
  /* 11f0efda add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0efdd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0efe0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0efe3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f0efe6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0efe7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11f0efec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0efee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0eff0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0eff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0eff6 push eax */
  push32((uint32_t)(EAX));
  /* 11f0eff7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0effa push ecx */
  push32((uint32_t)(ECX));
  /* 11f0effb push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0effd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f000 push edx */
  push32((uint32_t)(EDX));
  /* 11f0f001 call 0x11f0f160 */
  push32(0x11f0f006u); f_11f0f160();
  /* 11f0f006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f009 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0f00b:;
  /* 11f0f00b call 0x11f04a10 */
  push32(0x11f0f010u); f_11f04a10();
  /* 11f0f010 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f013 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f014 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f017 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f01b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f01d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f021 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11f0f024 mov ecx, dword ptr [eax*4 + 0x11f2e3c4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2e3c4)));
  /* 11f0f02b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f02c call 0x11f0f110 */
  push32(0x11f0f031u); f_11f0f110();
  /* 11f0f031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f034 jmp 0x11f0f058 */
  goto L_11f0f058;
L_11f0f036:;
  /* 11f0f036 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f039 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f03b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11f0f03e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f043 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f046 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f049 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0f04b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f04e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f050 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f053 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f056 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f0f058:;
  /* 11f0f058 pop esi */
  ESI = (pop32());
  /* 11f0f059 mov esp, ebp */
  ESP = (EBP);
  /* 11f0f05b pop ebp */
  EBP = (pop32());
  /* 11f0f05c ret  */
  ESPCHK(0x11f0eaf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11f0f110 (72 bytes, 30 insns) */
void f_11f0f110(void) {
  FTRACE(0x11f0f110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0f110 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0f111 mov ebp, esp */
  EBP = (ESP);
L_11f0f113:;
  /* 11f0f113 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f116 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f119 je 0x11f0f156 */
  if (C.zf) goto L_11f0f156;
  /* 11f0f11b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f11e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0f121 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0f123 je 0x11f0f156 */
  if (C.zf) goto L_11f0f156;
  /* 11f0f125 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f128 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f12a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f12d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f12f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0f131 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f134 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f13c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0f13e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f141 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f144 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0f147 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f14a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f14c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f14f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f152 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0f154 jmp 0x11f0f113 */
  goto L_11f0f113;
L_11f0f156:;
  /* 11f0f156 pop ebp */
  EBP = (pop32());
  /* 11f0f157 ret  */
  ESPCHK(0x11f0f110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f160 @ 0x11f0f160 (173 bytes, 64 insns) */
void f_11f0f160(void) {
  FTRACE(0x11f0f160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0f160 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0f161 mov ebp, esp */
  EBP = (ESP);
  /* 11f0f163 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0f16b cmp dword ptr [0x11f30a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f172 je 0x11f0f18a */
  if (C.zf) goto L_11f0f18a;
  /* 11f0f174 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f177 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f178 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f17b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f17c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f17f push edx */
  push32((uint32_t)(EDX));
  /* 11f0f180 call 0x11f0f210 */
  push32(0x11f0f185u); f_11f0f210();
  /* 11f0f185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f188 jmp 0x11f0f209 */
  goto L_11f0f209;
L_11f0f18a:;
  /* 11f0f18a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f18d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f190 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f192 jae 0x11f0f200 */
  if (!C.cf) goto L_11f0f200;
  /* 11f0f194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f197 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f19a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f0f19d jmp 0x11f0f1a8 */
  goto L_11f0f1a8;
L_11f0f19f:;
  /* 11f0f19f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f1a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f1a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f0f1a8:;
  /* 11f0f1a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f1ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f1ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0f1b0 je 0x11f0f1e4 */
  if (C.zf) goto L_11f0f1e4;
  /* 11f0f1b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f1b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0f1b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11f0f1bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0f1bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f1c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f1c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f1c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f1c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11f0f1cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f1ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0f1cf mov ecx, 0xa */
  ECX = (0xau);
  /* 11f0f1d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0f1d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0f1d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f1dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f1df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0f1e2 jmp 0x11f0f19f */
  goto L_11f0f19f;
L_11f0f1e4:;
  /* 11f0f1e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f1e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f1e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f1ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f1ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f0f1f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f1f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f1f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f1f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f1fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f0f1fe jmp 0x11f0f209 */
  goto L_11f0f209;
L_11f0f200:;
  /* 11f0f200 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f203 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11f0f209:;
  /* 11f0f209 mov esp, ebp */
  ESP = (EBP);
  /* 11f0f20b pop ebp */
  EBP = (pop32());
  /* 11f0f20c ret  */
  ESPCHK(0x11f0f160u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11f0f210 (172 bytes, 65 insns) */
void f_11f0f210(void) {
  FTRACE(0x11f0f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0f210 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0f211 mov ebp, esp */
  EBP = (ESP);
  /* 11f0f213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f219 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f21b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0f21e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f221 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f224 jbe 0x11f0f26b */
  if ((C.cf||C.zf)) goto L_11f0f26b;
L_11f0f226:;
  /* 11f0f226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f229 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0f22a mov ecx, 0xa */
  ECX = (0xau);
  /* 11f0f22f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0f231 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f237 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0f239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f23c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f23f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0f242 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f245 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f247 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f24a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f24d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0f24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f252 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0f253 mov ecx, 0xa */
  ECX = (0xau);
  /* 11f0f258 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f0f25a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0f25d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f261 jle 0x11f0f26b */
  if ((C.zf||C.sf!=C.of)) goto L_11f0f26b;
  /* 11f0f263 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f266 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f269 ja 0x11f0f226 */
  if ((!C.cf&&!C.zf)) goto L_11f0f226;
L_11f0f26b:;
  /* 11f0f26b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f26e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f270 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0f273 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f279 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f0f27b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f27e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f281 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0f284:;
  /* 11f0f284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f287 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f289 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11f0f28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f28f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f292 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f294 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0f296 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f299 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f29c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0f29f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f2a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f0f2a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f0f2a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f2aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f2ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0f2b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f2b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f2b6 jb 0x11f0f284 */
  if (C.cf) goto L_11f0f284;
  /* 11f0f2b8 mov esp, ebp */
  ESP = (EBP);
  /* 11f0f2ba pop ebp */
  EBP = (pop32());
  /* 11f0f2bb ret  */
  ESPCHK(0x11f0f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f2c0 @ 0x11f0f2c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11f0f2c0(void) {
  FTRACE(0x11f0f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0f2c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11f0f2c6:;
  /* 11f0f2c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f2c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0f2cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0f2ce je 0x11f0f73c */
  if (C.zf) goto L_11f0f73c;
  /* 11f0f2d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f2d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f2da je 0x11f0f73c */
  if (C.zf) goto L_11f0f73c;
  /* 11f0f2e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0f2e4 mov dword ptr [0x11f30a78], 0 */
  w32((uint32_t)(0x11f30a78), (0x0u));
  /* 11f0f2ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0f2f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f2f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0f2fb jmp 0x11f0f306 */
  goto L_11f0f306;
L_11f0f2fd:;
  /* 11f0f2fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f300 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f303 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f0f306:;
  /* 11f0f306 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f309 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0f30c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f30f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0f312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f318 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0f31b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f31d jne 0x11f0f321 */
  if (!C.zf) goto L_11f0f321;
  /* 11f0f31f jmp 0x11f0f2fd */
  goto L_11f0f2fd;
L_11f0f321:;
  /* 11f0f321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f324 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f327 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0f32a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f32d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0f330 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0f333 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0f336 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f339 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0f33c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f340 ja 0x11f0f690 */
  if ((!C.cf&&!C.zf)) goto L_11f0f690;
  /* 11f0f346 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0f349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f34b mov al, byte ptr [ecx + 0x11f0f76c] */
  AL = (r8((uint32_t)(ECX + 0x11f0f76c)));
  /* 11f0f351 jmp dword ptr [eax*4 + 0x11f0f740] */
  switch (EAX) {
    case 0: goto L_11f0f5af;
    case 1: goto L_11f0f493;
    case 2: goto L_11f0f41e;
    case 3: goto L_11f0f358;
    case 4: goto L_11f0f396;
    case 5: goto L_11f0f3f7;
    case 6: goto L_11f0f445;
    case 7: goto L_11f0f46c;
    case 8: goto L_11f0f4da;
    case 9: goto L_11f0f3d4;
    case 10: goto L_11f0f690;
    default: x86_unimpl("switch@0x11f0f351 out of table"); return;
  }
L_11f0f358:;
  /* 11f0f358 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f35b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f0f35e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0f361 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f364 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0f367 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f36b ja 0x11f0f391 */
  if ((!C.cf&&!C.zf)) goto L_11f0f391;
  /* 11f0f36d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0f370 jmp dword ptr [ecx*4 + 0x11f0f7bf] */
  switch (ECX) {
    case 0: goto L_11f0f377;
    case 1: goto L_11f0f381;
    case 2: goto L_11f0f387;
    case 3: goto L_11f0f38d;
    case 4: goto L_11f0f3b5;
    case 5: goto L_11f0f3bf;
    case 6: goto L_11f0f3c5;
    case 7: goto L_11f0f3cb;
    default: x86_unimpl("switch@0x11f0f370 out of table"); return;
  }
L_11f0f377:;
  /* 11f0f377 mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f381:;
  /* 11f0f381 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11f0f385 jmp 0x11f0f391 */
  goto L_11f0f391;
L_11f0f387:;
  /* 11f0f387 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11f0f38b jmp 0x11f0f391 */
  goto L_11f0f391;
L_11f0f38d:;
  /* 11f0f38d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11f0f391:;
  /* 11f0f391 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f396:;
  /* 11f0f396 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f399 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f0f39c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0f39f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f3a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f0f3a5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f3a9 ja 0x11f0f3cf */
  if ((!C.cf&&!C.zf)) goto L_11f0f3cf;
  /* 11f0f3ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0f3ae jmp dword ptr [ecx*4 + 0x11f0f7cf] */
  switch (ECX) {
    case 0: goto L_11f0f3b5;
    case 1: goto L_11f0f3bf;
    case 2: goto L_11f0f3c5;
    case 3: goto L_11f0f3cb;
    default: x86_unimpl("switch@0x11f0f3ae out of table"); return;
  }
L_11f0f3b5:;
  /* 11f0f3b5 mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f3bf:;
  /* 11f0f3bf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11f0f3c3 jmp 0x11f0f3cf */
  goto L_11f0f3cf;
L_11f0f3c5:;
  /* 11f0f3c5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11f0f3c9 jmp 0x11f0f3cf */
  goto L_11f0f3cf;
L_11f0f3cb:;
  /* 11f0f3cb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11f0f3cf:;
  /* 11f0f3cf jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f3d4:;
  /* 11f0f3d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f3d7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f0f3da cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f3de je 0x11f0f3e8 */
  if (C.zf) goto L_11f0f3e8;
  /* 11f0f3e0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f3e4 je 0x11f0f3ee */
  if (C.zf) goto L_11f0f3ee;
  /* 11f0f3e6 jmp 0x11f0f3f2 */
  goto L_11f0f3f2;
L_11f0f3e8:;
  /* 11f0f3e8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11f0f3ec jmp 0x11f0f3f2 */
  goto L_11f0f3f2;
L_11f0f3ee:;
  /* 11f0f3ee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11f0f3f2:;
  /* 11f0f3f2 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f3f7:;
  /* 11f0f3f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f3fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f0f3fd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f401 je 0x11f0f40b */
  if (C.zf) goto L_11f0f40b;
  /* 11f0f403 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f407 je 0x11f0f415 */
  if (C.zf) goto L_11f0f415;
  /* 11f0f409 jmp 0x11f0f419 */
  goto L_11f0f419;
L_11f0f40b:;
  /* 11f0f40b mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f415:;
  /* 11f0f415 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11f0f419:;
  /* 11f0f419 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f41e:;
  /* 11f0f41e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f421 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11f0f424 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f428 je 0x11f0f432 */
  if (C.zf) goto L_11f0f432;
  /* 11f0f42a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f42e je 0x11f0f43c */
  if (C.zf) goto L_11f0f43c;
  /* 11f0f430 jmp 0x11f0f440 */
  goto L_11f0f440;
L_11f0f432:;
  /* 11f0f432 mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f43c:;
  /* 11f0f43c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11f0f440:;
  /* 11f0f440 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f445:;
  /* 11f0f445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f448 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11f0f44b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f44f je 0x11f0f459 */
  if (C.zf) goto L_11f0f459;
  /* 11f0f451 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f455 je 0x11f0f463 */
  if (C.zf) goto L_11f0f463;
  /* 11f0f457 jmp 0x11f0f467 */
  goto L_11f0f467;
L_11f0f459:;
  /* 11f0f459 mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f463:;
  /* 11f0f463 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11f0f467:;
  /* 11f0f467 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f46c:;
  /* 11f0f46c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f46f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f0f472 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f476 je 0x11f0f480 */
  if (C.zf) goto L_11f0f480;
  /* 11f0f478 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f47c je 0x11f0f48a */
  if (C.zf) goto L_11f0f48a;
  /* 11f0f47e jmp 0x11f0f48e */
  goto L_11f0f48e;
L_11f0f480:;
  /* 11f0f480 mov dword ptr [0x11f30a78], 1 */
  w32((uint32_t)(0x11f30a78), (0x1u));
L_11f0f48a:;
  /* 11f0f48a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11f0f48e:;
  /* 11f0f48e jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f493:;
  /* 11f0f493 push 0x11f2bcec */
  push32((uint32_t)(0x11f2bcecu));
  /* 11f0f498 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f49b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f49c call 0x11f0fcf0 */
  push32(0x11f0f4a1u); f_11f0fcf0();
  /* 11f0f4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f4a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0f4a6 jne 0x11f0f4b3 */
  if (!C.zf) goto L_11f0f4b3;
  /* 11f0f4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f4ab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f4ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0f4b1 jmp 0x11f0f4d1 */
  goto L_11f0f4d1;
L_11f0f4b3:;
  /* 11f0f4b3 push 0x11f2bce8 */
  push32((uint32_t)(0x11f2bce8u));
  /* 11f0f4b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f4bb push eax */
  push32((uint32_t)(EAX));
  /* 11f0f4bc call 0x11f0fcf0 */
  push32(0x11f0f4c1u); f_11f0fcf0();
  /* 11f0f4c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f4c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0f4c6 jne 0x11f0f4d1 */
  if (!C.zf) goto L_11f0f4d1;
  /* 11f0f4c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f4cb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f4ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0f4d1:;
  /* 11f0f4d1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11f0f4d5 jmp 0x11f0f690 */
  goto L_11f0f690;
L_11f0f4da:;
  /* 11f0f4da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f4dd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f4e1 jg 0x11f0f4f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0f4f1;
  /* 11f0f4e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0f4e6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11f0f4ec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0f4ef jmp 0x11f0f4fd */
  goto L_11f0f4fd;
L_11f0f4f1:;
  /* 11f0f4f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0f4f4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11f0f4fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11f0f4fd:;
  /* 11f0f4fd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f501 jle 0x11f0f5a4 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0f5a4;
  /* 11f0f507 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f50a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f50d jbe 0x11f0f5a4 */
  if ((C.cf||C.zf)) goto L_11f0f5a4;
  /* 11f0f513 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0f516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f518 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f51a mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0f520 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0f522 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0f526 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0f52c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0f52e je 0x11f0f567 */
  if (C.zf) goto L_11f0f567;
  /* 11f0f530 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f533 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f536 jbe 0x11f0f567 */
  if ((C.cf||C.zf)) goto L_11f0f567;
  /* 11f0f538 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f53b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f53d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0f540 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0f542 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11f0f544 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f547 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f549 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f54c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f54f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0f551 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0f554 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f557 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f0f55a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f55d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f55f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f562 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f565 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f0f567:;
  /* 11f0f567 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f56a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f56c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0f56f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f571 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0f573 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f576 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f578 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f57b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f57e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0f580 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0f583 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f586 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0f589 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f58c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f58e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f591 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f594 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0f596 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f599 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f59c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f0f59f jmp 0x11f0f4fd */
  goto L_11f0f4fd;
L_11f0f5a4:;
  /* 11f0f5a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f5a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0f5aa jmp 0x11f0f2c6 */
  goto L_11f0f2c6;
L_11f0f5af:;
  /* 11f0f5af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f5b2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0f5b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0f5b7 je 0x11f0f682 */
  if (C.zf) goto L_11f0f682;
  /* 11f0f5bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f5c0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f5c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11f0f5c6:;
  /* 11f0f5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f5c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0f5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0f5ce je 0x11f0f680 */
  if (C.zf) goto L_11f0f680;
  /* 11f0f5d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f5d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f5da je 0x11f0f680 */
  if (C.zf) goto L_11f0f680;
  /* 11f0f5e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f5e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0f5e6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f5e9 jne 0x11f0f5f9 */
  if (!C.zf) goto L_11f0f5f9;
  /* 11f0f5eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f5ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f5f1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f0f5f4 jmp 0x11f0f680 */
  goto L_11f0f680;
L_11f0f5f9:;
  /* 11f0f5f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f5fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0f5fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0f600 mov edx, dword ptr [0x11f2e05c] */
  EDX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0f606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f608 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f0f60c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0f613 je 0x11f0f64c */
  if (C.zf) goto L_11f0f64c;
  /* 11f0f615 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f618 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f61b jbe 0x11f0f64c */
  if ((C.cf||C.zf)) goto L_11f0f64c;
  /* 11f0f61d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f620 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f625 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0f627 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0f629 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f62c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f62e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f631 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f634 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f0f636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f63c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0f63f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f642 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f644 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f647 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f64a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f0f64c:;
  /* 11f0f64c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f64f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f654 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0f656 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11f0f658 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f65b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f65d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f660 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f663 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0f665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f668 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f66b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f0f66e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f671 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f673 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f676 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f679 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f0f67b jmp 0x11f0f5c6 */
  goto L_11f0f5c6;
L_11f0f680:;
  /* 11f0f680 jmp 0x11f0f68b */
  goto L_11f0f68b;
L_11f0f682:;
  /* 11f0f682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f685 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f688 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f0f68b:;
  /* 11f0f68b jmp 0x11f0f2c6 */
  goto L_11f0f2c6;
L_11f0f690:;
  /* 11f0f690 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f0f694 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0f696 je 0x11f0f6bc */
  if (C.zf) goto L_11f0f6bc;
  /* 11f0f698 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0f69b push edx */
  push32((uint32_t)(EDX));
  /* 11f0f69c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f69f push eax */
  push32((uint32_t)(EAX));
  /* 11f0f6a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f6a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f6a7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0f6a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11f0f6ab push eax */
  push32((uint32_t)(EAX));
  /* 11f0f6ac call 0x11f0eaf0 */
  push32(0x11f0f6b1u); f_11f0eaf0();
  /* 11f0f6b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f6b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0f6b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0f6ba jmp 0x11f0f737 */
  goto L_11f0f737;
L_11f0f6bc:;
  /* 11f0f6bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f6bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f6c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f6c3 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0f6c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0f6cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0f6cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0f6d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0f6d7 je 0x11f0f708 */
  if (C.zf) goto L_11f0f708;
  /* 11f0f6d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f6de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f6e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0f6e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0f6e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f6e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f6ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f6ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f6f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0f6f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f6f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f6f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0f6fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f6fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f700 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f703 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f706 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f0f708:;
  /* 11f0f708 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f70b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0f70d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f710 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0f712 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0f714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f719 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f71c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f71f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f0f721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0f724 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f727 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0f72a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f72d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0f72f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f732 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f735 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f0f737:;
  /* 11f0f737 jmp 0x11f0f2c6 */
  goto L_11f0f2c6;
L_11f0f73c:;
  /* 11f0f73c mov esp, ebp */
  ESP = (EBP);
  /* 11f0f73e pop ebp */
  EBP = (pop32());
  /* 11f0f73f ret  */
  ESPCHK(0x11f0f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f7e0 @ 0x11f0f7e0 (650 bytes, 178 insns) */
void f_11f0f7e0(void) {
  FTRACE(0x11f0f7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0f7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0f7e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0f7e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0f7e9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f7ed jne 0x11f0f949 */
  if (!C.zf) goto L_11f0f949;
  /* 11f0f7f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f7f6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11f0f7fc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11f0f802 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0f805 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0f80c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11f0f816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f818 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11f0f81e push edx */
  push32((uint32_t)(EDX));
  /* 11f0f81f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f822 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f823 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f826 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f827 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f82a push edx */
  push32((uint32_t)(EDX));
  /* 11f0f82b call 0x11f10b40 */
  push32(0x11f0f830u); f_11f10b40();
  /* 11f0f830 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f833 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0f836 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f83a jne 0x11f0f8cf */
  if (!C.zf) goto L_11f0f8cf;
  /* 11f0f840 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f0f846u);
  /* 11f0f846 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f849 je 0x11f0f850 */
  if (C.zf) goto L_11f0f850;
  /* 11f0f84b jmp 0x11f0f92d */
  goto L_11f0f92d;
L_11f0f850:;
  /* 11f0f850 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f856 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f859 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f85a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f85d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f85e call 0x11f10b40 */
  push32(0x11f0f863u); f_11f10b40();
  /* 11f0f863 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f866 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11f0f86c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f873 jne 0x11f0f87a */
  if (!C.zf) goto L_11f0f87a;
  /* 11f0f875 jmp 0x11f0f92d */
  goto L_11f0f92d;
L_11f0f87a:;
  /* 11f0f87a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11f0f87c push 0x11f2bcf4 */
  push32((uint32_t)(0x11f2bcf4u));
  /* 11f0f881 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0f883 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11f0f889 push edx */
  push32((uint32_t)(EDX));
  /* 11f0f88a call 0x11efbac0 */
  push32(0x11f0f88fu); f_11efbac0();
  /* 11f0f88f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f892 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0f895 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f899 jne 0x11f0f8a0 */
  if (!C.zf) goto L_11f0f8a0;
  /* 11f0f89b jmp 0x11f0f92d */
  goto L_11f0f92d;
L_11f0f8a0:;
  /* 11f0f8a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f0f8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f8a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11f0f8af push eax */
  push32((uint32_t)(EAX));
  /* 11f0f8b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f8b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f8b7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0f8b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f8bb push eax */
  push32((uint32_t)(EAX));
  /* 11f0f8bc call 0x11f10b40 */
  push32(0x11f0f8c1u); f_11f10b40();
  /* 11f0f8c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f8c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0f8c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f8cb jne 0x11f0f8cf */
  if (!C.zf) goto L_11f0f8cf;
  /* 11f0f8cd jmp 0x11f0f92d */
  goto L_11f0f92d;
L_11f0f8cf:;
  /* 11f0f8cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11f0f8d1 push 0x11f2bcf4 */
  push32((uint32_t)(0x11f2bcf4u));
  /* 11f0f8d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0f8d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f8db push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f8dc call 0x11efbac0 */
  push32(0x11f0f8e1u); f_11efbac0();
  /* 11f0f8e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f8e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11f0f8ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f0f8ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11f0f8f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f8f5 jne 0x11f0f8f9 */
  if (!C.zf) goto L_11f0f8f9;
  /* 11f0f8f7 jmp 0x11f0f92d */
  goto L_11f0f92d;
L_11f0f8f9:;
  /* 11f0f8f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0f8fc push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f8fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f900 push edx */
  push32((uint32_t)(EDX));
  /* 11f0f901 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11f0f907 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0f909 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f90a call 0x11f00a40 */
  push32(0x11f0f90fu); f_11f00a40();
  /* 11f0f90f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f912 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f916 je 0x11f0f926 */
  if (C.zf) goto L_11f0f926;
  /* 11f0f918 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0f91a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f91d push edx */
  push32((uint32_t)(EDX));
  /* 11f0f91e call 0x11efc550 */
  push32(0x11f0f923u); f_11efc550();
  /* 11f0f923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0f926:;
  /* 11f0f926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f928 jmp 0x11f0fa66 */
  goto L_11f0fa66;
L_11f0f92d:;
  /* 11f0f92d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f931 je 0x11f0f941 */
  if (C.zf) goto L_11f0f941;
  /* 11f0f933 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0f935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0f938 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f939 call 0x11efc550 */
  push32(0x11f0f93eu); f_11efc550();
  /* 11f0f93e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0f941:;
  /* 11f0f941 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f944 jmp 0x11f0fa66 */
  goto L_11f0fa66;
L_11f0f949:;
  /* 11f0f949 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f94d jne 0x11f0fa63 */
  if (!C.zf) goto L_11f0fa63;
  /* 11f0f953 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11f0f95d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0f960 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11f0f966 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0f968 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11f0f96e push edx */
  push32((uint32_t)(EDX));
  /* 11f0f96f push 0x11f30a4c */
  push32((uint32_t)(0x11f30a4cu));
  /* 11f0f974 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0f977 push eax */
  push32((uint32_t)(EAX));
  /* 11f0f978 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0f97b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0f97c call 0x11f109a0 */
  push32(0x11f0f981u); f_11f109a0();
  /* 11f0f981 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0f986 jne 0x11f0f990 */
  if (!C.zf) goto L_11f0f990;
  /* 11f0f988 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f98b jmp 0x11f0fa66 */
  goto L_11f0fa66;
L_11f0f990:;
  /* 11f0f990 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0f996 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11f0f999 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11f0f9a3 jmp 0x11f0f9b4 */
  goto L_11f0f9b4;
L_11f0f9a5:;
  /* 11f0f9a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0f9ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f9ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11f0f9b4:;
  /* 11f0f9b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f9bb jge 0x11f0fa5f */
  if ((C.sf==C.of)) goto L_11f0fa5f;
  /* 11f0f9c1 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0f9c8 jle 0x11f0f9fb */
  if ((C.zf||C.sf!=C.of)) goto L_11f0f9fb;
  /* 11f0f9ca push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0f9cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0f9d2 mov dl, byte ptr [ecx*2 + 0x11f30a4c] */
  DL = (r8((uint32_t)(ECX*2 + 0x11f30a4c)));
  /* 11f0f9d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11f0f9df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11f0f9e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0f9ea push eax */
  push32((uint32_t)(EAX));
  /* 11f0f9eb call 0x11f01160 */
  push32(0x11f0f9f0u); f_11f01160();
  /* 11f0f9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0f9f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11f0f9f9 jmp 0x11f0fa2e */
  goto L_11f0fa2e;
L_11f0f9fb:;
  /* 11f0f9fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0fa01 mov dl, byte ptr [ecx*2 + 0x11f30a4c] */
  DL = (r8((uint32_t)(ECX*2 + 0x11f30a4c)));
  /* 11f0fa08 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11f0fa0e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11f0fa14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fa19 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0fa1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0fa21 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0fa25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0fa28 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11f0fa2e:;
  /* 11f0fa2e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fa35 je 0x11f0fa58 */
  if (C.zf) goto L_11f0fa58;
  /* 11f0fa37 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0fa3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0fa40 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0fa43 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11f0fa4a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11f0fa4e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0fa54 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0fa56 jmp 0x11f0fa5a */
  goto L_11f0fa5a;
L_11f0fa58:;
  /* 11f0fa58 jmp 0x11f0fa5f */
  goto L_11f0fa5f;
L_11f0fa5a:;
  /* 11f0fa5a jmp 0x11f0f9a5 */
  goto L_11f0f9a5;
L_11f0fa5f:;
  /* 11f0fa5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fa61 jmp 0x11f0fa66 */
  goto L_11f0fa66;
L_11f0fa63:;
  /* 11f0fa63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f0fa66:;
  /* 11f0fa66 mov esp, ebp */
  ESP = (EBP);
  /* 11f0fa68 pop ebp */
  EBP = (pop32());
  /* 11f0fa69 ret  */
  ESPCHK(0x11f0f7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fa70 @ 0x11f0fa70 (10 bytes, 5 insns) */
void f_11f0fa70(void) {
  FTRACE(0x11f0fa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0fa70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0fa71 mov ebp, esp */
  EBP = (ESP);
  /* 11f0fa73 mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0fa78 pop ebp */
  EBP = (pop32());
  /* 11f0fa79 ret  */
  ESPCHK(0x11f0fa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fa80 @ 0x11f0fa80 (575 bytes, 196 insns) */
void f_11f0fa80(void) {
  FTRACE(0x11f0fa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0fa80 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0fa81 mov ebp, esp */
  EBP = (ESP);
  /* 11f0fa83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f0fa85 push 0x11f2bd00 */
  push32((uint32_t)(0x11f2bd00u));
  /* 11f0fa8a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f0fa8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f0fa95 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fa96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f0fa9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0faa0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0faa1 push esi */
  push32((uint32_t)(ESI));
  /* 11f0faa2 push edi */
  push32((uint32_t)(EDI));
  /* 11f0faa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f0faa6 cmp dword ptr [0x11f30a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0faad jne 0x11f0fafe */
  if (!C.zf) goto L_11f0fafe;
  /* 11f0faaf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f0fab2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0fab5 push 0x11f2b434 */
  push32((uint32_t)(0x11f2b434u));
  /* 11f0faba push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0fabc call dword ptr [0x11f33360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33360))), 0x11f0fac2u);
  /* 11f0fac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0fac4 je 0x11f0fad2 */
  if (C.zf) goto L_11f0fad2;
  /* 11f0fac6 mov dword ptr [0x11f30a58], 1 */
  w32((uint32_t)(0x11f30a58), (0x1u));
  /* 11f0fad0 jmp 0x11f0fafe */
  goto L_11f0fafe;
L_11f0fad2:;
  /* 11f0fad2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11f0fad5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0fad8 push 0x11f2b430 */
  push32((uint32_t)(0x11f2b430u));
  /* 11f0fadd push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0fadf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fae1 call dword ptr [0x11f33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33364))), 0x11f0fae7u);
  /* 11f0fae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0fae9 je 0x11f0faf7 */
  if (C.zf) goto L_11f0faf7;
  /* 11f0faeb mov dword ptr [0x11f30a58], 2 */
  w32((uint32_t)(0x11f30a58), (0x2u));
  /* 11f0faf5 jmp 0x11f0fafe */
  goto L_11f0fafe;
L_11f0faf7:;
  /* 11f0faf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0faf9 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fafe:;
  /* 11f0fafe cmp dword ptr [0x11f30a58], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a58))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fb05 jne 0x11f0fb22 */
  if (!C.zf) goto L_11f0fb22;
  /* 11f0fb07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0fb0a push edx */
  push32((uint32_t)(EDX));
  /* 11f0fb0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fb0e push eax */
  push32((uint32_t)(EAX));
  /* 11f0fb0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0fb12 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fb13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0fb16 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fb17 call dword ptr [0x11f33360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33360))), 0x11f0fb1du);
  /* 11f0fb1d jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fb22:;
  /* 11f0fb22 cmp dword ptr [0x11f30a58], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fb29 jne 0x11f0fcd7 */
  if (!C.zf) goto L_11f0fcd7;
  /* 11f0fb2f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fb33 jne 0x11f0fb3d */
  if (!C.zf) goto L_11f0fb3d;
  /* 11f0fb35 mov eax, dword ptr [0x11f309d8] */
  EAX = (r32((uint32_t)(0x11f309d8)));
  /* 11f0fb3a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11f0fb3d:;
  /* 11f0fb3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fb3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fb41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fb43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fb45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fb48 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fb49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0fb4c push edx */
  push32((uint32_t)(EDX));
  /* 11f0fb4d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f0fb52 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0fb55 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fb56 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f0fb5cu);
  /* 11f0fb5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f0fb5f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fb63 jne 0x11f0fb6c */
  if (!C.zf) goto L_11f0fb6c;
  /* 11f0fb65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fb67 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fb6c:;
  /* 11f0fb6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0fb73 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0fb76 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fb79 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f0fb7b call 0x11f003c0 */
  push32(0x11f0fb80u); f_11f003c0();
  /* 11f0fb80 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11f0fb83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f0fb86 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0fb89 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f0fb8c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0fb8f push edx */
  push32((uint32_t)(EDX));
  /* 11f0fb90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fb92 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0fb95 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fb96 call 0x11f01ed0 */
  push32(0x11f0fb9bu); f_11f01ed0();
  /* 11f0fb9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fb9e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f0fba5 jmp 0x11f0fbbe */
  goto L_11f0fbbe;
  /* 11f0fba7 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0fbac ret  */
  ESPCHK(0x11f0fa80u, _esp0);
  ESP += 4; return;
  /* 11f0fbad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0fbb0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11f0fbb7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f0fbbe:;
  /* 11f0fbbe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fbc2 jne 0x11f0fbcb */
  if (!C.zf) goto L_11f0fbcb;
  /* 11f0fbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fbc6 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fbcb:;
  /* 11f0fbcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fbcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fbcf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0fbd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fbd3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0fbd6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fbd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fbda push eax */
  push32((uint32_t)(EAX));
  /* 11f0fbdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0fbde push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fbdf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f0fbe4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0fbe7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fbe8 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f0fbeeu);
  /* 11f0fbee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0fbf0 jne 0x11f0fbf9 */
  if (!C.zf) goto L_11f0fbf9;
  /* 11f0fbf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fbf4 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fbf9:;
  /* 11f0fbf9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f0fc00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0fc03 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11f0fc07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fc0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f0fc0c call 0x11f003c0 */
  push32(0x11f0fc11u); f_11f003c0();
  /* 11f0fc11 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11f0fc14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f0fc17 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f0fc1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f0fc1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f0fc24 jmp 0x11f0fc3d */
  goto L_11f0fc3d;
  /* 11f0fc26 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0fc2b ret  */
  ESPCHK(0x11f0fa80u, _esp0);
  ESP += 4; return;
  /* 11f0fc2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0fc2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f0fc36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f0fc3d:;
  /* 11f0fc3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fc41 jne 0x11f0fc4a */
  if (!C.zf) goto L_11f0fc4a;
  /* 11f0fc43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fc45 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fc4a:;
  /* 11f0fc4a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fc4e jne 0x11f0fc59 */
  if (!C.zf) goto L_11f0fc59;
  /* 11f0fc50 mov edx, dword ptr [0x11f309c8] */
  EDX = (r32((uint32_t)(0x11f309c8)));
  /* 11f0fc56 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11f0fc59:;
  /* 11f0fc59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fc5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fc5f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11f0fc65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fc68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fc6b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11f0fc72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fc75 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fc76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0fc79 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fc7a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0fc7d push eax */
  push32((uint32_t)(EAX));
  /* 11f0fc7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0fc81 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fc82 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0fc85 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fc86 call dword ptr [0x11f33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33364))), 0x11f0fc8cu);
  /* 11f0fc8c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f0fc8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fc92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fc95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0fc97 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11f0fc9c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fca2 je 0x11f0fcb8 */
  if (C.zf) goto L_11f0fcb8;
  /* 11f0fca4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fca7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fcaa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0fcac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0fcb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fcb6 je 0x11f0fcbc */
  if (C.zf) goto L_11f0fcbc;
L_11f0fcb8:;
  /* 11f0fcb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fcba jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fcbc:;
  /* 11f0fcbc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fcbf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f0fcc1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fcc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0fcc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fcc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0fcc9 push edx */
  push32((uint32_t)(EDX));
  /* 11f0fcca call 0x11f01f30 */
  push32(0x11f0fccfu); f_11f01f30();
  /* 11f0fccf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fcd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0fcd5 jmp 0x11f0fcd9 */
  goto L_11f0fcd9;
L_11f0fcd7:;
  /* 11f0fcd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0fcd9:;
  /* 11f0fcd9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11f0fcdc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0fcdf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f0fce6 pop edi */
  EDI = (pop32());
  /* 11f0fce7 pop esi */
  ESI = (pop32());
  /* 11f0fce8 pop ebx */
  EBX = (pop32());
  /* 11f0fce9 mov esp, ebp */
  ESP = (EBP);
  /* 11f0fceb pop ebp */
  EBP = (pop32());
  /* 11f0fcec ret  */
  ESPCHK(0x11f0fa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fcf0 @ 0x11f0fcf0 (208 bytes, 85 insns) */
void f_11f0fcf0(void) {
  FTRACE(0x11f0fcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0fcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0fcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0fcf3 push edi */
  push32((uint32_t)(EDI));
  /* 11f0fcf4 push esi */
  push32((uint32_t)(ESI));
  /* 11f0fcf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0fcf6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0fcf9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0fcfc lea eax, [0x11f309c0] */
  EAX = ((uint32_t)(0x11f309c0));
  /* 11f0fd02 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fd06 jne 0x11f0fd43 */
  if (!C.zf) goto L_11f0fd43;
  /* 11f0fd08 mov al, 0xff */
  AL = (0xffu);
  /* 11f0fd0a mov edi, edi */
  EDI = (EDI);
L_11f0fd0c:;
  /* 11f0fd0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0fd0e je 0x11f0fd3e */
  if (C.zf) goto L_11f0fd3e;
  /* 11f0fd10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0fd12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0fd13 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11f0fd15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f0fd16 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd18 je 0x11f0fd0c */
  if (C.zf) goto L_11f0fd0c;
  /* 11f0fd1a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0fd1c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd1e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0fd20 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f0fd23 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0fd25 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0fd27 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11f0fd29 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0fd2b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd2d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0fd2f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f0fd32 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0fd34 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0fd36 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd38 je 0x11f0fd0c */
  if (C.zf) goto L_11f0fd0c;
  /* 11f0fd3a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0fd3c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11f0fd3e:;
  /* 11f0fd3e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11f0fd41 jmp 0x11f0fdbb */
  goto L_11f0fdbb;
L_11f0fd43:;
  /* 11f0fd43 lock inc dword ptr [0x11f31dd4] */
  x86_unimpl("lock inc @ 0x11f0fd43");
  /* 11f0fd4a cmp dword ptr [0x11f31dc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fd51 jg 0x11f0fd57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0fd57;
  /* 11f0fd53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fd55 jmp 0x11f0fd6c */
  goto L_11f0fd6c;
L_11f0fd57:;
  /* 11f0fd57 lock dec dword ptr [0x11f31dd4] */
  x86_unimpl("lock dec @ 0x11f0fd57");
  /* 11f0fd5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0fd60 call 0x11efb9c0 */
  push32(0x11f0fd65u); f_11efb9c0();
  /* 11f0fd65 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11f0fd6c:;
  /* 11f0fd6c mov eax, 0xff */
  EAX = (0xffu);
  /* 11f0fd71 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f0fd73 nop  */
  /* nop */
L_11f0fd74:;
  /* 11f0fd74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0fd76 je 0x11f0fd9f */
  if (C.zf) goto L_11f0fd9f;
  /* 11f0fd78 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0fd7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0fd7b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f0fd7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f0fd7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd80 je 0x11f0fd74 */
  if (C.zf) goto L_11f0fd74;
  /* 11f0fd82 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fd83 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0fd84 call 0x11f012d0 */
  push32(0x11f0fd89u); f_11f012d0();
  /* 11f0fd89 mov ebx, eax */
  EBX = (EAX);
  /* 11f0fd8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fd8e call 0x11f012d0 */
  push32(0x11f0fd93u); f_11f012d0();
  /* 11f0fd93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fd96 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fd98 je 0x11f0fd74 */
  if (C.zf) goto L_11f0fd74;
  /* 11f0fd9a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0fd9c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f0fd9f:;
  /* 11f0fd9f mov ebx, eax */
  EBX = (EAX);
  /* 11f0fda1 pop eax */
  EAX = (pop32());
  /* 11f0fda2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fda4 jne 0x11f0fdaf */
  if (!C.zf) goto L_11f0fdaf;
  /* 11f0fda6 lock dec dword ptr [0x11f31dd4] */
  x86_unimpl("lock dec @ 0x11f0fda6");
  /* 11f0fdad jmp 0x11f0fdb9 */
  goto L_11f0fdb9;
L_11f0fdaf:;
  /* 11f0fdaf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0fdb1 call 0x11efba60 */
  push32(0x11f0fdb6u); f_11efba60();
  /* 11f0fdb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0fdb9:;
  /* 11f0fdb9 mov eax, ebx */
  EAX = (EBX);
L_11f0fdbb:;
  /* 11f0fdbb pop ebx */
  EBX = (pop32());
  /* 11f0fdbc pop esi */
  ESI = (pop32());
  /* 11f0fdbd pop edi */
  EDI = (pop32());
  /* 11f0fdbe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0fdbf ret  */
  ESPCHK(0x11f0fcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fdc0 @ 0x11f0fdc0 (257 bytes, 103 insns) */
void f_11f0fdc0(void) {
  FTRACE(0x11f0fdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0fdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0fdc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0fdc3 push edi */
  push32((uint32_t)(EDI));
  /* 11f0fdc4 push esi */
  push32((uint32_t)(ESI));
  /* 11f0fdc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0fdc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0fdc9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0fdcb je 0x11f0feba */
  if (C.zf) goto L_11f0feba;
  /* 11f0fdd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0fdd4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0fdd7 lea eax, [0x11f309c0] */
  EAX = ((uint32_t)(0x11f309c0));
  /* 11f0fddd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fde1 jne 0x11f0fe31 */
  if (!C.zf) goto L_11f0fe31;
  /* 11f0fde3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11f0fde5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11f0fde7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11f0fde9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f0fdec:;
  /* 11f0fdec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11f0fdee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f0fdf0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11f0fdf2 je 0x11f0fe15 */
  if (C.zf) goto L_11f0fe15;
  /* 11f0fdf4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0fdf6 je 0x11f0fe15 */
  if (C.zf) goto L_11f0fe15;
  /* 11f0fdf8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0fdf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f0fdfa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fdfc jb 0x11f0fe04 */
  if (C.cf) goto L_11f0fe04;
  /* 11f0fdfe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fe00 ja 0x11f0fe04 */
  if ((!C.cf&&!C.zf)) goto L_11f0fe04;
  /* 11f0fe02 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11f0fe04:;
  /* 11f0fe04 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fe06 jb 0x11f0fe0e */
  if (C.cf) goto L_11f0fe0e;
  /* 11f0fe08 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fe0a ja 0x11f0fe0e */
  if ((!C.cf&&!C.zf)) goto L_11f0fe0e;
  /* 11f0fe0c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11f0fe0e:;
  /* 11f0fe0e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fe10 jne 0x11f0fe1f */
  if (!C.zf) goto L_11f0fe1f;
  /* 11f0fe12 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f0fe13 jne 0x11f0fdec */
  if (!C.zf) goto L_11f0fdec;
L_11f0fe15:;
  /* 11f0fe15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0fe17 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0fe19 je 0x11f0feba */
  if (C.zf) goto L_11f0feba;
L_11f0fe1f:;
  /* 11f0fe1f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11f0fe24 jb 0x11f0feba */
  if (C.cf) goto L_11f0feba;
  /* 11f0fe2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0fe2c jmp 0x11f0feba */
  goto L_11f0feba;
L_11f0fe31:;
  /* 11f0fe31 lock inc dword ptr [0x11f31dd4] */
  x86_unimpl("lock inc @ 0x11f0fe31");
  /* 11f0fe38 cmp dword ptr [0x11f31dc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fe3f jg 0x11f0fe45 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0fe45;
  /* 11f0fe41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0fe43 jmp 0x11f0fe5e */
  goto L_11f0fe5e;
L_11f0fe45:;
  /* 11f0fe45 lock dec dword ptr [0x11f31dd4] */
  x86_unimpl("lock dec @ 0x11f0fe45");
  /* 11f0fe4c mov ebx, ecx */
  EBX = (ECX);
  /* 11f0fe4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0fe50 call 0x11efb9c0 */
  push32(0x11f0fe55u); f_11efb9c0();
  /* 11f0fe55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11f0fe5c mov ecx, ebx */
  ECX = (EBX);
L_11f0fe5e:;
  /* 11f0fe5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fe60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f0fe62 mov edi, edi */
  EDI = (EDI);
L_11f0fe64:;
  /* 11f0fe64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0fe66 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fe68 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f0fe6a je 0x11f0fe8f */
  if (C.zf) goto L_11f0fe8f;
  /* 11f0fe6c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f0fe6e je 0x11f0fe8f */
  if (C.zf) goto L_11f0fe8f;
  /* 11f0fe70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0fe71 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f0fe72 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0fe73 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fe74 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0fe75 call 0x11f012d0 */
  push32(0x11f0fe7au); f_11f012d0();
  /* 11f0fe7a mov ebx, eax */
  EBX = (EAX);
  /* 11f0fe7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fe7f call 0x11f012d0 */
  push32(0x11f0fe84u); f_11f012d0();
  /* 11f0fe84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fe87 pop ecx */
  ECX = (pop32());
  /* 11f0fe88 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fe8a jne 0x11f0fe95 */
  if (!C.zf) goto L_11f0fe95;
  /* 11f0fe8c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f0fe8d jne 0x11f0fe64 */
  if (!C.zf) goto L_11f0fe64;
L_11f0fe8f:;
  /* 11f0fe8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0fe91 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fe93 je 0x11f0fe9e */
  if (C.zf) goto L_11f0fe9e;
L_11f0fe95:;
  /* 11f0fe95 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11f0fe9a jb 0x11f0fe9e */
  if (C.cf) goto L_11f0fe9e;
  /* 11f0fe9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11f0fe9e:;
  /* 11f0fe9e pop eax */
  EAX = (pop32());
  /* 11f0fe9f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0fea1 jne 0x11f0feac */
  if (!C.zf) goto L_11f0feac;
  /* 11f0fea3 lock dec dword ptr [0x11f31dd4] */
  x86_unimpl("lock dec @ 0x11f0fea3");
  /* 11f0feaa jmp 0x11f0feba */
  goto L_11f0feba;
L_11f0feac:;
  /* 11f0feac mov ebx, ecx */
  EBX = (ECX);
  /* 11f0feae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0feb0 call 0x11efba60 */
  push32(0x11f0feb5u); f_11efba60();
  /* 11f0feb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0feb8 mov ecx, ebx */
  ECX = (EBX);
L_11f0feba:;
  /* 11f0feba mov eax, ecx */
  EAX = (ECX);
  /* 11f0febc pop ebx */
  EBX = (pop32());
  /* 11f0febd pop esi */
  ESI = (pop32());
  /* 11f0febe pop edi */
  EDI = (pop32());
  /* 11f0febf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0fec0 ret  */
  ESPCHK(0x11f0fdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fed0 @ 0x11f0fed0 (970 bytes, 340 insns) */
void f_11f0fed0(void) {
  FTRACE(0x11f0fed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0fed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0fed1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0fed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f0fed5 push 0x11f2bd60 */
  push32((uint32_t)(0x11f2bd60u));
  /* 11f0feda push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f0fedf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f0fee5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0fee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f0feed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0fef0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0fef1 push esi */
  push32((uint32_t)(ESI));
  /* 11f0fef2 push edi */
  push32((uint32_t)(EDI));
  /* 11f0fef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f0fef6 cmp dword ptr [0x11f30a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fefd jne 0x11f0ff56 */
  if (!C.zf) goto L_11f0ff56;
  /* 11f0feff push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ff01 push 0x11f2b434 */
  push32((uint32_t)(0x11f2b434u));
  /* 11f0ff06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ff08 push 0x11f2b434 */
  push32((uint32_t)(0x11f2b434u));
  /* 11f0ff0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0ff0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0ff11 call dword ptr [0x11f3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3332c))), 0x11f0ff17u);
  /* 11f0ff17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ff19 je 0x11f0ff27 */
  if (C.zf) goto L_11f0ff27;
  /* 11f0ff1b mov dword ptr [0x11f30a5c], 1 */
  w32((uint32_t)(0x11f30a5c), (0x1u));
  /* 11f0ff25 jmp 0x11f0ff56 */
  goto L_11f0ff56;
L_11f0ff27:;
  /* 11f0ff27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ff29 push 0x11f2b430 */
  push32((uint32_t)(0x11f2b430u));
  /* 11f0ff2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ff30 push 0x11f2b430 */
  push32((uint32_t)(0x11f2b430u));
  /* 11f0ff35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0ff37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0ff39 call dword ptr [0x11f33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33330))), 0x11f0ff3fu);
  /* 11f0ff3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0ff41 je 0x11f0ff4f */
  if (C.zf) goto L_11f0ff4f;
  /* 11f0ff43 mov dword ptr [0x11f30a5c], 2 */
  w32((uint32_t)(0x11f30a5c), (0x2u));
  /* 11f0ff4d jmp 0x11f0ff56 */
  goto L_11f0ff56;
L_11f0ff4f:;
  /* 11f0ff4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ff51 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f0ff56:;
  /* 11f0ff56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ff5a jle 0x11f0ff6f */
  if ((C.zf||C.sf!=C.of)) goto L_11f0ff6f;
  /* 11f0ff5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ff5f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ff60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ff63 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ff64 call 0x11f102d0 */
  push32(0x11f0ff69u); f_11f102d0();
  /* 11f0ff69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ff6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f0ff6f:;
  /* 11f0ff6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ff73 jle 0x11f0ff88 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0ff88;
  /* 11f0ff75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0ff78 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ff79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ff7c push eax */
  push32((uint32_t)(EAX));
  /* 11f0ff7d call 0x11f102d0 */
  push32(0x11f0ff82u); f_11f102d0();
  /* 11f0ff82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ff85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11f0ff88:;
  /* 11f0ff88 cmp dword ptr [0x11f30a5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ff8f jne 0x11f0ffb4 */
  if (!C.zf) goto L_11f0ffb4;
  /* 11f0ff91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0ff94 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ff95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0ff98 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ff99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ff9c push eax */
  push32((uint32_t)(EAX));
  /* 11f0ff9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ffa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ffa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ffa4 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ffa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ffa8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ffa9 call dword ptr [0x11f33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33330))), 0x11f0ffafu);
  /* 11f0ffaf jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f0ffb4:;
  /* 11f0ffb4 cmp dword ptr [0x11f30a5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ffbb jne 0x11f102b2 */
  if (!C.zf) goto L_11f102b2;
  /* 11f0ffc1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ffc5 jne 0x11f0ffd0 */
  if (!C.zf) goto L_11f0ffd0;
  /* 11f0ffc7 mov ecx, dword ptr [0x11f309d8] */
  ECX = (r32((uint32_t)(0x11f309d8)));
  /* 11f0ffcd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11f0ffd0:;
  /* 11f0ffd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ffd4 je 0x11f0ffe0 */
  if (C.zf) goto L_11f0ffe0;
  /* 11f0ffd6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ffda jne 0x11f1015c */
  if (!C.zf) goto L_11f1015c;
L_11f0ffe0:;
  /* 11f0ffe0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0ffe3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ffe6 jne 0x11f0fff2 */
  if (!C.zf) goto L_11f0fff2;
  /* 11f0ffe8 mov eax, 2 */
  EAX = (0x2u);
  /* 11f0ffed jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f0fff2:;
  /* 11f0fff2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0fff6 jle 0x11f10002 */
  if ((C.zf||C.sf!=C.of)) goto L_11f10002;
  /* 11f0fff8 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0fffd jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10002:;
  /* 11f10002 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10006 jle 0x11f10012 */
  if ((C.zf||C.sf!=C.of)) goto L_11f10012;
  /* 11f10008 mov eax, 3 */
  EAX = (0x3u);
  /* 11f1000d jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10012:;
  /* 11f10012 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11f10015 push eax */
  push32((uint32_t)(EAX));
  /* 11f10016 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f10019 push ecx */
  push32((uint32_t)(ECX));
  /* 11f1001a call dword ptr [0x11f33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33378))), 0x11f10020u);
  /* 11f10020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10022 jne 0x11f1002b */
  if (!C.zf) goto L_11f1002b;
  /* 11f10024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10026 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f1002b:;
  /* 11f1002b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1002f jne 0x11f10037 */
  if (!C.zf) goto L_11f10037;
  /* 11f10031 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10035 je 0x11f10064 */
  if (C.zf) goto L_11f10064;
L_11f10037:;
  /* 11f10037 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1003b jne 0x11f10043 */
  if (!C.zf) goto L_11f10043;
  /* 11f1003d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10041 je 0x11f10064 */
  if (C.zf) goto L_11f10064;
L_11f10043:;
  /* 11f10043 push 0x11f2bd20 */
  push32((uint32_t)(0x11f2bd20u));
  /* 11f10048 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f1004a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11f1004f push 0x11f2bd18 */
  push32((uint32_t)(0x11f2bd18u));
  /* 11f10054 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10056 call 0x11efa680 */
  push32(0x11f1005bu); f_11efa680();
  /* 11f1005b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1005e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10061 jne 0x11f10064 */
  if (!C.zf) goto L_11f10064;
  /* 11f10063 int3  */
  x86_unimpl("int3 @ 0x11f10063");
L_11f10064:;
  /* 11f10064 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f10066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f10068 jne 0x11f1002b */
  if (!C.zf) goto L_11f1002b;
  /* 11f1006a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1006e jle 0x11f100e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f100e3;
  /* 11f10070 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10074 jae 0x11f10080 */
  if (!C.cf) goto L_11f10080;
  /* 11f10076 mov eax, 3 */
  EAX = (0x3u);
  /* 11f1007b jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10080:;
  /* 11f10080 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11f10083 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11f10086 jmp 0x11f10091 */
  goto L_11f10091;
L_11f10088:;
  /* 11f10088 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f1008b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1008e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11f10091:;
  /* 11f10091 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f10094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10096 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f10098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f1009a je 0x11f100d9 */
  if (C.zf) goto L_11f100d9;
  /* 11f1009c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f1009f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f100a1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f100a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f100a6 je 0x11f100d9 */
  if (C.zf) goto L_11f100d9;
  /* 11f100a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f100ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f100ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f100af mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f100b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f100b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f100b6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f100b8 jl 0x11f100d7 */
  if ((C.sf!=C.of)) goto L_11f100d7;
  /* 11f100ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f100bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f100bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f100c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f100c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f100c6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f100c9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f100cb jg 0x11f100d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f100d7;
  /* 11f100cd mov eax, 2 */
  EAX = (0x2u);
  /* 11f100d2 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f100d7:;
  /* 11f100d7 jmp 0x11f10088 */
  goto L_11f10088;
L_11f100d9:;
  /* 11f100d9 mov eax, 3 */
  EAX = (0x3u);
  /* 11f100de jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f100e3:;
  /* 11f100e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f100e7 jle 0x11f1015c */
  if ((C.zf||C.sf!=C.of)) goto L_11f1015c;
  /* 11f100e9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f100ed jae 0x11f100f9 */
  if (!C.cf) goto L_11f100f9;
  /* 11f100ef mov eax, 1 */
  EAX = (0x1u);
  /* 11f100f4 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f100f9:;
  /* 11f100f9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11f100fc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11f100ff jmp 0x11f1010a */
  goto L_11f1010a;
L_11f10101:;
  /* 11f10101 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f10104 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10107 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11f1010a:;
  /* 11f1010a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f1010d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f1010f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f10111 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f10113 je 0x11f10152 */
  if (C.zf) goto L_11f10152;
  /* 11f10115 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f10118 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f1011a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f1011d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f1011f je 0x11f10152 */
  if (C.zf) goto L_11f10152;
  /* 11f10121 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10126 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f10128 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f1012b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f1012d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f1012f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10131 jl 0x11f10150 */
  if ((C.sf!=C.of)) goto L_11f10150;
  /* 11f10133 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10136 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f10138 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f1013a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f1013d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1013f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f10142 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10144 jg 0x11f10150 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f10150;
  /* 11f10146 mov eax, 2 */
  EAX = (0x2u);
  /* 11f1014b jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10150:;
  /* 11f10150 jmp 0x11f10101 */
  goto L_11f10101;
L_11f10152:;
  /* 11f10152 mov eax, 1 */
  EAX = (0x1u);
  /* 11f10157 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f1015c:;
  /* 11f1015c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f1015e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10160 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f10163 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10164 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f10167 push edx */
  push32((uint32_t)(EDX));
  /* 11f10168 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f1016a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f1016d push eax */
  push32((uint32_t)(EAX));
  /* 11f1016e call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f10174u);
  /* 11f10174 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f10177 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1017b jne 0x11f10184 */
  if (!C.zf) goto L_11f10184;
  /* 11f1017d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1017f jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10184:;
  /* 11f10184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f1018b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f1018e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f10190 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10193 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f10195 call 0x11f003c0 */
  push32(0x11f1019au); f_11f003c0();
  /* 11f1019a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11f1019d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f101a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f101a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f101a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f101ad jmp 0x11f101c6 */
  goto L_11f101c6;
  /* 11f101af mov eax, 1 */
  EAX = (0x1u);
  /* 11f101b4 ret  */
  ESPCHK(0x11f0fed0u, _esp0);
  ESP += 4; return;
  /* 11f101b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f101b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f101bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f101c6:;
  /* 11f101c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f101ca jne 0x11f101d3 */
  if (!C.zf) goto L_11f101d3;
  /* 11f101cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f101ce jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f101d3:;
  /* 11f101d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f101d6 push edx */
  push32((uint32_t)(EDX));
  /* 11f101d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f101da push eax */
  push32((uint32_t)(EAX));
  /* 11f101db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f101de push ecx */
  push32((uint32_t)(ECX));
  /* 11f101df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f101e2 push edx */
  push32((uint32_t)(EDX));
  /* 11f101e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f101e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f101e8 push eax */
  push32((uint32_t)(EAX));
  /* 11f101e9 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f101efu);
  /* 11f101ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f101f1 jne 0x11f101fa */
  if (!C.zf) goto L_11f101fa;
  /* 11f101f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f101f5 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f101fa:;
  /* 11f101fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f101fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f101fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f10201 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10202 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10205 push edx */
  push32((uint32_t)(EDX));
  /* 11f10206 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f10208 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f1020b push eax */
  push32((uint32_t)(EAX));
  /* 11f1020c call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f10212u);
  /* 11f10212 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f10215 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10219 jne 0x11f10222 */
  if (!C.zf) goto L_11f10222;
  /* 11f1021b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1021d jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10222:;
  /* 11f10222 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f10229 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f1022c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f1022e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10231 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f10233 call 0x11f003c0 */
  push32(0x11f10238u); f_11f003c0();
  /* 11f10238 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11f1023b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f1023e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11f10241 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11f10244 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f1024b jmp 0x11f10264 */
  goto L_11f10264;
  /* 11f1024d mov eax, 1 */
  EAX = (0x1u);
  /* 11f10252 ret  */
  ESPCHK(0x11f0fed0u, _esp0);
  ESP += 4; return;
  /* 11f10253 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f10256 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11f1025d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f10264:;
  /* 11f10264 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10268 jne 0x11f1026e */
  if (!C.zf) goto L_11f1026e;
  /* 11f1026a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1026c jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f1026e:;
  /* 11f1026e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10271 push edx */
  push32((uint32_t)(EDX));
  /* 11f10272 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f10275 push eax */
  push32((uint32_t)(EAX));
  /* 11f10276 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f10279 push ecx */
  push32((uint32_t)(ECX));
  /* 11f1027a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f1027d push edx */
  push32((uint32_t)(EDX));
  /* 11f1027e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10280 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f10283 push eax */
  push32((uint32_t)(EAX));
  /* 11f10284 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f1028au);
  /* 11f1028a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f1028c jne 0x11f10292 */
  if (!C.zf) goto L_11f10292;
  /* 11f1028e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10290 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f10292:;
  /* 11f10292 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10295 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10296 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f10299 push edx */
  push32((uint32_t)(EDX));
  /* 11f1029a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f1029d push eax */
  push32((uint32_t)(EAX));
  /* 11f1029e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f102a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f102a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f102a5 push edx */
  push32((uint32_t)(EDX));
  /* 11f102a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f102a9 push eax */
  push32((uint32_t)(EAX));
  /* 11f102aa call dword ptr [0x11f3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3332c))), 0x11f102b0u);
  /* 11f102b0 jmp 0x11f102b4 */
  goto L_11f102b4;
L_11f102b2:;
  /* 11f102b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f102b4:;
  /* 11f102b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11f102b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f102ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f102c1 pop edi */
  EDI = (pop32());
  /* 11f102c2 pop esi */
  ESI = (pop32());
  /* 11f102c3 pop ebx */
  EBX = (pop32());
  /* 11f102c4 mov esp, ebp */
  ESP = (EBP);
  /* 11f102c6 pop ebp */
  EBP = (pop32());
  /* 11f102c7 ret  */
  ESPCHK(0x11f0fed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100202d0 @ 0x11f102d0 (80 bytes, 32 insns) */
void f_11f102d0(void) {
  FTRACE(0x11f102d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f102d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f102d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f102d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f102d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f102d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f102dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f102df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f102e2:;
  /* 11f102e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f102e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f102e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f102eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f102ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f102f0 je 0x11f10307 */
  if (C.zf) goto L_11f10307;
  /* 11f102f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f102f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f102f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f102fa je 0x11f10307 */
  if (C.zf) goto L_11f10307;
  /* 11f102fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f102ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10302 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f10305 jmp 0x11f102e2 */
  goto L_11f102e2;
L_11f10307:;
  /* 11f10307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1030a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f1030d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f1030f jne 0x11f10319 */
  if (!C.zf) goto L_11f10319;
  /* 11f10311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10314 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10317 jmp 0x11f1031c */
  goto L_11f1031c;
L_11f10319:;
  /* 11f10319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f1031c:;
  /* 11f1031c mov esp, ebp */
  ESP = (EBP);
  /* 11f1031e pop ebp */
  EBP = (pop32());
  /* 11f1031f ret  */
  ESPCHK(0x11f102d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020320 @ 0x11f10320 (736 bytes, 224 insns) */
void f_11f10320(void) {
  FTRACE(0x11f10320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10320 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10321 mov ebp, esp */
  EBP = (ESP);
  /* 11f10323 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10326 push esi */
  push32((uint32_t)(ESI));
  /* 11f10327 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1032b je 0x11f1034c */
  if (C.zf) goto L_11f1034c;
  /* 11f1032d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11f1032f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10332 push eax */
  push32((uint32_t)(EAX));
  /* 11f10333 call 0x11f10cf0 */
  push32(0x11f10338u); f_11f10cf0();
  /* 11f10338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1033b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f1033e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10342 je 0x11f1034c */
  if (C.zf) goto L_11f1034c;
  /* 11f10344 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10347 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1034a jne 0x11f10354 */
  if (!C.zf) goto L_11f10354;
L_11f1034c:;
  /* 11f1034c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f1034f jmp 0x11f105fb */
  goto L_11f105fb;
L_11f10354:;
  /* 11f10354 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f10357 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f1035b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f1035d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f1035f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f10360 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f10363 mov ecx, dword ptr [0x11f3078c] */
  ECX = (r32((uint32_t)(0x11f3078c)));
  /* 11f10369 cmp ecx, dword ptr [0x11f30790] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f30790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1036f jne 0x11f10385 */
  if (!C.zf) goto L_11f10385;
  /* 11f10371 mov edx, dword ptr [0x11f3078c] */
  EDX = (r32((uint32_t)(0x11f3078c)));
  /* 11f10377 push edx */
  push32((uint32_t)(EDX));
  /* 11f10378 call 0x11f10680 */
  push32(0x11f1037du); f_11f10680();
  /* 11f1037d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10380 mov dword ptr [0x11f3078c], eax */
  w32((uint32_t)(0x11f3078c), (EAX));
L_11f10385:;
  /* 11f10385 cmp dword ptr [0x11f3078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1038c jne 0x11f10445 */
  if (!C.zf) goto L_11f10445;
  /* 11f10392 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10396 je 0x11f103b7 */
  if (C.zf) goto L_11f103b7;
  /* 11f10398 cmp dword ptr [0x11f30794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1039f je 0x11f103b7 */
  if (C.zf) goto L_11f103b7;
  /* 11f103a1 call 0x11f0d960 */
  push32(0x11f103a6u); f_11f0d960();
  /* 11f103a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f103a8 je 0x11f103b2 */
  if (C.zf) goto L_11f103b2;
  /* 11f103aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f103ad jmp 0x11f105fb */
  goto L_11f105fb;
L_11f103b2:;
  /* 11f103b2 jmp 0x11f10445 */
  goto L_11f10445;
L_11f103b7:;
  /* 11f103b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f103bb je 0x11f103c4 */
  if (C.zf) goto L_11f103c4;
  /* 11f103bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f103bf jmp 0x11f105fb */
  goto L_11f105fb;
L_11f103c4:;
  /* 11f103c4 cmp dword ptr [0x11f3078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f103cb jne 0x11f10404 */
  if (!C.zf) goto L_11f10404;
  /* 11f103cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11f103d2 push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f103d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f103d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f103db call 0x11efbac0 */
  push32(0x11f103e0u); f_11efbac0();
  /* 11f103e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f103e3 mov dword ptr [0x11f3078c], eax */
  w32((uint32_t)(0x11f3078c), (EAX));
  /* 11f103e8 cmp dword ptr [0x11f3078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f103ef jne 0x11f103f9 */
  if (!C.zf) goto L_11f103f9;
  /* 11f103f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f103f4 jmp 0x11f105fb */
  goto L_11f105fb;
L_11f103f9:;
  /* 11f103f9 mov eax, dword ptr [0x11f3078c] */
  EAX = (r32((uint32_t)(0x11f3078c)));
  /* 11f103fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11f10404:;
  /* 11f10404 cmp dword ptr [0x11f30794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1040b jne 0x11f10445 */
  if (!C.zf) goto L_11f10445;
  /* 11f1040d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11f10412 push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f10417 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10419 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f1041b call 0x11efbac0 */
  push32(0x11f10420u); f_11efbac0();
  /* 11f10420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10423 mov dword ptr [0x11f30794], eax */
  w32((uint32_t)(0x11f30794), (EAX));
  /* 11f10428 cmp dword ptr [0x11f30794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1042f jne 0x11f10439 */
  if (!C.zf) goto L_11f10439;
  /* 11f10431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10434 jmp 0x11f105fb */
  goto L_11f105fb;
L_11f10439:;
  /* 11f10439 mov ecx, dword ptr [0x11f30794] */
  ECX = (r32((uint32_t)(0x11f30794)));
  /* 11f1043f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11f10445:;
  /* 11f10445 mov edx, dword ptr [0x11f3078c] */
  EDX = (r32((uint32_t)(0x11f3078c)));
  /* 11f1044b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f1044e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f10451 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10454 push eax */
  push32((uint32_t)(EAX));
  /* 11f10455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10458 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10459 call 0x11f10600 */
  push32(0x11f1045eu); f_11f10600();
  /* 11f1045e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10461 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f10464 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10468 jl 0x11f10501 */
  if ((C.sf!=C.of)) goto L_11f10501;
  /* 11f1046e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f10471 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10474 je 0x11f10501 */
  if (C.zf) goto L_11f10501;
  /* 11f1047a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1047e je 0x11f104f3 */
  if (C.zf) goto L_11f104f3;
  /* 11f10480 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f10488 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f1048b push edx */
  push32((uint32_t)(EDX));
  /* 11f1048c call 0x11efc550 */
  push32(0x11f10491u); f_11efc550();
  /* 11f10491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10494 jmp 0x11f1049f */
  goto L_11f1049f;
L_11f10496:;
  /* 11f10496 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10499 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1049c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f1049f:;
  /* 11f1049f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f104a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104a5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f104a9 je 0x11f104c0 */
  if (C.zf) goto L_11f104c0;
  /* 11f104ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f104ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f104b4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104b7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11f104bb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11f104be jmp 0x11f10496 */
  goto L_11f10496;
L_11f104c0:;
  /* 11f104c0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11f104c5 push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f104ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11f104cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f104cf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f104d2 push eax */
  push32((uint32_t)(EAX));
  /* 11f104d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f104d7 call 0x11efbf50 */
  push32(0x11f104dcu); f_11efbf50();
  /* 11f104dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f104df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f104e2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f104e6 je 0x11f104f1 */
  if (C.zf) goto L_11f104f1;
  /* 11f104e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104eb mov dword ptr [0x11f3078c], edx */
  w32((uint32_t)(0x11f3078c), (EDX));
L_11f104f1:;
  /* 11f104f1 jmp 0x11f104ff */
  goto L_11f104ff;
L_11f104f3:;
  /* 11f104f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f104f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f104f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f104fc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11f104ff:;
  /* 11f104ff jmp 0x11f10574 */
  goto L_11f10574;
L_11f10501:;
  /* 11f10501 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10505 jne 0x11f1056d */
  if (!C.zf) goto L_11f1056d;
  /* 11f10507 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1050b jge 0x11f10515 */
  if ((C.sf==C.of)) goto L_11f10515;
  /* 11f1050d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10510 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f10512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f10515:;
  /* 11f10515 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11f1051a push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f1051f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10521 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10524 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11f1052b push edx */
  push32((uint32_t)(EDX));
  /* 11f1052c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f1052f push eax */
  push32((uint32_t)(EAX));
  /* 11f10530 call 0x11efbf50 */
  push32(0x11f10535u); f_11efbf50();
  /* 11f10535 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10538 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f1053b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1053f jne 0x11f10549 */
  if (!C.zf) goto L_11f10549;
  /* 11f10541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10544 jmp 0x11f105fb */
  goto L_11f105fb;
L_11f10549:;
  /* 11f10549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f1054c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f1054f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10552 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11f10555 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10558 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f1055b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11f10563 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f10566 mov dword ptr [0x11f3078c], eax */
  w32((uint32_t)(0x11f3078c), (EAX));
  /* 11f1056b jmp 0x11f10574 */
  goto L_11f10574;
L_11f1056d:;
  /* 11f1056d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1056f jmp 0x11f105fb */
  goto L_11f105fb;
L_11f10574:;
  /* 11f10574 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10578 je 0x11f105f9 */
  if (C.zf) goto L_11f105f9;
  /* 11f1057a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11f1057f push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f10584 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10589 push ecx */
  push32((uint32_t)(ECX));
  /* 11f1058a call 0x11f00050 */
  push32(0x11f1058fu); f_11f00050();
  /* 11f1058f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10592 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10595 push eax */
  push32((uint32_t)(EAX));
  /* 11f10596 call 0x11efbac0 */
  push32(0x11f1059bu); f_11efbac0();
  /* 11f1059b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1059e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f105a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f105a5 je 0x11f105f9 */
  if (C.zf) goto L_11f105f9;
  /* 11f105a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f105aa push edx */
  push32((uint32_t)(EDX));
  /* 11f105ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f105ae push eax */
  push32((uint32_t)(EAX));
  /* 11f105af call 0x11f001d0 */
  push32(0x11f105b4u); f_11f001d0();
  /* 11f105b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f105b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f105ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f105bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f105c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f105c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f105c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f105c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f105cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f105ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f105d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f105d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f105d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f105d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f105db not edx */
  EDX = (~(EDX));
  /* 11f105dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f105e0 push edx */
  push32((uint32_t)(EDX));
  /* 11f105e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f105e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f105e5 call dword ptr [0x11f33328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33328))), 0x11f105ebu);
  /* 11f105eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f105ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f105f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f105f1 call 0x11efc550 */
  push32(0x11f105f6u); f_11efc550();
  /* 11f105f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f105f9:;
  /* 11f105f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f105fb:;
  /* 11f105fb pop esi */
  ESI = (pop32());
  /* 11f105fc mov esp, ebp */
  ESP = (EBP);
  /* 11f105fe pop ebp */
  EBP = (pop32());
  /* 11f105ff ret  */
  ESPCHK(0x11f10320u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11f10600 (124 bytes, 47 insns) */
void f_11f10600(void) {
  FTRACE(0x11f10600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10600 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10601 mov ebp, esp */
  EBP = (ESP);
  /* 11f10603 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10604 mov eax, dword ptr [0x11f3078c] */
  EAX = (r32((uint32_t)(0x11f3078c)));
  /* 11f10609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f1060c jmp 0x11f10617 */
  goto L_11f10617;
L_11f1060e:;
  /* 11f1060e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10611 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f10617:;
  /* 11f10617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1061a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1061d je 0x11f1066a */
  if (C.zf) goto L_11f1066a;
  /* 11f1061f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10622 push eax */
  push32((uint32_t)(EAX));
  /* 11f10623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10626 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f10628 push edx */
  push32((uint32_t)(EDX));
  /* 11f10629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f1062c push eax */
  push32((uint32_t)(EAX));
  /* 11f1062d call 0x11f0d910 */
  push32(0x11f10632u); f_11f0d910();
  /* 11f10632 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10637 jne 0x11f10668 */
  if (!C.zf) goto L_11f10668;
  /* 11f10639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1063c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f1063e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10641 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11f10645 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10648 je 0x11f1065a */
  if (C.zf) goto L_11f1065a;
  /* 11f1064a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1064d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f1064f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10652 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11f10656 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f10658 jne 0x11f10668 */
  if (!C.zf) goto L_11f10668;
L_11f1065a:;
  /* 11f1065a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1065d sub eax, dword ptr [0x11f3078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f3078c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10663 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f10666 jmp 0x11f10678 */
  goto L_11f10678;
L_11f10668:;
  /* 11f10668 jmp 0x11f1060e */
  goto L_11f1060e;
L_11f1066a:;
  /* 11f1066a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1066d sub eax, dword ptr [0x11f3078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f3078c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10673 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f10676 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f10678:;
  /* 11f10678 mov esp, ebp */
  ESP = (EBP);
  /* 11f1067a pop ebp */
  EBP = (pop32());
  /* 11f1067b ret  */
  ESPCHK(0x11f10600u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11f10680 (238 bytes, 80 insns) */
void f_11f10680(void) {
  FTRACE(0x11f10680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10680 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10681 mov ebp, esp */
  EBP = (ESP);
  /* 11f10683 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10686 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f1068d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10690 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f10693 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10697 jne 0x11f106a0 */
  if (!C.zf) goto L_11f106a0;
  /* 11f10699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f1069b jmp 0x11f1076a */
  goto L_11f1076a;
L_11f106a0:;
  /* 11f106a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f106a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f106a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f106a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f106ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f106ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f106b0 je 0x11f106bd */
  if (C.zf) goto L_11f106bd;
  /* 11f106b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f106b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f106b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f106bb jmp 0x11f106a0 */
  goto L_11f106a0;
L_11f106bd:;
  /* 11f106bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11f106c2 push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f106c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f106c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f106cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11f106d3 push eax */
  push32((uint32_t)(EAX));
  /* 11f106d4 call 0x11efbac0 */
  push32(0x11f106d9u); f_11efbac0();
  /* 11f106d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f106dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f106df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f106e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f106e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f106e9 jne 0x11f106f5 */
  if (!C.zf) goto L_11f106f5;
  /* 11f106eb push 9 */
  push32((uint32_t)(0x9u));
  /* 11f106ed call 0x11efa530 */
  push32(0x11f106f2u); f_11efa530();
  /* 11f106f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f106f5:;
  /* 11f106f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f106f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f106fb:;
  /* 11f106fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f106fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10701 je 0x11f1075e */
  if (C.zf) goto L_11f1075e;
  /* 11f10703 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11f10708 push 0x11f2bd78 */
  push32((uint32_t)(0x11f2bd78u));
  /* 11f1070d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f1070f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f10712 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f10714 push edx */
  push32((uint32_t)(EDX));
  /* 11f10715 call 0x11f00050 */
  push32(0x11f1071au); f_11f00050();
  /* 11f1071a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1071d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10720 push eax */
  push32((uint32_t)(EAX));
  /* 11f10721 call 0x11efbac0 */
  push32(0x11f10726u); f_11efbac0();
  /* 11f10726 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f1072c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f1072e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10731 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10734 je 0x11f1074a */
  if (C.zf) goto L_11f1074a;
  /* 11f10736 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f10739 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f1073b push ecx */
  push32((uint32_t)(ECX));
  /* 11f1073c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f1073f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f10741 push eax */
  push32((uint32_t)(EAX));
  /* 11f10742 call 0x11f001d0 */
  push32(0x11f10747u); f_11f001d0();
  /* 11f10747 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f1074a:;
  /* 11f1074a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f1074d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f10753 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10756 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10759 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f1075c jmp 0x11f106fb */
  goto L_11f106fb;
L_11f1075e:;
  /* 11f1075e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10761 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f10767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f1076a:;
  /* 11f1076a mov esp, ebp */
  ESP = (EBP);
  /* 11f1076c pop ebp */
  EBP = (pop32());
  /* 11f1076d ret  */
  ESPCHK(0x11f10680u, _esp0);
  ESP += 4; return;
}

/* FUN_10020770 @ 0x11f10770 (130 bytes, 50 insns) */
void f_11f10770(void) {
  FTRACE(0x11f10770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10770 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10771 mov ebp, esp */
  EBP = (ESP);
  /* 11f10773 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10774 push ebx */
  push32((uint32_t)(EBX));
  /* 11f10775 push esi */
  push32((uint32_t)(ESI));
  /* 11f10776 push edi */
  push32((uint32_t)(EDI));
  /* 11f10777 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f1077e:;
  /* 11f1077e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10782 jne 0x11f107a2 */
  if (!C.zf) goto L_11f107a2;
  /* 11f10784 push 0x11f2bd90 */
  push32((uint32_t)(0x11f2bd90u));
  /* 11f10789 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f1078b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11f1078d push 0x11f2bd84 */
  push32((uint32_t)(0x11f2bd84u));
  /* 11f10792 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10794 call 0x11efa680 */
  push32(0x11f10799u); f_11efa680();
  /* 11f10799 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1079c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1079f jne 0x11f107a2 */
  if (!C.zf) goto L_11f107a2;
  /* 11f107a1 int3  */
  x86_unimpl("int3 @ 0x11f107a1");
L_11f107a2:;
  /* 11f107a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f107a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f107a6 jne 0x11f1077e */
  if (!C.zf) goto L_11f1077e;
  /* 11f107a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f107ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f107ae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11f107b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f107b3 je 0x11f107c1 */
  if (C.zf) goto L_11f107c1;
  /* 11f107b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f107b8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11f107bf jmp 0x11f107e8 */
  goto L_11f107e8;
L_11f107c1:;
  /* 11f107c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f107c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f107c5 call 0x11f0abf0 */
  push32(0x11f107cau); f_11f0abf0();
  /* 11f107ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f107cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f107d0 push edx */
  push32((uint32_t)(EDX));
  /* 11f107d1 call 0x11f10800 */
  push32(0x11f107d6u); f_11f10800();
  /* 11f107d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f107d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f107dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f107df push eax */
  push32((uint32_t)(EAX));
  /* 11f107e0 call 0x11f0ac60 */
  push32(0x11f107e5u); f_11f0ac60();
  /* 11f107e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f107e8:;
  /* 11f107e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f107eb pop edi */
  EDI = (pop32());
  /* 11f107ec pop esi */
  ESI = (pop32());
  /* 11f107ed pop ebx */
  EBX = (pop32());
  /* 11f107ee mov esp, ebp */
  ESP = (EBP);
  /* 11f107f0 pop ebp */
  EBP = (pop32());
  /* 11f107f1 ret  */
  ESPCHK(0x11f10770u, _esp0);
  ESP += 4; return;
}

/* FUN_10020800 @ 0x11f10800 (190 bytes, 67 insns) */
void f_11f10800(void) {
  FTRACE(0x11f10800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10800 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10801 mov ebp, esp */
  EBP = (ESP);
  /* 11f10803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10806 push ebx */
  push32((uint32_t)(EBX));
  /* 11f10807 push esi */
  push32((uint32_t)(ESI));
  /* 11f10808 push edi */
  push32((uint32_t)(EDI));
  /* 11f10809 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f10810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10813 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f10816:;
  /* 11f10816 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1081a jne 0x11f1083a */
  if (!C.zf) goto L_11f1083a;
  /* 11f1081c push 0x11f2b2e0 */
  push32((uint32_t)(0x11f2b2e0u));
  /* 11f10821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10823 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11f10825 push 0x11f2bd84 */
  push32((uint32_t)(0x11f2bd84u));
  /* 11f1082a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f1082c call 0x11efa680 */
  push32(0x11f10831u); f_11efa680();
  /* 11f10831 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10834 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10837 jne 0x11f1083a */
  if (!C.zf) goto L_11f1083a;
  /* 11f10839 int3  */
  x86_unimpl("int3 @ 0x11f10839");
L_11f1083a:;
  /* 11f1083a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f1083c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f1083e jne 0x11f10816 */
  if (!C.zf) goto L_11f10816;
  /* 11f10840 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10843 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f10846 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11f1084b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f1084d je 0x11f108aa */
  if (C.zf) goto L_11f108aa;
  /* 11f1084f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10852 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10853 call 0x11f0e160 */
  push32(0x11f10858u); f_11f0e160();
  /* 11f10858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1085b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f1085e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10861 push edx */
  push32((uint32_t)(EDX));
  /* 11f10862 call 0x11f10f10 */
  push32(0x11f10867u); f_11f10f10();
  /* 11f10867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1086a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f1086d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f10870 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10871 call 0x11f10de0 */
  push32(0x11f10876u); f_11f10de0();
  /* 11f10876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f1087b jge 0x11f10886 */
  if ((C.sf==C.of)) goto L_11f10886;
  /* 11f1087d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f10884 jmp 0x11f108aa */
  goto L_11f108aa;
L_11f10886:;
  /* 11f10886 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10889 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1088d je 0x11f108aa */
  if (C.zf) goto L_11f108aa;
  /* 11f1088f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f10894 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f10897 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10898 call 0x11efc550 */
  push32(0x11f1089du); f_11efc550();
  /* 11f1089d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f108a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f108a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11f108aa:;
  /* 11f108aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f108ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11f108b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f108b7 pop edi */
  EDI = (pop32());
  /* 11f108b8 pop esi */
  ESI = (pop32());
  /* 11f108b9 pop ebx */
  EBX = (pop32());
  /* 11f108ba mov esp, ebp */
  ESP = (EBP);
  /* 11f108bc pop ebp */
  EBP = (pop32());
  /* 11f108bd ret  */
  ESPCHK(0x11f10800u, _esp0);
  ESP += 4; return;
}

/* FUN_100208c0 @ 0x11f108c0 (210 bytes, 63 insns) */
void f_11f108c0(void) {
  FTRACE(0x11f108c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f108c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f108c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f108c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f108c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f108c7 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f108cd jae 0x11f108f1 */
  if (!C.cf) goto L_11f108f1;
  /* 11f108cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f108d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f108d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f108d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f108db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f108de mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f108e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f108ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f108ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f108ef jne 0x11f10904 */
  if (!C.zf) goto L_11f10904;
L_11f108f1:;
  /* 11f108f1 call 0x11f07150 */
  push32(0x11f108f6u); f_11f07150();
  /* 11f108f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f108fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f108ff jmp 0x11f1098e */
  goto L_11f1098e;
L_11f10904:;
  /* 11f10904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10907 push edx */
  push32((uint32_t)(EDX));
  /* 11f10908 call 0x11f0df20 */
  push32(0x11f1090du); f_11f0df20();
  /* 11f1090d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10913 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f10916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10919 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f1091c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f1091f mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f10926 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11f1092b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f1092e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10930 je 0x11f1096d */
  if (C.zf) goto L_11f1096d;
  /* 11f10932 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10935 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10936 call 0x11f0dda0 */
  push32(0x11f1093bu); f_11f0dda0();
  /* 11f1093b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1093e push eax */
  push32((uint32_t)(EAX));
  /* 11f1093f call dword ptr [0x11f33324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33324))), 0x11f10945u);
  /* 11f10945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10947 jne 0x11f10954 */
  if (!C.zf) goto L_11f10954;
  /* 11f10949 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f1094fu);
  /* 11f1094f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f10952 jmp 0x11f1095b */
  goto L_11f1095b;
L_11f10954:;
  /* 11f10954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f1095b:;
  /* 11f1095b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f1095f jne 0x11f10963 */
  if (!C.zf) goto L_11f10963;
  /* 11f10961 jmp 0x11f1097f */
  goto L_11f1097f;
L_11f10963:;
  /* 11f10963 call 0x11f07160 */
  push32(0x11f10968u); f_11f07160();
  /* 11f10968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f1096b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f1096d:;
  /* 11f1096d call 0x11f07150 */
  push32(0x11f10972u); f_11f07150();
  /* 11f10972 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f10978 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f1097f:;
  /* 11f1097f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10982 push eax */
  push32((uint32_t)(EAX));
  /* 11f10983 call 0x11f0dfb0 */
  push32(0x11f10988u); f_11f0dfb0();
  /* 11f10988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f1098b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f1098e:;
  /* 11f1098e mov esp, ebp */
  ESP = (EBP);
  /* 11f10990 pop ebp */
  EBP = (pop32());
  /* 11f10991 ret  */
  ESPCHK(0x11f108c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100209a0 @ 0x11f109a0 (382 bytes, 135 insns) */
void f_11f109a0(void) {
  FTRACE(0x11f109a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f109a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f109a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f109a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f109a5 push 0x11f2bda0 */
  push32((uint32_t)(0x11f2bda0u));
  /* 11f109aa push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f109af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f109b5 push eax */
  push32((uint32_t)(EAX));
  /* 11f109b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f109bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f109c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f109c1 push esi */
  push32((uint32_t)(ESI));
  /* 11f109c2 push edi */
  push32((uint32_t)(EDI));
  /* 11f109c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f109c6 cmp dword ptr [0x11f30a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f109cd jne 0x11f10a12 */
  if (!C.zf) goto L_11f10a12;
  /* 11f109cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f109d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109d7 call dword ptr [0x11f33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33320))), 0x11f109ddu);
  /* 11f109dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f109df je 0x11f109ed */
  if (C.zf) goto L_11f109ed;
  /* 11f109e1 mov dword ptr [0x11f30a60], 1 */
  w32((uint32_t)(0x11f30a60), (0x1u));
  /* 11f109eb jmp 0x11f10a12 */
  goto L_11f10a12;
L_11f109ed:;
  /* 11f109ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f109f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f109f5 call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f109fbu);
  /* 11f109fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f109fd je 0x11f10a0b */
  if (C.zf) goto L_11f10a0b;
  /* 11f109ff mov dword ptr [0x11f30a60], 2 */
  w32((uint32_t)(0x11f30a60), (0x2u));
  /* 11f10a09 jmp 0x11f10a12 */
  goto L_11f10a12;
L_11f10a0b:;
  /* 11f10a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10a0d jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10a12:;
  /* 11f10a12 cmp dword ptr [0x11f30a60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10a19 jne 0x11f10a36 */
  if (!C.zf) goto L_11f10a36;
  /* 11f10a1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f10a1e push eax */
  push32((uint32_t)(EAX));
  /* 11f10a1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f10a22 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10a23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10a26 push edx */
  push32((uint32_t)(EDX));
  /* 11f10a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10a2a push eax */
  push32((uint32_t)(EAX));
  /* 11f10a2b call dword ptr [0x11f33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33320))), 0x11f10a31u);
  /* 11f10a31 jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10a36:;
  /* 11f10a36 cmp dword ptr [0x11f30a60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10a3d jne 0x11f10b1f */
  if (!C.zf) goto L_11f10b1f;
  /* 11f10a43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10a47 jne 0x11f10a52 */
  if (!C.zf) goto L_11f10a52;
  /* 11f10a49 mov ecx, dword ptr [0x11f309d8] */
  ECX = (r32((uint32_t)(0x11f309d8)));
  /* 11f10a4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11f10a52:;
  /* 11f10a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10a56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10a59 push edx */
  push32((uint32_t)(EDX));
  /* 11f10a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10a5d push eax */
  push32((uint32_t)(EAX));
  /* 11f10a5e call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f10a64u);
  /* 11f10a64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f10a67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10a6b jne 0x11f10a74 */
  if (!C.zf) goto L_11f10a74;
  /* 11f10a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10a6f jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10a74:;
  /* 11f10a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f10a7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f10a7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10a81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f10a83 call 0x11f003c0 */
  push32(0x11f10a88u); f_11f003c0();
  /* 11f10a88 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11f10a8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f10a8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f10a91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f10a94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f10a9b jmp 0x11f10ab4 */
  goto L_11f10ab4;
  /* 11f10a9d mov eax, 1 */
  EAX = (0x1u);
  /* 11f10aa2 ret  */
  ESPCHK(0x11f109a0u, _esp0);
  ESP += 4; return;
  /* 11f10aa3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f10aa6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f10aad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f10ab4:;
  /* 11f10ab4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10ab8 jne 0x11f10abe */
  if (!C.zf) goto L_11f10abe;
  /* 11f10aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10abc jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10abe:;
  /* 11f10abe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f10ac1 push edx */
  push32((uint32_t)(EDX));
  /* 11f10ac2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10ac5 push eax */
  push32((uint32_t)(EAX));
  /* 11f10ac6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10acd push edx */
  push32((uint32_t)(EDX));
  /* 11f10ace call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f10ad4u);
  /* 11f10ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10ad6 jne 0x11f10adc */
  if (!C.zf) goto L_11f10adc;
  /* 11f10ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10ada jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10adc:;
  /* 11f10adc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10ae0 jne 0x11f10afd */
  if (!C.zf) goto L_11f10afd;
  /* 11f10ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10ae6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f10ae8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10aeb push eax */
  push32((uint32_t)(EAX));
  /* 11f10aec push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10aee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10af1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10af2 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f10af8u);
  /* 11f10af8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f10afb jmp 0x11f10b1a */
  goto L_11f10b1a;
L_11f10afd:;
  /* 11f10afd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f10b00 push edx */
  push32((uint32_t)(EDX));
  /* 11f10b01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f10b04 push eax */
  push32((uint32_t)(EAX));
  /* 11f10b05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f10b07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10b0a push ecx */
  push32((uint32_t)(ECX));
  /* 11f10b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10b0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10b10 push edx */
  push32((uint32_t)(EDX));
  /* 11f10b11 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f10b17u);
  /* 11f10b17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f10b1a:;
  /* 11f10b1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f10b1d jmp 0x11f10b21 */
  goto L_11f10b21;
L_11f10b1f:;
  /* 11f10b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f10b21:;
  /* 11f10b21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f10b24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f10b27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f10b2e pop edi */
  EDI = (pop32());
  /* 11f10b2f pop esi */
  ESI = (pop32());
  /* 11f10b30 pop ebx */
  EBX = (pop32());
  /* 11f10b31 mov esp, ebp */
  ESP = (EBP);
  /* 11f10b33 pop ebp */
  EBP = (pop32());
  /* 11f10b34 ret  */
  ESPCHK(0x11f109a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020b40 @ 0x11f10b40 (398 bytes, 140 insns) */
void f_11f10b40(void) {
  FTRACE(0x11f10b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10b41 mov ebp, esp */
  EBP = (ESP);
  /* 11f10b43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f10b45 push 0x11f2bdb0 */
  push32((uint32_t)(0x11f2bdb0u));
  /* 11f10b4a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f10b4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f10b55 push eax */
  push32((uint32_t)(EAX));
  /* 11f10b56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f10b5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10b60 push ebx */
  push32((uint32_t)(EBX));
  /* 11f10b61 push esi */
  push32((uint32_t)(ESI));
  /* 11f10b62 push edi */
  push32((uint32_t)(EDI));
  /* 11f10b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f10b66 cmp dword ptr [0x11f30a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10b6d jne 0x11f10bb2 */
  if (!C.zf) goto L_11f10bb2;
  /* 11f10b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b77 call dword ptr [0x11f33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33320))), 0x11f10b7du);
  /* 11f10b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10b7f je 0x11f10b8d */
  if (C.zf) goto L_11f10b8d;
  /* 11f10b81 mov dword ptr [0x11f30a64], 1 */
  w32((uint32_t)(0x11f30a64), (0x1u));
  /* 11f10b8b jmp 0x11f10bb2 */
  goto L_11f10bb2;
L_11f10b8d:;
  /* 11f10b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10b95 call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f10b9bu);
  /* 11f10b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10b9d je 0x11f10bab */
  if (C.zf) goto L_11f10bab;
  /* 11f10b9f mov dword ptr [0x11f30a64], 2 */
  w32((uint32_t)(0x11f30a64), (0x2u));
  /* 11f10ba9 jmp 0x11f10bb2 */
  goto L_11f10bb2;
L_11f10bab:;
  /* 11f10bab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10bad jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10bb2:;
  /* 11f10bb2 cmp dword ptr [0x11f30a64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10bb9 jne 0x11f10bd6 */
  if (!C.zf) goto L_11f10bd6;
  /* 11f10bbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f10bbe push eax */
  push32((uint32_t)(EAX));
  /* 11f10bbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f10bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10bc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10bc6 push edx */
  push32((uint32_t)(EDX));
  /* 11f10bc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10bca push eax */
  push32((uint32_t)(EAX));
  /* 11f10bcb call dword ptr [0x11f33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33344))), 0x11f10bd1u);
  /* 11f10bd1 jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10bd6:;
  /* 11f10bd6 cmp dword ptr [0x11f30a64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10bdd jne 0x11f10ccf */
  if (!C.zf) goto L_11f10ccf;
  /* 11f10be3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10be7 jne 0x11f10bf2 */
  if (!C.zf) goto L_11f10bf2;
  /* 11f10be9 mov ecx, dword ptr [0x11f309d8] */
  ECX = (r32((uint32_t)(0x11f309d8)));
  /* 11f10bef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11f10bf2:;
  /* 11f10bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10bf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10bf9 push edx */
  push32((uint32_t)(EDX));
  /* 11f10bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10bfd push eax */
  push32((uint32_t)(EAX));
  /* 11f10bfe call dword ptr [0x11f33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33320))), 0x11f10c04u);
  /* 11f10c04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f10c07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10c0b jne 0x11f10c14 */
  if (!C.zf) goto L_11f10c14;
  /* 11f10c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10c0f jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10c14:;
  /* 11f10c14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f10c1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f10c1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f10c20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10c23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f10c25 call 0x11f003c0 */
  push32(0x11f10c2au); f_11f003c0();
  /* 11f10c2a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11f10c2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f10c30 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f10c33 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f10c36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f10c3d jmp 0x11f10c56 */
  goto L_11f10c56;
  /* 11f10c3f mov eax, 1 */
  EAX = (0x1u);
  /* 11f10c44 ret  */
  ESPCHK(0x11f10b40u, _esp0);
  ESP += 4; return;
  /* 11f10c45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f10c48 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f10c4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f10c56:;
  /* 11f10c56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10c5a jne 0x11f10c60 */
  if (!C.zf) goto L_11f10c60;
  /* 11f10c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10c5e jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10c60:;
  /* 11f10c60 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f10c63 push edx */
  push32((uint32_t)(EDX));
  /* 11f10c64 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10c67 push eax */
  push32((uint32_t)(EAX));
  /* 11f10c68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10c6b push ecx */
  push32((uint32_t)(ECX));
  /* 11f10c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10c6f push edx */
  push32((uint32_t)(EDX));
  /* 11f10c70 call dword ptr [0x11f33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33320))), 0x11f10c76u);
  /* 11f10c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10c78 jne 0x11f10c7e */
  if (!C.zf) goto L_11f10c7e;
  /* 11f10c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10c7c jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10c7e:;
  /* 11f10c7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10c82 jne 0x11f10ca6 */
  if (!C.zf) goto L_11f10ca6;
  /* 11f10c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10c8c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f10c8e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10c91 push eax */
  push32((uint32_t)(EAX));
  /* 11f10c92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f10c97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10c9a push ecx */
  push32((uint32_t)(ECX));
  /* 11f10c9b call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f10ca1u);
  /* 11f10ca1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f10ca4 jmp 0x11f10cca */
  goto L_11f10cca;
L_11f10ca6:;
  /* 11f10ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10caa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f10cad push edx */
  push32((uint32_t)(EDX));
  /* 11f10cae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f10cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11f10cb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f10cb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f10cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10cb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f10cbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f10cc0 push edx */
  push32((uint32_t)(EDX));
  /* 11f10cc1 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f10cc7u);
  /* 11f10cc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f10cca:;
  /* 11f10cca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f10ccd jmp 0x11f10cd1 */
  goto L_11f10cd1;
L_11f10ccf:;
  /* 11f10ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f10cd1:;
  /* 11f10cd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f10cd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f10cd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f10cde pop edi */
  EDI = (pop32());
  /* 11f10cdf pop esi */
  ESI = (pop32());
  /* 11f10ce0 pop ebx */
  EBX = (pop32());
  /* 11f10ce1 mov esp, ebp */
  ESP = (EBP);
  /* 11f10ce3 pop ebp */
  EBP = (pop32());
  /* 11f10ce4 ret  */
  ESPCHK(0x11f10b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10020cf0 @ 0x11f10cf0 (237 bytes, 81 insns) */
void f_11f10cf0(void) {
  FTRACE(0x11f10cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f10cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10cf4 cmp dword ptr [0x11f31e5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31e5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10cfb jne 0x11f10d12 */
  if (!C.zf) goto L_11f10d12;
  /* 11f10cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f10d00 push eax */
  push32((uint32_t)(EAX));
  /* 11f10d01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d04 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10d05 call 0x11f10fc0 */
  push32(0x11f10d0au); f_11f10fc0();
  /* 11f10d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d0d jmp 0x11f10dd9 */
  goto L_11f10dd9;
L_11f10d12:;
  /* 11f10d12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f10d14 call 0x11efb9c0 */
  push32(0x11f10d19u); f_11efb9c0();
  /* 11f10d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d1c jmp 0x11f10d27 */
  goto L_11f10d27;
L_11f10d1e:;
  /* 11f10d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11f10d27:;
  /* 11f10d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d2a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11f10d2e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11f10d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10d35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f10d3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f10d3d je 0x11f10dbb */
  if (C.zf) goto L_11f10dbb;
  /* 11f10d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10d42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10d47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f10d49 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11f10d4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f10d52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f10d54 je 0x11f10da6 */
  if (C.zf) goto L_11f10da6;
  /* 11f10d56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d5c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f10d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f10d64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f10d66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f10d68 jne 0x11f10d78 */
  if (!C.zf) goto L_11f10d78;
  /* 11f10d6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f10d6c call 0x11efba60 */
  push32(0x11f10d71u); f_11efba60();
  /* 11f10d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10d76 jmp 0x11f10dd9 */
  goto L_11f10dd9;
L_11f10d78:;
  /* 11f10d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10d7b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f10d81 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11f10d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f10d89 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f10d8b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f10d8d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10d90 jne 0x11f10da4 */
  if (!C.zf) goto L_11f10da4;
  /* 11f10d92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f10d94 call 0x11efba60 */
  push32(0x11f10d99u); f_11efba60();
  /* 11f10d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10d9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f10da2 jmp 0x11f10dd9 */
  goto L_11f10dd9;
L_11f10da4:;
  /* 11f10da4 jmp 0x11f10db6 */
  goto L_11f10db6;
L_11f10da6:;
  /* 11f10da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10da9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f10daf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10db2 jne 0x11f10db6 */
  if (!C.zf) goto L_11f10db6;
  /* 11f10db4 jmp 0x11f10dbb */
  goto L_11f10dbb;
L_11f10db6:;
  /* 11f10db6 jmp 0x11f10d1e */
  goto L_11f10d1e;
L_11f10dbb:;
  /* 11f10dbb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f10dbd call 0x11efba60 */
  push32(0x11f10dc2u); f_11efba60();
  /* 11f10dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10dc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10dcd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10dd0 jne 0x11f10dd7 */
  if (!C.zf) goto L_11f10dd7;
  /* 11f10dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10dd5 jmp 0x11f10dd9 */
  goto L_11f10dd9;
L_11f10dd7:;
  /* 11f10dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f10dd9:;
  /* 11f10dd9 mov esp, ebp */
  ESP = (EBP);
  /* 11f10ddb pop ebp */
  EBP = (pop32());
  /* 11f10ddc ret  */
  ESPCHK(0x11f10cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020de0 @ 0x11f10de0 (122 bytes, 39 insns) */
void f_11f10de0(void) {
  FTRACE(0x11f10de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10de1 mov ebp, esp */
  EBP = (ESP);
  /* 11f10de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10de7 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10ded jae 0x11f10e11 */
  if (!C.cf) goto L_11f10e11;
  /* 11f10def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10df2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f10df5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10df8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f10dfb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f10dfe mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f10e05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f10e0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f10e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f10e0f jne 0x11f10e2c */
  if (!C.zf) goto L_11f10e2c;
L_11f10e11:;
  /* 11f10e11 call 0x11f07150 */
  push32(0x11f10e16u); f_11f07150();
  /* 11f10e16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f10e1c call 0x11f07160 */
  push32(0x11f10e21u); f_11f07160();
  /* 11f10e21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f10e27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10e2a jmp 0x11f10e56 */
  goto L_11f10e56;
L_11f10e2c:;
  /* 11f10e2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10e2f push edx */
  push32((uint32_t)(EDX));
  /* 11f10e30 call 0x11f0df20 */
  push32(0x11f10e35u); f_11f0df20();
  /* 11f10e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10e3b push eax */
  push32((uint32_t)(EAX));
  /* 11f10e3c call 0x11f10e60 */
  push32(0x11f10e41u); f_11f10e60();
  /* 11f10e41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f10e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10e4a push ecx */
  push32((uint32_t)(ECX));
  /* 11f10e4b call 0x11f0dfb0 */
  push32(0x11f10e50u); f_11f0dfb0();
  /* 11f10e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f10e56:;
  /* 11f10e56 mov esp, ebp */
  ESP = (EBP);
  /* 11f10e58 pop ebp */
  EBP = (pop32());
  /* 11f10e59 ret  */
  ESPCHK(0x11f10de0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11f10e60 (170 bytes, 59 insns) */
void f_11f10e60(void) {
  FTRACE(0x11f10e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10e61 mov ebp, esp */
  EBP = (ESP);
  /* 11f10e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11f10e64 push esi */
  push32((uint32_t)(ESI));
  /* 11f10e65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10e68 push eax */
  push32((uint32_t)(EAX));
  /* 11f10e69 call 0x11f0dda0 */
  push32(0x11f10e6eu); f_11f0dda0();
  /* 11f10e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e71 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10e74 je 0x11f10eb3 */
  if (C.zf) goto L_11f10eb3;
  /* 11f10e76 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10e7a je 0x11f10e82 */
  if (C.zf) goto L_11f10e82;
  /* 11f10e7c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10e80 jne 0x11f10e9c */
  if (!C.zf) goto L_11f10e9c;
L_11f10e82:;
  /* 11f10e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f10e84 call 0x11f0dda0 */
  push32(0x11f10e89u); f_11f0dda0();
  /* 11f10e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e8c mov esi, eax */
  ESI = (EAX);
  /* 11f10e8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10e90 call 0x11f0dda0 */
  push32(0x11f10e95u); f_11f0dda0();
  /* 11f10e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10e98 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10e9a je 0x11f10eb3 */
  if (C.zf) goto L_11f10eb3;
L_11f10e9c:;
  /* 11f10e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11f10ea0 call 0x11f0dda0 */
  push32(0x11f10ea5u); f_11f0dda0();
  /* 11f10ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11f10ea9 call dword ptr [0x11f3331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3331c))), 0x11f10eafu);
  /* 11f10eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10eb1 je 0x11f10ebc */
  if (C.zf) goto L_11f10ebc;
L_11f10eb3:;
  /* 11f10eb3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f10eba jmp 0x11f10ec5 */
  goto L_11f10ec5;
L_11f10ebc:;
  /* 11f10ebc call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f10ec2u);
  /* 11f10ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f10ec5:;
  /* 11f10ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10ec8 push edx */
  push32((uint32_t)(EDX));
  /* 11f10ec9 call 0x11f0dcc0 */
  push32(0x11f10eceu); f_11f0dcc0();
  /* 11f10ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10ed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10ed4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f10ed7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10eda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f10edd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f10ee0 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f10ee7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11f10eec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10ef0 je 0x11f10f03 */
  if (C.zf) goto L_11f10f03;
  /* 11f10ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f10ef5 push eax */
  push32((uint32_t)(EAX));
  /* 11f10ef6 call 0x11f070b0 */
  push32(0x11f10efbu); f_11f070b0();
  /* 11f10efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10efe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f10f01 jmp 0x11f10f05 */
  goto L_11f10f05;
L_11f10f03:;
  /* 11f10f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f10f05:;
  /* 11f10f05 pop esi */
  ESI = (pop32());
  /* 11f10f06 mov esp, ebp */
  ESP = (EBP);
  /* 11f10f08 pop ebp */
  EBP = (pop32());
  /* 11f10f09 ret  */
  ESPCHK(0x11f10e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10020f10 @ 0x11f10f10 (146 bytes, 52 insns) */
void f_11f10f10(void) {
  FTRACE(0x11f10f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f10f11 mov ebp, esp */
  EBP = (ESP);
  /* 11f10f13 push ebx */
  push32((uint32_t)(EBX));
  /* 11f10f14 push esi */
  push32((uint32_t)(ESI));
  /* 11f10f15 push edi */
  push32((uint32_t)(EDI));
L_11f10f16:;
  /* 11f10f16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10f1a jne 0x11f10f3a */
  if (!C.zf) goto L_11f10f3a;
  /* 11f10f1c push 0x11f2bd90 */
  push32((uint32_t)(0x11f2bd90u));
  /* 11f10f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f10f23 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f10f25 push 0x11f2bdbc */
  push32((uint32_t)(0x11f2bdbcu));
  /* 11f10f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10f2c call 0x11efa680 */
  push32(0x11f10f31u); f_11efa680();
  /* 11f10f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f10f37 jne 0x11f10f3a */
  if (!C.zf) goto L_11f10f3a;
  /* 11f10f39 int3  */
  x86_unimpl("int3 @ 0x11f10f39");
L_11f10f3a:;
  /* 11f10f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f10f3e jne 0x11f10f16 */
  if (!C.zf) goto L_11f10f16;
  /* 11f10f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f10f46 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11f10f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f10f4e je 0x11f10f9d */
  if (C.zf) goto L_11f10f9d;
  /* 11f10f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f53 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f10f56 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f10f59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f10f5b je 0x11f10f9d */
  if (C.zf) goto L_11f10f9d;
  /* 11f10f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f10f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f62 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f10f65 push eax */
  push32((uint32_t)(EAX));
  /* 11f10f66 call 0x11efc550 */
  push32(0x11f10f6bu); f_11efc550();
  /* 11f10f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f10f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f71 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f10f74 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11f10f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f7d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f10f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f83 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11f10f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f8c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11f10f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f10f96 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11f10f9d:;
  /* 11f10f9d pop edi */
  EDI = (pop32());
  /* 11f10f9e pop esi */
  ESI = (pop32());
  /* 11f10f9f pop ebx */
  EBX = (pop32());
  /* 11f10fa0 pop ebp */
  EBP = (pop32());
  /* 11f10fa1 ret  */
  ESPCHK(0x11f10f10u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11f10fc0 (193 bytes, 88 insns) */
void f_11f10fc0(void) {
  FTRACE(0x11f10fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f10fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f10fc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f10fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f10fc7 mov ebx, eax */
  EBX = (EAX);
  /* 11f10fc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f10fcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f10fd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f10fd6 je 0x11f10feb */
  if (C.zf) goto L_11f10feb;
L_11f10fd8:;
  /* 11f10fd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11f10fda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f10fdb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f10fdd je 0x11f10fb0 */
  if (C.zf) { jmp_ind(0x11f10fb0u); return; }
  /* 11f10fdf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11f10fe1 je 0x11f11034 */
  if (C.zf) goto L_11f11034;
  /* 11f10fe3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f10fe9 jne 0x11f10fd8 */
  if (!C.zf) goto L_11f10fd8;
L_11f10feb:;
  /* 11f10feb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11f10fed push edi */
  push32((uint32_t)(EDI));
  /* 11f10fee mov eax, ebx */
  EAX = (EBX);
  /* 11f10ff0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11f10ff3 push esi */
  push32((uint32_t)(ESI));
  /* 11f10ff4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11f10ff6:;
  /* 11f10ff6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f10ff8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11f10ffd mov eax, ecx */
  EAX = (ECX);
  /* 11f10fff mov esi, edi */
  ESI = (EDI);
  /* 11f11001 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11f11003 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f11005 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f11007 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f1100a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f1100d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f1100f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f11011 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f11014 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11f1101a jne 0x11f11038 */
  if (!C.zf) goto L_11f11038;
  /* 11f1101c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11f11021 je 0x11f10ff6 */
  if (C.zf) goto L_11f10ff6;
  /* 11f11023 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11f11028 jne 0x11f11032 */
  if (!C.zf) goto L_11f11032;
  /* 11f1102a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11f11030 jne 0x11f10ff6 */
  if (!C.zf) goto L_11f10ff6;
L_11f11032:;
  /* 11f11032 pop esi */
  ESI = (pop32());
  /* 11f11033 pop edi */
  EDI = (pop32());
L_11f11034:;
  /* 11f11034 pop ebx */
  EBX = (pop32());
  /* 11f11035 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f11037 ret  */
  ESPCHK(0x11f10fc0u, _esp0);
  ESP += 4; return;
L_11f11038:;
  /* 11f11038 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f1103b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f1103d je 0x11f11075 */
  if (C.zf) goto L_11f11075;
  /* 11f1103f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f11041 je 0x11f11032 */
  if (C.zf) goto L_11f11032;
  /* 11f11043 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f11045 je 0x11f1106e */
  if (C.zf) goto L_11f1106e;
  /* 11f11047 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f11049 je 0x11f11032 */
  if (C.zf) goto L_11f11032;
  /* 11f1104b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f1104e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f11050 je 0x11f11067 */
  if (C.zf) goto L_11f11067;
  /* 11f11052 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f11054 je 0x11f11032 */
  if (C.zf) goto L_11f11032;
  /* 11f11056 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f11058 je 0x11f11060 */
  if (C.zf) goto L_11f11060;
  /* 11f1105a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f1105c je 0x11f11032 */
  if (C.zf) goto L_11f11032;
  /* 11f1105e jmp 0x11f10ff6 */
  goto L_11f10ff6;
L_11f11060:;
  /* 11f11060 pop esi */
  ESI = (pop32());
  /* 11f11061 pop edi */
  EDI = (pop32());
  /* 11f11062 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11f11065 pop ebx */
  EBX = (pop32());
  /* 11f11066 ret  */
  ESPCHK(0x11f10fc0u, _esp0);
  ESP += 4; return;
L_11f11067:;
  /* 11f11067 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11f1106a pop esi */
  ESI = (pop32());
  /* 11f1106b pop edi */
  EDI = (pop32());
  /* 11f1106c pop ebx */
  EBX = (pop32());
  /* 11f1106d ret  */
  ESPCHK(0x11f10fc0u, _esp0);
  ESP += 4; return;
L_11f1106e:;
  /* 11f1106e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11f11071 pop esi */
  ESI = (pop32());
  /* 11f11072 pop edi */
  EDI = (pop32());
  /* 11f11073 pop ebx */
  EBX = (pop32());
  /* 11f11074 ret  */
  ESPCHK(0x11f10fc0u, _esp0);
  ESP += 4; return;
L_11f11075:;
  /* 11f11075 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11f11078 pop esi */
  ESI = (pop32());
  /* 11f11079 pop edi */
  EDI = (pop32());
  /* 11f1107a pop ebx */
  EBX = (pop32());
  /* 11f1107b ret  */
  ESPCHK(0x11f10fc0u, _esp0);
  ESP += 4; return;
  /* 11f1107e hlt  */
  x86_unimpl("hlt @ 0x11f1107e");
  /* 11f1107f xor esi, ebx */
  { uint32_t _r=(ESI)^(EBX); ESI = (_r); fl_logic(_r,32); }
}

/* RtlUnwind @ 0x11f1107c (6 bytes, 1 insns) */
void f_11f1107c(void) {
  FTRACE(0x11f1107cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f1107c jmp dword ptr [0x11f333f4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f333f4)))); return;
}

/* Unwind@100280a0 @ 0x11f180a0 (11 bytes, 5 insns) */
void f_11f180a0(void) {
  FTRACE(0x11f180a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f180a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f180a3 push eax */
  push32((uint32_t)(EAX));
  /* 11f180a4 call 0x11ef9a40 */
  push32(0x11f180a9u); f_11ef9a40();
  /* 11f180a9 pop ecx */
  ECX = (pop32());
  /* 11f180aa ret  */
  ESPCHK(0x11f180a0u, _esp0);
  ESP += 4; return;
}

