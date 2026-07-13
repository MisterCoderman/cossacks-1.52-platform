#include "recomp.h"

/* FUN_100068f0 @ 0x12aa68f0 (10 bytes, 5 insns) */
void f_12aa68f0(void) {
  FTRACE(0x12aa68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa68f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa68f3 mov eax, 1 */
  EAX = (0x1u);
  /* 12aa68f8 pop ebp */
  EBP = (pop32());
  /* 12aa68f9 ret  */
  ESPCHK(0x12aa68f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x12aa6900 (173 bytes, 59 insns) */
void f_12aa6900(void) {
  FTRACE(0x12aa6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6900 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6901 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6906 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa690a jbe 0x12aa6913 */
  if ((C.cf||C.zf)) goto L_12aa6913;
  /* 12aa690c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa690e jmp 0x12aa69a9 */
  goto L_12aa69a9;
L_12aa6913:;
  /* 12aa6913 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6915 call 0x12aa6430 */
  push32(0x12aa691au); f_12aa6430();
  /* 12aa691a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa691d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6920 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6921 call 0x12aa6d30 */
  push32(0x12aa6926u); f_12aa6d30();
  /* 12aa6926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6929 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa692c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6930 je 0x12aa6971 */
  if (C.zf) goto L_12aa6971;
  /* 12aa6932 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa6939 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa693c cmp ecx, dword ptr [0x12accc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12accc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6942 ja 0x12aa6962 */
  if ((!C.cf&&!C.zf)) goto L_12aa6962;
  /* 12aa6944 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6947 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa694b push eax */
  push32((uint32_t)(EAX));
  /* 12aa694c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa694f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6950 call 0x12aa7c00 */
  push32(0x12aa6955u); f_12aa7c00();
  /* 12aa6955 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa695a je 0x12aa6962 */
  if (C.zf) goto L_12aa6962;
  /* 12aa695c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa695f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa6962:;
  /* 12aa6962 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6964 call 0x12aa64d0 */
  push32(0x12aa6969u); f_12aa64d0();
  /* 12aa6969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa696c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa696f jmp 0x12aa69a9 */
  goto L_12aa69a9;
L_12aa6971:;
  /* 12aa6971 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6973 call 0x12aa64d0 */
  push32(0x12aa6978u); f_12aa64d0();
  /* 12aa6978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa697b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa697f jne 0x12aa6988 */
  if (!C.zf) goto L_12aa6988;
  /* 12aa6981 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12aa6988:;
  /* 12aa6988 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa698b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa698e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12aa6990 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12aa6993 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6996 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6997 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa699a push edx */
  push32((uint32_t)(EDX));
  /* 12aa699b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12aa699d mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa69a2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa69a3 call dword ptr [0x12ad02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02cc))), 0x12aa69a9u);
L_12aa69a9:;
  /* 12aa69a9 mov esp, ebp */
  ESP = (EBP);
  /* 12aa69ab pop ebp */
  EBP = (pop32());
  /* 12aa69ac ret  */
  ESPCHK(0x12aa6900u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x12aa69b0 (490 bytes, 165 insns) */
void f_12aa69b0(void) {
  FTRACE(0x12aa69b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa69b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa69b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa69b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa69b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa69ba jne 0x12aa69cd */
  if (!C.zf) goto L_12aa69cd;
  /* 12aa69bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa69bf push eax */
  push32((uint32_t)(EAX));
  /* 12aa69c0 call 0x12aa6800 */
  push32(0x12aa69c5u); f_12aa6800();
  /* 12aa69c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa69c8 jmp 0x12aa6b96 */
  goto L_12aa6b96;
L_12aa69cd:;
  /* 12aa69cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa69d1 jne 0x12aa69e6 */
  if (!C.zf) goto L_12aa69e6;
  /* 12aa69d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa69d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa69d7 call 0x12aa6ba0 */
  push32(0x12aa69dcu); f_12aa6ba0();
  /* 12aa69dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa69df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa69e1 jmp 0x12aa6b96 */
  goto L_12aa6b96;
L_12aa69e6:;
  /* 12aa69e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa69ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa69f1 ja 0x12aa6b69 */
  if ((!C.cf&&!C.zf)) goto L_12aa6b69;
  /* 12aa69f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa69f9 call 0x12aa6430 */
  push32(0x12aa69feu); f_12aa6430();
  /* 12aa69fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a04 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6a05 call 0x12aa6d30 */
  push32(0x12aa6a0au); f_12aa6d30();
  /* 12aa6a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6a0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa6a10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6a14 je 0x12aa6b2c */
  if (C.zf) goto L_12aa6b2c;
  /* 12aa6a1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6a1d cmp eax, dword ptr [0x12accc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12accc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6a23 ja 0x12aa6aa0 */
  if ((!C.cf&&!C.zf)) goto L_12aa6aa0;
  /* 12aa6a25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6a29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a2c push edx */
  push32((uint32_t)(EDX));
  /* 12aa6a2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6a30 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6a31 call 0x12aa7c00 */
  push32(0x12aa6a36u); f_12aa7c00();
  /* 12aa6a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa6a3b je 0x12aa6a45 */
  if (C.zf) goto L_12aa6a45;
  /* 12aa6a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa6a43 jmp 0x12aa6aa0 */
  goto L_12aa6aa0;
L_12aa6a45:;
  /* 12aa6a45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6a48 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6a49 call 0x12aa73c0 */
  push32(0x12aa6a4eu); f_12aa73c0();
  /* 12aa6a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6a51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa6a54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6a58 je 0x12aa6aa0 */
  if (C.zf) goto L_12aa6aa0;
  /* 12aa6a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a5d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12aa6a60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6a63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa6a66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6a69 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6a6c jae 0x12aa6a76 */
  if (!C.cf) goto L_12aa6a76;
  /* 12aa6a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6a71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa6a74 jmp 0x12aa6a7c */
  goto L_12aa6a7c;
L_12aa6a76:;
  /* 12aa6a76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6a79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aa6a7c:;
  /* 12aa6a7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6a7f push edx */
  push32((uint32_t)(EDX));
  /* 12aa6a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a83 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6a84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6a87 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6a88 call 0x12aa9310 */
  push32(0x12aa6a8du); f_12aa9310();
  /* 12aa6a8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6a90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6a93 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6a94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6a97 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6a98 call 0x12aa6df0 */
  push32(0x12aa6a9du); f_12aa6df0();
  /* 12aa6a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa6aa0:;
  /* 12aa6aa0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6aa4 jne 0x12aa6b20 */
  if (!C.zf) goto L_12aa6b20;
  /* 12aa6aa6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6aaa jne 0x12aa6ab3 */
  if (!C.zf) goto L_12aa6ab3;
  /* 12aa6aac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12aa6ab3:;
  /* 12aa6ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6ab6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6ab9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6abc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12aa6abf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6ac2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6ac5 mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa6aca push eax */
  push32((uint32_t)(EAX));
  /* 12aa6acb call dword ptr [0x12ad0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0304))), 0x12aa6ad1u);
  /* 12aa6ad1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa6ad4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6ad8 je 0x12aa6b20 */
  if (C.zf) goto L_12aa6b20;
  /* 12aa6ada mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6add mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aa6ae0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6ae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa6ae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6ae9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6aec jae 0x12aa6af6 */
  if (!C.cf) goto L_12aa6af6;
  /* 12aa6aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6af1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aa6af4 jmp 0x12aa6afc */
  goto L_12aa6afc;
L_12aa6af6:;
  /* 12aa6af6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6af9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12aa6afc:;
  /* 12aa6afc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa6aff push eax */
  push32((uint32_t)(EAX));
  /* 12aa6b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6b04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6b07 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6b08 call 0x12aa9310 */
  push32(0x12aa6b0du); f_12aa9310();
  /* 12aa6b0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6b13 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6b14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6b17 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6b18 call 0x12aa6df0 */
  push32(0x12aa6b1du); f_12aa6df0();
  /* 12aa6b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa6b20:;
  /* 12aa6b20 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6b22 call 0x12aa64d0 */
  push32(0x12aa6b27u); f_12aa64d0();
  /* 12aa6b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6b2a jmp 0x12aa6b69 */
  goto L_12aa6b69;
L_12aa6b2c:;
  /* 12aa6b2c push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6b2e call 0x12aa64d0 */
  push32(0x12aa6b33u); f_12aa64d0();
  /* 12aa6b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6b36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6b3a jne 0x12aa6b43 */
  if (!C.zf) goto L_12aa6b43;
  /* 12aa6b3c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12aa6b43:;
  /* 12aa6b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6b46 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6b49 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa6b4c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12aa6b4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6b52 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6b56 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6b59 mov edx, dword ptr [0x12acfe2c] */
  EDX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa6b5f push edx */
  push32((uint32_t)(EDX));
  /* 12aa6b60 call dword ptr [0x12ad02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02cc))), 0x12aa6b66u);
  /* 12aa6b66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aa6b69:;
  /* 12aa6b69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6b6d jne 0x12aa6b78 */
  if (!C.zf) goto L_12aa6b78;
  /* 12aa6b6f cmp dword ptr [0x12ace670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6b76 jne 0x12aa6b7d */
  if (!C.zf) goto L_12aa6b7d;
L_12aa6b78:;
  /* 12aa6b78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6b7b jmp 0x12aa6b96 */
  goto L_12aa6b96;
L_12aa6b7d:;
  /* 12aa6b7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6b80 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6b81 call 0x12aa6770 */
  push32(0x12aa6b86u); f_12aa6770();
  /* 12aa6b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa6b8b jne 0x12aa6b91 */
  if (!C.zf) goto L_12aa6b91;
  /* 12aa6b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6b8f jmp 0x12aa6b96 */
  goto L_12aa6b96;
L_12aa6b91:;
  /* 12aa6b91 jmp 0x12aa69e6 */
  goto L_12aa69e6;
L_12aa6b96:;
  /* 12aa6b96 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6b98 pop ebp */
  EBP = (pop32());
  /* 12aa6b99 ret  */
  ESPCHK(0x12aa69b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12aa6ba0 (104 bytes, 38 insns) */
void f_12aa6ba0(void) {
  FTRACE(0x12aa6ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6ba4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6ba8 jne 0x12aa6bac */
  if (!C.zf) goto L_12aa6bac;
  /* 12aa6baa jmp 0x12aa6c04 */
  goto L_12aa6c04;
L_12aa6bac:;
  /* 12aa6bac push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6bae call 0x12aa6430 */
  push32(0x12aa6bb3u); f_12aa6430();
  /* 12aa6bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6bb9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6bba call 0x12aa6d30 */
  push32(0x12aa6bbfu); f_12aa6d30();
  /* 12aa6bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa6bc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6bc9 je 0x12aa6be7 */
  if (C.zf) goto L_12aa6be7;
  /* 12aa6bcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6bce push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6bcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6bd2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6bd3 call 0x12aa6df0 */
  push32(0x12aa6bd8u); f_12aa6df0();
  /* 12aa6bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6bdb push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6bdd call 0x12aa64d0 */
  push32(0x12aa6be2u); f_12aa64d0();
  /* 12aa6be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6be5 jmp 0x12aa6c04 */
  goto L_12aa6c04;
L_12aa6be7:;
  /* 12aa6be7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6be9 call 0x12aa64d0 */
  push32(0x12aa6beeu); f_12aa64d0();
  /* 12aa6bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6bf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6bf7 mov ecx, dword ptr [0x12acfe2c] */
  ECX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa6bfd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6bfe call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa6c04u);
L_12aa6c04:;
  /* 12aa6c04 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6c06 pop ebp */
  EBP = (pop32());
  /* 12aa6c07 ret  */
  ESPCHK(0x12aa6ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x12aa6c10 (116 bytes, 34 insns) */
void f_12aa6c10(void) {
  FTRACE(0x12aa6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6c11 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6c14 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12aa6c1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6c1d call 0x12aa6430 */
  push32(0x12aa6c22u); f_12aa6430();
  /* 12aa6c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6c25 call 0x12aa8320 */
  push32(0x12aa6c2au); f_12aa8320();
  /* 12aa6c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa6c2c jge 0x12aa6c35 */
  if ((C.sf==C.of)) goto L_12aa6c35;
  /* 12aa6c2e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12aa6c35:;
  /* 12aa6c35 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6c37 call 0x12aa64d0 */
  push32(0x12aa6c3cu); f_12aa64d0();
  /* 12aa6c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6c43 mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa6c48 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6c49 call dword ptr [0x12ad02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02c4))), 0x12aa6c4fu);
  /* 12aa6c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa6c51 jne 0x12aa6c7d */
  if (!C.zf) goto L_12aa6c7d;
  /* 12aa6c53 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aa6c59u);
  /* 12aa6c59 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6c5c jne 0x12aa6c76 */
  if (!C.zf) goto L_12aa6c76;
  /* 12aa6c5e call 0x12aaa910 */
  push32(0x12aa6c63u); f_12aaa910();
  /* 12aa6c63 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12aa6c69 call 0x12aaa900 */
  push32(0x12aa6c6eu); f_12aaa900();
  /* 12aa6c6e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12aa6c74 jmp 0x12aa6c7d */
  goto L_12aa6c7d;
L_12aa6c76:;
  /* 12aa6c76 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12aa6c7d:;
  /* 12aa6c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6c80 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6c82 pop ebp */
  EBP = (pop32());
  /* 12aa6c83 ret  */
  ESPCHK(0x12aa6c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x12aa6c90 (10 bytes, 5 insns) */
void f_12aa6c90(void) {
  FTRACE(0x12aa6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6c91 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6c93 call 0x12aa6c10 */
  push32(0x12aa6c98u); f_12aa6c10();
  /* 12aa6c98 pop ebp */
  EBP = (pop32());
  /* 12aa6c99 ret  */
  ESPCHK(0x12aa6c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x12aa6ca0 (10 bytes, 5 insns) */
void f_12aa6ca0(void) {
  FTRACE(0x12aa6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6ca3 mov eax, dword ptr [0x12accc94] */
  EAX = (r32((uint32_t)(0x12accc94)));
  /* 12aa6ca8 pop ebp */
  EBP = (pop32());
  /* 12aa6ca9 ret  */
  ESPCHK(0x12aa6ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x12aa6cb0 (31 bytes, 11 insns) */
void f_12aa6cb0(void) {
  FTRACE(0x12aa6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6cb3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6cba jbe 0x12aa6cc0 */
  if ((C.cf||C.zf)) goto L_12aa6cc0;
  /* 12aa6cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6cbe jmp 0x12aa6ccd */
  goto L_12aa6ccd;
L_12aa6cc0:;
  /* 12aa6cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6cc3 mov dword ptr [0x12accc94], eax */
  w32((uint32_t)(0x12accc94), (EAX));
  /* 12aa6cc8 mov eax, 1 */
  EAX = (0x1u);
L_12aa6ccd:;
  /* 12aa6ccd pop ebp */
  EBP = (pop32());
  /* 12aa6cce ret  */
  ESPCHK(0x12aa6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x12aa6cd0 (89 bytes, 20 insns) */
void f_12aa6cd0(void) {
  FTRACE(0x12aa6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6cd3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12aa6cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa6cda mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa6cdf push eax */
  push32((uint32_t)(EAX));
  /* 12aa6ce0 call dword ptr [0x12ad0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0304))), 0x12aa6ce6u);
  /* 12aa6ce6 mov dword ptr [0x12acfe28], eax */
  w32((uint32_t)(0x12acfe28), (EAX));
  /* 12aa6ceb cmp dword ptr [0x12acfe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6cf2 jne 0x12aa6cf8 */
  if (!C.zf) goto L_12aa6cf8;
  /* 12aa6cf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6cf6 jmp 0x12aa6d27 */
  goto L_12aa6d27;
L_12aa6cf8:;
  /* 12aa6cf8 mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa6cfe mov dword ptr [0x12acfe1c], ecx */
  w32((uint32_t)(0x12acfe1c), (ECX));
  /* 12aa6d04 mov dword ptr [0x12acfe20], 0 */
  w32((uint32_t)(0x12acfe20), (0x0u));
  /* 12aa6d0e mov dword ptr [0x12acfe24], 0 */
  w32((uint32_t)(0x12acfe24), (0x0u));
  /* 12aa6d18 mov dword ptr [0x12acfe08], 0x10 */
  w32((uint32_t)(0x12acfe08), (0x10u));
  /* 12aa6d22 mov eax, 1 */
  EAX = (0x1u);
L_12aa6d27:;
  /* 12aa6d27 pop ebp */
  EBP = (pop32());
  /* 12aa6d28 ret  */
  ESPCHK(0x12aa6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x12aa6d30 (85 bytes, 29 insns) */
void f_12aa6d30(void) {
  FTRACE(0x12aa6d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6d31 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6d36 mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa6d3b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa6d3e mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa6d44 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6d46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa6d49 mov edx, dword ptr [0x12acfe28] */
  EDX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa6d4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa6d52:;
  /* 12aa6d52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6d55 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6d58 jae 0x12aa6d7f */
  if (!C.cf) goto L_12aa6d7f;
  /* 12aa6d5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6d5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6d60 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6d63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa6d66 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6d6d jae 0x12aa6d74 */
  if (!C.cf) goto L_12aa6d74;
  /* 12aa6d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6d72 jmp 0x12aa6d81 */
  goto L_12aa6d81;
L_12aa6d74:;
  /* 12aa6d74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6d77 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6d7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa6d7d jmp 0x12aa6d52 */
  goto L_12aa6d52;
L_12aa6d7f:;
  /* 12aa6d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa6d81:;
  /* 12aa6d81 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6d83 pop ebp */
  EBP = (pop32());
  /* 12aa6d84 ret  */
  ESPCHK(0x12aa6d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x12aa6d90 (95 bytes, 33 insns) */
void f_12aa6d90(void) {
  FTRACE(0x12aa6d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6d91 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6d99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6d9c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6d9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa6da2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6da5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12aa6da8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa6dab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa6db0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6db3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa6db5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6db8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa6dbb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa6dbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa6dbf jne 0x12aa6de1 */
  if (!C.zf) goto L_12aa6de1;
  /* 12aa6dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6dc4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa6dc9 jne 0x12aa6de1 */
  if (!C.zf) goto L_12aa6de1;
  /* 12aa6dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6dce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6dd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa6dd6 je 0x12aa6de1 */
  if (C.zf) goto L_12aa6de1;
  /* 12aa6dd8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12aa6ddf jmp 0x12aa6de8 */
  goto L_12aa6de8;
L_12aa6de1:;
  /* 12aa6de1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12aa6de8:;
  /* 12aa6de8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6deb mov esp, ebp */
  ESP = (EBP);
  /* 12aa6ded pop ebp */
  EBP = (pop32());
  /* 12aa6dee ret  */
  ESPCHK(0x12aa6d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x12aa6df0 (1485 bytes, 453 insns) */
void f_12aa6df0(void) {
  FTRACE(0x12aa6df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6df1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6df3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6df9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa6dfc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12aa6dff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6e02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6e05 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6e08 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa6e0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6e0e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12aa6e11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa6e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6e17 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa6e1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6e20 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12aa6e27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa6e2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6e2d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6e30 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa6e33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa6e36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa6e38 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6e3b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12aa6e3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa6e41 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6e44 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12aa6e47 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6e4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa6e4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aa6e4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa6e52 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12aa6e55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa6e58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa6e5b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6e5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa6e60 jne 0x12aa6f88 */
  if (!C.zf) goto L_12aa6f88;
  /* 12aa6e66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa6e69 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa6e6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6e6f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa6e72 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6e76 jbe 0x12aa6e7f */
  if ((C.cf||C.zf)) goto L_12aa6e7f;
  /* 12aa6e78 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12aa6e7f:;
  /* 12aa6e7f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6e82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6e85 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa6e88 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6e8b jne 0x12aa6f61 */
  if (!C.zf) goto L_12aa6f61;
  /* 12aa6e91 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6e95 jae 0x12aa6ef6 */
  if (!C.cf) goto L_12aa6ef6;
  /* 12aa6e97 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa6e9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa6e9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa6ea1 not eax */
  EAX = (~(EAX));
  /* 12aa6ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6ea6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6ea9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12aa6ead and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6eaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6eb2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6eb5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12aa6eb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6ebc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6ebf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12aa6ec2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa6ec5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6ec8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6ecb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12aa6ece mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6ed1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6ed4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa6ed8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa6eda jne 0x12aa6ef4 */
  if (!C.zf) goto L_12aa6ef4;
  /* 12aa6edc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa6ee1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa6ee4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa6ee6 not eax */
  EAX = (~(EAX));
  /* 12aa6ee8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6eeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa6eed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa6eef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6ef2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aa6ef4:;
  /* 12aa6ef4 jmp 0x12aa6f61 */
  goto L_12aa6f61;
L_12aa6ef6:;
  /* 12aa6ef6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa6ef9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6efc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa6f01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa6f03 not edx */
  EDX = (~(EDX));
  /* 12aa6f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6f08 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6f0b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12aa6f12 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6f14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6f17 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6f1a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12aa6f21 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6f24 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6f27 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa6f2a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa6f2d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6f30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6f33 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12aa6f36 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa6f39 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6f3c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa6f40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa6f42 jne 0x12aa6f61 */
  if (!C.zf) goto L_12aa6f61;
  /* 12aa6f44 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa6f47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6f4a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa6f4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa6f51 not edx */
  EDX = (~(EDX));
  /* 12aa6f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6f56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa6f59 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6f5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6f5e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12aa6f61:;
  /* 12aa6f61 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6f64 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa6f67 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6f6a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa6f6d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12aa6f70 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6f73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa6f76 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa6f79 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa6f7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa6f7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa6f82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6f85 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12aa6f88:;
  /* 12aa6f88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa6f8b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12aa6f8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6f91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa6f94 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6f98 jbe 0x12aa6fa1 */
  if ((C.cf||C.zf)) goto L_12aa6fa1;
  /* 12aa6f9a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12aa6fa1:;
  /* 12aa6fa1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6fa4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa6fa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa6fa9 jne 0x12aa7105 */
  if (!C.zf) goto L_12aa7105;
  /* 12aa6faf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa6fb2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6fb5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12aa6fb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa6fbb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12aa6fbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6fc1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12aa6fc4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6fc8 jbe 0x12aa6fd1 */
  if ((C.cf||C.zf)) goto L_12aa6fd1;
  /* 12aa6fca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12aa6fd1:;
  /* 12aa6fd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa6fd4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6fd7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12aa6fda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa6fdd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa6fe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6fe3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12aa6fe6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6fea jbe 0x12aa6ff3 */
  if ((C.cf||C.zf)) goto L_12aa6ff3;
  /* 12aa6fec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12aa6ff3:;
  /* 12aa6ff3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa6ff6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6ff9 je 0x12aa70ff */
  if (C.zf) goto L_12aa70ff;
  /* 12aa6fff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7002 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7005 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7008 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa700b jne 0x12aa70e1 */
  if (!C.zf) goto L_12aa70e1;
  /* 12aa7011 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7015 jae 0x12aa7076 */
  if (!C.cf) goto L_12aa7076;
  /* 12aa7017 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa701c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa701f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7021 not edx */
  EDX = (~(EDX));
  /* 12aa7023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7026 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7029 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12aa702d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa702f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7032 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7035 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12aa7039 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa703c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa703f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7042 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa7045 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7048 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa704b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12aa704e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7051 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7054 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa7058 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa705a jne 0x12aa7074 */
  if (!C.zf) goto L_12aa7074;
  /* 12aa705c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7061 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7064 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7066 not edx */
  EDX = (~(EDX));
  /* 12aa7068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa706b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa706d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa706f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa7074:;
  /* 12aa7074 jmp 0x12aa70e1 */
  goto L_12aa70e1;
L_12aa7076:;
  /* 12aa7076 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7079 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa707c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7081 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7083 not eax */
  EAX = (~(EAX));
  /* 12aa7085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7088 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa708b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12aa7092 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7097 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa709a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12aa70a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa70a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa70a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12aa70aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa70ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa70b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa70b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12aa70b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa70b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa70bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa70c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa70c2 jne 0x12aa70e1 */
  if (!C.zf) goto L_12aa70e1;
  /* 12aa70c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa70c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa70ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa70cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa70d1 not eax */
  EAX = (~(EAX));
  /* 12aa70d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa70d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa70d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa70db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa70de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa70e1:;
  /* 12aa70e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa70e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa70e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa70ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa70ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aa70f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa70f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa70f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa70f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa70fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12aa70ff:;
  /* 12aa70ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7102 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12aa7105:;
  /* 12aa7105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7108 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa710b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa710d jne 0x12aa711b */
  if (!C.zf) goto L_12aa711b;
  /* 12aa710f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7112 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7115 je 0x12aa722b */
  if (C.zf) goto L_12aa722b;
L_12aa711b:;
  /* 12aa711b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa711e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7121 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12aa7124 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aa7127 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa712a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa712d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7130 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa7133 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7136 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7139 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12aa713c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa713f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7142 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12aa7145 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7148 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa714b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa714e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa7151 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7154 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7157 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa715a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa715d jne 0x12aa722b */
  if (!C.zf) goto L_12aa722b;
  /* 12aa7163 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7167 jae 0x12aa71c4 */
  if (!C.cf) goto L_12aa71c4;
  /* 12aa7169 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa716c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa716f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa7173 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7176 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7179 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa717c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa717f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7182 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7185 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12aa7188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa718a jne 0x12aa71a2 */
  if (!C.zf) goto L_12aa71a2;
  /* 12aa718c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7191 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7194 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7199 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa719b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa719d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa71a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa71a2:;
  /* 12aa71a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa71a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa71aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa71ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa71af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa71b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12aa71b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa71b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa71bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa71be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12aa71c2 jmp 0x12aa722b */
  goto L_12aa722b;
L_12aa71c4:;
  /* 12aa71c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa71c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa71ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa71ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa71d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa71d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa71d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa71da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa71dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa71e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12aa71e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa71e5 jne 0x12aa7202 */
  if (!C.zf) goto L_12aa7202;
  /* 12aa71e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa71ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa71ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa71f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa71f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa71f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa71fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa71fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa71ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12aa7202:;
  /* 12aa7202 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7205 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7208 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa720d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa720f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7212 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7215 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12aa721c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa721e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7221 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12aa7224 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12aa722b:;
  /* 12aa722b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa722e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7231 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa7233 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7236 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7239 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa723c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12aa723f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7242 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa7244 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7247 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa724a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa724c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa724f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7252 jne 0x12aa73b9 */
  if (!C.zf) goto L_12aa73b9;
  /* 12aa7258 cmp dword ptr [0x12acfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa725f je 0x12aa73a8 */
  if (C.zf) goto L_12aa73a8;
  /* 12aa7265 mov eax, dword ptr [0x12acfe18] */
  EAX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa726a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12aa726d mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7273 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa7276 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7278 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aa727b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12aa7280 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa7285 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7288 push eax */
  push32((uint32_t)(EAX));
  /* 12aa7289 call dword ptr [0x12ad02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e8))), 0x12aa728fu);
  /* 12aa728f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7294 mov ecx, dword ptr [0x12acfe18] */
  ECX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa729a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa729c mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa72a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa72a6 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa72af mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa72b7 mov edx, dword ptr [0x12acfe18] */
  EDX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa72bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12aa72c8 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa72d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12aa72d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa72d6 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa72de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12aa72e1 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa72ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12aa72ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa72f0 jne 0x12aa7306 */
  if (!C.zf) goto L_12aa7306;
  /* 12aa72f2 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa72f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa72fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12aa72fd mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7303 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12aa7306:;
  /* 12aa7306 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa730c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7310 jne 0x12aa73a8 */
  if (!C.zf) goto L_12aa73a8;
  /* 12aa7316 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa731b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa731d mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7322 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa7325 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa7326 call dword ptr [0x12ad02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e8))), 0x12aa732cu);
  /* 12aa732c mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7332 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa7335 push eax */
  push32((uint32_t)(EAX));
  /* 12aa7336 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa7338 mov ecx, dword ptr [0x12acfe2c] */
  ECX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa733e push ecx */
  push32((uint32_t)(ECX));
  /* 12aa733f call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa7345u);
  /* 12aa7345 mov edx, dword ptr [0x12acfe24] */
  EDX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa734b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa734e mov eax, dword ptr [0x12acfe28] */
  EAX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa7353 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7355 mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa735b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa735e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7360 push eax */
  push32((uint32_t)(EAX));
  /* 12aa7361 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7367 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa736a push edx */
  push32((uint32_t)(EDX));
  /* 12aa736b mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa7370 push eax */
  push32((uint32_t)(EAX));
  /* 12aa7371 call 0x12aaa920 */
  push32(0x12aa7376u); f_12aaa920();
  /* 12aa7376 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7379 mov ecx, dword ptr [0x12acfe24] */
  ECX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa737f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7382 mov dword ptr [0x12acfe24], ecx */
  w32((uint32_t)(0x12acfe24), (ECX));
  /* 12aa7388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa738b cmp edx, dword ptr [0x12acfe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7391 jbe 0x12aa739c */
  if ((C.cf||C.zf)) goto L_12aa739c;
  /* 12aa7393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7396 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7399 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12aa739c:;
  /* 12aa739c mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa73a2 mov dword ptr [0x12acfe1c], ecx */
  w32((uint32_t)(0x12acfe1c), (ECX));
L_12aa73a8:;
  /* 12aa73a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa73ab mov dword ptr [0x12acfe20], edx */
  w32((uint32_t)(0x12acfe20), (EDX));
  /* 12aa73b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa73b4 mov dword ptr [0x12acfe18], eax */
  w32((uint32_t)(0x12acfe18), (EAX));
L_12aa73b9:;
  /* 12aa73b9 mov esp, ebp */
  ESP = (EBP);
  /* 12aa73bb pop ebp */
  EBP = (pop32());
  /* 12aa73bc ret  */
  ESPCHK(0x12aa6df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x12aa73c0 (1334 bytes, 427 insns) */
void f_12aa73c0(void) {
  FTRACE(0x12aa73c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa73c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa73c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa73c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa73c6 push esi */
  push32((uint32_t)(ESI));
  /* 12aa73c7 mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa73cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa73cf mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa73d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa73d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12aa73da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa73dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa73e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa73e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12aa73e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa73e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12aa73ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa73ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa73f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa73f6 jge 0x12aa740c */
  if ((C.sf==C.of)) goto L_12aa740c;
  /* 12aa73f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa73fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa73fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7400 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa7403 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12aa740a jmp 0x12aa7421 */
  goto L_12aa7421;
L_12aa740c:;
  /* 12aa740c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aa7413 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7416 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7419 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa741c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa741e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12aa7421:;
  /* 12aa7421 mov ecx, dword ptr [0x12acfe1c] */
  ECX = (r32((uint32_t)(0x12acfe1c)));
  /* 12aa7427 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12aa742a:;
  /* 12aa742a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa742d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7430 jae 0x12aa7456 */
  if (!C.cf) goto L_12aa7456;
  /* 12aa7432 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7435 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa7438 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12aa743a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa743d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7440 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7445 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa7447 je 0x12aa744b */
  if (C.zf) goto L_12aa744b;
  /* 12aa7449 jmp 0x12aa7456 */
  goto L_12aa7456;
L_12aa744b:;
  /* 12aa744b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa744e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7451 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aa7454 jmp 0x12aa742a */
  goto L_12aa742a;
L_12aa7456:;
  /* 12aa7456 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7459 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa745c jne 0x12aa753d */
  if (!C.zf) goto L_12aa753d;
  /* 12aa7462 mov eax, dword ptr [0x12acfe28] */
  EAX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa7467 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12aa746a:;
  /* 12aa746a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa746d cmp ecx, dword ptr [0x12acfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7473 jae 0x12aa7499 */
  if (!C.cf) goto L_12aa7499;
  /* 12aa7475 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7478 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa747b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12aa747d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7480 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7483 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7486 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa748a je 0x12aa748e */
  if (C.zf) goto L_12aa748e;
  /* 12aa748c jmp 0x12aa7499 */
  goto L_12aa7499;
L_12aa748e:;
  /* 12aa748e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7491 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7494 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa7497 jmp 0x12aa746a */
  goto L_12aa746a;
L_12aa7499:;
  /* 12aa7499 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa749c cmp ecx, dword ptr [0x12acfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74a2 jne 0x12aa753d */
  if (!C.zf) goto L_12aa753d;
L_12aa74a8:;
  /* 12aa74a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74ae jae 0x12aa74c6 */
  if (!C.cf) goto L_12aa74c6;
  /* 12aa74b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74b7 je 0x12aa74bb */
  if (C.zf) goto L_12aa74bb;
  /* 12aa74b9 jmp 0x12aa74c6 */
  goto L_12aa74c6;
L_12aa74bb:;
  /* 12aa74bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa74c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aa74c4 jmp 0x12aa74a8 */
  goto L_12aa74a8;
L_12aa74c6:;
  /* 12aa74c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74cc jne 0x12aa7517 */
  if (!C.zf) goto L_12aa7517;
  /* 12aa74ce mov eax, dword ptr [0x12acfe28] */
  EAX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa74d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12aa74d6:;
  /* 12aa74d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74d9 cmp ecx, dword ptr [0x12acfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74df jae 0x12aa74f7 */
  if (!C.cf) goto L_12aa74f7;
  /* 12aa74e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa74e8 je 0x12aa74ec */
  if (C.zf) goto L_12aa74ec;
  /* 12aa74ea jmp 0x12aa74f7 */
  goto L_12aa74f7;
L_12aa74ec:;
  /* 12aa74ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa74f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa74f5 jmp 0x12aa74d6 */
  goto L_12aa74d6;
L_12aa74f7:;
  /* 12aa74f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa74fa cmp ecx, dword ptr [0x12acfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7500 jne 0x12aa7517 */
  if (!C.zf) goto L_12aa7517;
  /* 12aa7502 call 0x12aa7900 */
  push32(0x12aa7507u); f_12aa7900();
  /* 12aa7507 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa750a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa750e jne 0x12aa7517 */
  if (!C.zf) goto L_12aa7517;
  /* 12aa7510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7512 jmp 0x12aa78f1 */
  goto L_12aa78f1;
L_12aa7517:;
  /* 12aa7517 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa751a push edx */
  push32((uint32_t)(EDX));
  /* 12aa751b call 0x12aa7a10 */
  push32(0x12aa7520u); f_12aa7a10();
  /* 12aa7520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7523 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7526 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa7529 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa752b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa752e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa7531 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7534 jne 0x12aa753d */
  if (!C.zf) goto L_12aa753d;
  /* 12aa7536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7538 jmp 0x12aa78f1 */
  goto L_12aa78f1;
L_12aa753d:;
  /* 12aa753d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7540 mov dword ptr [0x12acfe1c], edx */
  w32((uint32_t)(0x12acfe1c), (EDX));
  /* 12aa7546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7549 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa754c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12aa754f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7552 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa7554 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12aa7557 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa755b je 0x12aa7580 */
  if (C.zf) goto L_12aa7580;
  /* 12aa755d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7560 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7563 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa7566 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12aa756a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa756d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7570 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa7573 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12aa757a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12aa757c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa757e jne 0x12aa75b5 */
  if (!C.zf) goto L_12aa75b5;
L_12aa7580:;
  /* 12aa7580 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12aa7587:;
  /* 12aa7587 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa758a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa758d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa7590 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7594 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7597 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa759a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa759d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12aa75a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12aa75a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa75a8 jne 0x12aa75b5 */
  if (!C.zf) goto L_12aa75b5;
  /* 12aa75aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa75ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa75b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12aa75b3 jmp 0x12aa7587 */
  goto L_12aa7587;
L_12aa75b5:;
  /* 12aa75b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa75b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa75be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa75c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12aa75c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa75cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12aa75d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa75d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa75d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa75db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12aa75df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa75e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa75e6 jne 0x12aa7602 */
  if (!C.zf) goto L_12aa7602;
  /* 12aa75e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12aa75ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa75f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa75f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aa75f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12aa75ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12aa7602:;
  /* 12aa7602 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7606 jl 0x12aa761b */
  if ((C.sf!=C.of)) goto L_12aa761b;
  /* 12aa7608 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa760b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aa760d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12aa7610 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7613 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7616 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12aa7619 jmp 0x12aa7602 */
  goto L_12aa7602;
L_12aa761b:;
  /* 12aa761b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa761e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7621 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12aa7625 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa7628 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa762b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa762d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7630 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa7633 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7636 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12aa7639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa763c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aa763f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7643 jle 0x12aa764c */
  if ((C.zf||C.sf!=C.of)) goto L_12aa764c;
  /* 12aa7645 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12aa764c:;
  /* 12aa764c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa764f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7652 je 0x12aa7870 */
  if (C.zf) goto L_12aa7870;
  /* 12aa7658 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa765b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa765e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7661 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7664 jne 0x12aa773a */
  if (!C.zf) goto L_12aa773a;
  /* 12aa766a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa766e jge 0x12aa76cf */
  if ((C.sf==C.of)) goto L_12aa76cf;
  /* 12aa7670 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7675 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7678 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa767a not eax */
  EAX = (~(EAX));
  /* 12aa767c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa767f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7682 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12aa7686 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7688 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa768b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa768e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12aa7692 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7695 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7698 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12aa769b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa769e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa76a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa76a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12aa76a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa76aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa76ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa76b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa76b3 jne 0x12aa76cd */
  if (!C.zf) goto L_12aa76cd;
  /* 12aa76b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa76ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa76bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa76bf not eax */
  EAX = (~(EAX));
  /* 12aa76c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa76c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa76c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa76c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa76cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aa76cd:;
  /* 12aa76cd jmp 0x12aa773a */
  goto L_12aa773a;
L_12aa76cf:;
  /* 12aa76cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa76d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa76d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa76da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa76dc not edx */
  EDX = (~(EDX));
  /* 12aa76de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa76e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa76e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12aa76eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa76ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa76f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa76f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12aa76fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa76fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7700 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7703 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa7706 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7709 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa770c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12aa770f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7712 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7715 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa7719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa771b jne 0x12aa773a */
  if (!C.zf) goto L_12aa773a;
  /* 12aa771d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7720 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7723 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7728 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa772a not edx */
  EDX = (~(EDX));
  /* 12aa772c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa772f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7732 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7734 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7737 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12aa773a:;
  /* 12aa773a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa773d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa7740 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7743 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa7746 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12aa7749 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa774c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa774f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7752 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa7755 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa7758 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa775c je 0x12aa7870 */
  if (C.zf) goto L_12aa7870;
  /* 12aa7762 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7768 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12aa776b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa776e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7774 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7777 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aa777a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa777d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7780 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa7783 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7786 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7789 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12aa778c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa778f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7792 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7795 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12aa7798 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa779b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa779e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa77a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa77a4 jne 0x12aa7870 */
  if (!C.zf) goto L_12aa7870;
  /* 12aa77aa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa77ae jge 0x12aa780a */
  if ((C.sf==C.of)) goto L_12aa780a;
  /* 12aa77b0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa77b3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa77b6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa77ba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa77bd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa77c0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12aa77c3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa77c5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa77c8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa77cb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12aa77ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa77d0 jne 0x12aa77e8 */
  if (!C.zf) goto L_12aa77e8;
  /* 12aa77d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa77d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa77da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa77dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa77df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa77e1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa77e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa77e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aa77e8:;
  /* 12aa77e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa77ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa77f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa77f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa77f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa77f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12aa77fc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa77fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7801 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7804 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12aa7808 jmp 0x12aa7870 */
  goto L_12aa7870;
L_12aa780a:;
  /* 12aa780a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa780d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7810 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa7814 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7817 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa781a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12aa781d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa781f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7822 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7825 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12aa7828 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa782a jne 0x12aa7847 */
  if (!C.zf) goto L_12aa7847;
  /* 12aa782c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa782f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7832 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7837 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7839 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa783c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa783f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7841 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7844 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa7847:;
  /* 12aa7847 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa784a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa784d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7852 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7854 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7857 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa785a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12aa7861 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7863 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7866 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa7869 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12aa7870:;
  /* 12aa7870 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7874 je 0x12aa788a */
  if (C.zf) goto L_12aa788a;
  /* 12aa7876 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa787c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aa787e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7881 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7887 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12aa788a:;
  /* 12aa788a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa788d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7890 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa7893 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7896 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7899 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa789c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa789e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa78a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa78a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa78a7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa78aa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12aa78ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa78b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa78b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa78b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa78b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa78ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa78bd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa78bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa78c1 jne 0x12aa78e3 */
  if (!C.zf) goto L_12aa78e3;
  /* 12aa78c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa78c6 cmp eax, dword ptr [0x12acfe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa78cc jne 0x12aa78e3 */
  if (!C.zf) goto L_12aa78e3;
  /* 12aa78ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa78d1 cmp ecx, dword ptr [0x12acfe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa78d7 jne 0x12aa78e3 */
  if (!C.zf) goto L_12aa78e3;
  /* 12aa78d9 mov dword ptr [0x12acfe20], 0 */
  w32((uint32_t)(0x12acfe20), (0x0u));
L_12aa78e3:;
  /* 12aa78e3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12aa78e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa78e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa78eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa78ee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12aa78f1:;
  /* 12aa78f1 pop esi */
  ESI = (pop32());
  /* 12aa78f2 mov esp, ebp */
  ESP = (EBP);
  /* 12aa78f4 pop ebp */
  EBP = (pop32());
  /* 12aa78f5 ret  */
  ESPCHK(0x12aa73c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x12aa7900 (271 bytes, 78 insns) */
void f_12aa7900(void) {
  FTRACE(0x12aa7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa7900 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa7901 mov ebp, esp */
  EBP = (ESP);
  /* 12aa7903 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa7904 mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa7909 cmp eax, dword ptr [0x12acfe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acfe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa790f jne 0x12aa795b */
  if (!C.zf) goto L_12aa795b;
  /* 12aa7911 mov ecx, dword ptr [0x12acfe08] */
  ECX = (r32((uint32_t)(0x12acfe08)));
  /* 12aa7917 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa791a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa791d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa791e mov edx, dword ptr [0x12acfe28] */
  EDX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa7924 push edx */
  push32((uint32_t)(EDX));
  /* 12aa7925 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa7927 mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa792c push eax */
  push32((uint32_t)(EAX));
  /* 12aa792d call dword ptr [0x12ad02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02cc))), 0x12aa7933u);
  /* 12aa7933 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa7936 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa793a jne 0x12aa7943 */
  if (!C.zf) goto L_12aa7943;
  /* 12aa793c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa793e jmp 0x12aa7a0b */
  goto L_12aa7a0b;
L_12aa7943:;
  /* 12aa7943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7946 mov dword ptr [0x12acfe28], ecx */
  w32((uint32_t)(0x12acfe28), (ECX));
  /* 12aa794c mov edx, dword ptr [0x12acfe08] */
  EDX = (r32((uint32_t)(0x12acfe08)));
  /* 12aa7952 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7955 mov dword ptr [0x12acfe08], edx */
  w32((uint32_t)(0x12acfe08), (EDX));
L_12aa795b:;
  /* 12aa795b mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa7960 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa7963 mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa7969 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa796b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa796e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12aa7973 push 8 */
  push32((uint32_t)(0x8u));
  /* 12aa7975 mov edx, dword ptr [0x12acfe2c] */
  EDX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa797b push edx */
  push32((uint32_t)(EDX));
  /* 12aa797c call dword ptr [0x12ad0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0304))), 0x12aa7982u);
  /* 12aa7982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7985 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12aa7988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa798b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa798f jne 0x12aa7995 */
  if (!C.zf) goto L_12aa7995;
  /* 12aa7991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7993 jmp 0x12aa7a0b */
  goto L_12aa7a0b;
L_12aa7995:;
  /* 12aa7995 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa7997 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12aa799c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12aa79a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa79a3 call dword ptr [0x12ad030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad030c))), 0x12aa79a9u);
  /* 12aa79a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12aa79af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa79b6 jne 0x12aa79d2 */
  if (!C.zf) goto L_12aa79d2;
  /* 12aa79b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa79be push ecx */
  push32((uint32_t)(ECX));
  /* 12aa79bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa79c1 mov edx, dword ptr [0x12acfe2c] */
  EDX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa79c7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa79c8 call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa79ceu);
  /* 12aa79ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa79d0 jmp 0x12aa7a0b */
  goto L_12aa7a0b;
L_12aa79d2:;
  /* 12aa79d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa79db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12aa79e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12aa79ef mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa79f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa79f7 mov dword ptr [0x12acfe24], eax */
  w32((uint32_t)(0x12acfe24), (EAX));
  /* 12aa79fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa79ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa7a02 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12aa7a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa7a0b:;
  /* 12aa7a0b mov esp, ebp */
  ESP = (EBP);
  /* 12aa7a0d pop ebp */
  EBP = (pop32());
  /* 12aa7a0e ret  */
  ESPCHK(0x12aa7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x12aa7a10 (494 bytes, 149 insns) */
void f_12aa7a10(void) {
  FTRACE(0x12aa7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa7a11 mov ebp, esp */
  EBP = (ESP);
  /* 12aa7a13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7a19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa7a1c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12aa7a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7a22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa7a25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa7a28 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12aa7a2f:;
  /* 12aa7a2f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7a33 jl 0x12aa7a48 */
  if ((C.sf!=C.of)) goto L_12aa7a48;
  /* 12aa7a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7a38 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12aa7a3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa7a3d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7a40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7a43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12aa7a46 jmp 0x12aa7a2f */
  goto L_12aa7a2f;
L_12aa7a48:;
  /* 12aa7a48 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7a4b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa7a51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7a54 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12aa7a5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa7a5e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12aa7a65 jmp 0x12aa7a70 */
  goto L_12aa7a70;
L_12aa7a67:;
  /* 12aa7a67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7a6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7a6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12aa7a70:;
  /* 12aa7a70 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7a74 jge 0x12aa7a96 */
  if ((C.sf==C.of)) goto L_12aa7a96;
  /* 12aa7a76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7a79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7a7c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12aa7a7f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa7a82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7a85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7a88 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12aa7a8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7a8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7a91 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12aa7a94 jmp 0x12aa7a67 */
  goto L_12aa7a67;
L_12aa7a96:;
  /* 12aa7a96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7a99 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12aa7a9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7a9f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa7aa2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7aa4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa7aa7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa7aa9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12aa7aae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa7ab3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7ab6 push edx */
  push32((uint32_t)(EDX));
  /* 12aa7ab7 call dword ptr [0x12ad030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad030c))), 0x12aa7abdu);
  /* 12aa7abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa7abf jne 0x12aa7ac9 */
  if (!C.zf) goto L_12aa7ac9;
  /* 12aa7ac1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7ac4 jmp 0x12aa7bfa */
  goto L_12aa7bfa;
L_12aa7ac9:;
  /* 12aa7ac9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7acc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7ad1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12aa7ad4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7ad7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa7ada jmp 0x12aa7ae8 */
  goto L_12aa7ae8;
L_12aa7adc:;
  /* 12aa7adc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7adf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7ae5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa7ae8:;
  /* 12aa7ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7aeb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7aee ja 0x12aa7b4d */
  if ((!C.cf&&!C.zf)) goto L_12aa7b4d;
  /* 12aa7af0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7af3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12aa7afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7afd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12aa7b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7b0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b0d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa7b10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b13 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12aa7b19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b1c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b25 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa7b28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b2b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7b31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa7b37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b3a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b3f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aa7b42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa7b45 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12aa7b4b jmp 0x12aa7adc */
  goto L_12aa7adc;
L_12aa7b4d:;
  /* 12aa7b4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7b50 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b56 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aa7b59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7b5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b62 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12aa7b65 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa7b6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa7b6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b71 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b74 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12aa7b77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7b7a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7b7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b80 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12aa7b83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa7b89 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa7b8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7b8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7b92 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12aa7b95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7b98 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7b9b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12aa7ba3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7ba6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7ba9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12aa7bb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7bb7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12aa7bbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7bbe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12aa7bc1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa7bc4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7bc7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12aa7bca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa7bcc jne 0x12aa7bdd */
  if (!C.zf) goto L_12aa7bdd;
  /* 12aa7bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7bd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7bd4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7bda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa7bdd:;
  /* 12aa7bdd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7be2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7be5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7be7 not edx */
  EDX = (~(EDX));
  /* 12aa7be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7bec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa7bef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7bf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa7bf7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12aa7bfa:;
  /* 12aa7bfa mov esp, ebp */
  ESP = (EBP);
  /* 12aa7bfc pop ebp */
  EBP = (pop32());
  /* 12aa7bfd ret  */
  ESPCHK(0x12aa7a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x12aa7c00 (1515 bytes, 489 insns) */
void f_12aa7c00(void) {
  FTRACE(0x12aa7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa7c01 mov ebp, esp */
  EBP = (ESP);
  /* 12aa7c03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7c06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa7c09 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7c0c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12aa7c0e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12aa7c11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7c14 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa7c17 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12aa7c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7c1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa7c20 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7c23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa7c26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa7c29 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12aa7c2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa7c2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7c32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa7c38 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7c3b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12aa7c42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aa7c45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa7c48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7c4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aa7c4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7c51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa7c53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7c56 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12aa7c59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7c5c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7c5f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12aa7c62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7c65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa7c67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa7c6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7c6d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7c70 jle 0x12aa7f26 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa7f26;
  /* 12aa7c76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7c79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7c7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa7c7e jne 0x12aa7c8b */
  if (!C.zf) goto L_12aa7c8b;
  /* 12aa7c80 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7c83 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7c86 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7c89 jle 0x12aa7c92 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa7c92;
L_12aa7c8b:;
  /* 12aa7c8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7c8d jmp 0x12aa81e7 */
  goto L_12aa81e7;
L_12aa7c92:;
  /* 12aa7c92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7c95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12aa7c98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7c9b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa7c9e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7ca2 jbe 0x12aa7cab */
  if ((C.cf||C.zf)) goto L_12aa7cab;
  /* 12aa7ca4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12aa7cab:;
  /* 12aa7cab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7cae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7cb1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7cb4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7cb7 jne 0x12aa7d8d */
  if (!C.zf) goto L_12aa7d8d;
  /* 12aa7cbd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7cc1 jae 0x12aa7d22 */
  if (!C.cf) goto L_12aa7d22;
  /* 12aa7cc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7cc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7ccb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7ccd not edx */
  EDX = (~(EDX));
  /* 12aa7ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7cd2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7cd5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12aa7cd9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7cde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7ce1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12aa7ce5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7ce8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7ceb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7cee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa7cf1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7cf4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7cf7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12aa7cfa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7cfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7d00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa7d04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa7d06 jne 0x12aa7d20 */
  if (!C.zf) goto L_12aa7d20;
  /* 12aa7d08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7d0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7d10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7d12 not edx */
  EDX = (~(EDX));
  /* 12aa7d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7d17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa7d19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7d1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7d1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa7d20:;
  /* 12aa7d20 jmp 0x12aa7d8d */
  goto L_12aa7d8d;
L_12aa7d22:;
  /* 12aa7d22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7d25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7d28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7d2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7d2f not eax */
  EAX = (~(EAX));
  /* 12aa7d31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7d34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7d37 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12aa7d3e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7d40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7d43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7d46 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12aa7d4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7d50 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7d53 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12aa7d56 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa7d59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7d5c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7d5f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12aa7d62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7d65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7d68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa7d6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa7d6e jne 0x12aa7d8d */
  if (!C.zf) goto L_12aa7d8d;
  /* 12aa7d70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7d73 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7d76 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7d7b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7d7d not eax */
  EAX = (~(EAX));
  /* 12aa7d7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7d82 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7d85 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7d8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa7d8d:;
  /* 12aa7d8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7d90 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa7d93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7d96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7d99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aa7d9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7d9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa7da2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7da5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa7da8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12aa7dab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7dae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7db1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7db4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa7db7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7dbb jle 0x12aa7f07 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa7f07;
  /* 12aa7dc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7dc4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7dc7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12aa7dca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7dcd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa7dd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7dd3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aa7dd6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7dda jbe 0x12aa7de3 */
  if ((C.cf||C.zf)) goto L_12aa7de3;
  /* 12aa7ddc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12aa7de3:;
  /* 12aa7de3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7de6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa7de9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12aa7dec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aa7def mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7df2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7df5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7df8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa7dfb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7dfe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7e01 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12aa7e04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa7e07 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7e0a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12aa7e0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7e10 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7e13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7e16 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa7e19 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7e1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7e1f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7e22 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7e25 jne 0x12aa7ef3 */
  if (!C.zf) goto L_12aa7ef3;
  /* 12aa7e2b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7e2f jae 0x12aa7e8c */
  if (!C.cf) goto L_12aa7e8c;
  /* 12aa7e31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e34 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7e37 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa7e3b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e3e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7e41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7e44 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa7e47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e4a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7e4d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12aa7e50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa7e52 jne 0x12aa7e6a */
  if (!C.zf) goto L_12aa7e6a;
  /* 12aa7e54 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7e59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7e5c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7e61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa7e63 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7e68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa7e6a:;
  /* 12aa7e6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7e6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7e72 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7e74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7e77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e7a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12aa7e7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7e80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7e83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e86 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12aa7e8a jmp 0x12aa7ef3 */
  goto L_12aa7ef3;
L_12aa7e8c:;
  /* 12aa7e8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e8f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7e92 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa7e96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7e99 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7e9c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7e9f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa7ea2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7ea5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7ea8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12aa7eab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa7ead jne 0x12aa7eca */
  if (!C.zf) goto L_12aa7eca;
  /* 12aa7eaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7eb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7eb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7eba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7ebf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa7ec2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa7ec7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12aa7eca:;
  /* 12aa7eca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7ecd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7ed0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa7ed5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa7ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7eda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7edd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12aa7ee4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa7ee6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7ee9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7eec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12aa7ef3:;
  /* 12aa7ef3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7ef6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7ef9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa7efb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7efe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7f04 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12aa7f07:;
  /* 12aa7f07 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7f0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f0d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7f10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa7f12 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7f1b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f1e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12aa7f21 jmp 0x12aa81e2 */
  goto L_12aa81e2;
L_12aa7f26:;
  /* 12aa7f26 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7f29 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7f2c jge 0x12aa81e2 */
  if ((C.sf==C.of)) goto L_12aa81e2;
  /* 12aa7f32 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7f3b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa7f3d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aa7f40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f43 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7f46 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f49 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12aa7f4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa7f4f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7f52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aa7f55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7f58 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa7f5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa7f61 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12aa7f64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7f67 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aa7f6a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7f6e jbe 0x12aa7f77 */
  if ((C.cf||C.zf)) goto L_12aa7f77;
  /* 12aa7f70 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12aa7f77:;
  /* 12aa7f77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7f7a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa7f7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa7f7f jne 0x12aa80c0 */
  if (!C.zf) goto L_12aa80c0;
  /* 12aa7f85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa7f88 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12aa7f8b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa7f8e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa7f91 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7f95 jbe 0x12aa7f9e */
  if ((C.cf||C.zf)) goto L_12aa7f9e;
  /* 12aa7f97 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12aa7f9e:;
  /* 12aa7f9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7fa1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa7fa4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa7fa7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7faa jne 0x12aa8080 */
  if (!C.zf) goto L_12aa8080;
  /* 12aa7fb0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa7fb4 jae 0x12aa8015 */
  if (!C.cf) goto L_12aa8015;
  /* 12aa7fb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa7fbb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa7fbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa7fc0 not edx */
  EDX = (~(EDX));
  /* 12aa7fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7fc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7fc8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12aa7fcc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa7fce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa7fd1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7fd4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12aa7fd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7fdb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7fde mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa7fe1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa7fe4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7fe7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7fea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12aa7fed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa7ff0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa7ff3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa7ff7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa7ff9 jne 0x12aa8013 */
  if (!C.zf) goto L_12aa8013;
  /* 12aa7ffb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa8000 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa8003 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa8005 not edx */
  EDX = (~(EDX));
  /* 12aa8007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa800a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa800c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa800e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8011 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa8013:;
  /* 12aa8013 jmp 0x12aa8080 */
  goto L_12aa8080;
L_12aa8015:;
  /* 12aa8015 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa8018 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa801b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa8020 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa8022 not eax */
  EAX = (~(EAX));
  /* 12aa8024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8027 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa802a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12aa8031 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8033 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8036 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8039 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12aa8040 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8043 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8046 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12aa8049 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa804c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa804f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8052 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12aa8055 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8058 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa805b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aa805f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa8061 jne 0x12aa8080 */
  if (!C.zf) goto L_12aa8080;
  /* 12aa8063 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa8066 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8069 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa806e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa8070 not eax */
  EAX = (~(EAX));
  /* 12aa8072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8075 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa8078 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa807a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa807d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa8080:;
  /* 12aa8080 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa8083 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa8086 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa8089 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa808c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aa808f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa8092 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa8095 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa8098 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa809b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12aa809e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa80a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa80a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa80a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa80aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12aa80ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa80b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aa80b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa80b7 jbe 0x12aa80c0 */
  if ((C.cf||C.zf)) goto L_12aa80c0;
  /* 12aa80b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12aa80c0:;
  /* 12aa80c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa80c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa80c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12aa80c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aa80cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa80d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa80d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aa80d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa80de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa80e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa80e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12aa80ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa80f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12aa80f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa80fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa80ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8102 jne 0x12aa81ce */
  if (!C.zf) goto L_12aa81ce;
  /* 12aa8108 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa810c jae 0x12aa8168 */
  if (!C.cf) goto L_12aa8168;
  /* 12aa810e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8111 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8114 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa8118 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa811b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa811e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12aa8121 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa8123 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8126 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8129 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12aa812c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa812e jne 0x12aa8146 */
  if (!C.zf) goto L_12aa8146;
  /* 12aa8130 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa8135 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8138 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa813a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa813d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa813f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8141 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8144 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aa8146:;
  /* 12aa8146 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa814b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa814e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa8150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8153 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8156 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12aa815a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa815c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa815f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8162 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12aa8166 jmp 0x12aa81ce */
  goto L_12aa81ce;
L_12aa8168:;
  /* 12aa8168 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa816b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa816e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12aa8172 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8175 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8178 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12aa817b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa817d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa8180 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8183 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12aa8186 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa8188 jne 0x12aa81a5 */
  if (!C.zf) goto L_12aa81a5;
  /* 12aa818a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa818d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12aa8195 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12aa8197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa819a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa819d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa819f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa81a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12aa81a5:;
  /* 12aa81a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa81a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa81ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa81b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa81b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa81b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa81b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12aa81bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa81c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa81c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aa81c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12aa81ce:;
  /* 12aa81ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa81d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa81d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aa81d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa81d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa81dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa81df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12aa81e2:;
  /* 12aa81e2 mov eax, 1 */
  EAX = (0x1u);
L_12aa81e7:;
  /* 12aa81e7 mov esp, ebp */
  ESP = (EBP);
  /* 12aa81e9 pop ebp */
  EBP = (pop32());
  /* 12aa81ea ret  */
  ESPCHK(0x12aa7c00u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x12aa81f0 (304 bytes, 79 insns) */
void f_12aa81f0(void) {
  FTRACE(0x12aa81f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa81f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa81f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa81f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa81f4 cmp dword ptr [0x12acfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa81fb je 0x12aa831c */
  if (C.zf) goto L_12aa831c;
  /* 12aa8201 mov eax, dword ptr [0x12acfe18] */
  EAX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa8206 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12aa8209 mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa820f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa8212 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8214 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa8217 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12aa821c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa8221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8224 push eax */
  push32((uint32_t)(EAX));
  /* 12aa8225 call dword ptr [0x12ad02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e8))), 0x12aa822bu);
  /* 12aa822b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa8230 mov ecx, dword ptr [0x12acfe18] */
  ECX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa8236 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa8238 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa823d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa8240 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8242 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8248 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aa824b mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8250 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa8253 mov edx, dword ptr [0x12acfe18] */
  EDX = (r32((uint32_t)(0x12acfe18)));
  /* 12aa8259 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12aa8264 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8269 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa826c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12aa826f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12aa8272 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8277 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa827a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12aa827d mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8283 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa8286 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12aa828a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa828c jne 0x12aa82a2 */
  if (!C.zf) goto L_12aa82a2;
  /* 12aa828e mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa8294 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa8297 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12aa8299 mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa829f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12aa82a2:;
  /* 12aa82a2 mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa82a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa82ac jne 0x12aa8312 */
  if (!C.zf) goto L_12aa8312;
  /* 12aa82ae cmp dword ptr [0x12acfe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa82b5 jle 0x12aa8312 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa8312;
  /* 12aa82b7 mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa82bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa82bf push ecx */
  push32((uint32_t)(ECX));
  /* 12aa82c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa82c2 mov edx, dword ptr [0x12acfe2c] */
  EDX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa82c8 push edx */
  push32((uint32_t)(EDX));
  /* 12aa82c9 call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa82cfu);
  /* 12aa82cf mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa82d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa82d7 mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa82dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa82df mov edx, dword ptr [0x12acfe20] */
  EDX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa82e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa82e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa82ea push ecx */
  push32((uint32_t)(ECX));
  /* 12aa82eb mov eax, dword ptr [0x12acfe20] */
  EAX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa82f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa82f3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa82f4 mov ecx, dword ptr [0x12acfe20] */
  ECX = (r32((uint32_t)(0x12acfe20)));
  /* 12aa82fa push ecx */
  push32((uint32_t)(ECX));
  /* 12aa82fb call 0x12aaa920 */
  push32(0x12aa8300u); f_12aaa920();
  /* 12aa8300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8303 mov edx, dword ptr [0x12acfe24] */
  EDX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa8309 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa830c mov dword ptr [0x12acfe24], edx */
  w32((uint32_t)(0x12acfe24), (EDX));
L_12aa8312:;
  /* 12aa8312 mov dword ptr [0x12acfe20], 0 */
  w32((uint32_t)(0x12acfe20), (0x0u));
L_12aa831c:;
  /* 12aa831c mov esp, ebp */
  ESP = (EBP);
  /* 12aa831e pop ebp */
  EBP = (pop32());
  /* 12aa831f ret  */
  ESPCHK(0x12aa81f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x12aa8320 (1565 bytes, 343 insns) */
void f_12aa8320(void) {
  FTRACE(0x12aa8320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8320 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8321 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8323 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8329 mov eax, dword ptr [0x12acfe24] */
  EAX = (r32((uint32_t)(0x12acfe24)));
  /* 12aa832e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa8331 push eax */
  push32((uint32_t)(EAX));
  /* 12aa8332 mov ecx, dword ptr [0x12acfe28] */
  ECX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa8338 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8339 call dword ptr [0x12ad02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02bc))), 0x12aa833fu);
  /* 12aa833f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8341 je 0x12aa834b */
  if (C.zf) goto L_12aa834b;
  /* 12aa8343 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8346 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa834b:;
  /* 12aa834b mov edx, dword ptr [0x12acfe28] */
  EDX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa8351 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12aa8357 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12aa8361 jmp 0x12aa8372 */
  goto L_12aa8372;
L_12aa8363:;
  /* 12aa8363 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12aa8369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa836c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12aa8372:;
  /* 12aa8372 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12aa8378 cmp ecx, dword ptr [0x12acfe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa837e jge 0x12aa8937 */
  if ((C.sf==C.of)) goto L_12aa8937;
  /* 12aa8384 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa838a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa838d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12aa8393 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12aa8398 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12aa839e push ecx */
  push32((uint32_t)(ECX));
  /* 12aa839f call dword ptr [0x12ad02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02bc))), 0x12aa83a5u);
  /* 12aa83a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa83a7 je 0x12aa83b3 */
  if (C.zf) goto L_12aa83b3;
  /* 12aa83a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12aa83ae jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa83b3:;
  /* 12aa83b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa83b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa83bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12aa83c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12aa83c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa83ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aa83d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa83d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa83da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa83dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12aa83e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12aa83f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa83f8 jmp 0x12aa8403 */
  goto L_12aa8403;
L_12aa83fa:;
  /* 12aa83fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa83fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8400 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12aa8403:;
  /* 12aa8403 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8407 jge 0x12aa88fb */
  if ((C.sf==C.of)) goto L_12aa88fb;
  /* 12aa840d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12aa8417 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12aa8421 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12aa842b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12aa8435 jmp 0x12aa8446 */
  goto L_12aa8446;
L_12aa8437:;
  /* 12aa8437 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12aa843d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8440 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12aa8446:;
  /* 12aa8446 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa844d jge 0x12aa8462 */
  if ((C.sf==C.of)) goto L_12aa8462;
  /* 12aa844f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12aa8455 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12aa8460 jmp 0x12aa8437 */
  goto L_12aa8437;
L_12aa8462:;
  /* 12aa8462 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8466 jl 0x12aa889d */
  if ((C.sf!=C.of)) goto L_12aa889d;
  /* 12aa846c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa8471 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12aa8477 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8478 call dword ptr [0x12ad02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02bc))), 0x12aa847eu);
  /* 12aa847e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8480 je 0x12aa848c */
  if (C.zf) goto L_12aa848c;
  /* 12aa8482 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12aa8487 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa848c:;
  /* 12aa848c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12aa8492 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aa8495 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12aa849f jmp 0x12aa84b0 */
  goto L_12aa84b0;
L_12aa84a1:;
  /* 12aa84a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12aa84a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa84aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12aa84b0:;
  /* 12aa84b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa84b7 jge 0x12aa8634 */
  if ((C.sf==C.of)) goto L_12aa8634;
  /* 12aa84bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa84c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa84c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12aa84c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa84cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa84d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12aa84db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa84e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa84e5 jne 0x12aa84f2 */
  if (!C.zf) goto L_12aa84f2;
  /* 12aa84e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12aa84ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa84f0 je 0x12aa84fc */
  if (C.zf) goto L_12aa84fc;
L_12aa84f2:;
  /* 12aa84f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12aa84f7 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa84fc:;
  /* 12aa84fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa8502 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa8504 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12aa850a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12aa8510 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12aa8516 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12aa851c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa851f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa8521 je 0x12aa8559 */
  if (C.zf) goto L_12aa8559;
  /* 12aa8523 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12aa8529 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa852c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12aa8532 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa853c jle 0x12aa8548 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa8548;
  /* 12aa853e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12aa8543 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa8548:;
  /* 12aa8548 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12aa854e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8551 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12aa8557 jmp 0x12aa859b */
  goto L_12aa859b;
L_12aa8559:;
  /* 12aa8559 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12aa855f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa8562 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8565 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12aa856b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8572 jle 0x12aa857e */
  if ((C.zf||C.sf!=C.of)) goto L_12aa857e;
  /* 12aa8574 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12aa857e:;
  /* 12aa857e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12aa8584 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12aa858b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa858e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12aa8594 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12aa859b:;
  /* 12aa859b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa85a2 jl 0x12aa85bd */
  if ((C.sf!=C.of)) goto L_12aa85bd;
  /* 12aa85a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12aa85aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa85ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa85af jne 0x12aa85bd */
  if (!C.zf) goto L_12aa85bd;
  /* 12aa85b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa85bb jle 0x12aa85c7 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa85c7;
L_12aa85bd:;
  /* 12aa85bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12aa85c2 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa85c7:;
  /* 12aa85c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa85cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa85d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aa85d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa85dc je 0x12aa85e8 */
  if (C.zf) goto L_12aa85e8;
  /* 12aa85de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12aa85e3 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa85e8:;
  /* 12aa85e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa85ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa85f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12aa85fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa8600 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8606 jb 0x12aa84fc */
  if (C.cf) goto L_12aa84fc;
  /* 12aa860c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa8612 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8618 je 0x12aa8624 */
  if (C.zf) goto L_12aa8624;
  /* 12aa861a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12aa861f jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa8624:;
  /* 12aa8624 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8627 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa862c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa862f jmp 0x12aa84a1 */
  goto L_12aa84a1;
L_12aa8634:;
  /* 12aa8634 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa8637 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa8639 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa863f je 0x12aa864b */
  if (C.zf) goto L_12aa864b;
  /* 12aa8641 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12aa8646 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa864b:;
  /* 12aa864b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa864e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12aa8654 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12aa865b jmp 0x12aa8666 */
  goto L_12aa8666;
L_12aa865d:;
  /* 12aa865d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa8660 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8663 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12aa8666:;
  /* 12aa8666 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa866a jge 0x12aa889d */
  if ((C.sf==C.of)) goto L_12aa889d;
  /* 12aa8670 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12aa867a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12aa8680 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12aa8686:;
  /* 12aa8686 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa868c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa868f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12aa8695 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa869b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa86a1 je 0x12aa87ca */
  if (C.zf) goto L_12aa87ca;
  /* 12aa86a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa86aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12aa86b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa86b7 je 0x12aa87ca */
  if (C.zf) goto L_12aa87ca;
  /* 12aa86bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa86c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa86c9 jb 0x12aa86de */
  if (C.cf) goto L_12aa86de;
  /* 12aa86cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12aa86d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa86d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa86dc jb 0x12aa86e8 */
  if (C.cf) goto L_12aa86e8;
L_12aa86de:;
  /* 12aa86de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12aa86e3 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa86e8:;
  /* 12aa86e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa86ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa86f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12aa86fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12aa8700 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8703 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa8706 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa8709 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa870e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12aa8714:;
  /* 12aa8714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa8717 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa871d je 0x12aa873e */
  if (C.zf) goto L_12aa873e;
  /* 12aa871f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa8722 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8728 jne 0x12aa872c */
  if (!C.zf) goto L_12aa872c;
  /* 12aa872a jmp 0x12aa873e */
  goto L_12aa873e;
L_12aa872c:;
  /* 12aa872c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa872f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa8731 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8734 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa8737 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8739 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa873c jmp 0x12aa8714 */
  goto L_12aa8714;
L_12aa873e:;
  /* 12aa873e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa8741 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8747 jne 0x12aa8753 */
  if (!C.zf) goto L_12aa8753;
  /* 12aa8749 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12aa874e jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa8753:;
  /* 12aa8753 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa8759 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa875b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa875e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8761 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12aa8767 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa876e jle 0x12aa877a */
  if ((C.zf||C.sf!=C.of)) goto L_12aa877a;
  /* 12aa8770 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12aa877a:;
  /* 12aa877a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12aa8780 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8783 je 0x12aa878f */
  if (C.zf) goto L_12aa878f;
  /* 12aa8785 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12aa878a jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa878f:;
  /* 12aa878f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa8795 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa8798 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa879e je 0x12aa87aa */
  if (C.zf) goto L_12aa87aa;
  /* 12aa87a0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12aa87a5 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa87aa:;
  /* 12aa87aa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12aa87b0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12aa87b6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12aa87bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa87bf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12aa87c5 jmp 0x12aa8686 */
  goto L_12aa8686;
L_12aa87ca:;
  /* 12aa87ca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa87d1 je 0x12aa8841 */
  if (C.zf) goto L_12aa8841;
  /* 12aa87d3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa87d7 jge 0x12aa880b */
  if ((C.sf==C.of)) goto L_12aa880b;
  /* 12aa87d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa87de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa87e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa87e3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12aa87e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa87eb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12aa87f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa87f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa87f9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa87fb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12aa8801 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8803 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12aa8809 jmp 0x12aa8841 */
  goto L_12aa8841;
L_12aa880b:;
  /* 12aa880b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa880e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8811 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa8816 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa8818 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12aa881e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8820 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12aa8826 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa8829 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa882c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12aa8831 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12aa8833 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12aa8839 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa883b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12aa8841:;
  /* 12aa8841 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12aa8847 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa884a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8850 jne 0x12aa8864 */
  if (!C.zf) goto L_12aa8864;
  /* 12aa8852 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa8855 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12aa885b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8862 je 0x12aa886e */
  if (C.zf) goto L_12aa886e;
L_12aa8864:;
  /* 12aa8864 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12aa8869 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa886e:;
  /* 12aa886e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12aa8874 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa8877 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa887d je 0x12aa8889 */
  if (C.zf) goto L_12aa8889;
  /* 12aa887f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12aa8884 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa8889:;
  /* 12aa8889 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12aa888f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8892 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12aa8898 jmp 0x12aa865d */
  goto L_12aa865d;
L_12aa889d:;
  /* 12aa889d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa88a0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12aa88a6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12aa88ac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa88b0 jne 0x12aa88ca */
  if (!C.zf) goto L_12aa88ca;
  /* 12aa88b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa88b5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12aa88bb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12aa88c1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa88c8 je 0x12aa88d1 */
  if (C.zf) goto L_12aa88d1;
L_12aa88ca:;
  /* 12aa88ca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12aa88cf jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa88d1:;
  /* 12aa88d1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12aa88d7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa88dd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12aa88e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa88e6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa88eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa88ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa88f1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12aa88f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa88f6 jmp 0x12aa83fa */
  goto L_12aa83fa;
L_12aa88fb:;
  /* 12aa88fb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa8901 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12aa8907 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8909 jne 0x12aa891c */
  if (!C.zf) goto L_12aa891c;
  /* 12aa890b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa8911 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12aa8917 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa891a je 0x12aa8923 */
  if (C.zf) goto L_12aa8923;
L_12aa891c:;
  /* 12aa891c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12aa8921 jmp 0x12aa8939 */
  goto L_12aa8939;
L_12aa8923:;
  /* 12aa8923 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12aa8929 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa892c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12aa8932 jmp 0x12aa8363 */
  goto L_12aa8363;
L_12aa8937:;
  /* 12aa8937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa8939:;
  /* 12aa8939 mov esp, ebp */
  ESP = (EBP);
  /* 12aa893b pop ebp */
  EBP = (pop32());
  /* 12aa893c ret  */
  ESPCHK(0x12aa8320u, _esp0);
  ESP += 4; return;
}

/* FUN_10008940 @ 0x12aa8940 (250 bytes, 92 insns) */
void f_12aa8940(void) {
  FTRACE(0x12aa8940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8940 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8941 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8943 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8946 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa8947 push esi */
  push32((uint32_t)(ESI));
  /* 12aa8948 push edi */
  push32((uint32_t)(EDI));
  /* 12aa8949 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12aa894c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aa894f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12aa8952 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12aa8955:;
  /* 12aa8955 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8959 jne 0x12aa8979 */
  if (!C.zf) goto L_12aa8979;
  /* 12aa895b push 0x12ac9dd0 */
  push32((uint32_t)(0x12ac9dd0u));
  /* 12aa8960 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa8962 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12aa8964 push 0x12ac9dc4 */
  push32((uint32_t)(0x12ac9dc4u));
  /* 12aa8969 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa896b call 0x12aa1af0 */
  push32(0x12aa8970u); f_12aa1af0();
  /* 12aa8970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8973 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8976 jne 0x12aa8979 */
  if (!C.zf) goto L_12aa8979;
  /* 12aa8978 int3  */
  x86_unimpl("int3 @ 0x12aa8978");
L_12aa8979:;
  /* 12aa8979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa897b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa897d jne 0x12aa8955 */
  if (!C.zf) goto L_12aa8955;
L_12aa897f:;
  /* 12aa897f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8983 jne 0x12aa89a3 */
  if (!C.zf) goto L_12aa89a3;
  /* 12aa8985 push 0x12ac9db4 */
  push32((uint32_t)(0x12ac9db4u));
  /* 12aa898a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa898c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12aa898e push 0x12ac9dc4 */
  push32((uint32_t)(0x12ac9dc4u));
  /* 12aa8993 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa8995 call 0x12aa1af0 */
  push32(0x12aa899au); f_12aa1af0();
  /* 12aa899a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa899d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa89a0 jne 0x12aa89a3 */
  if (!C.zf) goto L_12aa89a3;
  /* 12aa89a2 int3  */
  x86_unimpl("int3 @ 0x12aa89a2");
L_12aa89a3:;
  /* 12aa89a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa89a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa89a7 jne 0x12aa897f */
  if (!C.zf) goto L_12aa897f;
  /* 12aa89a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12aa89b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa89b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa89bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa89c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa89c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12aa89ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa89d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa89d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa89d5 push edx */
  push32((uint32_t)(EDX));
  /* 12aa89d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa89da call 0x12aa99c0 */
  push32(0x12aa89dfu); f_12aa99c0();
  /* 12aa89df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa89e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa89e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa89eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa89ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa89f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa89f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa89fb jl 0x12aa8a1f */
  if ((C.sf!=C.of)) goto L_12aa8a1f;
  /* 12aa89fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8a00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa8a02 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aa8a05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8a07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8a0d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12aa8a10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8a13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa8a15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8a18 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8a1b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa8a1d jmp 0x12aa8a30 */
  goto L_12aa8a30;
L_12aa8a1f:;
  /* 12aa8a1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8a22 push edx */
  push32((uint32_t)(EDX));
  /* 12aa8a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa8a25 call 0x12aa9740 */
  push32(0x12aa8a2au); f_12aa9740();
  /* 12aa8a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8a2d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12aa8a30:;
  /* 12aa8a30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8a33 pop edi */
  EDI = (pop32());
  /* 12aa8a34 pop esi */
  ESI = (pop32());
  /* 12aa8a35 pop ebx */
  EBX = (pop32());
  /* 12aa8a36 mov esp, ebp */
  ESP = (EBP);
  /* 12aa8a38 pop ebp */
  EBP = (pop32());
  /* 12aa8a39 ret  */
  ESPCHK(0x12aa8940u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a40 @ 0x12aa8a40 (183 bytes, 58 insns) */
void f_12aa8a40(void) {
  FTRACE(0x12aa8a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8a41 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8a4c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8a51 ja 0x12aa8a6a */
  if ((!C.cf&&!C.zf)) goto L_12aa8a6a;
  /* 12aa8a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8a56 mov edx, dword ptr [0x12accc98] */
  EDX = (r32((uint32_t)(0x12accc98)));
  /* 12aa8a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8a5e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12aa8a62 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8a65 jmp 0x12aa8af3 */
  goto L_12aa8af3;
L_12aa8a6a:;
  /* 12aa8a6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8a6d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12aa8a70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8a76 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8a7c mov edx, dword ptr [0x12accc98] */
  EDX = (r32((uint32_t)(0x12accc98)));
  /* 12aa8a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8a84 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12aa8a88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8a8f je 0x12aa8ab3 */
  if (C.zf) goto L_12aa8ab3;
  /* 12aa8a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8a94 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12aa8a97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8a9d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12aa8aa0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12aa8aa3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12aa8aa6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12aa8aaa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12aa8ab1 jmp 0x12aa8ac4 */
  goto L_12aa8ac4;
L_12aa8ab3:;
  /* 12aa8ab3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12aa8ab6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12aa8ab9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12aa8abd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12aa8ac4:;
  /* 12aa8ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa8ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa8ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa8aca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12aa8acd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8ace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8ad1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa8ad2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12aa8ad5 push eax */
  push32((uint32_t)(EAX));
  /* 12aa8ad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa8ad8 call 0x12aaac60 */
  push32(0x12aa8addu); f_12aaac60();
  /* 12aa8add add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8ae2 jne 0x12aa8ae8 */
  if (!C.zf) goto L_12aa8ae8;
  /* 12aa8ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8ae6 jmp 0x12aa8af3 */
  goto L_12aa8af3;
L_12aa8ae8:;
  /* 12aa8ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8aeb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8af0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12aa8af3:;
  /* 12aa8af3 mov esp, ebp */
  ESP = (EBP);
  /* 12aa8af5 pop ebp */
  EBP = (pop32());
  /* 12aa8af6 ret  */
  ESPCHK(0x12aa8a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x12aa8b00 (836 bytes, 238 insns) */
void f_12aa8b00(void) {
  FTRACE(0x12aa8b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8b01 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8b03 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8b06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8b08 call 0x12aa6430 */
  push32(0x12aa8b0du); f_12aa6430();
  /* 12aa8b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8b13 push eax */
  push32((uint32_t)(EAX));
  /* 12aa8b14 call 0x12aa8e50 */
  push32(0x12aa8b19u); f_12aa8e50();
  /* 12aa8b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aa8b1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8b22 cmp ecx, dword ptr [0x12acfb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8b28 jne 0x12aa8b3b */
  if (!C.zf) goto L_12aa8b3b;
  /* 12aa8b2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8b2c call 0x12aa64d0 */
  push32(0x12aa8b31u); f_12aa64d0();
  /* 12aa8b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8b36 jmp 0x12aa8e40 */
  goto L_12aa8e40;
L_12aa8b3b:;
  /* 12aa8b3b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8b3f jne 0x12aa8b5c */
  if (!C.zf) goto L_12aa8b5c;
  /* 12aa8b41 call 0x12aa8f30 */
  push32(0x12aa8b46u); f_12aa8f30();
  /* 12aa8b46 call 0x12aa8fb0 */
  push32(0x12aa8b4bu); f_12aa8fb0();
  /* 12aa8b4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8b4d call 0x12aa64d0 */
  push32(0x12aa8b52u); f_12aa64d0();
  /* 12aa8b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8b57 jmp 0x12aa8e40 */
  goto L_12aa8e40;
L_12aa8b5c:;
  /* 12aa8b5c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa8b63 jmp 0x12aa8b6e */
  goto L_12aa8b6e;
L_12aa8b65:;
  /* 12aa8b65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8b68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa8b6e:;
  /* 12aa8b6e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8b72 jae 0x12aa8cbf */
  if (!C.cf) goto L_12aa8cbf;
  /* 12aa8b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8b7b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa8b7e mov ecx, dword ptr [eax + 0x12acceb8] */
  ECX = (r32((uint32_t)(EAX + 0x12acceb8)));
  /* 12aa8b84 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8b87 jne 0x12aa8cba */
  if (!C.zf) goto L_12aa8cba;
  /* 12aa8b8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aa8b94 jmp 0x12aa8b9f */
  goto L_12aa8b9f;
L_12aa8b96:;
  /* 12aa8b96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8b99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8b9c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12aa8b9f:;
  /* 12aa8b9f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8ba6 jae 0x12aa8bb4 */
  if (!C.cf) goto L_12aa8bb4;
  /* 12aa8ba8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8bab mov byte ptr [eax + 0x12acfd00], 0 */
  w8((uint32_t)(EAX + 0x12acfd00), (0x0u));
  /* 12aa8bb2 jmp 0x12aa8b96 */
  goto L_12aa8b96;
L_12aa8bb4:;
  /* 12aa8bb4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa8bbb jmp 0x12aa8bc6 */
  goto L_12aa8bc6;
L_12aa8bbd:;
  /* 12aa8bbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8bc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8bc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12aa8bc6:;
  /* 12aa8bc6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8bca jae 0x12aa8c47 */
  if (!C.cf) goto L_12aa8c47;
  /* 12aa8bcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8bcf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa8bd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8bd5 lea ecx, [edx + eax*8 + 0x12accec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12accec8));
  /* 12aa8bdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa8bdf jmp 0x12aa8bea */
  goto L_12aa8bea;
L_12aa8be1:;
  /* 12aa8be1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8be4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8be7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa8bea:;
  /* 12aa8bea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8bef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aa8bf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa8bf3 je 0x12aa8c42 */
  if (C.zf) goto L_12aa8c42;
  /* 12aa8bf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8bfa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12aa8bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8bff je 0x12aa8c42 */
  if (C.zf) goto L_12aa8c42;
  /* 12aa8c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8c04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8c06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa8c08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa8c0b jmp 0x12aa8c16 */
  goto L_12aa8c16;
L_12aa8c0d:;
  /* 12aa8c0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8c10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8c13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12aa8c16:;
  /* 12aa8c16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa8c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8c1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12aa8c1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8c21 ja 0x12aa8c40 */
  if ((!C.cf&&!C.zf)) goto L_12aa8c40;
  /* 12aa8c23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8c26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8c29 mov dl, byte ptr [eax + 0x12acfd01] */
  DL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa8c2f or dl, byte ptr [ecx + 0x12acceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12acceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12aa8c35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8c38 mov byte ptr [eax + 0x12acfd01], dl */
  w8((uint32_t)(EAX + 0x12acfd01), (DL));
  /* 12aa8c3e jmp 0x12aa8c0d */
  goto L_12aa8c0d;
L_12aa8c40:;
  /* 12aa8c40 jmp 0x12aa8be1 */
  goto L_12aa8be1;
L_12aa8c42:;
  /* 12aa8c42 jmp 0x12aa8bbd */
  goto L_12aa8bbd;
L_12aa8c47:;
  /* 12aa8c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8c4a mov dword ptr [0x12acfb64], ecx */
  w32((uint32_t)(0x12acfb64), (ECX));
  /* 12aa8c50 mov dword ptr [0x12acfbec], 1 */
  w32((uint32_t)(0x12acfbec), (0x1u));
  /* 12aa8c5a mov edx, dword ptr [0x12acfb64] */
  EDX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa8c60 push edx */
  push32((uint32_t)(EDX));
  /* 12aa8c61 call 0x12aa8eb0 */
  push32(0x12aa8c66u); f_12aa8eb0();
  /* 12aa8c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8c69 mov dword ptr [0x12acfe04], eax */
  w32((uint32_t)(0x12acfe04), (EAX));
  /* 12aa8c6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa8c75 jmp 0x12aa8c80 */
  goto L_12aa8c80;
L_12aa8c77:;
  /* 12aa8c77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8c7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8c7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aa8c80:;
  /* 12aa8c80 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8c84 jae 0x12aa8ca4 */
  if (!C.cf) goto L_12aa8ca4;
  /* 12aa8c86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8c89 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa8c8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8c92 mov cx, word ptr [ecx + eax*2 + 0x12accebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12accebc)));
  /* 12aa8c9a mov word ptr [edx*2 + 0x12acfbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12acfbe0), (CX));
  /* 12aa8ca2 jmp 0x12aa8c77 */
  goto L_12aa8c77;
L_12aa8ca4:;
  /* 12aa8ca4 call 0x12aa8fb0 */
  push32(0x12aa8ca9u); f_12aa8fb0();
  /* 12aa8ca9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8cab call 0x12aa64d0 */
  push32(0x12aa8cb0u); f_12aa64d0();
  /* 12aa8cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8cb5 jmp 0x12aa8e40 */
  goto L_12aa8e40;
L_12aa8cba:;
  /* 12aa8cba jmp 0x12aa8b65 */
  goto L_12aa8b65;
L_12aa8cbf:;
  /* 12aa8cbf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12aa8cc2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa8cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8cc6 push eax */
  push32((uint32_t)(EAX));
  /* 12aa8cc7 call dword ptr [0x12ad0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0310))), 0x12aa8ccdu);
  /* 12aa8ccd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8cd0 jne 0x12aa8e12 */
  if (!C.zf) goto L_12aa8e12;
  /* 12aa8cd6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aa8cdd jmp 0x12aa8ce8 */
  goto L_12aa8ce8;
L_12aa8cdf:;
  /* 12aa8cdf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8ce5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12aa8ce8:;
  /* 12aa8ce8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8cef jae 0x12aa8cfd */
  if (!C.cf) goto L_12aa8cfd;
  /* 12aa8cf1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8cf4 mov byte ptr [edx + 0x12acfd00], 0 */
  w8((uint32_t)(EDX + 0x12acfd00), (0x0u));
  /* 12aa8cfb jmp 0x12aa8cdf */
  goto L_12aa8cdf;
L_12aa8cfd:;
  /* 12aa8cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8d00 mov dword ptr [0x12acfb64], eax */
  w32((uint32_t)(0x12acfb64), (EAX));
  /* 12aa8d05 mov dword ptr [0x12acfe04], 0 */
  w32((uint32_t)(0x12acfe04), (0x0u));
  /* 12aa8d0f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8d13 jbe 0x12aa8dce */
  if ((C.cf||C.zf)) goto L_12aa8dce;
  /* 12aa8d19 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12aa8d1c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12aa8d1f jmp 0x12aa8d2a */
  goto L_12aa8d2a;
L_12aa8d21:;
  /* 12aa8d21 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8d24 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8d27 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12aa8d2a:;
  /* 12aa8d2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8d2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa8d2f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aa8d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa8d33 je 0x12aa8d7c */
  if (C.zf) goto L_12aa8d7c;
  /* 12aa8d35 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8d3a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12aa8d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa8d3f je 0x12aa8d7c */
  if (C.zf) goto L_12aa8d7c;
  /* 12aa8d41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8d44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8d46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa8d48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa8d4b jmp 0x12aa8d56 */
  goto L_12aa8d56;
L_12aa8d4d:;
  /* 12aa8d4d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8d50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8d53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12aa8d56:;
  /* 12aa8d56 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa8d59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8d5b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12aa8d5e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8d61 ja 0x12aa8d7a */
  if ((!C.cf&&!C.zf)) goto L_12aa8d7a;
  /* 12aa8d63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8d66 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa8d6c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12aa8d6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8d72 mov byte ptr [edx + 0x12acfd01], cl */
  w8((uint32_t)(EDX + 0x12acfd01), (CL));
  /* 12aa8d78 jmp 0x12aa8d4d */
  goto L_12aa8d4d;
L_12aa8d7a:;
  /* 12aa8d7a jmp 0x12aa8d21 */
  goto L_12aa8d21;
L_12aa8d7c:;
  /* 12aa8d7c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12aa8d83 jmp 0x12aa8d8e */
  goto L_12aa8d8e;
L_12aa8d85:;
  /* 12aa8d85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8d88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8d8b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12aa8d8e:;
  /* 12aa8d8e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8d95 jae 0x12aa8dae */
  if (!C.cf) goto L_12aa8dae;
  /* 12aa8d97 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8d9a mov dl, byte ptr [ecx + 0x12acfd01] */
  DL = (r8((uint32_t)(ECX + 0x12acfd01)));
  /* 12aa8da0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12aa8da3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa8da6 mov byte ptr [eax + 0x12acfd01], dl */
  w8((uint32_t)(EAX + 0x12acfd01), (DL));
  /* 12aa8dac jmp 0x12aa8d85 */
  goto L_12aa8d85;
L_12aa8dae:;
  /* 12aa8dae mov ecx, dword ptr [0x12acfb64] */
  ECX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa8db4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8db5 call 0x12aa8eb0 */
  push32(0x12aa8dbau); f_12aa8eb0();
  /* 12aa8dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8dbd mov dword ptr [0x12acfe04], eax */
  w32((uint32_t)(0x12acfe04), (EAX));
  /* 12aa8dc2 mov dword ptr [0x12acfbec], 1 */
  w32((uint32_t)(0x12acfbec), (0x1u));
  /* 12aa8dcc jmp 0x12aa8dd8 */
  goto L_12aa8dd8;
L_12aa8dce:;
  /* 12aa8dce mov dword ptr [0x12acfbec], 0 */
  w32((uint32_t)(0x12acfbec), (0x0u));
L_12aa8dd8:;
  /* 12aa8dd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa8ddf jmp 0x12aa8dea */
  goto L_12aa8dea;
L_12aa8de1:;
  /* 12aa8de1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8de4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8de7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12aa8dea:;
  /* 12aa8dea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8dee jae 0x12aa8dff */
  if (!C.cf) goto L_12aa8dff;
  /* 12aa8df0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa8df3 mov word ptr [eax*2 + 0x12acfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12acfbe0), (0x0u));
  /* 12aa8dfd jmp 0x12aa8de1 */
  goto L_12aa8de1;
L_12aa8dff:;
  /* 12aa8dff call 0x12aa8fb0 */
  push32(0x12aa8e04u); f_12aa8fb0();
  /* 12aa8e04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8e06 call 0x12aa64d0 */
  push32(0x12aa8e0bu); f_12aa64d0();
  /* 12aa8e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8e0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8e10 jmp 0x12aa8e40 */
  goto L_12aa8e40;
L_12aa8e12:;
  /* 12aa8e12 cmp dword ptr [0x12ace678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8e19 je 0x12aa8e33 */
  if (C.zf) goto L_12aa8e33;
  /* 12aa8e1b call 0x12aa8f30 */
  push32(0x12aa8e20u); f_12aa8f30();
  /* 12aa8e20 call 0x12aa8fb0 */
  push32(0x12aa8e25u); f_12aa8fb0();
  /* 12aa8e25 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8e27 call 0x12aa64d0 */
  push32(0x12aa8e2cu); f_12aa64d0();
  /* 12aa8e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa8e31 jmp 0x12aa8e40 */
  goto L_12aa8e40;
L_12aa8e33:;
  /* 12aa8e33 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aa8e35 call 0x12aa64d0 */
  push32(0x12aa8e3au); f_12aa64d0();
  /* 12aa8e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8e3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aa8e40:;
  /* 12aa8e40 mov esp, ebp */
  ESP = (EBP);
  /* 12aa8e42 pop ebp */
  EBP = (pop32());
  /* 12aa8e43 ret  */
  ESPCHK(0x12aa8b00u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12aa8e50 (89 bytes, 21 insns) */
void f_12aa8e50(void) {
  FTRACE(0x12aa8e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8e51 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8e53 mov dword ptr [0x12ace678], 0 */
  w32((uint32_t)(0x12ace678), (0x0u));
  /* 12aa8e5d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8e61 jne 0x12aa8e75 */
  if (!C.zf) goto L_12aa8e75;
  /* 12aa8e63 mov dword ptr [0x12ace678], 1 */
  w32((uint32_t)(0x12ace678), (0x1u));
  /* 12aa8e6d call dword ptr [0x12ad0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0318))), 0x12aa8e73u);
  /* 12aa8e73 jmp 0x12aa8ea7 */
  goto L_12aa8ea7;
L_12aa8e75:;
  /* 12aa8e75 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8e79 jne 0x12aa8e8d */
  if (!C.zf) goto L_12aa8e8d;
  /* 12aa8e7b mov dword ptr [0x12ace678], 1 */
  w32((uint32_t)(0x12ace678), (0x1u));
  /* 12aa8e85 call dword ptr [0x12ad0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0314))), 0x12aa8e8bu);
  /* 12aa8e8b jmp 0x12aa8ea7 */
  goto L_12aa8ea7;
L_12aa8e8d:;
  /* 12aa8e8d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8e91 jne 0x12aa8ea4 */
  if (!C.zf) goto L_12aa8ea4;
  /* 12aa8e93 mov dword ptr [0x12ace678], 1 */
  w32((uint32_t)(0x12ace678), (0x1u));
  /* 12aa8e9d mov eax, dword ptr [0x12ace698] */
  EAX = (r32((uint32_t)(0x12ace698)));
  /* 12aa8ea2 jmp 0x12aa8ea7 */
  goto L_12aa8ea7;
L_12aa8ea4:;
  /* 12aa8ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12aa8ea7:;
  /* 12aa8ea7 pop ebp */
  EBP = (pop32());
  /* 12aa8ea8 ret  */
  ESPCHK(0x12aa8e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x12aa8eb0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12aa8eb0(void) {
  FTRACE(0x12aa8eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa8eb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa8eba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8ebd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8ec3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa8ec6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8eca ja 0x12aa8efa */
  if ((!C.cf&&!C.zf)) goto L_12aa8efa;
  /* 12aa8ecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8ecf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa8ed1 mov dl, byte ptr [eax + 0x12aa8f14] */
  DL = (r8((uint32_t)(EAX + 0x12aa8f14)));
  /* 12aa8ed7 jmp dword ptr [edx*4 + 0x12aa8f00] */
  switch (EDX) {
    case 0: goto L_12aa8ede;
    case 1: goto L_12aa8ee5;
    case 2: goto L_12aa8eec;
    case 3: goto L_12aa8ef3;
    case 4: goto L_12aa8efa;
    default: x86_unimpl("switch@0x12aa8ed7 out of table"); return;
  }
L_12aa8ede:;
  /* 12aa8ede mov eax, 0x411 */
  EAX = (0x411u);
  /* 12aa8ee3 jmp 0x12aa8efc */
  goto L_12aa8efc;
L_12aa8ee5:;
  /* 12aa8ee5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12aa8eea jmp 0x12aa8efc */
  goto L_12aa8efc;
L_12aa8eec:;
  /* 12aa8eec mov eax, 0x412 */
  EAX = (0x412u);
  /* 12aa8ef1 jmp 0x12aa8efc */
  goto L_12aa8efc;
L_12aa8ef3:;
  /* 12aa8ef3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12aa8ef8 jmp 0x12aa8efc */
  goto L_12aa8efc;
L_12aa8efa:;
  /* 12aa8efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa8efc:;
  /* 12aa8efc mov esp, ebp */
  ESP = (EBP);
  /* 12aa8efe pop ebp */
  EBP = (pop32());
  /* 12aa8eff ret  */
  ESPCHK(0x12aa8eb0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12aa8f30 (116 bytes, 29 insns) */
void f_12aa8f30(void) {
  FTRACE(0x12aa8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8f31 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8f34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa8f3b jmp 0x12aa8f46 */
  goto L_12aa8f46;
L_12aa8f3d:;
  /* 12aa8f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8f40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8f43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa8f46:;
  /* 12aa8f46 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8f4d jge 0x12aa8f5b */
  if ((C.sf==C.of)) goto L_12aa8f5b;
  /* 12aa8f4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8f52 mov byte ptr [ecx + 0x12acfd00], 0 */
  w8((uint32_t)(ECX + 0x12acfd00), (0x0u));
  /* 12aa8f59 jmp 0x12aa8f3d */
  goto L_12aa8f3d;
L_12aa8f5b:;
  /* 12aa8f5b mov dword ptr [0x12acfb64], 0 */
  w32((uint32_t)(0x12acfb64), (0x0u));
  /* 12aa8f65 mov dword ptr [0x12acfbec], 0 */
  w32((uint32_t)(0x12acfbec), (0x0u));
  /* 12aa8f6f mov dword ptr [0x12acfe04], 0 */
  w32((uint32_t)(0x12acfe04), (0x0u));
  /* 12aa8f79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa8f80 jmp 0x12aa8f8b */
  goto L_12aa8f8b;
L_12aa8f82:;
  /* 12aa8f82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8f85 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8f88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa8f8b:;
  /* 12aa8f8b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8f8f jge 0x12aa8fa0 */
  if ((C.sf==C.of)) goto L_12aa8fa0;
  /* 12aa8f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa8f94 mov word ptr [eax*2 + 0x12acfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12acfbe0), (0x0u));
  /* 12aa8f9e jmp 0x12aa8f82 */
  goto L_12aa8f82;
L_12aa8fa0:;
  /* 12aa8fa0 mov esp, ebp */
  ESP = (EBP);
  /* 12aa8fa2 pop ebp */
  EBP = (pop32());
  /* 12aa8fa3 ret  */
  ESPCHK(0x12aa8f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fb0 @ 0x12aa8fb0 (770 bytes, 175 insns) */
void f_12aa8fb0(void) {
  FTRACE(0x12aa8fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa8fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa8fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa8fb3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa8fb9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12aa8fbf push eax */
  push32((uint32_t)(EAX));
  /* 12aa8fc0 mov ecx, dword ptr [0x12acfb64] */
  ECX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa8fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa8fc7 call dword ptr [0x12ad0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0310))), 0x12aa8fcdu);
  /* 12aa8fcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8fd0 jne 0x12aa91e9 */
  if (!C.zf) goto L_12aa91e9;
  /* 12aa8fd6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12aa8fe0 jmp 0x12aa8ff1 */
  goto L_12aa8ff1;
L_12aa8fe2:;
  /* 12aa8fe2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa8fe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa8feb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12aa8ff1:;
  /* 12aa8ff1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa8ffb jae 0x12aa9012 */
  if (!C.cf) goto L_12aa9012;
  /* 12aa8ffd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9003 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12aa9009 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12aa9010 jmp 0x12aa8fe2 */
  goto L_12aa8fe2;
L_12aa9012:;
  /* 12aa9012 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12aa9019 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12aa901f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa9022 jmp 0x12aa902d */
  goto L_12aa902d;
L_12aa9024:;
  /* 12aa9024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9027 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa902a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa902d:;
  /* 12aa902d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9030 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9032 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa9034 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9036 je 0x12aa9078 */
  if (C.zf) goto L_12aa9078;
  /* 12aa9038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa903b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa903d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aa903f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12aa9045 jmp 0x12aa9056 */
  goto L_12aa9056;
L_12aa9047:;
  /* 12aa9047 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa904d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9050 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12aa9056:;
  /* 12aa9056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9059 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa905b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12aa905e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9064 ja 0x12aa9076 */
  if ((!C.cf&&!C.zf)) goto L_12aa9076;
  /* 12aa9066 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa906c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12aa9074 jmp 0x12aa9047 */
  goto L_12aa9047;
L_12aa9076:;
  /* 12aa9076 jmp 0x12aa9024 */
  goto L_12aa9024;
L_12aa9078:;
  /* 12aa9078 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa907a mov eax, dword ptr [0x12acfe04] */
  EAX = (r32((uint32_t)(0x12acfe04)));
  /* 12aa907f push eax */
  push32((uint32_t)(EAX));
  /* 12aa9080 mov ecx, dword ptr [0x12acfb64] */
  ECX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa9086 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9087 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12aa908d push edx */
  push32((uint32_t)(EDX));
  /* 12aa908e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa9093 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12aa9099 push eax */
  push32((uint32_t)(EAX));
  /* 12aa909a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa909c call 0x12aaac60 */
  push32(0x12aa90a1u); f_12aaac60();
  /* 12aa90a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa90a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa90a6 mov ecx, dword ptr [0x12acfb64] */
  ECX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa90ac push ecx */
  push32((uint32_t)(ECX));
  /* 12aa90ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa90b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12aa90b8 push edx */
  push32((uint32_t)(EDX));
  /* 12aa90b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa90be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12aa90c4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa90c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa90ca mov ecx, dword ptr [0x12acfe04] */
  ECX = (r32((uint32_t)(0x12acfe04)));
  /* 12aa90d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa90d1 call 0x12aaae20 */
  push32(0x12aa90d6u); f_12aaae20();
  /* 12aa90d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa90d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa90db mov edx, dword ptr [0x12acfb64] */
  EDX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa90e1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa90e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa90e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12aa90ed push eax */
  push32((uint32_t)(EAX));
  /* 12aa90ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aa90f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12aa90f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa90fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12aa90ff mov edx, dword ptr [0x12acfe04] */
  EDX = (r32((uint32_t)(0x12acfe04)));
  /* 12aa9105 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9106 call 0x12aaae20 */
  push32(0x12aa910bu); f_12aaae20();
  /* 12aa910b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa910e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12aa9118 jmp 0x12aa9129 */
  goto L_12aa9129;
L_12aa911a:;
  /* 12aa911a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9120 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9123 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12aa9129:;
  /* 12aa9129 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9133 jae 0x12aa91e4 */
  if (!C.cf) goto L_12aa91e4;
  /* 12aa9139 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa913f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9141 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12aa9149 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa914c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa914e je 0x12aa9186 */
  if (C.zf) goto L_12aa9186;
  /* 12aa9150 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9156 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa915c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12aa915f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9165 mov byte ptr [edx + 0x12acfd01], cl */
  w8((uint32_t)(EDX + 0x12acfd01), (CL));
  /* 12aa916b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9171 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9177 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12aa917e mov byte ptr [eax + 0x12acfc00], dl */
  w8((uint32_t)(EAX + 0x12acfc00), (DL));
  /* 12aa9184 jmp 0x12aa91df */
  goto L_12aa91df;
L_12aa9186:;
  /* 12aa9186 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa918c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa918e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12aa9196 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9199 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa919b je 0x12aa91d2 */
  if (C.zf) goto L_12aa91d2;
  /* 12aa919d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91a3 mov al, byte ptr [edx + 0x12acfd01] */
  AL = (r8((uint32_t)(EDX + 0x12acfd01)));
  /* 12aa91a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12aa91ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91b1 mov byte ptr [ecx + 0x12acfd01], al */
  w8((uint32_t)(ECX + 0x12acfd01), (AL));
  /* 12aa91b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12aa91ca mov byte ptr [edx + 0x12acfc00], cl */
  w8((uint32_t)(EDX + 0x12acfc00), (CL));
  /* 12aa91d0 jmp 0x12aa91df */
  goto L_12aa91df;
L_12aa91d2:;
  /* 12aa91d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91d8 mov byte ptr [edx + 0x12acfc00], 0 */
  w8((uint32_t)(EDX + 0x12acfc00), (0x0u));
L_12aa91df:;
  /* 12aa91df jmp 0x12aa911a */
  goto L_12aa911a;
L_12aa91e4:;
  /* 12aa91e4 jmp 0x12aa92ae */
  goto L_12aa92ae;
L_12aa91e9:;
  /* 12aa91e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12aa91f3 jmp 0x12aa9204 */
  goto L_12aa9204;
L_12aa91f5:;
  /* 12aa91f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa91fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa91fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12aa9204:;
  /* 12aa9204 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa920e jae 0x12aa92ae */
  if (!C.cf) goto L_12aa92ae;
  /* 12aa9214 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa921b jb 0x12aa9258 */
  if (C.cf) goto L_12aa9258;
  /* 12aa921d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9224 ja 0x12aa9258 */
  if ((!C.cf&&!C.zf)) goto L_12aa9258;
  /* 12aa9226 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa922c mov dl, byte ptr [ecx + 0x12acfd01] */
  DL = (r8((uint32_t)(ECX + 0x12acfd01)));
  /* 12aa9232 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12aa9235 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa923b mov byte ptr [eax + 0x12acfd01], dl */
  w8((uint32_t)(EAX + 0x12acfd01), (DL));
  /* 12aa9241 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9247 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa924a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9250 mov byte ptr [edx + 0x12acfc00], cl */
  w8((uint32_t)(EDX + 0x12acfc00), (CL));
  /* 12aa9256 jmp 0x12aa92a9 */
  goto L_12aa92a9;
L_12aa9258:;
  /* 12aa9258 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa925f jb 0x12aa929c */
  if (C.cf) goto L_12aa929c;
  /* 12aa9261 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9268 ja 0x12aa929c */
  if ((!C.cf&&!C.zf)) goto L_12aa929c;
  /* 12aa926a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9270 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa9276 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12aa9279 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa927f mov byte ptr [edx + 0x12acfd01], cl */
  w8((uint32_t)(EDX + 0x12acfd01), (CL));
  /* 12aa9285 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa928b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa928e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa9294 mov byte ptr [ecx + 0x12acfc00], al */
  w8((uint32_t)(ECX + 0x12acfc00), (AL));
  /* 12aa929a jmp 0x12aa92a9 */
  goto L_12aa92a9;
L_12aa929c:;
  /* 12aa929c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12aa92a2 mov byte ptr [edx + 0x12acfc00], 0 */
  w8((uint32_t)(EDX + 0x12acfc00), (0x0u));
L_12aa92a9:;
  /* 12aa92a9 jmp 0x12aa91f5 */
  goto L_12aa91f5;
L_12aa92ae:;
  /* 12aa92ae mov esp, ebp */
  ESP = (EBP);
  /* 12aa92b0 pop ebp */
  EBP = (pop32());
  /* 12aa92b1 ret  */
  ESPCHK(0x12aa8fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x12aa92c0 (23 bytes, 9 insns) */
void f_12aa92c0(void) {
  FTRACE(0x12aa92c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa92c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa92c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa92c3 cmp dword ptr [0x12acfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa92ca je 0x12aa92d3 */
  if (C.zf) goto L_12aa92d3;
  /* 12aa92cc mov eax, dword ptr [0x12acfb64] */
  EAX = (r32((uint32_t)(0x12acfb64)));
  /* 12aa92d1 jmp 0x12aa92d5 */
  goto L_12aa92d5;
L_12aa92d3:;
  /* 12aa92d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa92d5:;
  /* 12aa92d5 pop ebp */
  EBP = (pop32());
  /* 12aa92d6 ret  */
  ESPCHK(0x12aa92c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092e0 @ 0x12aa92e0 (34 bytes, 10 insns) */
void f_12aa92e0(void) {
  FTRACE(0x12aa92e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa92e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa92e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa92e3 cmp dword ptr [0x12acffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa92ea jne 0x12aa9300 */
  if (!C.zf) goto L_12aa9300;
  /* 12aa92ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12aa92ee call 0x12aa8b00 */
  push32(0x12aa92f3u); f_12aa8b00();
  /* 12aa92f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa92f6 mov dword ptr [0x12acffb0], 1 */
  w32((uint32_t)(0x12acffb0), (0x1u));
L_12aa9300:;
  /* 12aa9300 pop ebp */
  EBP = (pop32());
  /* 12aa9301 ret  */
  ESPCHK(0x12aa92e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x12aa9310 (664 bytes, 264 insns) [15 switch table(s)] */
void f_12aa9310(void) {
  FTRACE(0x12aa9310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa9310 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa9311 mov ebp, esp */
  EBP = (ESP);
  /* 12aa9313 push edi */
  push32((uint32_t)(EDI));
  /* 12aa9314 push esi */
  push32((uint32_t)(ESI));
  /* 12aa9315 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9318 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa931b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa931e mov eax, ecx */
  EAX = (ECX);
  /* 12aa9320 mov edx, ecx */
  EDX = (ECX);
  /* 12aa9322 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9324 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9326 jbe 0x12aa9330 */
  if ((C.cf||C.zf)) goto L_12aa9330;
  /* 12aa9328 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa932a jb 0x12aa94a8 */
  if (C.cf) goto L_12aa94a8;
L_12aa9330:;
  /* 12aa9330 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aa9336 jne 0x12aa934c */
  if (!C.zf) goto L_12aa934c;
  /* 12aa9338 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa933b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa933e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9341 jb 0x12aa936c */
  if (C.cf) goto L_12aa936c;
  /* 12aa9343 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa9345 jmp dword ptr [edx*4 + 0x12aa9458] */
  switch (EDX) {
    case 0: goto L_12aa9468;
    case 1: goto L_12aa9470;
    case 2: goto L_12aa947c;
    case 3: goto L_12aa9490;
    default: x86_unimpl("switch@0x12aa9345 out of table"); return;
  }
L_12aa934c:;
  /* 12aa934c mov eax, edi */
  EAX = (EDI);
  /* 12aa934e mov edx, 3 */
  EDX = (0x3u);
  /* 12aa9353 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9356 jb 0x12aa9364 */
  if (C.cf) goto L_12aa9364;
  /* 12aa9358 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa935b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa935d jmp dword ptr [eax*4 + 0x12aa9370] */
  switch (EAX) {
    case 1: goto L_12aa9380;
    case 2: goto L_12aa93ac;
    case 3: goto L_12aa93d0;
    default: x86_unimpl("switch@0x12aa935d out of table"); return;
  }
L_12aa9364:;
  /* 12aa9364 jmp dword ptr [ecx*4 + 0x12aa9468] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12aa9468)))); return;
  /* 12aa936b nop  */
  /* nop */
L_12aa936c:;
  /* 12aa936c jmp dword ptr [ecx*4 + 0x12aa93ec] */
  switch (ECX) {
    case 0: goto L_12aa944f;
    case 1: goto L_12aa943c;
    case 2: goto L_12aa9434;
    case 3: goto L_12aa942c;
    case 4: goto L_12aa9424;
    case 5: goto L_12aa941c;
    case 6: goto L_12aa9414;
    case 7: goto L_12aa940c;
    default: x86_unimpl("switch@0x12aa936c out of table"); return;
  }
  /* 12aa9373 nop  */
  /* nop */
L_12aa9380:;
  /* 12aa9380 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9382 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa9384 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa9386 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa9389 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa938c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa938f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa9392 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa9395 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9398 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa939b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa939e jb 0x12aa936c */
  if (C.cf) goto L_12aa936c;
  /* 12aa93a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa93a2 jmp dword ptr [edx*4 + 0x12aa9458] */
  switch (EDX) {
    case 0: goto L_12aa9468;
    case 1: goto L_12aa9470;
    case 2: goto L_12aa947c;
    case 3: goto L_12aa9490;
    default: x86_unimpl("switch@0x12aa93a2 out of table"); return;
  }
  /* 12aa93a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa93ac:;
  /* 12aa93ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa93ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa93b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa93b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa93b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa93b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa93bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa93be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa93c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa93c4 jb 0x12aa936c */
  if (C.cf) goto L_12aa936c;
  /* 12aa93c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa93c8 jmp dword ptr [edx*4 + 0x12aa9458] */
  switch (EDX) {
    case 0: goto L_12aa9468;
    case 1: goto L_12aa9470;
    case 2: goto L_12aa947c;
    case 3: goto L_12aa9490;
    default: x86_unimpl("switch@0x12aa93c8 out of table"); return;
  }
  /* 12aa93cf nop  */
  /* nop */
L_12aa93d0:;
  /* 12aa93d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa93d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa93d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa93d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aa93d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa93da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa93db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa93de jb 0x12aa936c */
  if (C.cf) goto L_12aa936c;
  /* 12aa93e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa93e2 jmp dword ptr [edx*4 + 0x12aa9458] */
  switch (EDX) {
    case 0: goto L_12aa9468;
    case 1: goto L_12aa9470;
    case 2: goto L_12aa947c;
    case 3: goto L_12aa9490;
    default: x86_unimpl("switch@0x12aa93e2 out of table"); return;
  }
  /* 12aa93e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa940c:;
  /* 12aa940c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12aa9410 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12aa9414:;
  /* 12aa9414 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12aa9418 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12aa941c:;
  /* 12aa941c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12aa9420 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12aa9424:;
  /* 12aa9424 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12aa9428 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12aa942c:;
  /* 12aa942c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12aa9430 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12aa9434:;
  /* 12aa9434 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12aa9438 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12aa943c:;
  /* 12aa943c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12aa9440 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12aa9444 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12aa944b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa944d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12aa944f:;
  /* 12aa944f jmp dword ptr [edx*4 + 0x12aa9458] */
  switch (EDX) {
    case 0: goto L_12aa9468;
    case 1: goto L_12aa9470;
    case 2: goto L_12aa947c;
    case 3: goto L_12aa9490;
    default: x86_unimpl("switch@0x12aa944f out of table"); return;
  }
  /* 12aa9456 mov edi, edi */
  EDI = (EDI);
L_12aa9468:;
  /* 12aa9468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa946b pop esi */
  ESI = (pop32());
  /* 12aa946c pop edi */
  EDI = (pop32());
  /* 12aa946d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa946e ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa946f nop  */
  /* nop */
L_12aa9470:;
  /* 12aa9470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa9472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa9474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9477 pop esi */
  ESI = (pop32());
  /* 12aa9478 pop edi */
  EDI = (pop32());
  /* 12aa9479 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa947a ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa947b nop  */
  /* nop */
L_12aa947c:;
  /* 12aa947c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa947e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa9480 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa9483 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa9486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9489 pop esi */
  ESI = (pop32());
  /* 12aa948a pop edi */
  EDI = (pop32());
  /* 12aa948b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa948c ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa948d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa9490:;
  /* 12aa9490 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa9492 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa9494 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa9497 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa949a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa949d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa94a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa94a3 pop esi */
  ESI = (pop32());
  /* 12aa94a4 pop edi */
  EDI = (pop32());
  /* 12aa94a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa94a6 ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa94a7 nop  */
  /* nop */
L_12aa94a8:;
  /* 12aa94a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12aa94ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12aa94b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aa94b6 jne 0x12aa94dc */
  if (!C.zf) goto L_12aa94dc;
  /* 12aa94b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa94bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa94be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa94c1 jb 0x12aa94d0 */
  if (C.cf) goto L_12aa94d0;
  /* 12aa94c3 std  */
  C.df=1;
  /* 12aa94c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa94c6 cld  */
  C.df=0;
  /* 12aa94c7 jmp dword ptr [edx*4 + 0x12aa95f0] */
  switch (EDX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa94c7 out of table"); return;
  }
  /* 12aa94ce mov edi, edi */
  EDI = (EDI);
L_12aa94d0:;
  /* 12aa94d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa94d2 jmp dword ptr [ecx*4 + 0x12aa95a0] */
  switch (ECX) {
    case 0: goto L_12aa95e7;
    default: x86_unimpl("switch@0x12aa94d2 out of table"); return;
  }
  /* 12aa94d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa94dc:;
  /* 12aa94dc mov eax, edi */
  EAX = (EDI);
  /* 12aa94de mov edx, 3 */
  EDX = (0x3u);
  /* 12aa94e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa94e6 jb 0x12aa94f4 */
  if (C.cf) goto L_12aa94f4;
  /* 12aa94e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa94eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa94ed jmp dword ptr [eax*4 + 0x12aa94f8] */
  switch (EAX) {
    case 1: goto L_12aa9508;
    case 2: goto L_12aa9528;
    case 3: goto L_12aa9550;
    default: x86_unimpl("switch@0x12aa94ed out of table"); return;
  }
L_12aa94f4:;
  /* 12aa94f4 jmp dword ptr [ecx*4 + 0x12aa95f0] */
  switch (ECX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa94f4 out of table"); return;
  }
  /* 12aa94fb nop  */
  /* nop */
L_12aa9508:;
  /* 12aa9508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa950b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa950d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa9510 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12aa9511 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa9514 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12aa9515 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9518 jb 0x12aa94d0 */
  if (C.cf) goto L_12aa94d0;
  /* 12aa951a std  */
  C.df=1;
  /* 12aa951b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa951d cld  */
  C.df=0;
  /* 12aa951e jmp dword ptr [edx*4 + 0x12aa95f0] */
  switch (EDX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa951e out of table"); return;
  }
  /* 12aa9525 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa9528:;
  /* 12aa9528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa952b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa952d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa9530 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa9533 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa9536 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa9539 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa953c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa953f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9542 jb 0x12aa94d0 */
  if (C.cf) goto L_12aa94d0;
  /* 12aa9544 std  */
  C.df=1;
  /* 12aa9545 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa9547 cld  */
  C.df=0;
  /* 12aa9548 jmp dword ptr [edx*4 + 0x12aa95f0] */
  switch (EDX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa9548 out of table"); return;
  }
  /* 12aa954f nop  */
  /* nop */
L_12aa9550:;
  /* 12aa9550 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa9553 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9555 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa9558 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa955b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa955e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa9561 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa9564 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa9567 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa956a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa956d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9570 jb 0x12aa94d0 */
  if (C.cf) goto L_12aa94d0;
  /* 12aa9576 std  */
  C.df=1;
  /* 12aa9577 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aa9579 cld  */
  C.df=0;
  /* 12aa957a jmp dword ptr [edx*4 + 0x12aa95f0] */
  switch (EDX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa957a out of table"); return;
  }
  /* 12aa9581 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12aa9584 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12aa9585 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 12aa9586 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa9587 adc ch, byte ptr [ebp + edx*4 - 0x6a4bed56] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP + EDX*4 + -0x6a4bed56))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa958e stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa958f adc bh, byte ptr [ebp + edx*4 - 0x6a3bed56] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBP + EDX*4 + -0x6a3bed56))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa9596 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa9597 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa9599 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 12aa959a stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa959b adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa959d xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 12aa959e stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa95a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12aa95a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12aa95ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12aa95b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12aa95b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12aa95b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12aa95bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12aa95c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12aa95c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12aa95c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12aa95cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12aa95d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12aa95d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12aa95d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12aa95dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12aa95e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa95e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12aa95e7:;
  /* 12aa95e7 jmp dword ptr [edx*4 + 0x12aa95f0] */
  switch (EDX) {
    case 0: goto L_12aa9600;
    case 1: goto L_12aa9608;
    case 2: goto L_12aa9618;
    case 3: goto L_12aa962c;
    default: x86_unimpl("switch@0x12aa95e7 out of table"); return;
  }
  /* 12aa95ee mov edi, edi */
  EDI = (EDI);
L_12aa9600:;
  /* 12aa9600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9603 pop esi */
  ESI = (pop32());
  /* 12aa9604 pop edi */
  EDI = (pop32());
  /* 12aa9605 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa9606 ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa9607 nop  */
  /* nop */
L_12aa9608:;
  /* 12aa9608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa960b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa960e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9611 pop esi */
  ESI = (pop32());
  /* 12aa9612 pop edi */
  EDI = (pop32());
  /* 12aa9613 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa9614 ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa9615 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aa9618:;
  /* 12aa9618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa961b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa961e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa9621 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa9624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9627 pop esi */
  ESI = (pop32());
  /* 12aa9628 pop edi */
  EDI = (pop32());
  /* 12aa9629 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa962a ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
  /* 12aa962b nop  */
  /* nop */
L_12aa962c:;
  /* 12aa962c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aa962f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aa9632 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aa9635 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aa9638 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aa963b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aa963e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9641 pop esi */
  ESI = (pop32());
  /* 12aa9642 pop edi */
  EDI = (pop32());
  /* 12aa9643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aa9644 ret  */
  ESPCHK(0x12aa9310u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12aa9650 (104 bytes, 43 insns) */
void f_12aa9650(void) {
  FTRACE(0x12aa9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa9650 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa9651 push esi */
  push32((uint32_t)(ESI));
  /* 12aa9652 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12aa9656 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9658 jne 0x12aa9672 */
  if (!C.zf) goto L_12aa9672;
  /* 12aa965a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12aa965e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa9662 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9664 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa9666 mov ebx, eax */
  EBX = (EAX);
  /* 12aa9668 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa966c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa966e mov edx, ebx */
  EDX = (EBX);
  /* 12aa9670 jmp 0x12aa96b3 */
  goto L_12aa96b3;
L_12aa9672:;
  /* 12aa9672 mov ecx, eax */
  ECX = (EAX);
  /* 12aa9674 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12aa9678 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa967c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12aa9680:;
  /* 12aa9680 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12aa9682 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12aa9684 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12aa9686 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12aa9688 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa968a jne 0x12aa9680 */
  if (!C.zf) goto L_12aa9680;
  /* 12aa968c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa968e mov esi, eax */
  ESI = (EAX);
  /* 12aa9690 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12aa9694 mov ecx, eax */
  ECX = (EAX);
  /* 12aa9696 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12aa969a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12aa969c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa969e jb 0x12aa96ae */
  if (C.cf) goto L_12aa96ae;
  /* 12aa96a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa96a4 ja 0x12aa96ae */
  if ((!C.cf&&!C.zf)) goto L_12aa96ae;
  /* 12aa96a6 jb 0x12aa96af */
  if (C.cf) goto L_12aa96af;
  /* 12aa96a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa96ac jbe 0x12aa96af */
  if ((C.cf||C.zf)) goto L_12aa96af;
L_12aa96ae:;
  /* 12aa96ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12aa96af:;
  /* 12aa96af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa96b1 mov eax, esi */
  EAX = (ESI);
L_12aa96b3:;
  /* 12aa96b3 pop esi */
  ESI = (pop32());
  /* 12aa96b4 pop ebx */
  EBX = (pop32());
  /* 12aa96b5 ret 0x10 */
  ESPCHK(0x12aa9650u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12aa96c0 (117 bytes, 44 insns) */
void f_12aa96c0(void) {
  FTRACE(0x12aa96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa96c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa96c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12aa96c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa96c7 jne 0x12aa96e1 */
  if (!C.zf) goto L_12aa96e1;
  /* 12aa96c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa96cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa96d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa96d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa96d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa96d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa96db mov eax, edx */
  EAX = (EDX);
  /* 12aa96dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa96df jmp 0x12aa9731 */
  goto L_12aa9731;
L_12aa96e1:;
  /* 12aa96e1 mov ecx, eax */
  ECX = (EAX);
  /* 12aa96e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa96e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa96eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12aa96ef:;
  /* 12aa96ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12aa96f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12aa96f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12aa96f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12aa96f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa96f9 jne 0x12aa96ef */
  if (!C.zf) goto L_12aa96ef;
  /* 12aa96fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa96fd mov ecx, eax */
  ECX = (EAX);
  /* 12aa96ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12aa9703 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12aa9704 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12aa9708 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa970a jb 0x12aa971a */
  if (C.cf) goto L_12aa971a;
  /* 12aa970c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9710 ja 0x12aa971a */
  if ((!C.cf&&!C.zf)) goto L_12aa971a;
  /* 12aa9712 jb 0x12aa9722 */
  if (C.cf) goto L_12aa9722;
  /* 12aa9714 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9718 jbe 0x12aa9722 */
  if ((C.cf||C.zf)) goto L_12aa9722;
L_12aa971a:;
  /* 12aa971a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa971e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12aa9722:;
  /* 12aa9722 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9726 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa972a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa972c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa972e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12aa9731:;
  /* 12aa9731 pop ebx */
  EBX = (pop32());
  /* 12aa9732 ret 0x10 */
  ESPCHK(0x12aa96c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009740 @ 0x12aa9740 (628 bytes, 214 insns) */
void f_12aa9740(void) {
  FTRACE(0x12aa9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa9740 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa9741 mov ebp, esp */
  EBP = (ESP);
  /* 12aa9743 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9746 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa9747 push esi */
  push32((uint32_t)(ESI));
  /* 12aa9748 push edi */
  push32((uint32_t)(EDI));
L_12aa9749:;
  /* 12aa9749 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa974d jne 0x12aa976d */
  if (!C.zf) goto L_12aa976d;
  /* 12aa974f push 0x12ac9e7c */
  push32((uint32_t)(0x12ac9e7cu));
  /* 12aa9754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa9756 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12aa9758 push 0x12ac9e70 */
  push32((uint32_t)(0x12ac9e70u));
  /* 12aa975d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa975f call 0x12aa1af0 */
  push32(0x12aa9764u); f_12aa1af0();
  /* 12aa9764 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9767 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa976a jne 0x12aa976d */
  if (!C.zf) goto L_12aa976d;
  /* 12aa976c int3  */
  x86_unimpl("int3 @ 0x12aa976c");
L_12aa976d:;
  /* 12aa976d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa976f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9771 jne 0x12aa9749 */
  if (!C.zf) goto L_12aa9749;
  /* 12aa9773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9776 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa9779 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa977c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa977f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa9782 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9785 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa9788 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa978e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9790 je 0x12aa979f */
  if (C.zf) goto L_12aa979f;
  /* 12aa9792 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9795 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa9798 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa979b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa979d je 0x12aa97b5 */
  if (C.zf) goto L_12aa97b5;
L_12aa979f:;
  /* 12aa979f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa97a5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12aa97a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97aa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12aa97ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa97b0 jmp 0x12aa99ad */
  goto L_12aa99ad;
L_12aa97b5:;
  /* 12aa97b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97b8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa97bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa97be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa97c0 je 0x12aa980c */
  if (C.zf) goto L_12aa980c;
  /* 12aa97c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97c5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12aa97cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa97d2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa97d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa97d7 je 0x12aa97f5 */
  if (C.zf) goto L_12aa97f5;
  /* 12aa97d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97df mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa97e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa97e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa97ea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa97ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97f0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aa97f3 jmp 0x12aa980c */
  goto L_12aa980c;
L_12aa97f5:;
  /* 12aa97f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa97f8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa97fb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa97fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9801 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aa9804 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9807 jmp 0x12aa99ad */
  goto L_12aa99ad;
L_12aa980c:;
  /* 12aa980c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa980f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa9812 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9815 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9818 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aa981b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa981e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa9821 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9824 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9827 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aa982a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa982d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12aa9834 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa983b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa983e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa9841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9844 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa9847 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa984d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa984f jne 0x12aa987f */
  if (!C.zf) goto L_12aa987f;
  /* 12aa9851 cmp dword ptr [ebp - 8], 0x12acd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12acd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9858 je 0x12aa9863 */
  if (C.zf) goto L_12aa9863;
  /* 12aa985a cmp dword ptr [ebp - 8], 0x12acd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12acd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9861 jne 0x12aa9873 */
  if (!C.zf) goto L_12aa9873;
L_12aa9863:;
  /* 12aa9863 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa9866 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9867 call 0x12aab6b0 */
  push32(0x12aa986cu); f_12aab6b0();
  /* 12aa986c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa986f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9871 jne 0x12aa987f */
  if (!C.zf) goto L_12aa987f;
L_12aa9873:;
  /* 12aa9873 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9876 push eax */
  push32((uint32_t)(EAX));
  /* 12aa9877 call 0x12aab5e0 */
  push32(0x12aa987cu); f_12aab5e0();
  /* 12aa987c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa987f:;
  /* 12aa987f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9882 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa9885 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa988b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa988d je 0x12aa996b */
  if (C.zf) goto L_12aa996b;
L_12aa9893:;
  /* 12aa9893 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9896 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9899 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12aa989b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa989e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa98a0 jge 0x12aa98c3 */
  if ((C.sf==C.of)) goto L_12aa98c3;
  /* 12aa98a2 push 0x12ac9e30 */
  push32((uint32_t)(0x12ac9e30u));
  /* 12aa98a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa98a9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12aa98ae push 0x12ac9e70 */
  push32((uint32_t)(0x12ac9e70u));
  /* 12aa98b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa98b5 call 0x12aa1af0 */
  push32(0x12aa98bau); f_12aa1af0();
  /* 12aa98ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa98bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa98c0 jne 0x12aa98c3 */
  if (!C.zf) goto L_12aa98c3;
  /* 12aa98c2 int3  */
  x86_unimpl("int3 @ 0x12aa98c2");
L_12aa98c3:;
  /* 12aa98c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa98c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa98c7 jne 0x12aa9893 */
  if (!C.zf) goto L_12aa9893;
  /* 12aa98c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98cf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12aa98d1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa98d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa98d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98da mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa98dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa98e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa98e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aa98eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa98ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa98f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa98f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa98f8 jle 0x12aa9916 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa9916;
  /* 12aa98fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa98fd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa98fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9901 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa9904 push eax */
  push32((uint32_t)(EAX));
  /* 12aa9905 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa9908 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9909 call 0x12aab2d0 */
  push32(0x12aa990eu); f_12aab2d0();
  /* 12aa990e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9911 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa9914 jmp 0x12aa995e */
  goto L_12aa995e;
L_12aa9916:;
  /* 12aa9916 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa991a je 0x12aa9939 */
  if (C.zf) goto L_12aa9939;
  /* 12aa991c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa991f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12aa9922 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa9925 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9928 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa992b mov ecx, dword ptr [edx*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aa9932 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9934 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aa9937 jmp 0x12aa9940 */
  goto L_12aa9940;
L_12aa9939:;
  /* 12aa9939 mov dword ptr [ebp - 0x14], 0x12acca60 */
  w32((uint32_t)(EBP + -0x14), (0x12acca60u));
L_12aa9940:;
  /* 12aa9940 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa9943 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12aa9947 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa994a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa994c je 0x12aa995e */
  if (C.zf) goto L_12aa995e;
  /* 12aa994e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa9950 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa9952 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa9955 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9956 call 0x12aab180 */
  push32(0x12aa995bu); f_12aab180();
  /* 12aa995b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa995e:;
  /* 12aa995e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9961 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa9964 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12aa9967 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12aa9969 jmp 0x12aa9989 */
  goto L_12aa9989;
L_12aa996b:;
  /* 12aa996b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa9972 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9975 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9976 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12aa9979 push eax */
  push32((uint32_t)(EAX));
  /* 12aa997a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa997d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa997e call 0x12aab2d0 */
  push32(0x12aa9983u); f_12aab2d0();
  /* 12aa9983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9986 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aa9989:;
  /* 12aa9989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa998c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa998f je 0x12aa99a5 */
  if (C.zf) goto L_12aa99a5;
  /* 12aa9991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9994 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa9997 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa999a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa999d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12aa99a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa99a3 jmp 0x12aa99ad */
  goto L_12aa99ad;
L_12aa99a5:;
  /* 12aa99a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa99a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12aa99ad:;
  /* 12aa99ad pop edi */
  EDI = (pop32());
  /* 12aa99ae pop esi */
  ESI = (pop32());
  /* 12aa99af pop ebx */
  EBX = (pop32());
  /* 12aa99b0 mov esp, ebp */
  ESP = (EBP);
  /* 12aa99b2 pop ebp */
  EBP = (pop32());
  /* 12aa99b3 ret  */
  ESPCHK(0x12aa9740u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x12aa99c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12aa99c0(void) {
  FTRACE(0x12aa99c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa99c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa99c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa99c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa99c9 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa99ca push esi */
  push32((uint32_t)(ESI));
  /* 12aa99cb push edi */
  push32((uint32_t)(EDI));
  /* 12aa99cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aa99d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12aa99dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12aa99e4:;
  /* 12aa99e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa99e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aa99e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12aa99ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa99f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa99f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa99f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12aa99f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa99fb je 0x12aaa5d7 */
  if (C.zf) goto L_12aaa5d7;
  /* 12aa9a01 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9a08 jl 0x12aaa5d7 */
  if ((C.sf!=C.of)) goto L_12aaa5d7;
  /* 12aa9a0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9a12 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9a15 jl 0x12aa9a36 */
  if ((C.sf!=C.of)) goto L_12aa9a36;
  /* 12aa9a17 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9a1b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9a1e jg 0x12aa9a36 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aa9a36;
  /* 12aa9a20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9a24 movsx ecx, byte ptr [eax + 0x12ac9e68] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12ac9e68))));
  /* 12aa9a2b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9a2e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12aa9a34 jmp 0x12aa9a40 */
  goto L_12aa9a40;
L_12aa9a36:;
  /* 12aa9a36 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12aa9a40:;
  /* 12aa9a40 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12aa9a46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa9a49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa9a4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa9a4f movsx edx, byte ptr [ecx + eax*8 + 0x12ac9e88] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12ac9e88))));
  /* 12aa9a57 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12aa9a5a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aa9a5d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa9a60 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12aa9a66 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9a6d ja 0x12aaa5d2 */
  if ((!C.cf&&!C.zf)) goto L_12aaa5d2;
  /* 12aa9a73 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12aa9a79 jmp dword ptr [ecx*4 + 0x12aaa5e4] */
  switch (ECX) {
    case 0: goto L_12aa9a80;
    case 1: goto L_12aa9b1a;
    case 2: goto L_12aa9b5c;
    case 3: goto L_12aa9bcb;
    case 4: goto L_12aa9c23;
    case 5: goto L_12aa9c32;
    case 6: goto L_12aa9c7e;
    case 7: goto L_12aa9d11;
    case 8: goto L_12aa9ba8;
    case 9: goto L_12aa9bb3;
    case 10: goto L_12aa9b9e;
    case 11: goto L_12aa9b93;
    case 12: goto L_12aa9bbe;
    case 13: goto L_12aa9bc6;
    default: x86_unimpl("switch@0x12aa9a79 out of table"); return;
  }
L_12aa9a80:;
  /* 12aa9a80 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12aa9a87 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa9a8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9a90 mov eax, dword ptr [0x12accc98] */
  EAX = (r32((uint32_t)(0x12accc98)));
  /* 12aa9a95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9a97 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12aa9a9b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9aa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa9aa3 je 0x12aa9afd */
  if (C.zf) goto L_12aa9afd;
  /* 12aa9aa5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12aa9aab push edx */
  push32((uint32_t)(EDX));
  /* 12aa9aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9aaf push eax */
  push32((uint32_t)(EAX));
  /* 12aa9ab0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9ab5 call 0x12aaa6f0 */
  push32(0x12aa9abau); f_12aaa6f0();
  /* 12aa9aba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9abd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9ac0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa9ac2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12aa9ac5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9ac8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9acb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12aa9ace:;
  /* 12aa9ace movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9ad2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9ad4 jne 0x12aa9af7 */
  if (!C.zf) goto L_12aa9af7;
  /* 12aa9ad6 push 0x12ac9f08 */
  push32((uint32_t)(0x12ac9f08u));
  /* 12aa9adb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa9add push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12aa9ae2 push 0x12ac9efc */
  push32((uint32_t)(0x12ac9efcu));
  /* 12aa9ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa9ae9 call 0x12aa1af0 */
  push32(0x12aa9aeeu); f_12aa1af0();
  /* 12aa9aee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9af1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9af4 jne 0x12aa9af7 */
  if (!C.zf) goto L_12aa9af7;
  /* 12aa9af6 int3  */
  x86_unimpl("int3 @ 0x12aa9af6");
L_12aa9af7:;
  /* 12aa9af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9afb jne 0x12aa9ace */
  if (!C.zf) goto L_12aa9ace;
L_12aa9afd:;
  /* 12aa9afd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12aa9b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9b04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa9b07 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9b08 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9b0c push eax */
  push32((uint32_t)(EAX));
  /* 12aa9b0d call 0x12aaa6f0 */
  push32(0x12aa9b12u); f_12aaa6f0();
  /* 12aa9b12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9b15 jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9b1a:;
  /* 12aa9b1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa9b21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa9b24 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12aa9b2a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12aa9b30 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12aa9b36 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12aa9b3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa9b3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa9b46 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12aa9b50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12aa9b57 jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9b5c:;
  /* 12aa9b5c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9b60 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12aa9b66 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12aa9b6c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9b6f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12aa9b75 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9b7c ja 0x12aa9bc6 */
  if ((!C.cf&&!C.zf)) goto L_12aa9bc6;
  /* 12aa9b7e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12aa9b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9b86 mov al, byte ptr [ecx + 0x12aaa61c] */
  AL = (r8((uint32_t)(ECX + 0x12aaa61c)));
  /* 12aa9b8c jmp dword ptr [eax*4 + 0x12aaa604] */
  switch (EAX) {
    case 0: goto L_12aa9ba8;
    case 1: goto L_12aa9bb3;
    case 2: goto L_12aa9b9e;
    case 3: goto L_12aa9b93;
    case 4: goto L_12aa9bbe;
    case 5: goto L_12aa9bc6;
    default: x86_unimpl("switch@0x12aa9b8c out of table"); return;
  }
L_12aa9b93:;
  /* 12aa9b93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9b96 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9b99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa9b9c jmp 0x12aa9bc6 */
  goto L_12aa9bc6;
L_12aa9b9e:;
  /* 12aa9b9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9ba1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12aa9ba3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa9ba6 jmp 0x12aa9bc6 */
  goto L_12aa9bc6;
L_12aa9ba8:;
  /* 12aa9ba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9bab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9bae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa9bb1 jmp 0x12aa9bc6 */
  goto L_12aa9bc6;
L_12aa9bb3:;
  /* 12aa9bb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9bb6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12aa9bb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa9bbc jmp 0x12aa9bc6 */
  goto L_12aa9bc6;
L_12aa9bbe:;
  /* 12aa9bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9bc1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12aa9bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa9bc6:;
  /* 12aa9bc6 jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9bcb:;
  /* 12aa9bcb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9bcf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9bd2 jne 0x12aa9c07 */
  if (!C.zf) goto L_12aa9c07;
  /* 12aa9bd4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12aa9bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9bd8 call 0x12aaa800 */
  push32(0x12aa9bddu); f_12aaa800();
  /* 12aa9bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9be0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12aa9be6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9bed jge 0x12aa9c05 */
  if ((C.sf==C.of)) goto L_12aa9c05;
  /* 12aa9bef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9bf2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12aa9bf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa9bf7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12aa9bfd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa9bff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12aa9c05:;
  /* 12aa9c05 jmp 0x12aa9c1e */
  goto L_12aa9c1e;
L_12aa9c07:;
  /* 12aa9c07 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12aa9c0d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa9c10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9c14 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12aa9c18 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12aa9c1e:;
  /* 12aa9c1e jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9c23:;
  /* 12aa9c23 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12aa9c2d jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9c32:;
  /* 12aa9c32 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9c36 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9c39 jne 0x12aa9c62 */
  if (!C.zf) goto L_12aa9c62;
  /* 12aa9c3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12aa9c3e push eax */
  push32((uint32_t)(EAX));
  /* 12aa9c3f call 0x12aaa800 */
  push32(0x12aa9c44u); f_12aaa800();
  /* 12aa9c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9c47 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12aa9c4d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9c54 jge 0x12aa9c60 */
  if ((C.sf==C.of)) goto L_12aa9c60;
  /* 12aa9c56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12aa9c60:;
  /* 12aa9c60 jmp 0x12aa9c79 */
  goto L_12aa9c79;
L_12aa9c62:;
  /* 12aa9c62 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12aa9c68 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa9c6b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9c6f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12aa9c73 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12aa9c79:;
  /* 12aa9c79 jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9c7e:;
  /* 12aa9c7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9c82 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12aa9c88 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12aa9c8e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9c91 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12aa9c97 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9c9e ja 0x12aa9d0c */
  if ((!C.cf&&!C.zf)) goto L_12aa9d0c;
  /* 12aa9ca0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12aa9ca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9ca8 mov al, byte ptr [ecx + 0x12aaa641] */
  AL = (r8((uint32_t)(ECX + 0x12aaa641)));
  /* 12aa9cae jmp dword ptr [eax*4 + 0x12aaa62d] */
  switch (EAX) {
    case 0: goto L_12aa9cc0;
    case 1: goto L_12aa9cf9;
    case 2: goto L_12aa9cb5;
    case 3: goto L_12aa9d03;
    case 4: goto L_12aa9d0c;
    default: x86_unimpl("switch@0x12aa9cae out of table"); return;
  }
L_12aa9cb5:;
  /* 12aa9cb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9cb8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa9cbe jmp 0x12aa9d0c */
  goto L_12aa9d0c;
L_12aa9cc0:;
  /* 12aa9cc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9cc3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa9cc6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9cc9 jne 0x12aa9ceb */
  if (!C.zf) goto L_12aa9ceb;
  /* 12aa9ccb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9cce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12aa9cd2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9cd5 jne 0x12aa9ceb */
  if (!C.zf) goto L_12aa9ceb;
  /* 12aa9cd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa9cda add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9cdd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12aa9ce0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9ce3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12aa9ce6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa9ce9 jmp 0x12aa9cf7 */
  goto L_12aa9cf7;
L_12aa9ceb:;
  /* 12aa9ceb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12aa9cf2 jmp 0x12aa9a80 */
  goto L_12aa9a80;
L_12aa9cf7:;
  /* 12aa9cf7 jmp 0x12aa9d0c */
  goto L_12aa9d0c;
L_12aa9cf9:;
  /* 12aa9cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9cfc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12aa9cfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa9d01 jmp 0x12aa9d0c */
  goto L_12aa9d0c;
L_12aa9d03:;
  /* 12aa9d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9d06 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12aa9d09 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa9d0c:;
  /* 12aa9d0c jmp 0x12aaa5d2 */
  goto L_12aaa5d2;
L_12aa9d11:;
  /* 12aa9d11 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aa9d15 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12aa9d1b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12aa9d21 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9d24 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12aa9d2a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9d31 ja 0x12aaa3f7 */
  if ((!C.cf&&!C.zf)) goto L_12aaa3f7;
  /* 12aa9d37 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12aa9d3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9d3f mov cl, byte ptr [edx + 0x12aaa6ac] */
  CL = (r8((uint32_t)(EDX + 0x12aaa6ac)));
  /* 12aa9d45 jmp dword ptr [ecx*4 + 0x12aaa670] */
  switch (ECX) {
    case 0: goto L_12aa9d4c;
    case 1: goto L_12aa9fe0;
    case 2: goto L_12aa9e70;
    case 3: goto L_12aaa119;
    case 4: goto L_12aa9ddb;
    case 5: goto L_12aa9d61;
    case 6: goto L_12aaa0eb;
    case 7: goto L_12aa9ff0;
    case 8: goto L_12aa9f95;
    case 9: goto L_12aaa165;
    case 10: goto L_12aaa10f;
    case 11: goto L_12aa9e86;
    case 12: goto L_12aaa103;
    case 13: goto L_12aaa125;
    case 14: goto L_12aaa3f7;
    default: x86_unimpl("switch@0x12aa9d45 out of table"); return;
  }
L_12aa9d4c:;
  /* 12aa9d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9d4f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9d56 jne 0x12aa9d61 */
  if (!C.zf) goto L_12aa9d61;
  /* 12aa9d58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9d5b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12aa9d5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa9d61:;
  /* 12aa9d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9d64 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa9d6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9d6c je 0x12aa9da7 */
  if (C.zf) goto L_12aa9da7;
  /* 12aa9d6e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12aa9d71 push eax */
  push32((uint32_t)(EAX));
  /* 12aa9d72 call 0x12aaa840 */
  push32(0x12aa9d77u); f_12aaa840();
  /* 12aa9d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9d7a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12aa9d7e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12aa9d82 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa9d83 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12aa9d89 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9d8a call 0x12aab920 */
  push32(0x12aa9d8fu); f_12aab920();
  /* 12aa9d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9d92 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aa9d95 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9d99 jge 0x12aa9da5 */
  if ((C.sf==C.of)) goto L_12aa9da5;
  /* 12aa9d9b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12aa9da5:;
  /* 12aa9da5 jmp 0x12aa9dcd */
  goto L_12aa9dcd;
L_12aa9da7:;
  /* 12aa9da7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12aa9daa push eax */
  push32((uint32_t)(EAX));
  /* 12aa9dab call 0x12aaa800 */
  push32(0x12aa9db0u); f_12aaa800();
  /* 12aa9db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9db3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12aa9dba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12aa9dc0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12aa9dc6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12aa9dcd:;
  /* 12aa9dcd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12aa9dd3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aa9dd6 jmp 0x12aaa3f7 */
  goto L_12aaa3f7;
L_12aa9ddb:;
  /* 12aa9ddb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12aa9dde push eax */
  push32((uint32_t)(EAX));
  /* 12aa9ddf call 0x12aaa800 */
  push32(0x12aa9de4u); f_12aaa800();
  /* 12aa9de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9de7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12aa9ded cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9df4 je 0x12aa9e02 */
  if (C.zf) goto L_12aa9e02;
  /* 12aa9df6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12aa9dfc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9e00 jne 0x12aa9e1c */
  if (!C.zf) goto L_12aa9e1c;
L_12aa9e02:;
  /* 12aa9e02 mov edx, dword ptr [0x12accfb0] */
  EDX = (r32((uint32_t)(0x12accfb0)));
  /* 12aa9e08 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aa9e0b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa9e0e push eax */
  push32((uint32_t)(EAX));
  /* 12aa9e0f call 0x12aa5860 */
  push32(0x12aa9e14u); f_12aa5860();
  /* 12aa9e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9e17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aa9e1a jmp 0x12aa9e6b */
  goto L_12aa9e6b;
L_12aa9e1c:;
  /* 12aa9e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9e1f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa9e27 je 0x12aa9e4c */
  if (C.zf) goto L_12aa9e4c;
  /* 12aa9e29 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12aa9e2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa9e32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa9e35 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12aa9e3b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12aa9e3e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12aa9e40 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa9e43 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12aa9e4a jmp 0x12aa9e6b */
  goto L_12aa9e6b;
L_12aa9e4c:;
  /* 12aa9e4c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12aa9e53 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12aa9e59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa9e5c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12aa9e5f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12aa9e65 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12aa9e68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12aa9e6b:;
  /* 12aa9e6b jmp 0x12aaa3f7 */
  goto L_12aaa3f7;
L_12aa9e70:;
  /* 12aa9e70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9e73 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa9e79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa9e7b jne 0x12aa9e86 */
  if (!C.zf) goto L_12aa9e86;
  /* 12aa9e7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9e80 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12aa9e83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa9e86:;
  /* 12aa9e86 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9e8d jne 0x12aa9e9b */
  if (!C.zf) goto L_12aa9e9b;
  /* 12aa9e8f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12aa9e99 jmp 0x12aa9ea7 */
  goto L_12aa9ea7;
L_12aa9e9b:;
  /* 12aa9e9b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12aa9ea1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12aa9ea7:;
  /* 12aa9ea7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12aa9ead mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12aa9eb3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12aa9eb6 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9eb7 call 0x12aaa800 */
  push32(0x12aa9ebcu); f_12aaa800();
  /* 12aa9ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9ebf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa9ec2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9ec5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9ecc je 0x12aa9f36 */
  if (C.zf) goto L_12aa9f36;
  /* 12aa9ece cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9ed2 jne 0x12aa9edd */
  if (!C.zf) goto L_12aa9edd;
  /* 12aa9ed4 mov ecx, dword ptr [0x12accfb4] */
  ECX = (r32((uint32_t)(0x12accfb4)));
  /* 12aa9eda mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12aa9edd:;
  /* 12aa9edd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12aa9ee4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa9ee7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12aa9eed:;
  /* 12aa9eed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12aa9ef3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12aa9ef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9efc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12aa9f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9f04 je 0x12aa9f26 */
  if (C.zf) goto L_12aa9f26;
  /* 12aa9f06 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12aa9f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9f0e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12aa9f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9f13 je 0x12aa9f26 */
  if (C.zf) goto L_12aa9f26;
  /* 12aa9f15 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12aa9f1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9f1e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12aa9f24 jmp 0x12aa9eed */
  goto L_12aa9eed;
L_12aa9f26:;
  /* 12aa9f26 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12aa9f2c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9f2f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12aa9f31 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12aa9f34 jmp 0x12aa9f90 */
  goto L_12aa9f90;
L_12aa9f36:;
  /* 12aa9f36 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa9f3a jne 0x12aa9f44 */
  if (!C.zf) goto L_12aa9f44;
  /* 12aa9f3c mov eax, dword ptr [0x12accfb0] */
  EAX = (r32((uint32_t)(0x12accfb0)));
  /* 12aa9f41 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12aa9f44:;
  /* 12aa9f44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa9f47 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12aa9f4d:;
  /* 12aa9f4d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12aa9f53 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12aa9f59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9f5c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12aa9f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9f64 je 0x12aa9f84 */
  if (C.zf) goto L_12aa9f84;
  /* 12aa9f66 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12aa9f6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa9f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa9f71 je 0x12aa9f84 */
  if (C.zf) goto L_12aa9f84;
  /* 12aa9f73 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12aa9f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9f7c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12aa9f82 jmp 0x12aa9f4d */
  goto L_12aa9f4d;
L_12aa9f84:;
  /* 12aa9f84 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12aa9f8a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa9f8d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12aa9f90:;
  /* 12aa9f90 jmp 0x12aaa3f7 */
  goto L_12aaa3f7;
L_12aa9f95:;
  /* 12aa9f95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12aa9f98 push edx */
  push32((uint32_t)(EDX));
  /* 12aa9f99 call 0x12aaa800 */
  push32(0x12aa9f9eu); f_12aaa800();
  /* 12aa9f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa9fa1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12aa9fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9faa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa9fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa9faf je 0x12aa9fc3 */
  if (C.zf) goto L_12aa9fc3;
  /* 12aa9fb1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12aa9fb7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12aa9fbe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12aa9fc1 jmp 0x12aa9fd1 */
  goto L_12aa9fd1;
L_12aa9fc3:;
  /* 12aa9fc3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12aa9fc9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12aa9fcf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12aa9fd1:;
  /* 12aa9fd1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12aa9fdb jmp 0x12aaa3f7 */
  goto L_12aaa3f7;
L_12aa9fe0:;
  /* 12aa9fe0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12aa9fe7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12aa9fea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aa9fed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12aa9ff0:;
  /* 12aa9ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa9ff3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12aa9ff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa9ff8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12aa9ffe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12aaa001 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa008 jge 0x12aaa016 */
  if ((C.sf==C.of)) goto L_12aaa016;
  /* 12aaa00a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12aaa014 jmp 0x12aaa032 */
  goto L_12aaa032;
L_12aaa016:;
  /* 12aaa016 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa01d jne 0x12aaa032 */
  if (!C.zf) goto L_12aaa032;
  /* 12aaa01f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aaa023 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa026 jne 0x12aaa032 */
  if (!C.zf) goto L_12aaa032;
  /* 12aaa028 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12aaa032:;
  /* 12aaa032 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa035 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa038 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12aaa03b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa03e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aaa043 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aaa046 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12aaa04c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12aaa052 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaa055 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa056 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12aaa05c push edx */
  push32((uint32_t)(EDX));
  /* 12aaa05d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aaa061 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa062 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa065 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa066 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12aaa06c push edx */
  push32((uint32_t)(EDX));
  /* 12aaa06d call dword ptr [0x12acd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acd3a0))), 0x12aaa073u);
  /* 12aaa073 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa079 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa07e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa080 je 0x12aaa098 */
  if (C.zf) goto L_12aaa098;
  /* 12aaa082 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa089 jne 0x12aaa098 */
  if (!C.zf) goto L_12aaa098;
  /* 12aaa08b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa08e push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa08f call dword ptr [0x12acd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acd3ac))), 0x12aaa095u);
  /* 12aaa095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa098:;
  /* 12aaa098 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12aaa09c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa09f jne 0x12aaa0ba */
  if (!C.zf) goto L_12aaa0ba;
  /* 12aaa0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa0a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa0a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa0ab jne 0x12aaa0ba */
  if (!C.zf) goto L_12aaa0ba;
  /* 12aaa0ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa0b1 call dword ptr [0x12acd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acd3a4))), 0x12aaa0b7u);
  /* 12aaa0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa0ba:;
  /* 12aaa0ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa0bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aaa0c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa0c3 jne 0x12aaa0d7 */
  if (!C.zf) goto L_12aaa0d7;
  /* 12aaa0c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa0c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12aaa0cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aaa0ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa0d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa0d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12aaa0d7:;
  /* 12aaa0d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa0da push eax */
  push32((uint32_t)(EAX));
  /* 12aaa0db call 0x12aa5860 */
  push32(0x12aaa0e0u); f_12aa5860();
  /* 12aaa0e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa0e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aaa0e6 jmp 0x12aaa3f7 */
  goto L_12aaa3f7;
L_12aaa0eb:;
  /* 12aaa0eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa0ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa0f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aaa0f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12aaa0fe jmp 0x12aaa185 */
  goto L_12aaa185;
L_12aaa103:;
  /* 12aaa103 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12aaa10d jmp 0x12aaa185 */
  goto L_12aaa185;
L_12aaa10f:;
  /* 12aaa10f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12aaa119:;
  /* 12aaa119 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12aaa123 jmp 0x12aaa12f */
  goto L_12aaa12f;
L_12aaa125:;
  /* 12aaa125 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12aaa12f:;
  /* 12aaa12f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12aaa139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa13c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa144 je 0x12aaa163 */
  if (C.zf) goto L_12aaa163;
  /* 12aaa146 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12aaa14d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12aaa153 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa156 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12aaa15c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12aaa163:;
  /* 12aaa163 jmp 0x12aaa185 */
  goto L_12aaa185;
L_12aaa165:;
  /* 12aaa165 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12aaa16f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa172 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaa17a je 0x12aaa185 */
  if (C.zf) goto L_12aaa185;
  /* 12aaa17c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa17f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12aaa182 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aaa185:;
  /* 12aaa185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa188 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa18d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa18f je 0x12aaa1ae */
  if (C.zf) goto L_12aaa1ae;
  /* 12aaa191 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12aaa194 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa195 call 0x12aaa820 */
  push32(0x12aaa19au); f_12aaa820();
  /* 12aaa19a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa19d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12aaa1a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12aaa1a9 jmp 0x12aaa23f */
  goto L_12aaa23f;
L_12aaa1ae:;
  /* 12aaa1ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa1b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa1b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa1b6 je 0x12aaa200 */
  if (C.zf) goto L_12aaa200;
  /* 12aaa1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa1bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa1c0 je 0x12aaa1e0 */
  if (C.zf) goto L_12aaa1e0;
  /* 12aaa1c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12aaa1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa1c6 call 0x12aaa800 */
  push32(0x12aaa1cbu); f_12aaa800();
  /* 12aaa1cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa1ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12aaa1d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaa1d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12aaa1d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12aaa1de jmp 0x12aaa1fe */
  goto L_12aaa1fe;
L_12aaa1e0:;
  /* 12aaa1e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12aaa1e3 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa1e4 call 0x12aaa800 */
  push32(0x12aaa1e9u); f_12aaa800();
  /* 12aaa1e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa1ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa1f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaa1f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12aaa1f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12aaa1fe:;
  /* 12aaa1fe jmp 0x12aaa23f */
  goto L_12aaa23f;
L_12aaa200:;
  /* 12aaa200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa203 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa208 je 0x12aaa225 */
  if (C.zf) goto L_12aaa225;
  /* 12aaa20a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12aaa20d push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa20e call 0x12aaa800 */
  push32(0x12aaa213u); f_12aaa800();
  /* 12aaa213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa216 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaa217 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12aaa21d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12aaa223 jmp 0x12aaa23f */
  goto L_12aaa23f;
L_12aaa225:;
  /* 12aaa225 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12aaa228 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa229 call 0x12aaa800 */
  push32(0x12aaa22eu); f_12aaa800();
  /* 12aaa22e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa231 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa233 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12aaa239 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12aaa23f:;
  /* 12aaa23f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa242 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa247 je 0x12aaa287 */
  if (C.zf) goto L_12aaa287;
  /* 12aaa249 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa250 jg 0x12aaa287 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaa287;
  /* 12aaa252 jl 0x12aaa25d */
  if ((C.sf!=C.of)) goto L_12aaa25d;
  /* 12aaa254 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa25b jae 0x12aaa287 */
  if (!C.cf) goto L_12aaa287;
L_12aaa25d:;
  /* 12aaa25d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12aaa263 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaa265 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12aaa26b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa26e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaa270 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12aaa276 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12aaa27c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa27f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12aaa282 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aaa285 jmp 0x12aaa29f */
  goto L_12aaa29f;
L_12aaa287:;
  /* 12aaa287 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12aaa28d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12aaa293 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12aaa299 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12aaa29f:;
  /* 12aaa29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa2a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa2a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa2aa jne 0x12aaa2c7 */
  if (!C.zf) goto L_12aaa2c7;
  /* 12aaa2ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12aaa2b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12aaa2b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa2bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12aaa2c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12aaa2c7:;
  /* 12aaa2c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa2ce jge 0x12aaa2dc */
  if ((C.sf==C.of)) goto L_12aaa2dc;
  /* 12aaa2d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12aaa2da jmp 0x12aaa2e5 */
  goto L_12aaa2e5;
L_12aaa2dc:;
  /* 12aaa2dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa2df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa2e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aaa2e5:;
  /* 12aaa2e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12aaa2eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa2f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa2f3 jne 0x12aaa2fc */
  if (!C.zf) goto L_12aaa2fc;
  /* 12aaa2f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12aaa2fc:;
  /* 12aaa2fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12aaa2ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12aaa302:;
  /* 12aaa302 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12aaa308 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12aaa30e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa311 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12aaa317 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa319 jg 0x12aaa32f */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaa32f;
  /* 12aaa31b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12aaa321 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa327 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaa329 je 0x12aaa3b0 */
  if (C.zf) goto L_12aaa3b0;
L_12aaa32f:;
  /* 12aaa32f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12aaa335 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaa336 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa337 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa338 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12aaa33e push edx */
  push32((uint32_t)(EDX));
  /* 12aaa33f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12aaa345 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa346 call 0x12aa96c0 */
  push32(0x12aaa34bu); f_12aa96c0();
  /* 12aaa34b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa34e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12aaa354 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12aaa35a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaa35b push edx */
  push32((uint32_t)(EDX));
  /* 12aaa35c push eax */
  push32((uint32_t)(EAX));
  /* 12aaa35d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12aaa363 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa364 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12aaa36a push edx */
  push32((uint32_t)(EDX));
  /* 12aaa36b call 0x12aa9650 */
  push32(0x12aaa370u); f_12aa9650();
  /* 12aaa370 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12aaa376 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12aaa37c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa383 jle 0x12aaa397 */
  if ((C.zf||C.sf!=C.of)) goto L_12aaa397;
  /* 12aaa385 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12aaa38b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa391 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12aaa397:;
  /* 12aaa397 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa39a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12aaa3a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12aaa3a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa3a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa3a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aaa3ab jmp 0x12aaa302 */
  goto L_12aaa302;
L_12aaa3b0:;
  /* 12aaa3b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12aaa3b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa3b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aaa3b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa3bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa3bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aaa3c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa3c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa3ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa3cc je 0x12aaa3f7 */
  if (C.zf) goto L_12aaa3f7;
  /* 12aaa3ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa3d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aaa3d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa3d7 jne 0x12aaa3df */
  if (!C.zf) goto L_12aaa3df;
  /* 12aaa3d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa3dd jne 0x12aaa3f7 */
  if (!C.zf) goto L_12aaa3f7;
L_12aaa3df:;
  /* 12aaa3df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa3e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa3e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aaa3e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa3eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12aaa3ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaa3f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa3f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12aaa3f7:;
  /* 12aaa3f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa3fe jne 0x12aaa5d2 */
  if (!C.zf) goto L_12aaa5d2;
  /* 12aaa404 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa407 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa40a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa40c je 0x12aaa45d */
  if (C.zf) goto L_12aaa45d;
  /* 12aaa40e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa411 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaa419 je 0x12aaa42b */
  if (C.zf) goto L_12aaa42b;
  /* 12aaa41b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12aaa422 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12aaa429 jmp 0x12aaa45d */
  goto L_12aaa45d;
L_12aaa42b:;
  /* 12aaa42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa42e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa431 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa433 je 0x12aaa445 */
  if (C.zf) goto L_12aaa445;
  /* 12aaa435 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12aaa43c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12aaa443 jmp 0x12aaa45d */
  goto L_12aaa45d;
L_12aaa445:;
  /* 12aaa445 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa448 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa44b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa44d je 0x12aaa45d */
  if (C.zf) goto L_12aaa45d;
  /* 12aaa44f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12aaa456 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12aaa45d:;
  /* 12aaa45d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12aaa463 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa466 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa469 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12aaa46f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa472 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa475 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa477 jne 0x12aaa495 */
  if (!C.zf) goto L_12aaa495;
  /* 12aaa479 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa47f push eax */
  push32((uint32_t)(EAX));
  /* 12aaa480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa483 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa484 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12aaa48a push edx */
  push32((uint32_t)(EDX));
  /* 12aaa48b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12aaa48d call 0x12aaa770 */
  push32(0x12aaa492u); f_12aaa770();
  /* 12aaa492 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa495:;
  /* 12aaa495 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa49b push eax */
  push32((uint32_t)(EAX));
  /* 12aaa49c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa49f push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa4a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaa4a3 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa4a4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12aaa4aa push eax */
  push32((uint32_t)(EAX));
  /* 12aaa4ab call 0x12aaa7b0 */
  push32(0x12aaa4b0u); f_12aaa7b0();
  /* 12aaa4b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa4b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa4b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa4b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaa4bb je 0x12aaa4e3 */
  if (C.zf) goto L_12aaa4e3;
  /* 12aaa4bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa4c0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa4c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa4c5 jne 0x12aaa4e3 */
  if (!C.zf) goto L_12aaa4e3;
  /* 12aaa4c7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa4cd push eax */
  push32((uint32_t)(EAX));
  /* 12aaa4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa4d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa4d2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12aaa4d8 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa4d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12aaa4db call 0x12aaa770 */
  push32(0x12aaa4e0u); f_12aaa770();
  /* 12aaa4e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa4e3:;
  /* 12aaa4e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa4e7 je 0x12aaa591 */
  if (C.zf) goto L_12aaa591;
  /* 12aaa4ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa4f1 jle 0x12aaa591 */
  if ((C.zf||C.sf!=C.of)) goto L_12aaa591;
  /* 12aaa4f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa4fa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12aaa500 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaa503 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12aaa509:;
  /* 12aaa509 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12aaa50f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12aaa515 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa518 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12aaa51e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa520 je 0x12aaa58f */
  if (C.zf) goto L_12aaa58f;
  /* 12aaa522 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12aaa528 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12aaa52b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12aaa532 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12aaa539 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa53a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12aaa540 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa541 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12aaa547 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa54a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12aaa550 call 0x12aab920 */
  push32(0x12aaa555u); f_12aab920();
  /* 12aaa555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa558 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12aaa55e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa565 jg 0x12aaa569 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaa569;
  /* 12aaa567 jmp 0x12aaa58f */
  goto L_12aaa58f;
L_12aaa569:;
  /* 12aaa569 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa56f push eax */
  push32((uint32_t)(EAX));
  /* 12aaa570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa573 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa574 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12aaa57a push edx */
  push32((uint32_t)(EDX));
  /* 12aaa57b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12aaa581 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa582 call 0x12aaa7b0 */
  push32(0x12aaa587u); f_12aaa7b0();
  /* 12aaa587 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa58a jmp 0x12aaa509 */
  goto L_12aaa509;
L_12aaa58f:;
  /* 12aaa58f jmp 0x12aaa5ac */
  goto L_12aaa5ac;
L_12aaa591:;
  /* 12aaa591 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa597 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa59b push edx */
  push32((uint32_t)(EDX));
  /* 12aaa59c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaa59f push eax */
  push32((uint32_t)(EAX));
  /* 12aaa5a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaa5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa5a4 call 0x12aaa7b0 */
  push32(0x12aaa5a9u); f_12aaa7b0();
  /* 12aaa5a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa5ac:;
  /* 12aaa5ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa5af and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa5b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaa5b4 je 0x12aaa5d2 */
  if (C.zf) goto L_12aaa5d2;
  /* 12aaa5b6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12aaa5bc push eax */
  push32((uint32_t)(EAX));
  /* 12aaa5bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa5c1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12aaa5c7 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa5c8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12aaa5ca call 0x12aaa770 */
  push32(0x12aaa5cfu); f_12aaa770();
  /* 12aaa5cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaa5d2:;
  /* 12aaa5d2 jmp 0x12aa99e4 */
  goto L_12aa99e4;
L_12aaa5d7:;
  /* 12aaa5d7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12aaa5dd pop edi */
  EDI = (pop32());
  /* 12aaa5de pop esi */
  ESI = (pop32());
  /* 12aaa5df pop ebx */
  EBX = (pop32());
  /* 12aaa5e0 mov esp, ebp */
  ESP = (EBP);
  /* 12aaa5e2 pop ebp */
  EBP = (pop32());
  /* 12aaa5e3 ret  */
  ESPCHK(0x12aa99c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x12aaa6f0 (119 bytes, 44 insns) */
void f_12aaa6f0(void) {
  FTRACE(0x12aaa6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa6f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa6f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aaa6fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa6fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa700 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12aaa703 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa706 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa70a jl 0x12aaa732 */
  if ((C.sf!=C.of)) goto L_12aaa732;
  /* 12aaa70c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa70f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aaa711 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12aaa714 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12aaa716 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12aaa71a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aaa720 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aaa723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa726 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aaa728 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa72b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa72e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aaa730 jmp 0x12aaa745 */
  goto L_12aaa745;
L_12aaa732:;
  /* 12aaa732 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa735 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa739 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa73a call 0x12aa9740 */
  push32(0x12aaa73fu); f_12aa9740();
  /* 12aaa73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aaa745:;
  /* 12aaa745 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa749 jne 0x12aaa756 */
  if (!C.zf) goto L_12aaa756;
  /* 12aaa74b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa74e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12aaa754 jmp 0x12aaa763 */
  goto L_12aaa763;
L_12aaa756:;
  /* 12aaa756 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa759 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aaa75b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa75e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa761 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12aaa763:;
  /* 12aaa763 mov esp, ebp */
  ESP = (EBP);
  /* 12aaa765 pop ebp */
  EBP = (pop32());
  /* 12aaa766 ret  */
  ESPCHK(0x12aaa6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x12aaa770 (53 bytes, 23 insns) */
void f_12aaa770(void) {
  FTRACE(0x12aaa770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa770 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa771 mov ebp, esp */
  EBP = (ESP);
L_12aaa773:;
  /* 12aaa773 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa776 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa77c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12aaa77f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa781 jle 0x12aaa7a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12aaa7a3;
  /* 12aaa783 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaa786 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa787 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa78a push eax */
  push32((uint32_t)(EAX));
  /* 12aaa78b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa78e push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa78f call 0x12aaa6f0 */
  push32(0x12aaa794u); f_12aaa6f0();
  /* 12aaa794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa797 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaa79a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa79d jne 0x12aaa7a1 */
  if (!C.zf) goto L_12aaa7a1;
  /* 12aaa79f jmp 0x12aaa7a3 */
  goto L_12aaa7a3;
L_12aaa7a1:;
  /* 12aaa7a1 jmp 0x12aaa773 */
  goto L_12aaa773;
L_12aaa7a3:;
  /* 12aaa7a3 pop ebp */
  EBP = (pop32());
  /* 12aaa7a4 ret  */
  ESPCHK(0x12aaa770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7b0 @ 0x12aaa7b0 (74 bytes, 31 insns) */
void f_12aaa7b0(void) {
  FTRACE(0x12aaa7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa7b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa7b3 push ecx */
  push32((uint32_t)(ECX));
L_12aaa7b4:;
  /* 12aaa7b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa7b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa7ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa7bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12aaa7c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaa7c2 jle 0x12aaa7f6 */
  if ((C.zf||C.sf!=C.of)) goto L_12aaa7f6;
  /* 12aaa7c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaa7c7 push edx */
  push32((uint32_t)(EDX));
  /* 12aaa7c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa7cb push eax */
  push32((uint32_t)(EAX));
  /* 12aaa7cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa7cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aaa7d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aaa7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa7d8 push eax */
  push32((uint32_t)(EAX));
  /* 12aaa7d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa7dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa7df mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12aaa7e2 call 0x12aaa6f0 */
  push32(0x12aaa7e7u); f_12aaa6f0();
  /* 12aaa7e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa7ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaa7ed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa7f0 jne 0x12aaa7f4 */
  if (!C.zf) goto L_12aaa7f4;
  /* 12aaa7f2 jmp 0x12aaa7f6 */
  goto L_12aaa7f6;
L_12aaa7f4:;
  /* 12aaa7f4 jmp 0x12aaa7b4 */
  goto L_12aaa7b4;
L_12aaa7f6:;
  /* 12aaa7f6 mov esp, ebp */
  ESP = (EBP);
  /* 12aaa7f8 pop ebp */
  EBP = (pop32());
  /* 12aaa7f9 ret  */
  ESPCHK(0x12aaa7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x12aaa800 (26 bytes, 12 insns) */
void f_12aaa800(void) {
  FTRACE(0x12aaa800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa800 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa801 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa806 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa808 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa80b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa80e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aaa810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa813 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa815 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aaa818 pop ebp */
  EBP = (pop32());
  /* 12aaa819 ret  */
  ESPCHK(0x12aaa800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x12aaa820 (31 bytes, 14 insns) */
void f_12aaa820(void) {
  FTRACE(0x12aaa820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa820 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa821 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa826 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa828 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa82b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa82e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aaa830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa833 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa835 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa838 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12aaa83a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aaa83d pop ebp */
  EBP = (pop32());
  /* 12aaa83e ret  */
  ESPCHK(0x12aaa820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a840 @ 0x12aaa840 (27 bytes, 12 insns) */
void f_12aaa840(void) {
  FTRACE(0x12aaa840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa840 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa841 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa846 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa848 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa84b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa84e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aaa850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa853 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aaa855 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12aaa859 pop ebp */
  EBP = (pop32());
  /* 12aaa85a ret  */
  ESPCHK(0x12aaa840u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12aaa860 (145 bytes, 42 insns) */
void f_12aaa860(void) {
  FTRACE(0x12aaa860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa860 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa861 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa863 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaa864 call 0x12aaa910 */
  push32(0x12aaa869u); f_12aaa910();
  /* 12aaa869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa86c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aaa86e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aaa875 jmp 0x12aaa880 */
  goto L_12aaa880;
L_12aaa877:;
  /* 12aaa877 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa87a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa87d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aaa880:;
  /* 12aaa880 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa884 jae 0x12aaa8aa */
  if (!C.cf) goto L_12aaa8aa;
  /* 12aaa886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa88c cmp ecx, dword ptr [eax*8 + 0x12accfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12accfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa893 jne 0x12aaa8a8 */
  if (!C.zf) goto L_12aaa8a8;
  /* 12aaa895 call 0x12aaa900 */
  push32(0x12aaa89au); f_12aaa900();
  /* 12aaa89a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaa89d mov ecx, dword ptr [edx*8 + 0x12accfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12accfbc)));
  /* 12aaa8a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aaa8a6 jmp 0x12aaa8ed */
  goto L_12aaa8ed;
L_12aaa8a8:;
  /* 12aaa8a8 jmp 0x12aaa877 */
  goto L_12aaa877;
L_12aaa8aa:;
  /* 12aaa8aa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa8ae jb 0x12aaa8c3 */
  if (C.cf) goto L_12aaa8c3;
  /* 12aaa8b0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa8b4 ja 0x12aaa8c3 */
  if ((!C.cf&&!C.zf)) goto L_12aaa8c3;
  /* 12aaa8b6 call 0x12aaa900 */
  push32(0x12aaa8bbu); f_12aaa900();
  /* 12aaa8bb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12aaa8c1 jmp 0x12aaa8ed */
  goto L_12aaa8ed;
L_12aaa8c3:;
  /* 12aaa8c3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa8ca jb 0x12aaa8e2 */
  if (C.cf) goto L_12aaa8e2;
  /* 12aaa8cc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa8d3 ja 0x12aaa8e2 */
  if ((!C.cf&&!C.zf)) goto L_12aaa8e2;
  /* 12aaa8d5 call 0x12aaa900 */
  push32(0x12aaa8dau); f_12aaa900();
  /* 12aaa8da mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12aaa8e0 jmp 0x12aaa8ed */
  goto L_12aaa8ed;
L_12aaa8e2:;
  /* 12aaa8e2 call 0x12aaa900 */
  push32(0x12aaa8e7u); f_12aaa900();
  /* 12aaa8e7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12aaa8ed:;
  /* 12aaa8ed mov esp, ebp */
  ESP = (EBP);
  /* 12aaa8ef pop ebp */
  EBP = (pop32());
  /* 12aaa8f0 ret  */
  ESPCHK(0x12aaa860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x12aaa900 (13 bytes, 6 insns) */
void f_12aaa900(void) {
  FTRACE(0x12aaa900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa900 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa901 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa903 call 0x12aa2470 */
  push32(0x12aaa908u); f_12aa2470();
  /* 12aaa908 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa90b pop ebp */
  EBP = (pop32());
  /* 12aaa90c ret  */
  ESPCHK(0x12aaa900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x12aaa910 (13 bytes, 6 insns) */
void f_12aaa910(void) {
  FTRACE(0x12aaa910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa910 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa911 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa913 call 0x12aa2470 */
  push32(0x12aaa918u); f_12aa2470();
  /* 12aaa918 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa91b pop ebp */
  EBP = (pop32());
  /* 12aaa91c ret  */
  ESPCHK(0x12aaa910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a920 @ 0x12aaa920 (664 bytes, 267 insns) [15 switch table(s)] */
void f_12aaa920(void) {
  FTRACE(0x12aaa920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaa920 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaa921 mov ebp, esp */
  EBP = (ESP);
  /* 12aaa923 push edi */
  push32((uint32_t)(EDI));
  /* 12aaa924 push esi */
  push32((uint32_t)(ESI));
  /* 12aaa925 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaa928 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaa92b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaa92e mov eax, ecx */
  EAX = (ECX);
  /* 12aaa930 mov edx, ecx */
  EDX = (ECX);
  /* 12aaa932 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa934 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa936 jbe 0x12aaa940 */
  if ((C.cf||C.zf)) goto L_12aaa940;
  /* 12aaa938 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa93a jb 0x12aaaab8 */
  if (C.cf) goto L_12aaaab8;
L_12aaa940:;
  /* 12aaa940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aaa946 jne 0x12aaa95c */
  if (!C.zf) goto L_12aaa95c;
  /* 12aaa948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaa94b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa94e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa951 jb 0x12aaa97c */
  if (C.cf) goto L_12aaa97c;
  /* 12aaa953 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaa955 jmp dword ptr [edx*4 + 0x12aaaa68] */
  switch (EDX) {
    case 0: goto L_12aaaa78;
    case 1: goto L_12aaaa80;
    case 2: goto L_12aaaa8c;
    case 3: goto L_12aaaaa0;
    default: x86_unimpl("switch@0x12aaa955 out of table"); return;
  }
L_12aaa95c:;
  /* 12aaa95c mov eax, edi */
  EAX = (EDI);
  /* 12aaa95e mov edx, 3 */
  EDX = (0x3u);
  /* 12aaa963 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaa966 jb 0x12aaa974 */
  if (C.cf) goto L_12aaa974;
  /* 12aaa968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaa96b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa96d jmp dword ptr [eax*4 + 0x12aaa980] */
  switch (EAX) {
    case 1: goto L_12aaa990;
    case 2: goto L_12aaa9bc;
    case 3: goto L_12aaa9e0;
    default: x86_unimpl("switch@0x12aaa96d out of table"); return;
  }
L_12aaa974:;
  /* 12aaa974 jmp dword ptr [ecx*4 + 0x12aaaa78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12aaaa78)))); return;
  /* 12aaa97b nop  */
  /* nop */
L_12aaa97c:;
  /* 12aaa97c jmp dword ptr [ecx*4 + 0x12aaa9fc] */
  switch (ECX) {
    case 0: goto L_12aaaa5f;
    case 1: goto L_12aaaa4c;
    case 2: goto L_12aaaa44;
    case 3: goto L_12aaaa3c;
    case 4: goto L_12aaaa34;
    case 5: goto L_12aaaa2c;
    case 6: goto L_12aaaa24;
    case 7: goto L_12aaaa1c;
    default: x86_unimpl("switch@0x12aaa97c out of table"); return;
  }
  /* 12aaa983 nop  */
  /* nop */
L_12aaa990:;
  /* 12aaa990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaa994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaa996 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaa999 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaa99c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaa99f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaa9a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaa9a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa9a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa9ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa9ae jb 0x12aaa97c */
  if (C.cf) goto L_12aaa97c;
  /* 12aaa9b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaa9b2 jmp dword ptr [edx*4 + 0x12aaaa68] */
  switch (EDX) {
    case 0: goto L_12aaaa78;
    case 1: goto L_12aaaa80;
    case 2: goto L_12aaaa8c;
    case 3: goto L_12aaaaa0;
    default: x86_unimpl("switch@0x12aaa9b2 out of table"); return;
  }
  /* 12aaa9b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaa9bc:;
  /* 12aaa9bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa9be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaa9c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaa9c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaa9c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaa9c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaa9cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa9ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaa9d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa9d4 jb 0x12aaa97c */
  if (C.cf) goto L_12aaa97c;
  /* 12aaa9d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaa9d8 jmp dword ptr [edx*4 + 0x12aaaa68] */
  switch (EDX) {
    case 0: goto L_12aaaa78;
    case 1: goto L_12aaaa80;
    case 2: goto L_12aaaa8c;
    case 3: goto L_12aaaaa0;
    default: x86_unimpl("switch@0x12aaa9d8 out of table"); return;
  }
  /* 12aaa9df nop  */
  /* nop */
L_12aaa9e0:;
  /* 12aaa9e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaa9e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaa9e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaa9e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aaa9e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaa9ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aaa9eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaa9ee jb 0x12aaa97c */
  if (C.cf) goto L_12aaa97c;
  /* 12aaa9f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaa9f2 jmp dword ptr [edx*4 + 0x12aaaa68] */
  switch (EDX) {
    case 0: goto L_12aaaa78;
    case 1: goto L_12aaaa80;
    case 2: goto L_12aaaa8c;
    case 3: goto L_12aaaaa0;
    default: x86_unimpl("switch@0x12aaa9f2 out of table"); return;
  }
  /* 12aaa9f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaaa1c:;
  /* 12aaaa1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12aaaa20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12aaaa24:;
  /* 12aaaa24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12aaaa28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12aaaa2c:;
  /* 12aaaa2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12aaaa30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12aaaa34:;
  /* 12aaaa34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12aaaa38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12aaaa3c:;
  /* 12aaaa3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12aaaa40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12aaaa44:;
  /* 12aaaa44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12aaaa48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12aaaa4c:;
  /* 12aaaa4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12aaaa50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12aaaa54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12aaaa5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaaa5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12aaaa5f:;
  /* 12aaaa5f jmp dword ptr [edx*4 + 0x12aaaa68] */
  switch (EDX) {
    case 0: goto L_12aaaa78;
    case 1: goto L_12aaaa80;
    case 2: goto L_12aaaa8c;
    case 3: goto L_12aaaaa0;
    default: x86_unimpl("switch@0x12aaaa5f out of table"); return;
  }
  /* 12aaaa66 mov edi, edi */
  EDI = (EDI);
L_12aaaa78:;
  /* 12aaaa78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaaa7b pop esi */
  ESI = (pop32());
  /* 12aaaa7c pop edi */
  EDI = (pop32());
  /* 12aaaa7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaaa7e ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaaa7f nop  */
  /* nop */
L_12aaaa80:;
  /* 12aaaa80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaaa82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaaa84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaaa87 pop esi */
  ESI = (pop32());
  /* 12aaaa88 pop edi */
  EDI = (pop32());
  /* 12aaaa89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaaa8a ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaaa8b nop  */
  /* nop */
L_12aaaa8c:;
  /* 12aaaa8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaaa8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaaa90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaaa93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaaa96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaaa99 pop esi */
  ESI = (pop32());
  /* 12aaaa9a pop edi */
  EDI = (pop32());
  /* 12aaaa9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaaa9c ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaaa9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaaaa0:;
  /* 12aaaaa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aaaaa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aaaaa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaaaa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaaaaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaaaad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaaab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaaab3 pop esi */
  ESI = (pop32());
  /* 12aaaab4 pop edi */
  EDI = (pop32());
  /* 12aaaab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaaab6 ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaaab7 nop  */
  /* nop */
L_12aaaab8:;
  /* 12aaaab8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12aaaabc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12aaaac0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aaaac6 jne 0x12aaaaec */
  if (!C.zf) goto L_12aaaaec;
  /* 12aaaac8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaaacb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaaace cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaad1 jb 0x12aaaae0 */
  if (C.cf) goto L_12aaaae0;
  /* 12aaaad3 std  */
  C.df=1;
  /* 12aaaad4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaaad6 cld  */
  C.df=0;
  /* 12aaaad7 jmp dword ptr [edx*4 + 0x12aaac00] */
  switch (EDX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaaad7 out of table"); return;
  }
  /* 12aaaade mov edi, edi */
  EDI = (EDI);
L_12aaaae0:;
  /* 12aaaae0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaaae2 jmp dword ptr [ecx*4 + 0x12aaabb0] */
  switch (ECX) {
    case 0: goto L_12aaabf7;
    default: x86_unimpl("switch@0x12aaaae2 out of table"); return;
  }
  /* 12aaaae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaaaec:;
  /* 12aaaaec mov eax, edi */
  EAX = (EDI);
  /* 12aaaaee mov edx, 3 */
  EDX = (0x3u);
  /* 12aaaaf3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaaf6 jb 0x12aaab04 */
  if (C.cf) goto L_12aaab04;
  /* 12aaaaf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaaafb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaaafd jmp dword ptr [eax*4 + 0x12aaab08] */
  switch (EAX) {
    case 1: goto L_12aaab18;
    case 2: goto L_12aaab38;
    case 3: goto L_12aaab60;
    default: x86_unimpl("switch@0x12aaaafd out of table"); return;
  }
L_12aaab04:;
  /* 12aaab04 jmp dword ptr [ecx*4 + 0x12aaac00] */
  switch (ECX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaab04 out of table"); return;
  }
  /* 12aaab0b nop  */
  /* nop */
L_12aaab18:;
  /* 12aaab18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaab1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaab1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaab20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12aaab21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaab24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12aaab25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaab28 jb 0x12aaaae0 */
  if (C.cf) goto L_12aaaae0;
  /* 12aaab2a std  */
  C.df=1;
  /* 12aaab2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaab2d cld  */
  C.df=0;
  /* 12aaab2e jmp dword ptr [edx*4 + 0x12aaac00] */
  switch (EDX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaab2e out of table"); return;
  }
  /* 12aaab35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaab38:;
  /* 12aaab38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaab3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaab3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaab40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaab43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaab46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaab49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaab4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaab4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaab52 jb 0x12aaaae0 */
  if (C.cf) goto L_12aaaae0;
  /* 12aaab54 std  */
  C.df=1;
  /* 12aaab55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaab57 cld  */
  C.df=0;
  /* 12aaab58 jmp dword ptr [edx*4 + 0x12aaac00] */
  switch (EDX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaab58 out of table"); return;
  }
  /* 12aaab5f nop  */
  /* nop */
L_12aaab60:;
  /* 12aaab60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaab63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12aaab65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaab68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaab6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaab6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaab71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aaab74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaab77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaab7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaab7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaab80 jb 0x12aaaae0 */
  if (C.cf) goto L_12aaaae0;
  /* 12aaab86 std  */
  C.df=1;
  /* 12aaab87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12aaab89 cld  */
  C.df=0;
  /* 12aaab8a jmp dword ptr [edx*4 + 0x12aaac00] */
  switch (EDX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaab8a out of table"); return;
  }
  /* 12aaab91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12aaab94 mov ah, 0xab */
  AH = (0xabu);
  /* 12aaab96 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaab97 adc bh, byte ptr [ebx + ebp*4 - 0x543bed56] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + EBP*4 + -0x543bed56))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaab9e stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaab9f adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaaba1 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12aaaba2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaaba3 adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaaba5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12aaaba6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaaba7 adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaaba9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12aaabaa stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaabab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaabad stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12aaabae stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aaabb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12aaabb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12aaabbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12aaabc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12aaabc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12aaabc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12aaabcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12aaabd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12aaabd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12aaabd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12aaabdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12aaabe0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12aaabe4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12aaabe8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12aaabec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12aaabf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaabf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12aaabf7:;
  /* 12aaabf7 jmp dword ptr [edx*4 + 0x12aaac00] */
  switch (EDX) {
    case 0: goto L_12aaac10;
    case 1: goto L_12aaac18;
    case 2: goto L_12aaac28;
    case 3: goto L_12aaac3c;
    default: x86_unimpl("switch@0x12aaabf7 out of table"); return;
  }
  /* 12aaabfe mov edi, edi */
  EDI = (EDI);
L_12aaac10:;
  /* 12aaac10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaac13 pop esi */
  ESI = (pop32());
  /* 12aaac14 pop edi */
  EDI = (pop32());
  /* 12aaac15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaac16 ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaac17 nop  */
  /* nop */
L_12aaac18:;
  /* 12aaac18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaac1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaac1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaac21 pop esi */
  ESI = (pop32());
  /* 12aaac22 pop edi */
  EDI = (pop32());
  /* 12aaac23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaac24 ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaac25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aaac28:;
  /* 12aaac28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaac2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaac2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaac31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaac34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaac37 pop esi */
  ESI = (pop32());
  /* 12aaac38 pop edi */
  EDI = (pop32());
  /* 12aaac39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaac3a ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
  /* 12aaac3b nop  */
  /* nop */
L_12aaac3c:;
  /* 12aaac3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12aaac3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12aaac42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12aaac45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12aaac48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12aaac4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12aaac4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaac51 pop esi */
  ESI = (pop32());
  /* 12aaac52 pop edi */
  EDI = (pop32());
  /* 12aaac53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aaac54 ret  */
  ESPCHK(0x12aaa920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x12aaac60 (421 bytes, 148 insns) */
void f_12aaac60(void) {
  FTRACE(0x12aaac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaac60 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaac61 mov ebp, esp */
  EBP = (ESP);
  /* 12aaac63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12aaac65 push 0x12ac9f20 */
  push32((uint32_t)(0x12ac9f20u));
  /* 12aaac6a push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12aaac6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12aaac75 push eax */
  push32((uint32_t)(EAX));
  /* 12aaac76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12aaac7d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaac80 push ebx */
  push32((uint32_t)(EBX));
  /* 12aaac81 push esi */
  push32((uint32_t)(ESI));
  /* 12aaac82 push edi */
  push32((uint32_t)(EDI));
  /* 12aaac83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12aaac86 cmp dword ptr [0x12ace67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaac8d jne 0x12aaacde */
  if (!C.zf) goto L_12aaacde;
  /* 12aaac8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12aaac92 push eax */
  push32((uint32_t)(EAX));
  /* 12aaac93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaac95 push 0x12ac9f1c */
  push32((uint32_t)(0x12ac9f1cu));
  /* 12aaac9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaac9c call dword ptr [0x12ad0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0324))), 0x12aaaca2u);
  /* 12aaaca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaaca4 je 0x12aaacb2 */
  if (C.zf) goto L_12aaacb2;
  /* 12aaaca6 mov dword ptr [0x12ace67c], 1 */
  w32((uint32_t)(0x12ace67c), (0x1u));
  /* 12aaacb0 jmp 0x12aaacde */
  goto L_12aaacde;
L_12aaacb2:;
  /* 12aaacb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12aaacb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaacb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaacb8 push 0x12ac9f18 */
  push32((uint32_t)(0x12ac9f18u));
  /* 12aaacbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaacbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaacc1 call dword ptr [0x12ad0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0320))), 0x12aaacc7u);
  /* 12aaacc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaacc9 je 0x12aaacd7 */
  if (C.zf) goto L_12aaacd7;
  /* 12aaaccb mov dword ptr [0x12ace67c], 2 */
  w32((uint32_t)(0x12ace67c), (0x2u));
  /* 12aaacd5 jmp 0x12aaacde */
  goto L_12aaacde;
L_12aaacd7:;
  /* 12aaacd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaacd9 jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaacde:;
  /* 12aaacde cmp dword ptr [0x12ace67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaace5 jne 0x12aaad15 */
  if (!C.zf) goto L_12aaad15;
  /* 12aaace7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaceb jne 0x12aaacf6 */
  if (!C.zf) goto L_12aaacf6;
  /* 12aaaced mov edx, dword ptr [0x12ace688] */
  EDX = (r32((uint32_t)(0x12ace688)));
  /* 12aaacf3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12aaacf6:;
  /* 12aaacf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaacf9 push eax */
  push32((uint32_t)(EAX));
  /* 12aaacfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaacfd push ecx */
  push32((uint32_t)(ECX));
  /* 12aaacfe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaad01 push edx */
  push32((uint32_t)(EDX));
  /* 12aaad02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaad05 push eax */
  push32((uint32_t)(EAX));
  /* 12aaad06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12aaad09 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaad0a call dword ptr [0x12ad0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0320))), 0x12aaad10u);
  /* 12aaad10 jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaad15:;
  /* 12aaad15 cmp dword ptr [0x12ace67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaad1c jne 0x12aaae06 */
  if (!C.zf) goto L_12aaae06;
  /* 12aaad22 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaad26 jne 0x12aaad31 */
  if (!C.zf) goto L_12aaad31;
  /* 12aaad28 mov edx, dword ptr [0x12ace698] */
  EDX = (r32((uint32_t)(0x12ace698)));
  /* 12aaad2e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12aaad31:;
  /* 12aaad31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaad33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaad35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaad38 push eax */
  push32((uint32_t)(EAX));
  /* 12aaad39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaad3c push ecx */
  push32((uint32_t)(ECX));
  /* 12aaad3d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12aaad40 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaad42 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaad44 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaad47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaad4a push edx */
  push32((uint32_t)(EDX));
  /* 12aaad4b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaad4e push eax */
  push32((uint32_t)(EAX));
  /* 12aaad4f call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12aaad55u);
  /* 12aaad55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aaad58 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaad5c jne 0x12aaad65 */
  if (!C.zf) goto L_12aaad65;
  /* 12aaad5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaad60 jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaad65:;
  /* 12aaad65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aaad6c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaad6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aaad71 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaad74 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12aaad76 call 0x12aa5bd0 */
  push32(0x12aaad7bu); f_12aa5bd0();
  /* 12aaad7b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12aaad7e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12aaad81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aaad84 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aaad87 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaad8a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12aaad8c push edx */
  push32((uint32_t)(EDX));
  /* 12aaad8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaad8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaad92 push eax */
  push32((uint32_t)(EAX));
  /* 12aaad93 call 0x12aa67a0 */
  push32(0x12aaad98u); f_12aa67a0();
  /* 12aaad98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaad9b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12aaada2 jmp 0x12aaadbb */
  goto L_12aaadbb;
  /* 12aaada4 mov eax, 1 */
  EAX = (0x1u);
  /* 12aaada9 ret  */
  ESPCHK(0x12aaac60u, _esp0);
  ESP += 4; return;
  /* 12aaadaa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12aaadad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aaadb4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aaadbb:;
  /* 12aaadbb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaadbf jne 0x12aaadc5 */
  if (!C.zf) goto L_12aaadc5;
  /* 12aaadc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaadc3 jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaadc5:;
  /* 12aaadc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aaadc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaadc9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaadcc push edx */
  push32((uint32_t)(EDX));
  /* 12aaadcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaadd0 push eax */
  push32((uint32_t)(EAX));
  /* 12aaadd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaadd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaadd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaadd7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaadda push edx */
  push32((uint32_t)(EDX));
  /* 12aaaddb call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12aaade1u);
  /* 12aaade1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aaade4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaade8 jne 0x12aaadee */
  if (!C.zf) goto L_12aaadee;
  /* 12aaadea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaadec jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaadee:;
  /* 12aaadee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaadf1 push eax */
  push32((uint32_t)(EAX));
  /* 12aaadf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aaadf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaadf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaadf9 push edx */
  push32((uint32_t)(EDX));
  /* 12aaadfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaadfd push eax */
  push32((uint32_t)(EAX));
  /* 12aaadfe call dword ptr [0x12ad0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0324))), 0x12aaae04u);
  /* 12aaae04 jmp 0x12aaae08 */
  goto L_12aaae08;
L_12aaae06:;
  /* 12aaae06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aaae08:;
  /* 12aaae08 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12aaae0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaae0e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12aaae15 pop edi */
  EDI = (pop32());
  /* 12aaae16 pop esi */
  ESI = (pop32());
  /* 12aaae17 pop ebx */
  EBX = (pop32());
  /* 12aaae18 mov esp, ebp */
  ESP = (EBP);
  /* 12aaae1a pop ebp */
  EBP = (pop32());
  /* 12aaae1b ret  */
  ESPCHK(0x12aaac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae20 @ 0x12aaae20 (727 bytes, 263 insns) */
void f_12aaae20(void) {
  FTRACE(0x12aaae20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaae20 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaae21 mov ebp, esp */
  EBP = (ESP);
  /* 12aaae23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12aaae25 push 0x12ac9f30 */
  push32((uint32_t)(0x12ac9f30u));
  /* 12aaae2a push 0x12aabb38 */
  push32((uint32_t)(0x12aabb38u));
  /* 12aaae2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12aaae35 push eax */
  push32((uint32_t)(EAX));
  /* 12aaae36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12aaae3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaae40 push ebx */
  push32((uint32_t)(EBX));
  /* 12aaae41 push esi */
  push32((uint32_t)(ESI));
  /* 12aaae42 push edi */
  push32((uint32_t)(EDI));
  /* 12aaae43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12aaae46 cmp dword ptr [0x12ace6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaae4d jne 0x12aaaea6 */
  if (!C.zf) goto L_12aaaea6;
  /* 12aaae4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaae55 push 0x12ac9f1c */
  push32((uint32_t)(0x12ac9f1cu));
  /* 12aaae5a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aaae5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae61 call dword ptr [0x12ad0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0328))), 0x12aaae67u);
  /* 12aaae67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaae69 je 0x12aaae77 */
  if (C.zf) goto L_12aaae77;
  /* 12aaae6b mov dword ptr [0x12ace6a0], 1 */
  w32((uint32_t)(0x12ace6a0), (0x1u));
  /* 12aaae75 jmp 0x12aaaea6 */
  goto L_12aaaea6;
L_12aaae77:;
  /* 12aaae77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae7b push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaae7d push 0x12ac9f18 */
  push32((uint32_t)(0x12ac9f18u));
  /* 12aaae82 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aaae87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaae89 call dword ptr [0x12ad0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0308))), 0x12aaae8fu);
  /* 12aaae8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaae91 je 0x12aaae9f */
  if (C.zf) goto L_12aaae9f;
  /* 12aaae93 mov dword ptr [0x12ace6a0], 2 */
  w32((uint32_t)(0x12ace6a0), (0x2u));
  /* 12aaae9d jmp 0x12aaaea6 */
  goto L_12aaaea6;
L_12aaae9f:;
  /* 12aaae9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaaea1 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaaea6:;
  /* 12aaaea6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaeaa jle 0x12aaaebf */
  if ((C.zf||C.sf!=C.of)) goto L_12aaaebf;
  /* 12aaaeac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaaeaf push eax */
  push32((uint32_t)(EAX));
  /* 12aaaeb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaaeb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaaeb4 call 0x12aab130 */
  push32(0x12aaaeb9u); f_12aab130();
  /* 12aaaeb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaaebc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12aaaebf:;
  /* 12aaaebf cmp dword ptr [0x12ace6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaec6 jne 0x12aaaeeb */
  if (!C.zf) goto L_12aaaeeb;
  /* 12aaaec8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12aaaecb push edx */
  push32((uint32_t)(EDX));
  /* 12aaaecc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aaaecf push eax */
  push32((uint32_t)(EAX));
  /* 12aaaed0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaaed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaaed4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaaed7 push edx */
  push32((uint32_t)(EDX));
  /* 12aaaed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaaedb push eax */
  push32((uint32_t)(EAX));
  /* 12aaaedc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaaedf push ecx */
  push32((uint32_t)(ECX));
  /* 12aaaee0 call dword ptr [0x12ad0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0308))), 0x12aaaee6u);
  /* 12aaaee6 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaaeeb:;
  /* 12aaaeeb cmp dword ptr [0x12ace6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaef2 jne 0x12aab10f */
  if (!C.zf) goto L_12aab10f;
  /* 12aaaef8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaefc jne 0x12aaaf07 */
  if (!C.zf) goto L_12aaaf07;
  /* 12aaaefe mov edx, dword ptr [0x12ace698] */
  EDX = (r32((uint32_t)(0x12ace698)));
  /* 12aaaf04 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12aaaf07:;
  /* 12aaaf07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaaf09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaaf0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaaf0e push eax */
  push32((uint32_t)(EAX));
  /* 12aaaf0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaaf12 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaaf13 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12aaaf16 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaaf18 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaaf1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaaf1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaaf20 push edx */
  push32((uint32_t)(EDX));
  /* 12aaaf21 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12aaaf24 push eax */
  push32((uint32_t)(EAX));
  /* 12aaaf25 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12aaaf2bu);
  /* 12aaaf2b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12aaaf2e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaf32 jne 0x12aaaf3b */
  if (!C.zf) goto L_12aaaf3b;
  /* 12aaaf34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaaf36 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaaf3b:;
  /* 12aaaf3b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aaaf42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aaaf45 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aaaf47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaaf4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12aaaf4c call 0x12aa5bd0 */
  push32(0x12aaaf51u); f_12aa5bd0();
  /* 12aaaf51 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12aaaf54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12aaaf57 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aaaf5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aaaf5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12aaaf64 jmp 0x12aaaf7d */
  goto L_12aaaf7d;
  /* 12aaaf66 mov eax, 1 */
  EAX = (0x1u);
  /* 12aaaf6b ret  */
  ESPCHK(0x12aaae20u, _esp0);
  ESP += 4; return;
  /* 12aaaf6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12aaaf6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12aaaf76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aaaf7d:;
  /* 12aaaf7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaf81 jne 0x12aaaf8a */
  if (!C.zf) goto L_12aaaf8a;
  /* 12aaaf83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaaf85 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaaf8a:;
  /* 12aaaf8a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aaaf8d push edx */
  push32((uint32_t)(EDX));
  /* 12aaaf8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaaf91 push eax */
  push32((uint32_t)(EAX));
  /* 12aaaf92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaaf95 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaaf96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaaf99 push edx */
  push32((uint32_t)(EDX));
  /* 12aaaf9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaaf9c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12aaaf9f push eax */
  push32((uint32_t)(EAX));
  /* 12aaafa0 call dword ptr [0x12ad031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad031c))), 0x12aaafa6u);
  /* 12aaafa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaafa8 jne 0x12aaafb1 */
  if (!C.zf) goto L_12aaafb1;
  /* 12aaafaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaafac jmp 0x12aab111 */
  goto L_12aab111;
L_12aaafb1:;
  /* 12aaafb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaafb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaafb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aaafb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaafb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aaafbc push edx */
  push32((uint32_t)(EDX));
  /* 12aaafbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaafc0 push eax */
  push32((uint32_t)(EAX));
  /* 12aaafc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaafc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaafc5 call dword ptr [0x12ad0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0328))), 0x12aaafcbu);
  /* 12aaafcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aaafce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaafd2 jne 0x12aaafdb */
  if (!C.zf) goto L_12aaafdb;
  /* 12aaafd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaafd6 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaafdb:;
  /* 12aaafdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaafde and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaafe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaafe6 je 0x12aab02b */
  if (C.zf) goto L_12aab02b;
  /* 12aaafe8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaafec je 0x12aab026 */
  if (C.zf) goto L_12aab026;
  /* 12aaafee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aaaff1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaaff4 jle 0x12aaaffd */
  if ((C.zf||C.sf!=C.of)) goto L_12aaaffd;
  /* 12aaaff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaaff8 jmp 0x12aab111 */
  goto L_12aab111;
L_12aaaffd:;
  /* 12aaaffd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12aab000 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab001 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aab004 push edx */
  push32((uint32_t)(EDX));
  /* 12aab005 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aab008 push eax */
  push32((uint32_t)(EAX));
  /* 12aab009 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aab00c push ecx */
  push32((uint32_t)(ECX));
  /* 12aab00d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab010 push edx */
  push32((uint32_t)(EDX));
  /* 12aab011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab014 push eax */
  push32((uint32_t)(EAX));
  /* 12aab015 call dword ptr [0x12ad0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0328))), 0x12aab01bu);
  /* 12aab01b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab01d jne 0x12aab026 */
  if (!C.zf) goto L_12aab026;
  /* 12aab01f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab021 jmp 0x12aab111 */
  goto L_12aab111;
L_12aab026:;
  /* 12aab026 jmp 0x12aab10a */
  goto L_12aab10a;
L_12aab02b:;
  /* 12aab02b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aab02e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12aab031 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aab038 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aab03b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aab03d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab040 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12aab042 call 0x12aa5bd0 */
  push32(0x12aab047u); f_12aa5bd0();
  /* 12aab047 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12aab04a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12aab04d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12aab050 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12aab053 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12aab05a jmp 0x12aab073 */
  goto L_12aab073;
  /* 12aab05c mov eax, 1 */
  EAX = (0x1u);
  /* 12aab061 ret  */
  ESPCHK(0x12aaae20u, _esp0);
  ESP += 4; return;
  /* 12aab062 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12aab065 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12aab06c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aab073:;
  /* 12aab073 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab077 jne 0x12aab080 */
  if (!C.zf) goto L_12aab080;
  /* 12aab079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab07b jmp 0x12aab111 */
  goto L_12aab111;
L_12aab080:;
  /* 12aab080 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aab083 push eax */
  push32((uint32_t)(EAX));
  /* 12aab084 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aab087 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab088 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aab08b push edx */
  push32((uint32_t)(EDX));
  /* 12aab08c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aab08f push eax */
  push32((uint32_t)(EAX));
  /* 12aab090 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab093 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab097 push edx */
  push32((uint32_t)(EDX));
  /* 12aab098 call dword ptr [0x12ad0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0328))), 0x12aab09eu);
  /* 12aab09e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab0a0 jne 0x12aab0a6 */
  if (!C.zf) goto L_12aab0a6;
  /* 12aab0a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab0a4 jmp 0x12aab111 */
  goto L_12aab111;
L_12aab0a6:;
  /* 12aab0a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab0aa jne 0x12aab0da */
  if (!C.zf) goto L_12aab0da;
  /* 12aab0ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aab0b7 push eax */
  push32((uint32_t)(EAX));
  /* 12aab0b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aab0bb push ecx */
  push32((uint32_t)(ECX));
  /* 12aab0bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12aab0c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12aab0c4 push edx */
  push32((uint32_t)(EDX));
  /* 12aab0c5 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12aab0cbu);
  /* 12aab0cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aab0ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab0d2 jne 0x12aab0d8 */
  if (!C.zf) goto L_12aab0d8;
  /* 12aab0d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab0d6 jmp 0x12aab111 */
  goto L_12aab111;
L_12aab0d8:;
  /* 12aab0d8 jmp 0x12aab10a */
  goto L_12aab10a;
L_12aab0da:;
  /* 12aab0da push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab0de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12aab0e1 push eax */
  push32((uint32_t)(EAX));
  /* 12aab0e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aab0e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab0e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aab0e9 push edx */
  push32((uint32_t)(EDX));
  /* 12aab0ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aab0ed push eax */
  push32((uint32_t)(EAX));
  /* 12aab0ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12aab0f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12aab0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab0f7 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12aab0fdu);
  /* 12aab0fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aab100 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab104 jne 0x12aab10a */
  if (!C.zf) goto L_12aab10a;
  /* 12aab106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab108 jmp 0x12aab111 */
  goto L_12aab111;
L_12aab10a:;
  /* 12aab10a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aab10d jmp 0x12aab111 */
  goto L_12aab111;
L_12aab10f:;
  /* 12aab10f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aab111:;
  /* 12aab111 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12aab114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aab117 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12aab11e pop edi */
  EDI = (pop32());
  /* 12aab11f pop esi */
  ESI = (pop32());
  /* 12aab120 pop ebx */
  EBX = (pop32());
  /* 12aab121 mov esp, ebp */
  ESP = (EBP);
  /* 12aab123 pop ebp */
  EBP = (pop32());
  /* 12aab124 ret  */
  ESPCHK(0x12aaae20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x12aab130 (80 bytes, 32 insns) */
void f_12aab130(void) {
  FTRACE(0x12aab130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab130 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab131 mov ebp, esp */
  EBP = (ESP);
  /* 12aab133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab136 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab139 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aab13c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab13f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aab142:;
  /* 12aab142 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab145 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab148 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab14b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aab14e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aab150 je 0x12aab167 */
  if (C.zf) goto L_12aab167;
  /* 12aab152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab155 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aab158 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aab15a je 0x12aab167 */
  if (C.zf) goto L_12aab167;
  /* 12aab15c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab15f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aab165 jmp 0x12aab142 */
  goto L_12aab142;
L_12aab167:;
  /* 12aab167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab16a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aab16d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aab16f jne 0x12aab179 */
  if (!C.zf) goto L_12aab179;
  /* 12aab171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab174 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab177 jmp 0x12aab17c */
  goto L_12aab17c;
L_12aab179:;
  /* 12aab179 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12aab17c:;
  /* 12aab17c mov esp, ebp */
  ESP = (EBP);
  /* 12aab17e pop ebp */
  EBP = (pop32());
  /* 12aab17f ret  */
  ESPCHK(0x12aab130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x12aab180 (130 bytes, 43 insns) */
void f_12aab180(void) {
  FTRACE(0x12aab180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab180 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab181 mov ebp, esp */
  EBP = (ESP);
  /* 12aab183 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab187 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab18d jae 0x12aab1b1 */
  if (!C.cf) goto L_12aab1b1;
  /* 12aab18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab19b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab19e mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab1a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aab1aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aab1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aab1af jne 0x12aab1cc */
  if (!C.zf) goto L_12aab1cc;
L_12aab1b1:;
  /* 12aab1b1 call 0x12aaa900 */
  push32(0x12aab1b6u); f_12aaa900();
  /* 12aab1b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aab1bc call 0x12aaa910 */
  push32(0x12aab1c1u); f_12aaa910();
  /* 12aab1c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aab1c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab1ca jmp 0x12aab1fe */
  goto L_12aab1fe;
L_12aab1cc:;
  /* 12aab1cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab1cf push edx */
  push32((uint32_t)(EDX));
  /* 12aab1d0 call 0x12aac120 */
  push32(0x12aab1d5u); f_12aac120();
  /* 12aab1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab1d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aab1db push eax */
  push32((uint32_t)(EAX));
  /* 12aab1dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab1df push ecx */
  push32((uint32_t)(ECX));
  /* 12aab1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab1e3 push edx */
  push32((uint32_t)(EDX));
  /* 12aab1e4 call 0x12aab210 */
  push32(0x12aab1e9u); f_12aab210();
  /* 12aab1e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab1ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aab1ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab1f2 push eax */
  push32((uint32_t)(EAX));
  /* 12aab1f3 call 0x12aac1b0 */
  push32(0x12aab1f8u); f_12aac1b0();
  /* 12aab1f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aab1fe:;
  /* 12aab1fe mov esp, ebp */
  ESP = (EBP);
  /* 12aab200 pop ebp */
  EBP = (pop32());
  /* 12aab201 ret  */
  ESPCHK(0x12aab180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x12aab210 (178 bytes, 56 insns) */
void f_12aab210(void) {
  FTRACE(0x12aab210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab210 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab211 mov ebp, esp */
  EBP = (ESP);
  /* 12aab213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab219 push eax */
  push32((uint32_t)(EAX));
  /* 12aab21a call 0x12aabfa0 */
  push32(0x12aab21fu); f_12aabfa0();
  /* 12aab21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab222 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aab225 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab229 jne 0x12aab23e */
  if (!C.zf) goto L_12aab23e;
  /* 12aab22b call 0x12aaa900 */
  push32(0x12aab230u); f_12aaa900();
  /* 12aab230 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aab236 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab239 jmp 0x12aab2be */
  goto L_12aab2be;
L_12aab23e:;
  /* 12aab23e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aab241 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab242 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab244 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab247 push edx */
  push32((uint32_t)(EDX));
  /* 12aab248 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aab24b push eax */
  push32((uint32_t)(EAX));
  /* 12aab24c call dword ptr [0x12ad032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad032c))), 0x12aab252u);
  /* 12aab252 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aab255 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab259 jne 0x12aab266 */
  if (!C.zf) goto L_12aab266;
  /* 12aab25b call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aab261u);
  /* 12aab261 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aab264 jmp 0x12aab26d */
  goto L_12aab26d;
L_12aab266:;
  /* 12aab266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aab26d:;
  /* 12aab26d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab271 je 0x12aab284 */
  if (C.zf) goto L_12aab284;
  /* 12aab273 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab276 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab277 call 0x12aaa860 */
  push32(0x12aab27cu); f_12aaa860();
  /* 12aab27c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab27f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab282 jmp 0x12aab2be */
  goto L_12aab2be;
L_12aab284:;
  /* 12aab284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab287 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12aab28a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab28d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab290 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab293 mov ecx, dword ptr [edx*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aab29a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12aab29e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12aab2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab2a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab2a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab2aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aab2ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab2b0 mov eax, dword ptr [eax*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aab2b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12aab2bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aab2be:;
  /* 12aab2be mov esp, ebp */
  ESP = (EBP);
  /* 12aab2c0 pop ebp */
  EBP = (pop32());
  /* 12aab2c1 ret  */
  ESPCHK(0x12aab210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x12aab2d0 (130 bytes, 43 insns) */
void f_12aab2d0(void) {
  FTRACE(0x12aab2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab2d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab2d7 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab2dd jae 0x12aab301 */
  if (!C.cf) goto L_12aab301;
  /* 12aab2df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab2e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab2e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab2e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab2eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab2ee mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab2f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aab2fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aab2fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aab2ff jne 0x12aab31c */
  if (!C.zf) goto L_12aab31c;
L_12aab301:;
  /* 12aab301 call 0x12aaa900 */
  push32(0x12aab306u); f_12aaa900();
  /* 12aab306 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aab30c call 0x12aaa910 */
  push32(0x12aab311u); f_12aaa910();
  /* 12aab311 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aab317 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab31a jmp 0x12aab34e */
  goto L_12aab34e;
L_12aab31c:;
  /* 12aab31c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab31f push edx */
  push32((uint32_t)(EDX));
  /* 12aab320 call 0x12aac120 */
  push32(0x12aab325u); f_12aac120();
  /* 12aab325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab328 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aab32b push eax */
  push32((uint32_t)(EAX));
  /* 12aab32c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab32f push ecx */
  push32((uint32_t)(ECX));
  /* 12aab330 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab333 push edx */
  push32((uint32_t)(EDX));
  /* 12aab334 call 0x12aab360 */
  push32(0x12aab339u); f_12aab360();
  /* 12aab339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab33c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aab33f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab342 push eax */
  push32((uint32_t)(EAX));
  /* 12aab343 call 0x12aac1b0 */
  push32(0x12aab348u); f_12aac1b0();
  /* 12aab348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aab34e:;
  /* 12aab34e mov esp, ebp */
  ESP = (EBP);
  /* 12aab350 pop ebp */
  EBP = (pop32());
  /* 12aab351 ret  */
  ESPCHK(0x12aab2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b360 @ 0x12aab360 (627 bytes, 182 insns) */
void f_12aab360(void) {
  FTRACE(0x12aab360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab360 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab361 mov ebp, esp */
  EBP = (ESP);
  /* 12aab363 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab369 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aab370 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aab373 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12aab379 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab37d jne 0x12aab386 */
  if (!C.zf) goto L_12aab386;
  /* 12aab37f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab381 jmp 0x12aab5cf */
  goto L_12aab5cf;
L_12aab386:;
  /* 12aab386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab389 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab38c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab38f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab392 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab395 mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab39c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aab3a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12aab3a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aab3a6 je 0x12aab3b8 */
  if (C.zf) goto L_12aab3b8;
  /* 12aab3a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aab3aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab3ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab3af push edx */
  push32((uint32_t)(EDX));
  /* 12aab3b0 call 0x12aab210 */
  push32(0x12aab3b5u); f_12aab210();
  /* 12aab3b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aab3b8:;
  /* 12aab3b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab3bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab3be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab3c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aab3c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab3c7 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aab3ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12aab3d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12aab3d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab3da je 0x12aab4ec */
  if (C.zf) goto L_12aab4ec;
  /* 12aab3e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab3e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aab3e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12aab3ed:;
  /* 12aab3ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab3f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab3f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab3f6 jae 0x12aab4ea */
  if (!C.cf) goto L_12aab4ea;
  /* 12aab3fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12aab402 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aab405:;
  /* 12aab405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab408 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12aab40e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab410 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab416 jge 0x12aab477 */
  if ((C.sf==C.of)) goto L_12aab477;
  /* 12aab418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab41b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab41e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab421 jae 0x12aab477 */
  if (!C.cf) goto L_12aab477;
  /* 12aab423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab426 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aab428 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12aab42e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab431 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab434 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aab437 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12aab43e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab441 jne 0x12aab461 */
  if (!C.zf) goto L_12aab461;
  /* 12aab443 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12aab449 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab44c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12aab452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab455 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12aab458 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab45b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab45e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aab461:;
  /* 12aab461 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab464 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12aab46a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12aab46c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab46f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab472 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aab475 jmp 0x12aab405 */
  goto L_12aab405;
L_12aab477:;
  /* 12aab477 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab479 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12aab47f push edx */
  push32((uint32_t)(EDX));
  /* 12aab480 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab483 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12aab489 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab48b push eax */
  push32((uint32_t)(EAX));
  /* 12aab48c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12aab492 push edx */
  push32((uint32_t)(EDX));
  /* 12aab493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab496 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab499 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab49c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aab49f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab4a2 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aab4a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12aab4ac push eax */
  push32((uint32_t)(EAX));
  /* 12aab4ad call dword ptr [0x12ad0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0264))), 0x12aab4b3u);
  /* 12aab4b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab4b5 je 0x12aab4da */
  if (C.zf) goto L_12aab4da;
  /* 12aab4b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aab4ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab4c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aab4c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab4c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12aab4cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab4ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab4d4 jge 0x12aab4d8 */
  if ((C.sf==C.of)) goto L_12aab4d8;
  /* 12aab4d6 jmp 0x12aab4ea */
  goto L_12aab4ea;
L_12aab4d8:;
  /* 12aab4d8 jmp 0x12aab4e5 */
  goto L_12aab4e5;
L_12aab4da:;
  /* 12aab4da call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aab4e0u);
  /* 12aab4e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aab4e3 jmp 0x12aab4ea */
  goto L_12aab4ea;
L_12aab4e5:;
  /* 12aab4e5 jmp 0x12aab3ed */
  goto L_12aab3ed;
L_12aab4ea:;
  /* 12aab4ea jmp 0x12aab53c */
  goto L_12aab53c;
L_12aab4ec:;
  /* 12aab4ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab4ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12aab4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab4f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aab4f8 push edx */
  push32((uint32_t)(EDX));
  /* 12aab4f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab4fc push eax */
  push32((uint32_t)(EAX));
  /* 12aab4fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab500 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab506 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab509 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab50c mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab513 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12aab516 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab517 call dword ptr [0x12ad0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0264))), 0x12aab51du);
  /* 12aab51d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab51f je 0x12aab533 */
  if (C.zf) goto L_12aab533;
  /* 12aab521 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aab528 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12aab52e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aab531 jmp 0x12aab53c */
  goto L_12aab53c;
L_12aab533:;
  /* 12aab533 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aab539u);
  /* 12aab539 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aab53c:;
  /* 12aab53c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab540 jne 0x12aab5c6 */
  if (!C.zf) goto L_12aab5c6;
  /* 12aab546 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab54a je 0x12aab57a */
  if (C.zf) goto L_12aab57a;
  /* 12aab54c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab550 jne 0x12aab569 */
  if (!C.zf) goto L_12aab569;
  /* 12aab552 call 0x12aaa900 */
  push32(0x12aab557u); f_12aaa900();
  /* 12aab557 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aab55d call 0x12aaa910 */
  push32(0x12aab562u); f_12aaa910();
  /* 12aab562 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aab565 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aab567 jmp 0x12aab575 */
  goto L_12aab575;
L_12aab569:;
  /* 12aab569 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aab56c push edx */
  push32((uint32_t)(EDX));
  /* 12aab56d call 0x12aaa860 */
  push32(0x12aab572u); f_12aaa860();
  /* 12aab572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aab575:;
  /* 12aab575 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab578 jmp 0x12aab5cf */
  goto L_12aab5cf;
L_12aab57a:;
  /* 12aab57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab57d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab583 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aab586 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab589 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aab590 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12aab595 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12aab598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab59a je 0x12aab5ab */
  if (C.zf) goto L_12aab5ab;
  /* 12aab59c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab59f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aab5a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab5a5 jne 0x12aab5ab */
  if (!C.zf) goto L_12aab5ab;
  /* 12aab5a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab5a9 jmp 0x12aab5cf */
  goto L_12aab5cf;
L_12aab5ab:;
  /* 12aab5ab call 0x12aaa900 */
  push32(0x12aab5b0u); f_12aaa900();
  /* 12aab5b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12aab5b6 call 0x12aaa910 */
  push32(0x12aab5bbu); f_12aaa910();
  /* 12aab5bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aab5c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab5c4 jmp 0x12aab5cf */
  goto L_12aab5cf;
L_12aab5c6:;
  /* 12aab5c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aab5c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12aab5cf:;
  /* 12aab5cf mov esp, ebp */
  ESP = (EBP);
  /* 12aab5d1 pop ebp */
  EBP = (pop32());
  /* 12aab5d2 ret  */
  ESPCHK(0x12aab360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x12aab5e0 (199 bytes, 68 insns) */
void f_12aab5e0(void) {
  FTRACE(0x12aab5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab5e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12aab5e5 push esi */
  push32((uint32_t)(ESI));
  /* 12aab5e6 push edi */
  push32((uint32_t)(EDI));
L_12aab5e7:;
  /* 12aab5e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab5eb jne 0x12aab60b */
  if (!C.zf) goto L_12aab60b;
  /* 12aab5ed push 0x12ac9e7c */
  push32((uint32_t)(0x12ac9e7cu));
  /* 12aab5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab5f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12aab5f6 push 0x12ac9f48 */
  push32((uint32_t)(0x12ac9f48u));
  /* 12aab5fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12aab5fd call 0x12aa1af0 */
  push32(0x12aab602u); f_12aa1af0();
  /* 12aab602 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab605 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab608 jne 0x12aab60b */
  if (!C.zf) goto L_12aab60b;
  /* 12aab60a int3  */
  x86_unimpl("int3 @ 0x12aab60a");
L_12aab60b:;
  /* 12aab60b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab60d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab60f jne 0x12aab5e7 */
  if (!C.zf) goto L_12aab5e7;
  /* 12aab611 mov ecx, dword ptr [0x12ace6a4] */
  ECX = (r32((uint32_t)(0x12ace6a4)));
  /* 12aab617 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab61a mov dword ptr [0x12ace6a4], ecx */
  w32((uint32_t)(0x12ace6a4), (ECX));
  /* 12aab620 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab623 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aab626 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12aab628 push 0x12ac9f48 */
  push32((uint32_t)(0x12ac9f48u));
  /* 12aab62d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aab62f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12aab634 call 0x12aa2a30 */
  push32(0x12aab639u); f_12aa2a30();
  /* 12aab639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab63f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12aab642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab645 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab649 je 0x12aab666 */
  if (C.zf) goto L_12aab666;
  /* 12aab64b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab64e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aab651 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12aab654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab657 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12aab65a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab65d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12aab664 jmp 0x12aab68b */
  goto L_12aab68b;
L_12aab666:;
  /* 12aab666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab669 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aab66c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aab66f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab672 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12aab675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab678 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab67b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab67e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12aab681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab684 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12aab68b:;
  /* 12aab68b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab68e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab691 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aab694 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aab696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab699 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12aab6a0 pop edi */
  EDI = (pop32());
  /* 12aab6a1 pop esi */
  ESI = (pop32());
  /* 12aab6a2 pop ebx */
  EBX = (pop32());
  /* 12aab6a3 mov esp, ebp */
  ESP = (EBP);
  /* 12aab6a5 pop ebp */
  EBP = (pop32());
  /* 12aab6a6 ret  */
  ESPCHK(0x12aab5e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12aab6b0 (50 bytes, 17 insns) */
void f_12aab6b0(void) {
  FTRACE(0x12aab6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab6b6 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab6bc jb 0x12aab6c2 */
  if (C.cf) goto L_12aab6c2;
  /* 12aab6be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab6c0 jmp 0x12aab6e0 */
  goto L_12aab6e0;
L_12aab6c2:;
  /* 12aab6c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab6c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab6c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab6cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab6ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab6d1 mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab6d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aab6dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12aab6e0:;
  /* 12aab6e0 pop ebp */
  EBP = (pop32());
  /* 12aab6e1 ret  */
  ESPCHK(0x12aab6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x12aab6f0 (300 bytes, 80 insns) */
void f_12aab6f0(void) {
  FTRACE(0x12aab6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab6f4 cmp dword ptr [0x12acfb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab6fb jne 0x12aab709 */
  if (!C.zf) goto L_12aab709;
  /* 12aab6fd mov dword ptr [0x12acfb60], 0x200 */
  w32((uint32_t)(0x12acfb60), (0x200u));
  /* 12aab707 jmp 0x12aab71c */
  goto L_12aab71c;
L_12aab709:;
  /* 12aab709 cmp dword ptr [0x12acfb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12acfb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab710 jge 0x12aab71c */
  if ((C.sf==C.of)) goto L_12aab71c;
  /* 12aab712 mov dword ptr [0x12acfb60], 0x14 */
  w32((uint32_t)(0x12acfb60), (0x14u));
L_12aab71c:;
  /* 12aab71c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12aab721 push 0x12ac9f54 */
  push32((uint32_t)(0x12ac9f54u));
  /* 12aab726 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aab728 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aab72a mov eax, dword ptr [0x12acfb60] */
  EAX = (r32((uint32_t)(0x12acfb60)));
  /* 12aab72f push eax */
  push32((uint32_t)(EAX));
  /* 12aab730 call 0x12aa2e40 */
  push32(0x12aab735u); f_12aa2e40();
  /* 12aab735 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab738 mov dword ptr [0x12ace818], eax */
  w32((uint32_t)(0x12ace818), (EAX));
  /* 12aab73d cmp dword ptr [0x12ace818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab744 jne 0x12aab785 */
  if (!C.zf) goto L_12aab785;
  /* 12aab746 mov dword ptr [0x12acfb60], 0x14 */
  w32((uint32_t)(0x12acfb60), (0x14u));
  /* 12aab750 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12aab755 push 0x12ac9f54 */
  push32((uint32_t)(0x12ac9f54u));
  /* 12aab75a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aab75c push 4 */
  push32((uint32_t)(0x4u));
  /* 12aab75e mov ecx, dword ptr [0x12acfb60] */
  ECX = (r32((uint32_t)(0x12acfb60)));
  /* 12aab764 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab765 call 0x12aa2e40 */
  push32(0x12aab76au); f_12aa2e40();
  /* 12aab76a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab76d mov dword ptr [0x12ace818], eax */
  w32((uint32_t)(0x12ace818), (EAX));
  /* 12aab772 cmp dword ptr [0x12ace818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab779 jne 0x12aab785 */
  if (!C.zf) goto L_12aab785;
  /* 12aab77b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12aab77d call 0x12aa19a0 */
  push32(0x12aab782u); f_12aa19a0();
  /* 12aab782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aab785:;
  /* 12aab785 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aab78c jmp 0x12aab797 */
  goto L_12aab797;
L_12aab78e:;
  /* 12aab78e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab791 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab794 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aab797:;
  /* 12aab797 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab79b jge 0x12aab7b6 */
  if ((C.sf==C.of)) goto L_12aab7b6;
  /* 12aab79d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab7a3 add eax, 0x12acd120 */
  { uint32_t _a=(EAX),_b=(0x12acd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab7a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7ab mov edx, dword ptr [0x12ace818] */
  EDX = (r32((uint32_t)(0x12ace818)));
  /* 12aab7b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12aab7b4 jmp 0x12aab78e */
  goto L_12aab78e;
L_12aab7b6:;
  /* 12aab7b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aab7bd jmp 0x12aab7c8 */
  goto L_12aab7c8;
L_12aab7bf:;
  /* 12aab7bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab7c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aab7c8:;
  /* 12aab7c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab7cc jge 0x12aab818 */
  if ((C.sf==C.of)) goto L_12aab818;
  /* 12aab7ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab7d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab7da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab7dd mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab7e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab7e8 je 0x12aab806 */
  if (C.zf) goto L_12aab806;
  /* 12aab7ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab7f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab7f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aab7f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aab7f9 mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aab800 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab804 jne 0x12aab816 */
  if (!C.zf) goto L_12aab816;
L_12aab806:;
  /* 12aab806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aab809 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aab80c mov dword ptr [ecx + 0x12acd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12acd130), (0xffffffffu));
L_12aab816:;
  /* 12aab816 jmp 0x12aab7bf */
  goto L_12aab7bf;
L_12aab818:;
  /* 12aab818 mov esp, ebp */
  ESP = (EBP);
  /* 12aab81a pop ebp */
  EBP = (pop32());
  /* 12aab81b ret  */
  ESPCHK(0x12aab6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x12aab820 (26 bytes, 9 insns) */
void f_12aab820(void) {
  FTRACE(0x12aab820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab820 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab821 mov ebp, esp */
  EBP = (ESP);
  /* 12aab823 call 0x12aac420 */
  push32(0x12aab828u); f_12aac420();
  /* 12aab828 movsx eax, byte ptr [0x12ace4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12ace4bc))));
  /* 12aab82f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aab831 je 0x12aab838 */
  if (C.zf) goto L_12aab838;
  /* 12aab833 call 0x12aac1e0 */
  push32(0x12aab838u); f_12aac1e0();
L_12aab838:;
  /* 12aab838 pop ebp */
  EBP = (pop32());
  /* 12aab839 ret  */
  ESPCHK(0x12aab820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x12aab840 (61 bytes, 20 insns) */
void f_12aab840(void) {
  FTRACE(0x12aab840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab840 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab841 mov ebp, esp */
  EBP = (ESP);
  /* 12aab843 cmp dword ptr [ebp + 8], 0x12acd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12acd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab84a jb 0x12aab86e */
  if (C.cf) goto L_12aab86e;
  /* 12aab84c cmp dword ptr [ebp + 8], 0x12acd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12acd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab853 ja 0x12aab86e */
  if ((!C.cf&&!C.zf)) goto L_12aab86e;
  /* 12aab855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab858 sub eax, 0x12acd120 */
  { uint32_t _a=(EAX),_b=(0x12acd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab85d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab860 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab863 push eax */
  push32((uint32_t)(EAX));
  /* 12aab864 call 0x12aa6430 */
  push32(0x12aab869u); f_12aa6430();
  /* 12aab869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab86c jmp 0x12aab87b */
  goto L_12aab87b;
L_12aab86e:;
  /* 12aab86e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab871 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab874 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab875 call dword ptr [0x12ad02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f4))), 0x12aab87bu);
L_12aab87b:;
  /* 12aab87b pop ebp */
  EBP = (pop32());
  /* 12aab87c ret  */
  ESPCHK(0x12aab840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x12aab880 (41 bytes, 16 insns) */
void f_12aab880(void) {
  FTRACE(0x12aab880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab880 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab881 mov ebp, esp */
  EBP = (ESP);
  /* 12aab883 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab887 jge 0x12aab89a */
  if ((C.sf==C.of)) goto L_12aab89a;
  /* 12aab889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab88c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab88f push eax */
  push32((uint32_t)(EAX));
  /* 12aab890 call 0x12aa6430 */
  push32(0x12aab895u); f_12aa6430();
  /* 12aab895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab898 jmp 0x12aab8a7 */
  goto L_12aab8a7;
L_12aab89a:;
  /* 12aab89a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab89d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab8a1 call dword ptr [0x12ad02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f4))), 0x12aab8a7u);
L_12aab8a7:;
  /* 12aab8a7 pop ebp */
  EBP = (pop32());
  /* 12aab8a8 ret  */
  ESPCHK(0x12aab880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x12aab8b0 (61 bytes, 20 insns) */
void f_12aab8b0(void) {
  FTRACE(0x12aab8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab8b3 cmp dword ptr [ebp + 8], 0x12acd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12acd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab8ba jb 0x12aab8de */
  if (C.cf) goto L_12aab8de;
  /* 12aab8bc cmp dword ptr [ebp + 8], 0x12acd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12acd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab8c3 ja 0x12aab8de */
  if ((!C.cf&&!C.zf)) goto L_12aab8de;
  /* 12aab8c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab8c8 sub eax, 0x12acd120 */
  { uint32_t _a=(EAX),_b=(0x12acd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab8cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aab8d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab8d3 push eax */
  push32((uint32_t)(EAX));
  /* 12aab8d4 call 0x12aa64d0 */
  push32(0x12aab8d9u); f_12aa64d0();
  /* 12aab8d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab8dc jmp 0x12aab8eb */
  goto L_12aab8eb;
L_12aab8de:;
  /* 12aab8de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab8e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab8e5 call dword ptr [0x12ad02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f8))), 0x12aab8ebu);
L_12aab8eb:;
  /* 12aab8eb pop ebp */
  EBP = (pop32());
  /* 12aab8ec ret  */
  ESPCHK(0x12aab8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x12aab8f0 (41 bytes, 16 insns) */
void f_12aab8f0(void) {
  FTRACE(0x12aab8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab8f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab8f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab8f7 jge 0x12aab90a */
  if ((C.sf==C.of)) goto L_12aab90a;
  /* 12aab8f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab8fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab8ff push eax */
  push32((uint32_t)(EAX));
  /* 12aab900 call 0x12aa64d0 */
  push32(0x12aab905u); f_12aa64d0();
  /* 12aab905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab908 jmp 0x12aab917 */
  goto L_12aab917;
L_12aab90a:;
  /* 12aab90a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab90d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab910 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab911 call dword ptr [0x12ad02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f8))), 0x12aab917u);
L_12aab917:;
  /* 12aab917 pop ebp */
  EBP = (pop32());
  /* 12aab918 ret  */
  ESPCHK(0x12aab8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b920 @ 0x12aab920 (119 bytes, 34 insns) */
void f_12aab920(void) {
  FTRACE(0x12aab920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab920 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab921 mov ebp, esp */
  EBP = (ESP);
  /* 12aab923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab926 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aab92b call dword ptr [0x12ad0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0278))), 0x12aab931u);
  /* 12aab931 cmp dword ptr [0x12ace804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab938 je 0x12aab958 */
  if (C.zf) goto L_12aab958;
  /* 12aab93a push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aab93f call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aab945u);
  /* 12aab945 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aab947 call 0x12aa6430 */
  push32(0x12aab94cu); f_12aa6430();
  /* 12aab94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab94f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aab956 jmp 0x12aab95f */
  goto L_12aab95f;
L_12aab958:;
  /* 12aab958 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aab95f:;
  /* 12aab95f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12aab963 push eax */
  push32((uint32_t)(EAX));
  /* 12aab964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab967 push ecx */
  push32((uint32_t)(ECX));
  /* 12aab968 call 0x12aab9a0 */
  push32(0x12aab96du); f_12aab9a0();
  /* 12aab96d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aab973 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab977 je 0x12aab985 */
  if (C.zf) goto L_12aab985;
  /* 12aab979 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aab97b call 0x12aa64d0 */
  push32(0x12aab980u); f_12aa64d0();
  /* 12aab980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aab983 jmp 0x12aab990 */
  goto L_12aab990;
L_12aab985:;
  /* 12aab985 push 0x12ace814 */
  push32((uint32_t)(0x12ace814u));
  /* 12aab98a call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aab990u);
L_12aab990:;
  /* 12aab990 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aab993 mov esp, ebp */
  ESP = (EBP);
  /* 12aab995 pop ebp */
  EBP = (pop32());
  /* 12aab996 ret  */
  ESPCHK(0x12aab920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9a0 @ 0x12aab9a0 (160 bytes, 50 insns) */
void f_12aab9a0(void) {
  FTRACE(0x12aab9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aab9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aab9a1 mov ebp, esp */
  EBP = (ESP);
  /* 12aab9a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aab9a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab9aa jne 0x12aab9b3 */
  if (!C.zf) goto L_12aab9b3;
  /* 12aab9ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aab9ae jmp 0x12aaba3c */
  goto L_12aaba3c;
L_12aab9b3:;
  /* 12aab9b3 cmp dword ptr [0x12ace688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab9ba jne 0x12aab9ea */
  if (!C.zf) goto L_12aab9ea;
  /* 12aab9bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aab9bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab9c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aab9c9 jle 0x12aab9db */
  if ((C.zf||C.sf!=C.of)) goto L_12aab9db;
  /* 12aab9cb call 0x12aaa900 */
  push32(0x12aab9d0u); f_12aaa900();
  /* 12aab9d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12aab9d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aab9d9 jmp 0x12aaba3c */
  goto L_12aaba3c;
L_12aab9db:;
  /* 12aab9db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aab9de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12aab9e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12aab9e3 mov eax, 1 */
  EAX = (0x1u);
  /* 12aab9e8 jmp 0x12aaba3c */
  goto L_12aaba3c;
L_12aab9ea:;
  /* 12aab9ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aab9f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12aab9f4 push eax */
  push32((uint32_t)(EAX));
  /* 12aab9f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aab9f7 mov ecx, dword ptr [0x12accea4] */
  ECX = (r32((uint32_t)(0x12accea4)));
  /* 12aab9fd push ecx */
  push32((uint32_t)(ECX));
  /* 12aab9fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaba01 push edx */
  push32((uint32_t)(EDX));
  /* 12aaba02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaba04 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12aaba07 push eax */
  push32((uint32_t)(EAX));
  /* 12aaba08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12aaba0d mov ecx, dword ptr [0x12ace698] */
  ECX = (r32((uint32_t)(0x12ace698)));
  /* 12aaba13 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaba14 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12aaba1au);
  /* 12aaba1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaba1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaba21 je 0x12aaba29 */
  if (C.zf) goto L_12aaba29;
  /* 12aaba23 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaba27 je 0x12aaba39 */
  if (C.zf) goto L_12aaba39;
L_12aaba29:;
  /* 12aaba29 call 0x12aaa900 */
  push32(0x12aaba2eu); f_12aaa900();
  /* 12aaba2e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12aaba34 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaba37 jmp 0x12aaba3c */
  goto L_12aaba3c;
L_12aaba39:;
  /* 12aaba39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aaba3c:;
  /* 12aaba3c mov esp, ebp */
  ESP = (EBP);
  /* 12aaba3e pop ebp */
  EBP = (pop32());
  /* 12aaba3f ret  */
  ESPCHK(0x12aab9a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12aaba40 (32 bytes, 18 insns) */
void f_12aaba40(void) {
  FTRACE(0x12aaba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaba40 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaba41 mov ebp, esp */
  EBP = (ESP);
  /* 12aaba43 push ebx */
  push32((uint32_t)(EBX));
  /* 12aaba44 push esi */
  push32((uint32_t)(ESI));
  /* 12aaba45 push edi */
  push32((uint32_t)(EDI));
  /* 12aaba46 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaba47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaba49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaba4b push 0x12aaba58 */
  push32((uint32_t)(0x12aaba58u));
  /* 12aaba50 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12aaba53 call 0x12ab318c */
  push32(0x12aaba58u); f_12ab318c();
  /* 12aaba58 pop ebp */
  EBP = (pop32());
  /* 12aaba59 pop edi */
  EDI = (pop32());
  /* 12aaba5a pop esi */
  ESI = (pop32());
  /* 12aaba5b pop ebx */
  EBX = (pop32());
  /* 12aaba5c mov esp, ebp */
  ESP = (EBP);
  /* 12aaba5e pop ebp */
  EBP = (pop32());
  /* 12aaba5f ret  */
  ESPCHK(0x12aaba40u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12aaba82 (104 bytes, 33 insns) */
void f_12aaba82(void) {
  FTRACE(0x12aaba82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaba82 push ebx */
  push32((uint32_t)(EBX));
  /* 12aaba83 push esi */
  push32((uint32_t)(ESI));
  /* 12aaba84 push edi */
  push32((uint32_t)(EDI));
  /* 12aaba85 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aaba89 push eax */
  push32((uint32_t)(EAX));
  /* 12aaba8a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12aaba8c push 0x12aaba60 */
  push32((uint32_t)(0x12aaba60u));
  /* 12aaba91 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12aaba98 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12aaba9f:;
  /* 12aaba9f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12aabaa3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aabaa6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12aabaa9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabaac je 0x12aabadc */
  if (C.zf) goto L_12aabadc;
  /* 12aabaae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabab2 je 0x12aabadc */
  if (C.zf) goto L_12aabadc;
  /* 12aabab4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12aabab7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12aababa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12aababe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12aabac1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabac6 jne 0x12aabada */
  if (!C.zf) goto L_12aabada;
  /* 12aabac8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12aabacd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12aabad1 call 0x12aabb16 */
  push32(0x12aabad6u); f_12aabb16();
  /* 12aabad6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12aabadau);
L_12aabada:;
  /* 12aabada jmp 0x12aaba9f */
  goto L_12aaba9f;
L_12aabadc:;
  /* 12aabadc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12aabae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabae6 pop edi */
  EDI = (pop32());
  /* 12aabae7 pop esi */
  ESI = (pop32());
  /* 12aabae8 pop ebx */
  EBX = (pop32());
  /* 12aabae9 ret  */
  ESPCHK(0x12aaba82u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb16 @ 0x12aabb16 (24 bytes, 10 insns) */
void f_12aabb16(void) {
  FTRACE(0x12aabb16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabb16 push ebx */
  push32((uint32_t)(EBX));
  /* 12aabb17 push ecx */
  push32((uint32_t)(ECX));
  /* 12aabb18 mov ebx, 0x12acd3b8 */
  EBX = (0x12acd3b8u);
  /* 12aabb1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabb20 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12aabb23 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12aabb26 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12aabb29 pop ecx */
  ECX = (pop32());
  /* 12aabb2a pop ebx */
  EBX = (pop32());
  /* 12aabb2b ret 4 */
  ESPCHK(0x12aabb16u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bbf5 @ 0x12aabbf5 (27 bytes, 11 insns) */
void f_12aabbf5(void) {
  FTRACE(0x12aabbf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabbf5 push ebp */
  push32((uint32_t)(EBP));
  /* 12aabbf6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aabbfa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12aabbfc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12aabbff push eax */
  push32((uint32_t)(EAX));
  /* 12aabc00 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aabc03 push eax */
  push32((uint32_t)(EAX));
  /* 12aabc04 call 0x12aaba82 */
  push32(0x12aabc09u); f_12aaba82();
  /* 12aabc09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabc0c pop ebp */
  EBP = (pop32());
  /* 12aabc0d ret 4 */
  ESPCHK(0x12aabbf5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bc10 @ 0x12aabc10 (482 bytes, 138 insns) */
void f_12aabc10(void) {
  FTRACE(0x12aabc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabc10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aabc11 mov ebp, esp */
  EBP = (ESP);
  /* 12aabc13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aabc16 push esi */
  push32((uint32_t)(ESI));
  /* 12aabc17 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12aabc1e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12aabc20 call 0x12aa6430 */
  push32(0x12aabc25u); f_12aa6430();
  /* 12aabc25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabc28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aabc2f jmp 0x12aabc3a */
  goto L_12aabc3a;
L_12aabc31:;
  /* 12aabc31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabc34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabc37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aabc3a:;
  /* 12aabc3a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabc3e jge 0x12aabde0 */
  if ((C.sf==C.of)) goto L_12aabde0;
  /* 12aabc44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabc47 cmp dword ptr [ecx*4 + 0x12acfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12acfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabc4f je 0x12aabd46 */
  if (C.zf) goto L_12aabd46;
  /* 12aabc55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabc58 mov eax, dword ptr [edx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aabc5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aabc62 jmp 0x12aabc6d */
  goto L_12aabc6d;
L_12aabc64:;
  /* 12aabc64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabc67 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabc6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aabc6d:;
  /* 12aabc6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabc70 mov eax, dword ptr [edx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aabc77 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabc7c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabc7f jae 0x12aabd36 */
  if (!C.cf) goto L_12aabd36;
  /* 12aabc85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabc88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aabc8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aabc8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aabc91 jne 0x12aabd31 */
  if (!C.zf) goto L_12aabd31;
  /* 12aabc97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabc9a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabc9e jne 0x12aabcd9 */
  if (!C.zf) goto L_12aabcd9;
  /* 12aabca0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aabca2 call 0x12aa6430 */
  push32(0x12aabca7u); f_12aa6430();
  /* 12aabca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabcaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabcad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabcb1 jne 0x12aabccf */
  if (!C.zf) goto L_12aabccf;
  /* 12aabcb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabcb6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabcb9 push edx */
  push32((uint32_t)(EDX));
  /* 12aabcba call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aabcc0u);
  /* 12aabcc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabcc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aabcc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabcc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabccc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12aabccf:;
  /* 12aabccf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aabcd1 call 0x12aa64d0 */
  push32(0x12aabcd6u); f_12aa64d0();
  /* 12aabcd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aabcd9:;
  /* 12aabcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabcdc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabcdf push eax */
  push32((uint32_t)(EAX));
  /* 12aabce0 call dword ptr [0x12ad02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f4))), 0x12aabce6u);
  /* 12aabce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabce9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12aabced and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aabcf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aabcf2 je 0x12aabd06 */
  if (C.zf) goto L_12aabd06;
  /* 12aabcf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabcf7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabcfa push eax */
  push32((uint32_t)(EAX));
  /* 12aabcfb call dword ptr [0x12ad02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f8))), 0x12aabd01u);
  /* 12aabd01 jmp 0x12aabc64 */
  goto L_12aabc64;
L_12aabd06:;
  /* 12aabd06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabd09 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12aabd0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabd12 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aabd15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabd1b sub eax, dword ptr [edx*4 + 0x12acfe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12acfe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aabd22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aabd23 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12aabd28 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aabd2a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabd2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aabd2f jmp 0x12aabd36 */
  goto L_12aabd36;
L_12aabd31:;
  /* 12aabd31 jmp 0x12aabc64 */
  goto L_12aabc64;
L_12aabd36:;
  /* 12aabd36 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabd3a je 0x12aabd41 */
  if (C.zf) goto L_12aabd41;
  /* 12aabd3c jmp 0x12aabde0 */
  goto L_12aabde0;
L_12aabd41:;
  /* 12aabd41 jmp 0x12aabddb */
  goto L_12aabddb;
L_12aabd46:;
  /* 12aabd46 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12aabd48 push 0x12ac9f5c */
  push32((uint32_t)(0x12ac9f5cu));
  /* 12aabd4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aabd4f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12aabd54 call 0x12aa2a30 */
  push32(0x12aabd59u); f_12aa2a30();
  /* 12aabd59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabd5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aabd5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabd63 je 0x12aabdd9 */
  if (C.zf) goto L_12aabdd9;
  /* 12aabd65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabd68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabd6b mov dword ptr [eax*4 + 0x12acfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12acfe60), (ECX));
  /* 12aabd72 mov edx, dword ptr [0x12acff9c] */
  EDX = (r32((uint32_t)(0x12acff9c)));
  /* 12aabd78 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabd7b mov dword ptr [0x12acff9c], edx */
  w32((uint32_t)(0x12acff9c), (EDX));
  /* 12aabd81 jmp 0x12aabd8c */
  goto L_12aabd8c;
L_12aabd83:;
  /* 12aabd83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabd86 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabd89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aabd8c:;
  /* 12aabd8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabd8f mov edx, dword ptr [ecx*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aabd96 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabd9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabd9f jae 0x12aabdc4 */
  if (!C.cf) goto L_12aabdc4;
  /* 12aabda1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabda4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12aabda8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabdab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12aabdb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabdb4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12aabdb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aabdbb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12aabdc2 jmp 0x12aabd83 */
  goto L_12aabd83;
L_12aabdc4:;
  /* 12aabdc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aabdc7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aabdca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aabdcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aabdd0 push edx */
  push32((uint32_t)(EDX));
  /* 12aabdd1 call 0x12aac120 */
  push32(0x12aabdd6u); f_12aac120();
  /* 12aabdd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aabdd9:;
  /* 12aabdd9 jmp 0x12aabde0 */
  goto L_12aabde0;
L_12aabddb:;
  /* 12aabddb jmp 0x12aabc31 */
  goto L_12aabc31;
L_12aabde0:;
  /* 12aabde0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12aabde2 call 0x12aa64d0 */
  push32(0x12aabde7u); f_12aa64d0();
  /* 12aabde7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aabdea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aabded pop esi */
  ESI = (pop32());
  /* 12aabdee mov esp, ebp */
  ESP = (EBP);
  /* 12aabdf0 pop ebp */
  EBP = (pop32());
  /* 12aabdf1 ret  */
  ESPCHK(0x12aabc10u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12aabe00 (183 bytes, 57 insns) */
void f_12aabe00(void) {
  FTRACE(0x12aabe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabe00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aabe01 mov ebp, esp */
  EBP = (ESP);
  /* 12aabe03 push ecx */
  push32((uint32_t)(ECX));
  /* 12aabe04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe07 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe0d jae 0x12aabe9a */
  if (!C.cf) goto L_12aabe9a;
  /* 12aabe13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aabe19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aabe1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabe22 mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aabe29 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe2d jne 0x12aabe9a */
  if (!C.zf) goto L_12aabe9a;
  /* 12aabe2f cmp dword ptr [0x12ace47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe36 jne 0x12aabe7a */
  if (!C.zf) goto L_12aabe7a;
  /* 12aabe38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aabe3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe42 je 0x12aabe52 */
  if (C.zf) goto L_12aabe52;
  /* 12aabe44 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe48 je 0x12aabe60 */
  if (C.zf) goto L_12aabe60;
  /* 12aabe4a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabe4e je 0x12aabe6e */
  if (C.zf) goto L_12aabe6e;
  /* 12aabe50 jmp 0x12aabe7a */
  goto L_12aabe7a;
L_12aabe52:;
  /* 12aabe52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aabe55 push edx */
  push32((uint32_t)(EDX));
  /* 12aabe56 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12aabe58 call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabe5eu);
  /* 12aabe5e jmp 0x12aabe7a */
  goto L_12aabe7a;
L_12aabe60:;
  /* 12aabe60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aabe63 push eax */
  push32((uint32_t)(EAX));
  /* 12aabe64 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12aabe66 call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabe6cu);
  /* 12aabe6c jmp 0x12aabe7a */
  goto L_12aabe7a;
L_12aabe6e:;
  /* 12aabe6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aabe71 push ecx */
  push32((uint32_t)(ECX));
  /* 12aabe72 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12aabe74 call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabe7au);
L_12aabe7a:;
  /* 12aabe7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe7d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12aabe80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabe83 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12aabe86 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabe89 mov ecx, dword ptr [edx*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aabe90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aabe93 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12aabe96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aabe98 jmp 0x12aabeb3 */
  goto L_12aabeb3;
L_12aabe9a:;
  /* 12aabe9a call 0x12aaa900 */
  push32(0x12aabe9fu); f_12aaa900();
  /* 12aabe9f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aabea5 call 0x12aaa910 */
  push32(0x12aabeaau); f_12aaa910();
  /* 12aabeaa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aabeb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aabeb3:;
  /* 12aabeb3 mov esp, ebp */
  ESP = (EBP);
  /* 12aabeb5 pop ebp */
  EBP = (pop32());
  /* 12aabeb6 ret  */
  ESPCHK(0x12aabe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bec0 @ 0x12aabec0 (216 bytes, 63 insns) */
void f_12aabec0(void) {
  FTRACE(0x12aabec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aabec1 mov ebp, esp */
  EBP = (ESP);
  /* 12aabec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aabec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabec7 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabecd jae 0x12aabf7b */
  if (!C.cf) goto L_12aabf7b;
  /* 12aabed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabed6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aabed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabedc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aabedf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabee2 mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aabee9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aabeee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aabef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aabef3 je 0x12aabf7b */
  if (C.zf) goto L_12aabf7b;
  /* 12aabef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabefc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12aabeff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabf02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12aabf05 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabf08 mov ecx, dword ptr [edx*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aabf0f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabf13 je 0x12aabf7b */
  if (C.zf) goto L_12aabf7b;
  /* 12aabf15 cmp dword ptr [0x12ace47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabf1c jne 0x12aabf5a */
  if (!C.zf) goto L_12aabf5a;
  /* 12aabf1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabf21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aabf24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabf28 je 0x12aabf38 */
  if (C.zf) goto L_12aabf38;
  /* 12aabf2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabf2e je 0x12aabf44 */
  if (C.zf) goto L_12aabf44;
  /* 12aabf30 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabf34 je 0x12aabf50 */
  if (C.zf) goto L_12aabf50;
  /* 12aabf36 jmp 0x12aabf5a */
  goto L_12aabf5a;
L_12aabf38:;
  /* 12aabf38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aabf3a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12aabf3c call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabf42u);
  /* 12aabf42 jmp 0x12aabf5a */
  goto L_12aabf5a;
L_12aabf44:;
  /* 12aabf44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aabf46 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12aabf48 call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabf4eu);
  /* 12aabf4e jmp 0x12aabf5a */
  goto L_12aabf5a;
L_12aabf50:;
  /* 12aabf50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aabf52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12aabf54 call dword ptr [0x12ad0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0334))), 0x12aabf5au);
L_12aabf5a:;
  /* 12aabf5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabf5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aabf60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabf63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aabf66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabf69 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aabf70 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12aabf77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aabf79 jmp 0x12aabf94 */
  goto L_12aabf94;
L_12aabf7b:;
  /* 12aabf7b call 0x12aaa900 */
  push32(0x12aabf80u); f_12aaa900();
  /* 12aabf80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aabf86 call 0x12aaa910 */
  push32(0x12aabf8bu); f_12aaa910();
  /* 12aabf8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aabf91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aabf94:;
  /* 12aabf94 mov esp, ebp */
  ESP = (EBP);
  /* 12aabf96 pop ebp */
  EBP = (pop32());
  /* 12aabf97 ret  */
  ESPCHK(0x12aabec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x12aabfa0 (102 bytes, 30 insns) */
void f_12aabfa0(void) {
  FTRACE(0x12aabfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aabfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aabfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12aabfa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabfa6 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aabfac jae 0x12aabfeb */
  if (!C.cf) goto L_12aabfeb;
  /* 12aabfae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabfb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aabfb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabfb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aabfba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabfbd mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aabfc4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aabfc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aabfcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aabfce je 0x12aabfeb */
  if (C.zf) goto L_12aabfeb;
  /* 12aabfd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabfd3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12aabfd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aabfd9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12aabfdc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aabfdf mov ecx, dword ptr [edx*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aabfe6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12aabfe9 jmp 0x12aac004 */
  goto L_12aac004;
L_12aabfeb:;
  /* 12aabfeb call 0x12aaa900 */
  push32(0x12aabff0u); f_12aaa900();
  /* 12aabff0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aabff6 call 0x12aaa910 */
  push32(0x12aabffbu); f_12aaa910();
  /* 12aabffb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aac001 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aac004:;
  /* 12aac004 pop ebp */
  EBP = (pop32());
  /* 12aac005 ret  */
  ESPCHK(0x12aabfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x12aac010 (260 bytes, 83 insns) */
void f_12aac010(void) {
  FTRACE(0x12aac010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac010 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac011 mov ebp, esp */
  EBP = (ESP);
  /* 12aac013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac016 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aac01a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac01d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12aac020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac022 je 0x12aac02d */
  if (C.zf) goto L_12aac02d;
  /* 12aac024 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac027 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12aac02a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12aac02d:;
  /* 12aac02d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac030 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12aac036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aac038 je 0x12aac042 */
  if (C.zf) goto L_12aac042;
  /* 12aac03a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac03d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12aac03f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12aac042:;
  /* 12aac042 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac045 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12aac04b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aac04d je 0x12aac058 */
  if (C.zf) goto L_12aac058;
  /* 12aac04f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac052 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12aac055 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12aac058:;
  /* 12aac058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac05b push eax */
  push32((uint32_t)(EAX));
  /* 12aac05c call dword ptr [0x12ad02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b0))), 0x12aac062u);
  /* 12aac062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aac065 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac069 jne 0x12aac082 */
  if (!C.zf) goto L_12aac082;
  /* 12aac06b call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aac071u);
  /* 12aac071 push eax */
  push32((uint32_t)(EAX));
  /* 12aac072 call 0x12aaa860 */
  push32(0x12aac077u); f_12aaa860();
  /* 12aac077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac07a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aac07d jmp 0x12aac110 */
  goto L_12aac110;
L_12aac082:;
  /* 12aac082 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac086 jne 0x12aac093 */
  if (!C.zf) goto L_12aac093;
  /* 12aac088 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac08b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12aac08e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12aac091 jmp 0x12aac0a2 */
  goto L_12aac0a2;
L_12aac093:;
  /* 12aac093 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac097 jne 0x12aac0a2 */
  if (!C.zf) goto L_12aac0a2;
  /* 12aac099 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac09c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12aac09f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12aac0a2:;
  /* 12aac0a2 call 0x12aabc10 */
  push32(0x12aac0a7u); f_12aabc10();
  /* 12aac0a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aac0aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac0ae jne 0x12aac0cb */
  if (!C.zf) goto L_12aac0cb;
  /* 12aac0b0 call 0x12aaa900 */
  push32(0x12aac0b5u); f_12aaa900();
  /* 12aac0b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12aac0bb call 0x12aaa910 */
  push32(0x12aac0c0u); f_12aaa910();
  /* 12aac0c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aac0c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aac0c9 jmp 0x12aac110 */
  goto L_12aac110;
L_12aac0cb:;
  /* 12aac0cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac0ce push eax */
  push32((uint32_t)(EAX));
  /* 12aac0cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac0d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac0d3 call 0x12aabe00 */
  push32(0x12aac0d8u); f_12aabe00();
  /* 12aac0d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac0db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac0de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12aac0e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12aac0e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac0e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aac0ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac0ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aac0f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac0f3 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aac0fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12aac0fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12aac101 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac104 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac105 call 0x12aac1b0 */
  push32(0x12aac10au); f_12aac1b0();
  /* 12aac10a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac10d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aac110:;
  /* 12aac110 mov esp, ebp */
  ESP = (EBP);
  /* 12aac112 pop ebp */
  EBP = (pop32());
  /* 12aac113 ret  */
  ESPCHK(0x12aac010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x12aac120 (134 bytes, 44 insns) */
void f_12aac120(void) {
  FTRACE(0x12aac120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac120 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac121 mov ebp, esp */
  EBP = (ESP);
  /* 12aac123 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac127 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aac12a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac12d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aac130 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac133 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aac13a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac13c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aac13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac142 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac146 jne 0x12aac181 */
  if (!C.zf) goto L_12aac181;
  /* 12aac148 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aac14a call 0x12aa6430 */
  push32(0x12aac14fu); f_12aa6430();
  /* 12aac14f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac155 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac159 jne 0x12aac177 */
  if (!C.zf) goto L_12aac177;
  /* 12aac15b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac15e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac161 push edx */
  push32((uint32_t)(EDX));
  /* 12aac162 call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aac168u);
  /* 12aac168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac16b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aac16e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac174 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12aac177:;
  /* 12aac177 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aac179 call 0x12aa64d0 */
  push32(0x12aac17eu); f_12aa64d0();
  /* 12aac17e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aac181:;
  /* 12aac181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac184 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aac187 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac18a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aac18d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac190 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aac197 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12aac19b push eax */
  push32((uint32_t)(EAX));
  /* 12aac19c call dword ptr [0x12ad02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f4))), 0x12aac1a2u);
  /* 12aac1a2 mov esp, ebp */
  ESP = (EBP);
  /* 12aac1a4 pop ebp */
  EBP = (pop32());
  /* 12aac1a5 ret  */
  ESPCHK(0x12aac120u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12aac1b0 (38 bytes, 13 insns) */
void f_12aac1b0(void) {
  FTRACE(0x12aac1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac1b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aac1b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac1b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aac1b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac1bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aac1bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac1c2 mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aac1c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12aac1cd push eax */
  push32((uint32_t)(EAX));
  /* 12aac1ce call dword ptr [0x12ad02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f8))), 0x12aac1d4u);
  /* 12aac1d4 pop ebp */
  EBP = (pop32());
  /* 12aac1d5 ret  */
  ESPCHK(0x12aac1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x12aac1e0 (218 bytes, 63 insns) */
void f_12aac1e0(void) {
  FTRACE(0x12aac1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac1e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aac1e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac1e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aac1ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac1ef call 0x12aa6430 */
  push32(0x12aac1f4u); f_12aa6430();
  /* 12aac1f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac1f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12aac1fe jmp 0x12aac209 */
  goto L_12aac209;
L_12aac200:;
  /* 12aac200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac203 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac206 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aac209:;
  /* 12aac209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac20c cmp ecx, dword ptr [0x12acfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac212 jge 0x12aac2a9 */
  if ((C.sf==C.of)) goto L_12aac2a9;
  /* 12aac218 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac21b mov eax, dword ptr [0x12ace818] */
  EAX = (r32((uint32_t)(0x12ace818)));
  /* 12aac220 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac224 je 0x12aac2a4 */
  if (C.zf) goto L_12aac2a4;
  /* 12aac226 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac229 mov edx, dword ptr [0x12ace818] */
  EDX = (r32((uint32_t)(0x12ace818)));
  /* 12aac22f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12aac232 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aac235 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12aac23b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aac23d je 0x12aac261 */
  if (C.zf) goto L_12aac261;
  /* 12aac23f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac242 mov eax, dword ptr [0x12ace818] */
  EAX = (r32((uint32_t)(0x12ace818)));
  /* 12aac247 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aac24a push ecx */
  push32((uint32_t)(ECX));
  /* 12aac24b call 0x12aacfd0 */
  push32(0x12aac250u); f_12aacfd0();
  /* 12aac250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac253 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac256 je 0x12aac261 */
  if (C.zf) goto L_12aac261;
  /* 12aac258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac25b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac25e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aac261:;
  /* 12aac261 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac265 jl 0x12aac2a4 */
  if ((C.sf!=C.of)) goto L_12aac2a4;
  /* 12aac267 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac26a mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac270 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aac273 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac276 push edx */
  push32((uint32_t)(EDX));
  /* 12aac277 call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aac27du);
  /* 12aac27d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac27f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac282 mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac288 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aac28b push edx */
  push32((uint32_t)(EDX));
  /* 12aac28c call 0x12aa34c0 */
  push32(0x12aac291u); f_12aa34c0();
  /* 12aac291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac297 mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac29d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12aac2a4:;
  /* 12aac2a4 jmp 0x12aac200 */
  goto L_12aac200;
L_12aac2a9:;
  /* 12aac2a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac2ab call 0x12aa64d0 */
  push32(0x12aac2b0u); f_12aa64d0();
  /* 12aac2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac2b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac2b6 mov esp, ebp */
  ESP = (EBP);
  /* 12aac2b8 pop ebp */
  EBP = (pop32());
  /* 12aac2b9 ret  */
  ESPCHK(0x12aac1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2c0 @ 0x12aac2c0 (68 bytes, 26 insns) */
void f_12aac2c0(void) {
  FTRACE(0x12aac2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac2c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aac2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac2c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac2c8 jne 0x12aac2d6 */
  if (!C.zf) goto L_12aac2d6;
  /* 12aac2ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12aac2cc call 0x12aac430 */
  push32(0x12aac2d1u); f_12aac430();
  /* 12aac2d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac2d4 jmp 0x12aac300 */
  goto L_12aac300;
L_12aac2d6:;
  /* 12aac2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac2d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aac2da call 0x12aab840 */
  push32(0x12aac2dfu); f_12aab840();
  /* 12aac2df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac2e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac2e6 call 0x12aac310 */
  push32(0x12aac2ebu); f_12aac310();
  /* 12aac2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac2ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aac2f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac2f4 push edx */
  push32((uint32_t)(EDX));
  /* 12aac2f5 call 0x12aab8b0 */
  push32(0x12aac2fau); f_12aab8b0();
  /* 12aac2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac2fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aac300:;
  /* 12aac300 mov esp, ebp */
  ESP = (EBP);
  /* 12aac302 pop ebp */
  EBP = (pop32());
  /* 12aac303 ret  */
  ESPCHK(0x12aac2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x12aac310 (65 bytes, 26 insns) */
void f_12aac310(void) {
  FTRACE(0x12aac310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac310 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac311 mov ebp, esp */
  EBP = (ESP);
  /* 12aac313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac316 push eax */
  push32((uint32_t)(EAX));
  /* 12aac317 call 0x12aac360 */
  push32(0x12aac31cu); f_12aac360();
  /* 12aac31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac31f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac321 je 0x12aac328 */
  if (C.zf) goto L_12aac328;
  /* 12aac323 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aac326 jmp 0x12aac34f */
  goto L_12aac34f;
L_12aac328:;
  /* 12aac328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac32b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aac32e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12aac334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aac336 je 0x12aac34d */
  if (C.zf) goto L_12aac34d;
  /* 12aac338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac33b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aac33e push ecx */
  push32((uint32_t)(ECX));
  /* 12aac33f call 0x12aad120 */
  push32(0x12aac344u); f_12aad120();
  /* 12aac344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac347 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aac349 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac34b jmp 0x12aac34f */
  goto L_12aac34f;
L_12aac34d:;
  /* 12aac34d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aac34f:;
  /* 12aac34f pop ebp */
  EBP = (pop32());
  /* 12aac350 ret  */
  ESPCHK(0x12aac310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x12aac360 (183 bytes, 62 insns) */
void f_12aac360(void) {
  FTRACE(0x12aac360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac360 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac361 mov ebp, esp */
  EBP = (ESP);
  /* 12aac363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac366 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aac36d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac370 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aac373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac376 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aac379 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aac37c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac37f jne 0x12aac3fb */
  if (!C.zf) goto L_12aac3fb;
  /* 12aac381 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac384 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aac387 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12aac38d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aac38f je 0x12aac3fb */
  if (C.zf) goto L_12aac3fb;
  /* 12aac391 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac394 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac397 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12aac399 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac39c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aac39f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac3a3 jle 0x12aac3fb */
  if ((C.zf||C.sf!=C.of)) goto L_12aac3fb;
  /* 12aac3a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac3a8 push edx */
  push32((uint32_t)(EDX));
  /* 12aac3a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aac3af push ecx */
  push32((uint32_t)(ECX));
  /* 12aac3b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aac3b6 push eax */
  push32((uint32_t)(EAX));
  /* 12aac3b7 call 0x12aab2d0 */
  push32(0x12aac3bcu); f_12aab2d0();
  /* 12aac3bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac3bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac3c2 jne 0x12aac3e5 */
  if (!C.zf) goto L_12aac3e5;
  /* 12aac3c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aac3ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12aac3d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aac3d2 je 0x12aac3e3 */
  if (C.zf) goto L_12aac3e3;
  /* 12aac3d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aac3da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12aac3dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12aac3e3:;
  /* 12aac3e3 jmp 0x12aac3fb */
  goto L_12aac3fb;
L_12aac3e5:;
  /* 12aac3e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aac3eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12aac3ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12aac3f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aac3fb:;
  /* 12aac3fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac3fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac401 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aac404 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aac406 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aac409 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12aac410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac413 mov esp, ebp */
  ESP = (EBP);
  /* 12aac415 pop ebp */
  EBP = (pop32());
  /* 12aac416 ret  */
  ESPCHK(0x12aac360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x12aac420 (15 bytes, 7 insns) */
void f_12aac420(void) {
  FTRACE(0x12aac420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac420 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac421 mov ebp, esp */
  EBP = (ESP);
  /* 12aac423 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aac425 call 0x12aac430 */
  push32(0x12aac42au); f_12aac430();
  /* 12aac42a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac42d pop ebp */
  EBP = (pop32());
  /* 12aac42e ret  */
  ESPCHK(0x12aac420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x12aac430 (319 bytes, 94 insns) */
void f_12aac430(void) {
  FTRACE(0x12aac430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac430 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac431 mov ebp, esp */
  EBP = (ESP);
  /* 12aac433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aac43d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aac444 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac446 call 0x12aa6430 */
  push32(0x12aac44bu); f_12aa6430();
  /* 12aac44b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac44e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aac455 jmp 0x12aac460 */
  goto L_12aac460;
L_12aac457:;
  /* 12aac457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac45a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac45d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aac460:;
  /* 12aac460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac463 cmp ecx, dword ptr [0x12acfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac469 jge 0x12aac553 */
  if ((C.sf==C.of)) goto L_12aac553;
  /* 12aac46f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac472 mov eax, dword ptr [0x12ace818] */
  EAX = (r32((uint32_t)(0x12ace818)));
  /* 12aac477 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac47b je 0x12aac54e */
  if (C.zf) goto L_12aac54e;
  /* 12aac481 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac484 mov edx, dword ptr [0x12ace818] */
  EDX = (r32((uint32_t)(0x12ace818)));
  /* 12aac48a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12aac48d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aac490 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12aac496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aac498 je 0x12aac54e */
  if (C.zf) goto L_12aac54e;
  /* 12aac49e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac4a1 mov eax, dword ptr [0x12ace818] */
  EAX = (r32((uint32_t)(0x12ace818)));
  /* 12aac4a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aac4a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac4aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac4ad push edx */
  push32((uint32_t)(EDX));
  /* 12aac4ae call 0x12aab880 */
  push32(0x12aac4b3u); f_12aab880();
  /* 12aac4b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac4b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac4b9 mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac4bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aac4c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aac4c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12aac4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac4cc je 0x12aac535 */
  if (C.zf) goto L_12aac535;
  /* 12aac4ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac4d2 jne 0x12aac4f9 */
  if (!C.zf) goto L_12aac4f9;
  /* 12aac4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac4d7 mov edx, dword ptr [0x12ace818] */
  EDX = (r32((uint32_t)(0x12ace818)));
  /* 12aac4dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12aac4e0 push eax */
  push32((uint32_t)(EAX));
  /* 12aac4e1 call 0x12aac310 */
  push32(0x12aac4e6u); f_12aac310();
  /* 12aac4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac4e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac4ec je 0x12aac4f7 */
  if (C.zf) goto L_12aac4f7;
  /* 12aac4ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac4f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac4f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aac4f7:;
  /* 12aac4f7 jmp 0x12aac535 */
  goto L_12aac535;
L_12aac4f9:;
  /* 12aac4f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac4fd jne 0x12aac535 */
  if (!C.zf) goto L_12aac535;
  /* 12aac4ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac502 mov eax, dword ptr [0x12ace818] */
  EAX = (r32((uint32_t)(0x12ace818)));
  /* 12aac507 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12aac50a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aac50d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12aac510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aac512 je 0x12aac535 */
  if (C.zf) goto L_12aac535;
  /* 12aac514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac517 mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac51d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aac520 push edx */
  push32((uint32_t)(EDX));
  /* 12aac521 call 0x12aac310 */
  push32(0x12aac526u); f_12aac310();
  /* 12aac526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac529 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac52c jne 0x12aac535 */
  if (!C.zf) goto L_12aac535;
  /* 12aac52e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12aac535:;
  /* 12aac535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac538 mov ecx, dword ptr [0x12ace818] */
  ECX = (r32((uint32_t)(0x12ace818)));
  /* 12aac53e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12aac541 push edx */
  push32((uint32_t)(EDX));
  /* 12aac542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac545 push eax */
  push32((uint32_t)(EAX));
  /* 12aac546 call 0x12aab8f0 */
  push32(0x12aac54bu); f_12aab8f0();
  /* 12aac54b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aac54e:;
  /* 12aac54e jmp 0x12aac457 */
  goto L_12aac457;
L_12aac553:;
  /* 12aac553 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac555 call 0x12aa64d0 */
  push32(0x12aac55au); f_12aa64d0();
  /* 12aac55a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac55d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac561 jne 0x12aac568 */
  if (!C.zf) goto L_12aac568;
  /* 12aac563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aac566 jmp 0x12aac56b */
  goto L_12aac56b;
L_12aac568:;
  /* 12aac568 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aac56b:;
  /* 12aac56b mov esp, ebp */
  ESP = (EBP);
  /* 12aac56d pop ebp */
  EBP = (pop32());
  /* 12aac56e ret  */
  ESPCHK(0x12aac430u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12aac570 (15 bytes, 7 insns) */
void f_12aac570(void) {
  FTRACE(0x12aac570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac570 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac571 mov ebp, esp */
  EBP = (ESP);
  /* 12aac573 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac575 call 0x12aa19a0 */
  push32(0x12aac57au); f_12aa19a0();
  /* 12aac57a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac57d pop ebp */
  EBP = (pop32());
  /* 12aac57e ret  */
  ESPCHK(0x12aac570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x12aac580 (1007 bytes, 269 insns) */
void f_12aac580(void) {
  FTRACE(0x12aac580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac580 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac581 mov ebp, esp */
  EBP = (ESP);
  /* 12aac583 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac589 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac58d jl 0x12aac595 */
  if ((C.sf!=C.of)) goto L_12aac595;
  /* 12aac58f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac593 jle 0x12aac59c */
  if ((C.zf||C.sf!=C.of)) goto L_12aac59c;
L_12aac595:;
  /* 12aac595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aac597 jmp 0x12aac96b */
  goto L_12aac96b;
L_12aac59c:;
  /* 12aac59c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aac59e call 0x12aa6430 */
  push32(0x12aac5a3u); f_12aa6430();
  /* 12aac5a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac5a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aac5ad mov eax, dword ptr [0x12ace804] */
  EAX = (r32((uint32_t)(0x12ace804)));
  /* 12aac5b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac5b5 mov dword ptr [0x12ace804], eax */
  w32((uint32_t)(0x12ace804), (EAX));
L_12aac5ba:;
  /* 12aac5ba cmp dword ptr [0x12ace814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac5c1 je 0x12aac5cd */
  if (C.zf) goto L_12aac5cd;
  /* 12aac5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aac5c5 call dword ptr [0x12ad0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0338))), 0x12aac5cbu);
  /* 12aac5cb jmp 0x12aac5ba */
  goto L_12aac5ba;
L_12aac5cd:;
  /* 12aac5cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac5d1 je 0x12aac611 */
  if (C.zf) goto L_12aac611;
  /* 12aac5d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac5d7 je 0x12aac5f1 */
  if (C.zf) goto L_12aac5f1;
  /* 12aac5d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac5dc push ecx */
  push32((uint32_t)(ECX));
  /* 12aac5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac5e0 push edx */
  push32((uint32_t)(EDX));
  /* 12aac5e1 call 0x12aac970 */
  push32(0x12aac5e6u); f_12aac970();
  /* 12aac5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac5e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12aac5ef jmp 0x12aac603 */
  goto L_12aac603;
L_12aac5f1:;
  /* 12aac5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac5f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac5f7 mov ecx, dword ptr [eax + 0x12acd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12acd4dc)));
  /* 12aac5fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12aac603:;
  /* 12aac603 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12aac609 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aac60c jmp 0x12aac94b */
  goto L_12aac94b;
L_12aac611:;
  /* 12aac611 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12aac618 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aac61f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac623 je 0x12aac943 */
  if (C.zf) goto L_12aac943;
  /* 12aac629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac62c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aac62f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac632 jne 0x12aac854 */
  if (!C.zf) goto L_12aac854;
  /* 12aac638 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac63b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12aac63f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac642 jne 0x12aac854 */
  if (!C.zf) goto L_12aac854;
  /* 12aac648 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac64b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12aac64f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac652 jne 0x12aac854 */
  if (!C.zf) goto L_12aac854;
  /* 12aac658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac65b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12aac661:;
  /* 12aac661 push 0x12ac9fac */
  push32((uint32_t)(0x12ac9facu));
  /* 12aac666 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12aac66c push ecx */
  push32((uint32_t)(ECX));
  /* 12aac66d call 0x12aae7d0 */
  push32(0x12aac672u); f_12aae7d0();
  /* 12aac672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac675 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12aac67b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac682 je 0x12aac6ad */
  if (C.zf) goto L_12aac6ad;
  /* 12aac684 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac68a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac690 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12aac696 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac69d je 0x12aac6ad */
  if (C.zf) goto L_12aac6ad;
  /* 12aac69f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac6a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aac6a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac6ab jne 0x12aac6d3 */
  if (!C.zf) goto L_12aac6d3;
L_12aac6ad:;
  /* 12aac6ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac6b1 je 0x12aac6cc */
  if (C.zf) goto L_12aac6cc;
  /* 12aac6b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aac6b5 call 0x12aa64d0 */
  push32(0x12aac6bau); f_12aa64d0();
  /* 12aac6ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac6bd mov edx, dword ptr [0x12ace804] */
  EDX = (r32((uint32_t)(0x12ace804)));
  /* 12aac6c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac6c6 mov dword ptr [0x12ace804], edx */
  w32((uint32_t)(0x12ace804), (EDX));
L_12aac6cc:;
  /* 12aac6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aac6ce jmp 0x12aac96b */
  goto L_12aac96b;
L_12aac6d3:;
  /* 12aac6d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12aac6da jmp 0x12aac6e5 */
  goto L_12aac6e5;
L_12aac6dc:;
  /* 12aac6dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac6df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac6e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12aac6e5:;
  /* 12aac6e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac6e9 jg 0x12aac733 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aac733;
  /* 12aac6eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12aac6f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac6f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12aac6f8 push edx */
  push32((uint32_t)(EDX));
  /* 12aac6f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac6fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac6ff mov ecx, dword ptr [eax + 0x12acd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12acd4d8)));
  /* 12aac705 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac706 call 0x12aae790 */
  push32(0x12aac70bu); f_12aae790();
  /* 12aac70b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac70e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac710 jne 0x12aac731 */
  if (!C.zf) goto L_12aac731;
  /* 12aac712 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac715 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac718 mov eax, dword ptr [edx + 0x12acd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12acd4d8)));
  /* 12aac71e push eax */
  push32((uint32_t)(EAX));
  /* 12aac71f call 0x12aa5860 */
  push32(0x12aac724u); f_12aa5860();
  /* 12aac724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac727 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac72d jne 0x12aac731 */
  if (!C.zf) goto L_12aac731;
  /* 12aac72f jmp 0x12aac733 */
  goto L_12aac733;
L_12aac731:;
  /* 12aac731 jmp 0x12aac6dc */
  goto L_12aac6dc;
L_12aac733:;
  /* 12aac733 push 0x12ac9fa8 */
  push32((uint32_t)(0x12ac9fa8u));
  /* 12aac738 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac73e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac741 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12aac747 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac74d push edx */
  push32((uint32_t)(EDX));
  /* 12aac74e call 0x12aae750 */
  push32(0x12aac753u); f_12aae750();
  /* 12aac753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac756 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12aac75c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac763 jne 0x12aac799 */
  if (!C.zf) goto L_12aac799;
  /* 12aac765 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac76b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aac76e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac771 je 0x12aac799 */
  if (C.zf) goto L_12aac799;
  /* 12aac773 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac777 je 0x12aac792 */
  if (C.zf) goto L_12aac792;
  /* 12aac779 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aac77b call 0x12aa64d0 */
  push32(0x12aac780u); f_12aa64d0();
  /* 12aac780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac783 mov edx, dword ptr [0x12ace804] */
  EDX = (r32((uint32_t)(0x12ace804)));
  /* 12aac789 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac78c mov dword ptr [0x12ace804], edx */
  w32((uint32_t)(0x12ace804), (EDX));
L_12aac792:;
  /* 12aac792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aac794 jmp 0x12aac96b */
  goto L_12aac96b;
L_12aac799:;
  /* 12aac799 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac79d jg 0x12aac7ea */
  if ((!C.zf&&C.sf==C.of)) goto L_12aac7ea;
  /* 12aac79f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12aac7a5 push eax */
  push32((uint32_t)(EAX));
  /* 12aac7a6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac7ac push ecx */
  push32((uint32_t)(ECX));
  /* 12aac7ad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12aac7b3 push edx */
  push32((uint32_t)(EDX));
  /* 12aac7b4 call 0x12aa6250 */
  push32(0x12aac7b9u); f_12aa6250();
  /* 12aac7b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac7bc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12aac7c2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12aac7ca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12aac7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac7d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac7d4 push edx */
  push32((uint32_t)(EDX));
  /* 12aac7d5 call 0x12aac970 */
  push32(0x12aac7dau); f_12aac970();
  /* 12aac7da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac7dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac7df je 0x12aac7ea */
  if (C.zf) goto L_12aac7ea;
  /* 12aac7e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac7e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac7e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aac7ea:;
  /* 12aac7ea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aac7f0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac7f6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12aac7fc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12aac802 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aac805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac807 je 0x12aac818 */
  if (C.zf) goto L_12aac818;
  /* 12aac809 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12aac80f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac812 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12aac818:;
  /* 12aac818 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12aac81e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aac821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac823 jne 0x12aac661 */
  if (!C.zf) goto L_12aac661;
  /* 12aac829 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac82d je 0x12aac83c */
  if (C.zf) goto L_12aac83c;
  /* 12aac82f call 0x12aacb10 */
  push32(0x12aac834u); f_12aacb10();
  /* 12aac834 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12aac83a jmp 0x12aac846 */
  goto L_12aac846;
L_12aac83c:;
  /* 12aac83c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12aac846:;
  /* 12aac846 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12aac84c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aac84f jmp 0x12aac941 */
  goto L_12aac941;
L_12aac854:;
  /* 12aac854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac857 push edx */
  push32((uint32_t)(EDX));
  /* 12aac858 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aac85a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aac85c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12aac862 push eax */
  push32((uint32_t)(EAX));
  /* 12aac863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac866 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac867 call 0x12aacc10 */
  push32(0x12aac86cu); f_12aacc10();
  /* 12aac86c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac86f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aac872 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac876 je 0x12aac941 */
  if (C.zf) goto L_12aac941;
  /* 12aac87c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aac883 jmp 0x12aac88e */
  goto L_12aac88e;
L_12aac885:;
  /* 12aac885 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac888 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac88b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12aac88e:;
  /* 12aac88e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac892 jg 0x12aac8f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aac8f0;
  /* 12aac894 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac898 je 0x12aac8ee */
  if (C.zf) goto L_12aac8ee;
  /* 12aac89a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac89d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac8a0 mov ecx, dword ptr [eax + 0x12acd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12acd4dc)));
  /* 12aac8a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac8a7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12aac8ad push edx */
  push32((uint32_t)(EDX));
  /* 12aac8ae call 0x12aae6c0 */
  push32(0x12aac8b3u); f_12aae6c0();
  /* 12aac8b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac8b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac8b8 je 0x12aac8e5 */
  if (C.zf) goto L_12aac8e5;
  /* 12aac8ba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12aac8c0 push eax */
  push32((uint32_t)(EAX));
  /* 12aac8c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aac8c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac8c5 call 0x12aac970 */
  push32(0x12aac8cau); f_12aac970();
  /* 12aac8ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac8cf je 0x12aac8dc */
  if (C.zf) goto L_12aac8dc;
  /* 12aac8d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac8d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac8d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aac8da jmp 0x12aac8e3 */
  goto L_12aac8e3;
L_12aac8dc:;
  /* 12aac8dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12aac8e3:;
  /* 12aac8e3 jmp 0x12aac8ee */
  goto L_12aac8ee;
L_12aac8e5:;
  /* 12aac8e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aac8e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac8eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aac8ee:;
  /* 12aac8ee jmp 0x12aac885 */
  goto L_12aac885;
L_12aac8f0:;
  /* 12aac8f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac8f4 je 0x12aac91b */
  if (C.zf) goto L_12aac91b;
  /* 12aac8f6 call 0x12aacb10 */
  push32(0x12aac8fbu); f_12aacb10();
  /* 12aac8fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aac8fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac900 mov ecx, dword ptr [0x12acd4dc] */
  ECX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aac906 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac907 call 0x12aa34c0 */
  push32(0x12aac90cu); f_12aa34c0();
  /* 12aac90c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac90f mov dword ptr [0x12acd4dc], 0 */
  w32((uint32_t)(0x12acd4dc), (0x0u));
  /* 12aac919 jmp 0x12aac941 */
  goto L_12aac941;
L_12aac91b:;
  /* 12aac91b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac91f je 0x12aac92e */
  if (C.zf) goto L_12aac92e;
  /* 12aac921 call 0x12aacb10 */
  push32(0x12aac926u); f_12aacb10();
  /* 12aac926 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12aac92c jmp 0x12aac938 */
  goto L_12aac938;
L_12aac92e:;
  /* 12aac92e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12aac938:;
  /* 12aac938 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12aac93e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aac941:;
  /* 12aac941 jmp 0x12aac94b */
  goto L_12aac94b;
L_12aac943:;
  /* 12aac943 call 0x12aacb10 */
  push32(0x12aac948u); f_12aacb10();
  /* 12aac948 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aac94b:;
  /* 12aac94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac94f je 0x12aac968 */
  if (C.zf) goto L_12aac968;
  /* 12aac951 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12aac953 call 0x12aa64d0 */
  push32(0x12aac958u); f_12aa64d0();
  /* 12aac958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac95b mov eax, dword ptr [0x12ace804] */
  EAX = (r32((uint32_t)(0x12ace804)));
  /* 12aac960 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac963 mov dword ptr [0x12ace804], eax */
  w32((uint32_t)(0x12ace804), (EAX));
L_12aac968:;
  /* 12aac968 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aac96b:;
  /* 12aac96b mov esp, ebp */
  ESP = (EBP);
  /* 12aac96d pop ebp */
  EBP = (pop32());
  /* 12aac96e ret  */
  ESPCHK(0x12aac580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x12aac970 (403 bytes, 117 insns) */
void f_12aac970(void) {
  FTRACE(0x12aac970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aac970 push ebp */
  push32((uint32_t)(EBP));
  /* 12aac971 mov ebp, esp */
  EBP = (ESP);
  /* 12aac973 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aac979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac97c push eax */
  push32((uint32_t)(EAX));
  /* 12aac97d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12aac983 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac984 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12aac98a push edx */
  push32((uint32_t)(EDX));
  /* 12aac98b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12aac991 push eax */
  push32((uint32_t)(EAX));
  /* 12aac992 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aac995 push ecx */
  push32((uint32_t)(ECX));
  /* 12aac996 call 0x12aacc10 */
  push32(0x12aac99bu); f_12aacc10();
  /* 12aac99b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aac9a0 jne 0x12aac9a9 */
  if (!C.zf) goto L_12aac9a9;
  /* 12aac9a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aac9a4 jmp 0x12aacaff */
  goto L_12aacaff;
L_12aac9a9:;
  /* 12aac9a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12aac9ae push 0x12ac9fb0 */
  push32((uint32_t)(0x12ac9fb0u));
  /* 12aac9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aac9b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12aac9bb push edx */
  push32((uint32_t)(EDX));
  /* 12aac9bc call 0x12aa5860 */
  push32(0x12aac9c1u); f_12aa5860();
  /* 12aac9c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac9c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac9c7 push eax */
  push32((uint32_t)(EAX));
  /* 12aac9c8 call 0x12aa2a30 */
  push32(0x12aac9cdu); f_12aa2a30();
  /* 12aac9cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aac9d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aac9d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aac9d7 jne 0x12aac9e0 */
  if (!C.zf) goto L_12aac9e0;
  /* 12aac9d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aac9db jmp 0x12aacaff */
  goto L_12aacaff;
L_12aac9e0:;
  /* 12aac9e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac9e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aac9e6 mov ecx, dword ptr [eax + 0x12acd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12acd4dc)));
  /* 12aac9ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aac9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aac9f2 mov eax, dword ptr [edx*4 + 0x12ace680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ace680)));
  /* 12aac9f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aac9fc push 6 */
  push32((uint32_t)(0x6u));
  /* 12aac9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaca01 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaca04 add ecx, 0x12ace6d0 */
  { uint32_t _a=(ECX),_b=(0x12ace6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaca0a push ecx */
  push32((uint32_t)(ECX));
  /* 12aaca0b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12aaca0e push edx */
  push32((uint32_t)(EDX));
  /* 12aaca0f call 0x12aa9310 */
  push32(0x12aaca14u); f_12aa9310();
  /* 12aaca14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaca17 mov eax, dword ptr [0x12ace698] */
  EAX = (r32((uint32_t)(0x12ace698)));
  /* 12aaca1c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aaca1f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12aaca25 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaca26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaca29 push edx */
  push32((uint32_t)(EDX));
  /* 12aaca2a call 0x12aa59e0 */
  push32(0x12aaca2fu); f_12aa59e0();
  /* 12aaca2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaca32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaca35 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaca38 mov dword ptr [ecx + 0x12acd4dc], eax */
  w32((uint32_t)(ECX + 0x12acd4dc), (EAX));
  /* 12aaca3e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12aaca44 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aaca4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaca4d mov dword ptr [eax*4 + 0x12ace680], edx */
  w32((uint32_t)(EAX*4 + 0x12ace680), (EDX));
  /* 12aaca54 push 6 */
  push32((uint32_t)(0x6u));
  /* 12aaca56 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12aaca5c push ecx */
  push32((uint32_t)(ECX));
  /* 12aaca5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaca60 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaca63 add edx, 0x12ace6d0 */
  { uint32_t _a=(EDX),_b=(0x12ace6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaca69 push edx */
  push32((uint32_t)(EDX));
  /* 12aaca6a call 0x12aa9310 */
  push32(0x12aaca6fu); f_12aa9310();
  /* 12aaca6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaca72 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaca76 jne 0x12aaca83 */
  if (!C.zf) goto L_12aaca83;
  /* 12aaca78 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aaca7e mov dword ptr [0x12ace698], eax */
  w32((uint32_t)(0x12ace698), (EAX));
L_12aaca83:;
  /* 12aaca83 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaca87 jne 0x12aaca95 */
  if (!C.zf) goto L_12aaca95;
  /* 12aaca89 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12aaca8f mov dword ptr [0x12ace69c], ecx */
  w32((uint32_t)(0x12ace69c), (ECX));
L_12aaca95:;
  /* 12aaca95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaca98 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaca9b call dword ptr [edx + 0x12acd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12acd4e0))), 0x12aacaa1u);
  /* 12aacaa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacaa3 je 0x12aacadc */
  if (C.zf) goto L_12aacadc;
  /* 12aacaa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacaa8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacaab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aacaae mov dword ptr [eax + 0x12acd4dc], ecx */
  w32((uint32_t)(EAX + 0x12acd4dc), (ECX));
  /* 12aacab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacab6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aacab9 push edx */
  push32((uint32_t)(EDX));
  /* 12aacaba call 0x12aa34c0 */
  push32(0x12aacabfu); f_12aa34c0();
  /* 12aacabf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacac5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacac8 mov dword ptr [eax*4 + 0x12ace680], ecx */
  w32((uint32_t)(EAX*4 + 0x12ace680), (ECX));
  /* 12aacacf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aacad2 mov dword ptr [0x12ace698], edx */
  w32((uint32_t)(0x12ace698), (EDX));
  /* 12aacad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aacada jmp 0x12aacaff */
  goto L_12aacaff;
L_12aacadc:;
  /* 12aacadc cmp dword ptr [ebp - 0xc], 0x12acd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12acd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacae3 je 0x12aacaf3 */
  if (C.zf) goto L_12aacaf3;
  /* 12aacae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aacaea push eax */
  push32((uint32_t)(EAX));
  /* 12aacaeb call 0x12aa34c0 */
  push32(0x12aacaf0u); f_12aa34c0();
  /* 12aacaf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacaf3:;
  /* 12aacaf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacaf6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacaf9 mov eax, dword ptr [ecx + 0x12acd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12acd4dc)));
L_12aacaff:;
  /* 12aacaff mov esp, ebp */
  ESP = (EBP);
  /* 12aacb01 pop ebp */
  EBP = (pop32());
  /* 12aacb02 ret  */
  ESPCHK(0x12aac970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x12aacb10 (256 bytes, 72 insns) */
void f_12aacb10(void) {
  FTRACE(0x12aacb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacb10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacb11 mov ebp, esp */
  EBP = (ESP);
  /* 12aacb13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aacb16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12aacb1d cmp dword ptr [0x12acd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacb24 jne 0x12aacb44 */
  if (!C.zf) goto L_12aacb44;
  /* 12aacb26 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12aacb2b push 0x12ac9fb0 */
  push32((uint32_t)(0x12ac9fb0u));
  /* 12aacb30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacb32 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12aacb37 call 0x12aa2a30 */
  push32(0x12aacb3cu); f_12aa2a30();
  /* 12aacb3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacb3f mov dword ptr [0x12acd4dc], eax */
  w32((uint32_t)(0x12acd4dc), (EAX));
L_12aacb44:;
  /* 12aacb44 mov eax, dword ptr [0x12acd4dc] */
  EAX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aacb49 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aacb4c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aacb53 jmp 0x12aacb5e */
  goto L_12aacb5e;
L_12aacb55:;
  /* 12aacb55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacb58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacb5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aacb5e:;
  /* 12aacb5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacb61 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacb64 mov eax, dword ptr [edx + 0x12acd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12acd4dc)));
  /* 12aacb6a push eax */
  push32((uint32_t)(EAX));
  /* 12aacb6b push 0x12ac9fbc */
  push32((uint32_t)(0x12ac9fbcu));
  /* 12aacb70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacb73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacb76 mov edx, dword ptr [ecx + 0x12acd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12acd4d8)));
  /* 12aacb7c push edx */
  push32((uint32_t)(EDX));
  /* 12aacb7d push 3 */
  push32((uint32_t)(0x3u));
  /* 12aacb7f mov eax, dword ptr [0x12acd4dc] */
  EAX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aacb84 push eax */
  push32((uint32_t)(EAX));
  /* 12aacb85 call 0x12aacdb0 */
  push32(0x12aacb8au); f_12aacdb0();
  /* 12aacb8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacb8d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacb91 jge 0x12aacbd9 */
  if ((C.sf==C.of)) goto L_12aacbd9;
  /* 12aacb93 push 0x12ac9fa8 */
  push32((uint32_t)(0x12ac9fa8u));
  /* 12aacb98 mov ecx, dword ptr [0x12acd4dc] */
  ECX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aacb9e push ecx */
  push32((uint32_t)(ECX));
  /* 12aacb9f call 0x12aa59f0 */
  push32(0x12aacba4u); f_12aa59f0();
  /* 12aacba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacba7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacbaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacbad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacbb0 mov eax, dword ptr [edx + 0x12acd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12acd4dc)));
  /* 12aacbb6 push eax */
  push32((uint32_t)(EAX));
  /* 12aacbb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacbba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aacbbd mov edx, dword ptr [ecx + 0x12acd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12acd4dc)));
  /* 12aacbc3 push edx */
  push32((uint32_t)(EDX));
  /* 12aacbc4 call 0x12aae6c0 */
  push32(0x12aacbc9u); f_12aae6c0();
  /* 12aacbc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacbcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacbce je 0x12aacbd7 */
  if (C.zf) goto L_12aacbd7;
  /* 12aacbd0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12aacbd7:;
  /* 12aacbd7 jmp 0x12aacc07 */
  goto L_12aacc07;
L_12aacbd9:;
  /* 12aacbd9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacbdd jne 0x12aacbe6 */
  if (!C.zf) goto L_12aacbe6;
  /* 12aacbdf mov eax, dword ptr [0x12acd4dc] */
  EAX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aacbe4 jmp 0x12aacc0c */
  goto L_12aacc0c;
L_12aacbe6:;
  /* 12aacbe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacbe8 mov eax, dword ptr [0x12acd4dc] */
  EAX = (r32((uint32_t)(0x12acd4dc)));
  /* 12aacbed push eax */
  push32((uint32_t)(EAX));
  /* 12aacbee call 0x12aa34c0 */
  push32(0x12aacbf3u); f_12aa34c0();
  /* 12aacbf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacbf6 mov dword ptr [0x12acd4dc], 0 */
  w32((uint32_t)(0x12acd4dc), (0x0u));
  /* 12aacc00 mov eax, dword ptr [0x12acd4f4] */
  EAX = (r32((uint32_t)(0x12acd4f4)));
  /* 12aacc05 jmp 0x12aacc0c */
  goto L_12aacc0c;
L_12aacc07:;
  /* 12aacc07 jmp 0x12aacb55 */
  goto L_12aacb55;
L_12aacc0c:;
  /* 12aacc0c mov esp, ebp */
  ESP = (EBP);
  /* 12aacc0e pop ebp */
  EBP = (pop32());
  /* 12aacc0f ret  */
  ESPCHK(0x12aacb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x12aacc10 (388 bytes, 115 insns) */
void f_12aacc10(void) {
  FTRACE(0x12aacc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacc10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacc11 mov ebp, esp */
  EBP = (ESP);
  /* 12aacc13 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aacc19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacc1d jne 0x12aacc26 */
  if (!C.zf) goto L_12aacc26;
  /* 12aacc1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aacc21 jmp 0x12aacd90 */
  goto L_12aacd90;
L_12aacc26:;
  /* 12aacc26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacc29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aacc2c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacc2f jne 0x12aacc80 */
  if (!C.zf) goto L_12aacc80;
  /* 12aacc31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacc34 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12aacc38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacc3a jne 0x12aacc80 */
  if (!C.zf) goto L_12aacc80;
  /* 12aacc3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacc3f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12aacc42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacc45 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12aacc49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacc4d je 0x12aacc69 */
  if (C.zf) goto L_12aacc69;
  /* 12aacc4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aacc52 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12aacc57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aacc5a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12aacc60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aacc63 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12aacc69:;
  /* 12aacc69 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacc6d je 0x12aacc78 */
  if (C.zf) goto L_12aacc78;
  /* 12aacc6f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aacc72 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12aacc78:;
  /* 12aacc78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacc7b jmp 0x12aacd90 */
  goto L_12aacd90;
L_12aacc80:;
  /* 12aacc80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacc83 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacc84 push 0x12acd450 */
  push32((uint32_t)(0x12acd450u));
  /* 12aacc89 call 0x12aae6c0 */
  push32(0x12aacc8eu); f_12aae6c0();
  /* 12aacc8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacc91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacc93 je 0x12aacd48 */
  if (C.zf) goto L_12aacd48;
  /* 12aacc99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacc9c push edx */
  push32((uint32_t)(EDX));
  /* 12aacc9d push 0x12acd3cc */
  push32((uint32_t)(0x12acd3ccu));
  /* 12aacca2 call 0x12aae6c0 */
  push32(0x12aacca7u); f_12aae6c0();
  /* 12aacca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaccaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaccac je 0x12aacd48 */
  if (C.zf) goto L_12aacd48;
  /* 12aaccb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaccb5 push eax */
  push32((uint32_t)(EAX));
  /* 12aaccb6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12aaccbc push ecx */
  push32((uint32_t)(ECX));
  /* 12aaccbd call 0x12aace00 */
  push32(0x12aaccc2u); f_12aace00();
  /* 12aaccc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaccc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaccc7 je 0x12aaccd0 */
  if (C.zf) goto L_12aaccd0;
  /* 12aaccc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aacccb jmp 0x12aacd90 */
  goto L_12aacd90;
L_12aaccd0:;
  /* 12aaccd0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12aaccd6 push edx */
  push32((uint32_t)(EDX));
  /* 12aaccd7 push 0x12ace6a8 */
  push32((uint32_t)(0x12ace6a8u));
  /* 12aaccdc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12aacce2 push eax */
  push32((uint32_t)(EAX));
  /* 12aacce3 call 0x12aae810 */
  push32(0x12aacce8u); f_12aae810();
  /* 12aacce8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacced jne 0x12aaccf6 */
  if (!C.zf) goto L_12aaccf6;
  /* 12aaccef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaccf1 jmp 0x12aacd90 */
  goto L_12aacd90;
L_12aaccf6:;
  /* 12aaccf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaccf8 mov cx, word ptr [0x12ace6ac] */
  CX = (r16((uint32_t)(0x12ace6ac)));
  /* 12aaccff mov dword ptr [0x12ace6b0], ecx */
  w32((uint32_t)(0x12ace6b0), (ECX));
  /* 12aacd05 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12aacd0b push edx */
  push32((uint32_t)(EDX));
  /* 12aacd0c push 0x12acd450 */
  push32((uint32_t)(0x12acd450u));
  /* 12aacd11 call 0x12aacf60 */
  push32(0x12aacd16u); f_12aacf60();
  /* 12aacd16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacd19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacd1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aacd1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aacd21 je 0x12aacd36 */
  if (C.zf) goto L_12aacd36;
  /* 12aacd23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacd26 push edx */
  push32((uint32_t)(EDX));
  /* 12aacd27 push 0x12acd3cc */
  push32((uint32_t)(0x12acd3ccu));
  /* 12aacd2c call 0x12aa59e0 */
  push32(0x12aacd31u); f_12aa59e0();
  /* 12aacd31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacd34 jmp 0x12aacd48 */
  goto L_12aacd48;
L_12aacd36:;
  /* 12aacd36 push 0x12acd450 */
  push32((uint32_t)(0x12acd450u));
  /* 12aacd3b push 0x12acd3cc */
  push32((uint32_t)(0x12acd3ccu));
  /* 12aacd40 call 0x12aa59e0 */
  push32(0x12aacd45u); f_12aa59e0();
  /* 12aacd45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacd48:;
  /* 12aacd48 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacd4c je 0x12aacd61 */
  if (C.zf) goto L_12aacd61;
  /* 12aacd4e push 6 */
  push32((uint32_t)(0x6u));
  /* 12aacd50 push 0x12ace6a8 */
  push32((uint32_t)(0x12ace6a8u));
  /* 12aacd55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aacd58 push eax */
  push32((uint32_t)(EAX));
  /* 12aacd59 call 0x12aa9310 */
  push32(0x12aacd5eu); f_12aa9310();
  /* 12aacd5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacd61:;
  /* 12aacd61 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacd65 je 0x12aacd7a */
  if (C.zf) goto L_12aacd7a;
  /* 12aacd67 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aacd69 push 0x12ace6b0 */
  push32((uint32_t)(0x12ace6b0u));
  /* 12aacd6e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aacd71 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacd72 call 0x12aa9310 */
  push32(0x12aacd77u); f_12aa9310();
  /* 12aacd77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacd7a:;
  /* 12aacd7a push 0x12acd450 */
  push32((uint32_t)(0x12acd450u));
  /* 12aacd7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacd82 push edx */
  push32((uint32_t)(EDX));
  /* 12aacd83 call 0x12aa59e0 */
  push32(0x12aacd88u); f_12aa59e0();
  /* 12aacd88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacd8b mov eax, 0x12acd450 */
  EAX = (0x12acd450u);
L_12aacd90:;
  /* 12aacd90 mov esp, ebp */
  ESP = (EBP);
  /* 12aacd92 pop ebp */
  EBP = (pop32());
  /* 12aacd93 ret  */
  ESPCHK(0x12aacc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cda0 @ 0x12aacda0 (7 bytes, 5 insns) */
void f_12aacda0(void) {
  FTRACE(0x12aacda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacda0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacda1 mov ebp, esp */
  EBP = (ESP);
  /* 12aacda3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aacda5 pop ebp */
  EBP = (pop32());
  /* 12aacda6 ret  */
  ESPCHK(0x12aacda0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12aacdb0 (79 bytes, 28 insns) */
void f_12aacdb0(void) {
  FTRACE(0x12aacdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacdb1 mov ebp, esp */
  EBP = (ESP);
  /* 12aacdb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aacdb6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12aacdb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aacdbc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aacdc3 jmp 0x12aacdce */
  goto L_12aacdce;
L_12aacdc5:;
  /* 12aacdc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aacdc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacdcb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aacdce:;
  /* 12aacdce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aacdd1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacdd4 jge 0x12aacdf4 */
  if ((C.sf==C.of)) goto L_12aacdf4;
  /* 12aacdd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacdd9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacddc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aacddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aacde2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aacde5 push edx */
  push32((uint32_t)(EDX));
  /* 12aacde6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacde9 push eax */
  push32((uint32_t)(EAX));
  /* 12aacdea call 0x12aa59f0 */
  push32(0x12aacdefu); f_12aa59f0();
  /* 12aacdef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacdf2 jmp 0x12aacdc5 */
  goto L_12aacdc5;
L_12aacdf4:;
  /* 12aacdf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aacdfb mov esp, ebp */
  ESP = (EBP);
  /* 12aacdfd pop ebp */
  EBP = (pop32());
  /* 12aacdfe ret  */
  ESPCHK(0x12aacdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x12aace00 (349 bytes, 122 insns) */
void f_12aace00(void) {
  FTRACE(0x12aace00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aace00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aace01 mov ebp, esp */
  EBP = (ESP);
  /* 12aace03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aace06 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12aace0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aace0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aace10 push eax */
  push32((uint32_t)(EAX));
  /* 12aace11 call 0x12aa67a0 */
  push32(0x12aace16u); f_12aa67a0();
  /* 12aace16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aace1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aace21 jne 0x12aace2a */
  if (!C.zf) goto L_12aace2a;
  /* 12aace23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aace25 jmp 0x12aacf59 */
  goto L_12aacf59;
L_12aace2a:;
  /* 12aace2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aace30 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aace33 jne 0x12aace60 */
  if (!C.zf) goto L_12aace60;
  /* 12aace35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace38 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12aace3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aace3e je 0x12aace60 */
  if (C.zf) goto L_12aace60;
  /* 12aace40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace46 push ecx */
  push32((uint32_t)(ECX));
  /* 12aace47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aace4a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace50 push edx */
  push32((uint32_t)(EDX));
  /* 12aace51 call 0x12aa59e0 */
  push32(0x12aace56u); f_12aa59e0();
  /* 12aace56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aace5b jmp 0x12aacf59 */
  goto L_12aacf59;
L_12aace60:;
  /* 12aace60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aace67 jmp 0x12aace72 */
  goto L_12aace72;
L_12aace69:;
  /* 12aace69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aace6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aace72:;
  /* 12aace72 push 0x12ac9fc0 */
  push32((uint32_t)(0x12ac9fc0u));
  /* 12aace77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace7a push ecx */
  push32((uint32_t)(ECX));
  /* 12aace7b call 0x12aae750 */
  push32(0x12aace80u); f_12aae750();
  /* 12aace80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace83 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aace86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aace8a jne 0x12aace94 */
  if (!C.zf) goto L_12aace94;
  /* 12aace8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aace8f jmp 0x12aacf59 */
  goto L_12aacf59;
L_12aace94:;
  /* 12aace94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aace97 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aace9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aace9c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12aace9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacea3 jne 0x12aaceca */
  if (!C.zf) goto L_12aaceca;
  /* 12aacea5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacea9 jge 0x12aaceca */
  if ((C.sf==C.of)) goto L_12aaceca;
  /* 12aaceab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaceaf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaceb2 je 0x12aaceca */
  if (C.zf) goto L_12aaceca;
  /* 12aaceb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaceb7 push edx */
  push32((uint32_t)(EDX));
  /* 12aaceb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacebb push eax */
  push32((uint32_t)(EAX));
  /* 12aacebc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacebf push ecx */
  push32((uint32_t)(ECX));
  /* 12aacec0 call 0x12aa6250 */
  push32(0x12aacec5u); f_12aa6250();
  /* 12aacec5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacec8 jmp 0x12aacf30 */
  goto L_12aacf30;
L_12aaceca:;
  /* 12aaceca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacece jne 0x12aacef8 */
  if (!C.zf) goto L_12aacef8;
  /* 12aaced0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaced4 jge 0x12aacef8 */
  if ((C.sf==C.of)) goto L_12aacef8;
  /* 12aaced6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaceda cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacedd je 0x12aacef8 */
  if (C.zf) goto L_12aacef8;
  /* 12aacedf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aacee2 push eax */
  push32((uint32_t)(EAX));
  /* 12aacee3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacee6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacee7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaceea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaceed push edx */
  push32((uint32_t)(EDX));
  /* 12aaceee call 0x12aa6250 */
  push32(0x12aacef3u); f_12aa6250();
  /* 12aacef3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacef6 jmp 0x12aacf30 */
  goto L_12aacf30;
L_12aacef8:;
  /* 12aacef8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacefc jne 0x12aacf2b */
  if (!C.zf) goto L_12aacf2b;
  /* 12aacefe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aacf02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacf04 je 0x12aacf0f */
  if (C.zf) goto L_12aacf0f;
  /* 12aacf06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aacf0a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacf0d jne 0x12aacf2b */
  if (!C.zf) goto L_12aacf2b;
L_12aacf0f:;
  /* 12aacf0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aacf12 push edx */
  push32((uint32_t)(EDX));
  /* 12aacf13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf16 push eax */
  push32((uint32_t)(EAX));
  /* 12aacf17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacf1a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacf20 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacf21 call 0x12aa6250 */
  push32(0x12aacf26u); f_12aa6250();
  /* 12aacf26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacf29 jmp 0x12aacf30 */
  goto L_12aacf30;
L_12aacf2b:;
  /* 12aacf2b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aacf2e jmp 0x12aacf59 */
  goto L_12aacf59;
L_12aacf30:;
  /* 12aacf30 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aacf34 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacf37 jne 0x12aacf3b */
  if (!C.zf) goto L_12aacf3b;
  /* 12aacf39 jmp 0x12aacf57 */
  goto L_12aacf57;
L_12aacf3b:;
  /* 12aacf3b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aacf3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacf41 jne 0x12aacf45 */
  if (!C.zf) goto L_12aacf45;
  /* 12aacf43 jmp 0x12aacf57 */
  goto L_12aacf57;
L_12aacf45:;
  /* 12aacf45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aacf48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf4b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12aacf4f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12aacf52 jmp 0x12aace69 */
  goto L_12aace69;
L_12aacf57:;
  /* 12aacf57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aacf59:;
  /* 12aacf59 mov esp, ebp */
  ESP = (EBP);
  /* 12aacf5b pop ebp */
  EBP = (pop32());
  /* 12aacf5c ret  */
  ESPCHK(0x12aace00u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12aacf60 (101 bytes, 36 insns) */
void f_12aacf60(void) {
  FTRACE(0x12aacf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacf60 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacf61 mov ebp, esp */
  EBP = (ESP);
  /* 12aacf63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf66 push eax */
  push32((uint32_t)(EAX));
  /* 12aacf67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacf6a push ecx */
  push32((uint32_t)(ECX));
  /* 12aacf6b call 0x12aa59e0 */
  push32(0x12aacf70u); f_12aa59e0();
  /* 12aacf70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacf73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf76 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12aacf7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aacf7c je 0x12aacf98 */
  if (C.zf) goto L_12aacf98;
  /* 12aacf7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf81 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacf84 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacf85 push 0x12ac9fc8 */
  push32((uint32_t)(0x12ac9fc8u));
  /* 12aacf8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacf8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacf8f push edx */
  push32((uint32_t)(EDX));
  /* 12aacf90 call 0x12aacdb0 */
  push32(0x12aacf95u); f_12aacdb0();
  /* 12aacf95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacf98:;
  /* 12aacf98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacf9b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12aacfa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aacfa4 je 0x12aacfc3 */
  if (C.zf) goto L_12aacfc3;
  /* 12aacfa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aacfa9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacfaf push edx */
  push32((uint32_t)(EDX));
  /* 12aacfb0 push 0x12ac9fc4 */
  push32((uint32_t)(0x12ac9fc4u));
  /* 12aacfb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacfb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aacfba push eax */
  push32((uint32_t)(EAX));
  /* 12aacfbb call 0x12aacdb0 */
  push32(0x12aacfc0u); f_12aacdb0();
  /* 12aacfc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aacfc3:;
  /* 12aacfc3 pop ebp */
  EBP = (pop32());
  /* 12aacfc4 ret  */
  ESPCHK(0x12aacf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfd0 @ 0x12aacfd0 (130 bytes, 50 insns) */
void f_12aacfd0(void) {
  FTRACE(0x12aacfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aacfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aacfd1 mov ebp, esp */
  EBP = (ESP);
  /* 12aacfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aacfd4 push ebx */
  push32((uint32_t)(EBX));
  /* 12aacfd5 push esi */
  push32((uint32_t)(ESI));
  /* 12aacfd6 push edi */
  push32((uint32_t)(EDI));
  /* 12aacfd7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aacfde:;
  /* 12aacfde cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacfe2 jne 0x12aad002 */
  if (!C.zf) goto L_12aad002;
  /* 12aacfe4 push 0x12ac9fd8 */
  push32((uint32_t)(0x12ac9fd8u));
  /* 12aacfe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aacfeb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12aacfed push 0x12ac9fcc */
  push32((uint32_t)(0x12ac9fccu));
  /* 12aacff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aacff4 call 0x12aa1af0 */
  push32(0x12aacff9u); f_12aa1af0();
  /* 12aacff9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aacffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aacfff jne 0x12aad002 */
  if (!C.zf) goto L_12aad002;
  /* 12aad001 int3  */
  x86_unimpl("int3 @ 0x12aad001");
L_12aad002:;
  /* 12aad002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aad004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad006 jne 0x12aacfde */
  if (!C.zf) goto L_12aacfde;
  /* 12aad008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad00b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aad00e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12aad011 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aad013 je 0x12aad021 */
  if (C.zf) goto L_12aad021;
  /* 12aad015 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad018 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12aad01f jmp 0x12aad048 */
  goto L_12aad048;
L_12aad021:;
  /* 12aad021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad024 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad025 call 0x12aab840 */
  push32(0x12aad02au); f_12aab840();
  /* 12aad02a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad02d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad030 push edx */
  push32((uint32_t)(EDX));
  /* 12aad031 call 0x12aad060 */
  push32(0x12aad036u); f_12aad060();
  /* 12aad036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aad03c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad03f push eax */
  push32((uint32_t)(EAX));
  /* 12aad040 call 0x12aab8b0 */
  push32(0x12aad045u); f_12aab8b0();
  /* 12aad045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aad048:;
  /* 12aad048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad04b pop edi */
  EDI = (pop32());
  /* 12aad04c pop esi */
  ESI = (pop32());
  /* 12aad04d pop ebx */
  EBX = (pop32());
  /* 12aad04e mov esp, ebp */
  ESP = (EBP);
  /* 12aad050 pop ebp */
  EBP = (pop32());
  /* 12aad051 ret  */
  ESPCHK(0x12aacfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x12aad060 (190 bytes, 67 insns) */
void f_12aad060(void) {
  FTRACE(0x12aad060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aad060 push ebp */
  push32((uint32_t)(EBP));
  /* 12aad061 mov ebp, esp */
  EBP = (ESP);
  /* 12aad063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aad066 push ebx */
  push32((uint32_t)(EBX));
  /* 12aad067 push esi */
  push32((uint32_t)(ESI));
  /* 12aad068 push edi */
  push32((uint32_t)(EDI));
  /* 12aad069 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12aad070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad073 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aad076:;
  /* 12aad076 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad07a jne 0x12aad09a */
  if (!C.zf) goto L_12aad09a;
  /* 12aad07c push 0x12ac9e7c */
  push32((uint32_t)(0x12ac9e7cu));
  /* 12aad081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aad083 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12aad085 push 0x12ac9fcc */
  push32((uint32_t)(0x12ac9fccu));
  /* 12aad08a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad08c call 0x12aa1af0 */
  push32(0x12aad091u); f_12aa1af0();
  /* 12aad091 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad094 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad097 jne 0x12aad09a */
  if (!C.zf) goto L_12aad09a;
  /* 12aad099 int3  */
  x86_unimpl("int3 @ 0x12aad099");
L_12aad09a:;
  /* 12aad09a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad09c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aad09e jne 0x12aad076 */
  if (!C.zf) goto L_12aad076;
  /* 12aad0a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aad0a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12aad0ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad0ad je 0x12aad10a */
  if (C.zf) goto L_12aad10a;
  /* 12aad0af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad0b3 call 0x12aac360 */
  push32(0x12aad0b8u); f_12aac360();
  /* 12aad0b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad0bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aad0be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0c1 push edx */
  push32((uint32_t)(EDX));
  /* 12aad0c2 call 0x12aaf6e0 */
  push32(0x12aad0c7u); f_12aaf6e0();
  /* 12aad0c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad0ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aad0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad0d1 call 0x12aaf5b0 */
  push32(0x12aad0d6u); f_12aaf5b0();
  /* 12aad0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad0db jge 0x12aad0e6 */
  if ((C.sf==C.of)) goto L_12aad0e6;
  /* 12aad0dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12aad0e4 jmp 0x12aad10a */
  goto L_12aad10a;
L_12aad0e6:;
  /* 12aad0e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad0ed je 0x12aad10a */
  if (C.zf) goto L_12aad10a;
  /* 12aad0ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad0f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad0f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12aad0f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad0f8 call 0x12aa34c0 */
  push32(0x12aad0fdu); f_12aa34c0();
  /* 12aad0fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad103 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12aad10a:;
  /* 12aad10a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad10d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12aad114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad117 pop edi */
  EDI = (pop32());
  /* 12aad118 pop esi */
  ESI = (pop32());
  /* 12aad119 pop ebx */
  EBX = (pop32());
  /* 12aad11a mov esp, ebp */
  ESP = (EBP);
  /* 12aad11c pop ebp */
  EBP = (pop32());
  /* 12aad11d ret  */
  ESPCHK(0x12aad060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x12aad120 (210 bytes, 63 insns) */
void f_12aad120(void) {
  FTRACE(0x12aad120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aad120 push ebp */
  push32((uint32_t)(EBP));
  /* 12aad121 mov ebp, esp */
  EBP = (ESP);
  /* 12aad123 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad127 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad12d jae 0x12aad151 */
  if (!C.cf) goto L_12aad151;
  /* 12aad12f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad132 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aad135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad138 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aad13b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aad13e mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aad145 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aad14a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aad14d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aad14f jne 0x12aad164 */
  if (!C.zf) goto L_12aad164;
L_12aad151:;
  /* 12aad151 call 0x12aaa900 */
  push32(0x12aad156u); f_12aaa900();
  /* 12aad156 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aad15c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aad15f jmp 0x12aad1ee */
  goto L_12aad1ee;
L_12aad164:;
  /* 12aad164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad167 push edx */
  push32((uint32_t)(EDX));
  /* 12aad168 call 0x12aac120 */
  push32(0x12aad16du); f_12aac120();
  /* 12aad16d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad173 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aad176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad179 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aad17c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aad17f mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aad186 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12aad18b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12aad18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad190 je 0x12aad1cd */
  if (C.zf) goto L_12aad1cd;
  /* 12aad192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad195 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad196 call 0x12aabfa0 */
  push32(0x12aad19bu); f_12aabfa0();
  /* 12aad19b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad19e push eax */
  push32((uint32_t)(EAX));
  /* 12aad19f call dword ptr [0x12ad033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad033c))), 0x12aad1a5u);
  /* 12aad1a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad1a7 jne 0x12aad1b4 */
  if (!C.zf) goto L_12aad1b4;
  /* 12aad1a9 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aad1afu);
  /* 12aad1af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aad1b2 jmp 0x12aad1bb */
  goto L_12aad1bb;
L_12aad1b4:;
  /* 12aad1b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aad1bb:;
  /* 12aad1bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad1bf jne 0x12aad1c3 */
  if (!C.zf) goto L_12aad1c3;
  /* 12aad1c1 jmp 0x12aad1df */
  goto L_12aad1df;
L_12aad1c3:;
  /* 12aad1c3 call 0x12aaa910 */
  push32(0x12aad1c8u); f_12aaa910();
  /* 12aad1c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad1cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aad1cd:;
  /* 12aad1cd call 0x12aaa900 */
  push32(0x12aad1d2u); f_12aaa900();
  /* 12aad1d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aad1d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12aad1df:;
  /* 12aad1df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad1e2 push eax */
  push32((uint32_t)(EAX));
  /* 12aad1e3 call 0x12aac1b0 */
  push32(0x12aad1e8u); f_12aac1b0();
  /* 12aad1e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aad1ee:;
  /* 12aad1ee mov esp, ebp */
  ESP = (EBP);
  /* 12aad1f0 pop ebp */
  EBP = (pop32());
  /* 12aad1f1 ret  */
  ESPCHK(0x12aad120u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12aad200 (219 bytes, 64 insns) */
void f_12aad200(void) {
  FTRACE(0x12aad200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aad200 push ebp */
  push32((uint32_t)(EBP));
  /* 12aad201 mov ebp, esp */
  EBP = (ESP);
  /* 12aad203 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad204 cmp dword ptr [0x12ace694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad20b je 0x12aad2a1 */
  if (C.zf) goto L_12aad2a1;
  /* 12aad211 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12aad213 push 0x12ac9fe8 */
  push32((uint32_t)(0x12ac9fe8u));
  /* 12aad218 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad21a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12aad21f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad221 call 0x12aa2e40 */
  push32(0x12aad226u); f_12aa2e40();
  /* 12aad226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aad22c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad230 jne 0x12aad23c */
  if (!C.zf) goto L_12aad23c;
  /* 12aad232 mov eax, 1 */
  EAX = (0x1u);
  /* 12aad237 jmp 0x12aad2d7 */
  goto L_12aad2d7;
L_12aad23c:;
  /* 12aad23c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad23f push eax */
  push32((uint32_t)(EAX));
  /* 12aad240 call 0x12aad2e0 */
  push32(0x12aad245u); f_12aad2e0();
  /* 12aad245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aad24a je 0x12aad26d */
  if (C.zf) goto L_12aad26d;
  /* 12aad24c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad24f push ecx */
  push32((uint32_t)(ECX));
  /* 12aad250 call 0x12aad870 */
  push32(0x12aad255u); f_12aad870();
  /* 12aad255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad258 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad25a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad25d push edx */
  push32((uint32_t)(EDX));
  /* 12aad25e call 0x12aa34c0 */
  push32(0x12aad263u); f_12aa34c0();
  /* 12aad263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad266 mov eax, 1 */
  EAX = (0x1u);
  /* 12aad26b jmp 0x12aad2d7 */
  goto L_12aad2d7;
L_12aad26d:;
  /* 12aad26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad270 mov dword ptr [0x12acdc98], eax */
  w32((uint32_t)(0x12acdc98), (EAX));
  /* 12aad275 mov ecx, dword ptr [0x12ace6b4] */
  ECX = (r32((uint32_t)(0x12ace6b4)));
  /* 12aad27b push ecx */
  push32((uint32_t)(ECX));
  /* 12aad27c call 0x12aad870 */
  push32(0x12aad281u); f_12aad870();
  /* 12aad281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad284 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad286 mov edx, dword ptr [0x12ace6b4] */
  EDX = (r32((uint32_t)(0x12ace6b4)));
  /* 12aad28c push edx */
  push32((uint32_t)(EDX));
  /* 12aad28d call 0x12aa34c0 */
  push32(0x12aad292u); f_12aa34c0();
  /* 12aad292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad298 mov dword ptr [0x12ace6b4], eax */
  w32((uint32_t)(0x12ace6b4), (EAX));
  /* 12aad29d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aad29f jmp 0x12aad2d7 */
  goto L_12aad2d7;
L_12aad2a1:;
  /* 12aad2a1 mov dword ptr [0x12acdc98], 0x12acdca0 */
  w32((uint32_t)(0x12acdc98), (0x12acdca0u));
  /* 12aad2ab mov ecx, dword ptr [0x12ace6b4] */
  ECX = (r32((uint32_t)(0x12ace6b4)));
  /* 12aad2b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad2b2 call 0x12aad870 */
  push32(0x12aad2b7u); f_12aad870();
  /* 12aad2b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad2ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad2bc mov edx, dword ptr [0x12ace6b4] */
  EDX = (r32((uint32_t)(0x12ace6b4)));
  /* 12aad2c2 push edx */
  push32((uint32_t)(EDX));
  /* 12aad2c3 call 0x12aa34c0 */
  push32(0x12aad2c8u); f_12aa34c0();
  /* 12aad2c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad2cb mov dword ptr [0x12ace6b4], 0 */
  w32((uint32_t)(0x12ace6b4), (0x0u));
  /* 12aad2d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aad2d7:;
  /* 12aad2d7 mov esp, ebp */
  ESP = (EBP);
  /* 12aad2d9 pop ebp */
  EBP = (pop32());
  /* 12aad2da ret  */
  ESPCHK(0x12aad200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x12aad2e0 (1423 bytes, 533 insns) */
void f_12aad2e0(void) {
  FTRACE(0x12aad2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aad2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aad2e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aad2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aad2e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aad2ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aad2ef mov ax, word ptr [0x12ace6ee] */
  AX = (r16((uint32_t)(0x12ace6ee)));
  /* 12aad2f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aad2f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad2fa mov cx, word ptr [0x12ace6f0] */
  CX = (r16((uint32_t)(0x12ace6f0)));
  /* 12aad301 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aad304 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad308 jne 0x12aad312 */
  if (!C.zf) goto L_12aad312;
  /* 12aad30a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aad30d jmp 0x12aad86b */
  goto L_12aad86b;
L_12aad312:;
  /* 12aad312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad315 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad318 push edx */
  push32((uint32_t)(EDX));
  /* 12aad319 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12aad31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad31e push eax */
  push32((uint32_t)(EAX));
  /* 12aad31f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad321 call 0x12ab0bf0 */
  push32(0x12aad326u); f_12ab0bf0();
  /* 12aad326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad329 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad32c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad32e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad334 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad337 push edx */
  push32((uint32_t)(EDX));
  /* 12aad338 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12aad33a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad33d push eax */
  push32((uint32_t)(EAX));
  /* 12aad33e push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad340 call 0x12ab0bf0 */
  push32(0x12aad345u); f_12ab0bf0();
  /* 12aad345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad348 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad34b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad34d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad353 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad356 push edx */
  push32((uint32_t)(EDX));
  /* 12aad357 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12aad359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad35c push eax */
  push32((uint32_t)(EAX));
  /* 12aad35d push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad35f call 0x12ab0bf0 */
  push32(0x12aad364u); f_12ab0bf0();
  /* 12aad364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad36a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad372 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad375 push edx */
  push32((uint32_t)(EDX));
  /* 12aad376 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12aad378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad37b push eax */
  push32((uint32_t)(EAX));
  /* 12aad37c push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad37e call 0x12ab0bf0 */
  push32(0x12aad383u); f_12ab0bf0();
  /* 12aad383 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad389 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad38b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad38e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad391 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad394 push edx */
  push32((uint32_t)(EDX));
  /* 12aad395 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12aad397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad39a push eax */
  push32((uint32_t)(EAX));
  /* 12aad39b push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad39d call 0x12ab0bf0 */
  push32(0x12aad3a2u); f_12ab0bf0();
  /* 12aad3a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad3a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad3aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad3ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad3b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3b3 push edx */
  push32((uint32_t)(EDX));
  /* 12aad3b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12aad3b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad3b9 push eax */
  push32((uint32_t)(EAX));
  /* 12aad3ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad3bc call 0x12ab0bf0 */
  push32(0x12aad3c1u); f_12ab0bf0();
  /* 12aad3c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad3c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad3c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad3cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad3cf push edx */
  push32((uint32_t)(EDX));
  /* 12aad3d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12aad3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad3d5 push eax */
  push32((uint32_t)(EAX));
  /* 12aad3d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad3d8 call 0x12ab0bf0 */
  push32(0x12aad3ddu); f_12ab0bf0();
  /* 12aad3dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad3e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad3e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad3e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad3eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3ee push edx */
  push32((uint32_t)(EDX));
  /* 12aad3ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12aad3f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad3f4 push eax */
  push32((uint32_t)(EAX));
  /* 12aad3f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad3f7 call 0x12ab0bf0 */
  push32(0x12aad3fcu); f_12ab0bf0();
  /* 12aad3fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad3ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad402 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad404 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad40a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad40d push edx */
  push32((uint32_t)(EDX));
  /* 12aad40e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12aad410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad413 push eax */
  push32((uint32_t)(EAX));
  /* 12aad414 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad416 call 0x12ab0bf0 */
  push32(0x12aad41bu); f_12ab0bf0();
  /* 12aad41b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad41e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad421 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad423 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad429 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad42c push edx */
  push32((uint32_t)(EDX));
  /* 12aad42d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12aad42f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad432 push eax */
  push32((uint32_t)(EAX));
  /* 12aad433 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad435 call 0x12ab0bf0 */
  push32(0x12aad43au); f_12ab0bf0();
  /* 12aad43a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad43d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad440 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad442 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad448 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad44b push edx */
  push32((uint32_t)(EDX));
  /* 12aad44c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12aad44e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad451 push eax */
  push32((uint32_t)(EAX));
  /* 12aad452 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad454 call 0x12ab0bf0 */
  push32(0x12aad459u); f_12ab0bf0();
  /* 12aad459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad45c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad45f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad461 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad467 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad46a push edx */
  push32((uint32_t)(EDX));
  /* 12aad46b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12aad46d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad470 push eax */
  push32((uint32_t)(EAX));
  /* 12aad471 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad473 call 0x12ab0bf0 */
  push32(0x12aad478u); f_12ab0bf0();
  /* 12aad478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad47b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad47e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad480 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad486 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad489 push edx */
  push32((uint32_t)(EDX));
  /* 12aad48a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12aad48c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad48f push eax */
  push32((uint32_t)(EAX));
  /* 12aad490 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad492 call 0x12ab0bf0 */
  push32(0x12aad497u); f_12ab0bf0();
  /* 12aad497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad49a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad49d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad49f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad4a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad4a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4a8 push edx */
  push32((uint32_t)(EDX));
  /* 12aad4a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12aad4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad4ae push eax */
  push32((uint32_t)(EAX));
  /* 12aad4af push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad4b1 call 0x12ab0bf0 */
  push32(0x12aad4b6u); f_12ab0bf0();
  /* 12aad4b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad4bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad4be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad4c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad4c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4c7 push edx */
  push32((uint32_t)(EDX));
  /* 12aad4c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12aad4ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad4cd push eax */
  push32((uint32_t)(EAX));
  /* 12aad4ce push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad4d0 call 0x12ab0bf0 */
  push32(0x12aad4d5u); f_12ab0bf0();
  /* 12aad4d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad4db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad4dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad4e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad4e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4e6 push edx */
  push32((uint32_t)(EDX));
  /* 12aad4e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12aad4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad4ec push eax */
  push32((uint32_t)(EAX));
  /* 12aad4ed push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad4ef call 0x12ab0bf0 */
  push32(0x12aad4f4u); f_12ab0bf0();
  /* 12aad4f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad4f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad4fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad4fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad502 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad505 push edx */
  push32((uint32_t)(EDX));
  /* 12aad506 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12aad508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad50b push eax */
  push32((uint32_t)(EAX));
  /* 12aad50c push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad50e call 0x12ab0bf0 */
  push32(0x12aad513u); f_12ab0bf0();
  /* 12aad513 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad516 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad519 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad51b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad521 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad524 push edx */
  push32((uint32_t)(EDX));
  /* 12aad525 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12aad527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad52a push eax */
  push32((uint32_t)(EAX));
  /* 12aad52b push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad52d call 0x12ab0bf0 */
  push32(0x12aad532u); f_12ab0bf0();
  /* 12aad532 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad538 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad53a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad53d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad540 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad543 push edx */
  push32((uint32_t)(EDX));
  /* 12aad544 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12aad546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad549 push eax */
  push32((uint32_t)(EAX));
  /* 12aad54a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad54c call 0x12ab0bf0 */
  push32(0x12aad551u); f_12ab0bf0();
  /* 12aad551 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad554 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad557 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad559 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad55c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad55f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad562 push edx */
  push32((uint32_t)(EDX));
  /* 12aad563 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12aad565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad568 push eax */
  push32((uint32_t)(EAX));
  /* 12aad569 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad56b call 0x12ab0bf0 */
  push32(0x12aad570u); f_12ab0bf0();
  /* 12aad570 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad573 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad576 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad578 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad57b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad57e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad581 push edx */
  push32((uint32_t)(EDX));
  /* 12aad582 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12aad584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad587 push eax */
  push32((uint32_t)(EAX));
  /* 12aad588 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad58a call 0x12ab0bf0 */
  push32(0x12aad58fu); f_12ab0bf0();
  /* 12aad58f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad592 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad595 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad597 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad59a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad59d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5a0 push edx */
  push32((uint32_t)(EDX));
  /* 12aad5a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12aad5a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad5a6 push eax */
  push32((uint32_t)(EAX));
  /* 12aad5a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad5a9 call 0x12ab0bf0 */
  push32(0x12aad5aeu); f_12ab0bf0();
  /* 12aad5ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad5b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad5b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad5b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad5bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5bf push edx */
  push32((uint32_t)(EDX));
  /* 12aad5c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12aad5c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad5c5 push eax */
  push32((uint32_t)(EAX));
  /* 12aad5c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad5c8 call 0x12ab0bf0 */
  push32(0x12aad5cdu); f_12ab0bf0();
  /* 12aad5cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad5d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad5d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad5d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad5db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5de push edx */
  push32((uint32_t)(EDX));
  /* 12aad5df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12aad5e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad5e4 push eax */
  push32((uint32_t)(EAX));
  /* 12aad5e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad5e7 call 0x12ab0bf0 */
  push32(0x12aad5ecu); f_12ab0bf0();
  /* 12aad5ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad5f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad5f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad5f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad5fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad5fd push edx */
  push32((uint32_t)(EDX));
  /* 12aad5fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12aad600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad603 push eax */
  push32((uint32_t)(EAX));
  /* 12aad604 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad606 call 0x12ab0bf0 */
  push32(0x12aad60bu); f_12ab0bf0();
  /* 12aad60b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad60e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad611 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad613 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad616 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad619 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad61c push edx */
  push32((uint32_t)(EDX));
  /* 12aad61d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12aad61f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad622 push eax */
  push32((uint32_t)(EAX));
  /* 12aad623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad625 call 0x12ab0bf0 */
  push32(0x12aad62au); f_12ab0bf0();
  /* 12aad62a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad62d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad630 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad632 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad638 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad63b push edx */
  push32((uint32_t)(EDX));
  /* 12aad63c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12aad63e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad641 push eax */
  push32((uint32_t)(EAX));
  /* 12aad642 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad644 call 0x12ab0bf0 */
  push32(0x12aad649u); f_12ab0bf0();
  /* 12aad649 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad64c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad64f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad651 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad657 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad65a push edx */
  push32((uint32_t)(EDX));
  /* 12aad65b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12aad65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad660 push eax */
  push32((uint32_t)(EAX));
  /* 12aad661 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad663 call 0x12ab0bf0 */
  push32(0x12aad668u); f_12ab0bf0();
  /* 12aad668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad66b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad66e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad670 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad676 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad679 push edx */
  push32((uint32_t)(EDX));
  /* 12aad67a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12aad67c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad67f push eax */
  push32((uint32_t)(EAX));
  /* 12aad680 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad682 call 0x12ab0bf0 */
  push32(0x12aad687u); f_12ab0bf0();
  /* 12aad687 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad68a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad68d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad68f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad695 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad698 push edx */
  push32((uint32_t)(EDX));
  /* 12aad699 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12aad69b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad69e push eax */
  push32((uint32_t)(EAX));
  /* 12aad69f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad6a1 call 0x12ab0bf0 */
  push32(0x12aad6a6u); f_12ab0bf0();
  /* 12aad6a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad6ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad6ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad6b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6b7 push edx */
  push32((uint32_t)(EDX));
  /* 12aad6b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12aad6ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad6bd push eax */
  push32((uint32_t)(EAX));
  /* 12aad6be push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad6c0 call 0x12ab0bf0 */
  push32(0x12aad6c5u); f_12ab0bf0();
  /* 12aad6c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad6cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad6cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad6d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad6d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6d6 push edx */
  push32((uint32_t)(EDX));
  /* 12aad6d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12aad6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad6dc push eax */
  push32((uint32_t)(EAX));
  /* 12aad6dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad6df call 0x12ab0bf0 */
  push32(0x12aad6e4u); f_12ab0bf0();
  /* 12aad6e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad6ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad6ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad6f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad6f8 push edx */
  push32((uint32_t)(EDX));
  /* 12aad6f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12aad6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad6fe push eax */
  push32((uint32_t)(EAX));
  /* 12aad6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad701 call 0x12ab0bf0 */
  push32(0x12aad706u); f_12ab0bf0();
  /* 12aad706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad714 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad71a push edx */
  push32((uint32_t)(EDX));
  /* 12aad71b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12aad71d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad720 push eax */
  push32((uint32_t)(EAX));
  /* 12aad721 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad723 call 0x12ab0bf0 */
  push32(0x12aad728u); f_12ab0bf0();
  /* 12aad728 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad72b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad72e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad730 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad736 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad73c push edx */
  push32((uint32_t)(EDX));
  /* 12aad73d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12aad73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad742 push eax */
  push32((uint32_t)(EAX));
  /* 12aad743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad745 call 0x12ab0bf0 */
  push32(0x12aad74au); f_12ab0bf0();
  /* 12aad74a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad74d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad750 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad752 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad758 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad75e push edx */
  push32((uint32_t)(EDX));
  /* 12aad75f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12aad761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad764 push eax */
  push32((uint32_t)(EAX));
  /* 12aad765 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad767 call 0x12ab0bf0 */
  push32(0x12aad76cu); f_12ab0bf0();
  /* 12aad76c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad76f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad772 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad774 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad77a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad780 push edx */
  push32((uint32_t)(EDX));
  /* 12aad781 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12aad783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad786 push eax */
  push32((uint32_t)(EAX));
  /* 12aad787 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad789 call 0x12ab0bf0 */
  push32(0x12aad78eu); f_12ab0bf0();
  /* 12aad78e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad791 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad794 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad796 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad79c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7a2 push edx */
  push32((uint32_t)(EDX));
  /* 12aad7a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12aad7a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad7a8 push eax */
  push32((uint32_t)(EAX));
  /* 12aad7a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad7ab call 0x12ab0bf0 */
  push32(0x12aad7b0u); f_12ab0bf0();
  /* 12aad7b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad7b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad7b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad7bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad7be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7c4 push edx */
  push32((uint32_t)(EDX));
  /* 12aad7c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12aad7c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad7ca push eax */
  push32((uint32_t)(EAX));
  /* 12aad7cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad7cd call 0x12ab0bf0 */
  push32(0x12aad7d2u); f_12ab0bf0();
  /* 12aad7d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad7d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad7da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad7dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad7e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7e6 push edx */
  push32((uint32_t)(EDX));
  /* 12aad7e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12aad7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aad7ec push eax */
  push32((uint32_t)(EAX));
  /* 12aad7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad7ef call 0x12ab0bf0 */
  push32(0x12aad7f4u); f_12ab0bf0();
  /* 12aad7f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad7f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad7fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad7fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad802 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad808 push edx */
  push32((uint32_t)(EDX));
  /* 12aad809 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12aad80b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad80e push eax */
  push32((uint32_t)(EAX));
  /* 12aad80f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad811 call 0x12ab0bf0 */
  push32(0x12aad816u); f_12ab0bf0();
  /* 12aad816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad81c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad81e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad824 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad82a push edx */
  push32((uint32_t)(EDX));
  /* 12aad82b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12aad82d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad830 push eax */
  push32((uint32_t)(EAX));
  /* 12aad831 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad833 call 0x12ab0bf0 */
  push32(0x12aad838u); f_12ab0bf0();
  /* 12aad838 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad83b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad83e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad840 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad846 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad84c push edx */
  push32((uint32_t)(EDX));
  /* 12aad84d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12aad852 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aad855 push eax */
  push32((uint32_t)(EAX));
  /* 12aad856 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aad858 call 0x12ab0bf0 */
  push32(0x12aad85du); f_12ab0bf0();
  /* 12aad85d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad860 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aad863 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aad865 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aad868 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12aad86b:;
  /* 12aad86b mov esp, ebp */
  ESP = (EBP);
  /* 12aad86d pop ebp */
  EBP = (pop32());
  /* 12aad86e ret  */
  ESPCHK(0x12aad2e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12aad870 (779 bytes, 265 insns) */
void f_12aad870(void) {
  FTRACE(0x12aad870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aad870 push ebp */
  push32((uint32_t)(EBP));
  /* 12aad871 mov ebp, esp */
  EBP = (ESP);
  /* 12aad873 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aad877 jne 0x12aad87e */
  if (!C.zf) goto L_12aad87e;
  /* 12aad879 jmp 0x12aadb79 */
  goto L_12aadb79;
L_12aad87e:;
  /* 12aad87e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad883 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aad886 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad887 call 0x12aa34c0 */
  push32(0x12aad88cu); f_12aa34c0();
  /* 12aad88c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad88f push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad894 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aad897 push eax */
  push32((uint32_t)(EAX));
  /* 12aad898 call 0x12aa34c0 */
  push32(0x12aad89du); f_12aa34c0();
  /* 12aad89d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aad8a8 push edx */
  push32((uint32_t)(EDX));
  /* 12aad8a9 call 0x12aa34c0 */
  push32(0x12aad8aeu); f_12aa34c0();
  /* 12aad8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aad8b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad8ba call 0x12aa34c0 */
  push32(0x12aad8bfu); f_12aa34c0();
  /* 12aad8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aad8ca push eax */
  push32((uint32_t)(EAX));
  /* 12aad8cb call 0x12aa34c0 */
  push32(0x12aad8d0u); f_12aa34c0();
  /* 12aad8d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aad8db push edx */
  push32((uint32_t)(EDX));
  /* 12aad8dc call 0x12aa34c0 */
  push32(0x12aad8e1u); f_12aa34c0();
  /* 12aad8e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aad8eb push ecx */
  push32((uint32_t)(ECX));
  /* 12aad8ec call 0x12aa34c0 */
  push32(0x12aad8f1u); f_12aa34c0();
  /* 12aad8f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad8f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad8f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad8f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12aad8fc push eax */
  push32((uint32_t)(EAX));
  /* 12aad8fd call 0x12aa34c0 */
  push32(0x12aad902u); f_12aa34c0();
  /* 12aad902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad905 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad90a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12aad90d push edx */
  push32((uint32_t)(EDX));
  /* 12aad90e call 0x12aa34c0 */
  push32(0x12aad913u); f_12aa34c0();
  /* 12aad913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad91b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12aad91e push ecx */
  push32((uint32_t)(ECX));
  /* 12aad91f call 0x12aa34c0 */
  push32(0x12aad924u); f_12aa34c0();
  /* 12aad924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad927 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad92c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12aad92f push eax */
  push32((uint32_t)(EAX));
  /* 12aad930 call 0x12aa34c0 */
  push32(0x12aad935u); f_12aa34c0();
  /* 12aad935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad938 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad93a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad93d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12aad940 push edx */
  push32((uint32_t)(EDX));
  /* 12aad941 call 0x12aa34c0 */
  push32(0x12aad946u); f_12aa34c0();
  /* 12aad946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad949 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad94b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad94e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12aad951 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad952 call 0x12aa34c0 */
  push32(0x12aad957u); f_12aa34c0();
  /* 12aad957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad95a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad95c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad95f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12aad962 push eax */
  push32((uint32_t)(EAX));
  /* 12aad963 call 0x12aa34c0 */
  push32(0x12aad968u); f_12aa34c0();
  /* 12aad968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad96b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad96d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad970 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12aad973 push edx */
  push32((uint32_t)(EDX));
  /* 12aad974 call 0x12aa34c0 */
  push32(0x12aad979u); f_12aa34c0();
  /* 12aad979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad97c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad97e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad981 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12aad984 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad985 call 0x12aa34c0 */
  push32(0x12aad98au); f_12aa34c0();
  /* 12aad98a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad98d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad98f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad992 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12aad995 push eax */
  push32((uint32_t)(EAX));
  /* 12aad996 call 0x12aa34c0 */
  push32(0x12aad99bu); f_12aa34c0();
  /* 12aad99b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad99e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12aad9a6 push edx */
  push32((uint32_t)(EDX));
  /* 12aad9a7 call 0x12aa34c0 */
  push32(0x12aad9acu); f_12aa34c0();
  /* 12aad9ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad9af push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12aad9b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aad9b8 call 0x12aa34c0 */
  push32(0x12aad9bdu); f_12aa34c0();
  /* 12aad9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad9c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12aad9c8 push eax */
  push32((uint32_t)(EAX));
  /* 12aad9c9 call 0x12aa34c0 */
  push32(0x12aad9ceu); f_12aa34c0();
  /* 12aad9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12aad9d9 push edx */
  push32((uint32_t)(EDX));
  /* 12aad9da call 0x12aa34c0 */
  push32(0x12aad9dfu); f_12aa34c0();
  /* 12aad9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12aad9ea push ecx */
  push32((uint32_t)(ECX));
  /* 12aad9eb call 0x12aa34c0 */
  push32(0x12aad9f0u); f_12aa34c0();
  /* 12aad9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aad9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aad9f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aad9f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12aad9fb push eax */
  push32((uint32_t)(EAX));
  /* 12aad9fc call 0x12aa34c0 */
  push32(0x12aada01u); f_12aa34c0();
  /* 12aada01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada09 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12aada0c push edx */
  push32((uint32_t)(EDX));
  /* 12aada0d call 0x12aa34c0 */
  push32(0x12aada12u); f_12aa34c0();
  /* 12aada12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada1a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12aada1d push ecx */
  push32((uint32_t)(ECX));
  /* 12aada1e call 0x12aa34c0 */
  push32(0x12aada23u); f_12aa34c0();
  /* 12aada23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada2b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12aada2e push eax */
  push32((uint32_t)(EAX));
  /* 12aada2f call 0x12aa34c0 */
  push32(0x12aada34u); f_12aa34c0();
  /* 12aada34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada3c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12aada3f push edx */
  push32((uint32_t)(EDX));
  /* 12aada40 call 0x12aa34c0 */
  push32(0x12aada45u); f_12aa34c0();
  /* 12aada45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada4d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12aada50 push ecx */
  push32((uint32_t)(ECX));
  /* 12aada51 call 0x12aa34c0 */
  push32(0x12aada56u); f_12aa34c0();
  /* 12aada56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada5e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12aada61 push eax */
  push32((uint32_t)(EAX));
  /* 12aada62 call 0x12aa34c0 */
  push32(0x12aada67u); f_12aa34c0();
  /* 12aada67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada6a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada6f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12aada72 push edx */
  push32((uint32_t)(EDX));
  /* 12aada73 call 0x12aa34c0 */
  push32(0x12aada78u); f_12aa34c0();
  /* 12aada78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada80 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12aada83 push ecx */
  push32((uint32_t)(ECX));
  /* 12aada84 call 0x12aa34c0 */
  push32(0x12aada89u); f_12aa34c0();
  /* 12aada89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aada91 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12aada94 push eax */
  push32((uint32_t)(EAX));
  /* 12aada95 call 0x12aa34c0 */
  push32(0x12aada9au); f_12aa34c0();
  /* 12aada9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aada9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aada9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadaa2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12aadaa8 push edx */
  push32((uint32_t)(EDX));
  /* 12aadaa9 call 0x12aa34c0 */
  push32(0x12aadaaeu); f_12aa34c0();
  /* 12aadaae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadab6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12aadabc push ecx */
  push32((uint32_t)(ECX));
  /* 12aadabd call 0x12aa34c0 */
  push32(0x12aadac2u); f_12aa34c0();
  /* 12aadac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadaca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12aadad0 push eax */
  push32((uint32_t)(EAX));
  /* 12aadad1 call 0x12aa34c0 */
  push32(0x12aadad6u); f_12aa34c0();
  /* 12aadad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadad9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadadb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadade mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12aadae4 push edx */
  push32((uint32_t)(EDX));
  /* 12aadae5 call 0x12aa34c0 */
  push32(0x12aadaeau); f_12aa34c0();
  /* 12aadaea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadaed push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadaef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadaf2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12aadaf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadaf9 call 0x12aa34c0 */
  push32(0x12aadafeu); f_12aa34c0();
  /* 12aadafe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb06 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12aadb0c push eax */
  push32((uint32_t)(EAX));
  /* 12aadb0d call 0x12aa34c0 */
  push32(0x12aadb12u); f_12aa34c0();
  /* 12aadb12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb1a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12aadb20 push edx */
  push32((uint32_t)(EDX));
  /* 12aadb21 call 0x12aa34c0 */
  push32(0x12aadb26u); f_12aa34c0();
  /* 12aadb26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb2e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12aadb34 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadb35 call 0x12aa34c0 */
  push32(0x12aadb3au); f_12aa34c0();
  /* 12aadb3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb42 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12aadb48 push eax */
  push32((uint32_t)(EAX));
  /* 12aadb49 call 0x12aa34c0 */
  push32(0x12aadb4eu); f_12aa34c0();
  /* 12aadb4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb56 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12aadb5c push edx */
  push32((uint32_t)(EDX));
  /* 12aadb5d call 0x12aa34c0 */
  push32(0x12aadb62u); f_12aa34c0();
  /* 12aadb62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadb65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadb67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadb6a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12aadb70 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadb71 call 0x12aa34c0 */
  push32(0x12aadb76u); f_12aa34c0();
  /* 12aadb76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aadb79:;
  /* 12aadb79 pop ebp */
  EBP = (pop32());
  /* 12aadb7a ret  */
  ESPCHK(0x12aad870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x12aadb80 (678 bytes, 180 insns) */
void f_12aadb80(void) {
  FTRACE(0x12aadb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aadb80 push ebp */
  push32((uint32_t)(EBP));
  /* 12aadb81 mov ebp, esp */
  EBP = (ESP);
  /* 12aadb83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aadb86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aadb8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aadb8f mov ax, word ptr [0x12ace6ea] */
  AX = (r16((uint32_t)(0x12ace6ea)));
  /* 12aadb95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aadb98 cmp dword ptr [0x12ace690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadb9f je 0x12aadcfa */
  if (C.zf) goto L_12aadcfa;
  /* 12aadba5 push 0x12ace6b8 */
  push32((uint32_t)(0x12ace6b8u));
  /* 12aadbaa push 0xe */
  push32((uint32_t)(0xeu));
  /* 12aadbac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadbaf push ecx */
  push32((uint32_t)(ECX));
  /* 12aadbb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aadbb2 call 0x12ab0bf0 */
  push32(0x12aadbb7u); f_12ab0bf0();
  /* 12aadbb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadbba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aadbbd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12aadbbf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aadbc2 push 0x12ace6bc */
  push32((uint32_t)(0x12ace6bcu));
  /* 12aadbc7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12aadbc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadbcc push eax */
  push32((uint32_t)(EAX));
  /* 12aadbcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12aadbcf call 0x12ab0bf0 */
  push32(0x12aadbd4u); f_12ab0bf0();
  /* 12aadbd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadbd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aadbda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aadbdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aadbdf push 0x12ace6c0 */
  push32((uint32_t)(0x12ace6c0u));
  /* 12aadbe4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12aadbe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadbe9 push edx */
  push32((uint32_t)(EDX));
  /* 12aadbea push 1 */
  push32((uint32_t)(0x1u));
  /* 12aadbec call 0x12ab0bf0 */
  push32(0x12aadbf1u); f_12ab0bf0();
  /* 12aadbf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadbf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aadbf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aadbf9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aadbfc mov edx, dword ptr [0x12ace6c0] */
  EDX = (r32((uint32_t)(0x12ace6c0)));
  /* 12aadc02 push edx */
  push32((uint32_t)(EDX));
  /* 12aadc03 call 0x12aade30 */
  push32(0x12aadc08u); f_12aade30();
  /* 12aadc08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadc0f je 0x12aadc69 */
  if (C.zf) goto L_12aadc69;
  /* 12aadc11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc13 mov eax, dword ptr [0x12ace6b8] */
  EAX = (r32((uint32_t)(0x12ace6b8)));
  /* 12aadc18 push eax */
  push32((uint32_t)(EAX));
  /* 12aadc19 call 0x12aa34c0 */
  push32(0x12aadc1eu); f_12aa34c0();
  /* 12aadc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc21 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc23 mov ecx, dword ptr [0x12ace6bc] */
  ECX = (r32((uint32_t)(0x12ace6bc)));
  /* 12aadc29 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadc2a call 0x12aa34c0 */
  push32(0x12aadc2fu); f_12aa34c0();
  /* 12aadc2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc34 mov edx, dword ptr [0x12ace6c0] */
  EDX = (r32((uint32_t)(0x12ace6c0)));
  /* 12aadc3a push edx */
  push32((uint32_t)(EDX));
  /* 12aadc3b call 0x12aa34c0 */
  push32(0x12aadc40u); f_12aa34c0();
  /* 12aadc40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc43 mov dword ptr [0x12ace6b8], 0 */
  w32((uint32_t)(0x12ace6b8), (0x0u));
  /* 12aadc4d mov dword ptr [0x12ace6bc], 0 */
  w32((uint32_t)(0x12ace6bc), (0x0u));
  /* 12aadc57 mov dword ptr [0x12ace6c0], 0 */
  w32((uint32_t)(0x12ace6c0), (0x0u));
  /* 12aadc61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aadc64 jmp 0x12aade22 */
  goto L_12aade22;
L_12aadc69:;
  /* 12aadc69 mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadc6e cmp dword ptr [eax], 0x12acdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12acdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadc74 je 0x12aadcb0 */
  if (C.zf) goto L_12aadcb0;
  /* 12aadc76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc78 mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadc7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aadc80 push edx */
  push32((uint32_t)(EDX));
  /* 12aadc81 call 0x12aa34c0 */
  push32(0x12aadc86u); f_12aa34c0();
  /* 12aadc86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc8b mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadc90 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aadc93 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadc94 call 0x12aa34c0 */
  push32(0x12aadc99u); f_12aa34c0();
  /* 12aadc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadc9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadc9e mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadca4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aadca7 push eax */
  push32((uint32_t)(EAX));
  /* 12aadca8 call 0x12aa34c0 */
  push32(0x12aadcadu); f_12aa34c0();
  /* 12aadcad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aadcb0:;
  /* 12aadcb0 mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadcb6 mov edx, dword ptr [0x12ace6b8] */
  EDX = (r32((uint32_t)(0x12ace6b8)));
  /* 12aadcbc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aadcbe mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadcc3 mov ecx, dword ptr [0x12ace6bc] */
  ECX = (r32((uint32_t)(0x12ace6bc)));
  /* 12aadcc9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12aadccc mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadcd2 mov eax, dword ptr [0x12ace6c0] */
  EAX = (r32((uint32_t)(0x12ace6c0)));
  /* 12aadcd7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aadcda mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadce0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aadce2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aadce4 mov byte ptr [0x12accea8], al */
  w8((uint32_t)(0x12accea8), (AL));
  /* 12aadce9 mov dword ptr [0x12acceac], 1 */
  w32((uint32_t)(0x12acceac), (0x1u));
  /* 12aadcf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aadcf5 jmp 0x12aade22 */
  goto L_12aade22;
L_12aadcfa:;
  /* 12aadcfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadcfc mov ecx, dword ptr [0x12ace6b8] */
  ECX = (r32((uint32_t)(0x12ace6b8)));
  /* 12aadd02 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadd03 call 0x12aa34c0 */
  push32(0x12aadd08u); f_12aa34c0();
  /* 12aadd08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadd0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd0d mov edx, dword ptr [0x12ace6bc] */
  EDX = (r32((uint32_t)(0x12ace6bc)));
  /* 12aadd13 push edx */
  push32((uint32_t)(EDX));
  /* 12aadd14 call 0x12aa34c0 */
  push32(0x12aadd19u); f_12aa34c0();
  /* 12aadd19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadd1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd1e mov eax, dword ptr [0x12ace6c0] */
  EAX = (r32((uint32_t)(0x12ace6c0)));
  /* 12aadd23 push eax */
  push32((uint32_t)(EAX));
  /* 12aadd24 call 0x12aa34c0 */
  push32(0x12aadd29u); f_12aa34c0();
  /* 12aadd29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadd2c mov dword ptr [0x12ace6b8], 0 */
  w32((uint32_t)(0x12ace6b8), (0x0u));
  /* 12aadd36 mov dword ptr [0x12ace6bc], 0 */
  w32((uint32_t)(0x12ace6bc), (0x0u));
  /* 12aadd40 mov dword ptr [0x12ace6c0], 0 */
  w32((uint32_t)(0x12ace6c0), (0x0u));
  /* 12aadd4a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12aadd4f push 0x12ac9ff4 */
  push32((uint32_t)(0x12ac9ff4u));
  /* 12aadd54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd58 call 0x12aa2a30 */
  push32(0x12aadd5du); f_12aa2a30();
  /* 12aadd5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadd60 mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadd66 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aadd68 mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadd6e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadd71 jne 0x12aadd7b */
  if (!C.zf) goto L_12aadd7b;
  /* 12aadd73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aadd76 jmp 0x12aade22 */
  goto L_12aade22;
L_12aadd7b:;
  /* 12aadd7b push 0x12ac9fc4 */
  push32((uint32_t)(0x12ac9fc4u));
  /* 12aadd80 mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadd85 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aadd87 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadd88 call 0x12aa59e0 */
  push32(0x12aadd8du); f_12aa59e0();
  /* 12aadd8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadd90 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12aadd95 push 0x12ac9ff4 */
  push32((uint32_t)(0x12ac9ff4u));
  /* 12aadd9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadd9e call 0x12aa2a30 */
  push32(0x12aadda3u); f_12aa2a30();
  /* 12aadda3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadda6 mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aaddac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12aaddaf mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aaddb4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaddb8 jne 0x12aaddbf */
  if (!C.zf) goto L_12aaddbf;
  /* 12aaddba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaddbd jmp 0x12aade22 */
  goto L_12aade22;
L_12aaddbf:;
  /* 12aaddbf mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aaddc5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aaddc8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12aaddcb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12aaddd0 push 0x12ac9ff4 */
  push32((uint32_t)(0x12ac9ff4u));
  /* 12aaddd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aaddd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aaddd9 call 0x12aa2a30 */
  push32(0x12aadddeu); f_12aa2a30();
  /* 12aaddde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadde1 mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadde7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12aaddea mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aaddf0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaddf4 jne 0x12aaddfb */
  if (!C.zf) goto L_12aaddfb;
  /* 12aaddf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaddf9 jmp 0x12aade22 */
  goto L_12aade22;
L_12aaddfb:;
  /* 12aaddfb mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aade00 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aade03 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12aade06 mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aade0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aade0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aade10 mov byte ptr [0x12accea8], cl */
  w8((uint32_t)(0x12accea8), (CL));
  /* 12aade16 mov dword ptr [0x12acceac], 1 */
  w32((uint32_t)(0x12acceac), (0x1u));
  /* 12aade20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aade22:;
  /* 12aade22 mov esp, ebp */
  ESP = (EBP);
  /* 12aade24 pop ebp */
  EBP = (pop32());
  /* 12aade25 ret  */
  ESPCHK(0x12aadb80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12aade30 (125 bytes, 49 insns) */
void f_12aade30(void) {
  FTRACE(0x12aade30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aade30 push ebp */
  push32((uint32_t)(EBP));
  /* 12aade31 mov ebp, esp */
  EBP = (ESP);
  /* 12aade33 push ecx */
  push32((uint32_t)(ECX));
L_12aade34:;
  /* 12aade34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aade3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aade3c je 0x12aadea9 */
  if (C.zf) goto L_12aadea9;
  /* 12aade3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aade44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aade47 jl 0x12aade6d */
  if ((C.sf!=C.of)) goto L_12aade6d;
  /* 12aade49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aade4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aade52 jg 0x12aade6d */
  if ((!C.zf&&C.sf==C.of)) goto L_12aade6d;
  /* 12aade54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aade5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aade5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12aade62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aade68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aade6b jmp 0x12aadea7 */
  goto L_12aadea7;
L_12aade6d:;
  /* 12aade6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aade73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aade76 jne 0x12aade9e */
  if (!C.zf) goto L_12aade9e;
  /* 12aade78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aade7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aade7e:;
  /* 12aade7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aade81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aade84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12aade87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12aade89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aade8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aade8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aade92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aade95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aade98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aade9a jne 0x12aade7e */
  if (!C.zf) goto L_12aade7e;
  /* 12aade9c jmp 0x12aadea7 */
  goto L_12aadea7;
L_12aade9e:;
  /* 12aade9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aadea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12aadea7:;
  /* 12aadea7 jmp 0x12aade34 */
  goto L_12aade34;
L_12aadea9:;
  /* 12aadea9 mov esp, ebp */
  ESP = (EBP);
  /* 12aadeab pop ebp */
  EBP = (pop32());
  /* 12aadeac ret  */
  ESPCHK(0x12aade30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x12aadeb0 (304 bytes, 85 insns) */
void f_12aadeb0(void) {
  FTRACE(0x12aadeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aadeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aadeb1 mov ebp, esp */
  EBP = (ESP);
  /* 12aadeb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadeb4 cmp dword ptr [0x12ace68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadebb je 0x12aadf7c */
  if (C.zf) goto L_12aadf7c;
  /* 12aadec1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12aadec3 push 0x12aca000 */
  push32((uint32_t)(0x12aca000u));
  /* 12aadec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadeca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12aadecc push 1 */
  push32((uint32_t)(0x1u));
  /* 12aadece call 0x12aa2e40 */
  push32(0x12aaded3u); f_12aa2e40();
  /* 12aaded3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaded6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaded9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadedd jne 0x12aadee9 */
  if (!C.zf) goto L_12aadee9;
  /* 12aadedf mov eax, 1 */
  EAX = (0x1u);
  /* 12aadee4 jmp 0x12aadfdc */
  goto L_12aadfdc;
L_12aadee9:;
  /* 12aadee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadeec push eax */
  push32((uint32_t)(EAX));
  /* 12aadeed call 0x12aadfe0 */
  push32(0x12aadef2u); f_12aadfe0();
  /* 12aadef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadef5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aadef7 je 0x12aadf1d */
  if (C.zf) goto L_12aadf1d;
  /* 12aadef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadefc push ecx */
  push32((uint32_t)(ECX));
  /* 12aadefd call 0x12aae270 */
  push32(0x12aadf02u); f_12aae270();
  /* 12aadf02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadf05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadf07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf0a push edx */
  push32((uint32_t)(EDX));
  /* 12aadf0b call 0x12aa34c0 */
  push32(0x12aadf10u); f_12aa34c0();
  /* 12aadf10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadf13 mov eax, 1 */
  EAX = (0x1u);
  /* 12aadf18 jmp 0x12aadfdc */
  goto L_12aadfdc;
L_12aadf1d:;
  /* 12aadf1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf20 mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aadf28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aadf2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf2d mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aadf36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aadf39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf3c mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf42 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aadf45 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12aadf48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf4b mov dword ptr [0x12acdd88], eax */
  w32((uint32_t)(0x12acdd88), (EAX));
  /* 12aadf50 mov ecx, dword ptr [0x12ace6c4] */
  ECX = (r32((uint32_t)(0x12ace6c4)));
  /* 12aadf56 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadf57 call 0x12aae270 */
  push32(0x12aadf5cu); f_12aae270();
  /* 12aadf5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadf5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadf61 mov edx, dword ptr [0x12ace6c4] */
  EDX = (r32((uint32_t)(0x12ace6c4)));
  /* 12aadf67 push edx */
  push32((uint32_t)(EDX));
  /* 12aadf68 call 0x12aa34c0 */
  push32(0x12aadf6du); f_12aa34c0();
  /* 12aadf6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadf70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aadf73 mov dword ptr [0x12ace6c4], eax */
  w32((uint32_t)(0x12ace6c4), (EAX));
  /* 12aadf78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aadf7a jmp 0x12aadfdc */
  goto L_12aadfdc;
L_12aadf7c:;
  /* 12aadf7c mov ecx, dword ptr [0x12acdd88] */
  ECX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aadf84 mov dword ptr [0x12acdd58], edx */
  w32((uint32_t)(0x12acdd58), (EDX));
  /* 12aadf8a mov eax, dword ptr [0x12acdd88] */
  EAX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aadf92 mov dword ptr [0x12acdd5c], ecx */
  w32((uint32_t)(0x12acdd5c), (ECX));
  /* 12aadf98 mov edx, dword ptr [0x12acdd88] */
  EDX = (r32((uint32_t)(0x12acdd88)));
  /* 12aadf9e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aadfa1 mov dword ptr [0x12acdd60], eax */
  w32((uint32_t)(0x12acdd60), (EAX));
  /* 12aadfa6 mov dword ptr [0x12acdd88], 0x12acdd58 */
  w32((uint32_t)(0x12acdd88), (0x12acdd58u));
  /* 12aadfb0 mov ecx, dword ptr [0x12ace6c4] */
  ECX = (r32((uint32_t)(0x12ace6c4)));
  /* 12aadfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aadfb7 call 0x12aae270 */
  push32(0x12aadfbcu); f_12aae270();
  /* 12aadfbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadfbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12aadfc1 mov edx, dword ptr [0x12ace6c4] */
  EDX = (r32((uint32_t)(0x12ace6c4)));
  /* 12aadfc7 push edx */
  push32((uint32_t)(EDX));
  /* 12aadfc8 call 0x12aa34c0 */
  push32(0x12aadfcdu); f_12aa34c0();
  /* 12aadfcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aadfd0 mov dword ptr [0x12ace6c4], 0 */
  w32((uint32_t)(0x12ace6c4), (0x0u));
  /* 12aadfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aadfdc:;
  /* 12aadfdc mov esp, ebp */
  ESP = (EBP);
  /* 12aadfde pop ebp */
  EBP = (pop32());
  /* 12aadfdf ret  */
  ESPCHK(0x12aadeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x12aadfe0 (525 bytes, 200 insns) */
void f_12aadfe0(void) {
  FTRACE(0x12aadfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aadfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aadfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12aadfe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aadfe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aadfed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aadfef mov ax, word ptr [0x12ace6e4] */
  AX = (r16((uint32_t)(0x12ace6e4)));
  /* 12aadff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aadff8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aadffc jne 0x12aae006 */
  if (!C.zf) goto L_12aae006;
  /* 12aadffe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aae001 jmp 0x12aae1e9 */
  goto L_12aae1e9;
L_12aae006:;
  /* 12aae006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae009 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae00c push ecx */
  push32((uint32_t)(ECX));
  /* 12aae00d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12aae00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae012 push edx */
  push32((uint32_t)(EDX));
  /* 12aae013 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae015 call 0x12ab0bf0 */
  push32(0x12aae01au); f_12ab0bf0();
  /* 12aae01a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae01d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae020 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae022 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae028 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae02b push edx */
  push32((uint32_t)(EDX));
  /* 12aae02c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12aae02e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae031 push eax */
  push32((uint32_t)(EAX));
  /* 12aae032 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae034 call 0x12ab0bf0 */
  push32(0x12aae039u); f_12ab0bf0();
  /* 12aae039 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae03c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae03f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae041 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae047 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae04a push edx */
  push32((uint32_t)(EDX));
  /* 12aae04b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12aae04d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae050 push eax */
  push32((uint32_t)(EAX));
  /* 12aae051 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae053 call 0x12ab0bf0 */
  push32(0x12aae058u); f_12ab0bf0();
  /* 12aae058 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae05b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae05e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae060 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae066 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae069 push edx */
  push32((uint32_t)(EDX));
  /* 12aae06a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12aae06c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae06f push eax */
  push32((uint32_t)(EAX));
  /* 12aae070 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae072 call 0x12ab0bf0 */
  push32(0x12aae077u); f_12ab0bf0();
  /* 12aae077 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae07a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae07d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae07f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae082 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae085 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae088 push edx */
  push32((uint32_t)(EDX));
  /* 12aae089 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12aae08b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae08e push eax */
  push32((uint32_t)(EAX));
  /* 12aae08f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae091 call 0x12ab0bf0 */
  push32(0x12aae096u); f_12ab0bf0();
  /* 12aae096 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae09c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae09e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae0a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae0a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12aae0a7 push eax */
  push32((uint32_t)(EAX));
  /* 12aae0a8 call 0x12aae1f0 */
  push32(0x12aae0adu); f_12aae1f0();
  /* 12aae0ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae0b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae0b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12aae0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae0bc push edx */
  push32((uint32_t)(EDX));
  /* 12aae0bd push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae0bf call 0x12ab0bf0 */
  push32(0x12aae0c4u); f_12ab0bf0();
  /* 12aae0c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae0ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae0cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae0cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae0d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0d5 push edx */
  push32((uint32_t)(EDX));
  /* 12aae0d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12aae0d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae0db push eax */
  push32((uint32_t)(EAX));
  /* 12aae0dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae0de call 0x12ab0bf0 */
  push32(0x12aae0e3u); f_12ab0bf0();
  /* 12aae0e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae0e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae0eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae0ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae0f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae0f4 push edx */
  push32((uint32_t)(EDX));
  /* 12aae0f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12aae0f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae0fa push eax */
  push32((uint32_t)(EAX));
  /* 12aae0fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae0fd call 0x12ab0bf0 */
  push32(0x12aae102u); f_12ab0bf0();
  /* 12aae102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae105 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae108 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae10a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae10d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae110 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae113 push edx */
  push32((uint32_t)(EDX));
  /* 12aae114 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12aae116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae119 push eax */
  push32((uint32_t)(EAX));
  /* 12aae11a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae11c call 0x12ab0bf0 */
  push32(0x12aae121u); f_12ab0bf0();
  /* 12aae121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae124 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae127 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae129 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae12c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae12f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae132 push edx */
  push32((uint32_t)(EDX));
  /* 12aae133 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12aae135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae138 push eax */
  push32((uint32_t)(EAX));
  /* 12aae139 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae13b call 0x12ab0bf0 */
  push32(0x12aae140u); f_12ab0bf0();
  /* 12aae140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae143 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae148 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae14b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae14e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae151 push edx */
  push32((uint32_t)(EDX));
  /* 12aae152 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12aae154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae157 push eax */
  push32((uint32_t)(EAX));
  /* 12aae158 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae15a call 0x12ab0bf0 */
  push32(0x12aae15fu); f_12ab0bf0();
  /* 12aae15f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae162 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae165 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae167 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae16a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae16d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae170 push edx */
  push32((uint32_t)(EDX));
  /* 12aae171 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12aae173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae176 push eax */
  push32((uint32_t)(EAX));
  /* 12aae177 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae179 call 0x12ab0bf0 */
  push32(0x12aae17eu); f_12ab0bf0();
  /* 12aae17e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae181 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae184 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae186 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae18c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae18f push edx */
  push32((uint32_t)(EDX));
  /* 12aae190 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12aae192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae195 push eax */
  push32((uint32_t)(EAX));
  /* 12aae196 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae198 call 0x12ab0bf0 */
  push32(0x12aae19du); f_12ab0bf0();
  /* 12aae19d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae1a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae1a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae1a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae1a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae1ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae1ae push edx */
  push32((uint32_t)(EDX));
  /* 12aae1af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12aae1b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae1b4 push eax */
  push32((uint32_t)(EAX));
  /* 12aae1b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae1b7 call 0x12ab0bf0 */
  push32(0x12aae1bcu); f_12ab0bf0();
  /* 12aae1bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae1bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae1c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae1c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae1c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae1ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae1cd push edx */
  push32((uint32_t)(EDX));
  /* 12aae1ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12aae1d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae1d3 push eax */
  push32((uint32_t)(EAX));
  /* 12aae1d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae1d6 call 0x12ab0bf0 */
  push32(0x12aae1dbu); f_12ab0bf0();
  /* 12aae1db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae1de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae1e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae1e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aae1e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aae1e9:;
  /* 12aae1e9 mov esp, ebp */
  ESP = (EBP);
  /* 12aae1eb pop ebp */
  EBP = (pop32());
  /* 12aae1ec ret  */
  ESPCHK(0x12aadfe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12aae1f0 (125 bytes, 49 insns) */
void f_12aae1f0(void) {
  FTRACE(0x12aae1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aae1f3 push ecx */
  push32((uint32_t)(ECX));
L_12aae1f4:;
  /* 12aae1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae1f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aae1fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aae1fc je 0x12aae269 */
  if (C.zf) goto L_12aae269;
  /* 12aae1fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae201 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aae204 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae207 jl 0x12aae22d */
  if ((C.sf!=C.of)) goto L_12aae22d;
  /* 12aae209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aae20f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae212 jg 0x12aae22d */
  if ((!C.zf&&C.sf==C.of)) goto L_12aae22d;
  /* 12aae214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae217 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aae21a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aae21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae220 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12aae222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae225 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae228 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aae22b jmp 0x12aae267 */
  goto L_12aae267;
L_12aae22d:;
  /* 12aae22d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae230 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aae233 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae236 jne 0x12aae25e */
  if (!C.zf) goto L_12aae25e;
  /* 12aae238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae23b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aae23e:;
  /* 12aae23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae244 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12aae247 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12aae249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae24c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae24f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aae252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae255 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aae258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae25a jne 0x12aae23e */
  if (!C.zf) goto L_12aae23e;
  /* 12aae25c jmp 0x12aae267 */
  goto L_12aae267;
L_12aae25e:;
  /* 12aae25e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae261 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae264 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12aae267:;
  /* 12aae267 jmp 0x12aae1f4 */
  goto L_12aae1f4;
L_12aae269:;
  /* 12aae269 mov esp, ebp */
  ESP = (EBP);
  /* 12aae26b pop ebp */
  EBP = (pop32());
  /* 12aae26c ret  */
  ESPCHK(0x12aae1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x12aae270 (147 bytes, 52 insns) */
void f_12aae270(void) {
  FTRACE(0x12aae270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae270 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae271 mov ebp, esp */
  EBP = (ESP);
  /* 12aae273 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae277 jne 0x12aae27e */
  if (!C.zf) goto L_12aae27e;
  /* 12aae279 jmp 0x12aae301 */
  goto L_12aae301;
L_12aae27e:;
  /* 12aae27e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae281 cmp dword ptr [eax + 0xc], 0x12ace720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12ace720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae288 je 0x12aae301 */
  if (C.zf) goto L_12aae301;
  /* 12aae28a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae28c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae28f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aae292 push edx */
  push32((uint32_t)(EDX));
  /* 12aae293 call 0x12aa34c0 */
  push32(0x12aae298u); f_12aa34c0();
  /* 12aae298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae29b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae29d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aae2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae2a4 call 0x12aa34c0 */
  push32(0x12aae2a9u); f_12aa34c0();
  /* 12aae2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae2ac push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae2ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aae2b4 push eax */
  push32((uint32_t)(EAX));
  /* 12aae2b5 call 0x12aa34c0 */
  push32(0x12aae2bau); f_12aa34c0();
  /* 12aae2ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae2bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aae2c5 push edx */
  push32((uint32_t)(EDX));
  /* 12aae2c6 call 0x12aa34c0 */
  push32(0x12aae2cbu); f_12aa34c0();
  /* 12aae2cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae2ce push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae2d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12aae2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae2d7 call 0x12aa34c0 */
  push32(0x12aae2dcu); f_12aa34c0();
  /* 12aae2dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae2df push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae2e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12aae2e7 push eax */
  push32((uint32_t)(EAX));
  /* 12aae2e8 call 0x12aa34c0 */
  push32(0x12aae2edu); f_12aa34c0();
  /* 12aae2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae2f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae2f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae2f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12aae2f8 push edx */
  push32((uint32_t)(EDX));
  /* 12aae2f9 call 0x12aa34c0 */
  push32(0x12aae2feu); f_12aa34c0();
  /* 12aae2fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aae301:;
  /* 12aae301 pop ebp */
  EBP = (pop32());
  /* 12aae302 ret  */
  ESPCHK(0x12aae270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x12aae310 (928 bytes, 284 insns) */
void f_12aae310(void) {
  FTRACE(0x12aae310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae310 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae311 mov ebp, esp */
  EBP = (ESP);
  /* 12aae313 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aae316 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12aae31d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12aae324 cmp dword ptr [0x12ace688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae32b je 0x12aae661 */
  if (C.zf) goto L_12aae661;
  /* 12aae331 cmp dword ptr [0x12ace698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae338 jne 0x12aae360 */
  if (!C.zf) goto L_12aae360;
  /* 12aae33a push 0x12ace698 */
  push32((uint32_t)(0x12ace698u));
  /* 12aae33f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12aae344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae346 mov ax, word ptr [0x12ace6dc] */
  AX = (r16((uint32_t)(0x12ace6dc)));
  /* 12aae34c push eax */
  push32((uint32_t)(EAX));
  /* 12aae34d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae34f call 0x12ab0bf0 */
  push32(0x12aae354u); f_12ab0bf0();
  /* 12aae354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae359 je 0x12aae360 */
  if (C.zf) goto L_12aae360;
  /* 12aae35b jmp 0x12aae622 */
  goto L_12aae622;
L_12aae360:;
  /* 12aae360 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12aae362 push 0x12aca00c */
  push32((uint32_t)(0x12aca00cu));
  /* 12aae367 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae369 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12aae36e call 0x12aa2a30 */
  push32(0x12aae373u); f_12aa2a30();
  /* 12aae373 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae376 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12aae379 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12aae37b push 0x12aca00c */
  push32((uint32_t)(0x12aca00cu));
  /* 12aae380 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae382 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12aae387 call 0x12aa2a30 */
  push32(0x12aae38cu); f_12aa2a30();
  /* 12aae38c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae38f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12aae392 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12aae394 push 0x12aca00c */
  push32((uint32_t)(0x12aca00cu));
  /* 12aae399 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae39b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12aae3a0 call 0x12aa2a30 */
  push32(0x12aae3a5u); f_12aa2a30();
  /* 12aae3a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae3a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12aae3ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12aae3ad push 0x12aca00c */
  push32((uint32_t)(0x12aca00cu));
  /* 12aae3b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae3b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12aae3b9 call 0x12aa2a30 */
  push32(0x12aae3beu); f_12aa2a30();
  /* 12aae3be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae3c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aae3c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae3c8 je 0x12aae3dc */
  if (C.zf) goto L_12aae3dc;
  /* 12aae3ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae3ce je 0x12aae3dc */
  if (C.zf) goto L_12aae3dc;
  /* 12aae3d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae3d4 je 0x12aae3dc */
  if (C.zf) goto L_12aae3dc;
  /* 12aae3d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae3da jne 0x12aae3e1 */
  if (!C.zf) goto L_12aae3e1;
L_12aae3dc:;
  /* 12aae3dc jmp 0x12aae622 */
  goto L_12aae622;
L_12aae3e1:;
  /* 12aae3e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aae3e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aae3e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12aae3ee jmp 0x12aae3f9 */
  goto L_12aae3f9;
L_12aae3f0:;
  /* 12aae3f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aae3f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae3f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12aae3f9:;
  /* 12aae3f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae400 jge 0x12aae415 */
  if ((C.sf==C.of)) goto L_12aae415;
  /* 12aae402 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae405 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12aae408 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12aae40a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae40d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae410 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aae413 jmp 0x12aae3f0 */
  goto L_12aae3f0;
L_12aae415:;
  /* 12aae415 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12aae418 push eax */
  push32((uint32_t)(EAX));
  /* 12aae419 mov ecx, dword ptr [0x12ace698] */
  ECX = (r32((uint32_t)(0x12ace698)));
  /* 12aae41f push ecx */
  push32((uint32_t)(ECX));
  /* 12aae420 call dword ptr [0x12ad0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0310))), 0x12aae426u);
  /* 12aae426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae428 jne 0x12aae42f */
  if (!C.zf) goto L_12aae42f;
  /* 12aae42a jmp 0x12aae622 */
  goto L_12aae622;
L_12aae42f:;
  /* 12aae42f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae433 jbe 0x12aae43a */
  if ((C.cf||C.zf)) goto L_12aae43a;
  /* 12aae435 jmp 0x12aae622 */
  goto L_12aae622;
L_12aae43a:;
  /* 12aae43a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aae43d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aae443 mov dword ptr [0x12accea4], edx */
  w32((uint32_t)(0x12accea4), (EDX));
  /* 12aae449 cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae450 jle 0x12aae4a9 */
  if ((C.zf||C.sf!=C.of)) goto L_12aae4a9;
  /* 12aae452 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12aae455 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aae458 jmp 0x12aae463 */
  goto L_12aae463;
L_12aae45a:;
  /* 12aae45a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae45d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae460 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12aae463:;
  /* 12aae463 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae468 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aae46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae46c je 0x12aae4a9 */
  if (C.zf) goto L_12aae4a9;
  /* 12aae46e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae471 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aae473 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12aae476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aae478 je 0x12aae4a9 */
  if (C.zf) goto L_12aae4a9;
  /* 12aae47a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae47d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae47f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aae481 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12aae484 jmp 0x12aae48f */
  goto L_12aae48f;
L_12aae486:;
  /* 12aae486 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aae489 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae48c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12aae48f:;
  /* 12aae48f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae492 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae494 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12aae497 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae49a jg 0x12aae4a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aae4a7;
  /* 12aae49c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aae49f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae4a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12aae4a5 jmp 0x12aae486 */
  goto L_12aae486;
L_12aae4a7:;
  /* 12aae4a7 jmp 0x12aae45a */
  goto L_12aae45a;
L_12aae4a9:;
  /* 12aae4a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae4ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae4ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae4af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae4b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae4b5 push eax */
  push32((uint32_t)(EAX));
  /* 12aae4b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aae4bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aae4be push ecx */
  push32((uint32_t)(ECX));
  /* 12aae4bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae4c1 call 0x12aaac60 */
  push32(0x12aae4c6u); f_12aaac60();
  /* 12aae4c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae4cb jne 0x12aae4d2 */
  if (!C.zf) goto L_12aae4d2;
  /* 12aae4cd jmp 0x12aae622 */
  goto L_12aae622;
L_12aae4d2:;
  /* 12aae4d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae4d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12aae4da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aae4dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aae4e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12aae4e7 jmp 0x12aae4f2 */
  goto L_12aae4f2;
L_12aae4e9:;
  /* 12aae4e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aae4ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae4ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12aae4f2:;
  /* 12aae4f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae4f9 jge 0x12aae510 */
  if ((C.sf==C.of)) goto L_12aae510;
  /* 12aae4fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aae4fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12aae502 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12aae505 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aae508 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae50b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12aae50e jmp 0x12aae4e9 */
  goto L_12aae4e9;
L_12aae510:;
  /* 12aae510 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae512 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aae514 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aae517 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae51a push edx */
  push32((uint32_t)(EDX));
  /* 12aae51b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12aae520 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aae523 push eax */
  push32((uint32_t)(EAX));
  /* 12aae524 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae526 call 0x12ab0e90 */
  push32(0x12aae52bu); f_12ab0e90();
  /* 12aae52b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae52e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae530 jne 0x12aae537 */
  if (!C.zf) goto L_12aae537;
  /* 12aae532 jmp 0x12aae622 */
  goto L_12aae622;
L_12aae537:;
  /* 12aae537 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aae53a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12aae53f cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae546 jle 0x12aae5a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12aae5a3;
  /* 12aae548 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12aae54b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aae54e jmp 0x12aae559 */
  goto L_12aae559;
L_12aae550:;
  /* 12aae550 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae553 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae556 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12aae559:;
  /* 12aae559 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae55c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aae55e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aae560 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aae562 je 0x12aae5a3 */
  if (C.zf) goto L_12aae5a3;
  /* 12aae564 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae567 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae569 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12aae56c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aae56e je 0x12aae5a3 */
  if (C.zf) goto L_12aae5a3;
  /* 12aae570 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae575 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aae577 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aae57a jmp 0x12aae585 */
  goto L_12aae585;
L_12aae57c:;
  /* 12aae57c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aae57f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae582 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12aae585:;
  /* 12aae585 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aae588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae58a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12aae58d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae590 jg 0x12aae5a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aae5a1;
  /* 12aae592 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aae595 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae598 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12aae59f jmp 0x12aae57c */
  goto L_12aae57c;
L_12aae5a1:;
  /* 12aae5a1 jmp 0x12aae550 */
  goto L_12aae550;
L_12aae5a3:;
  /* 12aae5a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae5a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae5a9 mov dword ptr [0x12accc98], eax */
  w32((uint32_t)(0x12accc98), (EAX));
  /* 12aae5ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aae5b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae5b4 mov dword ptr [0x12accc9c], ecx */
  w32((uint32_t)(0x12accc9c), (ECX));
  /* 12aae5ba cmp dword ptr [0x12ace6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae5c1 je 0x12aae5d4 */
  if (C.zf) goto L_12aae5d4;
  /* 12aae5c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae5c5 mov edx, dword ptr [0x12ace6c8] */
  EDX = (r32((uint32_t)(0x12ace6c8)));
  /* 12aae5cb push edx */
  push32((uint32_t)(EDX));
  /* 12aae5cc call 0x12aa34c0 */
  push32(0x12aae5d1u); f_12aa34c0();
  /* 12aae5d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aae5d4:;
  /* 12aae5d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae5d7 mov dword ptr [0x12ace6c8], eax */
  w32((uint32_t)(0x12ace6c8), (EAX));
  /* 12aae5dc cmp dword ptr [0x12ace6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae5e3 je 0x12aae5f6 */
  if (C.zf) goto L_12aae5f6;
  /* 12aae5e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae5e7 mov ecx, dword ptr [0x12ace6cc] */
  ECX = (r32((uint32_t)(0x12ace6cc)));
  /* 12aae5ed push ecx */
  push32((uint32_t)(ECX));
  /* 12aae5ee call 0x12aa34c0 */
  push32(0x12aae5f3u); f_12aa34c0();
  /* 12aae5f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aae5f6:;
  /* 12aae5f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aae5f9 mov dword ptr [0x12ace6cc], edx */
  w32((uint32_t)(0x12ace6cc), (EDX));
  /* 12aae5ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae601 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aae604 push eax */
  push32((uint32_t)(EAX));
  /* 12aae605 call 0x12aa34c0 */
  push32(0x12aae60au); f_12aa34c0();
  /* 12aae60a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae60d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae60f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aae612 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae613 call 0x12aa34c0 */
  push32(0x12aae618u); f_12aa34c0();
  /* 12aae618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae61b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae61d jmp 0x12aae6ac */
  goto L_12aae6ac;
L_12aae622:;
  /* 12aae622 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae624 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12aae627 push edx */
  push32((uint32_t)(EDX));
  /* 12aae628 call 0x12aa34c0 */
  push32(0x12aae62du); f_12aa34c0();
  /* 12aae62d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae630 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae632 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12aae635 push eax */
  push32((uint32_t)(EAX));
  /* 12aae636 call 0x12aa34c0 */
  push32(0x12aae63bu); f_12aa34c0();
  /* 12aae63b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae63e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae640 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aae643 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae644 call 0x12aa34c0 */
  push32(0x12aae649u); f_12aa34c0();
  /* 12aae649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae64c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae64e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aae651 push edx */
  push32((uint32_t)(EDX));
  /* 12aae652 call 0x12aa34c0 */
  push32(0x12aae657u); f_12aa34c0();
  /* 12aae657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae65a mov eax, 1 */
  EAX = (0x1u);
  /* 12aae65f jmp 0x12aae6ac */
  goto L_12aae6ac;
L_12aae661:;
  /* 12aae661 mov dword ptr [0x12accc98], 0x12accca2 */
  w32((uint32_t)(0x12accc98), (0x12accca2u));
  /* 12aae66b mov dword ptr [0x12accc9c], 0x12accca2 */
  w32((uint32_t)(0x12accc9c), (0x12accca2u));
  /* 12aae675 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae677 mov eax, dword ptr [0x12ace6c8] */
  EAX = (r32((uint32_t)(0x12ace6c8)));
  /* 12aae67c push eax */
  push32((uint32_t)(EAX));
  /* 12aae67d call 0x12aa34c0 */
  push32(0x12aae682u); f_12aa34c0();
  /* 12aae682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae685 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aae687 mov ecx, dword ptr [0x12ace6cc] */
  ECX = (r32((uint32_t)(0x12ace6cc)));
  /* 12aae68d push ecx */
  push32((uint32_t)(ECX));
  /* 12aae68e call 0x12aa34c0 */
  push32(0x12aae693u); f_12aa34c0();
  /* 12aae693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae696 mov dword ptr [0x12ace6c8], 0 */
  w32((uint32_t)(0x12ace6c8), (0x0u));
  /* 12aae6a0 mov dword ptr [0x12ace6cc], 0 */
  w32((uint32_t)(0x12ace6cc), (0x0u));
  /* 12aae6aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aae6ac:;
  /* 12aae6ac mov esp, ebp */
  ESP = (EBP);
  /* 12aae6ae pop ebp */
  EBP = (pop32());
  /* 12aae6af ret  */
  ESPCHK(0x12aae310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6b0 @ 0x12aae6b0 (7 bytes, 5 insns) */
void f_12aae6b0(void) {
  FTRACE(0x12aae6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aae6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae6b5 pop ebp */
  EBP = (pop32());
  /* 12aae6b6 ret  */
  ESPCHK(0x12aae6b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12aae6c0 (129 bytes, 56 insns) */
void f_12aae6c0(void) {
  FTRACE(0x12aae6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae6c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aae6c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aae6c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12aae6ce jne 0x12aae70c */
  if (!C.zf) goto L_12aae70c;
L_12aae6d0:;
  /* 12aae6d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aae6d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae6d4 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae6d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae6d8 je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae6da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae6dd jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae6df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12aae6e1 je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae6e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12aae6e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae6e9 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae6eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae6ed je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae6ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae6f2 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae6f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae6f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae6fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12aae6fc jne 0x12aae6d0 */
  if (!C.zf) goto L_12aae6d0;
  /* 12aae6fe mov edi, edi */
  EDI = (EDI);
L_12aae700:;
  /* 12aae700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae702 ret  */
  ESPCHK(0x12aae6c0u, _esp0);
  ESP += 4; return;
  /* 12aae703 nop  */
  /* nop */
L_12aae704:;
  /* 12aae704 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aae706 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aae708 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12aae709 ret  */
  ESPCHK(0x12aae6c0u, _esp0);
  ESP += 4; return;
  /* 12aae70a mov edi, edi */
  EDI = (EDI);
L_12aae70c:;
  /* 12aae70c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12aae712 je 0x12aae728 */
  if (C.zf) goto L_12aae728;
  /* 12aae714 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aae716 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12aae717 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae719 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae71b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12aae71c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae71e je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae720 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12aae726 je 0x12aae6d0 */
  if (C.zf) goto L_12aae6d0;
L_12aae728:;
  /* 12aae728 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12aae72b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae72e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae730 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae732 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae734 je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae736 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae739 jne 0x12aae704 */
  if (!C.zf) goto L_12aae704;
  /* 12aae73b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12aae73d je 0x12aae700 */
  if (C.zf) goto L_12aae700;
  /* 12aae73f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae742 jmp 0x12aae6d0 */
  goto L_12aae6d0;
}

/* FUN_1000e750 @ 0x12aae750 (62 bytes, 35 insns) */
void f_12aae750(void) {
  FTRACE(0x12aae750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae750 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae751 mov ebp, esp */
  EBP = (ESP);
  /* 12aae753 push esi */
  push32((uint32_t)(ESI));
  /* 12aae754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae756 push eax */
  push32((uint32_t)(EAX));
  /* 12aae757 push eax */
  push32((uint32_t)(EAX));
  /* 12aae758 push eax */
  push32((uint32_t)(EAX));
  /* 12aae759 push eax */
  push32((uint32_t)(EAX));
  /* 12aae75a push eax */
  push32((uint32_t)(EAX));
  /* 12aae75b push eax */
  push32((uint32_t)(EAX));
  /* 12aae75c push eax */
  push32((uint32_t)(EAX));
  /* 12aae75d push eax */
  push32((uint32_t)(EAX));
  /* 12aae75e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae761 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aae764:;
  /* 12aae764 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aae766 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae768 je 0x12aae771 */
  if (C.zf) goto L_12aae771;
  /* 12aae76a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12aae76b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12aae76b");
  /* 12aae76f jmp 0x12aae764 */
  goto L_12aae764;
L_12aae771:;
  /* 12aae771 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae774 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aae777 nop  */
  /* nop */
L_12aae778:;
  /* 12aae778 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12aae779 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aae77b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae77d je 0x12aae786 */
  if (C.zf) goto L_12aae786;
  /* 12aae77f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aae780 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12aae780");
  /* 12aae784 jae 0x12aae778 */
  if (!C.cf) goto L_12aae778;
L_12aae786:;
  /* 12aae786 mov eax, ecx */
  EAX = (ECX);
  /* 12aae788 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae78b pop esi */
  ESI = (pop32());
  /* 12aae78c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aae78d ret  */
  ESPCHK(0x12aae750u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12aae790 (56 bytes, 31 insns) */
void f_12aae790(void) {
  FTRACE(0x12aae790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae790 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae791 mov ebp, esp */
  EBP = (ESP);
  /* 12aae793 push edi */
  push32((uint32_t)(EDI));
  /* 12aae794 push esi */
  push32((uint32_t)(ESI));
  /* 12aae795 push ebx */
  push32((uint32_t)(EBX));
  /* 12aae796 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aae799 jecxz 0x12aae7c1 */
  x86_unimpl("jecxz @ 0x12aae799");
  /* 12aae79b mov ebx, ecx */
  EBX = (ECX);
  /* 12aae79d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae7a0 mov esi, edi */
  ESI = (EDI);
  /* 12aae7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae7a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12aae7a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aae7a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae7aa mov edi, esi */
  EDI = (ESI);
  /* 12aae7ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae7af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12aae7b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12aae7b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aae7b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12aae7b9 ja 0x12aae7bf */
  if ((!C.cf&&!C.zf)) goto L_12aae7bf;
  /* 12aae7bb je 0x12aae7c1 */
  if (C.zf) goto L_12aae7c1;
  /* 12aae7bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aae7be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12aae7bf:;
  /* 12aae7bf not ecx */
  ECX = (~(ECX));
L_12aae7c1:;
  /* 12aae7c1 mov eax, ecx */
  EAX = (ECX);
  /* 12aae7c3 pop ebx */
  EBX = (pop32());
  /* 12aae7c4 pop esi */
  ESI = (pop32());
  /* 12aae7c5 pop edi */
  EDI = (pop32());
  /* 12aae7c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aae7c7 ret  */
  ESPCHK(0x12aae790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x12aae7d0 (58 bytes, 32 insns) */
void f_12aae7d0(void) {
  FTRACE(0x12aae7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae7d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aae7d3 push esi */
  push32((uint32_t)(ESI));
  /* 12aae7d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae7d6 push eax */
  push32((uint32_t)(EAX));
  /* 12aae7d7 push eax */
  push32((uint32_t)(EAX));
  /* 12aae7d8 push eax */
  push32((uint32_t)(EAX));
  /* 12aae7d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aae7da push eax */
  push32((uint32_t)(EAX));
  /* 12aae7db push eax */
  push32((uint32_t)(EAX));
  /* 12aae7dc push eax */
  push32((uint32_t)(EAX));
  /* 12aae7dd push eax */
  push32((uint32_t)(EAX));
  /* 12aae7de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae7e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12aae7e4:;
  /* 12aae7e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aae7e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae7e8 je 0x12aae7f1 */
  if (C.zf) goto L_12aae7f1;
  /* 12aae7ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12aae7eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12aae7eb");
  /* 12aae7ef jmp 0x12aae7e4 */
  goto L_12aae7e4;
L_12aae7f1:;
  /* 12aae7f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12aae7f4:;
  /* 12aae7f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aae7f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12aae7f8 je 0x12aae804 */
  if (C.zf) goto L_12aae804;
  /* 12aae7fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aae7fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12aae7fb");
  /* 12aae7ff jae 0x12aae7f4 */
  if (!C.cf) goto L_12aae7f4;
  /* 12aae801 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12aae804:;
  /* 12aae804 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae807 pop esi */
  ESI = (pop32());
  /* 12aae808 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12aae809 ret  */
  ESPCHK(0x12aae7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e810 @ 0x12aae810 (512 bytes, 147 insns) */
void f_12aae810(void) {
  FTRACE(0x12aae810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aae810 push ebp */
  push32((uint32_t)(EBP));
  /* 12aae811 mov ebp, esp */
  EBP = (ESP);
  /* 12aae813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aae816 cmp dword ptr [0x12ace714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae81d jne 0x12aae842 */
  if (!C.zf) goto L_12aae842;
  /* 12aae81f call 0x12aaf2e0 */
  push32(0x12aae824u); f_12aaf2e0();
  /* 12aae824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae826 je 0x12aae832 */
  if (C.zf) goto L_12aae832;
  /* 12aae828 mov eax, dword ptr [0x12ad0250] */
  EAX = (r32((uint32_t)(0x12ad0250)));
  /* 12aae82d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aae830 jmp 0x12aae839 */
  goto L_12aae839;
L_12aae832:;
  /* 12aae832 mov dword ptr [ebp - 8], 0x12aaf330 */
  w32((uint32_t)(EBP + -0x8), (0x12aaf330u));
L_12aae839:;
  /* 12aae839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aae83c mov dword ptr [0x12ace714], ecx */
  w32((uint32_t)(0x12ace714), (ECX));
L_12aae842:;
  /* 12aae842 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae846 jne 0x12aae852 */
  if (!C.zf) goto L_12aae852;
  /* 12aae848 call 0x12aaf130 */
  push32(0x12aae84du); f_12aaf130();
  /* 12aae84d jmp 0x12aae91e */
  goto L_12aae91e;
L_12aae852:;
  /* 12aae852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae855 mov dword ptr [0x12ace704], edx */
  w32((uint32_t)(0x12ace704), (EDX));
  /* 12aae85b cmp dword ptr [0x12ace704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae862 je 0x12aae884 */
  if (C.zf) goto L_12aae884;
  /* 12aae864 mov eax, dword ptr [0x12ace704] */
  EAX = (r32((uint32_t)(0x12ace704)));
  /* 12aae869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aae86c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aae86e je 0x12aae884 */
  if (C.zf) goto L_12aae884;
  /* 12aae870 push 0x12ace704 */
  push32((uint32_t)(0x12ace704u));
  /* 12aae875 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12aae877 push 0x12acda90 */
  push32((uint32_t)(0x12acda90u));
  /* 12aae87c call 0x12aaea10 */
  push32(0x12aae881u); f_12aaea10();
  /* 12aae881 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aae884:;
  /* 12aae884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae887 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae88a mov dword ptr [0x12ace708], edx */
  w32((uint32_t)(0x12ace708), (EDX));
  /* 12aae890 cmp dword ptr [0x12ace708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae897 je 0x12aae8b9 */
  if (C.zf) goto L_12aae8b9;
  /* 12aae899 mov eax, dword ptr [0x12ace708] */
  EAX = (r32((uint32_t)(0x12ace708)));
  /* 12aae89e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aae8a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aae8a3 je 0x12aae8b9 */
  if (C.zf) goto L_12aae8b9;
  /* 12aae8a5 push 0x12ace708 */
  push32((uint32_t)(0x12ace708u));
  /* 12aae8aa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12aae8ac push 0x12acd9d8 */
  push32((uint32_t)(0x12acd9d8u));
  /* 12aae8b1 call 0x12aaea10 */
  push32(0x12aae8b6u); f_12aaea10();
  /* 12aae8b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aae8b9:;
  /* 12aae8b9 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aae8c3 cmp dword ptr [0x12ace704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae8ca je 0x12aae8fd */
  if (C.zf) goto L_12aae8fd;
  /* 12aae8cc mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aae8d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aae8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae8d7 je 0x12aae8fd */
  if (C.zf) goto L_12aae8fd;
  /* 12aae8d9 cmp dword ptr [0x12ace708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae8e0 je 0x12aae8f6 */
  if (C.zf) goto L_12aae8f6;
  /* 12aae8e2 mov ecx, dword ptr [0x12ace708] */
  ECX = (r32((uint32_t)(0x12ace708)));
  /* 12aae8e8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aae8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aae8ed je 0x12aae8f6 */
  if (C.zf) goto L_12aae8f6;
  /* 12aae8ef call 0x12aaeaa0 */
  push32(0x12aae8f4u); f_12aaeaa0();
  /* 12aae8f4 jmp 0x12aae8fb */
  goto L_12aae8fb;
L_12aae8f6:;
  /* 12aae8f6 call 0x12aaee90 */
  push32(0x12aae8fbu); f_12aaee90();
L_12aae8fb:;
  /* 12aae8fb jmp 0x12aae91e */
  goto L_12aae91e;
L_12aae8fd:;
  /* 12aae8fd cmp dword ptr [0x12ace708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae904 je 0x12aae919 */
  if (C.zf) goto L_12aae919;
  /* 12aae906 mov eax, dword ptr [0x12ace708] */
  EAX = (r32((uint32_t)(0x12ace708)));
  /* 12aae90b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aae90e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aae910 je 0x12aae919 */
  if (C.zf) goto L_12aae919;
  /* 12aae912 call 0x12aaf030 */
  push32(0x12aae917u); f_12aaf030();
  /* 12aae917 jmp 0x12aae91e */
  goto L_12aae91e;
L_12aae919:;
  /* 12aae919 call 0x12aaf130 */
  push32(0x12aae91eu); f_12aaf130();
L_12aae91e:;
  /* 12aae91e cmp dword ptr [0x12ace70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae925 jne 0x12aae92e */
  if (!C.zf) goto L_12aae92e;
  /* 12aae927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae929 jmp 0x12aaea0c */
  goto L_12aaea0c;
L_12aae92e:;
  /* 12aae92e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aae931 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae937 push edx */
  push32((uint32_t)(EDX));
  /* 12aae938 call 0x12aaf160 */
  push32(0x12aae93du); f_12aaf160();
  /* 12aae93d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae940 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aae943 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae947 je 0x12aae95c */
  if (C.zf) goto L_12aae95c;
  /* 12aae949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae94c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aae951 push eax */
  push32((uint32_t)(EAX));
  /* 12aae952 call dword ptr [0x12ad02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02c8))), 0x12aae958u);
  /* 12aae958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae95a jne 0x12aae963 */
  if (!C.zf) goto L_12aae963;
L_12aae95c:;
  /* 12aae95c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae95e jmp 0x12aaea0c */
  goto L_12aaea0c;
L_12aae963:;
  /* 12aae963 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aae965 mov ecx, dword ptr [0x12ace6f4] */
  ECX = (r32((uint32_t)(0x12ace6f4)));
  /* 12aae96b push ecx */
  push32((uint32_t)(ECX));
  /* 12aae96c call dword ptr [0x12ad0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0340))), 0x12aae972u);
  /* 12aae972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae974 jne 0x12aae97d */
  if (!C.zf) goto L_12aae97d;
  /* 12aae976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae978 jmp 0x12aaea0c */
  goto L_12aaea0c;
L_12aae97d:;
  /* 12aae97d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae981 je 0x12aae9a8 */
  if (C.zf) goto L_12aae9a8;
  /* 12aae983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae986 mov ax, word ptr [0x12ace6f4] */
  AX = (r16((uint32_t)(0x12ace6f4)));
  /* 12aae98c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12aae98f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae992 mov dx, word ptr [0x12ace710] */
  DX = (r16((uint32_t)(0x12ace710)));
  /* 12aae999 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12aae99d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aae9a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12aae9a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12aae9a8:;
  /* 12aae9a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aae9ac je 0x12aaea07 */
  if (C.zf) goto L_12aaea07;
  /* 12aae9ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12aae9b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aae9b3 push edx */
  push32((uint32_t)(EDX));
  /* 12aae9b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12aae9b9 mov eax, dword ptr [0x12ace6f4] */
  EAX = (r32((uint32_t)(0x12ace6f4)));
  /* 12aae9be push eax */
  push32((uint32_t)(EAX));
  /* 12aae9bf call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aae9c5u);
  /* 12aae9c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae9c7 jne 0x12aae9cd */
  if (!C.zf) goto L_12aae9cd;
  /* 12aae9c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae9cb jmp 0x12aaea0c */
  goto L_12aaea0c;
L_12aae9cd:;
  /* 12aae9cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12aae9cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aae9d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aae9d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12aae9db mov edx, dword ptr [0x12ace710] */
  EDX = (r32((uint32_t)(0x12ace710)));
  /* 12aae9e1 push edx */
  push32((uint32_t)(EDX));
  /* 12aae9e2 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aae9e8u);
  /* 12aae9e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aae9ea jne 0x12aae9f0 */
  if (!C.zf) goto L_12aae9f0;
  /* 12aae9ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aae9ee jmp 0x12aaea0c */
  goto L_12aaea0c;
L_12aae9f0:;
  /* 12aae9f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12aae9f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aae9f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aae9fa push eax */
  push32((uint32_t)(EAX));
  /* 12aae9fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aae9fe push ecx */
  push32((uint32_t)(ECX));
  /* 12aae9ff call 0x12aa5570 */
  push32(0x12aaea04u); f_12aa5570();
  /* 12aaea04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaea07:;
  /* 12aaea07 mov eax, 1 */
  EAX = (0x1u);
L_12aaea0c:;
  /* 12aaea0c mov esp, ebp */
  ESP = (EBP);
  /* 12aaea0e pop ebp */
  EBP = (pop32());
  /* 12aaea0f ret  */
  ESPCHK(0x12aae810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x12aaea10 (130 bytes, 47 insns) */
void f_12aaea10(void) {
  FTRACE(0x12aaea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaea10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaea11 mov ebp, esp */
  EBP = (ESP);
  /* 12aaea13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaea16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12aaea1d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12aaea24:;
  /* 12aaea24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaea27 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaea2a jg 0x12aaea8e */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaea8e;
  /* 12aaea2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaea30 je 0x12aaea8e */
  if (C.zf) goto L_12aaea8e;
  /* 12aaea32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaea35 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaea38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaea39 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaea3b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aaea3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaea40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaea43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaea46 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12aaea49 push eax */
  push32((uint32_t)(EAX));
  /* 12aaea4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaea4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aaea4f push edx */
  push32((uint32_t)(EDX));
  /* 12aaea50 call 0x12ab1100 */
  push32(0x12aaea55u); f_12ab1100();
  /* 12aaea55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaea58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aaea5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaea5f jne 0x12aaea72 */
  if (!C.zf) goto L_12aaea72;
  /* 12aaea61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaea64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaea67 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12aaea6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaea6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aaea70 jmp 0x12aaea8c */
  goto L_12aaea8c;
L_12aaea72:;
  /* 12aaea72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaea76 jge 0x12aaea83 */
  if ((C.sf==C.of)) goto L_12aaea83;
  /* 12aaea78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaea7b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaea7e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12aaea81 jmp 0x12aaea8c */
  goto L_12aaea8c;
L_12aaea83:;
  /* 12aaea83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaea86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaea89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12aaea8c:;
  /* 12aaea8c jmp 0x12aaea24 */
  goto L_12aaea24;
L_12aaea8e:;
  /* 12aaea8e mov esp, ebp */
  ESP = (EBP);
  /* 12aaea90 pop ebp */
  EBP = (pop32());
  /* 12aaea91 ret  */
  ESPCHK(0x12aaea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x12aaeaa0 (186 bytes, 50 insns) */
void f_12aaeaa0(void) {
  FTRACE(0x12aaeaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaeaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaeaa1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaeaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaeaa4 mov eax, dword ptr [0x12ace704] */
  EAX = (r32((uint32_t)(0x12ace704)));
  /* 12aaeaa9 push eax */
  push32((uint32_t)(EAX));
  /* 12aaeaaa call 0x12aa5860 */
  push32(0x12aaeaafu); f_12aa5860();
  /* 12aaeaaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeab2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaeab4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaeab7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12aaeaba mov dword ptr [0x12ace700], ecx */
  w32((uint32_t)(0x12ace700), (ECX));
  /* 12aaeac0 mov edx, dword ptr [0x12ace708] */
  EDX = (r32((uint32_t)(0x12ace708)));
  /* 12aaeac6 push edx */
  push32((uint32_t)(EDX));
  /* 12aaeac7 call 0x12aa5860 */
  push32(0x12aaeaccu); f_12aa5860();
  /* 12aaeacc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeacf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaead1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaead4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12aaead7 mov dword ptr [0x12ace6f8], ecx */
  w32((uint32_t)(0x12ace6f8), (ECX));
  /* 12aaeadd mov dword ptr [0x12ace6f4], 0 */
  w32((uint32_t)(0x12ace6f4), (0x0u));
  /* 12aaeae7 cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaeaee je 0x12aaeaf9 */
  if (C.zf) goto L_12aaeaf9;
  /* 12aaeaf0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12aaeaf7 jmp 0x12aaeb0b */
  goto L_12aaeb0b;
L_12aaeaf9:;
  /* 12aaeaf9 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaeaff push edx */
  push32((uint32_t)(EDX));
  /* 12aaeb00 call 0x12aaf540 */
  push32(0x12aaeb05u); f_12aaf540();
  /* 12aaeb05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeb08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aaeb0b:;
  /* 12aaeb0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaeb0e mov dword ptr [0x12ace6fc], eax */
  w32((uint32_t)(0x12ace6fc), (EAX));
  /* 12aaeb13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaeb15 push 0x12aaeb60 */
  push32((uint32_t)(0x12aaeb60u));
  /* 12aaeb1a call dword ptr [0x12ad024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad024c))), 0x12aaeb20u);
  /* 12aaeb20 mov ecx, dword ptr [0x12ace70c] */
  ECX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaeb26 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaeb2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaeb2e je 0x12aaeb4c */
  if (C.zf) goto L_12aaeb4c;
  /* 12aaeb30 mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaeb36 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaeb3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaeb3e je 0x12aaeb4c */
  if (C.zf) goto L_12aaeb4c;
  /* 12aaeb40 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaeb45 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaeb48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaeb4a jne 0x12aaeb56 */
  if (!C.zf) goto L_12aaeb56;
L_12aaeb4c:;
  /* 12aaeb4c mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
L_12aaeb56:;
  /* 12aaeb56 mov esp, ebp */
  ESP = (EBP);
  /* 12aaeb58 pop ebp */
  EBP = (pop32());
  /* 12aaeb59 ret  */
  ESPCHK(0x12aaeaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x12aaeb60 (804 bytes, 220 insns) */
void f_12aaeb60(void) {
  FTRACE(0x12aaeb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaeb60 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaeb61 mov ebp, esp */
  EBP = (ESP);
  /* 12aaeb63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaeb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaeb69 push eax */
  push32((uint32_t)(EAX));
  /* 12aaeb6a call 0x12aaf4c0 */
  push32(0x12aaeb6fu); f_12aaf4c0();
  /* 12aaeb6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeb72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12aaeb75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaeb77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaeb7a push ecx */
  push32((uint32_t)(ECX));
  /* 12aaeb7b mov edx, dword ptr [0x12ace6f8] */
  EDX = (r32((uint32_t)(0x12ace6f8)));
  /* 12aaeb81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaeb83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaeb85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaeb8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeb91 push edx */
  push32((uint32_t)(EDX));
  /* 12aaeb92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaeb95 push eax */
  push32((uint32_t)(EAX));
  /* 12aaeb96 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaeb9cu);
  /* 12aaeb9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaeb9e jne 0x12aaebb4 */
  if (!C.zf) goto L_12aaebb4;
  /* 12aaeba0 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aaebaa mov eax, 1 */
  EAX = (0x1u);
  /* 12aaebaf jmp 0x12aaee7e */
  goto L_12aaee7e;
L_12aaebb4:;
  /* 12aaebb4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaebb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaebb8 mov edx, dword ptr [0x12ace708] */
  EDX = (r32((uint32_t)(0x12ace708)));
  /* 12aaebbe push edx */
  push32((uint32_t)(EDX));
  /* 12aaebbf call 0x12ab1100 */
  push32(0x12aaebc4u); f_12ab1100();
  /* 12aaebc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaebc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaebc9 jne 0x12aaecef */
  if (!C.zf) goto L_12aaecef;
  /* 12aaebcf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaebd1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12aaebd4 push eax */
  push32((uint32_t)(EAX));
  /* 12aaebd5 mov ecx, dword ptr [0x12ace700] */
  ECX = (r32((uint32_t)(0x12ace700)));
  /* 12aaebdb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaebdd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaebdf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaebe5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaebeb push ecx */
  push32((uint32_t)(ECX));
  /* 12aaebec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaebef push edx */
  push32((uint32_t)(EDX));
  /* 12aaebf0 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaebf6u);
  /* 12aaebf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaebf8 jne 0x12aaec0e */
  if (!C.zf) goto L_12aaec0e;
  /* 12aaebfa mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aaec04 mov eax, 1 */
  EAX = (0x1u);
  /* 12aaec09 jmp 0x12aaee7e */
  goto L_12aaee7e;
L_12aaec0e:;
  /* 12aaec0e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12aaec11 push eax */
  push32((uint32_t)(EAX));
  /* 12aaec12 mov ecx, dword ptr [0x12ace704] */
  ECX = (r32((uint32_t)(0x12ace704)));
  /* 12aaec18 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaec19 call 0x12ab1100 */
  push32(0x12aaec1eu); f_12ab1100();
  /* 12aaec1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaec21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaec23 jne 0x12aaec50 */
  if (!C.zf) goto L_12aaec50;
  /* 12aaec25 mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaec2b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaec31 mov dword ptr [0x12ace70c], edx */
  w32((uint32_t)(0x12ace70c), (EDX));
  /* 12aaec37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaec3a mov dword ptr [0x12ace710], eax */
  w32((uint32_t)(0x12ace710), (EAX));
  /* 12aaec3f mov ecx, dword ptr [0x12ace710] */
  ECX = (r32((uint32_t)(0x12ace710)));
  /* 12aaec45 mov dword ptr [0x12ace6f4], ecx */
  w32((uint32_t)(0x12ace6f4), (ECX));
  /* 12aaec4b jmp 0x12aaecef */
  goto L_12aaecef;
L_12aaec50:;
  /* 12aaec50 mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaec56 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaec59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaec5b jne 0x12aaecef */
  if (!C.zf) goto L_12aaecef;
  /* 12aaec61 cmp dword ptr [0x12ace6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaec68 je 0x12aaecbd */
  if (C.zf) goto L_12aaecbd;
  /* 12aaec6a mov eax, dword ptr [0x12ace6fc] */
  EAX = (r32((uint32_t)(0x12ace6fc)));
  /* 12aaec6f push eax */
  push32((uint32_t)(EAX));
  /* 12aaec70 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaec73 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaec74 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaec7a push edx */
  push32((uint32_t)(EDX));
  /* 12aaec7b call 0x12ab11d0 */
  push32(0x12aaec80u); f_12ab11d0();
  /* 12aaec80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaec83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaec85 jne 0x12aaecbd */
  if (!C.zf) goto L_12aaecbd;
  /* 12aaec87 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaec8c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12aaec8e mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaec93 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaec96 mov dword ptr [0x12ace710], ecx */
  w32((uint32_t)(0x12ace710), (ECX));
  /* 12aaec9c mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaeca2 push edx */
  push32((uint32_t)(EDX));
  /* 12aaeca3 call 0x12aa5860 */
  push32(0x12aaeca8u); f_12aa5860();
  /* 12aaeca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaecab cmp eax, dword ptr [0x12ace6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ace6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaecb1 jne 0x12aaecbb */
  if (!C.zf) goto L_12aaecbb;
  /* 12aaecb3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaecb6 mov dword ptr [0x12ace6f4], eax */
  w32((uint32_t)(0x12ace6f4), (EAX));
L_12aaecbb:;
  /* 12aaecbb jmp 0x12aaecef */
  goto L_12aaecef;
L_12aaecbd:;
  /* 12aaecbd mov ecx, dword ptr [0x12ace70c] */
  ECX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaecc3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaecc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaecc8 jne 0x12aaecef */
  if (!C.zf) goto L_12aaecef;
  /* 12aaecca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaeccd push edx */
  push32((uint32_t)(EDX));
  /* 12aaecce call 0x12aaf200 */
  push32(0x12aaecd3u); f_12aaf200();
  /* 12aaecd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaecd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaecd8 je 0x12aaecef */
  if (C.zf) goto L_12aaecef;
  /* 12aaecda mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaecdf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12aaece1 mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaece6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaece9 mov dword ptr [0x12ace710], ecx */
  w32((uint32_t)(0x12ace710), (ECX));
L_12aaecef:;
  /* 12aaecef mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaecf5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaecfb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaed01 je 0x12aaee71 */
  if (C.zf) goto L_12aaee71;
  /* 12aaed07 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaed09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12aaed0c push eax */
  push32((uint32_t)(EAX));
  /* 12aaed0d mov ecx, dword ptr [0x12ace700] */
  ECX = (r32((uint32_t)(0x12ace700)));
  /* 12aaed13 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaed15 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaed17 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaed1d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaed23 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaed24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaed27 push edx */
  push32((uint32_t)(EDX));
  /* 12aaed28 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaed2eu);
  /* 12aaed2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaed30 jne 0x12aaed46 */
  if (!C.zf) goto L_12aaed46;
  /* 12aaed32 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aaed3c mov eax, 1 */
  EAX = (0x1u);
  /* 12aaed41 jmp 0x12aaee7e */
  goto L_12aaee7e;
L_12aaed46:;
  /* 12aaed46 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12aaed49 push eax */
  push32((uint32_t)(EAX));
  /* 12aaed4a mov ecx, dword ptr [0x12ace704] */
  ECX = (r32((uint32_t)(0x12ace704)));
  /* 12aaed50 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaed51 call 0x12ab1100 */
  push32(0x12aaed56u); f_12ab1100();
  /* 12aaed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaed59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaed5b jne 0x12aaee10 */
  if (!C.zf) goto L_12aaee10;
  /* 12aaed61 mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaed67 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12aaed6a mov dword ptr [0x12ace70c], edx */
  w32((uint32_t)(0x12ace70c), (EDX));
  /* 12aaed70 cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaed77 je 0x12aaed9a */
  if (C.zf) goto L_12aaed9a;
  /* 12aaed79 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaed7e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12aaed81 mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaed86 cmp dword ptr [0x12ace6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaed8d jne 0x12aaed98 */
  if (!C.zf) goto L_12aaed98;
  /* 12aaed8f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaed92 mov dword ptr [0x12ace6f4], ecx */
  w32((uint32_t)(0x12ace6f4), (ECX));
L_12aaed98:;
  /* 12aaed98 jmp 0x12aaee0e */
  goto L_12aaee0e;
L_12aaed9a:;
  /* 12aaed9a cmp dword ptr [0x12ace6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaeda1 je 0x12aaedef */
  if (C.zf) goto L_12aaedef;
  /* 12aaeda3 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaeda9 push edx */
  push32((uint32_t)(EDX));
  /* 12aaedaa call 0x12aa5860 */
  push32(0x12aaedafu); f_12aa5860();
  /* 12aaedaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaedb2 cmp eax, dword ptr [0x12ace6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ace6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaedb8 jne 0x12aaedef */
  if (!C.zf) goto L_12aaedef;
  /* 12aaedba push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaedbc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaedbf push eax */
  push32((uint32_t)(EAX));
  /* 12aaedc0 call 0x12aaf250 */
  push32(0x12aaedc5u); f_12aaf250();
  /* 12aaedc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaedc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaedca je 0x12aaeded */
  if (C.zf) goto L_12aaeded;
  /* 12aaedcc mov ecx, dword ptr [0x12ace70c] */
  ECX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaedd2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12aaedd5 mov dword ptr [0x12ace70c], ecx */
  w32((uint32_t)(0x12ace70c), (ECX));
  /* 12aaeddb cmp dword ptr [0x12ace6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaede2 jne 0x12aaeded */
  if (!C.zf) goto L_12aaeded;
  /* 12aaede4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaede7 mov dword ptr [0x12ace6f4], edx */
  w32((uint32_t)(0x12ace6f4), (EDX));
L_12aaeded:;
  /* 12aaeded jmp 0x12aaee0e */
  goto L_12aaee0e;
L_12aaedef:;
  /* 12aaedef mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaedf4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12aaedf7 mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaedfc cmp dword ptr [0x12ace6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaee03 jne 0x12aaee0e */
  if (!C.zf) goto L_12aaee0e;
  /* 12aaee05 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaee08 mov dword ptr [0x12ace6f4], ecx */
  w32((uint32_t)(0x12ace6f4), (ECX));
L_12aaee0e:;
  /* 12aaee0e jmp 0x12aaee71 */
  goto L_12aaee71;
L_12aaee10:;
  /* 12aaee10 cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaee17 jne 0x12aaee71 */
  if (!C.zf) goto L_12aaee71;
  /* 12aaee19 cmp dword ptr [0x12ace6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaee20 je 0x12aaee71 */
  if (C.zf) goto L_12aaee71;
  /* 12aaee22 mov edx, dword ptr [0x12ace6fc] */
  EDX = (r32((uint32_t)(0x12ace6fc)));
  /* 12aaee28 push edx */
  push32((uint32_t)(EDX));
  /* 12aaee29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12aaee2c push eax */
  push32((uint32_t)(EAX));
  /* 12aaee2d mov ecx, dword ptr [0x12ace704] */
  ECX = (r32((uint32_t)(0x12ace704)));
  /* 12aaee33 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaee34 call 0x12ab11d0 */
  push32(0x12aaee39u); f_12ab11d0();
  /* 12aaee39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaee3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaee3e jne 0x12aaee71 */
  if (!C.zf) goto L_12aaee71;
  /* 12aaee40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaee42 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaee45 push edx */
  push32((uint32_t)(EDX));
  /* 12aaee46 call 0x12aaf250 */
  push32(0x12aaee4bu); f_12aaf250();
  /* 12aaee4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaee4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaee50 je 0x12aaee71 */
  if (C.zf) goto L_12aaee71;
  /* 12aaee52 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaee57 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12aaee5a mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaee5f cmp dword ptr [0x12ace6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaee66 jne 0x12aaee71 */
  if (!C.zf) goto L_12aaee71;
  /* 12aaee68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaee6b mov dword ptr [0x12ace6f4], ecx */
  w32((uint32_t)(0x12ace6f4), (ECX));
L_12aaee71:;
  /* 12aaee71 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaee76 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaee79 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaee7b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaee7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12aaee7e:;
  /* 12aaee7e mov esp, ebp */
  ESP = (EBP);
  /* 12aaee80 pop ebp */
  EBP = (pop32());
  /* 12aaee81 ret 4 */
  ESPCHK(0x12aaeb60u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ee90 @ 0x12aaee90 (116 bytes, 33 insns) */
void f_12aaee90(void) {
  FTRACE(0x12aaee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaee90 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaee91 mov ebp, esp */
  EBP = (ESP);
  /* 12aaee93 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaee94 mov eax, dword ptr [0x12ace704] */
  EAX = (r32((uint32_t)(0x12ace704)));
  /* 12aaee99 push eax */
  push32((uint32_t)(EAX));
  /* 12aaee9a call 0x12aa5860 */
  push32(0x12aaee9fu); f_12aa5860();
  /* 12aaee9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaeea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaeea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12aaeeaa mov dword ptr [0x12ace700], ecx */
  w32((uint32_t)(0x12ace700), (ECX));
  /* 12aaeeb0 cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaeeb7 je 0x12aaeec2 */
  if (C.zf) goto L_12aaeec2;
  /* 12aaeeb9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12aaeec0 jmp 0x12aaeed4 */
  goto L_12aaeed4;
L_12aaeec2:;
  /* 12aaeec2 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaeec8 push edx */
  push32((uint32_t)(EDX));
  /* 12aaeec9 call 0x12aaf540 */
  push32(0x12aaeeceu); f_12aaf540();
  /* 12aaeece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aaeed4:;
  /* 12aaeed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaeed7 mov dword ptr [0x12ace6fc], eax */
  w32((uint32_t)(0x12ace6fc), (EAX));
  /* 12aaeedc push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaeede push 0x12aaef10 */
  push32((uint32_t)(0x12aaef10u));
  /* 12aaeee3 call dword ptr [0x12ad024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad024c))), 0x12aaeee9u);
  /* 12aaeee9 mov ecx, dword ptr [0x12ace70c] */
  ECX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaeeef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaeef2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaeef4 jne 0x12aaef00 */
  if (!C.zf) goto L_12aaef00;
  /* 12aaeef6 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
L_12aaef00:;
  /* 12aaef00 mov esp, ebp */
  ESP = (EBP);
  /* 12aaef02 pop ebp */
  EBP = (pop32());
  /* 12aaef03 ret  */
  ESPCHK(0x12aaee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef10 @ 0x12aaef10 (287 bytes, 86 insns) */
void f_12aaef10(void) {
  FTRACE(0x12aaef10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaef10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaef11 mov ebp, esp */
  EBP = (ESP);
  /* 12aaef13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaef16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaef19 push eax */
  push32((uint32_t)(EAX));
  /* 12aaef1a call 0x12aaf4c0 */
  push32(0x12aaef1fu); f_12aaf4c0();
  /* 12aaef1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaef22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12aaef25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaef27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaef2a push ecx */
  push32((uint32_t)(ECX));
  /* 12aaef2b mov edx, dword ptr [0x12ace700] */
  EDX = (r32((uint32_t)(0x12ace700)));
  /* 12aaef31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaef33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaef35 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaef3b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaef41 push edx */
  push32((uint32_t)(EDX));
  /* 12aaef42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaef45 push eax */
  push32((uint32_t)(EAX));
  /* 12aaef46 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaef4cu);
  /* 12aaef4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaef4e jne 0x12aaef64 */
  if (!C.zf) goto L_12aaef64;
  /* 12aaef50 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aaef5a mov eax, 1 */
  EAX = (0x1u);
  /* 12aaef5f jmp 0x12aaf029 */
  goto L_12aaf029;
L_12aaef64:;
  /* 12aaef64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaef67 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaef68 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaef6e push edx */
  push32((uint32_t)(EDX));
  /* 12aaef6f call 0x12ab1100 */
  push32(0x12aaef74u); f_12ab1100();
  /* 12aaef74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaef77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaef79 jne 0x12aaefb9 */
  if (!C.zf) goto L_12aaefb9;
  /* 12aaef7b cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaef82 jne 0x12aaef96 */
  if (!C.zf) goto L_12aaef96;
  /* 12aaef84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaef86 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaef89 push eax */
  push32((uint32_t)(EAX));
  /* 12aaef8a call 0x12aaf250 */
  push32(0x12aaef8fu); f_12aaf250();
  /* 12aaef8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaef92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaef94 je 0x12aaefb7 */
  if (C.zf) goto L_12aaefb7;
L_12aaef96:;
  /* 12aaef96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaef99 mov dword ptr [0x12ace710], ecx */
  w32((uint32_t)(0x12ace710), (ECX));
  /* 12aaef9f mov edx, dword ptr [0x12ace710] */
  EDX = (r32((uint32_t)(0x12ace710)));
  /* 12aaefa5 mov dword ptr [0x12ace6f4], edx */
  w32((uint32_t)(0x12ace6f4), (EDX));
  /* 12aaefab mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaefb0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12aaefb2 mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
L_12aaefb7:;
  /* 12aaefb7 jmp 0x12aaf01c */
  goto L_12aaf01c;
L_12aaefb9:;
  /* 12aaefb9 cmp dword ptr [0x12ace700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaefc0 jne 0x12aaf01c */
  if (!C.zf) goto L_12aaf01c;
  /* 12aaefc2 cmp dword ptr [0x12ace6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaefc9 je 0x12aaf01c */
  if (C.zf) goto L_12aaf01c;
  /* 12aaefcb mov ecx, dword ptr [0x12ace6fc] */
  ECX = (r32((uint32_t)(0x12ace6fc)));
  /* 12aaefd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaefd2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12aaefd5 push edx */
  push32((uint32_t)(EDX));
  /* 12aaefd6 mov eax, dword ptr [0x12ace704] */
  EAX = (r32((uint32_t)(0x12ace704)));
  /* 12aaefdb push eax */
  push32((uint32_t)(EAX));
  /* 12aaefdc call 0x12ab11d0 */
  push32(0x12aaefe1u); f_12ab11d0();
  /* 12aaefe1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaefe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaefe6 jne 0x12aaf01c */
  if (!C.zf) goto L_12aaf01c;
  /* 12aaefe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aaefea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaefed push ecx */
  push32((uint32_t)(ECX));
  /* 12aaefee call 0x12aaf250 */
  push32(0x12aaeff3u); f_12aaf250();
  /* 12aaeff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaeff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaeff8 je 0x12aaf01c */
  if (C.zf) goto L_12aaf01c;
  /* 12aaeffa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaeffd mov dword ptr [0x12ace710], edx */
  w32((uint32_t)(0x12ace710), (EDX));
  /* 12aaf003 mov eax, dword ptr [0x12ace710] */
  EAX = (r32((uint32_t)(0x12ace710)));
  /* 12aaf008 mov dword ptr [0x12ace6f4], eax */
  w32((uint32_t)(0x12ace6f4), (EAX));
  /* 12aaf00d mov ecx, dword ptr [0x12ace70c] */
  ECX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf013 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf016 mov dword ptr [0x12ace70c], ecx */
  w32((uint32_t)(0x12ace70c), (ECX));
L_12aaf01c:;
  /* 12aaf01c mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf021 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf024 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaf026 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf028 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12aaf029:;
  /* 12aaf029 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf02b pop ebp */
  EBP = (pop32());
  /* 12aaf02c ret 4 */
  ESPCHK(0x12aaef10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f030 @ 0x12aaf030 (69 bytes, 20 insns) */
void f_12aaf030(void) {
  FTRACE(0x12aaf030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf030 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf031 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf033 mov eax, dword ptr [0x12ace708] */
  EAX = (r32((uint32_t)(0x12ace708)));
  /* 12aaf038 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf039 call 0x12aa5860 */
  push32(0x12aaf03eu); f_12aa5860();
  /* 12aaf03e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf041 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf043 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf046 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12aaf049 mov dword ptr [0x12ace6f8], ecx */
  w32((uint32_t)(0x12ace6f8), (ECX));
  /* 12aaf04f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaf051 push 0x12aaf080 */
  push32((uint32_t)(0x12aaf080u));
  /* 12aaf056 call dword ptr [0x12ad024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad024c))), 0x12aaf05cu);
  /* 12aaf05c mov edx, dword ptr [0x12ace70c] */
  EDX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf062 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf065 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaf067 jne 0x12aaf073 */
  if (!C.zf) goto L_12aaf073;
  /* 12aaf069 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
L_12aaf073:;
  /* 12aaf073 pop ebp */
  EBP = (pop32());
  /* 12aaf074 ret  */
  ESPCHK(0x12aaf030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x12aaf080 (172 bytes, 54 insns) */
void f_12aaf080(void) {
  FTRACE(0x12aaf080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf080 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf081 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf083 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf089 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf08a call 0x12aaf4c0 */
  push32(0x12aaf08fu); f_12aaf4c0();
  /* 12aaf08f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf092 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12aaf095 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaf097 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaf09a push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf09b mov edx, dword ptr [0x12ace6f8] */
  EDX = (r32((uint32_t)(0x12ace6f8)));
  /* 12aaf0a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaf0a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf0a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf0ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf0b1 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf0b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaf0b5 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf0b6 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaf0bcu);
  /* 12aaf0bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf0be jne 0x12aaf0d1 */
  if (!C.zf) goto L_12aaf0d1;
  /* 12aaf0c0 mov dword ptr [0x12ace70c], 0 */
  w32((uint32_t)(0x12ace70c), (0x0u));
  /* 12aaf0ca mov eax, 1 */
  EAX = (0x1u);
  /* 12aaf0cf jmp 0x12aaf126 */
  goto L_12aaf126;
L_12aaf0d1:;
  /* 12aaf0d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12aaf0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf0d5 mov edx, dword ptr [0x12ace708] */
  EDX = (r32((uint32_t)(0x12ace708)));
  /* 12aaf0db push edx */
  push32((uint32_t)(EDX));
  /* 12aaf0dc call 0x12ab1100 */
  push32(0x12aaf0e1u); f_12ab1100();
  /* 12aaf0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf0e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf0e6 jne 0x12aaf119 */
  if (!C.zf) goto L_12aaf119;
  /* 12aaf0e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaf0eb push eax */
  push32((uint32_t)(EAX));
  /* 12aaf0ec call 0x12aaf200 */
  push32(0x12aaf0f1u); f_12aaf200();
  /* 12aaf0f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf0f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf0f6 je 0x12aaf119 */
  if (C.zf) goto L_12aaf119;
  /* 12aaf0f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12aaf0fb mov dword ptr [0x12ace710], ecx */
  w32((uint32_t)(0x12ace710), (ECX));
  /* 12aaf101 mov edx, dword ptr [0x12ace710] */
  EDX = (r32((uint32_t)(0x12ace710)));
  /* 12aaf107 mov dword ptr [0x12ace6f4], edx */
  w32((uint32_t)(0x12ace6f4), (EDX));
  /* 12aaf10d mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf112 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12aaf114 mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
L_12aaf119:;
  /* 12aaf119 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf11e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf121 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aaf123 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf125 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12aaf126:;
  /* 12aaf126 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf128 pop ebp */
  EBP = (pop32());
  /* 12aaf129 ret 4 */
  ESPCHK(0x12aaf080u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f130 @ 0x12aaf130 (43 bytes, 11 insns) */
void f_12aaf130(void) {
  FTRACE(0x12aaf130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf130 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf131 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf133 mov eax, dword ptr [0x12ace70c] */
  EAX = (r32((uint32_t)(0x12ace70c)));
  /* 12aaf138 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf13d mov dword ptr [0x12ace70c], eax */
  w32((uint32_t)(0x12ace70c), (EAX));
  /* 12aaf142 call dword ptr [0x12ad0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0248))), 0x12aaf148u);
  /* 12aaf148 mov dword ptr [0x12ace710], eax */
  w32((uint32_t)(0x12ace710), (EAX));
  /* 12aaf14d mov ecx, dword ptr [0x12ace710] */
  ECX = (r32((uint32_t)(0x12ace710)));
  /* 12aaf153 mov dword ptr [0x12ace6f4], ecx */
  w32((uint32_t)(0x12ace6f4), (ECX));
  /* 12aaf159 pop ebp */
  EBP = (pop32());
  /* 12aaf15a ret  */
  ESPCHK(0x12aaf130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x12aaf160 (155 bytes, 57 insns) */
void f_12aaf160(void) {
  FTRACE(0x12aaf160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf160 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf161 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf166 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf16a je 0x12aaf18b */
  if (C.zf) goto L_12aaf18b;
  /* 12aaf16c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf16f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aaf172 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaf174 je 0x12aaf18b */
  if (C.zf) goto L_12aaf18b;
  /* 12aaf176 push 0x12aca69c */
  push32((uint32_t)(0x12aca69cu));
  /* 12aaf17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf17e push edx */
  push32((uint32_t)(EDX));
  /* 12aaf17f call 0x12aae6c0 */
  push32(0x12aaf184u); f_12aae6c0();
  /* 12aaf184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf187 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf189 jne 0x12aaf1b3 */
  if (!C.zf) goto L_12aaf1b3;
L_12aaf18b:;
  /* 12aaf18b push 8 */
  push32((uint32_t)(0x8u));
  /* 12aaf18d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12aaf190 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf191 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12aaf196 mov ecx, dword ptr [0x12ace710] */
  ECX = (r32((uint32_t)(0x12ace710)));
  /* 12aaf19c push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf19d call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaf1a3u);
  /* 12aaf1a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf1a5 jne 0x12aaf1ab */
  if (!C.zf) goto L_12aaf1ab;
  /* 12aaf1a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf1a9 jmp 0x12aaf1f7 */
  goto L_12aaf1f7;
L_12aaf1ab:;
  /* 12aaf1ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12aaf1ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12aaf1b1 jmp 0x12aaf1eb */
  goto L_12aaf1eb;
L_12aaf1b3:;
  /* 12aaf1b3 push 0x12aca698 */
  push32((uint32_t)(0x12aca698u));
  /* 12aaf1b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf1bb push eax */
  push32((uint32_t)(EAX));
  /* 12aaf1bc call 0x12aae6c0 */
  push32(0x12aaf1c1u); f_12aae6c0();
  /* 12aaf1c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf1c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf1c6 jne 0x12aaf1eb */
  if (!C.zf) goto L_12aaf1eb;
  /* 12aaf1c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12aaf1ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12aaf1cd push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf1ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 12aaf1d0 mov edx, dword ptr [0x12ace710] */
  EDX = (r32((uint32_t)(0x12ace710)));
  /* 12aaf1d6 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf1d7 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaf1ddu);
  /* 12aaf1dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf1df jne 0x12aaf1e5 */
  if (!C.zf) goto L_12aaf1e5;
  /* 12aaf1e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf1e3 jmp 0x12aaf1f7 */
  goto L_12aaf1f7;
L_12aaf1e5:;
  /* 12aaf1e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12aaf1e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12aaf1eb:;
  /* 12aaf1eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf1ee push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf1ef call 0x12ab12e0 */
  push32(0x12aaf1f4u); f_12ab12e0();
  /* 12aaf1f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aaf1f7:;
  /* 12aaf1f7 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf1f9 pop ebp */
  EBP = (pop32());
  /* 12aaf1fa ret  */
  ESPCHK(0x12aaf160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x12aaf200 (79 bytes, 26 insns) */
void f_12aaf200(void) {
  FTRACE(0x12aaf200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf200 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf201 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf206 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12aaf20a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12aaf20e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aaf215 jmp 0x12aaf220 */
  goto L_12aaf220;
L_12aaf217:;
  /* 12aaf217 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf21a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf21d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aaf220:;
  /* 12aaf220 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf224 jae 0x12aaf246 */
  if (!C.cf) goto L_12aaf246;
  /* 12aaf226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf229 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf22f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf234 mov cx, word ptr [eax*2 + 0x12acd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12acd9c4)));
  /* 12aaf23c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf23e jne 0x12aaf244 */
  if (!C.zf) goto L_12aaf244;
  /* 12aaf240 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf242 jmp 0x12aaf24b */
  goto L_12aaf24b;
L_12aaf244:;
  /* 12aaf244 jmp 0x12aaf217 */
  goto L_12aaf217;
L_12aaf246:;
  /* 12aaf246 mov eax, 1 */
  EAX = (0x1u);
L_12aaf24b:;
  /* 12aaf24b mov esp, ebp */
  ESP = (EBP);
  /* 12aaf24d pop ebp */
  EBP = (pop32());
  /* 12aaf24e ret  */
  ESPCHK(0x12aaf200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f250 @ 0x12aaf250 (135 bytes, 48 insns) */
void f_12aaf250(void) {
  FTRACE(0x12aaf250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf250 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf251 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf253 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf256 push esi */
  push32((uint32_t)(ESI));
  /* 12aaf257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf25a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf25f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf264 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf269 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12aaf26c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaf274 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12aaf276 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12aaf279 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf27a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aaf27c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf27f push edx */
  push32((uint32_t)(EDX));
  /* 12aaf280 call dword ptr [0x12ace714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace714))), 0x12aaf286u);
  /* 12aaf286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf288 jne 0x12aaf28e */
  if (!C.zf) goto L_12aaf28e;
  /* 12aaf28a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf28c jmp 0x12aaf2d2 */
  goto L_12aaf2d2;
L_12aaf28e:;
  /* 12aaf28e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12aaf291 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf292 call 0x12aaf4c0 */
  push32(0x12aaf297u); f_12aaf4c0();
  /* 12aaf297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf29a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf29d je 0x12aaf2cd */
  if (C.zf) goto L_12aaf2cd;
  /* 12aaf29f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf2a3 je 0x12aaf2cd */
  if (C.zf) goto L_12aaf2cd;
  /* 12aaf2a5 mov ecx, dword ptr [0x12ace704] */
  ECX = (r32((uint32_t)(0x12ace704)));
  /* 12aaf2ab push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf2ac call 0x12aaf540 */
  push32(0x12aaf2b1u); f_12aaf540();
  /* 12aaf2b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf2b4 mov esi, eax */
  ESI = (EAX);
  /* 12aaf2b6 mov edx, dword ptr [0x12ace704] */
  EDX = (r32((uint32_t)(0x12ace704)));
  /* 12aaf2bc push edx */
  push32((uint32_t)(EDX));
  /* 12aaf2bd call 0x12aa5860 */
  push32(0x12aaf2c2u); f_12aa5860();
  /* 12aaf2c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf2c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf2c7 jne 0x12aaf2cd */
  if (!C.zf) goto L_12aaf2cd;
  /* 12aaf2c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf2cb jmp 0x12aaf2d2 */
  goto L_12aaf2d2;
L_12aaf2cd:;
  /* 12aaf2cd mov eax, 1 */
  EAX = (0x1u);
L_12aaf2d2:;
  /* 12aaf2d2 pop esi */
  ESI = (pop32());
  /* 12aaf2d3 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf2d5 pop ebp */
  EBP = (pop32());
  /* 12aaf2d6 ret  */
  ESPCHK(0x12aaf250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x12aaf2e0 (77 bytes, 18 insns) */
void f_12aaf2e0(void) {
  FTRACE(0x12aaf2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf2e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf2e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf2e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12aaf2f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12aaf2f9 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf2fa call dword ptr [0x12ad0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0244))), 0x12aaf300u);
  /* 12aaf300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aaf302 je 0x12aaf319 */
  if (C.zf) goto L_12aaf319;
  /* 12aaf304 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf30b jne 0x12aaf319 */
  if (!C.zf) goto L_12aaf319;
  /* 12aaf30d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12aaf317 jmp 0x12aaf323 */
  goto L_12aaf323;
L_12aaf319:;
  /* 12aaf319 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12aaf323:;
  /* 12aaf323 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12aaf329 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf32b pop ebp */
  EBP = (pop32());
  /* 12aaf32c ret  */
  ESPCHK(0x12aaf2e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12aaf330 (388 bytes, 118 insns) */
void f_12aaf330(void) {
  FTRACE(0x12aaf330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf330 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf331 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf336 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12aaf33d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12aaf344 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12aaf34b:;
  /* 12aaf34b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf34e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf351 jg 0x12aaf498 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaf498;
  /* 12aaf357 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aaf35a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf35d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12aaf35e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf360 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aaf362 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aaf365 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf368 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf36b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf36e cmp edx, dword ptr [ecx + 0x12acd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12acd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf374 jne 0x12aaf46e */
  if (!C.zf) goto L_12aaf46e;
  /* 12aaf37a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaf37d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aaf380 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf384 ja 0x12aaf3a7 */
  if ((!C.cf&&!C.zf)) goto L_12aaf3a7;
  /* 12aaf386 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf38a je 0x12aaf419 */
  if (C.zf) goto L_12aaf419;
  /* 12aaf390 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf394 je 0x12aaf3c4 */
  if (C.zf) goto L_12aaf3c4;
  /* 12aaf396 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf39a je 0x12aaf3e6 */
  if (C.zf) goto L_12aaf3e6;
  /* 12aaf39c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf3a0 je 0x12aaf408 */
  if (C.zf) goto L_12aaf408;
  /* 12aaf3a2 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf3a7:;
  /* 12aaf3a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf3ae je 0x12aaf3d5 */
  if (C.zf) goto L_12aaf3d5;
  /* 12aaf3b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf3b7 je 0x12aaf3f7 */
  if (C.zf) goto L_12aaf3f7;
  /* 12aaf3b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf3c0 je 0x12aaf42a */
  if (C.zf) goto L_12aaf42a;
  /* 12aaf3c2 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf3c4:;
  /* 12aaf3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf3c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf3ca add ecx, 0x12acd524 */
  { uint32_t _a=(ECX),_b=(0x12acd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf3d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aaf3d3 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf3d5:;
  /* 12aaf3d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf3d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf3db mov eax, dword ptr [edx + 0x12acd52c] */
  EAX = (r32((uint32_t)(EDX + 0x12acd52c)));
  /* 12aaf3e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aaf3e4 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf3e6:;
  /* 12aaf3e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf3e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf3ec add ecx, 0x12acd530 */
  { uint32_t _a=(ECX),_b=(0x12acd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf3f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aaf3f5 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf3f7:;
  /* 12aaf3f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf3fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf3fd mov eax, dword ptr [edx + 0x12acd534] */
  EAX = (r32((uint32_t)(EDX + 0x12acd534)));
  /* 12aaf403 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aaf406 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf408:;
  /* 12aaf408 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf40b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf40e add ecx, 0x12acd538 */
  { uint32_t _a=(ECX),_b=(0x12acd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf414 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aaf417 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf419:;
  /* 12aaf419 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf41c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf41f add edx, 0x12acd53c */
  { uint32_t _a=(EDX),_b=(0x12acd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf425 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aaf428 jmp 0x12aaf438 */
  goto L_12aaf438;
L_12aaf42a:;
  /* 12aaf42a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf42d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf430 add eax, 0x12acd544 */
  { uint32_t _a=(EAX),_b=(0x12acd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf435 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aaf438:;
  /* 12aaf438 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf43c je 0x12aaf444 */
  if (C.zf) goto L_12aaf444;
  /* 12aaf43e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf442 jge 0x12aaf446 */
  if ((C.sf==C.of)) goto L_12aaf446;
L_12aaf444:;
  /* 12aaf444 jmp 0x12aaf498 */
  goto L_12aaf498;
L_12aaf446:;
  /* 12aaf446 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaf449 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf44c push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf44d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf450 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf451 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaf454 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf455 call 0x12aa6250 */
  push32(0x12aaf45au); f_12aa6250();
  /* 12aaf45a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf45d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaf460 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf463 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12aaf467 mov eax, 1 */
  EAX = (0x1u);
  /* 12aaf46c jmp 0x12aaf4ae */
  goto L_12aaf4ae;
L_12aaf46e:;
  /* 12aaf46e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf471 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf477 cmp eax, dword ptr [edx + 0x12acd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12acd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf47d jae 0x12aaf48a */
  if (!C.cf) goto L_12aaf48a;
  /* 12aaf47f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf482 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf485 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aaf488 jmp 0x12aaf493 */
  goto L_12aaf493;
L_12aaf48a:;
  /* 12aaf48a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aaf48d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf490 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12aaf493:;
  /* 12aaf493 jmp 0x12aaf34b */
  goto L_12aaf34b;
L_12aaf498:;
  /* 12aaf498 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aaf49b push eax */
  push32((uint32_t)(EAX));
  /* 12aaf49c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aaf49f push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf4a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aaf4a3 push edx */
  push32((uint32_t)(EDX));
  /* 12aaf4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf4a7 push eax */
  push32((uint32_t)(EAX));
  /* 12aaf4a8 call dword ptr [0x12ad0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0250))), 0x12aaf4aeu);
L_12aaf4ae:;
  /* 12aaf4ae mov esp, ebp */
  ESP = (EBP);
  /* 12aaf4b0 pop ebp */
  EBP = (pop32());
  /* 12aaf4b1 ret 0x10 */
  ESPCHK(0x12aaf330u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f4c0 @ 0x12aaf4c0 (118 bytes, 42 insns) */
void f_12aaf4c0(void) {
  FTRACE(0x12aaf4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf4c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf4c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf4c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aaf4cd:;
  /* 12aaf4cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf4d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aaf4d2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12aaf4d5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf4d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf4dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf4df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aaf4e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aaf4e4 je 0x12aaf52f */
  if (C.zf) goto L_12aaf52f;
  /* 12aaf4e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf4ea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf4ed jl 0x12aaf502 */
  if ((C.sf!=C.of)) goto L_12aaf502;
  /* 12aaf4ef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf4f3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf4f6 jg 0x12aaf502 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaf502;
  /* 12aaf4f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12aaf4fb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaf4fd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12aaf500 jmp 0x12aaf51c */
  goto L_12aaf51c;
L_12aaf502:;
  /* 12aaf502 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf506 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf509 jl 0x12aaf51c */
  if ((C.sf!=C.of)) goto L_12aaf51c;
  /* 12aaf50b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf50f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf512 jg 0x12aaf51c */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaf51c;
  /* 12aaf514 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12aaf517 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12aaf519 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12aaf51c:;
  /* 12aaf51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf51f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12aaf522 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12aaf526 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12aaf52a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaf52d jmp 0x12aaf4cd */
  goto L_12aaf4cd;
L_12aaf52f:;
  /* 12aaf52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aaf532 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf534 pop ebp */
  EBP = (pop32());
  /* 12aaf535 ret  */
  ESPCHK(0x12aaf4c0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12aaf540 (101 bytes, 36 insns) */
void f_12aaf540(void) {
  FTRACE(0x12aaf540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf540 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf541 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aaf546 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aaf54d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf550 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aaf552 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12aaf555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf558 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf55b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12aaf55e:;
  /* 12aaf55e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12aaf562 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf565 jl 0x12aaf570 */
  if ((C.sf!=C.of)) goto L_12aaf570;
  /* 12aaf567 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12aaf56b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf56e jle 0x12aaf582 */
  if ((C.zf||C.sf!=C.of)) goto L_12aaf582;
L_12aaf570:;
  /* 12aaf570 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12aaf574 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf577 jl 0x12aaf59e */
  if ((C.sf!=C.of)) goto L_12aaf59e;
  /* 12aaf579 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12aaf57d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf580 jg 0x12aaf59e */
  if ((!C.zf&&C.sf==C.of)) goto L_12aaf59e;
L_12aaf582:;
  /* 12aaf582 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf588 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aaf58b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf58e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aaf590 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12aaf593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf596 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf599 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12aaf59c jmp 0x12aaf55e */
  goto L_12aaf55e;
L_12aaf59e:;
  /* 12aaf59e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aaf5a1 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf5a3 pop ebp */
  EBP = (pop32());
  /* 12aaf5a4 ret  */
  ESPCHK(0x12aaf540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x12aaf5b0 (122 bytes, 39 insns) */
void f_12aaf5b0(void) {
  FTRACE(0x12aaf5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aaf5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aaf5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aaf5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf5b7 cmp eax, dword ptr [0x12acff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aaf5bd jae 0x12aaf5e1 */
  if (!C.cf) goto L_12aaf5e1;
  /* 12aaf5bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf5c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12aaf5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf5c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12aaf5cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aaf5ce mov eax, dword ptr [ecx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aaf5d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12aaf5da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aaf5dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aaf5df jne 0x12aaf5fc */
  if (!C.zf) goto L_12aaf5fc;
L_12aaf5e1:;
  /* 12aaf5e1 call 0x12aaa900 */
  push32(0x12aaf5e6u); f_12aaa900();
  /* 12aaf5e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12aaf5ec call 0x12aaa910 */
  push32(0x12aaf5f1u); f_12aaa910();
  /* 12aaf5f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aaf5f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aaf5fa jmp 0x12aaf626 */
  goto L_12aaf626;
L_12aaf5fc:;
  /* 12aaf5fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf5ff push edx */
  push32((uint32_t)(EDX));
  /* 12aaf600 call 0x12aac120 */
  push32(0x12aaf605u); f_12aac120();
  /* 12aaf605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf60b push eax */
  push32((uint32_t)(EAX));
  /* 12aaf60c call 0x12aaf630 */
  push32(0x12aaf611u); f_12aaf630();
  /* 12aaf611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aaf617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aaf61a push ecx */
  push32((uint32_t)(ECX));
  /* 12aaf61b call 0x12aac1b0 */
  push32(0x12aaf620u); f_12aac1b0();
  /* 12aaf620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aaf623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aaf626:;
  /* 12aaf626 mov esp, ebp */
  ESP = (EBP);
  /* 12aaf628 pop ebp */
  EBP = (pop32());
  /* 12aaf629 ret  */
  ESPCHK(0x12aaf5b0u, _esp0);
  ESP += 4; return;
}

